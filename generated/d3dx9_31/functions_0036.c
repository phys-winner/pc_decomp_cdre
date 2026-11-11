#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_1718BD3E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718BD3Eu);

L_1718BD3E:
    edi = edi; /* 0x1718BD3E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718BD40: push ebp */
    ebp = esp; /* 0x1718BD41: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x1718BD43: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1718BD46: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1718BD47: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), ebx */ /* 0x1718BD49: cmp dword ptr [ebp + 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1718BDD8; /* 0x1718BD4C: jbe 0x1718bdd8 */
L_1718BD52:
    eax = ebp + 0x8; /* 0x1718BD52: lea eax, [ebp + 8] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1718BD55: mov dword ptr [ebp - 0x14], eax */
    eax = ebp + (-0x4); /* 0x1718BD58: lea eax, [ebp - 4] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1718BD5B: mov dword ptr [ebp - 0x18], eax */
    eax = ebp + (-0x8); /* 0x1718BD5E: lea eax, [ebp - 8] */
    PUSH32(esp, esi); /* 0x1718BD61: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1718BD62: mov esi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1718BD65: mov dword ptr [ebp - 0x1c], eax */
    eax = ebp + 0xC; /* 0x1718BD68: lea eax, [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1718BD6B: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1718BD6C: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1718BD6F: mov dword ptr [ebp - 0x20], eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x1718BD72: add esi, 8 */
    _flag_k = FK_ADD;
L_1718BD75:
    fp_push(*(float*)&MEM32(edi + ebx * 8)); /* 0x1718BD75: fld dword ptr [edi + ebx*8] */
    _st[0] *= (double)*(float*)ADDR(0x1700608C); /* 0x1718BD78: fmul dword ptr [0x1700608c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x1718BD7E: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(edi + ebx * 8 + 0x4)); /* 0x1718BD81: fld dword ptr [edi + ebx*8 + 4] */
    _st[0] = sqrt(_st[0]); /* 0x1718BD85: fsqrt  */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1718BD87: fst dword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_1721B142); /* 0x1718BD8A: call 0x1721b142 */
    RECOMP_FLAGS_IN();
    _st[0] *= (double)*(float*)ADDR(0x170220D4); /* 0x1718BD8F: fmul dword ptr [0x170220d4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1718BD95: fstp dword ptr [ebp - 0xc] */
    eax = MEM32(ebp + (-0x18)); /* 0x1718BD98: mov eax, dword ptr [ebp - 0x18] */
    edx = MEM32(ebp + (-0x14)); /* 0x1718BD9B: mov edx, dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x1718BD9E: fld dword ptr [ebp - 0x10] */
    { double _a = _st[0]; _st[0] = sin(_a); fp_push(cos(_a)); } _fpu_cmp = 1; /* 0x1718BDA1: fsincos  */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x1718BDA3: fstp dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1718BDA5: fstp dword ptr [eax] */
    eax = MEM32(ebp + (-0x20)); /* 0x1718BDA7: mov eax, dword ptr [ebp - 0x20] */
    edx = MEM32(ebp + (-0x1C)); /* 0x1718BDAA: mov edx, dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x1718BDAD: fld dword ptr [ebp - 0xc] */
    { double _a = _st[0]; _st[0] = sin(_a); fp_push(cos(_a)); } _fpu_cmp = 1; /* 0x1718BDB0: fsincos  */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x1718BDB2: fstp dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1718BDB4: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1718BDB6: fld dword ptr [ebp + 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x8); /* 0x1718BDB9: fmul dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x8)); /* 0x1718BDBC: mov eax, dword ptr [ebp - 8] */
    MEM32(esi) = eax; /* 0x1718BDBF: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1718BDC1: inc ebx */
    _flag_k = FK_INC;
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x8)) = _v; } /* 0x1718BDC2: fstp dword ptr [esi - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xCu; /* 0x1718BDC5: add esi, 0xc */
    _flag_k = FK_ADD;
    /* cmp ebx, MEM32(ebp + 0x10) */ /* 0x1718BDC8: cmp ebx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1718BDCB: fld dword ptr [ebp + 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x1718BDCE: fmul dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + (-0x10)) = _v; } /* 0x1718BDD1: fstp dword ptr [esi - 0x10] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718BD75; /* 0x1718BDD4: jb 0x1718bd75 */
L_1718BDD6:
    edi = POP32_VAL(esp); /* 0x1718BDD6: pop edi */
    esi = POP32_VAL(esp); /* 0x1718BDD7: pop esi */
L_1718BDD8:
    ebx = POP32_VAL(esp); /* 0x1718BDD8: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1718BDD9: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1718BDDA: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1718BDE2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718BDE2u);

L_1718BDE2:
    edi = edi; /* 0x1718BDE2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718BDE4: push ebp */
    ebp = esp; /* 0x1718BDE5: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x3Cu; /* 0x1718BDE7: sub esp, 0x3c */
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x1718BDEA: fld dword ptr [ecx + 8] */
    PUSH32(esp, esi); /* 0x1718BDED: push esi */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x10); /* 0x1718BDEE: fmul dword ptr [ecx + 0x10] */
    PUSH32(esp, edi); /* 0x1718BDF1: push edi */
    fp_push(*(float*)&MEM32(ecx + 0x14)); /* 0x1718BDF2: fld dword ptr [ecx + 0x14] */
    esi = ebp + (-0x10); /* 0x1718BDF5: lea esi, [ebp - 0x10] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x1718BDF8: fmul dword ptr [ecx + 4] */
    edi = ebp + (-0x3C); /* 0x1718BDFB: lea edi, [ebp - 0x3c] */
    PUSH32(esp, 3); /* 0x1718BDFE: push 3 */
    eax = ebp + (-0x34); /* 0x1718BE00: lea eax, [ebp - 0x34] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1718BE03: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x1718BE05: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ecx + 0x14)); /* 0x1718BE08: fld dword ptr [ecx + 0x14] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x1718BE0B: fmul dword ptr [ecx] */
    fp_push(*(float*)&MEM32(ecx + 0xC)); /* 0x1718BE0D: fld dword ptr [ecx + 0xc] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x1718BE10: fmul dword ptr [ecx + 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1718BE13: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1718BE15: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ecx + 0xC)); /* 0x1718BE18: fld dword ptr [ecx + 0xc] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x1718BE1B: fmul dword ptr [ecx + 4] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x1718BE1E: fld dword ptr [ecx] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x10); /* 0x1718BE20: fmul dword ptr [ecx + 0x10] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1718BE23: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1718BE25: fstp dword ptr [ebp - 8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718BE28: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ecx + 0x1C)); /* 0x1718BE29: fld dword ptr [ecx + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x14); /* 0x1718BE2C: fmul dword ptr [ecx + 0x14] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718BE2F: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ecx + 0x20)); /* 0x1718BE30: fld dword ptr [ecx + 0x20] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x10); /* 0x1718BE33: fmul dword ptr [ecx + 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718BE36: movsd dword ptr es:[edi], dword ptr [esi] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1718BE37: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x1718BE39: fstp dword ptr [ebp - 0x10] */
    esi = ebp + (-0x10); /* 0x1718BE3C: lea esi, [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ecx + 0x20)); /* 0x1718BE3F: fld dword ptr [ecx + 0x20] */
    edi = ebp + (-0x30); /* 0x1718BE42: lea edi, [ebp - 0x30] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0xC); /* 0x1718BE45: fmul dword ptr [ecx + 0xc] */
    fp_push(*(float*)&MEM32(ecx + 0x18)); /* 0x1718BE48: fld dword ptr [ecx + 0x18] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x14); /* 0x1718BE4B: fmul dword ptr [ecx + 0x14] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1718BE4E: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1718BE50: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ecx + 0x18)); /* 0x1718BE53: fld dword ptr [ecx + 0x18] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x10); /* 0x1718BE56: fmul dword ptr [ecx + 0x10] */
    fp_push(*(float*)&MEM32(ecx + 0x1C)); /* 0x1718BE59: fld dword ptr [ecx + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0xC); /* 0x1718BE5C: fmul dword ptr [ecx + 0xc] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1718BE5F: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1718BE61: fstp dword ptr [ebp - 8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718BE64: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ecx + 0x20)); /* 0x1718BE65: fld dword ptr [ecx + 0x20] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x1718BE68: fmul dword ptr [ecx + 4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718BE6B: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ecx + 0x1C)); /* 0x1718BE6C: fld dword ptr [ecx + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x1718BE6F: fmul dword ptr [ecx + 8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718BE72: movsd dword ptr es:[edi], dword ptr [esi] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1718BE73: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x1718BE75: fstp dword ptr [ebp - 0x10] */
    esi = ebp + (-0x10); /* 0x1718BE78: lea esi, [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ecx + 0x18)); /* 0x1718BE7B: fld dword ptr [ecx + 0x18] */
    edi = ebp + (-0x24); /* 0x1718BE7E: lea edi, [ebp - 0x24] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x1718BE81: fmul dword ptr [ecx + 8] */
    fp_push(*(float*)&MEM32(ecx + 0x20)); /* 0x1718BE84: fld dword ptr [ecx + 0x20] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x1718BE87: fmul dword ptr [ecx] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1718BE89: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1718BE8B: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ecx + 0x1C)); /* 0x1718BE8E: fld dword ptr [ecx + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x1718BE91: fmul dword ptr [ecx] */
    fp_push(*(float*)&MEM32(ecx + 0x18)); /* 0x1718BE93: fld dword ptr [ecx + 0x18] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x1718BE96: fmul dword ptr [ecx + 4] */
    ecx = POP32_VAL(esp); /* 0x1718BE99: pop ecx */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1718BE9A: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1718BE9C: fstp dword ptr [ebp - 8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718BE9F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718BEA0: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718BEA1: movsd dword ptr es:[edi], dword ptr [esi] */
L_1718BEA2:
    fp_push(*(float*)&MEM32(eax)); /* 0x1718BEA2: fld dword ptr [eax] */
    fp_push(*(float*)&MEM32(eax + (-0x4))); /* 0x1718BEA4: fld dword ptr [eax - 4] */
    fp_push(*(float*)&MEM32(eax + (-0x8))); /* 0x1718BEA7: fld dword ptr [eax - 8] */
    fp_push(_st[0]); /* 0x1718BEAA: fld st(0) */
    _st[0] *= _st[1]; /* 0x1718BEAC: fmul st(1) */
    fp_push(_st[2]); /* 0x1718BEAE: fld st(2) */
    _st[0] *= _st[3]; /* 0x1718BEB0: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1718BEB2: faddp st(1) */
    fp_push(_st[3]); /* 0x1718BEB4: fld st(3) */
    _st[0] *= _st[4]; /* 0x1718BEB6: fmul st(4) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1718BEB8: faddp st(1) */
    _st[0] = sqrt(_st[0]); /* 0x1718BEBA: fsqrt  */
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x1718BEBC: fstp st(3) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718BEBE: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718BEC0: fstp st(0) */
    _st[0] = (double)*(float*)ADDR(0x17001424) / _st[0]; /* 0x1718BEC2: fdivr dword ptr [0x17001424] */
    fp_push(_st[0]); /* 0x1718BEC8: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(eax + (-0x8)); /* 0x1718BECA: fmul dword ptr [eax - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + (-0x8)) = _v; } /* 0x1718BECD: fstp dword ptr [eax - 8] */
    fp_push(_st[0]); /* 0x1718BED0: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(eax + (-0x4)); /* 0x1718BED2: fmul dword ptr [eax - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + (-0x4)) = _v; } /* 0x1718BED5: fstp dword ptr [eax - 4] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x1718BED8: fmul dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1718BEDA: fstp dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x1718BEDC: add eax, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1718BEDF: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1718BEA2; /* 0x1718BEE0: jne 0x1718bea2 */
L_1718BEE2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1718BEE2: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718BEE4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1718BEE6: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = 0xC0490FDBu; /* 0x1718BEE7: mov dword ptr [ebp - 4], 0xc0490fdb */
    MEM32(ebp + (-0x18)) = edi; /* 0x1718BEEE: mov dword ptr [ebp - 0x18], edi */
    MEM32(ebp + (-0x14)) = eax; /* 0x1718BEF1: mov dword ptr [ebp - 0x14], eax */
    MEM32(ebp + (-0x10)) = 2; /* 0x1718BEF4: mov dword ptr [ebp - 0x10], 2 */
    MEM32(ebp + (-0xC)) = edi; /* 0x1718BEFB: mov dword ptr [ebp - 0xc], edi */
    MEM32(ebp + (-0x8)) = eax; /* 0x1718BEFE: mov dword ptr [ebp - 8], eax */
    esi = ebp + (-0x38); /* 0x1718BF01: lea esi, [ebp - 0x38] */
    goto L_1718BF08; /* 0x1718BF04: jmp 0x1718bf08 */
L_1718BF06:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718BF06: fstp st(0) */
L_1718BF08:
    eax = MEM32(ebp + edi * 4 + (-0x10)); /* 0x1718BF08: mov eax, dword ptr [ebp + edi*4 - 0x10] */
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x1718BF0C: fld dword ptr [esi + 4] */
    eax = eax + eax * 2; /* 0x1718BF0F: lea eax, [eax + eax*2] */
    eax = ebp + eax * 4 + (-0x3C); /* 0x1718BF12: lea eax, [ebp + eax*4 - 0x3c] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x1718BF16: fmul dword ptr [eax + 8] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1718BF19: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(esi); /* 0x1718BF1C: fmul dword ptr [esi] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1718BF1E: faddp st(1) */
    fp_push(*(float*)&MEM32(esi + (-0x4))); /* 0x1718BF20: fld dword ptr [esi - 4] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x1718BF23: fmul dword ptr [eax] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1718BF25: faddp st(1) */
    _st[0] = -_st[0]; /* 0x1718BF27: fchs  */
    RECOMP_CALL(sub_1721B142); /* 0x1718BF29: call 0x1721b142 */
    RECOMP_FLAGS_IN();
    _st[0] += (double)*(float*)ADDR(ebp + (-0x4)); /* 0x1718BF2E: fadd dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1718BF31: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xCu; /* 0x1718BF32: add esi, 0xc */
    _flag_k = FK_ADD;
    /* cmp edi, 3 */ /* 0x1718BF35: cmp edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x1718BF38: fst dword ptr [ebp - 4] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718BF06; /* 0x1718BF3B: jb 0x1718bf06 */
L_1718BF3D:
    edi = POP32_VAL(esp); /* 0x1718BF3D: pop edi */
    esi = POP32_VAL(esp); /* 0x1718BF3E: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1718BF3F: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1718BF40: ret  */
    RECOMP_REGS_OUT();
}

void sub_1718BF46(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718BF46u);

L_1718BF46:
    edi = edi; /* 0x1718BF46: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718BF48: push ebp */
    ebp = esp; /* 0x1718BF49: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1718BF4B: push esi */
    PUSH32(esp, edi); /* 0x1718BF4C: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1718BF4D: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x1718BF50: mov esi, ecx */
    /* cmp edi, MEM32(esi + 0x8) */ /* 0x1718BF52: cmp edi, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718BF5B; /* 0x1718BF55: jne 0x1718bf5b */
L_1718BF57:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718BF57: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1718BF67; /* 0x1718BF59: jmp 0x1718bf67 */
L_1718BF5B:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x1718BF5B: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1718BF5F: push edi */
    ecx = esi; /* 0x1718BF60: mov ecx, esi */
    RECOMP_CALL(sub_17186CA3); /* 0x1718BF62: call 0x17186ca3 */
    RECOMP_FLAGS_IN();
L_1718BF67:
    MEM32(esi + 0x4) = edi; /* 0x1718BF67: mov dword ptr [esi + 4], edi */
    edi = POP32_VAL(esp); /* 0x1718BF6A: pop edi */
    esi = POP32_VAL(esp); /* 0x1718BF6B: pop esi */
    ebp = POP32_VAL(esp); /* 0x1718BF6C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1718BF6D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1718BF75(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718BF75u);

L_1718BF75:
    edi = edi; /* 0x1718BF75: mov edi, edi */
    PUSH32(esp, esi); /* 0x1718BF77: push esi */
    esi = ecx; /* 0x1718BF78: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718BF7A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 8); /* 0x1718BF7C: push 8 */
    MEM32(esi) = eax; /* 0x1718BF7E: mov dword ptr [esi], eax */
    MEM32(esi + 0x4) = eax; /* 0x1718BF80: mov dword ptr [esi + 4], eax */
    MEM32(esi + 0x8) = eax; /* 0x1718BF83: mov dword ptr [esi + 8], eax */
    RECOMP_CALL(sub_17184DB6); /* 0x1718BF86: call 0x17184db6 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xC) = eax; /* 0x1718BF8B: mov dword ptr [esi + 0xc], eax */
    eax = esi; /* 0x1718BF8E: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1718BF90: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1718BF91: ret  */
    RECOMP_REGS_OUT();
}

void sub_1718BF97(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718BF97u);

L_1718BF97:
    edi = edi; /* 0x1718BF97: mov edi, edi */
    PUSH32(esp, esi); /* 0x1718BF99: push esi */
    PUSH32(esp, 0x1706E47Eu); /* 0x1718BF9A: push 0x1706e47e */
    PUSH32(esp, 3); /* 0x1718BF9F: push 3 */
    esi = ecx; /* 0x1718BFA1: mov esi, ecx */
    PUSH32(esp, 0xCu); /* 0x1718BFA3: push 0xc */
    PUSH32(esp, esi); /* 0x1718BFA5: push esi */
    RECOMP_CALL(sub_1702C116); /* 0x1718BFA6: call 0x1702c116 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1718BFAB: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1718BFAD: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1718BFAE: ret  */
    RECOMP_REGS_OUT();
}

void sub_1718BFB4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718BFB4u);

L_1718BFB4:
    edi = edi; /* 0x1718BFB4: mov edi, edi */
    PUSH32(esp, esi); /* 0x1718BFB6: push esi */
    esi = ecx; /* 0x1718BFB7: mov esi, ecx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x1718BFB9: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x1718BFBC: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x2710u); /* 0x1718BFC0: push 0x2710 */
    RECOMP_CALL(sub_1718BB08); /* 0x1718BFC5: call 0x1718bb08 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x8) = eax; /* 0x1718BFCA: mov dword ptr [esi + 8], eax */
    eax = esi; /* 0x1718BFCD: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1718BFCF: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1718BFD0: ret  */
    RECOMP_REGS_OUT();
}

void sub_1718BFD6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718BFD6u);

L_1718BFD6:
    eax = 0x1721C552u; /* 0x1718BFD6: mov eax, 0x1721c552 */
    RECOMP_CALL(sub_1721B168); /* 0x1718BFDB: call 0x1721b168 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x1718BFE0: push ecx */
    PUSH32(esp, ebx); /* 0x1718BFE1: push ebx */
    PUSH32(esp, esi); /* 0x1718BFE2: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1718BFE3: mov esi, dword ptr [ebp + 8] */
    eax = esi + esi * 8; /* 0x1718BFE6: lea eax, [esi + esi*8] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1718BFE9: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1718BFE9: shl eax, 2 */
    PUSH32(esp, edi); /* 0x1718BFEC: push edi */
    PUSH32(esp, eax); /* 0x1718BFED: push eax */
    ebx = ecx; /* 0x1718BFEE: mov ebx, ecx */
    RECOMP_CALL(sub_1721B01C); /* 0x1718BFF0: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1718BFF5: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x1718BFF7: pop ecx */
    MEM32(ebp + (-0x10)) = edi; /* 0x1718BFF8: mov dword ptr [ebp - 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1718BFFB: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x1718BFFF: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718C016; /* 0x1718C001: je 0x1718c016 */
L_1718C003:
    PUSH32(esp, 0x1718BF97u); /* 0x1718C003: push 0x1718bf97 */
    PUSH32(esp, esi); /* 0x1718C008: push esi */
    PUSH32(esp, 0x24u); /* 0x1718C009: push 0x24 */
    PUSH32(esp, edi); /* 0x1718C00B: push edi */
    RECOMP_CALL(sub_1702C116); /* 0x1718C00C: call 0x1702c116 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x10)) = edi; /* 0x1718C011: mov dword ptr [ebp - 0x10], edi */
    goto L_1718C01A; /* 0x1718C014: jmp 0x1718c01a */
L_1718C016:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x1718C016: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1718C01A:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1718C01A: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1718C01E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x10)), edx */ /* 0x1718C020: cmp dword ptr [ebp - 0x10], edx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718C02C; /* 0x1718C023: jne 0x1718c02c */
L_1718C025:
    eax = 0x8007000Eu; /* 0x1718C025: mov eax, 0x8007000e */
    goto L_1718C06F; /* 0x1718C02A: jmp 0x1718c06f */
L_1718C02C:
    /* cmp MEM32(ebx), edx */ /* 0x1718C02C: cmp dword ptr [ebx], edx */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718C065; /* 0x1718C02E: je 0x1718c065 */
L_1718C030:
    eax = MEM32(ebx + 0x4); /* 0x1718C030: mov eax, dword ptr [ebx + 4] */
    /* cmp eax, edx */ /* 0x1718C033: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1718C058; /* 0x1718C035: jbe 0x1718c058 */
L_1718C037:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718C037: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1718C039:
    /* cmp edx, esi */ /* 0x1718C039: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1718C058; /* 0x1718C03B: jae 0x1718c058 */
L_1718C03D:
    ecx = MEM32(ebp + (-0x10)); /* 0x1718C03D: mov ecx, dword ptr [ebp - 0x10] */
    esi = MEM32(ebx); /* 0x1718C040: mov esi, dword ptr [ebx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1718C042: add esi, eax */
    _flag_k = FK_ADD;
    edi = eax + ecx; /* 0x1718C044: lea edi, [eax + ecx] */
    PUSH32(esp, 9); /* 0x1718C047: push 9 */
    ecx = POP32_VAL(esp); /* 0x1718C049: pop ecx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1718C04A: rep movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + 0x8); /* 0x1718C04C: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1718C04F: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x24u; /* 0x1718C050: add eax, 0x24 */
    _flag_k = FK_ADD;
    /* cmp edx, MEM32(ebx + 0x4) */ /* 0x1718C053: cmp edx, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718C039; /* 0x1718C056: jb 0x1718c039 */
L_1718C058:
    eax = MEM32(ebx); /* 0x1718C058: mov eax, dword ptr [ebx] */
    /* test eax, eax */ /* 0x1718C05A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718C065; /* 0x1718C05C: je 0x1718c065 */
L_1718C05E:
    PUSH32(esp, eax); /* 0x1718C05E: push eax */
    RECOMP_CALL(sub_1721B010); /* 0x1718C05F: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1718C064: pop ecx */
L_1718C065:
    eax = MEM32(ebp + (-0x10)); /* 0x1718C065: mov eax, dword ptr [ebp - 0x10] */
    MEM32(ebx) = eax; /* 0x1718C068: mov dword ptr [ebx], eax */
    MEM32(ebx + 0x8) = esi; /* 0x1718C06A: mov dword ptr [ebx + 8], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718C06D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1718C06F:
    ecx = MEM32(ebp + (-0xC)); /* 0x1718C06F: mov ecx, dword ptr [ebp - 0xc] */
    edi = POP32_VAL(esp); /* 0x1718C072: pop edi */
    esi = POP32_VAL(esp); /* 0x1718C073: pop esi */
    ebx = POP32_VAL(esp); /* 0x1718C074: pop ebx */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1718C075: mov dword ptr fs:[0], ecx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1718C07C: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1718C07D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1718C085(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718C085u);

L_1718C085:
    edi = edi; /* 0x1718C085: mov edi, edi */
    PUSH32(esp, esi); /* 0x1718C087: push esi */
    esi = ecx; /* 0x1718C088: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718C08A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 8); /* 0x1718C08C: push 8 */
    MEM32(esi) = eax; /* 0x1718C08E: mov dword ptr [esi], eax */
    MEM32(esi + 0x4) = eax; /* 0x1718C090: mov dword ptr [esi + 4], eax */
    MEM32(esi + 0x8) = eax; /* 0x1718C093: mov dword ptr [esi + 8], eax */
    RECOMP_CALL(sub_1718BFD6); /* 0x1718C096: call 0x1718bfd6 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xC) = eax; /* 0x1718C09B: mov dword ptr [esi + 0xc], eax */
    eax = esi; /* 0x1718C09E: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1718C0A0: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1718C0A1: ret  */
    RECOMP_REGS_OUT();
}

void sub_1718C0A7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718C0A7u);

L_1718C0A7:
    edi = edi; /* 0x1718C0A7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718C0A9: push ebp */
    ebp = esp; /* 0x1718C0AA: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1718C0AC: push ebx */
    ebx = ecx; /* 0x1718C0AD: mov ebx, ecx */
    eax = MEM32(ebx + 0x8); /* 0x1718C0AF: mov eax, dword ptr [ebx + 8] */
    PUSH32(esp, esi); /* 0x1718C0B2: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1718C0B3: mov esi, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(esi + 0x8) */ /* 0x1718C0B6: cmp eax, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1718C0CA; /* 0x1718C0B9: jae 0x1718c0ca */
L_1718C0BB:
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(ebx + 0x4) = MEM32(ebx + 0x4) & 0; /* 0x1718C0BB: and dword ptr [ebx + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x1718C0BF: push dword ptr [esi + 8] */
    RECOMP_CALL(sub_1718BFD6); /* 0x1718C0C2: call 0x1718bfd6 */
    RECOMP_FLAGS_IN();
    MEM32(ebx + 0xC) = eax; /* 0x1718C0C7: mov dword ptr [ebx + 0xc], eax */
L_1718C0CA:
    eax = MEM32(esi + 0x4); /* 0x1718C0CA: mov eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1718C0CD: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x1718C0CF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0x4) = eax; /* 0x1718C0D1: mov dword ptr [ebx + 4], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718C0F5; /* 0x1718C0D4: jbe 0x1718c0f5 */
L_1718C0D6:
    PUSH32(esp, edi); /* 0x1718C0D6: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718C0D7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1718C0DE; /* 0x1718C0D9: jmp 0x1718c0de */
L_1718C0DB:
    esi = MEM32(ebp + 0x8); /* 0x1718C0DB: mov esi, dword ptr [ebp + 8] */
L_1718C0DE:
    esi = MEM32(esi); /* 0x1718C0DE: mov esi, dword ptr [esi] */
    edi = MEM32(ebx); /* 0x1718C0E0: mov edi, dword ptr [ebx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1718C0E2: add esi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x1718C0E4: add edi, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, 9); /* 0x1718C0E6: push 9 */
    ecx = POP32_VAL(esp); /* 0x1718C0E8: pop ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1718C0E9: inc edx */
    _flag_k = FK_INC;
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1718C0EA: rep movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x24u; /* 0x1718C0EC: add eax, 0x24 */
    _flag_k = FK_ADD;
    /* cmp edx, MEM32(ebx + 0x4) */ /* 0x1718C0EF: cmp edx, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718C0DB; /* 0x1718C0F2: jb 0x1718c0db */
L_1718C0F4:
    edi = POP32_VAL(esp); /* 0x1718C0F4: pop edi */
L_1718C0F5:
    esi = POP32_VAL(esp); /* 0x1718C0F5: pop esi */
    eax = ebx; /* 0x1718C0F6: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x1718C0F8: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1718C0F9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1718C0FA: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1718C102(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718C102u);

L_1718C102:
    edi = edi; /* 0x1718C102: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718C104: push ebp */
    ebp = esp; /* 0x1718C105: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1718C107: push esi */
    PUSH32(esp, edi); /* 0x1718C108: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1718C109: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x1718C10C: mov esi, ecx */
    /* cmp edi, MEM32(esi + 0x8) */ /* 0x1718C10E: cmp edi, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718C117; /* 0x1718C111: jne 0x1718c117 */
L_1718C113:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718C113: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1718C123; /* 0x1718C115: jmp 0x1718c123 */
L_1718C117:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x1718C117: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1718C11B: push edi */
    ecx = esi; /* 0x1718C11C: mov ecx, esi */
    RECOMP_CALL(sub_1717C3D7); /* 0x1718C11E: call 0x1717c3d7 */
    RECOMP_FLAGS_IN();
L_1718C123:
    MEM32(esi + 0x4) = edi; /* 0x1718C123: mov dword ptr [esi + 4], edi */
    edi = POP32_VAL(esp); /* 0x1718C126: pop edi */
    esi = POP32_VAL(esp); /* 0x1718C127: pop esi */
    ebp = POP32_VAL(esp); /* 0x1718C128: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1718C129: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1718C131(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718C131u);

L_1718C131:
    edi = edi; /* 0x1718C131: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718C133: push ebp */
    ebp = esp; /* 0x1718C134: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1718C136: push esi */
    PUSH32(esp, edi); /* 0x1718C137: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1718C138: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x1718C13B: mov esi, ecx */
    /* cmp edi, MEM32(esi + 0x8) */ /* 0x1718C13D: cmp edi, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718C146; /* 0x1718C140: jne 0x1718c146 */
L_1718C142:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718C142: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1718C152; /* 0x1718C144: jmp 0x1718c152 */
L_1718C146:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x1718C146: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1718C14A: push edi */
    ecx = esi; /* 0x1718C14B: mov ecx, esi */
    RECOMP_CALL(sub_1718BFD6); /* 0x1718C14D: call 0x1718bfd6 */
    RECOMP_FLAGS_IN();
L_1718C152:
    MEM32(esi + 0x4) = edi; /* 0x1718C152: mov dword ptr [esi + 4], edi */
    edi = POP32_VAL(esp); /* 0x1718C155: pop edi */
    esi = POP32_VAL(esp); /* 0x1718C156: pop esi */
    ebp = POP32_VAL(esp); /* 0x1718C157: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1718C158: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1718C160(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718C160u);

L_1718C160:
    edi = edi; /* 0x1718C160: mov edi, edi */
    PUSH32(esp, esi); /* 0x1718C162: push esi */
    esi = ecx; /* 0x1718C163: mov esi, ecx */
    RECOMP_CALL(sub_1718C085); /* 0x1718C165: call 0x1718c085 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1718C16A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1718C16C: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1718C16D: ret  */
    RECOMP_REGS_OUT();
}

void sub_1718C173(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718C173u);

L_1718C173:
    edi = edi; /* 0x1718C173: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718C175: push ebp */
    ebp = esp; /* 0x1718C176: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1718C178: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1718C179: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x1718C17C: mov esi, ecx */
    RECOMP_CALL(sub_1718C0A7); /* 0x1718C17E: call 0x1718c0a7 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1718C183: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1718C185: pop esi */
    ebp = POP32_VAL(esp); /* 0x1718C186: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1718C187: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1718C18F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718C18Fu);

L_1718C18F:
    eax = 0x1721C584u; /* 0x1718C18F: mov eax, 0x1721c584 */
    RECOMP_CALL(sub_1721B168); /* 0x1718C194: call 0x1721b168 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCCu; /* 0x1718C199: sub esp, 0xcc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1718C19F: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x1718C1A0: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x1718C1A3: push esi */
    esi = ecx; /* 0x1718C1A4: mov esi, ecx */
    PUSH32(esp, edi); /* 0x1718C1A6: push edi */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x1718C1A7: push dword ptr [esi + 4] */
    ecx = ebx; /* 0x1718C1AA: mov ecx, ebx */
    MEM32(ebp + (-0x4C)) = esi; /* 0x1718C1AC: mov dword ptr [ebp - 0x4c], esi */
    RECOMP_CALL(sub_1718C102); /* 0x1718C1AF: call 0x1718c102 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1718C1B4: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edi */ /* 0x1718C1B6: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1718C5E7; /* 0x1718C1B8: jl 0x1718c5e7 */
L_1718C1BE:
    eax = MEM32(ebx + 0x4); /* 0x1718C1BE: mov eax, dword ptr [ebx + 4] */
    /* cmp eax, edi */ /* 0x1718C1C1: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = edi; /* 0x1718C1C3: mov dword ptr [ebp - 0x10], edi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1718C1E5; /* 0x1718C1C6: jbe 0x1718c1e5 */
L_1718C1C8:
    eax = MEM32(esi); /* 0x1718C1C8: mov eax, dword ptr [esi] */
    ecx = MEM32(ebx); /* 0x1718C1CA: mov ecx, dword ptr [ebx] */
    PUSH32(esp, MEM32(edi + eax + 0x4)); /* 0x1718C1CC: push dword ptr [edi + eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x1718C1D0: add ecx, edi */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1718BF46); /* 0x1718C1D2: call 0x1718bf46 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + 1; /* 0x1718C1D7: inc dword ptr [ebp - 0x10] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x10)); /* 0x1718C1DA: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x10u; /* 0x1718C1DD: add edi, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebx + 0x4) */ /* 0x1718C1E0: cmp eax, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718C1C8; /* 0x1718C1E3: jb 0x1718c1c8 */
L_1718C1E5:
    ecx = ebp + (-0x80); /* 0x1718C1E5: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_17177C1E); /* 0x1718C1E8: call 0x17177c1e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1718C1ED: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x70); /* 0x1718C1F1: lea ecx, [ebp - 0x70] */
    RECOMP_CALL(sub_17177C1E); /* 0x1718C1F4: call 0x17177c1e */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x90); /* 0x1718C1F9: lea ecx, [ebp - 0x90] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1718C1FF: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_17195352); /* 0x1718C203: call 0x17195352 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x5C); /* 0x1718C208: lea ecx, [ebp - 0x5c] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1718C20B: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_1718BF75); /* 0x1718C20F: call 0x1718bf75 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x74)); /* 0x1718C214: mov edi, dword ptr [ebp - 0x74] */
    /* test edi, edi */ /* 0x1718C217: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ebp + (-0x4)) = (uint8_t)(3); /* 0x1718C219: mov byte ptr [ebp - 4], 3 */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718C5B2; /* 0x1718C21D: jl 0x1718c5b2 */
L_1718C223:
    edi = MEM32(ebp + (-0x64)); /* 0x1718C223: mov edi, dword ptr [ebp - 0x64] */
    /* test edi, edi */ /* 0x1718C226: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718C5B2; /* 0x1718C228: jl 0x1718c5b2 */
L_1718C22E:
    edi = MEM32(ebp + (-0x84)); /* 0x1718C22E: mov edi, dword ptr [ebp - 0x84] */
    /* test edi, edi */ /* 0x1718C234: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718C5B2; /* 0x1718C236: jl 0x1718c5b2 */
L_1718C23C:
    edi = MEM32(ebp + (-0x50)); /* 0x1718C23C: mov edi, dword ptr [ebp - 0x50] */
    /* test edi, edi */ /* 0x1718C23F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718C5B2; /* 0x1718C241: jl 0x1718c5b2 */
L_1718C247:
    edi = MEM32(ebp + 0xC); /* 0x1718C247: mov edi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1718C24A: push edi */
    ecx = ebp + (-0x80); /* 0x1718C24B: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_17177C40); /* 0x1718C24E: call 0x17177c40 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1718C253: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1718C255: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718C57B; /* 0x1718C257: jl 0x1718c57b */
L_1718C25D:
    eax = MEM32(esi); /* 0x1718C25D: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x4); /* 0x1718C25F: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1718C262: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi; /* 0x1718C264: mov eax, edi */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x1718C266: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ecx = ebp + (-0x70); /* 0x1718C268: lea ecx, [ebp - 0x70] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1718C26B: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x1718C26C: push eax */
    RECOMP_CALL(sub_17177C40); /* 0x1718C26D: call 0x17177c40 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x1718C272: mov ebx, eax */
    /* test ebx, ebx */ /* 0x1718C274: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718C57B; /* 0x1718C276: jl 0x1718c57b */
L_1718C27C:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x6C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x6C)) = MEM32(ebp + (-0x6C)) & 0; /* 0x1718C27C: and dword ptr [ebp - 0x6c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1718C280: push edi */
    ecx = ebp + (-0x5C); /* 0x1718C281: lea ecx, [ebp - 0x5c] */
    RECOMP_CALL(sub_171852AF); /* 0x1718C284: call 0x171852af */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1718C289: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ebx */ /* 0x1718C28B: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x48)) = eax; /* 0x1718C28D: mov dword ptr [ebp - 0x48], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1718C543; /* 0x1718C290: jl 0x1718c543 */
L_1718C296:
    eax = MEM32(ebp + 0x8); /* 0x1718C296: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax); /* 0x1718C299: mov eax, dword ptr [eax] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1718C29B: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(ebp + (-0x80)); /* 0x1718C29E: mov eax, dword ptr [ebp - 0x80] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1718C2A1: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(esi + 0x4); /* 0x1718C2A4: mov eax, dword ptr [esi + 4] */
    /* cmp eax, ebx */ /* 0x1718C2A7: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x28)) = ebx; /* 0x1718C2A9: mov dword ptr [ebp - 0x28], ebx */
    MEM32(ebp + (-0x44)) = ebx; /* 0x1718C2AC: mov dword ptr [ebp - 0x44], ebx */
    MEM32(ebp + (-0x40)) = edi; /* 0x1718C2AF: mov dword ptr [ebp - 0x40], edi */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1718C51B; /* 0x1718C2B2: jbe 0x1718c51b */
L_1718C2B8:
    MEM8(ebp + (-0x11)) = (uint8_t)(LO8(ebx)); /* 0x1718C2B8: mov byte ptr [ebp - 0x11], bl */
L_1718C2BB:
    eax = ebp + (-0x11); /* 0x1718C2BB: lea eax, [ebp - 0x11] */
    PUSH32(esp, eax); /* 0x1718C2BE: push eax */
    ecx = ebp + (-0x5C); /* 0x1718C2BF: lea ecx, [ebp - 0x5c] */
    RECOMP_CALL(sub_1718BAB3); /* 0x1718C2C2: call 0x1718bab3 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x1718C2C7: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1718C2C9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + eax + 0x4), ecx */ /* 0x1718C2CB: cmp dword ptr [ebx + eax + 4], ecx */
    _flag_a = (uint32_t)(MEM32(ebx + eax + 0x4)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1C)) = ecx; /* 0x1718C2CF: mov dword ptr [ebp - 0x1c], ecx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1718C4FD; /* 0x1718C2D2: jbe 0x1718c4fd */
L_1718C2D8:
    fp_push(*(float*)&MEM32(0x17001430)); /* 0x1718C2D8: fld dword ptr [0x17001430] */
    MEM32(ebp + (-0x2C)) = ecx; /* 0x1718C2DE: mov dword ptr [ebp - 0x2c], ecx */
L_1718C2E1:
    eax = MEM32(ebx + eax); /* 0x1718C2E1: mov eax, dword ptr [ebx + eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x2C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x2C)); /* 0x1718C2E4: add eax, dword ptr [ebp - 0x2c] */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x1718C2E7: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(*(float*)&MEM32(eax + 0x10)); /* 0x1718C2E9: fld dword ptr [eax + 0x10] */
    esi = ebp + (-0xA8); /* 0x1718C2EC: lea esi, [ebp - 0xa8] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x1718C2F2: fmul dword ptr [eax + 8] */
    edi = ebp + (-0xD8); /* 0x1718C2F5: lea edi, [ebp - 0xd8] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1718C2FB: fld dword ptr [eax + 4] */
    edx = MEM32(ebp + 0x10); /* 0x1718C2FE: mov edx, dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x14); /* 0x1718C301: fmul dword ptr [eax + 0x14] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1718C304: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xA8)) = _v; } /* 0x1718C306: fstp dword ptr [ebp - 0xa8] */
    fp_push(*(float*)&MEM32(eax + 0x14)); /* 0x1718C30C: fld dword ptr [eax + 0x14] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x1718C30F: fmul dword ptr [eax] */
    fp_push(*(float*)&MEM32(eax + 0xC)); /* 0x1718C311: fld dword ptr [eax + 0xc] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x1718C314: fmul dword ptr [eax + 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1718C317: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xA4)) = _v; } /* 0x1718C319: fstp dword ptr [ebp - 0xa4] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1718C31F: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(eax + 0xC); /* 0x1718C322: fmul dword ptr [eax + 0xc] */
    fp_push(*(float*)&MEM32(eax + 0x10)); /* 0x1718C325: fld dword ptr [eax + 0x10] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x1718C328: fmul dword ptr [eax] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1718C32A: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xA0)) = _v; } /* 0x1718C32C: fstp dword ptr [ebp - 0xa0] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718C332: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(eax + 0x1C)); /* 0x1718C333: fld dword ptr [eax + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x14); /* 0x1718C336: fmul dword ptr [eax + 0x14] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718C339: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(eax + 0x20)); /* 0x1718C33A: fld dword ptr [eax + 0x20] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x10); /* 0x1718C33D: fmul dword ptr [eax + 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718C340: movsd dword ptr es:[edi], dword ptr [esi] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1718C341: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xB4)) = _v; } /* 0x1718C343: fstp dword ptr [ebp - 0xb4] */
    esi = ebp + (-0xB4); /* 0x1718C349: lea esi, [ebp - 0xb4] */
    fp_push(*(float*)&MEM32(eax + 0xC)); /* 0x1718C34F: fld dword ptr [eax + 0xc] */
    edi = ebp + (-0xCC); /* 0x1718C352: lea edi, [ebp - 0xcc] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x20); /* 0x1718C358: fmul dword ptr [eax + 0x20] */
    fp_push(*(float*)&MEM32(eax + 0x14)); /* 0x1718C35B: fld dword ptr [eax + 0x14] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x18); /* 0x1718C35E: fmul dword ptr [eax + 0x18] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1718C361: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xB0)) = _v; } /* 0x1718C363: fstp dword ptr [ebp - 0xb0] */
    fp_push(*(float*)&MEM32(eax + 0x10)); /* 0x1718C369: fld dword ptr [eax + 0x10] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x18); /* 0x1718C36C: fmul dword ptr [eax + 0x18] */
    fp_push(*(float*)&MEM32(eax + 0xC)); /* 0x1718C36F: fld dword ptr [eax + 0xc] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x1C); /* 0x1718C372: fmul dword ptr [eax + 0x1c] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1718C375: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xAC)) = _v; } /* 0x1718C377: fstp dword ptr [ebp - 0xac] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718C37D: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1718C37E: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x20); /* 0x1718C381: fmul dword ptr [eax + 0x20] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718C384: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(eax + 0x1C)); /* 0x1718C385: fld dword ptr [eax + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x1718C388: fmul dword ptr [eax + 8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718C38B: movsd dword ptr es:[edi], dword ptr [esi] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1718C38C: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x9C)) = _v; } /* 0x1718C38E: fstp dword ptr [ebp - 0x9c] */
    esi = ebp + (-0x9C); /* 0x1718C394: lea esi, [ebp - 0x9c] */
    fp_push(*(float*)&MEM32(eax + 0x18)); /* 0x1718C39A: fld dword ptr [eax + 0x18] */
    edi = ebp + (-0xC0); /* 0x1718C39D: lea edi, [ebp - 0xc0] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x1718C3A3: fmul dword ptr [eax + 8] */
    fp_push(*(float*)&MEM32(eax + 0x20)); /* 0x1718C3A6: fld dword ptr [eax + 0x20] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x1718C3A9: fmul dword ptr [eax] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1718C3AB: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x98)) = _v; } /* 0x1718C3AD: fstp dword ptr [ebp - 0x98] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1718C3B3: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x1C); /* 0x1718C3B5: fmul dword ptr [eax + 0x1c] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1718C3B8: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x18); /* 0x1718C3BB: fmul dword ptr [eax + 0x18] */
    eax = MEM32(edx); /* 0x1718C3BE: mov eax, dword ptr [edx] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1718C3C0: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x94)) = _v; } /* 0x1718C3C2: fstp dword ptr [ebp - 0x94] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718C3C8: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718C3C9: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718C3CA: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebx + eax); /* 0x1718C3CB: mov esi, dword ptr [ebx + eax] */
    eax = MEM32(ebp + (-0x1C)); /* 0x1718C3CE: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(esi + eax * 8) = ecx; /* 0x1718C3D1: mov dword ptr [esi + eax*8], ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718C3EF; /* 0x1718C3D4: je 0x1718c3ef */
L_1718C3D6:
    esi = MEM32(edx); /* 0x1718C3D6: mov esi, dword ptr [edx] */
    esi = MEM32(ebx + esi + (-0x10)); /* 0x1718C3D8: mov esi, dword ptr [ebx + esi - 0x10] */
    edi = eax; /* 0x1718C3DC: mov edi, eax */
    if (1u) _cf = (((edi) >> 0) & 1u); /* 0x1718C3DE: shr edi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edi >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 1u; /* 0x1718C3DE: shr edi, 1 */
    eax = MEM32(esi + edi * 8); /* 0x1718C3E0: mov eax, dword ptr [esi + edi*8] */
    esi = MEM32(esi + edi * 8 + 0x4); /* 0x1718C3E3: mov esi, dword ptr [esi + edi*8 + 4] */
    MEM32(ebp + (-0x44)) = eax; /* 0x1718C3E7: mov dword ptr [ebp - 0x44], eax */
    MEM32(ebp + (-0x40)) = esi; /* 0x1718C3EA: mov dword ptr [ebp - 0x40], esi */
    goto L_1718C3F2; /* 0x1718C3ED: jmp 0x1718c3f2 */
L_1718C3EF:
    eax = MEM32(ebp + (-0x44)); /* 0x1718C3EF: mov eax, dword ptr [ebp - 0x44] */
L_1718C3F2:
    /* cmp eax, MEM32(ebp + (-0x40)) */ /* 0x1718C3F2: cmp eax, dword ptr [ebp - 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x40)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = eax; /* 0x1718C3F5: mov dword ptr [ebp - 0x10], eax */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1718C4D2; /* 0x1718C3F8: jae 0x1718c4d2 */
L_1718C3FE:
    edi = MEM32(ebp + (-0x18)); /* 0x1718C3FE: mov edi, dword ptr [ebp - 0x18] */
    esi = ecx + ecx * 2; /* 0x1718C401: lea esi, [ecx + ecx*2] */
    esi = edi + esi * 4; /* 0x1718C404: lea esi, [edi + esi*4] */
    MEM32(ebp + (-0x30)) = esi; /* 0x1718C407: mov dword ptr [ebp - 0x30], esi */
    esi = MEM32(ebp + (-0x20)); /* 0x1718C40A: mov esi, dword ptr [ebp - 0x20] */
    eax = eax + eax * 2; /* 0x1718C40D: lea eax, [eax + eax*2] */
    eax = esi + eax * 4; /* 0x1718C410: lea eax, [esi + eax*4] */
    MEM32(ebp + (-0x24)) = eax; /* 0x1718C413: mov dword ptr [ebp - 0x24], eax */
L_1718C416:
    eax = MEM32(ebp + (-0x5C)); /* 0x1718C416: mov eax, dword ptr [ebp - 0x5c] */
    esi = MEM32(ebp + (-0x10)); /* 0x1718C419: mov esi, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x1718C41C: add eax, esi */
    _flag_k = FK_ADD;
    /* cmp MEM8(eax), 0 */ /* 0x1718C41E: cmp byte ptr [eax], 0 */
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + (-0x60)) = eax; /* 0x1718C421: mov dword ptr [ebp - 0x60], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718C4BF; /* 0x1718C424: jne 0x1718c4bf */
L_1718C42A:
    esi = MEM32(ebp + (-0x24)); /* 0x1718C42A: mov esi, dword ptr [ebp - 0x24] */
    fp_push(*(float*)&MEM32(ebp + (-0xD0))); /* 0x1718C42D: fld dword ptr [ebp - 0xd0] */
    edi = ebp + (-0x3C); /* 0x1718C433: lea edi, [ebp - 0x3c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718C436: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718C437: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718C438: movsd dword ptr es:[edi], dword ptr [esi] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x34)); /* 0x1718C439: fmul dword ptr [ebp - 0x34] */
    fp_push(*(float*)&MEM32(ebp + (-0xD4))); /* 0x1718C43C: fld dword ptr [ebp - 0xd4] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x38)); /* 0x1718C442: fmul dword ptr [ebp - 0x38] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1718C445: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0xD8))); /* 0x1718C447: fld dword ptr [ebp - 0xd8] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x3C)); /* 0x1718C44D: fmul dword ptr [ebp - 0x3c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1718C450: faddp st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1718C452: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1718C454: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x1718C456: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1718C4BF; /* 0x1718C459: jne 0x1718c4bf */
L_1718C45B:
    fp_push(*(float*)&MEM32(ebp + (-0xC4))); /* 0x1718C45B: fld dword ptr [ebp - 0xc4] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x34)); /* 0x1718C461: fmul dword ptr [ebp - 0x34] */
    fp_push(*(float*)&MEM32(ebp + (-0xC8))); /* 0x1718C464: fld dword ptr [ebp - 0xc8] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x38)); /* 0x1718C46A: fmul dword ptr [ebp - 0x38] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1718C46D: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0xCC))); /* 0x1718C46F: fld dword ptr [ebp - 0xcc] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x3C)); /* 0x1718C475: fmul dword ptr [ebp - 0x3c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1718C478: faddp st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1718C47A: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1718C47C: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x1718C47E: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1718C4BF; /* 0x1718C481: jne 0x1718c4bf */
L_1718C483:
    fp_push(*(float*)&MEM32(ebp + (-0xB8))); /* 0x1718C483: fld dword ptr [ebp - 0xb8] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x34)); /* 0x1718C489: fmul dword ptr [ebp - 0x34] */
    fp_push(*(float*)&MEM32(ebp + (-0xBC))); /* 0x1718C48C: fld dword ptr [ebp - 0xbc] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x38)); /* 0x1718C492: fmul dword ptr [ebp - 0x38] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1718C495: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0xC0))); /* 0x1718C497: fld dword ptr [ebp - 0xc0] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x3C)); /* 0x1718C49D: fmul dword ptr [ebp - 0x3c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1718C4A0: faddp st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1718C4A2: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1718C4A4: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x1718C4A6: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1718C4BF; /* 0x1718C4A9: jne 0x1718c4bf */
L_1718C4AB:
    edi = MEM32(ebp + (-0x30)); /* 0x1718C4AB: mov edi, dword ptr [ebp - 0x30] */
    eax = MEM32(ebp + (-0x60)); /* 0x1718C4AE: mov eax, dword ptr [ebp - 0x60] */
    esi = ebp + (-0x3C); /* 0x1718C4B1: lea esi, [ebp - 0x3c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718C4B4: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718C4B5: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718C4B6: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1718C4B7: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x30)) = MEM32(ebp + (-0x30)) + 0xCu; /* 0x1718C4B8: add dword ptr [ebp - 0x30], 0xc */
    _flag_k = FK_ADD;
    MEM8(eax) = (uint8_t)(1); /* 0x1718C4BC: mov byte ptr [eax], 1 */
L_1718C4BF:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + 1; /* 0x1718C4BF: inc dword ptr [ebp - 0x10] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x10)); /* 0x1718C4C2: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x24)) = MEM32(ebp + (-0x24)) + 0xCu; /* 0x1718C4C5: add dword ptr [ebp - 0x24], 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + (-0x40)) */ /* 0x1718C4C9: cmp eax, dword ptr [ebp - 0x40] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x40)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718C416; /* 0x1718C4CC: jb 0x1718c416 */
L_1718C4D2:
    eax = MEM32(edx); /* 0x1718C4D2: mov eax, dword ptr [edx] */
    eax = MEM32(ebx + eax); /* 0x1718C4D4: mov eax, dword ptr [ebx + eax] */
    edx = MEM32(ebp + (-0x1C)); /* 0x1718C4D7: mov edx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x2C)) = MEM32(ebp + (-0x2C)) + 0x24u; /* 0x1718C4DA: add dword ptr [ebp - 0x2c], 0x24 */
    _flag_k = FK_ADD;
    MEM32(eax + edx * 8 + 0x4) = ecx; /* 0x1718C4DE: mov dword ptr [eax + edx*8 + 4], ecx */
    eax = MEM32(ebp + (-0x4C)); /* 0x1718C4E2: mov eax, dword ptr [ebp - 0x4c] */
    eax = MEM32(eax); /* 0x1718C4E5: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1718C4E7: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, MEM32(ebx + eax + 0x4) */ /* 0x1718C4E8: cmp edx, dword ptr [ebx + eax + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebx + eax + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1C)) = edx; /* 0x1718C4EC: mov dword ptr [ebp - 0x1c], edx */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718C2E1; /* 0x1718C4EF: jb 0x1718c2e1 */
L_1718C4F5:
    esi = MEM32(ebp + (-0x4C)); /* 0x1718C4F5: mov esi, dword ptr [ebp - 0x4c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718C4F8: fstp st(0) */
    edi = MEM32(ebp + 0xC); /* 0x1718C4FA: mov edi, dword ptr [ebp + 0xc] */
L_1718C4FD:
    eax = MEM32(ebp + (-0x20)); /* 0x1718C4FD: mov eax, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x28)) = MEM32(ebp + (-0x28)) + 1; /* 0x1718C500: inc dword ptr [ebp - 0x28] */
    _flag_k = FK_INC;
    ecx = MEM32(ebp + (-0x18)); /* 0x1718C503: mov ecx, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1718C506: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(ebp + (-0x28)); /* 0x1718C509: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x10u; /* 0x1718C50C: add ebx, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(esi + 0x4) */ /* 0x1718C50F: cmp eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x20)) = ecx; /* 0x1718C512: mov dword ptr [ebp - 0x20], ecx */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718C2BB; /* 0x1718C515: jb 0x1718c2bb */
L_1718C51B:
    eax = MEM32(ebp + (-0x18)); /* 0x1718C51B: mov eax, dword ptr [ebp - 0x18] */
    ecx = MEM32(ebp + 0x8); /* 0x1718C51E: mov ecx, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(ecx) */ /* 0x1718C521: cmp eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718C543; /* 0x1718C523: je 0x1718c543 */
L_1718C525:
    /* test edi, edi */ /* 0x1718C525: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718C543; /* 0x1718C527: jbe 0x1718c543 */
L_1718C529:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718C529: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi; /* 0x1718C52B: mov ecx, edi */
L_1718C52D:
    edx = MEM32(ebp + (-0x18)); /* 0x1718C52D: mov edx, dword ptr [ebp - 0x18] */
    esi = eax + edx; /* 0x1718C530: lea esi, [eax + edx] */
    edx = MEM32(ebp + 0x8); /* 0x1718C533: mov edx, dword ptr [ebp + 8] */
    edi = MEM32(edx); /* 0x1718C536: mov edi, dword ptr [edx] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x1718C538: add edi, eax */
    _flag_k = FK_ADD;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718C53A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718C53B: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x1718C53C: add eax, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1718C53F: dec ecx */
    _flag_k = FK_DEC;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718C540: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1718C52D; /* 0x1718C541: jne 0x1718c52d */
L_1718C543:
    ecx = ebp + (-0x5C); /* 0x1718C543: lea ecx, [ebp - 0x5c] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1718C546: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_1717AF06); /* 0x1718C54A: call 0x1717af06 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x90); /* 0x1718C54F: lea ecx, [ebp - 0x90] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1718C555: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_1717AF06); /* 0x1718C559: call 0x1717af06 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x70); /* 0x1718C55E: lea ecx, [ebp - 0x70] */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x1718C561: mov byte ptr [ebp - 4], 0 */
    RECOMP_CALL(sub_1717AF06); /* 0x1718C565: call 0x1717af06 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1718C56A: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x80); /* 0x1718C56E: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_1717AF06); /* 0x1718C571: call 0x1717af06 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x48)); /* 0x1718C576: mov eax, dword ptr [ebp - 0x48] */
    goto L_1718C5E7; /* 0x1718C579: jmp 0x1718c5e7 */
L_1718C57B:
    ecx = ebp + (-0x5C); /* 0x1718C57B: lea ecx, [ebp - 0x5c] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1718C57E: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_1717AF06); /* 0x1718C582: call 0x1717af06 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x90); /* 0x1718C587: lea ecx, [ebp - 0x90] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1718C58D: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_1717AF06); /* 0x1718C591: call 0x1717af06 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x70); /* 0x1718C596: lea ecx, [ebp - 0x70] */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x1718C599: mov byte ptr [ebp - 4], 0 */
    RECOMP_CALL(sub_1717AF06); /* 0x1718C59D: call 0x1717af06 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1718C5A2: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x80); /* 0x1718C5A6: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_1717AF06); /* 0x1718C5A9: call 0x1717af06 */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x1718C5AE: mov eax, ebx */
    goto L_1718C5E7; /* 0x1718C5B0: jmp 0x1718c5e7 */
L_1718C5B2:
    ecx = ebp + (-0x5C); /* 0x1718C5B2: lea ecx, [ebp - 0x5c] */
    MEM8(ebp + (-0x4)) = (uint8_t)(2); /* 0x1718C5B5: mov byte ptr [ebp - 4], 2 */
    RECOMP_CALL(sub_1717AF06); /* 0x1718C5B9: call 0x1717af06 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x90); /* 0x1718C5BE: lea ecx, [ebp - 0x90] */
    MEM8(ebp + (-0x4)) = (uint8_t)(1); /* 0x1718C5C4: mov byte ptr [ebp - 4], 1 */
    RECOMP_CALL(sub_1717AF06); /* 0x1718C5C8: call 0x1717af06 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x70); /* 0x1718C5CD: lea ecx, [ebp - 0x70] */
    MEM8(ebp + (-0x4)) = (uint8_t)(0); /* 0x1718C5D0: mov byte ptr [ebp - 4], 0 */
    RECOMP_CALL(sub_1717AF06); /* 0x1718C5D4: call 0x1717af06 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1718C5D9: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x80); /* 0x1718C5DD: lea ecx, [ebp - 0x80] */
    RECOMP_CALL(sub_1717AF06); /* 0x1718C5E0: call 0x1717af06 */
    RECOMP_FLAGS_IN();
    eax = edi; /* 0x1718C5E5: mov eax, edi */
L_1718C5E7:
    ecx = MEM32(ebp + (-0xC)); /* 0x1718C5E7: mov ecx, dword ptr [ebp - 0xc] */
    edi = POP32_VAL(esp); /* 0x1718C5EA: pop edi */
    esi = POP32_VAL(esp); /* 0x1718C5EB: pop esi */
    ebx = POP32_VAL(esp); /* 0x1718C5EC: pop ebx */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1718C5ED: mov dword ptr fs:[0], ecx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1718C5F4: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1718C5F5: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1718C5FD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718C5FDu);

L_1718C5FD:
    eax = 0x1721C552u; /* 0x1718C5FD: mov eax, 0x1721c552 */
    RECOMP_CALL(sub_1721B168); /* 0x1718C602: call 0x1721b168 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x1718C607: push ecx */
    PUSH32(esp, ebx); /* 0x1718C608: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1718C609: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1718C60C: push esi */
    eax = ebx; /* 0x1718C60D: mov eax, ebx */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x1718C60F: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x1718C60F: shl eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1718C612: add eax, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x1718C615: push edi */
    PUSH32(esp, eax); /* 0x1718C616: push eax */
    esi = ecx; /* 0x1718C617: mov esi, ecx */
    RECOMP_CALL(sub_1721B01C); /* 0x1718C619: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1718C61E: pop ecx */
    MEM32(ebp + (-0x10)) = eax; /* 0x1718C61F: mov dword ptr [ebp - 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1718C622: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x1718C626: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718C647; /* 0x1718C628: je 0x1718c647 */
L_1718C62A:
    PUSH32(esp, 0x1717AFBFu); /* 0x1718C62A: push 0x1717afbf */
    PUSH32(esp, 0x1718C160u); /* 0x1718C62F: push 0x1718c160 */
    PUSH32(esp, ebx); /* 0x1718C634: push ebx */
    edi = eax + 0x4; /* 0x1718C635: lea edi, [eax + 4] */
    PUSH32(esp, 0x10u); /* 0x1718C638: push 0x10 */
    PUSH32(esp, edi); /* 0x1718C63A: push edi */
    MEM32(eax) = ebx; /* 0x1718C63B: mov dword ptr [eax], ebx */
    RECOMP_CALL(sub_1721B4DD); /* 0x1718C63D: call 0x1721b4dd */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x10)) = edi; /* 0x1718C642: mov dword ptr [ebp - 0x10], edi */
    goto L_1718C64B; /* 0x1718C645: jmp 0x1718c64b */
L_1718C647:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x1718C647: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1718C64B:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x1718C64B: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1718C64F: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x10)), ebx */ /* 0x1718C651: cmp dword ptr [ebp - 0x10], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718C65D; /* 0x1718C654: jne 0x1718c65d */
L_1718C656:
    eax = 0x8007000Eu; /* 0x1718C656: mov eax, 0x8007000e */
    goto L_1718C6A6; /* 0x1718C65B: jmp 0x1718c6a6 */
L_1718C65D:
    /* cmp MEM32(esi), ebx */ /* 0x1718C65D: cmp dword ptr [esi], ebx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718C699; /* 0x1718C65F: je 0x1718c699 */
L_1718C661:
    eax = MEM32(esi + 0x4); /* 0x1718C661: mov eax, dword ptr [esi + 4] */
    /* cmp eax, ebx */ /* 0x1718C664: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718C68C; /* 0x1718C666: je 0x1718c68c */
L_1718C668:
    /* test eax, eax */ /* 0x1718C668: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718C68C; /* 0x1718C66A: jbe 0x1718c68c */
L_1718C66C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1718C66C: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1718C66E:
    /* cmp ebx, MEM32(ebp + 0x8) */ /* 0x1718C66E: cmp ebx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1718C68C; /* 0x1718C671: jae 0x1718c68c */
L_1718C673:
    eax = MEM32(esi); /* 0x1718C673: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x1718C675: add eax, edi */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1718C677: push eax */
    eax = MEM32(ebp + (-0x10)); /* 0x1718C678: mov eax, dword ptr [ebp - 0x10] */
    ecx = edi + eax; /* 0x1718C67B: lea ecx, [edi + eax] */
    RECOMP_CALL(sub_1718C173); /* 0x1718C67E: call 0x1718c173 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1718C683: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x10u; /* 0x1718C684: add edi, 0x10 */
    _flag_k = FK_ADD;
    /* cmp ebx, MEM32(esi + 0x4) */ /* 0x1718C687: cmp ebx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718C66E; /* 0x1718C68A: jb 0x1718c66e */
L_1718C68C:
    ecx = MEM32(esi); /* 0x1718C68C: mov ecx, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x1718C68E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718C699; /* 0x1718C690: je 0x1718c699 */
L_1718C692:
    PUSH32(esp, 3); /* 0x1718C692: push 3 */
    RECOMP_CALL(sub_1717BD81); /* 0x1718C694: call 0x1717bd81 */
    RECOMP_FLAGS_IN();
L_1718C699:
    eax = MEM32(ebp + 0x8); /* 0x1718C699: mov eax, dword ptr [ebp + 8] */
    MEM32(esi + 0x8) = eax; /* 0x1718C69C: mov dword ptr [esi + 8], eax */
    eax = MEM32(ebp + (-0x10)); /* 0x1718C69F: mov eax, dword ptr [ebp - 0x10] */
    MEM32(esi) = eax; /* 0x1718C6A2: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718C6A4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1718C6A6:
    ecx = MEM32(ebp + (-0xC)); /* 0x1718C6A6: mov ecx, dword ptr [ebp - 0xc] */
    edi = POP32_VAL(esp); /* 0x1718C6A9: pop edi */
    esi = POP32_VAL(esp); /* 0x1718C6AA: pop esi */
    ebx = POP32_VAL(esp); /* 0x1718C6AB: pop ebx */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1718C6AC: mov dword ptr fs:[0], ecx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1718C6B3: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1718C6B4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1718C6BC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718C6BCu);

L_1718C6BC:
    edi = edi; /* 0x1718C6BC: mov edi, edi */
    PUSH32(esp, esi); /* 0x1718C6BE: push esi */
    esi = ecx; /* 0x1718C6BF: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718C6C1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 8); /* 0x1718C6C3: push 8 */
    MEM32(esi) = eax; /* 0x1718C6C5: mov dword ptr [esi], eax */
    MEM32(esi + 0x4) = eax; /* 0x1718C6C7: mov dword ptr [esi + 4], eax */
    MEM32(esi + 0x8) = eax; /* 0x1718C6CA: mov dword ptr [esi + 8], eax */
    RECOMP_CALL(sub_1718C5FD); /* 0x1718C6CD: call 0x1718c5fd */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xC) = eax; /* 0x1718C6D2: mov dword ptr [esi + 0xc], eax */
    eax = esi; /* 0x1718C6D5: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1718C6D7: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1718C6D8: ret  */
    RECOMP_REGS_OUT();
}

void sub_1718C6DE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718C6DEu);

L_1718C6DE:
    edi = edi; /* 0x1718C6DE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718C6E0: push ebp */
    ebp = esp; /* 0x1718C6E1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1718C6E3: push esi */
    PUSH32(esp, edi); /* 0x1718C6E4: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1718C6E5: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x1718C6E8: mov esi, ecx */
    /* cmp edi, MEM32(esi + 0x8) */ /* 0x1718C6EA: cmp edi, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718C6F3; /* 0x1718C6ED: jne 0x1718c6f3 */
L_1718C6EF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718C6EF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1718C6FF; /* 0x1718C6F1: jmp 0x1718c6ff */
L_1718C6F3:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x1718C6F3: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1718C6F7: push edi */
    ecx = esi; /* 0x1718C6F8: mov ecx, esi */
    RECOMP_CALL(sub_1718C5FD); /* 0x1718C6FA: call 0x1718c5fd */
    RECOMP_FLAGS_IN();
L_1718C6FF:
    MEM32(esi + 0x4) = edi; /* 0x1718C6FF: mov dword ptr [esi + 4], edi */
    edi = POP32_VAL(esp); /* 0x1718C702: pop edi */
    esi = POP32_VAL(esp); /* 0x1718C703: pop esi */
    ebp = POP32_VAL(esp); /* 0x1718C704: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1718C705: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1718C70D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718C70Du);

L_1718C70D:
    edi = edi; /* 0x1718C70D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718C70F: push ebp */
    ebp = esp; /* 0x1718C710: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1718C712: push esi */
    PUSH32(esp, edi); /* 0x1718C713: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1718C714: mov edi, dword ptr [ebp + 8] */
    esi = ecx; /* 0x1718C717: mov esi, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718C719: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x8), edi */ /* 0x1718C71B: cmp dword ptr [esi + 8], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1718C726; /* 0x1718C71E: jae 0x1718c726 */
L_1718C720:
    PUSH32(esp, edi); /* 0x1718C720: push edi */
    RECOMP_CALL(sub_1718C5FD); /* 0x1718C721: call 0x1718c5fd */
    RECOMP_FLAGS_IN();
L_1718C726:
    MEM32(esi + 0x4) = edi; /* 0x1718C726: mov dword ptr [esi + 4], edi */
    edi = POP32_VAL(esp); /* 0x1718C729: pop edi */
    esi = POP32_VAL(esp); /* 0x1718C72A: pop esi */
    ebp = POP32_VAL(esp); /* 0x1718C72B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1718C72C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1718C734(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718C734u);

L_1718C734:
    eax = 0x1721C59Bu; /* 0x1718C734: mov eax, 0x1721c59b */
    RECOMP_CALL(sub_1721B168); /* 0x1718C739: call 0x1721b168 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x1718C73E: push ecx */
    PUSH32(esp, ebx); /* 0x1718C73F: push ebx */
    PUSH32(esp, esi); /* 0x1718C740: push esi */
    esi = ecx; /* 0x1718C741: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x1718C743: mov dword ptr [ebp - 0x10], esi */
    RECOMP_CALL(sub_1718C6BC); /* 0x1718C746: call 0x1718c6bc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1718C74B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi + 0x10; /* 0x1718C74D: lea ecx, [esi + 0x10] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x1718C750: mov dword ptr [ebp - 4], ebx */
    RECOMP_CALL(sub_17177C1E); /* 0x1718C753: call 0x17177c1e */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x1718C758: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(esi + 0x20) = ebx; /* 0x1718C75B: mov dword ptr [esi + 0x20], ebx */
    MEM32(esi + 0x24) = ebx; /* 0x1718C75E: mov dword ptr [esi + 0x24], ebx */
    MEM32(esi + 0x28) = ebx; /* 0x1718C761: mov dword ptr [esi + 0x28], ebx */
    MEM8(esi + 0x2C) = (uint8_t)(LO8(ebx)); /* 0x1718C764: mov byte ptr [esi + 0x2c], bl */
    MEM32(esi + 0x30) = ebx; /* 0x1718C767: mov dword ptr [esi + 0x30], ebx */
    eax = esi; /* 0x1718C76A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1718C76C: pop esi */
    ebx = POP32_VAL(esp); /* 0x1718C76D: pop ebx */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1718C76E: mov dword ptr fs:[0], ecx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1718C775: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1718C776: ret  */
    RECOMP_REGS_OUT();
}

void sub_1718C77C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718C77Cu);

L_1718C77C:
    edi = edi; /* 0x1718C77C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718C77E: push ebp */
    ebp = esp; /* 0x1718C77F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x130u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x130u; /* 0x1718C781: sub esp, 0x130 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1718C787: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1718C788: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1718C78B: push edi */
    edi = ecx; /* 0x1718C78C: mov edi, ecx */
    /* cmp ebx, MEM32(edi + 0x20) */ /* 0x1718C78E: cmp ebx, dword ptr [edi + 0x20] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi + 0x20));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xB0)) = edi; /* 0x1718C791: mov dword ptr [ebp - 0xb0], edi */
    if (CMP_AE(_flag_a, _flag_b)) goto L_1718C7BB; /* 0x1718C797: jae 0x1718c7bb */
L_1718C799:
    PUSH32(esp, ebx); /* 0x1718C799: push ebx */
    RECOMP_CALL(sub_1718C70D); /* 0x1718C79A: call 0x1718c70d */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1718C79F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718CE46; /* 0x1718C7A1: jl 0x1718ce46 */
L_1718C7A7:
    ecx = MEM32(edi); /* 0x1718C7A7: mov ecx, dword ptr [edi] */
    MEM32(edi + 0x20) = ebx; /* 0x1718C7A9: mov dword ptr [edi + 0x20], ebx */
    if (4u) _cf = (((ebx) >> 28) & 1u); /* 0x1718C7AC: shl ebx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ebx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 4u; /* 0x1718C7AC: shl ebx, 4 */
    ecx = MEM32(ebx + ecx + (-0xC)); /* 0x1718C7AF: mov ecx, dword ptr [ebx + ecx - 0xc] */
    MEM32(edi + 0x24) = ecx; /* 0x1718C7B3: mov dword ptr [edi + 0x24], ecx */
    goto L_1718CE46; /* 0x1718C7B6: jmp 0x1718ce46 */
L_1718C7BB:
    fp_push(*(float*)&MEM32(0x170018D8)); /* 0x1718C7BB: fld dword ptr [0x170018d8] */
    PUSH32(esp, 4); /* 0x1718C7C1: push 4 */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x94)) = _v; } /* 0x1718C7C3: fst dword ptr [ebp - 0x94] */
    eax = ebp + (-0x8C); /* 0x1718C7C9: lea eax, [ebp - 0x8c] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x90)) = _v; } /* 0x1718C7CF: fst dword ptr [ebp - 0x90] */
    ecx = POP32_VAL(esp); /* 0x1718C7D5: pop ecx */
    fp_push(0.0); /* 0x1718C7D6: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8C)) = _v; } /* 0x1718C7D8: fstp dword ptr [ebp - 0x8c] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x88)) = _v; } /* 0x1718C7DE: fst dword ptr [ebp - 0x88] */
    fp_push(1.0); /* 0x1718C7E4: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x84)) = _v; } /* 0x1718C7E6: fstp dword ptr [ebp - 0x84] */
    fp_push(0.0); /* 0x1718C7EC: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x80)) = _v; } /* 0x1718C7EE: fstp dword ptr [ebp - 0x80] */
    fp_push(1.0); /* 0x1718C7F1: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x7C)) = _v; } /* 0x1718C7F3: fstp dword ptr [ebp - 0x7c] */
    fp_push(1.0); /* 0x1718C7F6: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x78)) = _v; } /* 0x1718C7F8: fstp dword ptr [ebp - 0x78] */
    fp_push(0.0); /* 0x1718C7FB: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x74)) = _v; } /* 0x1718C7FD: fstp dword ptr [ebp - 0x74] */
    fp_push(1.0); /* 0x1718C800: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x70)) = _v; } /* 0x1718C802: fstp dword ptr [ebp - 0x70] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x6C)) = _v; } /* 0x1718C805: fst dword ptr [ebp - 0x6c] */
    fp_push(0.0); /* 0x1718C808: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x68)) = _v; } /* 0x1718C80A: fstp dword ptr [ebp - 0x68] */
    fp_push(0.0); /* 0x1718C80D: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x64)) = _v; } /* 0x1718C80F: fstp dword ptr [ebp - 0x64] */
    fp_push(0.0); /* 0x1718C812: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x60)) = _v; } /* 0x1718C814: fstp dword ptr [ebp - 0x60] */
    fp_push(1.0); /* 0x1718C817: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x5C)) = _v; } /* 0x1718C819: fstp dword ptr [ebp - 0x5c] */
    fp_push(0.0); /* 0x1718C81C: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x58)) = _v; } /* 0x1718C81E: fstp dword ptr [ebp - 0x58] */
    fp_push(0.0); /* 0x1718C821: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x54)) = _v; } /* 0x1718C823: fstp dword ptr [ebp - 0x54] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x1718C826: fstp dword ptr [ebp - 0x50] */
L_1718C829:
    fp_push(*(float*)&MEM32(eax)); /* 0x1718C829: fld dword ptr [eax] */
    fp_push(*(float*)&MEM32(eax + (-0x4))); /* 0x1718C82B: fld dword ptr [eax - 4] */
    fp_push(*(float*)&MEM32(eax + (-0x8))); /* 0x1718C82E: fld dword ptr [eax - 8] */
    fp_push(_st[0]); /* 0x1718C831: fld st(0) */
    _st[0] *= _st[1]; /* 0x1718C833: fmul st(1) */
    fp_push(_st[2]); /* 0x1718C835: fld st(2) */
    _st[0] *= _st[3]; /* 0x1718C837: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1718C839: faddp st(1) */
    fp_push(_st[3]); /* 0x1718C83B: fld st(3) */
    _st[0] *= _st[4]; /* 0x1718C83D: fmul st(4) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1718C83F: faddp st(1) */
    _st[0] = sqrt(_st[0]); /* 0x1718C841: fsqrt  */
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x1718C843: fstp st(3) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718C845: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718C847: fstp st(0) */
    _st[0] = (double)*(float*)ADDR(0x17001424) / _st[0]; /* 0x1718C849: fdivr dword ptr [0x17001424] */
    fp_push(_st[0]); /* 0x1718C84F: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(eax + (-0x8)); /* 0x1718C851: fmul dword ptr [eax - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + (-0x8)) = _v; } /* 0x1718C854: fstp dword ptr [eax - 8] */
    fp_push(_st[0]); /* 0x1718C857: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(eax + (-0x4)); /* 0x1718C859: fmul dword ptr [eax - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + (-0x4)) = _v; } /* 0x1718C85C: fstp dword ptr [eax - 4] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x1718C85F: fmul dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1718C861: fstp dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x1718C863: add eax, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1718C866: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1718C829; /* 0x1718C867: jne 0x1718c829 */
L_1718C869:
    PUSH32(esp, ebx); /* 0x1718C869: push ebx */
    ecx = edi; /* 0x1718C86A: mov ecx, edi */
    MEM32(edi + 0x20) = ebx; /* 0x1718C86C: mov dword ptr [edi + 0x20], ebx */
    RECOMP_CALL(sub_1718C6DE); /* 0x1718C86F: call 0x1718c6de */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1718C874: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718CE46; /* 0x1718C876: jl 0x1718ce46 */
L_1718C87C:
    /* cmp MEM8(edi + 0x2C), 0 */ /* 0x1718C87C: cmp byte ptr [edi + 0x2c], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x2C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, esi); /* 0x1718C880: push esi */
    esi = MEM32(edi); /* 0x1718C881: mov esi, dword ptr [edi] */
    ecx = esi; /* 0x1718C883: mov ecx, esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718C88B; /* 0x1718C885: je 0x1718c88b */
L_1718C887:
    PUSH32(esp, 4); /* 0x1718C887: push 4 */
    goto L_1718C88D; /* 0x1718C889: jmp 0x1718c88d */
L_1718C88B:
    PUSH32(esp, 8); /* 0x1718C88B: push 8 */
L_1718C88D:
    RECOMP_CALL(sub_1718C131); /* 0x1718C88D: call 0x1718c131 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1718C892: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x1718C894: mov dword ptr [ebp - 0x14], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718CE45; /* 0x1718C897: jl 0x1718ce45 */
L_1718C89D:
    ecx = MEM32(esi); /* 0x1718C89D: mov ecx, dword ptr [esi] */
    eax = ebp + (-0x64); /* 0x1718C89F: lea eax, [ebp - 0x64] */
    PUSH32(esp, eax); /* 0x1718C8A2: push eax */
    eax = ebp + (-0x88); /* 0x1718C8A3: lea eax, [ebp - 0x88] */
    PUSH32(esp, eax); /* 0x1718C8A9: push eax */
    eax = ebp + (-0x94); /* 0x1718C8AA: lea eax, [ebp - 0x94] */
    PUSH32(esp, eax); /* 0x1718C8B0: push eax */
    RECOMP_CALL(sub_1718BADC); /* 0x1718C8B1: call 0x1718badc */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x1718C8B6: mov ecx, dword ptr [esi] */
    eax = ebp + (-0x64); /* 0x1718C8B8: lea eax, [ebp - 0x64] */
    PUSH32(esp, eax); /* 0x1718C8BB: push eax */
    eax = ebp + (-0x7C); /* 0x1718C8BC: lea eax, [ebp - 0x7c] */
    PUSH32(esp, eax); /* 0x1718C8BF: push eax */
    eax = ebp + (-0x88); /* 0x1718C8C0: lea eax, [ebp - 0x88] */
    PUSH32(esp, eax); /* 0x1718C8C6: push eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x24u; /* 0x1718C8C7: add ecx, 0x24 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1718BADC); /* 0x1718C8CA: call 0x1718badc */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x1718C8CF: mov ecx, dword ptr [esi] */
    eax = ebp + (-0x64); /* 0x1718C8D1: lea eax, [ebp - 0x64] */
    PUSH32(esp, eax); /* 0x1718C8D4: push eax */
    eax = ebp + (-0x70); /* 0x1718C8D5: lea eax, [ebp - 0x70] */
    PUSH32(esp, eax); /* 0x1718C8D8: push eax */
    eax = ebp + (-0x7C); /* 0x1718C8D9: lea eax, [ebp - 0x7c] */
    PUSH32(esp, eax); /* 0x1718C8DC: push eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x48u; /* 0x1718C8DD: add ecx, 0x48 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1718BADC); /* 0x1718C8E0: call 0x1718badc */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x1718C8E5: mov ecx, dword ptr [esi] */
    eax = ebp + (-0x64); /* 0x1718C8E7: lea eax, [ebp - 0x64] */
    PUSH32(esp, eax); /* 0x1718C8EA: push eax */
    eax = ebp + (-0x94); /* 0x1718C8EB: lea eax, [ebp - 0x94] */
    PUSH32(esp, eax); /* 0x1718C8F1: push eax */
    eax = ebp + (-0x70); /* 0x1718C8F2: lea eax, [ebp - 0x70] */
    PUSH32(esp, eax); /* 0x1718C8F5: push eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x6Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x6Cu; /* 0x1718C8F6: add ecx, 0x6c */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1718BADC); /* 0x1718C8F9: call 0x1718badc */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(edi + 0x2C), 0 */ /* 0x1718C8FE: cmp byte ptr [edi + 0x2c], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x2C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718C974; /* 0x1718C902: jne 0x1718c974 */
L_1718C904:
    ecx = MEM32(esi); /* 0x1718C904: mov ecx, dword ptr [esi] */
    eax = ebp + (-0x58); /* 0x1718C906: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x1718C909: push eax */
    eax = ebp + (-0x94); /* 0x1718C90A: lea eax, [ebp - 0x94] */
    PUSH32(esp, eax); /* 0x1718C910: push eax */
    eax = ebp + (-0x88); /* 0x1718C911: lea eax, [ebp - 0x88] */
    PUSH32(esp, eax); /* 0x1718C917: push eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x90u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x90u; /* 0x1718C918: add ecx, 0x90 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1718BADC); /* 0x1718C91E: call 0x1718badc */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x1718C923: mov ecx, dword ptr [esi] */
    eax = ebp + (-0x58); /* 0x1718C925: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x1718C928: push eax */
    eax = ebp + (-0x88); /* 0x1718C929: lea eax, [ebp - 0x88] */
    PUSH32(esp, eax); /* 0x1718C92F: push eax */
    eax = ebp + (-0x7C); /* 0x1718C930: lea eax, [ebp - 0x7c] */
    PUSH32(esp, eax); /* 0x1718C933: push eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xB4u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xB4u; /* 0x1718C934: add ecx, 0xb4 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1718BADC); /* 0x1718C93A: call 0x1718badc */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x1718C93F: mov ecx, dword ptr [esi] */
    eax = ebp + (-0x58); /* 0x1718C941: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x1718C944: push eax */
    eax = ebp + (-0x7C); /* 0x1718C945: lea eax, [ebp - 0x7c] */
    PUSH32(esp, eax); /* 0x1718C948: push eax */
    eax = ebp + (-0x70); /* 0x1718C949: lea eax, [ebp - 0x70] */
    PUSH32(esp, eax); /* 0x1718C94C: push eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xD8u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xD8u; /* 0x1718C94D: add ecx, 0xd8 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1718BADC); /* 0x1718C953: call 0x1718badc */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi); /* 0x1718C958: mov ecx, dword ptr [esi] */
    eax = ebp + (-0x58); /* 0x1718C95A: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x1718C95D: push eax */
    eax = ebp + (-0x70); /* 0x1718C95E: lea eax, [ebp - 0x70] */
    PUSH32(esp, eax); /* 0x1718C961: push eax */
    eax = ebp + (-0x94); /* 0x1718C962: lea eax, [ebp - 0x94] */
    PUSH32(esp, eax); /* 0x1718C968: push eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFCu; /* 0x1718C969: add ecx, 0xfc */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1718BADC); /* 0x1718C96F: call 0x1718badc */
    RECOMP_FLAGS_IN();
L_1718C974:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718C974: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1718C976: inc eax */
    _flag_k = FK_INC;
    /* cmp ebx, eax */ /* 0x1718C977: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x38)) = eax; /* 0x1718C979: mov dword ptr [ebp - 0x38], eax */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1718CE36; /* 0x1718C97C: jbe 0x1718ce36 */
L_1718C982:
    MEM32(ebp + (-0x2C)) = 0x10u; /* 0x1718C982: mov dword ptr [ebp - 0x2c], 0x10 */
L_1718C989:
    eax = MEM32(edi); /* 0x1718C989: mov eax, dword ptr [edi] */
    ecx = MEM32(ebp + (-0x2C)); /* 0x1718C98B: mov ecx, dword ptr [ebp - 0x2c] */
    esi = eax + ecx; /* 0x1718C98E: lea esi, [eax + ecx] */
    eax = MEM32(esi + (-0xC)); /* 0x1718C991: mov eax, dword ptr [esi - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x1718C994: add eax, eax */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1718C996: push eax */
    ecx = esi; /* 0x1718C997: mov ecx, esi */
    MEM32(ebp + (-0x48)) = esi; /* 0x1718C999: mov dword ptr [ebp - 0x48], esi */
    RECOMP_CALL(sub_1718C131); /* 0x1718C99C: call 0x1718c131 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1718C9A1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x1718C9A3: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x14)) = eax; /* 0x1718C9A5: mov dword ptr [ebp - 0x14], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1718CE45; /* 0x1718C9A8: jl 0x1718ce45 */
L_1718C9AE:
    /* cmp MEM32(esi + (-0xC)), ecx */ /* 0x1718C9AE: cmp dword ptr [esi - 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(esi + (-0xC))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x30)) = ecx; /* 0x1718C9B1: mov dword ptr [ebp - 0x30], ecx */
    if (CMP_BE(_flag_a, _flag_b)) goto L_1718CE26; /* 0x1718C9B4: jbe 0x1718ce26 */
L_1718C9BA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718C9BA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1718C9BC: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0xD0)) = ecx; /* 0x1718C9BD: mov dword ptr [ebp - 0xd0], ecx */
    MEM32(ebp + (-0xCC)) = eax; /* 0x1718C9C3: mov dword ptr [ebp - 0xcc], eax */
    MEM32(ebp + (-0xC8)) = 2; /* 0x1718C9C9: mov dword ptr [ebp - 0xc8], 2 */
    MEM32(ebp + (-0xC4)) = ecx; /* 0x1718C9D3: mov dword ptr [ebp - 0xc4], ecx */
    MEM32(ebp + (-0xC0)) = eax; /* 0x1718C9D9: mov dword ptr [ebp - 0xc0], eax */
    MEM32(ebp + (-0x18)) = ecx; /* 0x1718C9DF: mov dword ptr [ebp - 0x18], ecx */
    MEM32(ebp + (-0x34)) = ecx; /* 0x1718C9E2: mov dword ptr [ebp - 0x34], ecx */
    goto L_1718C9EA; /* 0x1718C9E5: jmp 0x1718c9ea */
L_1718C9E7:
    esi = MEM32(ebp + (-0x48)); /* 0x1718C9E7: mov esi, dword ptr [ebp - 0x48] */
L_1718C9EA:
    ebx = MEM32(esi + (-0x10)); /* 0x1718C9EA: mov ebx, dword ptr [esi - 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x34)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + (-0x34)); /* 0x1718C9ED: add ebx, dword ptr [ebp - 0x34] */
    _flag_k = FK_ADD;
    esi = ebp + (-0xE8); /* 0x1718C9F0: lea esi, [ebp - 0xe8] */
    fp_push(*(float*)&MEM32(ebx + 0x8)); /* 0x1718C9F6: fld dword ptr [ebx + 8] */
    eax = ebx + 0x4; /* 0x1718C9F9: lea eax, [ebx + 4] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x10); /* 0x1718C9FC: fmul dword ptr [ebx + 0x10] */
    edi = ebp + (-0x70); /* 0x1718C9FF: lea edi, [ebp - 0x70] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1718CA02: fld dword ptr [eax] */
    PUSH32(esp, 3); /* 0x1718CA04: push 3 */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x14); /* 0x1718CA06: fmul dword ptr [ebx + 0x14] */
    ecx = ebp + (-0x68); /* 0x1718CA09: lea ecx, [ebp - 0x68] */
    edx = POP32_VAL(esp); /* 0x1718CA0C: pop edx */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1718CA0D: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xE8)) = _v; } /* 0x1718CA0F: fstp dword ptr [ebp - 0xe8] */
    fp_push(*(float*)&MEM32(ebx)); /* 0x1718CA15: fld dword ptr [ebx] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x14); /* 0x1718CA17: fmul dword ptr [ebx + 0x14] */
    fp_push(*(float*)&MEM32(ebx + 0xC)); /* 0x1718CA1A: fld dword ptr [ebx + 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x8); /* 0x1718CA1D: fmul dword ptr [ebx + 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1718CA20: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xE4)) = _v; } /* 0x1718CA22: fstp dword ptr [ebp - 0xe4] */
    fp_push(*(float*)&MEM32(ebx + 0xC)); /* 0x1718CA28: fld dword ptr [ebx + 0xc] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x1718CA2B: fmul dword ptr [eax] */
    fp_push(*(float*)&MEM32(ebx)); /* 0x1718CA2D: fld dword ptr [ebx] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x10); /* 0x1718CA2F: fmul dword ptr [ebx + 0x10] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1718CA32: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xE0)) = _v; } /* 0x1718CA34: fstp dword ptr [ebp - 0xe0] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718CA3A: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebx + 0x14)); /* 0x1718CA3B: fld dword ptr [ebx + 0x14] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x1C); /* 0x1718CA3E: fmul dword ptr [ebx + 0x1c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718CA41: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebx + 0x20)); /* 0x1718CA42: fld dword ptr [ebx + 0x20] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x10); /* 0x1718CA45: fmul dword ptr [ebx + 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718CA48: movsd dword ptr es:[edi], dword ptr [esi] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1718CA49: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10C)) = _v; } /* 0x1718CA4B: fstp dword ptr [ebp - 0x10c] */
    esi = ebp + (-0x10C); /* 0x1718CA51: lea esi, [ebp - 0x10c] */
    fp_push(*(float*)&MEM32(ebx + 0xC)); /* 0x1718CA57: fld dword ptr [ebx + 0xc] */
    edi = ebp + (-0x64); /* 0x1718CA5A: lea edi, [ebp - 0x64] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x20); /* 0x1718CA5D: fmul dword ptr [ebx + 0x20] */
    fp_push(*(float*)&MEM32(ebx + 0x14)); /* 0x1718CA60: fld dword ptr [ebx + 0x14] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x18); /* 0x1718CA63: fmul dword ptr [ebx + 0x18] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1718CA66: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x108)) = _v; } /* 0x1718CA68: fstp dword ptr [ebp - 0x108] */
    fp_push(*(float*)&MEM32(ebx + 0x10)); /* 0x1718CA6E: fld dword ptr [ebx + 0x10] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x18); /* 0x1718CA71: fmul dword ptr [ebx + 0x18] */
    fp_push(*(float*)&MEM32(ebx + 0xC)); /* 0x1718CA74: fld dword ptr [ebx + 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x1C); /* 0x1718CA77: fmul dword ptr [ebx + 0x1c] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1718CA7A: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x104)) = _v; } /* 0x1718CA7C: fstp dword ptr [ebp - 0x104] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718CA82: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1718CA83: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x20); /* 0x1718CA85: fmul dword ptr [ebx + 0x20] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718CA88: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebx + 0x1C)); /* 0x1718CA89: fld dword ptr [ebx + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x8); /* 0x1718CA8C: fmul dword ptr [ebx + 8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718CA8F: movsd dword ptr es:[edi], dword ptr [esi] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1718CA90: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x100)) = _v; } /* 0x1718CA92: fstp dword ptr [ebp - 0x100] */
    esi = ebp + (-0x100); /* 0x1718CA98: lea esi, [ebp - 0x100] */
    fp_push(*(float*)&MEM32(ebx + 0x8)); /* 0x1718CA9E: fld dword ptr [ebx + 8] */
    edi = ebp + (-0x58); /* 0x1718CAA1: lea edi, [ebp - 0x58] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x18); /* 0x1718CAA4: fmul dword ptr [ebx + 0x18] */
    fp_push(*(float*)&MEM32(ebx)); /* 0x1718CAA7: fld dword ptr [ebx] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x20); /* 0x1718CAA9: fmul dword ptr [ebx + 0x20] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1718CAAC: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xFC)) = _v; } /* 0x1718CAAE: fstp dword ptr [ebp - 0xfc] */
    fp_push(*(float*)&MEM32(ebx)); /* 0x1718CAB4: fld dword ptr [ebx] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x1C); /* 0x1718CAB6: fmul dword ptr [ebx + 0x1c] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1718CAB9: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x18); /* 0x1718CABB: fmul dword ptr [ebx + 0x18] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1718CABE: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xF8)) = _v; } /* 0x1718CAC0: fstp dword ptr [ebp - 0xf8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718CAC6: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718CAC7: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718CAC8: movsd dword ptr es:[edi], dword ptr [esi] */
L_1718CAC9:
    fp_push(*(float*)&MEM32(ecx)); /* 0x1718CAC9: fld dword ptr [ecx] */
    fp_push(*(float*)&MEM32(ecx + (-0x4))); /* 0x1718CACB: fld dword ptr [ecx - 4] */
    fp_push(*(float*)&MEM32(ecx + (-0x8))); /* 0x1718CACE: fld dword ptr [ecx - 8] */
    fp_push(_st[0]); /* 0x1718CAD1: fld st(0) */
    _st[0] *= _st[1]; /* 0x1718CAD3: fmul st(1) */
    fp_push(_st[2]); /* 0x1718CAD5: fld st(2) */
    _st[0] *= _st[3]; /* 0x1718CAD7: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1718CAD9: faddp st(1) */
    fp_push(_st[3]); /* 0x1718CADB: fld st(3) */
    _st[0] *= _st[4]; /* 0x1718CADD: fmul st(4) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1718CADF: faddp st(1) */
    _st[0] = sqrt(_st[0]); /* 0x1718CAE1: fsqrt  */
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x1718CAE3: fstp st(3) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718CAE5: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718CAE7: fstp st(0) */
    _st[0] = (double)*(float*)ADDR(0x17001424) / _st[0]; /* 0x1718CAE9: fdivr dword ptr [0x17001424] */
    fp_push(_st[0]); /* 0x1718CAEF: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ecx + (-0x8)); /* 0x1718CAF1: fmul dword ptr [ecx - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + (-0x8)) = _v; } /* 0x1718CAF4: fstp dword ptr [ecx - 8] */
    fp_push(_st[0]); /* 0x1718CAF7: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ecx + (-0x4)); /* 0x1718CAF9: fmul dword ptr [ecx - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + (-0x4)) = _v; } /* 0x1718CAFC: fstp dword ptr [ecx - 4] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x1718CAFF: fmul dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x1718CB01: fstp dword ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xCu; /* 0x1718CB03: add ecx, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1718CB06: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1718CAC9; /* 0x1718CB07: jne 0x1718cac9 */
L_1718CB09:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x1718CB09: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1718CB0D: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebp + (-0x6C); /* 0x1718CB11: lea edi, [ebp - 0x6c] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1718CB14: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x8)) = ebx; /* 0x1718CB17: mov dword ptr [ebp - 8], ebx */
    eax = edi; /* 0x1718CB1A: mov eax, edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) - eax; /* 0x1718CB1C: sub dword ptr [ebp - 8], eax */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x28)) = 0xC0490FDBu; /* 0x1718CB1F: mov dword ptr [ebp - 0x28], 0xc0490fdb */
    MEM32(ebp + (-0x4C)) = 0xBDCCCCCDu; /* 0x1718CB26: mov dword ptr [ebp - 0x4c], 0xbdcccccd */
L_1718CB2D:
    esi = MEM32(ebp + (-0x4)); /* 0x1718CB2D: mov esi, dword ptr [ebp - 4] */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x1718CB30: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x1718CB30: shl esi, 2 */
    eax = MEM32(ebp + esi + (-0xC8)); /* 0x1718CB33: mov eax, dword ptr [ebp + esi - 0xc8] */
    eax = eax + eax * 2; /* 0x1718CB3A: lea eax, [eax + eax*2] */
    eax = ebp + eax * 4 + (-0x70); /* 0x1718CB3D: lea eax, [ebp + eax*4 - 0x70] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x1718CB41: fld dword ptr [eax + 8] */
    _st[0] *= (double)*(float*)ADDR(edi + 0x4); /* 0x1718CB44: fmul dword ptr [edi + 4] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1718CB47: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(edi); /* 0x1718CB4A: fmul dword ptr [edi] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1718CB4C: faddp st(1) */
    fp_push(*(float*)&MEM32(eax)); /* 0x1718CB4E: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(edi + (-0x4)); /* 0x1718CB50: fmul dword ptr [edi - 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1718CB53: faddp st(1) */
    _st[0] = -_st[0]; /* 0x1718CB55: fchs  */
    RECOMP_CALL(sub_1721B142); /* 0x1718CB57: call 0x1721b142 */
    RECOMP_FLAGS_IN();
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + esi + (-0x124)) = _v; } /* 0x1718CB5C: fst dword ptr [ebp + esi - 0x124] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x1718CB63: fld dword ptr [ebp - 0x28] */
    eax = MEM32(ebp + esi + (-0xCC)); /* 0x1718CB66: mov eax, dword ptr [ebp + esi - 0xcc] */
    ecx = MEM32(ebp + (-0xC)); /* 0x1718CB6D: mov ecx, dword ptr [ebp - 0xc] */
    _st[0] += _st[1]; /* 0x1718CB70: fadd st(1) */
    eax = eax + eax * 2; /* 0x1718CB72: lea eax, [eax + eax*2] */
    eax = ebx + eax * 4; /* 0x1718CB75: lea eax, [ebx + eax*4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x1718CB78: fstp dword ptr [ebp - 0x28] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718CB7B: fstp st(0) */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x1718CB7D: fld dword ptr [ecx + 4] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x1718CB80: fmul dword ptr [eax + 8] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x1718CB83: fld dword ptr [ecx] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x1718CB85: fmul dword ptr [eax + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1718CB88: faddp st(1) */
    fp_push(*(float*)&MEM32(eax)); /* 0x1718CB8A: fld dword ptr [eax] */
    eax = MEM32(ebp + (-0x8)); /* 0x1718CB8C: mov eax, dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(edi + eax); /* 0x1718CB8F: fmul dword ptr [edi + eax] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1718CB92: faddp st(1) */
    RECOMP_CALL(sub_1721B142); /* 0x1718CB94: call 0x1721b142 */
    RECOMP_FLAGS_IN();
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x4C))); /* 0x1718CB99: fcom dword ptr [ebp - 0x4c] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + esi + (-0x130)) = _v; } /* 0x1718CB9C: fst dword ptr [ebp + esi - 0x130] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1718CBA3: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1718CBA5: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1718CBB5; /* 0x1718CBA8: jne 0x1718cbb5 */
L_1718CBAA:
    eax = MEM32(ebp + (-0x4)); /* 0x1718CBAA: mov eax, dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4C)) = _v; } /* 0x1718CBAD: fstp dword ptr [ebp - 0x4c] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1718CBB0: mov dword ptr [ebp - 0x10], eax */
    goto L_1718CBB7; /* 0x1718CBB3: jmp 0x1718cbb7 */
L_1718CBB5:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718CBB5: fstp st(0) */
L_1718CBB7:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x1718CBB7: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 0xCu; /* 0x1718CBBA: add dword ptr [ebp - 0xc], 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xCu; /* 0x1718CBBE: add edi, 0xc */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x4)), 3 */ /* 0x1718CBC1: cmp dword ptr [ebp - 4], 3 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718CB2D; /* 0x1718CBC5: jb 0x1718cb2d */
L_1718CBCB:
    esi = MEM32(ebp + (-0x10)); /* 0x1718CBCB: mov esi, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1718CBCE: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718CBD0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1718CBD2: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x1718CBD3: sub esi, eax */
    _flag_k = FK_CMP;
    PUSH32(esp, 2); /* 0x1718CBD5: push 2 */
    edx = POP32_VAL(esp); /* 0x1718CBD7: pop edx */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_1718CBE6; /* 0x1718CBD8: je 0x1718cbe6 */
L_1718CBDA:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1718CBDA: dec esi */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1718CBED; /* 0x1718CBDB: jne 0x1718cbed */
L_1718CBDD:
    eax = edx; /* 0x1718CBDD: mov eax, edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1718CBDF: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1718CBE1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1718CBE3: inc edx */
    _flag_k = FK_INC;
    goto L_1718CBED; /* 0x1718CBE4: jmp 0x1718cbed */
L_1718CBE6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718CBE6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1718CBE8: inc eax */
    _flag_k = FK_INC;
    ecx = edx; /* 0x1718CBE9: mov ecx, edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1718CBEB: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1718CBED:
    fp_push(*(float*)&MEM32(ebp + eax * 4 + (-0x124))); /* 0x1718CBED: fld dword ptr [ebp + eax*4 - 0x124] */
    esi = eax + eax * 2; /* 0x1718CBF4: lea esi, [eax + eax*2] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x1718CBF7: fld dword ptr [ebp - 0x28] */
    esi = ebx + esi * 4; /* 0x1718CBFA: lea esi, [ebx + esi*4] */
    _st[0] *= (double)*(float*)ADDR(0x1700141C); /* 0x1718CBFD: fmul dword ptr [0x1700141c] */
    edi = ebp + (-0x24); /* 0x1718CC03: lea edi, [ebp - 0x24] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718CC06: movsd dword ptr es:[edi], dword ptr [esi] */
    _st[0] -= _st[1]; /* 0x1718CC07: fsub st(1) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718CC09: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(_st[0]); /* 0x1718CC0A: fld st(0) */
    _st[0] = sin(_st[0]); _fpu_cmp = 1; /* 0x1718CC0C: fsin  */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718CC0E: movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = ecx + ecx * 2; /* 0x1718CC0F: lea ecx, [ecx + ecx*2] */
    esi = ebx + ecx * 4; /* 0x1718CC12: lea esi, [ebx + ecx*4] */
    edi = ebp + (-0xAC); /* 0x1718CC15: lea edi, [ebp - 0xac] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718CC1B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718CC1C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718CC1D: movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = edx + edx * 2; /* 0x1718CC1E: lea ecx, [edx + edx*2] */
    esi = ebx + ecx * 4; /* 0x1718CC21: lea esi, [ebx + ecx*4] */
    edi = ebp + (-0xA0); /* 0x1718CC24: lea edi, [ebp - 0xa0] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718CC2A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718CC2B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718CC2C: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1718CC2D: fstp dword ptr [ebp - 8] */
    _st[0] = cos(_st[0]); _fpu_cmp = 1; /* 0x1718CC30: fcos  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1718CC32: fstp dword ptr [ebp - 0xc] */
    fp_push(_st[0]); /* 0x1718CC35: fld st(0) */
    _st[0] = cos(_st[0]); _fpu_cmp = 1; /* 0x1718CC37: fcos  */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x1718CC39: fst dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x1718CC3C: fld dword ptr [ebp - 0xc] */
    _st[0] -= _st[1]; /* 0x1718CC3F: fsub st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x1718CC41: fstp dword ptr [ebp - 0x10] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718CC44: fstp st(0) */
    _st[0] = sin(_st[0]); _fpu_cmp = 1; /* 0x1718CC46: fsin  */
    fp_push(*(float*)&MEM32(ebp + (-0xAC))); /* 0x1718CC48: fld dword ptr [ebp - 0xac] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x24)); /* 0x1718CC4E: fmul dword ptr [ebp - 0x24] */
    fp_push(*(float*)&MEM32(ebp + (-0xA4))); /* 0x1718CC51: fld dword ptr [ebp - 0xa4] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x1C)); /* 0x1718CC57: fmul dword ptr [ebp - 0x1c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1718CC5A: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0xA8))); /* 0x1718CC5C: fld dword ptr [ebp - 0xa8] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x20)); /* 0x1718CC62: fmul dword ptr [ebp - 0x20] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1718CC65: faddp st(1) */
    _st[0] *= _st[1]; /* 0x1718CC67: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x8)); /* 0x1718CC69: fadd dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x1718CC6C: fld dword ptr [ebp - 0xc] */
    _st[0] *= _st[1]; /* 0x1718CC6F: fmul st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x1718CC71: fld dword ptr [ebp - 0x10] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x1718CC74: fmul dword ptr [ebp - 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1718CC77: fsubp st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x1718CC79: fmul dword ptr [ebp - 4] */
    _st[0] -= _st[1]; /* 0x1718CC7C: fsub st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x1718CC7E: fld dword ptr [ebp - 0x10] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x1718CC81: fmul dword ptr [ebp - 0xc] */
    fp_push(_st[2]); /* 0x1718CC84: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x1718CC86: fmul dword ptr [ebp - 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1718CC89: faddp st(1) */
    _st[0] *= _st[3]; /* 0x1718CC8B: fmul st(3) */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x1718CC8D: fdivp st(1) */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x1718CC8F: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718CC91: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0xA0))); /* 0x1718CC93: fld dword ptr [ebp - 0xa0] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x24)); /* 0x1718CC99: fmul dword ptr [ebp - 0x24] */
    fp_push(*(float*)&MEM32(ebp + (-0x98))); /* 0x1718CC9C: fld dword ptr [ebp - 0x98] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x1C)); /* 0x1718CCA2: fmul dword ptr [ebp - 0x1c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1718CCA5: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x9C))); /* 0x1718CCA7: fld dword ptr [ebp - 0x9c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x20)); /* 0x1718CCAD: fmul dword ptr [ebp - 0x20] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1718CCB0: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x1718CCB2: fld dword ptr [ebp - 0x24] */
    _st[0] *= _st[1]; /* 0x1718CCB5: fmul st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x1718CCB7: fld dword ptr [ebp - 0x20] */
    _st[0] *= _st[2]; /* 0x1718CCBA: fmul st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xF0)) = _v; } /* 0x1718CCBC: fstp dword ptr [ebp - 0xf0] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x1718CCC2: fld dword ptr [ebp - 0x1c] */
    ebx = MEM32(ebp + (-0x48)); /* 0x1718CCC5: mov ebx, dword ptr [ebp - 0x48] */
    _st[0] *= _st[2]; /* 0x1718CCC8: fmul st(2) */
    eax = MEM32(ebx); /* 0x1718CCCA: mov eax, dword ptr [ebx] */
    edx = MEM32(ebp + (-0x18)); /* 0x1718CCCC: mov edx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1718CCCF: add eax, edx */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xEC)) = _v; } /* 0x1718CCD1: fstp dword ptr [ebp - 0xec] */
    esi = ebp + (-0x24); /* 0x1718CCD7: lea esi, [ebp - 0x24] */
    fp_push(*(float*)&MEM32(ebp + (-0xA0))); /* 0x1718CCDA: fld dword ptr [ebp - 0xa0] */
    edi = eax; /* 0x1718CCE0: mov edi, eax */
    _st[0] -= _st[1]; /* 0x1718CCE2: fsub st(1) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718CCE4: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718CCE5: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x1718CCE6: fstp dword ptr [ebp - 0x44] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718CCE9: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718CCEB: fstp st(0) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718CCED: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x9C))); /* 0x1718CCEE: fld dword ptr [ebp - 0x9c] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0xF0)); /* 0x1718CCF4: fsub dword ptr [ebp - 0xf0] */
    edi = eax + 0xC; /* 0x1718CCFA: lea edi, [eax + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x1718CCFD: fstp dword ptr [ebp - 0x40] */
    esi = ebp + (-0xAC); /* 0x1718CD00: lea esi, [ebp - 0xac] */
    fp_push(*(float*)&MEM32(ebp + (-0x98))); /* 0x1718CD06: fld dword ptr [ebp - 0x98] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718CD0C: movsd dword ptr es:[edi], dword ptr [esi] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0xEC)); /* 0x1718CD0D: fsub dword ptr [ebp - 0xec] */
    fp_push(_st[0]); /* 0x1718CD13: fld st(0) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718CD15: movsd dword ptr es:[edi], dword ptr [esi] */
    _st[0] *= _st[1]; /* 0x1718CD16: fmul st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x40))); /* 0x1718CD18: fld dword ptr [ebp - 0x40] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x40)); /* 0x1718CD1B: fmul dword ptr [ebp - 0x40] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1718CD1E: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x1718CD20: fld dword ptr [ebp - 0x44] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x44)); /* 0x1718CD23: fmul dword ptr [ebp - 0x44] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1718CD26: faddp st(1) */
    _st[0] = sqrt(_st[0]); /* 0x1718CD28: fsqrt  */
    _st[0] = (double)*(float*)ADDR(0x17001424) / _st[0]; /* 0x1718CD2A: fdivr dword ptr [0x17001424] */
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x1718CD30: fld dword ptr [ebp - 0x44] */
    _st[0] *= _st[1]; /* 0x1718CD33: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x1718CD35: fstp dword ptr [ebp - 0x44] */
    fp_push(*(float*)&MEM32(ebp + (-0x40))); /* 0x1718CD38: fld dword ptr [ebp - 0x40] */
    _st[0] *= _st[1]; /* 0x1718CD3B: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x1718CD3D: fstp dword ptr [ebp - 0x40] */
    fp_push(_st[1]); /* 0x1718CD40: fld st(1) */
    _st[0] *= _st[1]; /* 0x1718CD42: fmul st(1) */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x1718CD44: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718CD46: fstp st(0) */
    fp_push(_st[1]); /* 0x1718CD48: fld st(1) */
    _st[0] *= _st[2]; /* 0x1718CD4A: fmul st(2) */
    _st[0] = (double)*(float*)ADDR(0x17001424) - _st[0]; /* 0x1718CD4C: fsubr dword ptr [0x17001424] */
    _st[0] = sqrt(_st[0]); /* 0x1718CD52: fsqrt  */
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x1718CD54: fld dword ptr [ebp - 0x44] */
    _st[0] *= _st[1]; /* 0x1718CD57: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xDC)) = _v; } /* 0x1718CD59: fstp dword ptr [ebp - 0xdc] */
    fp_push(*(float*)&MEM32(ebp + (-0x40))); /* 0x1718CD5F: fld dword ptr [ebp - 0x40] */
    _st[0] *= _st[1]; /* 0x1718CD62: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xD8)) = _v; } /* 0x1718CD64: fstp dword ptr [ebp - 0xd8] */
    fp_push(_st[1]); /* 0x1718CD6A: fld st(1) */
    _st[0] *= _st[1]; /* 0x1718CD6C: fmul st(1) */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x1718CD6E: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718CD70: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x1718CD72: fld dword ptr [ebp - 0x24] */
    _st[0] *= _st[2]; /* 0x1718CD75: fmul st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x1718CD77: fld dword ptr [ebp - 0x20] */
    _st[0] *= _st[3]; /* 0x1718CD7A: fmul st(3) */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x1718CD7C: fld dword ptr [ebp - 0x1c] */
    _st[0] *= _st[4]; /* 0x1718CD7F: fmul st(4) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x110)) = _v; } /* 0x1718CD81: fstp dword ptr [ebp - 0x110] */
    fp_push(_st[1]); /* 0x1718CD87: fld st(1) */
    _st[0] += (double)*(float*)ADDR(ebp + (-0xDC)); /* 0x1718CD89: fadd dword ptr [ebp - 0xdc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xBC)) = _v; } /* 0x1718CD8F: fstp dword ptr [ebp - 0xbc] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0xD8)); /* 0x1718CD95: fadd dword ptr [ebp - 0xd8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xB8)) = _v; } /* 0x1718CD9B: fstp dword ptr [ebp - 0xb8] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718CDA1: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x110))); /* 0x1718CDA3: fld dword ptr [ebp - 0x110] */
    _st[0] += _st[1]; /* 0x1718CDA9: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xB4)) = _v; } /* 0x1718CDAB: fstp dword ptr [ebp - 0xb4] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718CDB1: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718CDB3: fstp st(0) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718CDB5: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = eax + 0x18; /* 0x1718CDB6: lea edi, [eax + 0x18] */
    esi = ebp + (-0xBC); /* 0x1718CDB9: lea esi, [ebp - 0xbc] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718CDBF: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718CDC0: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718CDC1: movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(ebx); /* 0x1718CDC2: mov eax, dword ptr [ebx] */
    eax = eax + edx + 0x24; /* 0x1718CDC4: lea eax, [eax + edx + 0x24] */
    edi = eax; /* 0x1718CDC8: mov edi, eax */
    esi = ebp + (-0xBC); /* 0x1718CDCA: lea esi, [ebp - 0xbc] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718CDD0: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718CDD1: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718CDD2: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = eax + 0xC; /* 0x1718CDD3: lea edi, [eax + 0xc] */
    esi = ebp + (-0xAC); /* 0x1718CDD6: lea esi, [ebp - 0xac] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718CDDC: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718CDDD: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718CDDE: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = eax + 0x18; /* 0x1718CDDF: lea edi, [eax + 0x18] */
    esi = ebp + (-0xA0); /* 0x1718CDE2: lea esi, [ebp - 0xa0] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718CDE8: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718CDE9: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718CDEA: movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = MEM32(ebx); /* 0x1718CDEB: mov ecx, dword ptr [ebx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x1718CDED: add ecx, edx */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1718BDE2); /* 0x1718CDEF: call 0x1718bde2 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x1718CDF4: mov eax, dword ptr [ebx] */
    ecx = MEM32(ebp + (-0x18)); /* 0x1718CDF6: mov ecx, dword ptr [ebp - 0x18] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718CDF9: fstp st(0) */
    ecx = eax + ecx + 0x24; /* 0x1718CDFB: lea ecx, [eax + ecx + 0x24] */
    RECOMP_CALL(sub_1718BDE2); /* 0x1718CDFF: call 0x1718bde2 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x30)) = MEM32(ebp + (-0x30)) + 1; /* 0x1718CE04: inc dword ptr [ebp - 0x30] */
    _flag_k = FK_INC;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718CE07: fstp st(0) */
    eax = MEM32(ebp + (-0x30)); /* 0x1718CE09: mov eax, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x34)) = MEM32(ebp + (-0x34)) + 0x24u; /* 0x1718CE0C: add dword ptr [ebp - 0x34], 0x24 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) + 0x48u; /* 0x1718CE10: add dword ptr [ebp - 0x18], 0x48 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebx + (-0xC)) */ /* 0x1718CE14: cmp eax, dword ptr [ebx - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718C9E7; /* 0x1718CE17: jb 0x1718c9e7 */
L_1718CE1D:
    edi = MEM32(ebp + (-0xB0)); /* 0x1718CE1D: mov edi, dword ptr [ebp - 0xb0] */
    ebx = MEM32(ebp + 0x8); /* 0x1718CE23: mov ebx, dword ptr [ebp + 8] */
L_1718CE26:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x38)) = MEM32(ebp + (-0x38)) + 1; /* 0x1718CE26: inc dword ptr [ebp - 0x38] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x2C)) = MEM32(ebp + (-0x2C)) + 0x10u; /* 0x1718CE29: add dword ptr [ebp - 0x2c], 0x10 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x38)), ebx */ /* 0x1718CE2D: cmp dword ptr [ebp - 0x38], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718C989; /* 0x1718CE30: jb 0x1718c989 */
L_1718CE36:
    eax = MEM32(edi); /* 0x1718CE36: mov eax, dword ptr [edi] */
    if (4u) _cf = (((ebx) >> 28) & 1u); /* 0x1718CE38: shl ebx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ebx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 4u; /* 0x1718CE38: shl ebx, 4 */
    eax = MEM32(ebx + eax + (-0xC)); /* 0x1718CE3B: mov eax, dword ptr [ebx + eax - 0xc] */
    MEM32(edi + 0x24) = eax; /* 0x1718CE3F: mov dword ptr [edi + 0x24], eax */
    eax = MEM32(ebp + (-0x14)); /* 0x1718CE42: mov eax, dword ptr [ebp - 0x14] */
L_1718CE45:
    esi = POP32_VAL(esp); /* 0x1718CE45: pop esi */
L_1718CE46:
    edi = POP32_VAL(esp); /* 0x1718CE46: pop edi */
    ebx = POP32_VAL(esp); /* 0x1718CE47: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1718CE48: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1718CE49: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1718CE51(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718CE51u);

L_1718CE51:
    edi = edi; /* 0x1718CE51: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718CE53: push ebp */
    ebp = esp; /* 0x1718CE54: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1718CE56: push ecx */
    RECOMP_CALL(sub_1721B544); /* 0x1718CE57: call 0x1721b544 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x1718CE5C: mov dword ptr [ebp - 4], eax */
    fp_push((double)(int32_t)MEM32(ebp + (-0x4))); /* 0x1718CE5F: fild dword ptr [ebp - 4] */
    _st[0] *= *(double*)ADDR(0x170220D8); /* 0x1718CE62: fmul qword ptr [0x170220d8] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1718CE68: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1718CE69: ret  */
    RECOMP_REGS_OUT();
}

void sub_1718CE6F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718CE6Fu);

L_1718CE6F:
    /* test ecx, ecx */ /* 0x1718CE6F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718CE83; /* 0x1718CE71: jle 0x1718ce83 */
L_1718CE73:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1FFFFFFFu);
    ecx = ecx & 0x1FFFFFFFu; /* 0x1718CE73: and ecx, 0x1fffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1718CE79: push edi */
    if (1u) _cf = (((ecx) >> 31) & 1u); /* 0x1718CE7A: shl ecx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((ecx << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 1u; /* 0x1718CE7A: shl ecx, 1 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718CE7C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = edx; /* 0x1718CE7E: mov edi, edx */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1718CE80: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    edi = POP32_VAL(esp); /* 0x1718CE82: pop edi */
L_1718CE83:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1718CE83: ret  */
    RECOMP_REGS_OUT();
}

void sub_1718CE89(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718CE89u);

L_1718CE89:
    edi = edi; /* 0x1718CE89: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718CE8B: push ebp */
    ebp = esp; /* 0x1718CE8C: mov ebp, esp */
    /* test edx, edx */ /* 0x1718CE8E: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718CEA4; /* 0x1718CE90: jle 0x1718cea4 */
L_1718CE92:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1718CE92: sub ecx, eax */
    _flag_k = FK_CMP;
L_1718CE94:
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x1718CE94: fld qword ptr [ebp + 8] */
    _st[0] *= *(double*)ADDR(ecx + eax); /* 0x1718CE97: fmul qword ptr [ecx + eax] */
    _st[0] += *(double*)ADDR(eax); /* 0x1718CE9A: fadd qword ptr [eax] */
    { double _v = fp_pop(); *(double*)ADDR(eax) = _v; } /* 0x1718CE9C: fstp qword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1718CE9E: add eax, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1718CEA1: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1718CE94; /* 0x1718CEA2: jne 0x1718ce94 */
L_1718CEA4:
    ebp = POP32_VAL(esp); /* 0x1718CEA4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1718CEA5: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1718CEAD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718CEADu);

L_1718CEAD:
    edi = edi; /* 0x1718CEAD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718CEAF: push ebp */
    ebp = esp; /* 0x1718CEB0: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1718CEB2: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1718CEB3: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1718CEB6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718CECC; /* 0x1718CEB8: jle 0x1718cecc */
L_1718CEBA:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1718CEBA: sub ecx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x1718CEBC: sub edx, eax */
    _flag_k = FK_CMP;
L_1718CEBE:
    fp_push(*(float*)&MEM32(ecx + eax)); /* 0x1718CEBE: fld dword ptr [ecx + eax] */
    _st[0] -= (double)*(float*)ADDR(eax); /* 0x1718CEC1: fsub dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + eax) = _v; } /* 0x1718CEC3: fstp dword ptr [edx + eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1718CEC6: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1718CEC9: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1718CEBE; /* 0x1718CECA: jne 0x1718cebe */
L_1718CECC:
    esi = POP32_VAL(esp); /* 0x1718CECC: pop esi */
    ebp = POP32_VAL(esp); /* 0x1718CECD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1718CECE: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1718CED6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718CED6u);

L_1718CED6:
    edi = edi; /* 0x1718CED6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718CED8: push ebp */
    ebp = esp; /* 0x1718CED9: mov ebp, esp */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718CEDB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), eax */ /* 0x1718CEDD: cmp dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718CEF4; /* 0x1718CEE0: jle 0x1718cef4 */
L_1718CEE2:
    ecx = MEM32(ebp + 0x8); /* 0x1718CEE2: mov ecx, dword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(ecx + eax * 8)); /* 0x1718CEE5: fld qword ptr [ecx + eax*8] */
    ecx = MEM32(ebp + 0x10); /* 0x1718CEE8: mov ecx, dword ptr [ebp + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + eax * 4) = _v; } /* 0x1718CEEB: fstp dword ptr [ecx + eax*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1718CEEE: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x1718CEEF: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1718CEE2; /* 0x1718CEF2: jl 0x1718cee2 */
L_1718CEF4:
    ebp = POP32_VAL(esp); /* 0x1718CEF4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1718CEF5: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1718CEFD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718CEFDu);

L_1718CEFD:
    /* test edx, edx */ /* 0x1718CEFD: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(0.0); /* 0x1718CEFF: fldz  */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718CF12; /* 0x1718CF01: jle 0x1718cf12 */
L_1718CF03:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1718CF03: sub ecx, eax */
    _flag_k = FK_CMP;
L_1718CF05:
    fp_push(*(float*)&MEM32(ecx + eax)); /* 0x1718CF05: fld dword ptr [ecx + eax] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x1718CF08: fmul dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1718CF0A: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1718CF0D: dec edx */
    _flag_k = FK_DEC;
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1718CF0E: faddp st(1) */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1718CF05; /* 0x1718CF10: jne 0x1718cf05 */
L_1718CF12:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1718CF12: ret  */
    RECOMP_REGS_OUT();
}

void sub_1718CF18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718CF18u);

L_1718CF18:
    edi = edi; /* 0x1718CF18: mov edi, edi */
    PUSH32(esp, esi); /* 0x1718CF1A: push esi */
    esi = eax; /* 0x1718CF1B: mov esi, eax */
    /* test esi, esi */ /* 0x1718CF1D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718CF43; /* 0x1718CF1F: jle 0x1718cf43 */
L_1718CF21:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x1718CF21: sub edx, ecx */
    _flag_k = FK_CMP;
L_1718CF23:
    fp_push(*(double*)ADDR(edx + ecx)); /* 0x1718CF23: fld qword ptr [edx + ecx] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x1718CF26: fcom qword ptr [0x17001d90] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1718CF2C: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1718CF2E: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1718CF39; /* 0x1718CF31: jp 0x1718cf39 */
L_1718CF33:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718CF33: fstp st(0) */
    fp_push(0.0); /* 0x1718CF35: fldz  */
    goto L_1718CF3B; /* 0x1718CF37: jmp 0x1718cf3b */
L_1718CF39:
    _st[0] = sqrt(_st[0]); /* 0x1718CF39: fsqrt  */
L_1718CF3B:
    { double _v = fp_pop(); *(double*)ADDR(ecx) = _v; } /* 0x1718CF3B: fstp qword ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x1718CF3D: add ecx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1718CF40: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1718CF23; /* 0x1718CF41: jne 0x1718cf23 */
L_1718CF43:
    esi = POP32_VAL(esp); /* 0x1718CF43: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1718CF44: ret  */
    RECOMP_REGS_OUT();
}

void sub_1718CF4A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718CF4Au);

L_1718CF4A:
    edi = edi; /* 0x1718CF4A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718CF4C: push ebp */
    ebp = esp; /* 0x1718CF4D: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1718CF4F: push ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718CF50: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x1718CF52: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718CF80; /* 0x1718CF54: jle 0x1718cf80 */
L_1718CF56:
    MEM32(ebp + (-0x4)) = ecx; /* 0x1718CF56: mov dword ptr [ebp - 4], ecx */
    PUSH32(esp, esi); /* 0x1718CF59: push esi */
L_1718CF5A:
    fp_push(*(double*)ADDR(ebx + eax * 8)); /* 0x1718CF5A: fld qword ptr [ebx + eax*8] */
    PUSH32(esp, ecx); /* 0x1718CF5D: push ecx */
    esi = eax + 0x1; /* 0x1718CF5E: lea esi, [eax + 1] */
    eax = MEM32(ebp + (-0x4)); /* 0x1718CF61: mov eax, dword ptr [ebp - 4] */
    PUSH32(esp, ecx); /* 0x1718CF64: push ecx */
    edx = esi; /* 0x1718CF65: mov edx, esi */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1718CF67: fstp qword ptr [esp] */
    ecx = ebx; /* 0x1718CF6A: mov ecx, ebx */
    RECOMP_CALL(sub_1718CE89); /* 0x1718CF6C: call 0x1718ce89 */
    RECOMP_FLAGS_IN();
    ecx = edi; /* 0x1718CF71: mov ecx, edi */
    if (3u) _cf = (((ecx) >> 29) & 1u); /* 0x1718CF73: shl ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 3u; /* 0x1718CF73: shl ecx, 3 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + ecx; /* 0x1718CF76: add dword ptr [ebp - 4], ecx */
    _flag_k = FK_ADD;
    eax = esi; /* 0x1718CF79: mov eax, esi */
    /* cmp eax, edi */ /* 0x1718CF7B: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1718CF5A; /* 0x1718CF7D: jl 0x1718cf5a */
L_1718CF7F:
    esi = POP32_VAL(esp); /* 0x1718CF7F: pop esi */
L_1718CF80:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1718CF80: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1718CF81: ret  */
    RECOMP_REGS_OUT();
}

void sub_1718CF87(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718CF87u);

L_1718CF87:
    edi = edi; /* 0x1718CF87: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718CF89: push ebp */
    ebp = esp; /* 0x1718CF8A: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1718CF8C: push ecx */
    PUSH32(esp, ecx); /* 0x1718CF8D: push ecx */
    /* test edx, edx */ /* 0x1718CF8E: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718CFE4; /* 0x1718CF90: jle 0x1718cfe4 */
L_1718CF92:
    ecx = MEM32(ebp + 0x8); /* 0x1718CF92: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1718CF95: push ebx */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1718CF96: mov dword ptr [ebp - 4], ecx */
    PUSH32(esp, esi); /* 0x1718CF99: push esi */
    PUSH32(esp, edi); /* 0x1718CF9A: push edi */
    ecx = edx; /* 0x1718CF9B: mov ecx, edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1718CF9D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x1718CF9F: neg ecx */
    _flag_k = FK_CMP;
    edi = edx; /* 0x1718CFA1: mov edi, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1718CFA3: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x8)) = eax; /* 0x1718CFA4: mov dword ptr [ebp - 8], eax */
    if (3u) _cf = (((edi) >> 29) & 1u); /* 0x1718CFA7: shl edi, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edi << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 3u; /* 0x1718CFA7: shl edi, 3 */
    if (3u) _cf = (((ecx) >> 29) & 1u); /* 0x1718CFAA: shl ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 3u; /* 0x1718CFAA: shl ecx, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + 0x8); /* 0x1718CFAD: sub eax, dword ptr [ebp + 8] */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = edx; /* 0x1718CFB0: mov dword ptr [ebp + 8], edx */
L_1718CFB3:
    /* test ebx, ebx */ /* 0x1718CFB3: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + (-0x8)); /* 0x1718CFB5: mov edx, dword ptr [ebp - 8] */
    fp_push(*(double*)ADDR(edx)); /* 0x1718CFB8: fld qword ptr [edx] */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718CFD0; /* 0x1718CFBA: jle 0x1718cfd0 */
L_1718CFBC:
    esi = MEM32(ebp + (-0x4)); /* 0x1718CFBC: mov esi, dword ptr [ebp - 4] */
    edx = ebx; /* 0x1718CFBF: mov edx, ebx */
L_1718CFC1:
    fp_push(_st[0]); /* 0x1718CFC1: fld st(0) */
    _st[0] *= *(double*)ADDR(eax + esi); /* 0x1718CFC3: fmul qword ptr [eax + esi] */
    _st[0] = *(double*)ADDR(esi) - _st[0]; /* 0x1718CFC6: fsubr qword ptr [esi] */
    { double _v = fp_pop(); *(double*)ADDR(esi) = _v; } /* 0x1718CFC8: fstp qword ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x1718CFCA: add esi, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1718CFCD: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1718CFC1; /* 0x1718CFCE: jne 0x1718cfc1 */
L_1718CFD0:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + edi; /* 0x1718CFD0: add dword ptr [ebp - 4], edi */
    _flag_k = FK_ADD;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718CFD3: fstp st(0) */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 8; /* 0x1718CFD5: add dword ptr [ebp - 8], 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1718CFD9: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1718CFDB: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) - 1; /* 0x1718CFDC: dec dword ptr [ebp + 8] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1718CFB3; /* 0x1718CFDF: jne 0x1718cfb3 */
L_1718CFE1:
    edi = POP32_VAL(esp); /* 0x1718CFE1: pop edi */
    esi = POP32_VAL(esp); /* 0x1718CFE2: pop esi */
    ebx = POP32_VAL(esp); /* 0x1718CFE3: pop ebx */
L_1718CFE4:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1718CFE4: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1718CFE5: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1718CFED(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718CFEDu);

L_1718CFED:
    edi = edi; /* 0x1718CFED: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718CFEF: push ebp */
    ebp = esp; /* 0x1718CFF0: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1718CFF2: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x10); /* 0x1718CFF5: mov eax, dword ptr [ecx + 0x10] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0xC)); /* 0x1718CFF8: imul eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1718CFFC: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx), edx */ /* 0x1718CFFE: cmp dword ptr [ecx], edx */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718D00A; /* 0x1718D000: jne 0x1718d00a */
L_1718D002:
    ecx = MEM32(ecx + 0x4); /* 0x1718D002: mov ecx, dword ptr [ecx + 4] */
    eax = ecx + eax * 8; /* 0x1718D005: lea eax, [ecx + eax*8] */
    goto L_1718D026; /* 0x1718D008: jmp 0x1718d026 */
L_1718D00A:
    /* cmp MEM32(ecx + 0xC), edx */ /* 0x1718D00A: cmp dword ptr [ecx + 0xc], edx */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1718D00D: push esi */
    esi = MEM32(ecx + 0x4); /* 0x1718D00E: mov esi, dword ptr [ecx + 4] */
    esi = esi + eax * 4; /* 0x1718D011: lea esi, [esi + eax*4] */
    eax = MEM32(ecx + 0x14); /* 0x1718D014: mov eax, dword ptr [ecx + 0x14] */
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718D025; /* 0x1718D017: jle 0x1718d025 */
L_1718D019:
    fp_push(*(float*)&MEM32(esi + edx * 4)); /* 0x1718D019: fld dword ptr [esi + edx*4] */
    { double _v = fp_pop(); *(double*)ADDR(eax + edx * 8) = _v; } /* 0x1718D01C: fstp qword ptr [eax + edx*8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1718D01F: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, MEM32(ecx + 0xC) */ /* 0x1718D020: cmp edx, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1718D019; /* 0x1718D023: jl 0x1718d019 */
L_1718D025:
    esi = POP32_VAL(esp); /* 0x1718D025: pop esi */
L_1718D026:
    ebp = POP32_VAL(esp); /* 0x1718D026: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1718D027: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1718D02F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718D02Fu);

L_1718D02F:
    edi = edi; /* 0x1718D02F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718D031: push ebp */
    ebp = esp; /* 0x1718D032: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1718D034: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x10); /* 0x1718D037: mov eax, dword ptr [ecx + 0x10] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0xC)); /* 0x1718D03A: imul eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1718D03E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ecx), edx */ /* 0x1718D040: cmp dword ptr [ecx], edx */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718D04C; /* 0x1718D042: je 0x1718d04c */
L_1718D044:
    ecx = MEM32(ecx + 0x4); /* 0x1718D044: mov ecx, dword ptr [ecx + 4] */
    eax = ecx + eax * 4; /* 0x1718D047: lea eax, [ecx + eax*4] */
    goto L_1718D068; /* 0x1718D04A: jmp 0x1718d068 */
L_1718D04C:
    /* cmp MEM32(ecx + 0xC), edx */ /* 0x1718D04C: cmp dword ptr [ecx + 0xc], edx */
    _flag_a = (uint32_t)(MEM32(ecx + 0xC)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1718D04F: push esi */
    esi = MEM32(ecx + 0x4); /* 0x1718D050: mov esi, dword ptr [ecx + 4] */
    esi = esi + eax * 8; /* 0x1718D053: lea esi, [esi + eax*8] */
    eax = MEM32(ecx + 0x18); /* 0x1718D056: mov eax, dword ptr [ecx + 0x18] */
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718D067; /* 0x1718D059: jle 0x1718d067 */
L_1718D05B:
    fp_push(*(double*)ADDR(esi + edx * 8)); /* 0x1718D05B: fld qword ptr [esi + edx*8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + edx * 4) = _v; } /* 0x1718D05E: fstp dword ptr [eax + edx*4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1718D061: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, MEM32(ecx + 0xC) */ /* 0x1718D062: cmp edx, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ecx + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1718D05B; /* 0x1718D065: jl 0x1718d05b */
L_1718D067:
    esi = POP32_VAL(esp); /* 0x1718D067: pop esi */
L_1718D068:
    ebp = POP32_VAL(esp); /* 0x1718D068: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1718D069: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1718D071(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718D071u);

L_1718D071:
    edi = edi; /* 0x1718D071: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718D073: push ebp */
    ebp = esp; /* 0x1718D074: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1718D076: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1718D077: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1718D07A: push edi */
    edi = MEM32(esi + 0x8); /* 0x1718D07B: mov edi, dword ptr [esi + 8] */
    MEM32(ebp + 0x8) = edi; /* 0x1718D07E: mov dword ptr [ebp + 8], edi */
    RECOMP_CALL(sub_1718CE51); /* 0x1718D081: call 0x1718ce51 */
    RECOMP_FLAGS_IN();
    _st[0] = _st[0] * (double)(int32_t)MEM32(ebp + 0x8); /* 0x1718D086: fimul dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x1718D089: push ecx */
    PUSH32(esp, ecx); /* 0x1718D08A: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1718D08B: fstp qword ptr [esp] */
    RECOMP_CALL(sub_1721B320); /* 0x1718D08E: call 0x1721b320 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1718D093: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1718D094: pop ecx */
    RECOMP_CALL(sub_1721B050); /* 0x1718D095: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x1718D09A: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1718D0A1; /* 0x1718D09C: jl 0x1718d0a1 */
L_1718D09E:
    eax = edi + (-0x1); /* 0x1718D09E: lea eax, [edi - 1] */
L_1718D0A1:
    PUSH32(esp, eax); /* 0x1718D0A1: push eax */
    PUSH32(esp, esi); /* 0x1718D0A2: push esi */
    RECOMP_CALL(sub_1718CFED); /* 0x1718D0A3: call 0x1718cfed */
    RECOMP_FLAGS_IN();
    esi = MEM32(esi + 0xC); /* 0x1718D0A8: mov esi, dword ptr [esi + 0xc] */
    /* test esi, esi */ /* 0x1718D0AB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718D0BF; /* 0x1718D0AD: jle 0x1718d0bf */
L_1718D0AF:
    ecx = MEM32(ebp + 0xC); /* 0x1718D0AF: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1718D0B2: sub eax, ecx */
    _flag_k = FK_CMP;
L_1718D0B4:
    fp_push(*(double*)ADDR(eax + ecx)); /* 0x1718D0B4: fld qword ptr [eax + ecx] */
    { double _v = fp_pop(); *(double*)ADDR(ecx) = _v; } /* 0x1718D0B7: fstp qword ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x1718D0B9: add ecx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1718D0BC: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1718D0B4; /* 0x1718D0BD: jne 0x1718d0b4 */
L_1718D0BF:
    edi = POP32_VAL(esp); /* 0x1718D0BF: pop edi */
    esi = POP32_VAL(esp); /* 0x1718D0C0: pop esi */
    ebp = POP32_VAL(esp); /* 0x1718D0C1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1718D0C2: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1718D0CA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718D0CAu);

L_1718D0CA:
    edi = edi; /* 0x1718D0CA: mov edi, edi */
    PUSH32(esp, esi); /* 0x1718D0CC: push esi */
    esi = eax; /* 0x1718D0CD: mov esi, eax */
    /* test esi, esi */ /* 0x1718D0CF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = 0x40000000u; /* 0x1718D0D1: mov eax, 0x40000000 */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718D0E6; /* 0x1718D0D6: jle 0x1718d0e6 */
L_1718D0D8:
    ecx = MEM32(edx); /* 0x1718D0D8: mov ecx, dword ptr [edx] */
    /* cmp ecx, eax */ /* 0x1718D0DA: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1718D0E0; /* 0x1718D0DC: jge 0x1718d0e0 */
L_1718D0DE:
    eax = ecx; /* 0x1718D0DE: mov eax, ecx */
L_1718D0E0:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x38u; /* 0x1718D0E0: add edx, 0x38 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1718D0E3: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1718D0D8; /* 0x1718D0E4: jne 0x1718d0d8 */
L_1718D0E6:
    esi = POP32_VAL(esp); /* 0x1718D0E6: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1718D0E7: ret  */
    RECOMP_REGS_OUT();
}

void sub_1718D0ED(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718D0EDu);

L_1718D0ED:
    edi = edi; /* 0x1718D0ED: mov edi, edi */
    PUSH32(esp, esi); /* 0x1718D0EF: push esi */
    esi = eax; /* 0x1718D0F0: mov esi, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718D0F2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1718D0F4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718D106; /* 0x1718D0F6: jle 0x1718d106 */
L_1718D0F8:
    ecx = MEM32(edx); /* 0x1718D0F8: mov ecx, dword ptr [edx] */
    /* cmp ecx, eax */ /* 0x1718D0FA: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718D100; /* 0x1718D0FC: jle 0x1718d100 */
L_1718D0FE:
    eax = ecx; /* 0x1718D0FE: mov eax, ecx */
L_1718D100:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x38u; /* 0x1718D100: add edx, 0x38 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1718D103: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1718D0F8; /* 0x1718D104: jne 0x1718d0f8 */
L_1718D106:
    esi = POP32_VAL(esp); /* 0x1718D106: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1718D107: ret  */
    RECOMP_REGS_OUT();
}

void sub_1718D10D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718D10Du);

L_1718D10D:
    edi = edi; /* 0x1718D10D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718D10F: push ebp */
    ebp = esp; /* 0x1718D110: mov ebp, esp */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718D112: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1718D114: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x1718D116: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718D133; /* 0x1718D119: jle 0x1718d133 */
L_1718D11B:
    edx = MEM32(ebp + 0xC); /* 0x1718D11B: mov edx, dword ptr [ebp + 0xc] */
    edx = MEM32(edx + ecx * 4); /* 0x1718D11E: mov edx, dword ptr [edx + ecx*4] */
    /* cmp edx, MEM32(ebp + 0x8) */ /* 0x1718D121: cmp edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718D12D; /* 0x1718D124: jne 0x1718d12d */
L_1718D126:
    edx = MEM32(ebp + 0x14); /* 0x1718D126: mov edx, dword ptr [ebp + 0x14] */
    MEM32(edx + eax * 4) = ecx; /* 0x1718D129: mov dword ptr [edx + eax*4], ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1718D12C: inc eax */
    _flag_k = FK_INC;
L_1718D12D:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1718D12D: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, MEM32(ebp + 0x10) */ /* 0x1718D12E: cmp ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1718D11B; /* 0x1718D131: jl 0x1718d11b */
L_1718D133:
    ebp = POP32_VAL(esp); /* 0x1718D133: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1718D134: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1718D13C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718D13Cu);

L_1718D13C:
    edi = edi; /* 0x1718D13C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718D13E: push ebp */
    ebp = esp; /* 0x1718D13F: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1718D141: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1718D142: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1718D145: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718D1B3; /* 0x1718D147: je 0x1718d1b3 */
L_1718D149:
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x1718D149: push dword ptr [esi + 4] */
    RECOMP_CALL(sub_1721B010); /* 0x1718D14C: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x14)); /* 0x1718D151: push dword ptr [esi + 0x14] */
    RECOMP_CALL(sub_1721B010); /* 0x1718D154: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1718D159: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1718D15A: pop ecx */
    PUSH32(esp, MEM32(esi)); /* 0x1718D15B: push dword ptr [esi] */
    RECOMP_CALL(sub_17196580); /* 0x1718D15D: call 0x17196580 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x1718D162: push dword ptr [esi + 8] */
    RECOMP_CALL(sub_1721B010); /* 0x1718D165: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x1718D16A: push dword ptr [esi + 0x10] */
    RECOMP_CALL(sub_1721B010); /* 0x1718D16D: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x1718D172: push dword ptr [esi + 0x18] */
    RECOMP_CALL(sub_1721B010); /* 0x1718D175: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x1C)); /* 0x1718D17A: push dword ptr [esi + 0x1c] */
    RECOMP_CALL(sub_1721B010); /* 0x1718D17D: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x20)); /* 0x1718D182: push dword ptr [esi + 0x20] */
    RECOMP_CALL(sub_1721B010); /* 0x1718D185: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x24)); /* 0x1718D18A: push dword ptr [esi + 0x24] */
    RECOMP_CALL(sub_1721B010); /* 0x1718D18D: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x28)); /* 0x1718D192: push dword ptr [esi + 0x28] */
    RECOMP_CALL(sub_1721B010); /* 0x1718D195: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0xC)); /* 0x1718D19A: push dword ptr [esi + 0xc] */
    RECOMP_CALL(sub_1721B010); /* 0x1718D19D: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x2C)); /* 0x1718D1A2: push dword ptr [esi + 0x2c] */
    RECOMP_CALL(sub_1721B010); /* 0x1718D1A5: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1718D1AA: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x1718D1AB: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x28u; /* 0x1718D1B0: add esp, 0x28 */
    _flag_k = FK_ADD;
L_1718D1B3:
    esi = POP32_VAL(esp); /* 0x1718D1B3: pop esi */
    ebp = POP32_VAL(esp); /* 0x1718D1B4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1718D1B5: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1718D1BD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718D1BDu);

L_1718D1BD:
    edi = edi; /* 0x1718D1BD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718D1BF: push ebp */
    ebp = esp; /* 0x1718D1C0: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1718D1C2: push ebx */
    PUSH32(esp, esi); /* 0x1718D1C3: push esi */
    PUSH32(esp, edi); /* 0x1718D1C4: push edi */
    PUSH32(esp, 0x30u); /* 0x1718D1C5: push 0x30 */
    RECOMP_CALL(sub_1721B01C); /* 0x1718D1C7: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718D1CC: mov esi, eax */
    /* test esi, esi */ /* 0x1718D1CE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1718D1D0: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718D2DF; /* 0x1718D1D1: je 0x1718d2df */
L_1718D1D7:
    PUSH32(esp, 0xCu); /* 0x1718D1D7: push 0xc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718D1D9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1718D1DB: pop ecx */
    edi = esi; /* 0x1718D1DC: mov edi, esi */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1718D1DE: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    edi = MEM32(ebp + 0xC); /* 0x1718D1E0: mov edi, dword ptr [ebp + 0xc] */
    eax = edi; /* 0x1718D1E3: mov eax, edi */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x1718D1E5: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x1718D1E5: shl eax, 3 */
    PUSH32(esp, eax); /* 0x1718D1E8: push eax */
    MEM32(ebp + 0xC) = eax; /* 0x1718D1E9: mov dword ptr [ebp + 0xc], eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1718D1EC: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1718D1F1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1718D1F3: pop ecx */
    MEM32(esi + 0x14) = eax; /* 0x1718D1F4: mov dword ptr [esi + 0x14], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718D2DF; /* 0x1718D1F7: je 0x1718d2df */
L_1718D1FD:
    eax = MEM32(ebp + 0x8); /* 0x1718D1FD: mov eax, dword ptr [ebp + 8] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x1718D200: imul eax, edi */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x1718D203: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x1718D203: shl eax, 3 */
    PUSH32(esp, eax); /* 0x1718D206: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1718D207: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1718D20C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1718D20E: pop ecx */
    MEM32(esi + 0x4) = eax; /* 0x1718D20F: mov dword ptr [esi + 4], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718D2DF; /* 0x1718D212: je 0x1718d2df */
L_1718D218:
    /* cmp MEM32(0x1723749C), 0 */ /* 0x1718D218: cmp dword ptr [0x1723749c], 0 */
    _flag_a = (uint32_t)(MEM32(0x1723749C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718D22C; /* 0x1718D21F: je 0x1718d22c */
L_1718D221:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1718D221: push dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x1718D224: push edi */
    RECOMP_CALL(sub_1719678E); /* 0x1718D225: call 0x1719678e */
    RECOMP_FLAGS_IN();
    goto L_1718D235; /* 0x1718D22A: jmp 0x1718d235 */
L_1718D22C:
    PUSH32(esp, edi); /* 0x1718D22C: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1718D22D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_17196631); /* 0x1718D230: call 0x17196631 */
    RECOMP_FLAGS_IN();
L_1718D235:
    /* test eax, eax */ /* 0x1718D235: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = eax; /* 0x1718D237: mov dword ptr [esi], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718D2DF; /* 0x1718D239: je 0x1718d2df */
L_1718D23F:
    ebx = edi; /* 0x1718D23F: mov ebx, edi */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edi); /* 0x1718D241: imul ebx, edi */
    if (3u) _cf = (((ebx) >> 29) & 1u); /* 0x1718D244: shl ebx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ebx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 3u; /* 0x1718D244: shl ebx, 3 */
    PUSH32(esp, ebx); /* 0x1718D247: push ebx */
    RECOMP_CALL(sub_1721B01C); /* 0x1718D248: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1718D24D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1718D24F: pop ecx */
    MEM32(esi + 0x8) = eax; /* 0x1718D250: mov dword ptr [esi + 8], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718D2DF; /* 0x1718D253: je 0x1718d2df */
L_1718D259:
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(ebp + 0x10)); /* 0x1718D259: imul edi, dword ptr [ebp + 0x10] */
    if (3u) _cf = (((edi) >> 29) & 1u); /* 0x1718D25D: shl edi, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edi << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 3u; /* 0x1718D25D: shl edi, 3 */
    PUSH32(esp, edi); /* 0x1718D260: push edi */
    MEM32(ebp + 0x10) = edi; /* 0x1718D261: mov dword ptr [ebp + 0x10], edi */
    RECOMP_CALL(sub_1721B01C); /* 0x1718D264: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1718D269: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1718D26B: pop ecx */
    MEM32(esi + 0x10) = eax; /* 0x1718D26C: mov dword ptr [esi + 0x10], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718D2DF; /* 0x1718D26F: je 0x1718d2df */
L_1718D271:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1718D271: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1721B01C); /* 0x1718D274: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1718D279: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1718D27B: pop ecx */
    MEM32(esi + 0x18) = eax; /* 0x1718D27C: mov dword ptr [esi + 0x18], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718D2DF; /* 0x1718D27F: je 0x1718d2df */
L_1718D281:
    PUSH32(esp, ebx); /* 0x1718D281: push ebx */
    RECOMP_CALL(sub_1721B01C); /* 0x1718D282: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1718D287: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1718D289: pop ecx */
    MEM32(esi + 0x1C) = eax; /* 0x1718D28A: mov dword ptr [esi + 0x1c], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718D2DF; /* 0x1718D28D: je 0x1718d2df */
L_1718D28F:
    edi = MEM32(ebp + 0x8); /* 0x1718D28F: mov edi, dword ptr [ebp + 8] */
    if (2u) _cf = (((edi) >> 30) & 1u); /* 0x1718D292: shl edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 2u; /* 0x1718D292: shl edi, 2 */
    PUSH32(esp, edi); /* 0x1718D295: push edi */
    RECOMP_CALL(sub_1721B01C); /* 0x1718D296: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1718D29B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1718D29D: pop ecx */
    MEM32(esi + 0x20) = eax; /* 0x1718D29E: mov dword ptr [esi + 0x20], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718D2DF; /* 0x1718D2A1: je 0x1718d2df */
L_1718D2A3:
    PUSH32(esp, edi); /* 0x1718D2A3: push edi */
    RECOMP_CALL(sub_1721B01C); /* 0x1718D2A4: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1718D2A9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1718D2AB: pop ecx */
    MEM32(esi + 0x24) = eax; /* 0x1718D2AC: mov dword ptr [esi + 0x24], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718D2DF; /* 0x1718D2AF: je 0x1718d2df */
L_1718D2B1:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1718D2B1: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1721B01C); /* 0x1718D2B4: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1718D2B9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1718D2BB: pop ecx */
    MEM32(esi + 0x28) = eax; /* 0x1718D2BC: mov dword ptr [esi + 0x28], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718D2DF; /* 0x1718D2BF: je 0x1718d2df */
L_1718D2C1:
    PUSH32(esp, ebx); /* 0x1718D2C1: push ebx */
    RECOMP_CALL(sub_1721B01C); /* 0x1718D2C2: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1718D2C7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1718D2C9: pop ecx */
    MEM32(esi + 0xC) = eax; /* 0x1718D2CA: mov dword ptr [esi + 0xc], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718D2DF; /* 0x1718D2CD: je 0x1718d2df */
L_1718D2CF:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1718D2CF: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1721B01C); /* 0x1718D2D2: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1718D2D7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1718D2D9: pop ecx */
    MEM32(esi + 0x2C) = eax; /* 0x1718D2DA: mov dword ptr [esi + 0x2c], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1718D2E9; /* 0x1718D2DD: jne 0x1718d2e9 */
L_1718D2DF:
    PUSH32(esp, esi); /* 0x1718D2DF: push esi */
    RECOMP_CALL(sub_1718D13C); /* 0x1718D2E0: call 0x1718d13c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718D2E5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1718D2EB; /* 0x1718D2E7: jmp 0x1718d2eb */
L_1718D2E9:
    eax = esi; /* 0x1718D2E9: mov eax, esi */
L_1718D2EB:
    edi = POP32_VAL(esp); /* 0x1718D2EB: pop edi */
    esi = POP32_VAL(esp); /* 0x1718D2EC: pop esi */
    ebx = POP32_VAL(esp); /* 0x1718D2ED: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1718D2EE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1718D2EF: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1718D2F7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718D2F7u);

L_1718D2F7:
    edi = edi; /* 0x1718D2F7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718D2F9: push ebp */
    ebp = esp; /* 0x1718D2FA: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1718D2FC: push ecx */
    PUSH32(esp, ecx); /* 0x1718D2FD: push ecx */
    edx = MEM32(ebp + 0x20); /* 0x1718D2FE: mov edx, dword ptr [ebp + 0x20] */
    PUSH32(esp, esi); /* 0x1718D301: push esi */
    esi = MEM32(ebp + 0x10); /* 0x1718D302: mov esi, dword ptr [ebp + 0x10] */
    ecx = esi; /* 0x1718D305: mov ecx, esi */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 0x14)); /* 0x1718D307: imul ecx, dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_1718CE6F); /* 0x1718D30B: call 0x1718ce6f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x1718D310: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x1718D313: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718D377; /* 0x1718D315: jle 0x1718d377 */
L_1718D317:
    ecx = MEM32(ebp + 0x18); /* 0x1718D317: mov ecx, dword ptr [ebp + 0x18] */
    PUSH32(esp, ebx); /* 0x1718D31A: push ebx */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1718D31B: mov dword ptr [ebp - 4], ecx */
    ecx = MEM32(ebp + 0x8); /* 0x1718D31E: mov ecx, dword ptr [ebp + 8] */
    ebx = esi; /* 0x1718D321: mov ebx, esi */
    PUSH32(esp, edi); /* 0x1718D323: push edi */
    if (3u) _cf = (((ebx) >> 29) & 1u); /* 0x1718D324: shl ebx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ebx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 3u; /* 0x1718D324: shl ebx, 3 */
    MEM32(ebp + 0x8) = ecx; /* 0x1718D327: mov dword ptr [ebp + 8], ecx */
    MEM32(ebp + (-0x8)) = eax; /* 0x1718D32A: mov dword ptr [ebp - 8], eax */
L_1718D32D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1718D32D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x14), esi */ /* 0x1718D32F: cmp dword ptr [ebp + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718D369; /* 0x1718D332: jle 0x1718d369 */
L_1718D334:
    eax = MEM32(ebp + 0x20); /* 0x1718D334: mov eax, dword ptr [ebp + 0x20] */
    edi = MEM32(ebp + (-0x4)); /* 0x1718D337: mov edi, dword ptr [ebp - 4] */
    MEM32(ebp + 0x18) = eax; /* 0x1718D33A: mov dword ptr [ebp + 0x18], eax */
L_1718D33D:
    fp_push(*(double*)ADDR(edi)); /* 0x1718D33D: fld qword ptr [edi] */
    eax = MEM32(ebp + 0x1C); /* 0x1718D33F: mov eax, dword ptr [ebp + 0x1c] */
    _st[0] /= *(double*)ADDR(eax + esi * 8); /* 0x1718D342: fdiv qword ptr [eax + esi*8] */
    eax = MEM32(ebp + 0x18); /* 0x1718D345: mov eax, dword ptr [ebp + 0x18] */
    edx = MEM32(ebp + 0x10); /* 0x1718D348: mov edx, dword ptr [ebp + 0x10] */
    PUSH32(esp, ecx); /* 0x1718D34B: push ecx */
    PUSH32(esp, ecx); /* 0x1718D34C: push ecx */
    ecx = MEM32(ebp + 0x8); /* 0x1718D34D: mov ecx, dword ptr [ebp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1718D350: fstp qword ptr [esp] */
    RECOMP_CALL(sub_1718CE89); /* 0x1718D353: call 0x1718ce89 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x1718D358: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + ebx; /* 0x1718D35B: add dword ptr [ebp + 0x18], ebx */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x1718D35E: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x1718D35E: shl eax, 3 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1718D361: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x1718D362: add edi, eax */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(ebp + 0x14) */ /* 0x1718D364: cmp esi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1718D33D; /* 0x1718D367: jl 0x1718d33d */
L_1718D369:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + ebx; /* 0x1718D369: add dword ptr [ebp + 8], ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 8; /* 0x1718D36C: add dword ptr [ebp - 4], 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) - 1; /* 0x1718D370: dec dword ptr [ebp - 8] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1718D32D; /* 0x1718D373: jne 0x1718d32d */
L_1718D375:
    edi = POP32_VAL(esp); /* 0x1718D375: pop edi */
    ebx = POP32_VAL(esp); /* 0x1718D376: pop ebx */
L_1718D377:
    esi = POP32_VAL(esp); /* 0x1718D377: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1718D378: leave  */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x1718D379: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_1718D381(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718D381u);

L_1718D381:
    edi = edi; /* 0x1718D381: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718D383: push ebp */
    ebp = esp; /* 0x1718D384: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x54u; /* 0x1718D386: sub esp, 0x54 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x10); /* 0x1718D389: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(eax + 0xC); /* 0x1718D38C: mov ecx, dword ptr [eax + 0xc] */
    eax = MEM32(eax + 0x8); /* 0x1718D38F: mov eax, dword ptr [eax + 8] */
    PUSH32(esp, ebx); /* 0x1718D392: push ebx */
    PUSH32(esp, esi); /* 0x1718D393: push esi */
    esi = MEM32(ebp + 0x18); /* 0x1718D394: mov esi, dword ptr [ebp + 0x18] */
    PUSH32(esp, edi); /* 0x1718D397: push edi */
    edi = MEM32(ebp + 0x14); /* 0x1718D398: mov edi, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x24)) = eax; /* 0x1718D39B: mov dword ptr [ebp - 0x24], eax */
    eax = MEM32(edi); /* 0x1718D39E: mov eax, dword ptr [edi] */
    MEM32(ebp + (-0x14)) = eax; /* 0x1718D3A0: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(edi + 0x14); /* 0x1718D3A3: mov eax, dword ptr [edi + 0x14] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1718D3A6: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(esi + 0x8); /* 0x1718D3A9: mov eax, dword ptr [esi + 8] */
    /* cmp MEM32(ebp + 0x1C), eax */ /* 0x1718D3AC: cmp dword ptr [ebp + 0x1c], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = ecx; /* 0x1718D3AF: mov dword ptr [ebp - 4], ecx */
    if (CMP_L(_flag_a, _flag_b)) goto L_1718D3B7; /* 0x1718D3B2: jl 0x1718d3b7 */
L_1718D3B4:
    MEM32(ebp + 0x1C) = eax; /* 0x1718D3B4: mov dword ptr [ebp + 0x1c], eax */
L_1718D3B7:
    ebx = MEM32(edi + 0x20); /* 0x1718D3B7: mov ebx, dword ptr [edi + 0x20] */
    eax = MEM32(edi + 0x18); /* 0x1718D3BA: mov eax, dword ptr [edi + 0x18] */
    ecx = MEM32(ebp + (-0x4)); /* 0x1718D3BD: mov ecx, dword ptr [ebp - 4] */
    edx = MEM32(ebp + (-0x10)); /* 0x1718D3C0: mov edx, dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0x38)) = ebx; /* 0x1718D3C3: mov dword ptr [ebp - 0x38], ebx */
    MEM32(ebp + (-0x28)) = eax; /* 0x1718D3C6: mov dword ptr [ebp - 0x28], eax */
    RECOMP_CALL(sub_1718CE6F); /* 0x1718D3C9: call 0x1718ce6f */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x28); /* 0x1718D3CE: mov ecx, dword ptr [esi + 0x28] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718D3D1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x24)), eax */ /* 0x1718D3D3: cmp dword ptr [ebp - 0x24], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x20)) = eax; /* 0x1718D3D6: mov dword ptr [ebp - 0x20], eax */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1718D3D9: mov dword ptr [ebp - 0x1c], eax */
    MEM32(ebp + (-0x18)) = eax; /* 0x1718D3DC: mov dword ptr [ebp - 0x18], eax */
    MEM32(ebp + (-0x2C)) = ecx; /* 0x1718D3DF: mov dword ptr [ebp - 0x2c], ecx */
    MEM32(ebp + (-0xC)) = eax; /* 0x1718D3E2: mov dword ptr [ebp - 0xc], eax */
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718D46B; /* 0x1718D3E5: jle 0x1718d46b */
L_1718D3EB:
    eax = MEM32(ebp + 0x8); /* 0x1718D3EB: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x8)) = ebx; /* 0x1718D3EE: mov dword ptr [ebp - 8], ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1718D3F1: mov ebx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x1718D3F4: sub ebx, eax */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x30)) = eax; /* 0x1718D3F6: mov dword ptr [ebp - 0x30], eax */
    MEM32(ebp + (-0x34)) = ebx; /* 0x1718D3F9: mov dword ptr [ebp - 0x34], ebx */
L_1718D3FC:
    edx = MEM32(eax); /* 0x1718D3FC: mov edx, dword ptr [eax] */
    /* cmp edx, ecx */ /* 0x1718D3FE: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718D40C; /* 0x1718D400: jne 0x1718d40c */
L_1718D402:
    /* cmp MEM32(ebx + eax), ecx */ /* 0x1718D402: cmp dword ptr [ebx + eax], ecx */
    _flag_a = (uint32_t)(MEM32(ebx + eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718D416; /* 0x1718D405: jne 0x1718d416 */
L_1718D407:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x20)) = MEM32(ebp + (-0x20)) + 1; /* 0x1718D407: inc dword ptr [ebp - 0x20] */
    _flag_k = FK_INC;
    goto L_1718D41D; /* 0x1718D40A: jmp 0x1718d41d */
L_1718D40C:
    /* cmp MEM32(ebx + eax), ecx */ /* 0x1718D40C: cmp dword ptr [ebx + eax], ecx */
    _flag_a = (uint32_t)(MEM32(ebx + eax)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718D416; /* 0x1718D40F: jne 0x1718d416 */
L_1718D411:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) + 1; /* 0x1718D411: inc dword ptr [ebp - 0x18] */
    _flag_k = FK_INC;
    goto L_1718D41D; /* 0x1718D414: jmp 0x1718d41d */
L_1718D416:
    /* cmp edx, ecx */ /* 0x1718D416: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718D45A; /* 0x1718D418: jne 0x1718d45a */
L_1718D41A:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) + 1; /* 0x1718D41A: inc dword ptr [ebp - 0x1c] */
    _flag_k = FK_INC;
L_1718D41D:
    /* cmp edx, ecx */ /* 0x1718D41D: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718D457; /* 0x1718D41F: jne 0x1718d457 */
L_1718D421:
    ebx = MEM32(ebp + (-0xC)); /* 0x1718D421: mov ebx, dword ptr [ebp - 0xc] */
    PUSH32(esp, ebx); /* 0x1718D424: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1718D425: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1718CFED); /* 0x1718D428: call 0x1718cfed */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x1718D42D: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718D448; /* 0x1718D431: jle 0x1718d448 */
L_1718D433:
    ecx = MEM32(ebp + (-0x10)); /* 0x1718D433: mov ecx, dword ptr [ebp - 0x10] */
    edx = MEM32(ebp + (-0x4)); /* 0x1718D436: mov edx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x1718D439: sub eax, ecx */
    _flag_k = FK_CMP;
L_1718D43B:
    fp_push(*(double*)ADDR(eax + ecx)); /* 0x1718D43B: fld qword ptr [eax + ecx] */
    _st[0] += *(double*)ADDR(ecx); /* 0x1718D43E: fadd qword ptr [ecx] */
    { double _v = fp_pop(); *(double*)ADDR(ecx) = _v; } /* 0x1718D440: fstp qword ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x1718D442: add ecx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1718D445: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1718D43B; /* 0x1718D446: jne 0x1718d43b */
L_1718D448:
    eax = MEM32(ebp + (-0x8)); /* 0x1718D448: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 4; /* 0x1718D44B: add dword ptr [ebp - 8], 4 */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x2C)); /* 0x1718D44F: mov ecx, dword ptr [ebp - 0x2c] */
    MEM32(eax) = ebx; /* 0x1718D452: mov dword ptr [eax], ebx */
    eax = MEM32(ebp + (-0x30)); /* 0x1718D454: mov eax, dword ptr [ebp - 0x30] */
L_1718D457:
    ebx = MEM32(ebp + (-0x34)); /* 0x1718D457: mov ebx, dword ptr [ebp - 0x34] */
L_1718D45A:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 1; /* 0x1718D45A: inc dword ptr [ebp - 0xc] */
    _flag_k = FK_INC;
    edx = MEM32(ebp + (-0xC)); /* 0x1718D45D: mov edx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1718D460: add eax, 4 */
    _flag_k = FK_ADD;
    /* cmp edx, MEM32(ebp + (-0x24)) */ /* 0x1718D463: cmp edx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x24)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x30)) = eax; /* 0x1718D466: mov dword ptr [ebp - 0x30], eax */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1718D3FC; /* 0x1718D469: jl 0x1718d3fc */
L_1718D46B:
    ecx = MEM32(ebp + (-0x18)); /* 0x1718D46B: mov ecx, dword ptr [ebp - 0x18] */
    eax = MEM32(ebp + (-0x20)); /* 0x1718D46E: mov eax, dword ptr [ebp - 0x20] */
    edx = ecx + eax; /* 0x1718D471: lea edx, [ecx + eax] */
    ecx = MEM32(ebp + (-0x1C)); /* 0x1718D474: mov ecx, dword ptr [ebp - 0x1c] */
    ebx = ecx + eax; /* 0x1718D477: lea ebx, [ecx + eax] */
    /* test ebx, ebx */ /* 0x1718D47A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = edx; /* 0x1718D47C: mov dword ptr [ebp - 0xc], edx */
    MEM32(ebp + (-0x8)) = ebx; /* 0x1718D47F: mov dword ptr [ebp - 8], ebx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718DC38; /* 0x1718D482: je 0x1718dc38 */
L_1718D488:
    fp_push((double)(int32_t)MEM32(ebp + (-0x8))); /* 0x1718D488: fild dword ptr [ebp - 8] */
    PUSH32(esp, ecx); /* 0x1718D48B: push ecx */
    PUSH32(esp, ecx); /* 0x1718D48C: push ecx */
    *(double*)ADDR(ebp + (-0x44)) = _st[0]; /* 0x1718D48D: fst qword ptr [ebp - 0x44] */
    fp_push(1.0); /* 0x1718D490: fld1  */
    _st[0] /= _st[1]; /* 0x1718D492: fdiv st(1) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x4C)) = _v; } /* 0x1718D494: fstp qword ptr [ebp - 0x4c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718D497: fstp st(0) */
    fp_push(*(double*)ADDR(ebp + (-0x4C))); /* 0x1718D499: fld qword ptr [ebp - 0x4c] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1718D49C: fstp qword ptr [esp] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1718D49F: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1718D4A2: push dword ptr [ebp - 0x10] */
    RECOMP_CALL(sub_171968CC); /* 0x1718D4A5: call 0x171968cc */
    RECOMP_FLAGS_IN();
    /* cmp edx, MEM32(ebp + (-0x4)) */ /* 0x1718D4AA: cmp edx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1718D510; /* 0x1718D4AD: jge 0x1718d510 */
L_1718D4AF:
    /* cmp ebx, MEM32(ebp + (-0x4)) */ /* 0x1718D4AF: cmp ebx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1718D515; /* 0x1718D4B2: jge 0x1718d515 */
L_1718D4B4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1718D4B4: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1718D4B6:
    /* cmp MEM32(ebp + (-0x20)), ecx */ /* 0x1718D4B6: cmp dword ptr [ebp - 0x20], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718D4DA; /* 0x1718D4B9: jne 0x1718d4da */
L_1718D4BB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718D4BB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x24)), ecx */ /* 0x1718D4BD: cmp dword ptr [ebp - 0x24], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718D4DA; /* 0x1718D4C0: jle 0x1718d4da */
L_1718D4C2:
    ecx = MEM32(ebp + 0xC); /* 0x1718D4C2: mov ecx, dword ptr [ebp + 0xc] */
    ecx = ecx + eax * 4; /* 0x1718D4C5: lea ecx, [ecx + eax*4] */
    edx = MEM32(ecx); /* 0x1718D4C8: mov edx, dword ptr [ecx] */
    /* cmp edx, MEM32(ebp + (-0x2C)) */ /* 0x1718D4CA: cmp edx, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x2C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718D4D2; /* 0x1718D4CD: jne 0x1718d4d2 */
L_1718D4CF:
    _flag_a = (uint32_t)((MEM32(ecx) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ecx) | 0xFFFFFFFFu));
    MEM32(ecx) = MEM32(ecx) | 0xFFFFFFFFu; /* 0x1718D4CF: or dword ptr [ecx], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1718D4D2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1718D4D2: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(ebp + (-0x24)) */ /* 0x1718D4D3: cmp eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x24)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1718D4C2; /* 0x1718D4D6: jl 0x1718d4c2 */
L_1718D4D8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1718D4D8: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_1718D4DA:
    eax = MEM32(ebp + (-0x4)); /* 0x1718D4DA: mov eax, dword ptr [ebp - 4] */
    /* cmp ebx, eax */ /* 0x1718D4DD: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1718D8E0; /* 0x1718D4DF: jge 0x1718d8e0 */
L_1718D4E5:
    _flag_a = (uint32_t)(MEM32(0x1723F6D0)); _flag_b = (uint32_t)(1);
    MEM32(0x1723F6D0) = MEM32(0x1723F6D0) + 1; /* 0x1718D4E5: inc dword ptr [0x1723f6d0] */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + 0x1C), ebx */ /* 0x1718D4EB: cmp dword ptr [ebp + 0x1c], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1718D4F3; /* 0x1718D4EE: jl 0x1718d4f3 */
L_1718D4F0:
    MEM32(ebp + 0x1C) = ebx; /* 0x1718D4F0: mov dword ptr [ebp + 0x1c], ebx */
L_1718D4F3:
    eax = MEM32(ebp + 0x1C); /* 0x1718D4F3: mov eax, dword ptr [ebp + 0x1c] */
    /* cmp eax, MEM32(esi + 0x4) */ /* 0x1718D4F6: cmp eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718D522; /* 0x1718D4F9: jne 0x1718d522 */
L_1718D4FB:
    /* cmp MEM32(ebp + (-0x1C)), ecx */ /* 0x1718D4FB: cmp dword ptr [ebp - 0x1c], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718D522; /* 0x1718D4FE: jne 0x1718d522 */
L_1718D500:
    /* cmp MEM32(ebp + (-0x18)), ecx */ /* 0x1718D500: cmp dword ptr [ebp - 0x18], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718D522; /* 0x1718D503: jne 0x1718d522 */
L_1718D505:
    _flag_a = (uint32_t)(MEM32(0x1723F6D8)); _flag_b = (uint32_t)(1);
    MEM32(0x1723F6D8) = MEM32(0x1723F6D8) + 1; /* 0x1718D505: inc dword ptr [0x1723f6d8] */
    _flag_k = FK_INC;
    goto L_1718DC38; /* 0x1718D50B: jmp 0x1718dc38 */
L_1718D510:
    /* cmp ebx, MEM32(ebp + (-0x4)) */ /* 0x1718D510: cmp ebx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_1718D4B4; /* 0x1718D513: jge 0x1718d4b4 */
L_1718D515:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1718D515: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = ecx; /* 0x1718D517: mov dword ptr [ebp - 0x20], ecx */
    MEM32(ebp + (-0x18)) = ecx; /* 0x1718D51A: mov dword ptr [ebp - 0x18], ecx */
    MEM32(ebp + (-0x1C)) = ebx; /* 0x1718D51D: mov dword ptr [ebp - 0x1c], ebx */
    RECOMP_BACKEDGE();
    goto L_1718D4B6; /* 0x1718D520: jmp 0x1718d4b6 */
L_1718D522:
    edx = MEM32(esi + 0x2C); /* 0x1718D522: mov edx, dword ptr [esi + 0x2c] */
    eax = MEM32(edi + 0x24); /* 0x1718D525: mov eax, dword ptr [edi + 0x24] */
    MEM32(ebp + (-0x3C)) = edx; /* 0x1718D528: mov dword ptr [ebp - 0x3c], edx */
    edx = MEM32(ebp + (-0x24)); /* 0x1718D52B: mov edx, dword ptr [ebp - 0x24] */
    /* cmp edx, ecx */ /* 0x1718D52E: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x34)) = eax; /* 0x1718D530: mov dword ptr [ebp - 0x34], eax */
    MEM32(ebp + (-0x30)) = ecx; /* 0x1718D533: mov dword ptr [ebp - 0x30], ecx */
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718D56E; /* 0x1718D536: jle 0x1718d56e */
L_1718D538:
    ecx = MEM32(ebp + 0xC); /* 0x1718D538: mov ecx, dword ptr [ebp + 0xc] */
    ebx = MEM32(ebp + 0x8); /* 0x1718D53B: mov ebx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x1718D53E: sub ebx, ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + 0xC) = edx; /* 0x1718D540: mov dword ptr [ebp + 0xc], edx */
L_1718D543:
    edx = MEM32(ebp + (-0x2C)); /* 0x1718D543: mov edx, dword ptr [ebp - 0x2c] */
    /* cmp MEM32(ebx + ecx), edx */ /* 0x1718D546: cmp dword ptr [ebx + ecx], edx */
    _flag_a = (uint32_t)(MEM32(ebx + ecx)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718D55F; /* 0x1718D549: jne 0x1718d55f */
L_1718D54B:
    /* cmp MEM32(ecx), edx */ /* 0x1718D54B: cmp dword ptr [ecx], edx */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718D559; /* 0x1718D54D: jne 0x1718d559 */
L_1718D54F:
    edx = MEM32(ebp + (-0x30)); /* 0x1718D54F: mov edx, dword ptr [ebp - 0x30] */
    MEM32(eax) = edx; /* 0x1718D552: mov dword ptr [eax], edx */
    edx = MEM32(ebp + (-0x2C)); /* 0x1718D554: mov edx, dword ptr [ebp - 0x2c] */
    goto L_1718D55C; /* 0x1718D557: jmp 0x1718d55c */
L_1718D559:
    _flag_a = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(eax) | 0xFFFFFFFFu));
    MEM32(eax) = MEM32(eax) | 0xFFFFFFFFu; /* 0x1718D559: or dword ptr [eax], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_1718D55C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1718D55C: add eax, 4 */
    _flag_k = FK_ADD;
L_1718D55F:
    /* cmp MEM32(ecx), edx */ /* 0x1718D55F: cmp dword ptr [ecx], edx */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718D566; /* 0x1718D561: jne 0x1718d566 */
L_1718D563:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x30)) = MEM32(ebp + (-0x30)) + 1; /* 0x1718D563: inc dword ptr [ebp - 0x30] */
    _flag_k = FK_INC;
L_1718D566:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1718D566: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1; /* 0x1718D569: dec dword ptr [ebp + 0xc] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1718D543; /* 0x1718D56C: jne 0x1718d543 */
L_1718D56E:
    fp_push(0.0); /* 0x1718D56E: fldz  */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1718D570: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x8)), ebx */ /* 0x1718D572: cmp dword ptr [ebp - 8], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esi + 0x20) = _v; } /* 0x1718D575: fstp qword ptr [esi + 0x20] */
    edi = MEM32(edi + 0x4); /* 0x1718D578: mov edi, dword ptr [edi + 4] */
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718D5D7; /* 0x1718D57B: jle 0x1718d5d7 */
L_1718D57D:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(ebp + (-0x10)); /* 0x1718D57D: sub edi, dword ptr [ebp - 0x10] */
    _flag_k = FK_CMP;
    MEM32(ebp + 0xC) = edi; /* 0x1718D580: mov dword ptr [ebp + 0xc], edi */
    edi = MEM32(ebp + (-0x4)); /* 0x1718D583: mov edi, dword ptr [ebp - 4] */
L_1718D586:
    eax = MEM32(ebp + (-0x38)); /* 0x1718D586: mov eax, dword ptr [ebp - 0x38] */
    PUSH32(esp, MEM32(eax + ebx * 4)); /* 0x1718D589: push dword ptr [eax + ebx*4] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1718D58C: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1718CFED); /* 0x1718D58F: call 0x1718cfed */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x10)); /* 0x1718D594: mov ecx, dword ptr [ebp - 0x10] */
    edx = edi; /* 0x1718D597: mov edx, edi */
    MEM32(ebp + 0x8) = eax; /* 0x1718D599: mov dword ptr [ebp + 8], eax */
    RECOMP_CALL(sub_171968B1); /* 0x1718D59C: call 0x171968b1 */
    RECOMP_FLAGS_IN();
    /* test edi, edi */ /* 0x1718D5A1: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x28)); /* 0x1718D5A3: mov eax, dword ptr [ebp - 0x28] */
    { double _v = fp_pop(); *(double*)ADDR(eax + ebx * 8) = _v; } /* 0x1718D5A6: fstp qword ptr [eax + ebx*8] */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718D5C9; /* 0x1718D5A9: jle 0x1718d5c9 */
L_1718D5AB:
    ecx = MEM32(ebp + 0x8); /* 0x1718D5AB: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x10)); /* 0x1718D5AE: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1718D5B1: sub ecx, eax */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = edi; /* 0x1718D5B3: mov dword ptr [ebp + 8], edi */
L_1718D5B6:
    fp_push(*(double*)ADDR(ecx + eax)); /* 0x1718D5B6: fld qword ptr [ecx + eax] */
    edx = MEM32(ebp + 0xC); /* 0x1718D5B9: mov edx, dword ptr [ebp + 0xc] */
    _st[0] -= *(double*)ADDR(eax); /* 0x1718D5BC: fsub qword ptr [eax] */
    { double _v = fp_pop(); *(double*)ADDR(edx + eax) = _v; } /* 0x1718D5BE: fstp qword ptr [edx + eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1718D5C1: add eax, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) - 1; /* 0x1718D5C4: dec dword ptr [ebp + 8] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1718D5B6; /* 0x1718D5C7: jne 0x1718d5b6 */
L_1718D5C9:
    eax = edi; /* 0x1718D5C9: mov eax, edi */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x1718D5CB: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x1718D5CB: shl eax, 3 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + eax; /* 0x1718D5CE: add dword ptr [ebp + 0xc], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1718D5D1: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(ebp + (-0x8)) */ /* 0x1718D5D2: cmp ebx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1718D586; /* 0x1718D5D5: jl 0x1718d586 */
L_1718D5D7:
    ecx = MEM32(ebp + (-0x10)); /* 0x1718D5D7: mov ecx, dword ptr [ebp - 0x10] */
    edx = MEM32(ebp + (-0x4)); /* 0x1718D5DA: mov edx, dword ptr [ebp - 4] */
    eax = ecx; /* 0x1718D5DD: mov eax, ecx */
    RECOMP_CALL(sub_171968B1); /* 0x1718D5DF: call 0x171968b1 */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x54)) = _v; } /* 0x1718D5E4: fstp qword ptr [ebp - 0x54] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718D5E7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x8)), eax */ /* 0x1718D5E9: cmp dword ptr [ebp - 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0xC) = eax; /* 0x1718D5EC: mov dword ptr [ebp + 0xc], eax */
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718D6DE; /* 0x1718D5EF: jle 0x1718d6de */
L_1718D5F5:
    MEM32(ebp + (-0x2C)) = eax; /* 0x1718D5F5: mov dword ptr [ebp - 0x2c], eax */
    MEM32(ebp + 0x8) = eax; /* 0x1718D5F8: mov dword ptr [ebp + 8], eax */
L_1718D5FB:
    ecx = MEM32(ebp + 0x14); /* 0x1718D5FB: mov ecx, dword ptr [ebp + 0x14] */
    fp_push(*(double*)ADDR(ebp + (-0x54))); /* 0x1718D5FE: fld qword ptr [ebp - 0x54] */
    edx = MEM32(ebp + 0xC); /* 0x1718D601: mov edx, dword ptr [ebp + 0xc] */
    edi = MEM32(ecx + 0x1C); /* 0x1718D604: mov edi, dword ptr [ecx + 0x1c] */
    ebx = MEM32(ecx + 0x8); /* 0x1718D607: mov ebx, dword ptr [ecx + 8] */
    eax = MEM32(ebp + (-0x34)); /* 0x1718D60A: mov eax, dword ptr [ebp - 0x34] */
    eax = MEM32(eax + edx * 4); /* 0x1718D60D: mov eax, dword ptr [eax + edx*4] */
    ecx = MEM32(ecx + 0x4); /* 0x1718D610: mov ecx, dword ptr [ecx + 4] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0xC))); /* 0x1718D613: imul eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x2C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x2C)); /* 0x1718D617: add ecx, dword ptr [ebp - 0x2c] */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + (-0x28)); /* 0x1718D61A: mov edx, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + 0x8); /* 0x1718D61D: add edi, dword ptr [ebp + 8] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + 0x8); /* 0x1718D620: add ebx, dword ptr [ebp + 8] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0; /* 0x1718D623: and dword ptr [ebp + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x38)) = ecx; /* 0x1718D627: mov dword ptr [ebp - 0x38], ecx */
    ecx = MEM32(ebp + 0xC); /* 0x1718D62A: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x1718D62D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x24)) = eax; /* 0x1718D62F: mov dword ptr [ebp - 0x24], eax */
    _st[0] -= *(double*)ADDR(edx + ecx * 8); /* 0x1718D632: fsub qword ptr [edx + ecx*8] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x44)) = _v; } /* 0x1718D635: fstp qword ptr [ebp - 0x44] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718D6BE; /* 0x1718D638: jl 0x1718d6be */
L_1718D63E:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x30)) = MEM32(ebp + (-0x30)) & 0; /* 0x1718D63E: and dword ptr [ebp - 0x30], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1718D642:
    /* test eax, eax */ /* 0x1718D642: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebp + (-0x34)); /* 0x1718D644: mov ecx, dword ptr [ebp - 0x34] */
    edx = MEM32(ebp + 0x10); /* 0x1718D647: mov edx, dword ptr [ebp + 0x10] */
    ecx = MEM32(ecx + edx * 4); /* 0x1718D64A: mov ecx, dword ptr [ecx + edx*4] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718D66D; /* 0x1718D64D: jl 0x1718d66d */
L_1718D64F:
    /* test ecx, ecx */ /* 0x1718D64F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718D66D; /* 0x1718D651: jl 0x1718d66d */
L_1718D653:
    edx = MEM32(ebp + (-0x3C)); /* 0x1718D653: mov edx, dword ptr [ebp - 0x3c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1718D656: add ecx, eax */
    _flag_k = FK_ADD;
    fp_push(*(double*)ADDR(edx + ecx * 8)); /* 0x1718D658: fld qword ptr [edx + ecx*8] */
    ecx = MEM32(ebp + (-0x28)); /* 0x1718D65B: mov ecx, dword ptr [ebp - 0x28] */
    edx = MEM32(ebp + 0x10); /* 0x1718D65E: mov edx, dword ptr [ebp + 0x10] */
    *(double*)ADDR(edi) = _st[0]; /* 0x1718D661: fst qword ptr [edi] */
    _st[0] -= *(double*)ADDR(ecx + edx * 8); /* 0x1718D663: fsub qword ptr [ecx + edx*8] */
    _st[0] += *(double*)ADDR(ebp + (-0x44)); /* 0x1718D666: fadd qword ptr [ebp - 0x44] */
    { double _v = fp_pop(); *(double*)ADDR(ebx) = _v; } /* 0x1718D669: fstp qword ptr [ebx] */
    goto L_1718D694; /* 0x1718D66B: jmp 0x1718d694 */
L_1718D66D:
    eax = MEM32(ebp + 0x14); /* 0x1718D66D: mov eax, dword ptr [ebp + 0x14] */
    eax = MEM32(eax + 0x4); /* 0x1718D670: mov eax, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x30)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x30)); /* 0x1718D673: add eax, dword ptr [ebp - 0x30] */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + (-0x4)); /* 0x1718D676: mov edx, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + (-0x38)); /* 0x1718D679: mov ecx, dword ptr [ebp - 0x38] */
    RECOMP_CALL(sub_171968B1); /* 0x1718D67C: call 0x171968b1 */
    RECOMP_FLAGS_IN();
    *(double*)ADDR(ebx) = _st[0]; /* 0x1718D681: fst qword ptr [ebx] */
    eax = MEM32(ebp + (-0x28)); /* 0x1718D683: mov eax, dword ptr [ebp - 0x28] */
    ecx = MEM32(ebp + 0x10); /* 0x1718D686: mov ecx, dword ptr [ebp + 0x10] */
    _st[0] += *(double*)ADDR(eax + ecx * 8); /* 0x1718D689: fadd qword ptr [eax + ecx*8] */
    eax = MEM32(ebp + (-0x24)); /* 0x1718D68C: mov eax, dword ptr [ebp - 0x24] */
    _st[0] -= *(double*)ADDR(ebp + (-0x44)); /* 0x1718D68F: fsub qword ptr [ebp - 0x44] */
    { double _v = fp_pop(); *(double*)ADDR(edi) = _v; } /* 0x1718D692: fstp qword ptr [edi] */
L_1718D694:
    ecx = MEM32(ebp + 0xC); /* 0x1718D694: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp ecx, MEM32(ebp + 0x10) */ /* 0x1718D697: cmp ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718D6A4; /* 0x1718D69A: jne 0x1718d6a4 */
L_1718D69C:
    fp_push(*(double*)ADDR(ebx)); /* 0x1718D69C: fld qword ptr [ebx] */
    _st[0] += *(double*)ADDR(esi + 0x20); /* 0x1718D69E: fadd qword ptr [esi + 0x20] */
    { double _v = fp_pop(); *(double*)ADDR(esi + 0x20) = _v; } /* 0x1718D6A1: fstp qword ptr [esi + 0x20] */
L_1718D6A4:
    ecx = MEM32(ebp + (-0x4)); /* 0x1718D6A4: mov ecx, dword ptr [ebp - 4] */
    if (3u) _cf = (((ecx) >> 29) & 1u); /* 0x1718D6A7: shl ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 3u; /* 0x1718D6A7: shl ecx, 3 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x30))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x30)) = MEM32(ebp + (-0x30)) + ecx; /* 0x1718D6AA: add dword ptr [ebp - 0x30], ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x1718D6AD: add edi, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x1718D6B0: add ebx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1; /* 0x1718D6B3: inc dword ptr [ebp + 0x10] */
    _flag_k = FK_INC;
    ecx = MEM32(ebp + 0x10); /* 0x1718D6B6: mov ecx, dword ptr [ebp + 0x10] */
    /* cmp ecx, MEM32(ebp + 0xC) */ /* 0x1718D6B9: cmp ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718D642; /* 0x1718D6BC: jle 0x1718d642 */
L_1718D6BE:
    ecx = MEM32(ebp + (-0x8)); /* 0x1718D6BE: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1; /* 0x1718D6C1: inc dword ptr [ebp + 0xc] */
    _flag_k = FK_INC;
    eax = ecx; /* 0x1718D6C4: mov eax, ecx */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x1718D6C6: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x1718D6C6: shl eax, 3 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + eax; /* 0x1718D6C9: add dword ptr [ebp + 8], eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x4)); /* 0x1718D6CC: mov eax, dword ptr [ebp - 4] */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x1718D6CF: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x1718D6CF: shl eax, 3 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x2C)) = MEM32(ebp + (-0x2C)) + eax; /* 0x1718D6D2: add dword ptr [ebp - 0x2c], eax */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + 0xC), ecx */ /* 0x1718D6D5: cmp dword ptr [ebp + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1718D5FB; /* 0x1718D6D8: jl 0x1718d5fb */
L_1718D6DE:
    eax = MEM32(ebp + (-0x8)); /* 0x1718D6DE: mov eax, dword ptr [ebp - 8] */
    edx = MEM32(ebp + 0x14); /* 0x1718D6E1: mov edx, dword ptr [ebp + 0x14] */
    eax = (uint32_t)((int32_t)eax * (int32_t)eax); /* 0x1718D6E4: imul eax, eax */
    esi = MEM32(edx + 0x1C); /* 0x1718D6E7: mov esi, dword ptr [edx + 0x1c] */
    ebx = MEM32(ebp + 0x18); /* 0x1718D6EA: mov ebx, dword ptr [ebp + 0x18] */
    edi = MEM32(ebx + 0x2C); /* 0x1718D6ED: mov edi, dword ptr [ebx + 0x2c] */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x1718D6F0: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x1718D6F0: shl eax, 3 */
    ecx = eax; /* 0x1718D6F3: mov ecx, eax */
    edx = ecx; /* 0x1718D6F5: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1718D6F7: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1718D6F7: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1718D6FA: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = edx; /* 0x1718D6FC: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1718D6FE: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1718D701: rep movsb byte ptr es:[edi], byte ptr [esi] */
    /* cmp MEM32(0x172374A8), 0 */ /* 0x1718D703: cmp dword ptr [0x172374a8], 0 */
    _flag_a = (uint32_t)(MEM32(0x172374A8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x30)) = eax; /* 0x1718D70A: mov dword ptr [ebp - 0x30], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718D85A; /* 0x1718D70D: je 0x1718d85a */
L_1718D713:
    ecx = MEM32(ebp + (-0x18)); /* 0x1718D713: mov ecx, dword ptr [ebp - 0x18] */
    edx = MEM32(ebp + (-0x1C)); /* 0x1718D716: mov edx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x1718D719: add ecx, edx */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x20)), ecx */ /* 0x1718D71B: cmp dword ptr [ebp - 0x20], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718D85A; /* 0x1718D71E: jle 0x1718d85a */
L_1718D724:
    edx = MEM32(ebp + 0x1C); /* 0x1718D724: mov edx, dword ptr [ebp + 0x1c] */
    /* cmp edx, MEM32(ebx + 0x4) */ /* 0x1718D727: cmp edx, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1718D85A; /* 0x1718D72A: jg 0x1718d85a */
L_1718D730:
    ecx = MEM32(ebp + (-0xC)); /* 0x1718D730: mov ecx, dword ptr [ebp - 0xc] */
    fp_push(*(double*)ADDR(ebp + (-0x4C))); /* 0x1718D733: fld qword ptr [ebp - 0x4c] */
    esi = MEM32(ebx + 0x30); /* 0x1718D736: mov esi, dword ptr [ebx + 0x30] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx); /* 0x1718D739: imul ecx, edx */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x54)) = _v; } /* 0x1718D73C: fstp qword ptr [ebp - 0x54] */
    edx = MEM32(ebp + 0x14); /* 0x1718D73F: mov edx, dword ptr [ebp + 0x14] */
    edi = MEM32(edx + 0x28); /* 0x1718D742: mov edi, dword ptr [edx + 0x28] */
    if (3u) _cf = (((ecx) >> 29) & 1u); /* 0x1718D745: shl ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 3u; /* 0x1718D745: shl ecx, 3 */
    edx = ecx; /* 0x1718D748: mov edx, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1718D74A: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1718D74A: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1718D74D: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = edx; /* 0x1718D74F: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1718D751: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1718D754: rep movsb byte ptr es:[edi], byte ptr [esi] */
    ecx = MEM32(ebp + 0x1C); /* 0x1718D756: mov ecx, dword ptr [ebp + 0x1c] */
    /* test ecx, ecx */ /* 0x1718D759: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718D7D8; /* 0x1718D75B: jle 0x1718d7d8 */
L_1718D75D:
    eax = MEM32(ebp + (-0xC)); /* 0x1718D75D: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0; /* 0x1718D760: and dword ptr [ebp + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) & 0; /* 0x1718D764: and dword ptr [ebp + 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x1718D768: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x1718D768: shl eax, 3 */
    MEM32(ebp + (-0x38)) = eax; /* 0x1718D76B: mov dword ptr [ebp - 0x38], eax */
    eax = MEM32(ebp + (-0x8)); /* 0x1718D76E: mov eax, dword ptr [ebp - 8] */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x1718D771: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x1718D771: shl eax, 3 */
    MEM32(ebp + (-0x3C)) = eax; /* 0x1718D774: mov dword ptr [ebp - 0x3c], eax */
    MEM32(ebp + 0x8) = ecx; /* 0x1718D777: mov dword ptr [ebp + 8], ecx */
L_1718D77A:
    eax = MEM32(ebp + 0x14); /* 0x1718D77A: mov eax, dword ptr [ebp + 0x14] */
    edi = MEM32(eax + 0x28); /* 0x1718D77D: mov edi, dword ptr [eax + 0x28] */
    esi = MEM32(ebx + 0x30); /* 0x1718D780: mov esi, dword ptr [ebx + 0x30] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0x18); /* 0x1718D783: add esi, dword ptr [ebp + 0x18] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + 0xC); /* 0x1718D786: add edi, dword ptr [ebp + 0xc] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718D789: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x8)), eax */ /* 0x1718D78B: cmp dword ptr [ebp - 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x10) = eax; /* 0x1718D78E: mov dword ptr [ebp + 0x10], eax */
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718D7C4; /* 0x1718D791: jle 0x1718d7c4 */
L_1718D793:
    ecx = MEM32(ebp + (-0x34)); /* 0x1718D793: mov ecx, dword ptr [ebp - 0x34] */
    ecx = MEM32(ecx + eax * 4); /* 0x1718D796: mov ecx, dword ptr [ecx + eax*4] */
    /* test ecx, ecx */ /* 0x1718D799: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1718D7B5; /* 0x1718D79B: jge 0x1718d7b5 */
L_1718D79D:
    RECOMP_CALL(sub_1718CE51); /* 0x1718D79D: call 0x1718ce51 */
    RECOMP_FLAGS_IN();
    _st[0] += _st[0]; /* 0x1718D7A2: fadd st(0), st(0) */
    eax = MEM32(ebp + 0x10); /* 0x1718D7A4: mov eax, dword ptr [ebp + 0x10] */
    _st[0] -= *(double*)ADDR(0x17001D88); /* 0x1718D7A7: fsub qword ptr [0x17001d88] */
    _st[0] *= *(double*)ADDR(ebp + (-0x54)); /* 0x1718D7AD: fmul qword ptr [ebp - 0x54] */
    { double _v = fp_pop(); *(double*)ADDR(esi + eax * 8) = _v; } /* 0x1718D7B0: fstp qword ptr [esi + eax*8] */
    goto L_1718D7BB; /* 0x1718D7B3: jmp 0x1718d7bb */
L_1718D7B5:
    fp_push(*(double*)ADDR(edi + ecx * 8)); /* 0x1718D7B5: fld qword ptr [edi + ecx*8] */
    { double _v = fp_pop(); *(double*)ADDR(esi + eax * 8) = _v; } /* 0x1718D7B8: fstp qword ptr [esi + eax*8] */
L_1718D7BB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1718D7BB: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(ebp + (-0x8)) */ /* 0x1718D7BC: cmp eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x10) = eax; /* 0x1718D7BF: mov dword ptr [ebp + 0x10], eax */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1718D793; /* 0x1718D7C2: jl 0x1718d793 */
L_1718D7C4:
    eax = MEM32(ebp + (-0x3C)); /* 0x1718D7C4: mov eax, dword ptr [ebp - 0x3c] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + eax; /* 0x1718D7C7: add dword ptr [ebp + 0x18], eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x38)); /* 0x1718D7CA: mov eax, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + eax; /* 0x1718D7CD: add dword ptr [ebp + 0xc], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) - 1; /* 0x1718D7D0: dec dword ptr [ebp + 8] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1718D77A; /* 0x1718D7D3: jne 0x1718d77a */
L_1718D7D5:
    eax = MEM32(ebp + (-0x30)); /* 0x1718D7D5: mov eax, dword ptr [ebp - 0x30] */
L_1718D7D8:
    ecx = eax; /* 0x1718D7D8: mov ecx, eax */
    eax = MEM32(ebp + 0x14); /* 0x1718D7DA: mov eax, dword ptr [ebp + 0x14] */
    esi = MEM32(eax + 0x8); /* 0x1718D7DD: mov esi, dword ptr [eax + 8] */
    edi = MEM32(eax + 0xC); /* 0x1718D7E0: mov edi, dword ptr [eax + 0xc] */
    eax = ecx; /* 0x1718D7E3: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1718D7E5: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1718D7E5: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1718D7E8: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1718D7EA: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1718D7EC: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718D7EF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x1C), eax */ /* 0x1718D7F1: cmp dword ptr [ebp + 0x1c], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1718D7F4: rep movsb byte ptr es:[edi], byte ptr [esi] */
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718D819; /* 0x1718D7F6: jle 0x1718d819 */
L_1718D7F8:
    ecx = MEM32(ebx + 0x18); /* 0x1718D7F8: mov ecx, dword ptr [ebx + 0x18] */
    fp_push(*(float*)&MEM32(ecx + eax * 4)); /* 0x1718D7FB: fld dword ptr [ecx + eax*4] */
    ecx = MEM32(ebp + (-0x14)); /* 0x1718D7FE: mov ecx, dword ptr [ebp - 0x14] */
    ecx = MEM32(ecx + 0x10); /* 0x1718D801: mov ecx, dword ptr [ecx + 0x10] */
    fp_push(_st[0]); /* 0x1718D804: fld st(0) */
    _st[0] *= _st[1]; /* 0x1718D806: fmul st(1) */
    _st[0] *= *(double*)ADDR(0x172374B0); /* 0x1718D808: fmul qword ptr [0x172374b0] */
    { double _v = fp_pop(); *(double*)ADDR(ecx + eax * 8) = _v; } /* 0x1718D80E: fstp qword ptr [ecx + eax*8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1718D811: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(ebp + 0x1C) */ /* 0x1718D812: cmp eax, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718D815: fstp st(0) */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1718D7F8; /* 0x1718D817: jl 0x1718d7f8 */
L_1718D819:
    eax = MEM32(ebp + 0x14); /* 0x1718D819: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(eax + 0x2C)); /* 0x1718D81C: push dword ptr [eax + 0x2c] */
    ecx = MEM32(ebp + (-0x14)); /* 0x1718D81F: mov ecx, dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ecx + 0x10)); /* 0x1718D822: push dword ptr [ecx + 0x10] */
    PUSH32(esp, MEM32(ebx + 0x30)); /* 0x1718D825: push dword ptr [ebx + 0x30] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1718D828: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1718D82B: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x1718D82E: push dword ptr [eax + 0xc] */
    RECOMP_CALL(sub_17196988); /* 0x1718D831: call 0x17196988 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1718D836: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718D84F; /* 0x1718D838: je 0x1718d84f */
L_1718D83A:
    esi = MEM32(ebp + (-0x14)); /* 0x1718D83A: mov esi, dword ptr [ebp - 0x14] */
    eax = MEM32(ebp + 0x14); /* 0x1718D83D: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(MEM32(0x1723F690)); _flag_b = (uint32_t)(1);
    MEM32(0x1723F690) = MEM32(0x1723F690) + 1; /* 0x1718D840: inc dword ptr [0x1723f690] */
    _flag_k = FK_INC;
    PUSH32(esp, esi); /* 0x1718D846: push esi */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1718D847: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(eax + 0x8)); /* 0x1718D84A: push dword ptr [eax + 8] */
    goto L_1718D867; /* 0x1718D84D: jmp 0x1718d867 */
L_1718D84F:
    eax = MEM32(ebp + (-0x14)); /* 0x1718D84F: mov eax, dword ptr [ebp - 0x14] */
    esi = MEM32(ebx + 0x30); /* 0x1718D852: mov esi, dword ptr [ebx + 0x30] */
    edi = MEM32(eax + 0x14); /* 0x1718D855: mov edi, dword ptr [eax + 0x14] */
    goto L_1718D875; /* 0x1718D858: jmp 0x1718d875 */
L_1718D85A:
    esi = MEM32(ebp + (-0x14)); /* 0x1718D85A: mov esi, dword ptr [ebp - 0x14] */
    eax = MEM32(ebp + 0x14); /* 0x1718D85D: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x1718D860: push esi */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1718D861: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(eax + 0x8)); /* 0x1718D864: push dword ptr [eax + 8] */
L_1718D867:
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1718D867: push dword ptr [ebp + 0x1c] */
    RECOMP_CALL(sub_17196600); /* 0x1718D86A: call 0x17196600 */
    RECOMP_FLAGS_IN();
    esi = MEM32(esi + 0x14); /* 0x1718D86F: mov esi, dword ptr [esi + 0x14] */
    edi = MEM32(ebx + 0x30); /* 0x1718D872: mov edi, dword ptr [ebx + 0x30] */
L_1718D875:
    ecx = MEM32(ebp + (-0x8)); /* 0x1718D875: mov ecx, dword ptr [ebp - 8] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 0x1C)); /* 0x1718D878: imul ecx, dword ptr [ebp + 0x1c] */
    if (3u) _cf = (((ecx) >> 29) & 1u); /* 0x1718D87C: shl ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 3u; /* 0x1718D87C: shl ecx, 3 */
    MEM32(ebp + 0x10) = ecx; /* 0x1718D87F: mov dword ptr [ebp + 0x10], ecx */
    eax = ecx; /* 0x1718D882: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1718D884: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1718D884: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1718D887: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1718D889: mov ecx, eax */
    eax = MEM32(ebp + 0x1C); /* 0x1718D88B: mov eax, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1718D88E: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1718D891: rep movsb byte ptr es:[edi], byte ptr [esi] */
    esi = MEM32(ebp + (-0x14)); /* 0x1718D893: mov esi, dword ptr [ebp - 0x14] */
    ecx = MEM32(esi + 0x10); /* 0x1718D896: mov ecx, dword ptr [esi + 0x10] */
    edx = ecx; /* 0x1718D899: mov edx, ecx */
    RECOMP_CALL(sub_1718CF18); /* 0x1718D89B: call 0x1718cf18 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x14); /* 0x1718D8A0: mov eax, dword ptr [ebp + 0x14] */
    edx = MEM32(eax + 0x10); /* 0x1718D8A3: mov edx, dword ptr [eax + 0x10] */
    ecx = MEM32(ebp + 0x10); /* 0x1718D8A6: mov ecx, dword ptr [ebp + 0x10] */
    esi = MEM32(esi + 0x14); /* 0x1718D8A9: mov esi, dword ptr [esi + 0x14] */
    eax = ecx; /* 0x1718D8AC: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1718D8AE: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1718D8AE: shr ecx, 2 */
    edi = edx; /* 0x1718D8B1: mov edi, edx */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1718D8B3: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1718D8B5: mov ecx, eax */
    eax = MEM32(ebp + (-0x14)); /* 0x1718D8B7: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1718D8BA: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1718D8BD: rep movsb byte ptr es:[edi], byte ptr [esi] */
    PUSH32(esp, MEM32(eax + 0x14)); /* 0x1718D8BF: push dword ptr [eax + 0x14] */
    esi = MEM32(ebp + (-0x4)); /* 0x1718D8C2: mov esi, dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(eax + 0x10)); /* 0x1718D8C5: push dword ptr [eax + 0x10] */
    eax = MEM32(ebp + 0x14); /* 0x1718D8C8: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, edx); /* 0x1718D8CB: push edx */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1718D8CC: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, esi); /* 0x1718D8CF: push esi */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1718D8D0: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x1718D8D3: push dword ptr [eax + 4] */
    RECOMP_CALL(sub_1718D2F7); /* 0x1718D8D6: call 0x1718d2f7 */
    RECOMP_FLAGS_IN();
    goto L_1718DBA2; /* 0x1718D8DB: jmp 0x1718dba2 */
L_1718D8E0:
    _flag_a = (uint32_t)(MEM32(0x1723F6D4)); _flag_b = (uint32_t)(1);
    MEM32(0x1723F6D4) = MEM32(0x1723F6D4) + 1; /* 0x1718D8E0: inc dword ptr [0x1723f6d4] */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + 0x1C), eax */ /* 0x1718D8E6: cmp dword ptr [ebp + 0x1c], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1718D8EE; /* 0x1718D8E9: jl 0x1718d8ee */
L_1718D8EB:
    MEM32(ebp + 0x1C) = eax; /* 0x1718D8EB: mov dword ptr [ebp + 0x1c], eax */
L_1718D8EE:
    eax = MEM32(ebp + 0x1C); /* 0x1718D8EE: mov eax, dword ptr [ebp + 0x1c] */
    /* cmp eax, MEM32(esi + 0x4) */ /* 0x1718D8F1: cmp eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718D90B; /* 0x1718D8F4: jne 0x1718d90b */
L_1718D8F6:
    /* cmp MEM32(ebp + (-0x1C)), ecx */ /* 0x1718D8F6: cmp dword ptr [ebp - 0x1c], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718D90B; /* 0x1718D8F9: jne 0x1718d90b */
L_1718D8FB:
    /* cmp MEM32(ebp + (-0x18)), ecx */ /* 0x1718D8FB: cmp dword ptr [ebp - 0x18], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718D90B; /* 0x1718D8FE: jne 0x1718d90b */
L_1718D900:
    _flag_a = (uint32_t)(MEM32(0x1723F6DC)); _flag_b = (uint32_t)(1);
    MEM32(0x1723F6DC) = MEM32(0x1723F6DC) + 1; /* 0x1718D900: inc dword ptr [0x1723f6dc] */
    _flag_k = FK_INC;
    goto L_1718DC38; /* 0x1718D906: jmp 0x1718dc38 */
L_1718D90B:
    eax = MEM32(ebp + (-0x18)); /* 0x1718D90B: mov eax, dword ptr [ebp - 0x18] */
    ecx = MEM32(ebp + (-0x1C)); /* 0x1718D90E: mov ecx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1718D911: add eax, ecx */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + (-0x20)) */ /* 0x1718D913: cmp eax, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x3C)) = eax; /* 0x1718D916: mov dword ptr [ebp - 0x3c], eax */
    if (CMP_L(_flag_a, _flag_b)) goto L_1718D97C; /* 0x1718D919: jl 0x1718d97c */
L_1718D91B:
    ecx = MEM32(ebp + (-0x4)); /* 0x1718D91B: mov ecx, dword ptr [ebp - 4] */
    edx = MEM32(esi + 0x2C); /* 0x1718D91E: mov edx, dword ptr [esi + 0x2c] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ecx); /* 0x1718D921: imul ecx, ecx */
    RECOMP_CALL(sub_1718CE6F); /* 0x1718D924: call 0x1718ce6f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x1718D929: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x1718D92D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(0.0); /* 0x1718D92F: fldz  */
    { double _v = fp_pop(); *(double*)ADDR(esi + 0x20) = _v; } /* 0x1718D931: fstp qword ptr [esi + 0x20] */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718DA38; /* 0x1718D934: jle 0x1718da38 */
L_1718D93A:
    eax = MEM32(ebp + (-0x38)); /* 0x1718D93A: mov eax, dword ptr [ebp - 0x38] */
    ecx = MEM32(ebp + (-0xC)); /* 0x1718D93D: mov ecx, dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(eax + ecx * 4)); /* 0x1718D940: push dword ptr [eax + ecx*4] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1718D943: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1718CFED); /* 0x1718D946: call 0x1718cfed */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x2C); /* 0x1718D94B: mov ecx, dword ptr [esi + 0x2c] */
    edi = MEM32(ebp + (-0x4)); /* 0x1718D94E: mov edi, dword ptr [ebp - 4] */
    ebx = eax; /* 0x1718D951: mov ebx, eax */
    RECOMP_CALL(sub_1718CF4A); /* 0x1718D953: call 0x1718cf4a */
    RECOMP_FLAGS_IN();
    edx = edi; /* 0x1718D958: mov edx, edi */
    eax = ebx; /* 0x1718D95A: mov eax, ebx */
    ecx = ebx; /* 0x1718D95C: mov ecx, ebx */
    RECOMP_CALL(sub_171968B1); /* 0x1718D95E: call 0x171968b1 */
    RECOMP_FLAGS_IN();
    _st[0] += *(double*)ADDR(esi + 0x20); /* 0x1718D963: fadd qword ptr [esi + 0x20] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 1; /* 0x1718D966: inc dword ptr [ebp - 0xc] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0xC)); /* 0x1718D969: mov eax, dword ptr [ebp - 0xc] */
    /* cmp eax, MEM32(ebp + (-0x8)) */ /* 0x1718D96C: cmp eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esi + 0x20) = _v; } /* 0x1718D96F: fstp qword ptr [esi + 0x20] */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1718D93A; /* 0x1718D972: jl 0x1718d93a */
L_1718D974:
    edi = MEM32(ebp + 0x14); /* 0x1718D974: mov edi, dword ptr [ebp + 0x14] */
    goto L_1718DA38; /* 0x1718D977: jmp 0x1718da38 */
L_1718D97C:
    eax = MEM32(esi + 0x34); /* 0x1718D97C: mov eax, dword ptr [esi + 0x34] */
    edx = MEM32(ebp + (-0x4)); /* 0x1718D97F: mov edx, dword ptr [ebp - 4] */
    ecx = eax; /* 0x1718D982: mov ecx, eax */
    RECOMP_CALL(sub_171968B1); /* 0x1718D984: call 0x171968b1 */
    RECOMP_FLAGS_IN();
    _st[0] = _st[0] * (double)(int32_t)MEM32(ebp + (-0xC)); /* 0x1718D989: fimul dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x1718D98C: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x24)), 0 */ /* 0x1718D990: cmp dword ptr [ebp - 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _st[0] += *(double*)ADDR(esi + 0x20); /* 0x1718D994: fadd qword ptr [esi + 0x20] */
    { double _v = fp_pop(); *(double*)ADDR(esi + 0x20) = _v; } /* 0x1718D997: fstp qword ptr [esi + 0x20] */
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718DA38; /* 0x1718D99A: jle 0x1718da38 */
L_1718D9A0:
    ebx = MEM32(ebp + 0xC); /* 0x1718D9A0: mov ebx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x1718D9A3: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x1718D9A6: sub eax, ebx */
    _flag_k = FK_CMP;
    MEM32(ebp + 0xC) = ebx; /* 0x1718D9A8: mov dword ptr [ebp + 0xc], ebx */
    MEM32(ebp + 0x8) = eax; /* 0x1718D9AB: mov dword ptr [ebp + 8], eax */
    goto L_1718D9B3; /* 0x1718D9AE: jmp 0x1718d9b3 */
L_1718D9B0:
    eax = MEM32(ebp + 0x8); /* 0x1718D9B0: mov eax, dword ptr [ebp + 8] */
L_1718D9B3:
    eax = MEM32(ebx + eax); /* 0x1718D9B3: mov eax, dword ptr [ebx + eax] */
    ecx = MEM32(ebp + (-0x2C)); /* 0x1718D9B6: mov ecx, dword ptr [ebp - 0x2c] */
    /* cmp eax, ecx */ /* 0x1718D9B9: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718D9F3; /* 0x1718D9BB: jne 0x1718d9f3 */
L_1718D9BD:
    /* cmp MEM32(ebx), ecx */ /* 0x1718D9BD: cmp dword ptr [ebx], ecx */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718D9EF; /* 0x1718D9BF: je 0x1718d9ef */
L_1718D9C1:
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1718D9C1: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1718D9C4: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1718CFED); /* 0x1718D9C7: call 0x1718cfed */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x2C); /* 0x1718D9CC: mov ecx, dword ptr [esi + 0x2c] */
    edi = MEM32(ebp + (-0x4)); /* 0x1718D9CF: mov edi, dword ptr [ebp - 4] */
    ebx = eax; /* 0x1718D9D2: mov ebx, eax */
    RECOMP_CALL(sub_1718CF4A); /* 0x1718D9D4: call 0x1718cf4a */
    RECOMP_FLAGS_IN();
    edx = edi; /* 0x1718D9D9: mov edx, edi */
    eax = ebx; /* 0x1718D9DB: mov eax, ebx */
    ecx = ebx; /* 0x1718D9DD: mov ecx, ebx */
    RECOMP_CALL(sub_171968B1); /* 0x1718D9DF: call 0x171968b1 */
    RECOMP_FLAGS_IN();
    _st[0] += *(double*)ADDR(esi + 0x20); /* 0x1718D9E4: fadd qword ptr [esi + 0x20] */
    ebx = MEM32(ebp + 0xC); /* 0x1718D9E7: mov ebx, dword ptr [ebp + 0xc] */
    edi = MEM32(ebp + 0x14); /* 0x1718D9EA: mov edi, dword ptr [ebp + 0x14] */
    goto L_1718DA20; /* 0x1718D9ED: jmp 0x1718da20 */
L_1718D9EF:
    /* cmp eax, ecx */ /* 0x1718D9EF: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718DA23; /* 0x1718D9F1: je 0x1718da23 */
L_1718D9F3:
    /* cmp MEM32(ebx), ecx */ /* 0x1718D9F3: cmp dword ptr [ebx], ecx */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718DA23; /* 0x1718D9F5: jne 0x1718da23 */
L_1718D9F7:
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1718D9F7: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1718D9FA: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1718CFED); /* 0x1718D9FD: call 0x1718cfed */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x2C)); /* 0x1718DA02: push dword ptr [esi + 0x2c] */
    edx = MEM32(ebp + (-0x4)); /* 0x1718DA05: mov edx, dword ptr [ebp - 4] */
    MEM32(ebp + 0xC) = eax; /* 0x1718DA08: mov dword ptr [ebp + 0xc], eax */
    RECOMP_CALL(sub_1718CF87); /* 0x1718DA0B: call 0x1718cf87 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x1718DA10: mov ecx, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + (-0x4)); /* 0x1718DA13: mov edx, dword ptr [ebp - 4] */
    eax = ecx; /* 0x1718DA16: mov eax, ecx */
    RECOMP_CALL(sub_171968B1); /* 0x1718DA18: call 0x171968b1 */
    RECOMP_FLAGS_IN();
    _st[0] = *(double*)ADDR(esi + 0x20) - _st[0]; /* 0x1718DA1D: fsubr qword ptr [esi + 0x20] */
L_1718DA20:
    { double _v = fp_pop(); *(double*)ADDR(esi + 0x20) = _v; } /* 0x1718DA20: fstp qword ptr [esi + 0x20] */
L_1718DA23:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 1; /* 0x1718DA23: inc dword ptr [ebp - 0xc] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0xC)); /* 0x1718DA26: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x1718DA29: add ebx, 4 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + (-0x24)) */ /* 0x1718DA2C: cmp eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x24)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0xC) = ebx; /* 0x1718DA2F: mov dword ptr [ebp + 0xc], ebx */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1718D9B0; /* 0x1718DA32: jl 0x1718d9b0 */
L_1718DA38:
    ecx = MEM32(ebp + (-0x10)); /* 0x1718DA38: mov ecx, dword ptr [ebp - 0x10] */
    ebx = MEM32(ebp + (-0x4)); /* 0x1718DA3B: mov ebx, dword ptr [ebp - 4] */
    edx = ebx; /* 0x1718DA3E: mov edx, ebx */
    eax = ecx; /* 0x1718DA40: mov eax, ecx */
    RECOMP_CALL(sub_171968B1); /* 0x1718DA42: call 0x171968b1 */
    RECOMP_FLAGS_IN();
    _st[0] *= *(double*)ADDR(ebp + (-0x44)); /* 0x1718DA47: fmul qword ptr [ebp - 0x44] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ebx); /* 0x1718DA4A: imul ebx, ebx */
    _st[0] = *(double*)ADDR(esi + 0x20) - _st[0]; /* 0x1718DA4D: fsubr qword ptr [esi + 0x20] */
    { double _v = fp_pop(); *(double*)ADDR(esi + 0x20) = _v; } /* 0x1718DA50: fstp qword ptr [esi + 0x20] */
    /* test ebx, ebx */ /* 0x1718DA53: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi + 0x8); /* 0x1718DA55: mov eax, dword ptr [edi + 8] */
    ecx = MEM32(esi + 0x2C); /* 0x1718DA58: mov ecx, dword ptr [esi + 0x2c] */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718DA6C; /* 0x1718DA5B: jle 0x1718da6c */
L_1718DA5D:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1718DA5D: sub ecx, eax */
    _flag_k = FK_CMP;
    edx = ebx; /* 0x1718DA5F: mov edx, ebx */
L_1718DA61:
    fp_push(*(double*)ADDR(ecx + eax)); /* 0x1718DA61: fld qword ptr [ecx + eax] */
    { double _v = fp_pop(); *(double*)ADDR(eax) = _v; } /* 0x1718DA64: fstp qword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1718DA66: add eax, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1718DA69: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1718DA61; /* 0x1718DA6A: jne 0x1718da61 */
L_1718DA6C:
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x1718DA6C: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718DA88; /* 0x1718DA70: jle 0x1718da88 */
L_1718DA72:
    eax = MEM32(ebp + (-0x28)); /* 0x1718DA72: mov eax, dword ptr [ebp - 0x28] */
    ecx = MEM32(ebp + (-0x10)); /* 0x1718DA75: mov ecx, dword ptr [ebp - 0x10] */
    edx = MEM32(ebp + (-0x4)); /* 0x1718DA78: mov edx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1718DA7B: sub ecx, eax */
    _flag_k = FK_CMP;
L_1718DA7D:
    fp_push(*(double*)ADDR(ecx + eax)); /* 0x1718DA7D: fld qword ptr [ecx + eax] */
    { double _v = fp_pop(); *(double*)ADDR(eax) = _v; } /* 0x1718DA80: fstp qword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1718DA82: add eax, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1718DA85: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1718DA7D; /* 0x1718DA86: jne 0x1718da7d */
L_1718DA88:
    fp_push(*(double*)ADDR(ebp + (-0x44))); /* 0x1718DA88: fld qword ptr [ebp - 0x44] */
    edx = MEM32(ebp + (-0x4)); /* 0x1718DA8B: mov edx, dword ptr [ebp - 4] */
    _st[0] = sqrt(_st[0]); /* 0x1718DA8E: fsqrt  */
    PUSH32(esp, ecx); /* 0x1718DA90: push ecx */
    PUSH32(esp, ecx); /* 0x1718DA91: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1718DA92: fstp qword ptr [esp] */
    PUSH32(esp, edx); /* 0x1718DA95: push edx */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x1718DA96: push dword ptr [ebp - 0x28] */
    RECOMP_CALL(sub_171968CC); /* 0x1718DA99: call 0x171968cc */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x1718DA9E: push dword ptr [edi + 8] */
    eax = MEM32(ebp + (-0x28)); /* 0x1718DAA1: mov eax, dword ptr [ebp - 0x28] */
    RECOMP_CALL(sub_1718CF87); /* 0x1718DAA4: call 0x1718cf87 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(0x172374A8), 0 */ /* 0x1718DAA9: cmp dword ptr [0x172374a8], 0 */
    _flag_a = (uint32_t)(MEM32(0x172374A8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718DB59; /* 0x1718DAB0: je 0x1718db59 */
L_1718DAB6:
    eax = MEM32(ebp + (-0x3C)); /* 0x1718DAB6: mov eax, dword ptr [ebp - 0x3c] */
    /* cmp MEM32(ebp + (-0x20)), eax */ /* 0x1718DAB9: cmp dword ptr [ebp - 0x20], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x20))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718DB59; /* 0x1718DABC: jle 0x1718db59 */
L_1718DAC2:
    eax = MEM32(ebp + 0x1C); /* 0x1718DAC2: mov eax, dword ptr [ebp + 0x1c] */
    /* cmp eax, MEM32(esi + 0x4) */ /* 0x1718DAC5: cmp eax, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1718DB59; /* 0x1718DAC8: jg 0x1718db59 */
L_1718DACE:
    esi = MEM32(edi + 0x8); /* 0x1718DACE: mov esi, dword ptr [edi + 8] */
    eax = MEM32(ebp + 0x14); /* 0x1718DAD1: mov eax, dword ptr [ebp + 0x14] */
    edi = MEM32(eax + 0xC); /* 0x1718DAD4: mov edi, dword ptr [eax + 0xc] */
    ecx = ebx + ebx; /* 0x1718DAD7: lea ecx, [ebx + ebx] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1718DADA: rep movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + 0x1C); /* 0x1718DADC: mov esi, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1718DADF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1718DAE1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718DB08; /* 0x1718DAE3: jle 0x1718db08 */
L_1718DAE5:
    edx = MEM32(ebp + 0x18); /* 0x1718DAE5: mov edx, dword ptr [ebp + 0x18] */
    edx = MEM32(edx + 0x18); /* 0x1718DAE8: mov edx, dword ptr [edx + 0x18] */
    fp_push(*(float*)&MEM32(edx + ecx * 4)); /* 0x1718DAEB: fld dword ptr [edx + ecx*4] */
    edx = MEM32(ebp + (-0x14)); /* 0x1718DAEE: mov edx, dword ptr [ebp - 0x14] */
    edx = MEM32(edx + 0x10); /* 0x1718DAF1: mov edx, dword ptr [edx + 0x10] */
    fp_push(_st[0]); /* 0x1718DAF4: fld st(0) */
    _st[0] *= _st[1]; /* 0x1718DAF6: fmul st(1) */
    _st[0] *= *(double*)ADDR(0x172374B0); /* 0x1718DAF8: fmul qword ptr [0x172374b0] */
    { double _v = fp_pop(); *(double*)ADDR(edx + ecx * 8) = _v; } /* 0x1718DAFE: fstp qword ptr [edx + ecx*8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1718DB01: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, esi */ /* 0x1718DB02: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718DB04: fstp st(0) */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1718DAE5; /* 0x1718DB06: jl 0x1718dae5 */
L_1718DB08:
    PUSH32(esp, MEM32(eax + 0x2C)); /* 0x1718DB08: push dword ptr [eax + 0x2c] */
    ebx = MEM32(ebp + (-0x14)); /* 0x1718DB0B: mov ebx, dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebx + 0x10)); /* 0x1718DB0E: push dword ptr [ebx + 0x10] */
    edi = MEM32(ebp + 0x18); /* 0x1718DB11: mov edi, dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(edi + 0x30)); /* 0x1718DB14: push dword ptr [edi + 0x30] */
    PUSH32(esp, esi); /* 0x1718DB17: push esi */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1718DB18: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x1718DB1B: push dword ptr [eax + 0xc] */
    RECOMP_CALL(sub_17196988); /* 0x1718DB1E: call 0x17196988 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1718DB23: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718DB4B; /* 0x1718DB25: je 0x1718db4b */
L_1718DB27:
    eax = MEM32(ebp + 0x14); /* 0x1718DB27: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(MEM32(0x1723F690)); _flag_b = (uint32_t)(1);
    MEM32(0x1723F690) = MEM32(0x1723F690) + 1; /* 0x1718DB2A: inc dword ptr [0x1723f690] */
    _flag_k = FK_INC;
    PUSH32(esp, ebx); /* 0x1718DB30: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1718DB31: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(eax + 0x8)); /* 0x1718DB34: push dword ptr [eax + 8] */
    PUSH32(esp, esi); /* 0x1718DB37: push esi */
    RECOMP_CALL(sub_17196600); /* 0x1718DB38: call 0x17196600 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x1718DB3D: mov ecx, dword ptr [ebp - 4] */
    edi = MEM32(edi + 0x30); /* 0x1718DB40: mov edi, dword ptr [edi + 0x30] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)esi); /* 0x1718DB43: imul ecx, esi */
    esi = MEM32(ebx + 0x14); /* 0x1718DB46: mov esi, dword ptr [ebx + 0x14] */
    goto L_1718DB7E; /* 0x1718DB49: jmp 0x1718db7e */
L_1718DB4B:
    ecx = MEM32(ebp + (-0x4)); /* 0x1718DB4B: mov ecx, dword ptr [ebp - 4] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)esi); /* 0x1718DB4E: imul ecx, esi */
    esi = MEM32(edi + 0x30); /* 0x1718DB51: mov esi, dword ptr [edi + 0x30] */
    edi = MEM32(ebx + 0x14); /* 0x1718DB54: mov edi, dword ptr [ebx + 0x14] */
    goto L_1718DB7E; /* 0x1718DB57: jmp 0x1718db7e */
L_1718DB59:
    esi = MEM32(ebp + (-0x14)); /* 0x1718DB59: mov esi, dword ptr [ebp - 0x14] */
    PUSH32(esp, esi); /* 0x1718DB5C: push esi */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1718DB5D: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x1718DB60: push dword ptr [edi + 8] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1718DB63: push dword ptr [ebp + 0x1c] */
    RECOMP_CALL(sub_17196600); /* 0x1718DB66: call 0x17196600 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x1718DB6B: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ebp + 0x18); /* 0x1718DB6E: mov eax, dword ptr [ebp + 0x18] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 0x1C)); /* 0x1718DB71: imul ecx, dword ptr [ebp + 0x1c] */
    esi = MEM32(esi + 0x14); /* 0x1718DB75: mov esi, dword ptr [esi + 0x14] */
    edi = MEM32(eax + 0x30); /* 0x1718DB78: mov edi, dword ptr [eax + 0x30] */
    ebx = MEM32(ebp + (-0x14)); /* 0x1718DB7B: mov ebx, dword ptr [ebp - 0x14] */
L_1718DB7E:
    if (3u) _cf = (((ecx) >> 29) & 1u); /* 0x1718DB7E: shl ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 3u; /* 0x1718DB7E: shl ecx, 3 */
    eax = ecx; /* 0x1718DB81: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1718DB83: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1718DB83: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1718DB86: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1718DB88: mov ecx, eax */
    eax = MEM32(ebp + 0x1C); /* 0x1718DB8A: mov eax, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1718DB8D: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1718DB90: rep movsb byte ptr es:[edi], byte ptr [esi] */
    ecx = MEM32(ebx + 0x10); /* 0x1718DB92: mov ecx, dword ptr [ebx + 0x10] */
    edx = ecx; /* 0x1718DB95: mov edx, ecx */
    RECOMP_CALL(sub_1718CF18); /* 0x1718DB97: call 0x1718cf18 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x4)); /* 0x1718DB9C: mov esi, dword ptr [ebp - 4] */
    ebx = MEM32(ebp + 0x18); /* 0x1718DB9F: mov ebx, dword ptr [ebp + 0x18] */
L_1718DBA2:
    PUSH32(esp, MEM32(ebx + 0x10)); /* 0x1718DBA2: push dword ptr [ebx + 0x10] */
    eax = MEM32(ebp + 0x1C); /* 0x1718DBA5: mov eax, dword ptr [ebp + 0x1c] */
    PUSH32(esp, esi); /* 0x1718DBA8: push esi */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1718DBA9: push dword ptr [ebp - 0x10] */
    MEM32(ebx + 0x4) = eax; /* 0x1718DBAC: mov dword ptr [ebx + 4], eax */
    RECOMP_CALL(sub_1718CED6); /* 0x1718DBAF: call 0x1718ced6 */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x1718DBB4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebx + 0x34); /* 0x1718DBB6: mov eax, dword ptr [ebx + 0x34] */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718DBCD; /* 0x1718DBB9: jle 0x1718dbcd */
L_1718DBBB:
    ecx = MEM32(ebp + (-0x10)); /* 0x1718DBBB: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1718DBBE: sub ecx, eax */
    _flag_k = FK_CMP;
    edx = esi; /* 0x1718DBC0: mov edx, esi */
L_1718DBC2:
    fp_push(*(double*)ADDR(ecx + eax)); /* 0x1718DBC2: fld qword ptr [ecx + eax] */
    { double _v = fp_pop(); *(double*)ADDR(eax) = _v; } /* 0x1718DBC5: fstp qword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1718DBC7: add eax, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1718DBCA: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1718DBC2; /* 0x1718DBCB: jne 0x1718dbc2 */
L_1718DBCD:
    PUSH32(esp, MEM32(ebx + 0x18)); /* 0x1718DBCD: push dword ptr [ebx + 0x18] */
    eax = MEM32(ebp + (-0x14)); /* 0x1718DBD0: mov eax, dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebx + 0x4)); /* 0x1718DBD3: push dword ptr [ebx + 4] */
    edx = MEM32(ebx + 0x8); /* 0x1718DBD6: mov edx, dword ptr [ebx + 8] */
    PUSH32(esp, MEM32(eax + 0x10)); /* 0x1718DBD9: push dword ptr [eax + 0x10] */
    MEM32(ebp + 0x1C) = edx; /* 0x1718DBDC: mov dword ptr [ebp + 0x1c], edx */
    RECOMP_CALL(sub_1718CED6); /* 0x1718DBDF: call 0x1718ced6 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x4); /* 0x1718DBE4: mov eax, dword ptr [ebx + 4] */
    ecx = edx; /* 0x1718DBE7: mov ecx, edx */
    edx = MEM32(ebx + 0x18); /* 0x1718DBE9: mov edx, dword ptr [ebx + 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1718DBEC: sub ecx, eax */
    _flag_k = FK_CMP;
    /* test ecx, ecx */ /* 0x1718DBEE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    edi = edx + eax * 4; /* 0x1718DBF0: lea edi, [edx + eax*4] */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718DBF9; /* 0x1718DBF3: jle 0x1718dbf9 */
L_1718DBF5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718DBF5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1718DBF7: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
L_1718DBF9:
    eax = MEM32(ebp + (-0x14)); /* 0x1718DBF9: mov eax, dword ptr [ebp - 0x14] */
    edi = MEM32(eax + 0x14); /* 0x1718DBFC: mov edi, dword ptr [eax + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1718DBFF: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x4), edx */ /* 0x1718DC01: cmp dword ptr [ebx + 4], edx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718DC33; /* 0x1718DC04: jle 0x1718dc33 */
L_1718DC06:
    eax = MEM32(ebx + 0x14); /* 0x1718DC06: mov eax, dword ptr [ebx + 0x14] */
    PUSH32(esp, MEM32(eax + edx * 4)); /* 0x1718DC09: push dword ptr [eax + edx*4] */
    PUSH32(esp, esi); /* 0x1718DC0C: push esi */
    PUSH32(esp, edi); /* 0x1718DC0D: push edi */
    RECOMP_CALL(sub_1718CED6); /* 0x1718DC0E: call 0x1718ced6 */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1718DC13: mov eax, esi */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x1718DC15: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x1718DC15: shl eax, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x1718DC18: add edi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1718DC1A: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, MEM32(ebx + 0x4) */ /* 0x1718DC1B: cmp edx, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1718DC06; /* 0x1718DC1E: jl 0x1718dc06 */
L_1718DC20:
    goto L_1718DC33; /* 0x1718DC20: jmp 0x1718dc33 */
L_1718DC22:
    /* test esi, esi */ /* 0x1718DC22: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebx + 0x14); /* 0x1718DC24: mov eax, dword ptr [ebx + 0x14] */
    edi = MEM32(eax + edx * 4); /* 0x1718DC27: mov edi, dword ptr [eax + edx*4] */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718DC32; /* 0x1718DC2A: jle 0x1718dc32 */
L_1718DC2C:
    ecx = esi; /* 0x1718DC2C: mov ecx, esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718DC2E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1718DC30: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
L_1718DC32:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1718DC32: inc edx */
    _flag_k = FK_INC;
L_1718DC33:
    /* cmp edx, MEM32(ebp + 0x1C) */ /* 0x1718DC33: cmp edx, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1718DC22; /* 0x1718DC36: jl 0x1718dc22 */
L_1718DC38:
    edi = POP32_VAL(esp); /* 0x1718DC38: pop edi */
    esi = POP32_VAL(esp); /* 0x1718DC39: pop esi */
    ebx = POP32_VAL(esp); /* 0x1718DC3A: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1718DC3B: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1718DC3C: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1718DC44(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718DC44u);

L_1718DC44:
    edi = edi; /* 0x1718DC44: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718DC46: push ebp */
    ebp = esp; /* 0x1718DC47: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1718DC49: push ecx */
    PUSH32(esp, ecx); /* 0x1718DC4A: push ecx */
    PUSH32(esp, ebx); /* 0x1718DC4B: push ebx */
    ebx = MEM32(ecx + 0x14); /* 0x1718DC4C: mov ebx, dword ptr [ecx + 0x14] */
    PUSH32(esp, esi); /* 0x1718DC4F: push esi */
    PUSH32(esp, edi); /* 0x1718DC50: push edi */
    edi = eax; /* 0x1718DC51: mov edi, eax */
    /* test edi, edi */ /* 0x1718DC53: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx + 0x10); /* 0x1718DC55: mov eax, dword ptr [ecx + 0x10] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1718DC5D; /* 0x1718DC58: jge 0x1718dc5d */
L_1718DC5A:
    edi = MEM32(ecx + 0xC); /* 0x1718DC5A: mov edi, dword ptr [ecx + 0xc] */
L_1718DC5D:
    ecx = MEM32(ecx + 0x4); /* 0x1718DC5D: mov ecx, dword ptr [ecx + 4] */
    /* cmp edi, ecx */ /* 0x1718DC60: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1718DC66; /* 0x1718DC62: jl 0x1718dc66 */
L_1718DC64:
    edi = ecx; /* 0x1718DC64: mov edi, ecx */
L_1718DC66:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1718DC66: push dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x10); /* 0x1718DC69: mov edx, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x1718DC6C: mov ecx, dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1718CEAD); /* 0x1718DC6F: call 0x1718cead */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x1718DC74: mov eax, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + 0xC); /* 0x1718DC77: mov edx, dword ptr [ebp + 0xc] */
    ecx = eax; /* 0x1718DC7A: mov ecx, eax */
    RECOMP_CALL(sub_1718CEFD); /* 0x1718DC7C: call 0x1718cefd */
    RECOMP_FLAGS_IN();
    *(double*)ADDR(ebp + (-0x8)) = _st[0]; /* 0x1718DC81: fst qword ptr [ebp - 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1718DC84: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x1718DC86: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718DCAB; /* 0x1718DC88: jle 0x1718dcab */
L_1718DC8A:
    edx = MEM32(ebp + 0xC); /* 0x1718DC8A: mov edx, dword ptr [ebp + 0xc] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718DC8D: fstp st(0) */
    eax = MEM32(ebx + esi * 4); /* 0x1718DC8F: mov eax, dword ptr [ebx + esi*4] */
    ecx = MEM32(ebp + 0x10); /* 0x1718DC92: mov ecx, dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1718CEFD); /* 0x1718DC95: call 0x1718cefd */
    RECOMP_FLAGS_IN();
    fp_push(_st[0]); /* 0x1718DC9A: fld st(0) */
    _st[0] *= _st[1]; /* 0x1718DC9C: fmul st(1) */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1718DC9E: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, edi */ /* 0x1718DC9F: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _st[0] = *(double*)ADDR(ebp + (-0x8)) - _st[0]; /* 0x1718DCA1: fsubr qword ptr [ebp - 8] */
    *(double*)ADDR(ebp + (-0x8)) = _st[0]; /* 0x1718DCA4: fst qword ptr [ebp - 8] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1718DCA7: fstp st(1) */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1718DC8A; /* 0x1718DCA9: jl 0x1718dc8a */
L_1718DCAB:
    edi = POP32_VAL(esp); /* 0x1718DCAB: pop edi */
    esi = POP32_VAL(esp); /* 0x1718DCAC: pop esi */
    ebx = POP32_VAL(esp); /* 0x1718DCAD: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1718DCAE: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1718DCAF: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1718DCB7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718DCB7u);

L_1718DCB7:
    edi = edi; /* 0x1718DCB7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718DCB9: push ebp */
    ebp = esp; /* 0x1718DCBA: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1718DCBC: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x1718DCBF: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1718DCC0: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), esi */ /* 0x1718DCC2: cmp dword ptr [ebp + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x1718DCC5: push edi */
    edi = eax; /* 0x1718DCC6: mov edi, eax */
    if (CMP_GE(_flag_a, _flag_b)) goto L_1718DCD0; /* 0x1718DCC8: jge 0x1718dcd0 */
L_1718DCCA:
    eax = MEM32(edi + 0xC); /* 0x1718DCCA: mov eax, dword ptr [edi + 0xc] */
    MEM32(ebp + 0xC) = eax; /* 0x1718DCCD: mov dword ptr [ebp + 0xc], eax */
L_1718DCD0:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1718DCD0: push dword ptr [ebp + 8] */
    eax = MEM32(edi + 0x10); /* 0x1718DCD3: mov eax, dword ptr [edi + 0x10] */
    edx = ebx; /* 0x1718DCD6: mov edx, ebx */
    RECOMP_CALL(sub_1718CEAD); /* 0x1718DCD8: call 0x1718cead */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x8); /* 0x1718DCDD: mov edx, dword ptr [ebp + 8] */
    eax = ebx; /* 0x1718DCE0: mov eax, ebx */
    ecx = ebx; /* 0x1718DCE2: mov ecx, ebx */
    RECOMP_CALL(sub_1718CEFD); /* 0x1718DCE4: call 0x1718cefd */
    RECOMP_FLAGS_IN();
    *(double*)ADDR(ebp + (-0xC)) = _st[0]; /* 0x1718DCE9: fst qword ptr [ebp - 0xc] */
    ecx = MEM32(ebp + 0xC); /* 0x1718DCEC: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(edi + 0x4); /* 0x1718DCEF: mov eax, dword ptr [edi + 4] */
    /* cmp ecx, eax */ /* 0x1718DCF2: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = ecx; /* 0x1718DCF4: mov dword ptr [ebp - 4], ecx */
    if (CMP_L(_flag_a, _flag_b)) goto L_1718DCFC; /* 0x1718DCF7: jl 0x1718dcfc */
L_1718DCF9:
    MEM32(ebp + (-0x4)) = eax; /* 0x1718DCF9: mov dword ptr [ebp - 4], eax */
L_1718DCFC:
    /* cmp MEM32(ebp + (-0x4)), esi */ /* 0x1718DCFC: cmp dword ptr [ebp - 4], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718DD2D; /* 0x1718DCFF: jle 0x1718dd2d */
L_1718DD01:
    eax = MEM32(edi + 0x14); /* 0x1718DD01: mov eax, dword ptr [edi + 0x14] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718DD04: fstp st(0) */
    edx = MEM32(ebp + 0x8); /* 0x1718DD06: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(eax + esi * 4); /* 0x1718DD09: mov eax, dword ptr [eax + esi*4] */
    ecx = ebx; /* 0x1718DD0C: mov ecx, ebx */
    RECOMP_CALL(sub_1718CEFD); /* 0x1718DD0E: call 0x1718cefd */
    RECOMP_FLAGS_IN();
    fp_push(_st[0]); /* 0x1718DD13: fld st(0) */
    eax = MEM32(ebp + 0x10); /* 0x1718DD15: mov eax, dword ptr [ebp + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + esi * 4) = _v; } /* 0x1718DD18: fstp dword ptr [eax + esi*4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1718DD1B: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebp + (-0x4)) */ /* 0x1718DD1C: cmp esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push(_st[0]); /* 0x1718DD1F: fld st(0) */
    _st[0] *= _st[1]; /* 0x1718DD21: fmul st(1) */
    _st[0] = *(double*)ADDR(ebp + (-0xC)) - _st[0]; /* 0x1718DD23: fsubr qword ptr [ebp - 0xc] */
    *(double*)ADDR(ebp + (-0xC)) = _st[0]; /* 0x1718DD26: fst qword ptr [ebp - 0xc] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1718DD29: fstp st(1) */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1718DD01; /* 0x1718DD2B: jl 0x1718dd01 */
L_1718DD2D:
    ecx = MEM32(ebp + 0xC); /* 0x1718DD2D: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp esi, ecx */ /* 0x1718DD30: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1718DD40; /* 0x1718DD32: jge 0x1718dd40 */
L_1718DD34:
    eax = MEM32(ebp + 0x10); /* 0x1718DD34: mov eax, dword ptr [ebp + 0x10] */
    edi = eax + esi * 4; /* 0x1718DD37: lea edi, [eax + esi*4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x1718DD3A: sub ecx, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718DD3C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1718DD3E: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
L_1718DD40:
    edi = POP32_VAL(esp); /* 0x1718DD40: pop edi */
    esi = POP32_VAL(esp); /* 0x1718DD41: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1718DD42: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1718DD43: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1718DD4B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718DD4Bu);

L_1718DD4B:
    edi = edi; /* 0x1718DD4B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718DD4D: push ebp */
    ebp = esp; /* 0x1718DD4E: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1718DD50: push ecx */
    PUSH32(esp, ecx); /* 0x1718DD51: push ecx */
    eax = MEM32(ebp + 0x8); /* 0x1718DD52: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0xC); /* 0x1718DD55: mov ecx, dword ptr [eax + 0xc] */
    eax = MEM32(eax + 0x8); /* 0x1718DD58: mov eax, dword ptr [eax + 8] */
    PUSH32(esp, ebx); /* 0x1718DD5B: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x1718DD5C: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x1718DD5F: push esi */
    PUSH32(esp, edi); /* 0x1718DD60: push edi */
    edi = MEM32(ebp + 0x14); /* 0x1718DD61: mov edi, dword ptr [ebp + 0x14] */
    /* test edi, edi */ /* 0x1718DD64: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ecx; /* 0x1718DD66: mov dword ptr [ebp - 4], ecx */
    MEM32(ebp + (-0x8)) = eax; /* 0x1718DD69: mov dword ptr [ebp - 8], eax */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718DD81; /* 0x1718DD6C: jle 0x1718dd81 */
L_1718DD6E:
    esi = ebx + 0x34; /* 0x1718DD6E: lea esi, [ebx + 0x34] */
L_1718DD71:
    ecx = MEM32(ebp + (-0x4)); /* 0x1718DD71: mov ecx, dword ptr [ebp - 4] */
    edx = MEM32(esi); /* 0x1718DD74: mov edx, dword ptr [esi] */
    RECOMP_CALL(sub_1718CE6F); /* 0x1718DD76: call 0x1718ce6f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x38u; /* 0x1718DD7B: add esi, 0x38 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1718DD7E: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1718DD71; /* 0x1718DD7F: jne 0x1718dd71 */
L_1718DD81:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1718DD81: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x8)), edi */ /* 0x1718DD83: cmp dword ptr [ebp - 8], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718DDBC; /* 0x1718DD86: jle 0x1718ddbc */
L_1718DD88:
    eax = MEM32(ebp + 0xC); /* 0x1718DD88: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax + edi * 4); /* 0x1718DD8B: mov eax, dword ptr [eax + edi*4] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38u); /* 0x1718DD8E: imul eax, eax, 0x38 */
    esi = MEM32(eax + ebx + 0x34); /* 0x1718DD91: mov esi, dword ptr [eax + ebx + 0x34] */
    PUSH32(esp, edi); /* 0x1718DD95: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1718DD96: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1718CFED); /* 0x1718DD99: call 0x1718cfed */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x4)); /* 0x1718DD9E: mov edx, dword ptr [ebp - 4] */
    /* test edx, edx */ /* 0x1718DDA1: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718DDB6; /* 0x1718DDA3: jle 0x1718ddb6 */
L_1718DDA5:
    ecx = esi; /* 0x1718DDA5: mov ecx, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x1718DDA7: sub eax, esi */
    _flag_k = FK_CMP;
L_1718DDA9:
    fp_push(*(double*)ADDR(eax + ecx)); /* 0x1718DDA9: fld qword ptr [eax + ecx] */
    _st[0] += *(double*)ADDR(ecx); /* 0x1718DDAC: fadd qword ptr [ecx] */
    { double _v = fp_pop(); *(double*)ADDR(ecx) = _v; } /* 0x1718DDAE: fstp qword ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x1718DDB0: add ecx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x1718DDB3: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1718DDA9; /* 0x1718DDB4: jne 0x1718dda9 */
L_1718DDB6:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1718DDB6: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(ebp + (-0x8)) */ /* 0x1718DDB7: cmp edi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1718DD88; /* 0x1718DDBA: jl 0x1718dd88 */
L_1718DDBC:
    edi = MEM32(ebp + 0x14); /* 0x1718DDBC: mov edi, dword ptr [ebp + 0x14] */
    /* test edi, edi */ /* 0x1718DDBF: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718DE0B; /* 0x1718DDC1: jle 0x1718de0b */
L_1718DDC3:
    esi = ebx + 0x34; /* 0x1718DDC3: lea esi, [ebx + 0x34] */
L_1718DDC6:
    eax = MEM32(esi + (-0x34)); /* 0x1718DDC6: mov eax, dword ptr [esi - 0x34] */
    /* test eax, eax */ /* 0x1718DDC9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x14) = eax; /* 0x1718DDCB: mov dword ptr [ebp + 0x14], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1718DDDC; /* 0x1718DDCE: jne 0x1718dddc */
L_1718DDD0:
    PUSH32(esp, MEM32(esi)); /* 0x1718DDD0: push dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1718DDD2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1718D071); /* 0x1718DDD5: call 0x1718d071 */
    RECOMP_FLAGS_IN();
    goto L_1718DDF4; /* 0x1718DDDA: jmp 0x1718ddf4 */
L_1718DDDC:
    fp_push((double)(int32_t)MEM32(ebp + 0x14)); /* 0x1718DDDC: fild dword ptr [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x1718DDDF: push ecx */
    PUSH32(esp, ecx); /* 0x1718DDE0: push ecx */
    _st[0] = (double)*(float*)ADDR(0x17001424) / _st[0]; /* 0x1718DDE1: fdivr dword ptr [0x17001424] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1718DDE7: fstp qword ptr [esp] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1718DDEA: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(esi)); /* 0x1718DDED: push dword ptr [esi] */
    RECOMP_CALL(sub_171968CC); /* 0x1718DDEF: call 0x171968cc */
    RECOMP_FLAGS_IN();
L_1718DDF4:
    PUSH32(esp, MEM32(esi + (-0x24))); /* 0x1718DDF4: push dword ptr [esi - 0x24] */
    _flag_a = (uint32_t)(MEM32(esi + (-0x30))); _flag_b = (uint32_t)(0);
    MEM32(esi + (-0x30)) = MEM32(esi + (-0x30)) & 0; /* 0x1718DDF7: and dword ptr [esi - 0x30], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1718DDFB: push dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(esi)); /* 0x1718DDFE: push dword ptr [esi] */
    RECOMP_CALL(sub_1718CED6); /* 0x1718DE00: call 0x1718ced6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x38u; /* 0x1718DE05: add esi, 0x38 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1718DE08: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1718DDC6; /* 0x1718DE09: jne 0x1718ddc6 */
L_1718DE0B:
    edi = POP32_VAL(esp); /* 0x1718DE0B: pop edi */
    esi = POP32_VAL(esp); /* 0x1718DE0C: pop esi */
    ebx = POP32_VAL(esp); /* 0x1718DE0D: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1718DE0E: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1718DE0F: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1718DE17(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718DE17u);

L_1718DE17:
    edi = edi; /* 0x1718DE17: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718DE19: push ebp */
    ebp = esp; /* 0x1718DE1A: mov ebp, esp */
    ecx = MEM32(ebp + 0x14); /* 0x1718DE1C: mov ecx, dword ptr [ebp + 0x14] */
    /* test ecx, ecx */ /* 0x1718DE1F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    edx = MEM32(ebp + 0x10); /* 0x1718DE21: mov edx, dword ptr [ebp + 0x10] */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718DE31; /* 0x1718DE24: jle 0x1718de31 */
L_1718DE26:
    eax = edx; /* 0x1718DE26: mov eax, edx */
L_1718DE28:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0);
    MEM32(eax) = MEM32(eax) & 0; /* 0x1718DE28: and dword ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x38u; /* 0x1718DE2B: add eax, 0x38 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1718DE2E: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1718DE28; /* 0x1718DE2F: jne 0x1718de28 */
L_1718DE31:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1718DE31: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x8), ecx */ /* 0x1718DE33: cmp dword ptr [ebp + 8], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718DE4B; /* 0x1718DE36: jle 0x1718de4b */
L_1718DE38:
    eax = MEM32(ebp + 0xC); /* 0x1718DE38: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax + ecx * 4); /* 0x1718DE3B: mov eax, dword ptr [eax + ecx*4] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38u); /* 0x1718DE3E: imul eax, eax, 0x38 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1718DE41: add eax, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) + 1; /* 0x1718DE43: inc dword ptr [eax] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1718DE45: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, MEM32(ebp + 0x8) */ /* 0x1718DE46: cmp ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1718DE38; /* 0x1718DE49: jl 0x1718de38 */
L_1718DE4B:
    ebp = POP32_VAL(esp); /* 0x1718DE4B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1718DE4C: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1718DE54(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718DE54u);

L_1718DE54:
    edi = edi; /* 0x1718DE54: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718DE56: push ebp */
    ebp = esp; /* 0x1718DE57: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1718DE59: push ecx */
    PUSH32(esp, ecx); /* 0x1718DE5A: push ecx */
    PUSH32(esp, esi); /* 0x1718DE5B: push esi */
    fp_push(0.0); /* 0x1718DE5C: fldz  */
    esi = MEM32(ebp + 0x8); /* 0x1718DE5E: mov esi, dword ptr [ebp + 8] */
    *(double*)ADDR(ebp + (-0x8)) = _st[0]; /* 0x1718DE61: fst qword ptr [ebp - 8] */
    PUSH32(esp, edi); /* 0x1718DE64: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1718DE65: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x8), edi */ /* 0x1718DE67: cmp dword ptr [esi + 8], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718DE8B; /* 0x1718DE6A: jle 0x1718de8b */
L_1718DE6C:
    PUSH32(esp, edi); /* 0x1718DE6C: push edi */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718DE6D: fstp st(0) */
    PUSH32(esp, esi); /* 0x1718DE6F: push esi */
    RECOMP_CALL(sub_1718CFED); /* 0x1718DE70: call 0x1718cfed */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi + 0xC); /* 0x1718DE75: mov edx, dword ptr [esi + 0xc] */
    ecx = eax; /* 0x1718DE78: mov ecx, eax */
    RECOMP_CALL(sub_171968B1); /* 0x1718DE7A: call 0x171968b1 */
    RECOMP_FLAGS_IN();
    _st[0] += *(double*)ADDR(ebp + (-0x8)); /* 0x1718DE7F: fadd qword ptr [ebp - 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1718DE82: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(esi + 0x8) */ /* 0x1718DE83: cmp edi, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    *(double*)ADDR(ebp + (-0x8)) = _st[0]; /* 0x1718DE86: fst qword ptr [ebp - 8] */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1718DE6C; /* 0x1718DE89: jl 0x1718de6c */
L_1718DE8B:
    edi = POP32_VAL(esp); /* 0x1718DE8B: pop edi */
    esi = POP32_VAL(esp); /* 0x1718DE8C: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1718DE8D: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1718DE8E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1718E54F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718E54Fu);

    goto L_1718E54F;
L_1718DE96:
    edi = edi; /* 0x1718DE96: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718DE98: push ebp */
    ebp = esp; /* 0x1718DE99: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x1718DE9B: sub esp, 0x28 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1718DE9E: push ebx */
    PUSH32(esp, esi); /* 0x1718DE9F: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1718DEA0: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x8); /* 0x1718DEA3: mov eax, dword ptr [esi + 8] */
    PUSH32(esp, edi); /* 0x1718DEA6: push edi */
    edi = MEM32(esi + 0xC); /* 0x1718DEA7: mov edi, dword ptr [esi + 0xc] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1718DEAA: mov dword ptr [ebp - 0x18], eax */
    eax = edi; /* 0x1718DEAD: mov eax, edi */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1718DEAF: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1718DEAF: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1718DEB2: push eax */
    MEM32(ebp + (-0x10)) = edi; /* 0x1718DEB3: mov dword ptr [ebp - 0x10], edi */
    RECOMP_CALL(sub_1721B01C); /* 0x1718DEB6: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1718DEBB: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ebx */ /* 0x1718DEBD: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1718DEBF: pop ecx */
    MEM32(ebp + (-0x4)) = eax; /* 0x1718DEC0: mov dword ptr [ebp - 4], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718DED0; /* 0x1718DEC3: jne 0x1718ded0 */
L_1718DEC5:
    fp_push(*(double*)ADDR(0x17001D90)); /* 0x1718DEC5: fld qword ptr [0x17001d90] */
    goto L_1718DFCE; /* 0x1718DECB: jmp 0x1718dfce */
L_1718DED0:
    /* cmp edi, ebx */ /* 0x1718DED0: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718DEDD; /* 0x1718DED2: jle 0x1718dedd */
L_1718DED4:
    ecx = edi; /* 0x1718DED4: mov ecx, edi */
    edi = MEM32(ebp + (-0x4)); /* 0x1718DED6: mov edi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718DED9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1718DEDB: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
L_1718DEDD:
    ecx = MEM32(ebp + 0x14); /* 0x1718DEDD: mov ecx, dword ptr [ebp + 0x14] */
    /* cmp ecx, ebx */ /* 0x1718DEE0: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = ebx; /* 0x1718DEE2: mov dword ptr [ebp - 0xc], ebx */
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718DEF2; /* 0x1718DEE5: jle 0x1718def2 */
L_1718DEE7:
    eax = MEM32(ebp + 0x10); /* 0x1718DEE7: mov eax, dword ptr [ebp + 0x10] */
L_1718DEEA:
    MEM32(eax) = ebx; /* 0x1718DEEA: mov dword ptr [eax], ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x38u; /* 0x1718DEEC: add eax, 0x38 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1718DEEF: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1718DEEA; /* 0x1718DEF0: jne 0x1718deea */
L_1718DEF2:
    /* cmp MEM32(ebp + (-0x18)), ebx */ /* 0x1718DEF2: cmp dword ptr [ebp - 0x18], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push(0.0); /* 0x1718DEF5: fldz  */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x20)) = _v; } /* 0x1718DEF7: fstp qword ptr [ebp - 0x20] */
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718DFBA; /* 0x1718DEFA: jle 0x1718dfba */
L_1718DF00:
    goto L_1718DF05; /* 0x1718DF00: jmp 0x1718df05 */
L_1718DF02:
    esi = MEM32(ebp + 0x8); /* 0x1718DF02: mov esi, dword ptr [ebp + 8] */
L_1718DF05:
    PUSH32(esp, ebx); /* 0x1718DF05: push ebx */
    PUSH32(esp, esi); /* 0x1718DF06: push esi */
    RECOMP_CALL(sub_1718D02F); /* 0x1718DF07: call 0x1718d02f */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x170220E0)); /* 0x1718DF0C: fld qword ptr [0x170220e0] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1718DF12: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x28)) = _v; } /* 0x1718DF14: fstp qword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1718DF17: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x14), esi */ /* 0x1718DF19: cmp dword ptr [ebp + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x14)) = eax; /* 0x1718DF1C: mov dword ptr [ebp - 0x14], eax */
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718DF58; /* 0x1718DF1F: jle 0x1718df58 */
L_1718DF21:
    eax = MEM32(ebp + 0x10); /* 0x1718DF21: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1718DF24: mov dword ptr [ebp - 8], eax */
L_1718DF27:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1718DF27: push dword ptr [ebp - 4] */
    eax = MEM32(ebp + 0x18); /* 0x1718DF2A: mov eax, dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1718DF2D: push dword ptr [ebp - 0x10] */
    ecx = MEM32(ebp + (-0x8)); /* 0x1718DF30: mov ecx, dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1718DF33: push dword ptr [ebp - 0x14] */
    RECOMP_CALL(sub_1718DC44); /* 0x1718DF36: call 0x1718dc44 */
    RECOMP_FLAGS_IN();
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + (-0x28))); /* 0x1718DF3B: fcom qword ptr [ebp - 0x28] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1718DF3E: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1718DF40: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1718DF4C; /* 0x1718DF43: jp 0x1718df4c */
L_1718DF45:
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x28)) = _v; } /* 0x1718DF45: fstp qword ptr [ebp - 0x28] */
    edi = esi; /* 0x1718DF48: mov edi, esi */
    goto L_1718DF4E; /* 0x1718DF4A: jmp 0x1718df4e */
L_1718DF4C:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718DF4C: fstp st(0) */
L_1718DF4E:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 0x38u; /* 0x1718DF4E: add dword ptr [ebp - 8], 0x38 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1718DF52: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebp + 0x14) */ /* 0x1718DF53: cmp esi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1718DF27; /* 0x1718DF56: jl 0x1718df27 */
L_1718DF58:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1718DF58: push dword ptr [ebp - 4] */
    ecx = MEM32(ebp + 0x10); /* 0x1718DF5B: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1718DF5E: push dword ptr [ebp - 0x10] */
    eax = edi; /* 0x1718DF61: mov eax, edi */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1718DF63: push dword ptr [ebp - 0x14] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38u); /* 0x1718DF66: imul eax, eax, 0x38 */
    esi = eax + ecx; /* 0x1718DF69: lea esi, [eax + ecx] */
    eax = MEM32(ebp + 0x18); /* 0x1718DF6C: mov eax, dword ptr [ebp + 0x18] */
    ecx = esi; /* 0x1718DF6F: mov ecx, esi */
    RECOMP_CALL(sub_1718DC44); /* 0x1718DF71: call 0x1718dc44 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x20))); /* 0x1718DF76: fld qword ptr [ebp - 0x20] */
    _st[0] += _st[1]; /* 0x1718DF79: fadd st(1) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x20)) = _v; } /* 0x1718DF7B: fstp qword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(0x172374BC)); /* 0x1718DF7E: fld dword ptr [0x172374bc] */
    fp_push(_st[1]); /* 0x1718DF84: fld st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1718DF86: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1718DF88: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1718DF8A: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1718DF9D; /* 0x1718DF8D: jne 0x1718df9d */
L_1718DF8F:
    { float _v = (float)fp_pop(); *(float*)ADDR(0x172374BC) = _v; } /* 0x1718DF8F: fstp dword ptr [0x172374bc] */
    MEM32(0x1723FB08) = ebx; /* 0x1718DF95: mov dword ptr [0x1723fb08], ebx */
    goto L_1718DF9F; /* 0x1718DF9B: jmp 0x1718df9f */
L_1718DF9D:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718DF9D: fstp st(0) */
L_1718DF9F:
    eax = MEM32(ebp + 0xC); /* 0x1718DF9F: mov eax, dword ptr [ebp + 0xc] */
    eax = eax + ebx * 4; /* 0x1718DFA2: lea eax, [eax + ebx*4] */
    /* cmp edi, MEM32(eax) */ /* 0x1718DFA5: cmp edi, dword ptr [eax] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718DFAC; /* 0x1718DFA7: je 0x1718dfac */
L_1718DFA9:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 1; /* 0x1718DFA9: inc dword ptr [ebp - 0xc] */
    _flag_k = FK_INC;
L_1718DFAC:
    MEM32(eax) = edi; /* 0x1718DFAC: mov dword ptr [eax], edi */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    MEM32(esi) = MEM32(esi) + 1; /* 0x1718DFAE: inc dword ptr [esi] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1718DFB0: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(ebp + (-0x18)) */ /* 0x1718DFB1: cmp ebx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1718DF02; /* 0x1718DFB4: jl 0x1718df02 */
L_1718DFBA:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1718DFBA: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1721B010); /* 0x1718DFBD: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x20))); /* 0x1718DFC2: fld qword ptr [ebp - 0x20] */
    eax = MEM32(ebp + (-0xC)); /* 0x1718DFC5: mov eax, dword ptr [ebp - 0xc] */
    ecx = POP32_VAL(esp); /* 0x1718DFC8: pop ecx */
    MEM32(0x1723F68C) = eax; /* 0x1718DFC9: mov dword ptr [0x1723f68c], eax */
L_1718DFCE:
    edi = POP32_VAL(esp); /* 0x1718DFCE: pop edi */
    esi = POP32_VAL(esp); /* 0x1718DFCF: pop esi */
    ebx = POP32_VAL(esp); /* 0x1718DFD0: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1718DFD1: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1718DFD2: ret 0x14 */
L_1718DFDA:
    edi = edi; /* 0x1718DFDA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718DFDC: push ebp */
    ebp = esp; /* 0x1718DFDD: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x84u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x84u; /* 0x1718DFDF: sub esp, 0x84 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x1718DFE5: mov eax, dword ptr [ebp + 8] */
    fp_push(0.0); /* 0x1718DFE8: fldz  */
    PUSH32(esp, ebx); /* 0x1718DFEA: push ebx */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x78)) = _v; } /* 0x1718DFEB: fstp qword ptr [ebp - 0x78] */
    ebx = MEM32(eax + 0x8); /* 0x1718DFEE: mov ebx, dword ptr [eax + 8] */
    PUSH32(esp, edi); /* 0x1718DFF1: push edi */
    edi = MEM32(eax + 0xC); /* 0x1718DFF2: mov edi, dword ptr [eax + 0xc] */
    eax = edi; /* 0x1718DFF5: mov eax, edi */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1718DFF7: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1718DFF7: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1718DFFA: push eax */
    MEM32(ebp + (-0x7C)) = ebx; /* 0x1718DFFB: mov dword ptr [ebp - 0x7c], ebx */
    MEM32(ebp + (-0x14)) = edi; /* 0x1718DFFE: mov dword ptr [ebp - 0x14], edi */
    MEM32(ebp + (-0x20)) = eax; /* 0x1718E001: mov dword ptr [ebp - 0x20], eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1718E004: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1718E009: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1718E00B: pop ecx */
    MEM32(ebp + (-0x44)) = eax; /* 0x1718E00C: mov dword ptr [ebp - 0x44], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1718E01C; /* 0x1718E00F: jne 0x1718e01c */
L_1718E011:
    fp_push(*(double*)ADDR(0x17001D90)); /* 0x1718E011: fld qword ptr [0x17001d90] */
    goto L_1718E544; /* 0x1718E017: jmp 0x1718e544 */
L_1718E01C:
    /* test edi, edi */ /* 0x1718E01C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718E029; /* 0x1718E01E: jle 0x1718e029 */
L_1718E020:
    ecx = edi; /* 0x1718E020: mov ecx, edi */
    edi = MEM32(ebp + (-0x44)); /* 0x1718E022: mov edi, dword ptr [ebp - 0x44] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718E025: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1718E027: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
L_1718E029:
    PUSH32(esp, esi); /* 0x1718E029: push esi */
    esi = MEM32(ebp + 0x14); /* 0x1718E02A: mov esi, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x1718E02D: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1718E02E: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1718E031: push dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x1718E034: push ebx */
    RECOMP_CALL(sub_1718DE17); /* 0x1718E035: call 0x1718de17 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x10); /* 0x1718E03A: mov edx, dword ptr [ebp + 0x10] */
    eax = esi; /* 0x1718E03D: mov eax, esi */
    RECOMP_CALL(sub_1718D0ED); /* 0x1718E03F: call 0x1718d0ed */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1718E044: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x1718E046: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = eax; /* 0x1718E048: mov ebx, eax */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718E069; /* 0x1718E04A: jle 0x1718e069 */
L_1718E04C:
    eax = MEM32(ebp + 0x10); /* 0x1718E04C: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x1718E04F: add eax, 0xc */
    _flag_k = FK_ADD;
L_1718E052:
    /* cmp MEM32(ebp + 0x18), 0 */ /* 0x1718E052: cmp dword ptr [ebp + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x18); /* 0x1718E056: mov ecx, dword ptr [ebp + 0x18] */
    if (CMP_GE(_flag_a, _flag_b)) goto L_1718E05D; /* 0x1718E059: jge 0x1718e05d */
L_1718E05B:
    ecx = MEM32(eax); /* 0x1718E05B: mov ecx, dword ptr [eax] */
L_1718E05D:
    /* cmp ecx, edi */ /* 0x1718E05D: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718E063; /* 0x1718E05F: jle 0x1718e063 */
L_1718E061:
    edi = ecx; /* 0x1718E061: mov edi, ecx */
L_1718E063:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x38u; /* 0x1718E063: add eax, 0x38 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1718E066: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1718E052; /* 0x1718E067: jne 0x1718e052 */
L_1718E069:
    eax = ebx; /* 0x1718E069: mov eax, ebx */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1718E06B: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1718E06B: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1718E06E: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1718E06F: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x1718E074: push dword ptr [ebp - 0x20] */
    MEM32(ebp + (-0x3C)) = eax; /* 0x1718E077: mov dword ptr [ebp - 0x3c], eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1718E07A: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    esi = edi; /* 0x1718E07F: mov esi, edi */
    if (3u) _cf = (((esi) >> 29) & 1u); /* 0x1718E081: shl esi, 3 */
    if (3u) { _flag_a = recomp_flags_pack((esi << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 3u; /* 0x1718E081: shl esi, 3 */
    PUSH32(esp, esi); /* 0x1718E084: push esi */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1718E085: mov dword ptr [ebp - 0x1c], eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1718E088: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1718E08D: push esi */
    MEM32(ebp + (-0x50)) = eax; /* 0x1718E08E: mov dword ptr [ebp - 0x50], eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1718E091: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x48)) = eax; /* 0x1718E096: mov dword ptr [ebp - 0x48], eax */
    eax = edi; /* 0x1718E099: mov eax, edi */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x1718E09B: imul eax, edi */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x1718E09E: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x1718E09E: shl eax, 3 */
    PUSH32(esp, eax); /* 0x1718E0A1: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1718E0A2: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4C)) = eax; /* 0x1718E0A7: mov dword ptr [ebp - 0x4c], eax */
    eax = edi; /* 0x1718E0AA: mov eax, edi */
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx); /* 0x1718E0AC: imul eax, ebx */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x1718E0AF: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x1718E0AF: shl eax, 3 */
    PUSH32(esp, eax); /* 0x1718E0B2: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1718E0B3: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x34)) = eax; /* 0x1718E0B8: mov dword ptr [ebp - 0x34], eax */
    eax = edi; /* 0x1718E0BB: mov eax, edi */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1718E0BD: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1718E0BD: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1718E0C0: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1718E0C1: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    edi = ebx; /* 0x1718E0C6: mov edi, ebx */
    if (3u) _cf = (((edi) >> 29) & 1u); /* 0x1718E0C8: shl edi, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edi << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 3u; /* 0x1718E0C8: shl edi, 3 */
    PUSH32(esp, edi); /* 0x1718E0CB: push edi */
    MEM32(ebp + (-0x54)) = eax; /* 0x1718E0CC: mov dword ptr [ebp - 0x54], eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1718E0CF: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1718E0D4: push edi */
    MEM32(ebp + (-0x58)) = eax; /* 0x1718E0D5: mov dword ptr [ebp - 0x58], eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1718E0D8: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x2C)) = eax; /* 0x1718E0DD: mov dword ptr [ebp - 0x2c], eax */
    eax = MEM32(ebp + 0x8); /* 0x1718E0E0: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x8); /* 0x1718E0E3: mov eax, dword ptr [eax + 8] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1718E0E6: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1718E0E6: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1718E0E9: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1718E0EA: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x28u; /* 0x1718E0EF: add esp, 0x28 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x3C)), 0 */ /* 0x1718E0F2: cmp dword ptr [ebp - 0x3c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3C))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x30)) = eax; /* 0x1718E0F6: mov dword ptr [ebp - 0x30], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718E4E5; /* 0x1718E0F9: je 0x1718e4e5 */
L_1718E0FF:
    edi = MEM32(ebp + (-0x1C)); /* 0x1718E0FF: mov edi, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1718E102: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edi, ebx */ /* 0x1718E104: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718E4E5; /* 0x1718E106: je 0x1718e4e5 */
L_1718E10C:
    /* cmp MEM32(ebp + (-0x50)), ebx */ /* 0x1718E10C: cmp dword ptr [ebp - 0x50], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x50))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718E4E5; /* 0x1718E10F: je 0x1718e4e5 */
L_1718E115:
    /* cmp MEM32(ebp + (-0x48)), ebx */ /* 0x1718E115: cmp dword ptr [ebp - 0x48], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718E4E5; /* 0x1718E118: je 0x1718e4e5 */
L_1718E11E:
    /* cmp MEM32(ebp + (-0x4C)), ebx */ /* 0x1718E11E: cmp dword ptr [ebp - 0x4c], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4C))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718E4E5; /* 0x1718E121: je 0x1718e4e5 */
L_1718E127:
    /* cmp MEM32(ebp + (-0x34)), ebx */ /* 0x1718E127: cmp dword ptr [ebp - 0x34], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x34))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718E4E5; /* 0x1718E12A: je 0x1718e4e5 */
L_1718E130:
    /* cmp MEM32(ebp + (-0x54)), ebx */ /* 0x1718E130: cmp dword ptr [ebp - 0x54], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x54))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718E4E5; /* 0x1718E133: je 0x1718e4e5 */
L_1718E139:
    /* cmp MEM32(ebp + (-0x58)), ebx */ /* 0x1718E139: cmp dword ptr [ebp - 0x58], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x58))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718E4E5; /* 0x1718E13C: je 0x1718e4e5 */
L_1718E142:
    /* cmp MEM32(ebp + (-0x2C)), ebx */ /* 0x1718E142: cmp dword ptr [ebp - 0x2c], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718E4E5; /* 0x1718E145: je 0x1718e4e5 */
L_1718E14B:
    /* cmp eax, ebx */ /* 0x1718E14B: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718E4E5; /* 0x1718E14D: je 0x1718e4e5 */
L_1718E153:
    ecx = MEM32(ebp + (-0x14)); /* 0x1718E153: mov ecx, dword ptr [ebp - 0x14] */
    /* cmp ecx, ebx */ /* 0x1718E156: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718E15E; /* 0x1718E158: jle 0x1718e15e */
L_1718E15A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718E15A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1718E15C: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
L_1718E15E:
    edx = MEM32(ebp + 0x8); /* 0x1718E15E: mov edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1718E161: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edx + 0x8), ebx */ /* 0x1718E163: cmp dword ptr [edx + 8], ebx */
    _flag_a = (uint32_t)(MEM32(edx + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718E17E; /* 0x1718E166: jle 0x1718e17e */
L_1718E168:
    eax = MEM32(ebp + (-0x30)); /* 0x1718E168: mov eax, dword ptr [ebp - 0x30] */
    ecx = MEM32(ebp + 0xC); /* 0x1718E16B: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x1718E16E: sub ecx, eax */
    _flag_k = FK_CMP;
L_1718E170:
    edi = MEM32(ecx + eax); /* 0x1718E170: mov edi, dword ptr [ecx + eax] */
    MEM32(eax) = edi; /* 0x1718E173: mov dword ptr [eax], edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1718E175: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1718E176: add eax, 4 */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(edx + 0x8) */ /* 0x1718E179: cmp esi, dword ptr [edx + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1718E170; /* 0x1718E17C: jl 0x1718e170 */
L_1718E17E:
    /* cmp MEM32(ebp + 0x14), ebx */ /* 0x1718E17E: cmp dword ptr [ebp + 0x14], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(0x1723F688) = ebx; /* 0x1718E181: mov dword ptr [0x1723f688], ebx */
    MEM32(ebp + (-0x40)) = ebx; /* 0x1718E187: mov dword ptr [ebp - 0x40], ebx */
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718E49E; /* 0x1718E18A: jle 0x1718e49e */
L_1718E190:
    eax = MEM32(ebp + 0x10); /* 0x1718E190: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1718E193: add eax, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x64)) = eax; /* 0x1718E196: mov dword ptr [ebp - 0x64], eax */
    MEM32(ebp + (-0x24)) = eax; /* 0x1718E199: mov dword ptr [ebp - 0x24], eax */
L_1718E19C:
    ecx = MEM32(ebp + 0x18); /* 0x1718E19C: mov ecx, dword ptr [ebp + 0x18] */
    /* test ecx, ecx */ /* 0x1718E19F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + (-0x24)); /* 0x1718E1A1: mov eax, dword ptr [ebp - 0x24] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1718E1A9; /* 0x1718E1A4: jge 0x1718e1a9 */
L_1718E1A6:
    ecx = MEM32(eax + 0x8); /* 0x1718E1A6: mov ecx, dword ptr [eax + 8] */
L_1718E1A9:
    eax = MEM32(eax); /* 0x1718E1A9: mov eax, dword ptr [eax] */
    /* cmp ecx, eax */ /* 0x1718E1AB: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = ecx; /* 0x1718E1AD: mov dword ptr [ebp - 4], ecx */
    if (CMP_L(_flag_a, _flag_b)) goto L_1718E1B5; /* 0x1718E1B0: jl 0x1718e1b5 */
L_1718E1B2:
    MEM32(ebp + (-0x4)) = eax; /* 0x1718E1B2: mov dword ptr [ebp - 4], eax */
L_1718E1B5:
    PUSH32(esp, MEM32(ebp + (-0x3C))); /* 0x1718E1B5: push dword ptr [ebp - 0x3c] */
    eax = MEM32(ebp + 0x8); /* 0x1718E1B8: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(eax + 0x8)); /* 0x1718E1BB: push dword ptr [eax + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1718E1BE: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x40))); /* 0x1718E1C1: push dword ptr [ebp - 0x40] */
    RECOMP_CALL(sub_1718D10D); /* 0x1718E1C4: call 0x1718d10d */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x34)); /* 0x1718E1C9: mov ecx, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1718E1CC: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x1718E1CE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x38)) = eax; /* 0x1718E1D0: mov dword ptr [ebp - 0x38], eax */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1718E1D3: mov dword ptr [ebp - 8], ecx */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718E23F; /* 0x1718E1D6: jle 0x1718e23f */
L_1718E1D8:
    edi = MEM32(ebp + (-0x2C)); /* 0x1718E1D8: mov edi, dword ptr [ebp - 0x2c] */
    eax = MEM32(ebp + (-0x58)); /* 0x1718E1DB: mov eax, dword ptr [ebp - 0x58] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x1718E1DE: sub eax, edi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x5C)) = eax; /* 0x1718E1E0: mov dword ptr [ebp - 0x5c], eax */
L_1718E1E3:
    eax = MEM32(ebp + (-0x3C)); /* 0x1718E1E3: mov eax, dword ptr [ebp - 0x3c] */
    PUSH32(esp, MEM32(eax + esi * 4)); /* 0x1718E1E6: push dword ptr [eax + esi*4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1718E1E9: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1718D02F); /* 0x1718E1EC: call 0x1718d02f */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x54))); /* 0x1718E1F1: push dword ptr [ebp - 0x54] */
    ebx = MEM32(ebp + (-0x44)); /* 0x1718E1F4: mov ebx, dword ptr [ebp - 0x44] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1718E1F7: push dword ptr [ebp + 0x18] */
    ecx = eax; /* 0x1718E1FA: mov ecx, eax */
    eax = MEM32(ebp + (-0x24)); /* 0x1718E1FC: mov eax, dword ptr [ebp - 0x24] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1718E1FF: push dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFCu; /* 0x1718E202: add eax, -4 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1718DCB7); /* 0x1718E205: call 0x1718dcb7 */
    RECOMP_FLAGS_IN();
    fp_push(_st[0]); /* 0x1718E20A: fld st(0) */
    eax = MEM32(ebp + (-0x5C)); /* 0x1718E20C: mov eax, dword ptr [ebp - 0x5c] */
    { double _v = fp_pop(); *(double*)ADDR(eax + edi) = _v; } /* 0x1718E20F: fstp qword ptr [eax + edi] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718E212: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x4)), eax */ /* 0x1718E214: cmp dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(edi) = _v; } /* 0x1718E217: fstp qword ptr [edi] */
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718E22D; /* 0x1718E219: jle 0x1718e22d */
L_1718E21B:
    ecx = MEM32(ebp + (-0x54)); /* 0x1718E21B: mov ecx, dword ptr [ebp - 0x54] */
    fp_push(*(float*)&MEM32(ecx + eax * 4)); /* 0x1718E21E: fld dword ptr [ecx + eax*4] */
    ecx = MEM32(ebp + (-0x8)); /* 0x1718E221: mov ecx, dword ptr [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(ecx + eax * 8) = _v; } /* 0x1718E224: fstp qword ptr [ecx + eax*8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1718E227: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(ebp + (-0x4)) */ /* 0x1718E228: cmp eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1718E21B; /* 0x1718E22B: jl 0x1718e21b */
L_1718E22D:
    eax = MEM32(ebp + (-0x4)); /* 0x1718E22D: mov eax, dword ptr [ebp - 4] */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x1718E230: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x1718E230: shl eax, 3 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + eax; /* 0x1718E233: add dword ptr [ebp - 8], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1718E236: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 8; /* 0x1718E237: add edi, 8 */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(ebp + (-0x38)) */ /* 0x1718E23A: cmp esi, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x38)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1718E1E3; /* 0x1718E23D: jl 0x1718e1e3 */
L_1718E23F:
    esi = MEM32(ebp + (-0x64)); /* 0x1718E23F: mov esi, dword ptr [ebp - 0x64] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x28)) = MEM32(ebp + (-0x28)) & 0; /* 0x1718E242: and dword ptr [ebp - 0x28], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x60)) = esi; /* 0x1718E246: mov dword ptr [ebp - 0x60], esi */
L_1718E249:
    eax = MEM32(ebp + (-0x40)); /* 0x1718E249: mov eax, dword ptr [ebp - 0x40] */
    /* cmp MEM32(ebp + (-0x28)), eax */ /* 0x1718E24C: cmp dword ptr [ebp - 0x28], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718E45D; /* 0x1718E24F: je 0x1718e45d */
L_1718E255:
    eax = MEM32(ebp + 0x18); /* 0x1718E255: mov eax, dword ptr [ebp + 0x18] */
    /* test eax, eax */ /* 0x1718E258: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1718E25F; /* 0x1718E25A: jge 0x1718e25f */
L_1718E25C:
    eax = MEM32(esi + 0x8); /* 0x1718E25C: mov eax, dword ptr [esi + 8] */
L_1718E25F:
    MEM32(ebp + (-0xC)) = eax; /* 0x1718E25F: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(esi); /* 0x1718E262: mov eax, dword ptr [esi] */
    /* cmp MEM32(ebp + (-0xC)), eax */ /* 0x1718E264: cmp dword ptr [ebp - 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1718E26C; /* 0x1718E267: jl 0x1718e26c */
L_1718E269:
    MEM32(ebp + (-0xC)) = eax; /* 0x1718E269: mov dword ptr [ebp - 0xc], eax */
L_1718E26C:
    ebx = MEM32(ebp + (-0x24)); /* 0x1718E26C: mov ebx, dword ptr [ebp - 0x24] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1718E26F: push dword ptr [ebp - 0x14] */
    edx = MEM32(ebp + (-0x1C)); /* 0x1718E272: mov edx, dword ptr [ebp - 0x1c] */
    eax = MEM32(esi + 0xC); /* 0x1718E275: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(ebx + 0xC); /* 0x1718E278: mov ecx, dword ptr [ebx + 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xFFFFFFFCu; /* 0x1718E27B: add ebx, -4 */
    _flag_k = FK_ADD;
    RECOMP_CALL(sub_1718CEAD); /* 0x1718E27E: call 0x1718cead */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1718E283: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x4)), edi */ /* 0x1718E285: cmp dword ptr [ebp - 4], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718E2A9; /* 0x1718E288: jle 0x1718e2a9 */
L_1718E28A:
    eax = MEM32(ebx + 0x14); /* 0x1718E28A: mov eax, dword ptr [ebx + 0x14] */
    edx = MEM32(ebp + (-0x14)); /* 0x1718E28D: mov edx, dword ptr [ebp - 0x14] */
    eax = MEM32(eax + edi * 4); /* 0x1718E290: mov eax, dword ptr [eax + edi*4] */
    ecx = MEM32(ebp + (-0x1C)); /* 0x1718E293: mov ecx, dword ptr [ebp - 0x1c] */
    RECOMP_CALL(sub_1718CEFD); /* 0x1718E296: call 0x1718cefd */
    RECOMP_FLAGS_IN();
    _st[0] += _st[0]; /* 0x1718E29B: fadd st(0), st(0) */
    eax = MEM32(ebp + (-0x50)); /* 0x1718E29D: mov eax, dword ptr [ebp - 0x50] */
    { double _v = fp_pop(); *(double*)ADDR(eax + edi * 8) = _v; } /* 0x1718E2A0: fstp qword ptr [eax + edi*8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1718E2A3: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(ebp + (-0x4)) */ /* 0x1718E2A4: cmp edi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1718E28A; /* 0x1718E2A7: jl 0x1718e28a */
L_1718E2A9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1718E2A9: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1718E2AB: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0xC)), ebx */ /* 0x1718E2AD: cmp dword ptr [ebp - 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718E2CF; /* 0x1718E2B0: jle 0x1718e2cf */
L_1718E2B2:
    eax = MEM32(esi + 0x10); /* 0x1718E2B2: mov eax, dword ptr [esi + 0x10] */
    edx = MEM32(ebp + (-0x14)); /* 0x1718E2B5: mov edx, dword ptr [ebp - 0x14] */
    eax = MEM32(eax + edi * 4); /* 0x1718E2B8: mov eax, dword ptr [eax + edi*4] */
    ecx = MEM32(ebp + (-0x1C)); /* 0x1718E2BB: mov ecx, dword ptr [ebp - 0x1c] */
    RECOMP_CALL(sub_1718CEFD); /* 0x1718E2BE: call 0x1718cefd */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x48)); /* 0x1718E2C3: mov eax, dword ptr [ebp - 0x48] */
    { double _v = fp_pop(); *(double*)ADDR(eax + edi * 8) = _v; } /* 0x1718E2C6: fstp qword ptr [eax + edi*8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1718E2C9: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(ebp + (-0xC)) */ /* 0x1718E2CA: cmp edi, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1718E2B2; /* 0x1718E2CD: jl 0x1718e2b2 */
L_1718E2CF:
    /* cmp MEM32(ebp + (-0xC)), ebx */ /* 0x1718E2CF: cmp dword ptr [ebp - 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = ebx; /* 0x1718E2D2: mov dword ptr [ebp - 0x10], ebx */
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718E333; /* 0x1718E2D5: jle 0x1718e333 */
L_1718E2D7:
    eax = MEM32(ebp + (-0x4C)); /* 0x1718E2D7: mov eax, dword ptr [ebp - 0x4c] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1718E2DA: mov dword ptr [ebp - 0x18], eax */
L_1718E2DD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1718E2DD: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x4)), edi */ /* 0x1718E2DF: cmp dword ptr [ebp - 4], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718E31F; /* 0x1718E2E2: jle 0x1718e31f */
L_1718E2E4:
    ebx = MEM32(ebp + (-0x10)); /* 0x1718E2E4: mov ebx, dword ptr [ebp - 0x10] */
    eax = MEM32(ebp + (-0x18)); /* 0x1718E2E7: mov eax, dword ptr [ebp - 0x18] */
    if (2u) _cf = (((ebx) >> 30) & 1u); /* 0x1718E2EA: shl ebx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ebx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 2u; /* 0x1718E2EA: shl ebx, 2 */
    MEM32(ebp + (-0x8)) = eax; /* 0x1718E2ED: mov dword ptr [ebp - 8], eax */
L_1718E2F0:
    eax = MEM32(ebp + (-0x24)); /* 0x1718E2F0: mov eax, dword ptr [ebp - 0x24] */
    ecx = MEM32(esi + 0x10); /* 0x1718E2F3: mov ecx, dword ptr [esi + 0x10] */
    edx = MEM32(ebp + (-0x14)); /* 0x1718E2F6: mov edx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFFFFFCu; /* 0x1718E2F9: add eax, -4 */
    _flag_k = FK_ADD;
    eax = MEM32(eax + 0x14); /* 0x1718E2FC: mov eax, dword ptr [eax + 0x14] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1718E2FF: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(ebx + ecx); /* 0x1718E302: mov eax, dword ptr [ebx + ecx] */
    ecx = MEM32(ebp + (-0x20)); /* 0x1718E305: mov ecx, dword ptr [ebp - 0x20] */
    ecx = MEM32(ecx + edi * 4); /* 0x1718E308: mov ecx, dword ptr [ecx + edi*4] */
    RECOMP_CALL(sub_1718CEFD); /* 0x1718E30B: call 0x1718cefd */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8)); /* 0x1718E310: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 8; /* 0x1718E313: add dword ptr [ebp - 8], 8 */
    _flag_k = FK_ADD;
    { double _v = fp_pop(); *(double*)ADDR(eax) = _v; } /* 0x1718E317: fstp qword ptr [eax] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1718E319: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(ebp + (-0x4)) */ /* 0x1718E31A: cmp edi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1718E2F0; /* 0x1718E31D: jl 0x1718e2f0 */
L_1718E31F:
    eax = MEM32(ebp + (-0x4)); /* 0x1718E31F: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + 1; /* 0x1718E322: inc dword ptr [ebp - 0x10] */
    _flag_k = FK_INC;
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x1718E325: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x1718E325: shl eax, 3 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) + eax; /* 0x1718E328: add dword ptr [ebp - 0x18], eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x10)); /* 0x1718E32B: mov eax, dword ptr [ebp - 0x10] */
    /* cmp eax, MEM32(ebp + (-0xC)) */ /* 0x1718E32E: cmp eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1718E2DD; /* 0x1718E331: jl 0x1718e2dd */
L_1718E333:
    ecx = MEM32(ebp + (-0x1C)); /* 0x1718E333: mov ecx, dword ptr [ebp - 0x1c] */
    edx = MEM32(ebp + (-0x14)); /* 0x1718E336: mov edx, dword ptr [ebp - 0x14] */
    eax = ecx; /* 0x1718E339: mov eax, ecx */
    RECOMP_CALL(sub_1718CEFD); /* 0x1718E33B: call 0x1718cefd */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x84)) = _v; } /* 0x1718E340: fstp qword ptr [ebp - 0x84] */
    eax = MEM32(ebp + (-0x34)); /* 0x1718E346: mov eax, dword ptr [ebp - 0x34] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x1718E349: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x38)), 0 */ /* 0x1718E34D: cmp dword ptr [ebp - 0x38], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = eax; /* 0x1718E351: mov dword ptr [ebp - 8], eax */
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718E45D; /* 0x1718E354: jle 0x1718e45d */
L_1718E35A:
    eax = MEM32(ebp + (-0x4)); /* 0x1718E35A: mov eax, dword ptr [ebp - 4] */
    esi = MEM32(ebp + (-0x50)); /* 0x1718E35D: mov esi, dword ptr [ebp - 0x50] */
    ebx = MEM32(ebp + (-0x2C)); /* 0x1718E360: mov ebx, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x34)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebp + (-0x34)); /* 0x1718E363: sub esi, dword ptr [ebp - 0x34] */
    _flag_k = FK_CMP;
    ecx = eax; /* 0x1718E366: mov ecx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x1718E368: neg eax */
    _flag_k = FK_CMP;
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x1718E36A: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x1718E36A: shl eax, 3 */
    MEM32(ebp + (-0x70)) = eax; /* 0x1718E36D: mov dword ptr [ebp - 0x70], eax */
    eax = MEM32(ebp + (-0x58)); /* 0x1718E370: mov eax, dword ptr [ebp - 0x58] */
    if (3u) _cf = (((ecx) >> 29) & 1u); /* 0x1718E373: shl ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 3u; /* 0x1718E373: shl ecx, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x1718E376: sub eax, ebx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x20)) = ecx; /* 0x1718E378: mov dword ptr [ebp - 0x20], ecx */
    MEM32(ebp + (-0x5C)) = eax; /* 0x1718E37B: mov dword ptr [ebp - 0x5c], eax */
L_1718E37E:
    ecx = MEM32(ebp + (-0x4)); /* 0x1718E37E: mov ecx, dword ptr [ebp - 4] */
    fp_push(*(double*)ADDR(ebp + (-0x84))); /* 0x1718E381: fld qword ptr [ebp - 0x84] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1718E387: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    *(double*)ADDR(ebp + (-0x6C)) = _st[0]; /* 0x1718E389: fst qword ptr [ebp - 0x6c] */
    /* cmp ecx, edi */ /* 0x1718E38C: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718E3A5; /* 0x1718E38E: jle 0x1718e3a5 */
L_1718E390:
    eax = MEM32(ebp + (-0x8)); /* 0x1718E390: mov eax, dword ptr [ebp - 8] */
L_1718E393:
    fp_push(*(double*)ADDR(esi + eax)); /* 0x1718E393: fld qword ptr [esi + eax] */
    _st[0] += *(double*)ADDR(eax); /* 0x1718E396: fadd qword ptr [eax] */
    _st[0] *= *(double*)ADDR(eax); /* 0x1718E398: fmul qword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x1718E39A: add eax, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1718E39D: dec ecx */
    _flag_k = FK_DEC;
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1718E39E: faddp st(1) */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1718E393; /* 0x1718E3A0: jne 0x1718e393 */
L_1718E3A2:
    *(double*)ADDR(ebp + (-0x6C)) = _st[0]; /* 0x1718E3A2: fst qword ptr [ebp - 0x6c] */
L_1718E3A5:
    /* cmp MEM32(ebp + (-0xC)), edi */ /* 0x1718E3A5: cmp dword ptr [ebp - 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718E3DE; /* 0x1718E3A8: jle 0x1718e3de */
L_1718E3AA:
    eax = MEM32(ebp + (-0x4C)); /* 0x1718E3AA: mov eax, dword ptr [ebp - 0x4c] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1718E3AD: mov dword ptr [ebp - 0x18], eax */
L_1718E3B0:
    edx = MEM32(ebp + (-0x4)); /* 0x1718E3B0: mov edx, dword ptr [ebp - 4] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718E3B3: fstp st(0) */
    eax = MEM32(ebp + (-0x8)); /* 0x1718E3B5: mov eax, dword ptr [ebp - 8] */
    ecx = MEM32(ebp + (-0x18)); /* 0x1718E3B8: mov ecx, dword ptr [ebp - 0x18] */
    RECOMP_CALL(sub_171968B1); /* 0x1718E3BB: call 0x171968b1 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x48)); /* 0x1718E3C0: mov eax, dword ptr [ebp - 0x48] */
    _st[0] += *(double*)ADDR(eax + edi * 8); /* 0x1718E3C3: fadd qword ptr [eax + edi*8] */
    eax = MEM32(ebp + (-0x20)); /* 0x1718E3C6: mov eax, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) + eax; /* 0x1718E3C9: add dword ptr [ebp - 0x18], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1718E3CC: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(ebp + (-0xC)) */ /* 0x1718E3CD: cmp edi, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push(_st[0]); /* 0x1718E3D0: fld st(0) */
    _st[0] *= _st[1]; /* 0x1718E3D2: fmul st(1) */
    _st[0] = *(double*)ADDR(ebp + (-0x6C)) - _st[0]; /* 0x1718E3D4: fsubr qword ptr [ebp - 0x6c] */
    *(double*)ADDR(ebp + (-0x6C)) = _st[0]; /* 0x1718E3D7: fst qword ptr [ebp - 0x6c] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1718E3DA: fstp st(1) */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1718E3B0; /* 0x1718E3DC: jl 0x1718e3b0 */
L_1718E3DE:
    eax = MEM32(ebp + (-0x20)); /* 0x1718E3DE: mov eax, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + eax; /* 0x1718E3E1: add dword ptr [ebp - 8], eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x5C)); /* 0x1718E3E4: mov eax, dword ptr [ebp - 0x5c] */
    fp_push(*(double*)ADDR(eax + ebx)); /* 0x1718E3E7: fld qword ptr [eax + ebx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x70)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x70)); /* 0x1718E3EA: add esi, dword ptr [ebp - 0x70] */
    _flag_k = FK_ADD;
    _st[0] *= *(double*)ADDR(0x170054B8); /* 0x1718E3ED: fmul qword ptr [0x170054b8] */
    fp_push(_st[1]); /* 0x1718E3F3: fld st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1718E3F5: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1718E3F7: fnstsw ax */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718E3F9: fstp st(0) */
    /* test HI8(eax), 5 */ /* 0x1718E3FB: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1718E448; /* 0x1718E3FE: jp 0x1718e448 */
L_1718E400:
    eax = MEM32(ebp + (-0x3C)); /* 0x1718E400: mov eax, dword ptr [ebp - 0x3c] */
    ecx = MEM32(ebp + (-0x10)); /* 0x1718E403: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(0x1723F688)); _flag_b = (uint32_t)(1);
    MEM32(0x1723F688) = MEM32(0x1723F688) + 1; /* 0x1718E406: inc dword ptr [0x1723f688] */
    _flag_k = FK_INC;
    edi = eax + ecx * 4; /* 0x1718E40C: lea edi, [eax + ecx*4] */
    PUSH32(esp, MEM32(edi)); /* 0x1718E40F: push dword ptr [edi] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1718E411: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1718D02F); /* 0x1718E414: call 0x1718d02f */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x44))); /* 0x1718E419: push dword ptr [ebp - 0x44] */
    ecx = MEM32(ebp + (-0x60)); /* 0x1718E41C: mov ecx, dword ptr [ebp - 0x60] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x1718E41F: push dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0xFFFFFFFCu; /* 0x1718E422: add ecx, -4 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x1718E425: push eax */
    eax = MEM32(ebp + 0x18); /* 0x1718E426: mov eax, dword ptr [ebp + 0x18] */
    RECOMP_CALL(sub_1718DC44); /* 0x1718E429: call 0x1718dc44 */
    RECOMP_FLAGS_IN();
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebx)); /* 0x1718E42E: fcom qword ptr [ebx] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1718E430: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1718E432: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1718E446; /* 0x1718E435: jp 0x1718e446 */
L_1718E437:
    ecx = MEM32(ebp + (-0x30)); /* 0x1718E437: mov ecx, dword ptr [ebp - 0x30] */
    { double _v = fp_pop(); *(double*)ADDR(ebx) = _v; } /* 0x1718E43A: fstp qword ptr [ebx] */
    eax = MEM32(edi); /* 0x1718E43C: mov eax, dword ptr [edi] */
    edx = MEM32(ebp + (-0x28)); /* 0x1718E43E: mov edx, dword ptr [ebp - 0x28] */
    MEM32(ecx + eax * 4) = edx; /* 0x1718E441: mov dword ptr [ecx + eax*4], edx */
    goto L_1718E448; /* 0x1718E444: jmp 0x1718e448 */
L_1718E446:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718E446: fstp st(0) */
L_1718E448:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + 1; /* 0x1718E448: inc dword ptr [ebp - 0x10] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x10)); /* 0x1718E44B: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x1718E44E: add ebx, 8 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + (-0x38)) */ /* 0x1718E451: cmp eax, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x38)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1718E37E; /* 0x1718E454: jl 0x1718e37e */
L_1718E45A:
    esi = MEM32(ebp + (-0x60)); /* 0x1718E45A: mov esi, dword ptr [ebp - 0x60] */
L_1718E45D:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x28))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x28)) = MEM32(ebp + (-0x28)) + 1; /* 0x1718E45D: inc dword ptr [ebp - 0x28] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x28)); /* 0x1718E460: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x38u; /* 0x1718E463: add esi, 0x38 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + 0x14) */ /* 0x1718E466: cmp eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x60)) = esi; /* 0x1718E469: mov dword ptr [ebp - 0x60], esi */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1718E249; /* 0x1718E46C: jl 0x1718e249 */
L_1718E472:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718E472: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x38)), eax */ /* 0x1718E474: cmp dword ptr [ebp - 0x38], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x38))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718E48B; /* 0x1718E477: jle 0x1718e48b */
L_1718E479:
    fp_push(*(double*)ADDR(ebp + (-0x78))); /* 0x1718E479: fld qword ptr [ebp - 0x78] */
    ecx = MEM32(ebp + (-0x2C)); /* 0x1718E47C: mov ecx, dword ptr [ebp - 0x2c] */
    _st[0] += *(double*)ADDR(ecx + eax * 8); /* 0x1718E47F: fadd qword ptr [ecx + eax*8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1718E482: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(ebp + (-0x38)) */ /* 0x1718E483: cmp eax, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x38)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x78)) = _v; } /* 0x1718E486: fstp qword ptr [ebp - 0x78] */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1718E479; /* 0x1718E489: jl 0x1718e479 */
L_1718E48B:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x40))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x40)) = MEM32(ebp + (-0x40)) + 1; /* 0x1718E48B: inc dword ptr [ebp - 0x40] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x40)); /* 0x1718E48E: mov eax, dword ptr [ebp - 0x40] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x24)) = MEM32(ebp + (-0x24)) + 0x38u; /* 0x1718E491: add dword ptr [ebp - 0x24], 0x38 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + 0x14) */ /* 0x1718E495: cmp eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1718E19C; /* 0x1718E498: jl 0x1718e19c */
L_1718E49E:
    eax = MEM32(ebp + 0x8); /* 0x1718E49E: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1718E4A1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(0x1723F68C) = ecx; /* 0x1718E4A3: mov dword ptr [0x1723f68c], ecx */
    /* cmp MEM32(eax + 0x8), ecx */ /* 0x1718E4A9: cmp dword ptr [eax + 8], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718E4D4; /* 0x1718E4AC: jle 0x1718e4d4 */
L_1718E4AE:
    eax = MEM32(ebp + 0xC); /* 0x1718E4AE: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + (-0x30)); /* 0x1718E4B1: mov edx, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - eax; /* 0x1718E4B4: sub edx, eax */
    _flag_k = FK_CMP;
L_1718E4B6:
    esi = MEM32(eax); /* 0x1718E4B6: mov esi, dword ptr [eax] */
    /* cmp esi, MEM32(edx + eax) */ /* 0x1718E4B8: cmp esi, dword ptr [edx + eax] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edx + eax));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718E4C3; /* 0x1718E4BB: je 0x1718e4c3 */
L_1718E4BD:
    _flag_a = (uint32_t)(MEM32(0x1723F68C)); _flag_b = (uint32_t)(1);
    MEM32(0x1723F68C) = MEM32(0x1723F68C) + 1; /* 0x1718E4BD: inc dword ptr [0x1723f68c] */
    _flag_k = FK_INC;
L_1718E4C3:
    esi = MEM32(edx + eax); /* 0x1718E4C3: mov esi, dword ptr [edx + eax] */
    MEM32(eax) = esi; /* 0x1718E4C6: mov dword ptr [eax], esi */
    esi = MEM32(ebp + 0x8); /* 0x1718E4C8: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1718E4CB: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1718E4CC: add eax, 4 */
    _flag_k = FK_ADD;
    /* cmp ecx, MEM32(esi + 0x8) */ /* 0x1718E4CF: cmp ecx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1718E4B6; /* 0x1718E4D2: jl 0x1718e4b6 */
L_1718E4D4:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1718E4D4: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1718E4D7: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1718E4DA: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x7C))); /* 0x1718E4DD: push dword ptr [ebp - 0x7c] */
    RECOMP_CALL(sub_1718DE17); /* 0x1718E4E0: call 0x1718de17 */
    RECOMP_FLAGS_IN();
L_1718E4E5:
    PUSH32(esp, MEM32(ebp + (-0x44))); /* 0x1718E4E5: push dword ptr [ebp - 0x44] */
    RECOMP_CALL(sub_1721B010); /* 0x1718E4E8: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1718E4ED: push dword ptr [ebp - 0x1c] */
    RECOMP_CALL(sub_1721B010); /* 0x1718E4F0: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x3C))); /* 0x1718E4F5: push dword ptr [ebp - 0x3c] */
    RECOMP_CALL(sub_1721B010); /* 0x1718E4F8: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x50))); /* 0x1718E4FD: push dword ptr [ebp - 0x50] */
    RECOMP_CALL(sub_1721B010); /* 0x1718E500: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x48))); /* 0x1718E505: push dword ptr [ebp - 0x48] */
    RECOMP_CALL(sub_1721B010); /* 0x1718E508: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x4C))); /* 0x1718E50D: push dword ptr [ebp - 0x4c] */
    RECOMP_CALL(sub_1721B010); /* 0x1718E510: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x34))); /* 0x1718E515: push dword ptr [ebp - 0x34] */
    RECOMP_CALL(sub_1721B010); /* 0x1718E518: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x54))); /* 0x1718E51D: push dword ptr [ebp - 0x54] */
    RECOMP_CALL(sub_1721B010); /* 0x1718E520: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x58))); /* 0x1718E525: push dword ptr [ebp - 0x58] */
    RECOMP_CALL(sub_1721B010); /* 0x1718E528: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x2C))); /* 0x1718E52D: push dword ptr [ebp - 0x2c] */
    RECOMP_CALL(sub_1721B010); /* 0x1718E530: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x30))); /* 0x1718E535: push dword ptr [ebp - 0x30] */
    RECOMP_CALL(sub_1721B010); /* 0x1718E538: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x78))); /* 0x1718E53D: fld qword ptr [ebp - 0x78] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x2Cu; /* 0x1718E540: add esp, 0x2c */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x1718E543: pop esi */
L_1718E544:
    edi = POP32_VAL(esp); /* 0x1718E544: pop edi */
    ebx = POP32_VAL(esp); /* 0x1718E545: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1718E546: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1718E547: ret 0x14 */
L_1718E54F:
    edi = edi; /* 0x1718E54F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718E551: push ebp */
    ebp = esp; /* 0x1718E552: mov ebp, esp */
    /* cmp MEM32(0x172374A4), 0 */ /* 0x1718E554: cmp dword ptr [0x172374a4], 0 */
    _flag_a = (uint32_t)(MEM32(0x172374A4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718E563; /* 0x1718E55B: je 0x1718e563 */
L_1718E55D:
    ebp = POP32_VAL(esp); /* 0x1718E55D: pop ebp */
    RECOMP_BACKEDGE();
    goto L_1718DFDA; /* 0x1718E55E: jmp 0x1718dfda */
L_1718E563:
    ebp = POP32_VAL(esp); /* 0x1718E563: pop ebp */
    RECOMP_BACKEDGE();
    goto L_1718DE96; /* 0x1718E564: jmp 0x1718de96 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1718E56E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718E56Eu);

L_1718E56E:
    edi = edi; /* 0x1718E56E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718E570: push ebp */
    ebp = esp; /* 0x1718E571: mov ebp, esp */
    PUSH32(esp, edi); /* 0x1718E573: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1718E574: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1718E577: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718E5C2; /* 0x1718E579: je 0x1718e5c2 */
L_1718E57B:
    PUSH32(esp, ebx); /* 0x1718E57B: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1718E57C: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x1718E57F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718E5A8; /* 0x1718E581: jle 0x1718e5a8 */
L_1718E583:
    PUSH32(esp, esi); /* 0x1718E583: push esi */
    esi = edi + 0x30; /* 0x1718E584: lea esi, [edi + 0x30] */
L_1718E587:
    PUSH32(esp, MEM32(esi + (-0x4))); /* 0x1718E587: push dword ptr [esi - 4] */
    RECOMP_CALL(sub_1721B010); /* 0x1718E58A: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi)); /* 0x1718E58F: push dword ptr [esi] */
    RECOMP_CALL(sub_1721B010); /* 0x1718E591: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x1718E596: push dword ptr [esi + 4] */
    RECOMP_CALL(sub_1721B010); /* 0x1718E599: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1718E59E: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x38u; /* 0x1718E5A1: add esi, 0x38 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x1718E5A4: dec ebx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1718E587; /* 0x1718E5A5: jne 0x1718e587 */
L_1718E5A7:
    esi = POP32_VAL(esp); /* 0x1718E5A7: pop esi */
L_1718E5A8:
    PUSH32(esp, MEM32(edi + 0x10)); /* 0x1718E5A8: push dword ptr [edi + 0x10] */
    RECOMP_CALL(sub_1721B010); /* 0x1718E5AB: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0x14)); /* 0x1718E5B0: push dword ptr [edi + 0x14] */
    RECOMP_CALL(sub_1721B010); /* 0x1718E5B3: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1718E5B8: push edi */
    RECOMP_CALL(sub_1721B010); /* 0x1718E5B9: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1718E5BE: add esp, 0xc */
    _flag_k = FK_ADD;
    ebx = POP32_VAL(esp); /* 0x1718E5C1: pop ebx */
L_1718E5C2:
    edi = POP32_VAL(esp); /* 0x1718E5C2: pop edi */
    ebp = POP32_VAL(esp); /* 0x1718E5C3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1718E5C4: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1718E5CC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718E5CCu);

L_1718E5CC:
    edi = edi; /* 0x1718E5CC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718E5CE: push ebp */
    ebp = esp; /* 0x1718E5CF: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x1718E5D1: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1718E5D4: push ebx */
    PUSH32(esp, esi); /* 0x1718E5D5: push esi */
    PUSH32(esp, edi); /* 0x1718E5D6: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1718E5D7: mov edi, dword ptr [ebp + 8] */
    edi = (uint32_t)((int32_t)edi * (int32_t)0x38u); /* 0x1718E5DA: imul edi, edi, 0x38 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1718E5DD: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1718E5DF: push edi */
    MEM32(ebp + (-0x8)) = ebx; /* 0x1718E5E0: mov dword ptr [ebp - 8], ebx */
    MEM32(ebp + (-0xC)) = ebx; /* 0x1718E5E3: mov dword ptr [ebp - 0xc], ebx */
    RECOMP_CALL(sub_1721B01C); /* 0x1718E5E6: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718E5EB: mov esi, eax */
    /* cmp esi, ebx */ /* 0x1718E5ED: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1718E5EF: pop ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x1718E5F0: mov dword ptr [ebp - 0x18], esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718E771; /* 0x1718E5F3: je 0x1718e771 */
L_1718E5F9:
    /* cmp MEM32(ebp + 0x8), ebx */ /* 0x1718E5F9: cmp dword ptr [ebp + 8], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718E76A; /* 0x1718E5FC: je 0x1718e76a */
L_1718E602:
    ecx = edi; /* 0x1718E602: mov ecx, edi */
    edx = ecx; /* 0x1718E604: mov edx, ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718E606: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1718E608: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1718E608: shr ecx, 2 */
    edi = esi; /* 0x1718E60B: mov edi, esi */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1718E60D: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    ecx = edx; /* 0x1718E60F: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1718E611: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 1u; /* 0x1718E614: rep stosb byte ptr es:[edi], al */ if (_df > 0) { memset((void*)ADDR(edi), LO8(eax), _n); edi += _b; } else { memset((void*)ADDR(edi - _b + 1u), LO8(eax), _n); edi -= _b; } ecx = 0; }
    edi = MEM32(ebp + 0x10); /* 0x1718E616: mov edi, dword ptr [ebp + 0x10] */
    MEM32(esi + 0x10) = ebx; /* 0x1718E619: mov dword ptr [esi + 0x10], ebx */
    MEM32(esi + 0x14) = ebx; /* 0x1718E61C: mov dword ptr [esi + 0x14], ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1718E61F: mov ebx, dword ptr [ebp + 0xc] */
    eax = ebx + 0x2; /* 0x1718E622: lea eax, [ebx + 2] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x8)); /* 0x1718E625: imul eax, dword ptr [ebp + 8] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x1718E629: imul eax, edi */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1718E62C: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1718E62C: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1718E62F: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1718E630: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x8)) = eax; /* 0x1718E635: mov dword ptr [ebp - 8], eax */
    eax = MEM32(0x172374B8); /* 0x1718E638: mov eax, dword ptr [0x172374b8] */
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx); /* 0x1718E63D: imul eax, ebx */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1718E640: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1718E640: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1718E643: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1718E644: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0xC)) = eax; /* 0x1718E649: mov dword ptr [ebp - 0xc], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718E64C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + (-0x8)), eax */ /* 0x1718E64E: cmp dword ptr [ebp - 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1718E651: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1718E652: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718E771; /* 0x1718E653: je 0x1718e771 */
L_1718E659:
    /* cmp MEM32(ebp + (-0xC)), eax */ /* 0x1718E659: cmp dword ptr [ebp - 0xc], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718E771; /* 0x1718E65C: je 0x1718e771 */
L_1718E662:
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x1718E662: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0xC)); /* 0x1718E665: mov ecx, dword ptr [ebp - 0xc] */
    edx = MEM32(ebp + (-0x8)); /* 0x1718E668: mov edx, dword ptr [ebp - 8] */
    MEM32(ebp + (-0x14)) = ecx; /* 0x1718E66B: mov dword ptr [ebp - 0x14], ecx */
    MEM32(ebp + (-0x8)) = eax; /* 0x1718E66E: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0xC)) = eax; /* 0x1718E671: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x10)) = eax; /* 0x1718E674: mov dword ptr [ebp - 0x10], eax */
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718E76A; /* 0x1718E677: jle 0x1718e76a */
L_1718E67D:
    eax = MEM32(ebp + 0xC); /* 0x1718E67D: mov eax, dword ptr [ebp + 0xc] */
    ebx = edi; /* 0x1718E680: mov ebx, edi */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x1718E682: imul eax, edi */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edi); /* 0x1718E685: imul ebx, edi */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x1718E688: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x1718E688: shl eax, 3 */
    if (3u) _cf = (((ebx) >> 29) & 1u); /* 0x1718E68B: shl ebx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ebx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 3u; /* 0x1718E68B: shl ebx, 3 */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1718E68E: mov dword ptr [ebp - 0x1c], eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x18u; /* 0x1718E691: add esi, 0x18 */
    _flag_k = FK_ADD;
    goto L_1718E699; /* 0x1718E694: jmp 0x1718e699 */
L_1718E696:
    edx = MEM32(ebp + (-0x4)); /* 0x1718E696: mov edx, dword ptr [ebp - 4] */
L_1718E699:
    eax = edi; /* 0x1718E699: mov eax, edi */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1718E69B: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1718E69B: shl eax, 2 */
    MEM32(esi + (-0x8)) = edx; /* 0x1718E69E: mov dword ptr [esi - 8], edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x1718E6A1: add edx, eax */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x1718E6A3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1718E6A5: mov dword ptr [ebp - 4], eax */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718E6B6; /* 0x1718E6A8: jle 0x1718e6b6 */
L_1718E6AA:
    ecx = edi; /* 0x1718E6AA: mov ecx, edi */
    edi = MEM32(esi + (-0x8)); /* 0x1718E6AC: mov edi, dword ptr [esi - 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718E6AF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1718E6B1: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    edi = MEM32(ebp + 0x10); /* 0x1718E6B3: mov edi, dword ptr [ebp + 0x10] */
L_1718E6B6:
    MEM32(esi) = edx; /* 0x1718E6B6: mov dword ptr [esi], edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x4)); /* 0x1718E6B8: add edx, dword ptr [ebp - 4] */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x1718E6BB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edx; /* 0x1718E6BD: mov dword ptr [ebp - 4], edx */
    edx = MEM32(esi); /* 0x1718E6C0: mov edx, dword ptr [esi] */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718E6CF; /* 0x1718E6C2: jle 0x1718e6cf */
L_1718E6C4:
    ecx = edi; /* 0x1718E6C4: mov ecx, edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718E6C6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = edx; /* 0x1718E6C8: mov edi, edx */
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1718E6CA: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    edi = MEM32(ebp + 0x10); /* 0x1718E6CC: mov edi, dword ptr [ebp + 0x10] */
L_1718E6CF:
    eax = MEM32(ebp + 0xC); /* 0x1718E6CF: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(MEM32(esi + (-0x14))); _flag_b = (uint32_t)(0);
    MEM32(esi + (-0x14)) = MEM32(esi + (-0x14)) & 0; /* 0x1718E6D2: and dword ptr [esi - 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + (-0x10)) = eax; /* 0x1718E6D6: mov dword ptr [esi - 0x10], eax */
    eax = MEM32(ebp + (-0x10)); /* 0x1718E6D9: mov eax, dword ptr [ebp - 0x10] */
    MEM32(esi + 0x10) = eax; /* 0x1718E6DC: mov dword ptr [esi + 0x10], eax */
    eax = MEM32(ebp + (-0x14)); /* 0x1718E6DF: mov eax, dword ptr [ebp - 0x14] */
    PUSH32(esp, ebx); /* 0x1718E6E2: push ebx */
    MEM32(esi + (-0x4)) = eax; /* 0x1718E6E3: mov dword ptr [esi - 4], eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1718E6E6: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x1718E6EB: push dword ptr [ebp - 0x1c] */
    MEM32(esi + 0x14) = eax; /* 0x1718E6EE: mov dword ptr [esi + 0x14], eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1718E6F1: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x18) = eax; /* 0x1718E6F6: mov dword ptr [esi + 0x18], eax */
    eax = edi; /* 0x1718E6F9: mov eax, edi */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x1718E6FB: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x1718E6FB: shl eax, 3 */
    PUSH32(esp, eax); /* 0x1718E6FE: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1718E6FF: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1718E704: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1718E706: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp MEM32(esi + 0x18), edx */ /* 0x1718E709: cmp dword ptr [esi + 0x18], edx */
    _flag_a = (uint32_t)(MEM32(esi + 0x18)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x1C) = eax; /* 0x1718E70C: mov dword ptr [esi + 0x1c], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718E76E; /* 0x1718E70F: je 0x1718e76e */
L_1718E711:
    /* cmp MEM32(esi + 0x14), edx */ /* 0x1718E711: cmp dword ptr [esi + 0x14], edx */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718E76E; /* 0x1718E714: je 0x1718e76e */
L_1718E716:
    /* cmp eax, edx */ /* 0x1718E716: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718E76E; /* 0x1718E718: je 0x1718e76e */
L_1718E71A:
    ecx = MEM32(ebp + (-0x14)); /* 0x1718E71A: mov ecx, dword ptr [ebp - 0x14] */
    eax = MEM32(ebp + 0xC); /* 0x1718E71D: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, edx */ /* 0x1718E720: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = ecx + eax * 4; /* 0x1718E722: lea ecx, [ecx + eax*4] */
    MEM32(ebp + (-0x14)) = ecx; /* 0x1718E725: mov dword ptr [ebp - 0x14], ecx */
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718E751; /* 0x1718E728: jle 0x1718e751 */
L_1718E72A:
    /* test edi, edi */ /* 0x1718E72A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi + (-0x4)); /* 0x1718E72C: mov eax, dword ptr [esi - 4] */
    ecx = MEM32(ebp + (-0x4)); /* 0x1718E72F: mov ecx, dword ptr [ebp - 4] */
    MEM32(eax + edx * 4) = ecx; /* 0x1718E732: mov dword ptr [eax + edx*4], ecx */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718E743; /* 0x1718E735: jle 0x1718e743 */
L_1718E737:
    ecx = edi; /* 0x1718E737: mov ecx, edi */
    edi = MEM32(ebp + (-0x4)); /* 0x1718E739: mov edi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718E73C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1718E73E: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
    edi = MEM32(ebp + 0x10); /* 0x1718E740: mov edi, dword ptr [ebp + 0x10] */
L_1718E743:
    eax = edi; /* 0x1718E743: mov eax, edi */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1718E745: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1718E745: shl eax, 2 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + eax; /* 0x1718E748: add dword ptr [ebp - 4], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1718E74B: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, MEM32(ebp + 0xC) */ /* 0x1718E74C: cmp edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1718E72A; /* 0x1718E74F: jl 0x1718e72a */
L_1718E751:
    _flag_a = (uint32_t)(MEM32(esi + (-0x18))); _flag_b = (uint32_t)(0);
    MEM32(esi + (-0x18)) = MEM32(esi + (-0x18)) & 0; /* 0x1718E751: and dword ptr [esi - 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + 1; /* 0x1718E755: inc dword ptr [ebp - 0x10] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x10)); /* 0x1718E758: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x38u; /* 0x1718E75B: add esi, 0x38 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + 0x8) */ /* 0x1718E75E: cmp eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1718E696; /* 0x1718E761: jl 0x1718e696 */
L_1718E767:
    esi = MEM32(ebp + (-0x18)); /* 0x1718E767: mov esi, dword ptr [ebp - 0x18] */
L_1718E76A:
    eax = esi; /* 0x1718E76A: mov eax, esi */
    goto L_1718E78E; /* 0x1718E76C: jmp 0x1718e78e */
L_1718E76E:
    esi = MEM32(ebp + (-0x18)); /* 0x1718E76E: mov esi, dword ptr [ebp - 0x18] */
L_1718E771:
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1718E771: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_1721B010); /* 0x1718E774: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1718E779: push dword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_1721B010); /* 0x1718E77C: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1718E781: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1718E782: pop ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1718E783: push dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1718E786: push esi */
    RECOMP_CALL(sub_1718E56E); /* 0x1718E787: call 0x1718e56e */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718E78C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1718E78E:
    edi = POP32_VAL(esp); /* 0x1718E78E: pop edi */
    esi = POP32_VAL(esp); /* 0x1718E78F: pop esi */
    ebx = POP32_VAL(esp); /* 0x1718E790: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1718E791: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1718E792: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1718E79A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718E79Au);

L_1718E79A:
    edi = edi; /* 0x1718E79A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718E79C: push ebp */
    ebp = esp; /* 0x1718E79D: mov ebp, esp */
    eax = 0x1004u; /* 0x1718E79F: mov eax, 0x1004 */
    RECOMP_CALL(sub_1721B1B0); /* 0x1718E7A4: call 0x1721b1b0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x1723C894); /* 0x1718E7A9: mov eax, dword ptr [0x1723c894] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1718E7AE: mov dword ptr [ebp - 4], eax */
    eax = ebp + 0xC; /* 0x1718E7B1: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1718E7B4: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1718E7B5: push dword ptr [ebp + 8] */
    eax = ebp + (-0x1004); /* 0x1718E7B8: lea eax, [ebp - 0x1004] */
    PUSH32(esp, 0xFFFu); /* 0x1718E7BE: push 0xfff */
    PUSH32(esp, eax); /* 0x1718E7C3: push eax */
    RECOMP_CALL(sub_1704BE39); /* 0x1718E7C4: call 0x1704be39 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x1004); /* 0x1718E7C9: lea eax, [ebp - 0x1004] */
    PUSH32(esp, eax); /* 0x1718E7CF: push eax */
    MEM8(ebp + (-0x5)) = (uint8_t)(0); /* 0x1718E7D0: mov byte ptr [ebp - 5], 0 */
    RECOMP_ICALL(MEM32(0x17001124)); /* 0x1718E7D4: call dword ptr [0x17001124] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x1718E7DA: mov ecx, dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1721B76C); /* 0x1718E7DD: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1718E7E2: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1718E7E3: ret  */
    RECOMP_REGS_OUT();
}

void sub_1718E7E9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718E7E9u);

L_1718E7E9:
    edi = edi; /* 0x1718E7E9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718E7EB: push ebp */
    ebp = esp; /* 0x1718E7EC: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1718E7EE: push ecx */
    PUSH32(esp, ecx); /* 0x1718E7EF: push ecx */
    PUSH32(esp, edi); /* 0x1718E7F0: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1718E7F1: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x1C), edi */ /* 0x1718E7F3: cmp dword ptr [ebp + 0x1c], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718E810; /* 0x1718E7F6: jne 0x1718e810 */
L_1718E7F8:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1718E7F8: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1718E7FB: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1718E7FE: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1718E801: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1718DD4B); /* 0x1718E804: call 0x1718dd4b */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, 1); /* 0x1718E809: mov al, 1 */
    goto L_1718E928; /* 0x1718E80B: jmp 0x1718e928 */
L_1718E810:
    eax = MEM32(ebp + 0x18); /* 0x1718E810: mov eax, dword ptr [ebp + 0x18] */
    edx = MEM32(ebp + 0x14); /* 0x1718E813: mov edx, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x1718E816: push esi */
    RECOMP_CALL(sub_1718D0ED); /* 0x1718E817: call 0x1718d0ed */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718E81C: mov esi, eax */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1718E81E: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1718E81E: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1718E821: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1718E822: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x1718E827: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1718E829: pop ecx */
    MEM32(ebp + (-0x8)) = eax; /* 0x1718E82A: mov dword ptr [ebp - 8], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718E836; /* 0x1718E82D: jne 0x1718e836 */
L_1718E82F:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x1718E82F: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_1718E927; /* 0x1718E831: jmp 0x1718e927 */
L_1718E836:
    PUSH32(esp, ebx); /* 0x1718E836: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x1718E837: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebx + 0x8)); /* 0x1718E83A: push dword ptr [ebx + 8] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1718E83D: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebx + 0xC)); /* 0x1718E840: push dword ptr [ebx + 0xc] */
    PUSH32(esp, esi); /* 0x1718E843: push esi */
    RECOMP_CALL(sub_1718D1BD); /* 0x1718E844: call 0x1718d1bd */
    RECOMP_FLAGS_IN();
    /* cmp eax, edi */ /* 0x1718E849: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x1718E84B: mov dword ptr [ebp - 4], eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718E857; /* 0x1718E84E: jne 0x1718e857 */
L_1718E850:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(ebx, 0); /* 0x1718E850: xor bl, bl */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_1718E91B; /* 0x1718E852: jmp 0x1718e91b */
L_1718E857:
    /* cmp MEM32(ebp + 0x18), edi */ /* 0x1718E857: cmp dword ptr [ebp + 0x18], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(0x1723F690) = edi; /* 0x1718E85A: mov dword ptr [0x1723f690], edi */
    MEM32(0x1723F6DC) = edi; /* 0x1718E860: mov dword ptr [0x1723f6dc], edi */
    MEM32(0x1723F6D8) = edi; /* 0x1718E866: mov dword ptr [0x1723f6d8], edi */
    MEM32(0x1723F6D4) = edi; /* 0x1718E86C: mov dword ptr [0x1723f6d4], edi */
    MEM32(0x1723F6D0) = edi; /* 0x1718E872: mov dword ptr [0x1723f6d0], edi */
    MEM32(ebp + 0x8) = edi; /* 0x1718E878: mov dword ptr [ebp + 8], edi */
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718E911; /* 0x1718E87B: jle 0x1718e911 */
L_1718E881:
    esi = MEM32(ebp + 0x14); /* 0x1718E881: mov esi, dword ptr [ebp + 0x14] */
    goto L_1718E888; /* 0x1718E884: jmp 0x1718e888 */
L_1718E886:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1718E886: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1718E888:
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1718E888: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, esi); /* 0x1718E88B: push esi */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1718E88C: push dword ptr [ebp - 4] */
    PUSH32(esp, ebx); /* 0x1718E88F: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1718E890: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1718E893: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1718D381); /* 0x1718E896: call 0x1718d381 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x1C), 0 */ /* 0x1718E89B: cmp dword ptr [ebp + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718E8FF; /* 0x1718E89F: jle 0x1718e8ff */
L_1718E8A1:
    eax = MEM32(esi + 0x18); /* 0x1718E8A1: mov eax, dword ptr [esi + 0x18] */
    fp_push(*(float*)&MEM32(eax + edi * 4)); /* 0x1718E8A4: fld dword ptr [eax + edi*4] */
    PUSH32(esp, ecx); /* 0x1718E8A7: push ecx */
    PUSH32(esp, ecx); /* 0x1718E8A8: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1718E8A9: fstp qword ptr [esp] */
    RECOMP_CALL(sub_1721B3AA); /* 0x1718E8AC: call 0x1721b3aa */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1718E8B1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1718E8B3: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1718E8B4: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718E8C8; /* 0x1718E8B5: je 0x1718e8c8 */
L_1718E8B7:
    PUSH32(esp, edi); /* 0x1718E8B7: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1718E8B8: push dword ptr [ebp + 8] */
    PUSH32(esp, 0x170220E8u); /* 0x1718E8BB: push 0x170220e8 */
    RECOMP_CALL(sub_1718E79A); /* 0x1718E8C0: call 0x1718e79a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1718E8C5: add esp, 0xc */
    _flag_k = FK_ADD;
L_1718E8C8:
    eax = MEM32(esi + 0x18); /* 0x1718E8C8: mov eax, dword ptr [esi + 0x18] */
    fp_push(*(float*)&MEM32(eax + edi * 4)); /* 0x1718E8CB: fld dword ptr [eax + edi*4] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001DA8)); /* 0x1718E8CE: fcomp qword ptr [0x17001da8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1718E8D4: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1718E8D6: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1718E8F9; /* 0x1718E8D9: jp 0x1718e8f9 */
L_1718E8DB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718E8DB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(0x1723FAFC), eax */ /* 0x1718E8DD: cmp dword ptr [0x1723fafc], eax */
    _flag_a = (uint32_t)(MEM32(0x1723FAFC)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718E8F9; /* 0x1718E8E3: jle 0x1718e8f9 */
L_1718E8E5:
    ecx = MEM32(esi + 0x14); /* 0x1718E8E5: mov ecx, dword ptr [esi + 0x14] */
    fp_push(0.0); /* 0x1718E8E8: fldz  */
    ecx = MEM32(ecx + edi * 4); /* 0x1718E8EA: mov ecx, dword ptr [ecx + edi*4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + eax * 4) = _v; } /* 0x1718E8ED: fstp dword ptr [ecx + eax*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1718E8F0: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(0x1723FAFC) */ /* 0x1718E8F1: cmp eax, dword ptr [0x1723fafc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x1723FAFC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1718E8E5; /* 0x1718E8F7: jl 0x1718e8e5 */
L_1718E8F9:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x1718E8F9: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, MEM32(ebp + 0x1C) */ /* 0x1718E8FA: cmp edi, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1718E8A1; /* 0x1718E8FD: jl 0x1718e8a1 */
L_1718E8FF:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x1718E8FF: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + 0x8); /* 0x1718E902: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x38u; /* 0x1718E905: add esi, 0x38 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + 0x18) */ /* 0x1718E908: cmp eax, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1718E886; /* 0x1718E90B: jl 0x1718e886 */
L_1718E911:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x1718E911: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_1718D13C); /* 0x1718E914: call 0x1718d13c */
    RECOMP_FLAGS_IN();
    SET_LO8(ebx, 1); /* 0x1718E919: mov bl, 1 */
L_1718E91B:
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1718E91B: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_1721B010); /* 0x1718E91E: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1718E923: pop ecx */
    SET_LO8(eax, LO8(ebx)); /* 0x1718E924: mov al, bl */
    ebx = POP32_VAL(esp); /* 0x1718E926: pop ebx */
L_1718E927:
    esi = POP32_VAL(esp); /* 0x1718E927: pop esi */
L_1718E928:
    edi = POP32_VAL(esp); /* 0x1718E928: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1718E929: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1718E92A: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1718E932(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718E932u);

L_1718E932:
    edi = edi; /* 0x1718E932: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718E934: push ebp */
    ebp = esp; /* 0x1718E935: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1718E937: push ecx */
    PUSH32(esp, ecx); /* 0x1718E938: push ecx */
    PUSH32(esp, esi); /* 0x1718E939: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1718E93A: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(0x17237498), esi */ /* 0x1718E93C: cmp dword ptr [0x17237498], esi */
    _flag_a = (uint32_t)(MEM32(0x17237498)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718E98F; /* 0x1718E942: jle 0x1718e98f */
L_1718E944:
    fp_push((double)(int32_t)MEM32(ebp + 0xC)); /* 0x1718E944: fild dword ptr [ebp + 0xc] */
    _st[0] = *(double*)ADDR(0x17001D88) / _st[0]; /* 0x1718E947: fdivr qword ptr [0x17001d88] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x1718E94D: fstp qword ptr [ebp - 8] */
L_1718E950:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1718E950: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push(0.0); /* 0x1718E954: fldz  */
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718E96C; /* 0x1718E956: jle 0x1718e96c */
L_1718E958:
    eax = MEM32(ebp + 0x8); /* 0x1718E958: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x1718E95B: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x18u; /* 0x1718E95E: add eax, 0x18 */
    _flag_k = FK_ADD;
L_1718E961:
    edx = MEM32(eax); /* 0x1718E961: mov edx, dword ptr [eax] */
    _st[0] += (double)*(float*)ADDR(edx + esi * 4); /* 0x1718E963: fadd dword ptr [edx + esi*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x38u; /* 0x1718E966: add eax, 0x38 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x1718E969: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1718E961; /* 0x1718E96A: jne 0x1718e961 */
L_1718E96C:
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x1718E96C: fld qword ptr [ebp - 8] */
    PUSH32(esp, ecx); /* 0x1718E96F: push ecx */
    _st[0] *= _st[1]; /* 0x1718E970: fmul st(1) */
    PUSH32(esp, ecx); /* 0x1718E972: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1718E973: fstp qword ptr [esp] */
    PUSH32(esp, esi); /* 0x1718E976: push esi */
    PUSH32(esp, 0x17022110u); /* 0x1718E977: push 0x17022110 */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718E97C: fstp st(0) */
    RECOMP_CALL(sub_1718E79A); /* 0x1718E97E: call 0x1718e79a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1718E983: add esp, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1718E986: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(0x17237498) */ /* 0x1718E987: cmp esi, dword ptr [0x17237498] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(0x17237498));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1718E950; /* 0x1718E98D: jl 0x1718e950 */
L_1718E98F:
    PUSH32(esp, 0x17008044u); /* 0x1718E98F: push 0x17008044 */
    RECOMP_CALL(sub_1718E79A); /* 0x1718E994: call 0x1718e79a */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1718E999: pop ecx */
    esi = POP32_VAL(esp); /* 0x1718E99A: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1718E99B: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1718E99C: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1718E9A4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718E9A4u);

L_1718E9A4:
    edi = edi; /* 0x1718E9A4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718E9A6: push ebp */
    ebp = esp; /* 0x1718E9A7: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x58u; /* 0x1718E9A9: sub esp, 0x58 */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x1C); /* 0x1718E9AC: mov edx, dword ptr [ebp + 0x1c] */
    eax = MEM32(0x1723C894); /* 0x1718E9AF: mov eax, dword ptr [0x1723c894] */
    PUSH32(esp, esi); /* 0x1718E9B4: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1718E9B5: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, esi */ /* 0x1718E9B7: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x1718E9B9: mov dword ptr [ebp - 4], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718F285; /* 0x1718E9BC: je 0x1718f285 */
L_1718E9C2:
    /* cmp MEM32(ebp + 0x20), esi */ /* 0x1718E9C2: cmp dword ptr [ebp + 0x20], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718F285; /* 0x1718E9C5: je 0x1718f285 */
L_1718E9CB:
    /* cmp MEM32(ebp + 0x24), esi */ /* 0x1718E9CB: cmp dword ptr [ebp + 0x24], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x24)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718F285; /* 0x1718E9CE: je 0x1718f285 */
L_1718E9D4:
    /* cmp MEM32(ebp + 0x28), esi */ /* 0x1718E9D4: cmp dword ptr [ebp + 0x28], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x28)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718F285; /* 0x1718E9D7: je 0x1718f285 */
L_1718E9DD:
    ecx = MEM32(ebp + 0x10); /* 0x1718E9DD: mov ecx, dword ptr [ebp + 0x10] */
    fp_push(0.0); /* 0x1718E9E0: fldz  */
    eax = MEM32(ebp + 0x8); /* 0x1718E9E2: mov eax, dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x1718E9E5: fstp dword ptr [ebp - 0x24] */
    MEM32(0x172374B8) = ecx; /* 0x1718E9E8: mov dword ptr [0x172374b8], ecx */
    fp_push(0.0); /* 0x1718E9EE: fldz  */
    ecx = MEM32(ebp + 0x14); /* 0x1718E9F0: mov ecx, dword ptr [ebp + 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x1718E9F3: fstp dword ptr [ebp - 0x14] */
    MEM32(0x17237498) = ecx; /* 0x1718E9F6: mov dword ptr [0x17237498], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1718E9FC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1718E9FE: inc ecx */
    _flag_k = FK_INC;
    /* cmp MEM8(ebp + 0x18), 0 */ /* 0x1718E9FF: cmp byte ptr [ebp + 0x18], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x18)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, edi); /* 0x1718EA03: push edi */
    edi = 0x8007000Eu; /* 0x1718EA04: mov edi, 0x8007000e */
    MEM32(ebp + (-0x8)) = esi; /* 0x1718EA09: mov dword ptr [ebp - 8], esi */
    MEM32(ebp + (-0x28)) = esi; /* 0x1718EA0C: mov dword ptr [ebp - 0x28], esi */
    MEM32(ebp + (-0x20)) = esi; /* 0x1718EA0F: mov dword ptr [ebp - 0x20], esi */
    MEM32(0x1723FAFC) = eax; /* 0x1718EA12: mov dword ptr [0x1723fafc], eax */
    MEM32(0x1723FAF0) = esi; /* 0x1718EA17: mov dword ptr [0x1723faf0], esi */
    MEM32(0x1723748C) = 0xAu; /* 0x1718EA1D: mov dword ptr [0x1723748c], 0xa */
    MEM32(0x172374A4) = ecx; /* 0x1718EA27: mov dword ptr [0x172374a4], ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718EA3B; /* 0x1718EA2D: jne 0x1718ea3b */
L_1718EA2F:
    MEM32(0x1723748C) = esi; /* 0x1718EA2F: mov dword ptr [0x1723748c], esi */
    MEM32(0x172374A4) = esi; /* 0x1718EA35: mov dword ptr [0x172374a4], esi */
L_1718EA3B:
    MEM32(ebp + (-0x4C)) = eax; /* 0x1718EA3B: mov dword ptr [ebp - 0x4c], eax */
    MEM32(ebp + (-0x48)) = eax; /* 0x1718EA3E: mov dword ptr [ebp - 0x48], eax */
    MEM32(ebp + (-0x58)) = ecx; /* 0x1718EA41: mov dword ptr [ebp - 0x58], ecx */
    ecx = MEM32(ebp + 0xC); /* 0x1718EA44: mov ecx, dword ptr [ebp + 0xc] */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x1718EA47: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x1718EA47: shl eax, 3 */
    PUSH32(esp, eax); /* 0x1718EA4A: push eax */
    MEM32(ebp + (-0x54)) = edx; /* 0x1718EA4B: mov dword ptr [ebp - 0x54], edx */
    MEM32(ebp + (-0x50)) = ecx; /* 0x1718EA4E: mov dword ptr [ebp - 0x50], ecx */
    RECOMP_CALL(sub_1721B01C); /* 0x1718EA51: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, esi */ /* 0x1718EA56: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1718EA58: pop ecx */
    MEM32(ebp + (-0x44)) = eax; /* 0x1718EA59: mov dword ptr [ebp - 0x44], eax */
    MEM32(ebp + (-0x40)) = esi; /* 0x1718EA5C: mov dword ptr [ebp - 0x40], esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718EF8A; /* 0x1718EA5F: je 0x1718ef8a */
L_1718EA65:
    eax = ebp + (-0x58); /* 0x1718EA65: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x1718EA68: push eax */
    RECOMP_CALL(sub_1718DE54); /* 0x1718EA69: call 0x1718de54 */
    RECOMP_FLAGS_IN();
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718EA6E: fstp st(0) */
    esi = MEM32(ebp + 0xC); /* 0x1718EA70: mov esi, dword ptr [ebp + 0xc] */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x1718EA73: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x1718EA73: shl esi, 2 */
    PUSH32(esp, esi); /* 0x1718EA76: push esi */
    RECOMP_CALL(sub_1721B01C); /* 0x1718EA77: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1718EA7C: push esi */
    MEM32(ebp + (-0x8)) = eax; /* 0x1718EA7D: mov dword ptr [ebp - 8], eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1718EA80: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x1718EA85: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x1718EA89: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1718EA8A: pop ecx */
    MEM32(ebp + (-0x28)) = eax; /* 0x1718EA8B: mov dword ptr [ebp - 0x28], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718EF8A; /* 0x1718EA8E: je 0x1718ef8a */
L_1718EA94:
    /* test eax, eax */ /* 0x1718EA94: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718EF8A; /* 0x1718EA96: je 0x1718ef8a */
L_1718EA9C:
    PUSH32(esp, MEM32(0x1723FAFC)); /* 0x1718EA9C: push dword ptr [0x1723fafc] */
    eax = MEM32(0x17237498); /* 0x1718EAA2: mov eax, dword ptr [0x17237498] */
    PUSH32(esp, eax); /* 0x1718EAA7: push eax */
    PUSH32(esp, MEM32(0x172374B8)); /* 0x1718EAA8: push dword ptr [0x172374b8] */
    MEM32(ebp + (-0x3C)) = eax; /* 0x1718EAAE: mov dword ptr [ebp - 0x3c], eax */
    RECOMP_CALL(sub_1718E5CC); /* 0x1718EAB1: call 0x1718e5cc */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1718EAB6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = eax; /* 0x1718EAB8: mov dword ptr [ebp - 0x20], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718EF8A; /* 0x1718EABB: je 0x1718ef8a */
L_1718EAC1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1718EAC1: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(0x172374B8), esi */ /* 0x1718EAC3: cmp dword ptr [0x172374b8], esi */
    _flag_a = (uint32_t)(MEM32(0x172374B8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1718EAC9: push ebx */
    ebx = eax; /* 0x1718EACA: mov ebx, eax */
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718EAFA; /* 0x1718EACC: jle 0x1718eafa */
L_1718EACE:
    edi = ebx + 0x34; /* 0x1718EACE: lea edi, [ebx + 0x34] */
L_1718EAD1:
    PUSH32(esp, MEM32(edi)); /* 0x1718EAD1: push dword ptr [edi] */
    eax = ebp + (-0x58); /* 0x1718EAD3: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x1718EAD6: push eax */
    RECOMP_CALL(sub_1718D071); /* 0x1718EAD7: call 0x1718d071 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + (-0x24))); /* 0x1718EADC: push dword ptr [edi - 0x24] */
    PUSH32(esp, MEM32(0x1723FAFC)); /* 0x1718EADF: push dword ptr [0x1723fafc] */
    PUSH32(esp, MEM32(edi)); /* 0x1718EAE5: push dword ptr [edi] */
    RECOMP_CALL(sub_1718CED6); /* 0x1718EAE7: call 0x1718ced6 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1718EAEC: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x38u; /* 0x1718EAED: add edi, 0x38 */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(0x172374B8) */ /* 0x1718EAF0: cmp esi, dword ptr [0x172374b8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(0x172374B8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1718EAD1; /* 0x1718EAF6: jl 0x1718ead1 */
L_1718EAF8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1718EAF8: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1718EAFA:
    ecx = MEM32(ebp + 0xC); /* 0x1718EAFA: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp ecx, esi */ /* 0x1718EAFD: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718EB08; /* 0x1718EAFF: jle 0x1718eb08 */
L_1718EB01:
    edi = MEM32(ebp + (-0x8)); /* 0x1718EB01: mov edi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718EB04: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1718EB06: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
L_1718EB08:
    eax = MEM32(0x1723FAF0); /* 0x1718EB08: mov eax, dword ptr [0x1723faf0] */
    /* cmp eax, esi */ /* 0x1718EB0D: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = eax; /* 0x1718EB0F: mov dword ptr [ebp - 0xc], eax */
    MEM32(0x172374BC) = 0xBF800000u; /* 0x1718EB12: mov dword ptr [0x172374bc], 0xbf800000 */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718ECBA; /* 0x1718EB1C: jne 0x1718ecba */
L_1718EB22:
    /* cmp MEM32(ebp + 0x10), 1 */ /* 0x1718EB22: cmp dword ptr [ebp + 0x10], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1718EC91; /* 0x1718EB26: jbe 0x1718ec91 */
L_1718EB2C:
    /* cmp MEM32(ebp + 0x2C), esi */ /* 0x1718EB2C: cmp dword ptr [ebp + 0x2c], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x2C)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718EB50; /* 0x1718EB2F: je 0x1718eb50 */
L_1718EB31:
    /* cmp MEM32(0x1723748C), esi */ /* 0x1718EB31: cmp dword ptr [0x1723748c], esi */
    _flag_a = (uint32_t)(MEM32(0x1723748C)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push((double)(int32_t)MEM32(0x17237488)); /* 0x1718EB37: fild dword ptr [0x17237488] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718EB47; /* 0x1718EB3D: jne 0x1718eb47 */
L_1718EB3F:
    _st[0] = (double)*(float*)ADDR(0x17001424) / _st[0]; /* 0x1718EB3F: fdivr dword ptr [0x17001424] */
    goto L_1718EB4D; /* 0x1718EB45: jmp 0x1718eb4d */
L_1718EB47:
    _st[0] = (double)*(float*)ADDR(0x1700141C) / _st[0]; /* 0x1718EB47: fdivr dword ptr [0x1700141c] */
L_1718EB4D:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x1718EB4D: fstp dword ptr [ebp - 0x24] */
L_1718EB50:
    /* cmp MEM32(0x17237488), esi */ /* 0x1718EB50: cmp dword ptr [0x17237488], esi */
    _flag_a = (uint32_t)(MEM32(0x17237488)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = esi; /* 0x1718EB56: mov dword ptr [ebp - 0x10], esi */
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718ECBA; /* 0x1718EB59: jle 0x1718ecba */
L_1718EB5F:
    esi = MEM32(ebp + (-0x8)); /* 0x1718EB5F: mov esi, dword ptr [ebp - 8] */
L_1718EB62:
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1718EB62: push dword ptr [ebp - 0xc] */
    eax = ebp + (-0x58); /* 0x1718EB65: lea eax, [ebp - 0x58] */
    PUSH32(esp, MEM32(0x172374B8)); /* 0x1718EB68: push dword ptr [0x172374b8] */
    MEM32(0x172374BC) = 0xBF800000u; /* 0x1718EB6E: mov dword ptr [0x172374bc], 0xbf800000 */
    PUSH32(esp, ebx); /* 0x1718EB78: push ebx */
    PUSH32(esp, esi); /* 0x1718EB79: push esi */
    PUSH32(esp, eax); /* 0x1718EB7A: push eax */
    RECOMP_CALL(sub_1718E54F); /* 0x1718EB7B: call 0x1718e54f */
    RECOMP_FLAGS_IN();
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718EB80: fstp st(0) */
    edi = MEM32(0x172374B8); /* 0x1718EB82: mov edi, dword ptr [0x172374b8] */
    eax = edi; /* 0x1718EB88: mov eax, edi */
    edx = ebx; /* 0x1718EB8A: mov edx, ebx */
    RECOMP_CALL(sub_1718D0CA); /* 0x1718EB8C: call 0x1718d0ca */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1718EB91: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1718EC45; /* 0x1718EB93: jne 0x1718ec45 */
L_1718EB99:
    /* cmp MEM32(0x172374A4), eax */ /* 0x1718EB99: cmp dword ptr [0x172374a4], eax */
    _flag_a = (uint32_t)(MEM32(0x172374A4)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718EBC8; /* 0x1718EB9F: je 0x1718ebc8 */
L_1718EBA1:
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1718EBA1: push dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(0x172374A4)); _flag_b = (uint32_t)(eax);
    MEM32(0x172374A4) = MEM32(0x172374A4) & eax; /* 0x1718EBA4: and dword ptr [0x172374a4], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x1718EBAA: push edi */
    PUSH32(esp, ebx); /* 0x1718EBAB: push ebx */
    PUSH32(esp, esi); /* 0x1718EBAC: push esi */
    eax = ebp + (-0x58); /* 0x1718EBAD: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x1718EBB0: push eax */
    MEM32(0x172374BC) = 0xBF800000u; /* 0x1718EBB1: mov dword ptr [0x172374bc], 0xbf800000 */
    RECOMP_CALL(sub_1718E54F); /* 0x1718EBBB: call 0x1718e54f */
    RECOMP_FLAGS_IN();
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718EBC0: fstp st(0) */
    edi = MEM32(0x172374B8); /* 0x1718EBC2: mov edi, dword ptr [0x172374b8] */
L_1718EBC8:
    eax = MEM32(0x1723FB08); /* 0x1718EBC8: mov eax, dword ptr [0x1723fb08] */
    eax = MEM32(esi + eax * 4); /* 0x1718EBCD: mov eax, dword ptr [esi + eax*4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1718EBD0: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x1718EBD2: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = eax; /* 0x1718EBD4: mov dword ptr [ebp - 0x18], eax */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718EC0C; /* 0x1718EBD7: jle 0x1718ec0c */
L_1718EBD9:
    eax = edx; /* 0x1718EBD9: mov eax, edx */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38u); /* 0x1718EBDB: imul eax, eax, 0x38 */
    ecx = eax + ebx; /* 0x1718EBDE: lea ecx, [eax + ebx] */
    /* cmp MEM32(ecx), 0 */ /* 0x1718EBE1: cmp dword ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718EC07; /* 0x1718EBE4: jne 0x1718ec07 */
L_1718EBE6:
    eax = MEM32(ebp + (-0x18)); /* 0x1718EBE6: mov eax, dword ptr [ebp - 0x18] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38u); /* 0x1718EBE9: imul eax, eax, 0x38 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x1718EBEC: add eax, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(1);
    MEM32(eax) = MEM32(eax) - 1; /* 0x1718EBEE: dec dword ptr [eax] */
    _flag_k = FK_DEC;
    MEM32(ecx) = 1; /* 0x1718EBF0: mov dword ptr [ecx], 1 */
    eax = MEM32(0x1723FB08); /* 0x1718EBF6: mov eax, dword ptr [0x1723fb08] */
    MEM32(esi + eax * 4) = edx; /* 0x1718EBFB: mov dword ptr [esi + eax*4], edx */
    edi = MEM32(0x172374B8); /* 0x1718EBFE: mov edi, dword ptr [0x172374b8] */
    edx = edi + 0x2; /* 0x1718EC04: lea edx, [edi + 2] */
L_1718EC07:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1718EC07: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, edi */ /* 0x1718EC08: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1718EBD9; /* 0x1718EC0A: jl 0x1718ebd9 */
L_1718EC0C:
    eax = edi + 0x3; /* 0x1718EC0C: lea eax, [edi + 3] */
    /* cmp edx, eax */ /* 0x1718EC0F: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718EC45; /* 0x1718EC11: jne 0x1718ec45 */
L_1718EC13:
    PUSH32(esp, edi); /* 0x1718EC13: push edi */
    PUSH32(esp, ebx); /* 0x1718EC14: push ebx */
    PUSH32(esp, esi); /* 0x1718EC15: push esi */
    eax = ebp + (-0x58); /* 0x1718EC16: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x1718EC19: push eax */
    MEM32(0x172374BC) = 0xBF800000u; /* 0x1718EC1A: mov dword ptr [0x172374bc], 0xbf800000 */
    RECOMP_CALL(sub_1718DD4B); /* 0x1718EC24: call 0x1718dd4b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1718EC29: push dword ptr [ebp - 0xc] */
    eax = ebp + (-0x58); /* 0x1718EC2C: lea eax, [ebp - 0x58] */
    PUSH32(esp, MEM32(0x172374B8)); /* 0x1718EC2F: push dword ptr [0x172374b8] */
    PUSH32(esp, ebx); /* 0x1718EC35: push ebx */
    PUSH32(esp, esi); /* 0x1718EC36: push esi */
    PUSH32(esp, eax); /* 0x1718EC37: push eax */
    RECOMP_CALL(sub_1718E54F); /* 0x1718EC38: call 0x1718e54f */
    RECOMP_FLAGS_IN();
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718EC3D: fstp st(0) */
    edi = MEM32(0x172374B8); /* 0x1718EC3F: mov edi, dword ptr [0x172374b8] */
L_1718EC45:
    PUSH32(esp, edi); /* 0x1718EC45: push edi */
    PUSH32(esp, ebx); /* 0x1718EC46: push ebx */
    PUSH32(esp, esi); /* 0x1718EC47: push esi */
    eax = ebp + (-0x58); /* 0x1718EC48: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x1718EC4B: push eax */
    RECOMP_CALL(sub_1718DD4B); /* 0x1718EC4C: call 0x1718dd4b */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x2C), 0 */ /* 0x1718EC51: cmp dword ptr [ebp + 0x2c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x2C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718EC7D; /* 0x1718EC55: je 0x1718ec7d */
L_1718EC57:
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x1718EC57: fld dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + 0x30)); /* 0x1718EC5A: push dword ptr [ebp + 0x30] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x24)); /* 0x1718EC5D: fadd dword ptr [ebp - 0x24] */
    PUSH32(esp, ecx); /* 0x1718EC60: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x1718EC61: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x1718EC64: fld dword ptr [ebp - 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x1718EC67: fstp dword ptr [esp] */
    RECOMP_ICALL(MEM32(ebp + 0x2C)); /* 0x1718EC6A: call dword ptr [ebp + 0x2c] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1718EC6D: mov edi, eax */
    /* test edi, edi */ /* 0x1718EC6F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718EF89; /* 0x1718EC71: jl 0x1718ef89 */
L_1718EC77:
    ebx = MEM32(ebp + (-0x20)); /* 0x1718EC77: mov ebx, dword ptr [ebp - 0x20] */
    esi = MEM32(ebp + (-0x8)); /* 0x1718EC7A: mov esi, dword ptr [ebp - 8] */
L_1718EC7D:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + 1; /* 0x1718EC7D: inc dword ptr [ebp - 0x10] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x10)); /* 0x1718EC80: mov eax, dword ptr [ebp - 0x10] */
    /* cmp eax, MEM32(0x17237488) */ /* 0x1718EC83: cmp eax, dword ptr [0x17237488] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x17237488));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1718EB62; /* 0x1718EC89: jl 0x1718eb62 */
L_1718EC8F:
    goto L_1718ECBA; /* 0x1718EC8F: jmp 0x1718ecba */
L_1718EC91:
    PUSH32(esp, eax); /* 0x1718EC91: push eax */
    PUSH32(esp, MEM32(0x172374B8)); /* 0x1718EC92: push dword ptr [0x172374b8] */
    eax = ebp + (-0x58); /* 0x1718EC98: lea eax, [ebp - 0x58] */
    PUSH32(esp, ebx); /* 0x1718EC9B: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1718EC9C: push dword ptr [ebp - 8] */
    PUSH32(esp, eax); /* 0x1718EC9F: push eax */
    RECOMP_CALL(sub_1718E54F); /* 0x1718ECA0: call 0x1718e54f */
    RECOMP_FLAGS_IN();
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718ECA5: fstp st(0) */
    PUSH32(esp, MEM32(0x172374B8)); /* 0x1718ECA7: push dword ptr [0x172374b8] */
    eax = ebp + (-0x58); /* 0x1718ECAD: lea eax, [ebp - 0x58] */
    PUSH32(esp, ebx); /* 0x1718ECB0: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1718ECB1: push dword ptr [ebp - 8] */
    PUSH32(esp, eax); /* 0x1718ECB4: push eax */
    RECOMP_CALL(sub_1718DD4B); /* 0x1718ECB5: call 0x1718dd4b */
    RECOMP_FLAGS_IN();
L_1718ECBA:
    eax = MEM32(0x172374B8); /* 0x1718ECBA: mov eax, dword ptr [0x172374b8] */
    edx = ebx; /* 0x1718ECBF: mov edx, ebx */
    RECOMP_CALL(sub_1718D0CA); /* 0x1718ECC1: call 0x1718d0ca */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1718ECC6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1718ECD4; /* 0x1718ECC8: jne 0x1718ecd4 */
L_1718ECCA:
    edi = 0x8876086Cu; /* 0x1718ECCA: mov edi, 0x8876086c */
    goto L_1718EF89; /* 0x1718ECCF: jmp 0x1718ef89 */
L_1718ECD4:
    ecx = MEM32(ebp + 0xC); /* 0x1718ECD4: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x1718ECD7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718ECE3; /* 0x1718ECD9: jle 0x1718ece3 */
L_1718ECDB:
    edi = MEM32(ebp + (-0x28)); /* 0x1718ECDB: mov edi, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1718ECDE: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1718ECE1: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
L_1718ECE3:
    /* cmp MEM32(ebp + 0x10), 1 */ /* 0x1718ECE3: cmp dword ptr [ebp + 0x10], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718EFDD; /* 0x1718ECE7: jne 0x1718efdd */
L_1718ECED:
    eax = MEM32(0x1723FAFC); /* 0x1718ECED: mov eax, dword ptr [0x1723fafc] */
    ecx = eax; /* 0x1718ECF2: mov ecx, eax */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x1718ECF4: imul ecx, eax */
    if (3u) _cf = (((ecx) >> 29) & 1u); /* 0x1718ECF7: shl ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 3u; /* 0x1718ECF7: shl ecx, 3 */
    PUSH32(esp, ecx); /* 0x1718ECFA: push ecx */
    RECOMP_CALL(sub_1721B01C); /* 0x1718ECFB: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x1718ED00: mov esi, eax */
    eax = MEM32(0x1723FAFC); /* 0x1718ED02: mov eax, dword ptr [0x1723fafc] */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x1718ED07: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x1718ED07: shl eax, 3 */
    PUSH32(esp, eax); /* 0x1718ED0A: push eax */
    MEM32(ebp + (-0x34)) = esi; /* 0x1718ED0B: mov dword ptr [ebp - 0x34], esi */
    RECOMP_CALL(sub_1721B01C); /* 0x1718ED0E: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1718ED13: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1718ED14: pop ecx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1718ED15: push dword ptr [ebp + 0x14] */
    edi = eax; /* 0x1718ED18: mov edi, eax */
    PUSH32(esp, MEM32(0x1723FAFC)); /* 0x1718ED1A: push dword ptr [0x1723fafc] */
    MEM32(ebp + (-0x18)) = edi; /* 0x1718ED20: mov dword ptr [ebp - 0x18], edi */
    RECOMP_CALL(sub_1719678E); /* 0x1718ED23: call 0x1719678e */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x1718ED28: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x1718ED2A: mov dword ptr [ebp - 0x10], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718EF6D; /* 0x1718ED2D: je 0x1718ef6d */
L_1718ED33:
    /* test edi, edi */ /* 0x1718ED33: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718EF6D; /* 0x1718ED35: je 0x1718ef6d */
L_1718ED3B:
    /* test eax, eax */ /* 0x1718ED3B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718EF6D; /* 0x1718ED3D: je 0x1718ef6d */
L_1718ED43:
    ecx = MEM32(0x1723FAFC); /* 0x1718ED43: mov ecx, dword ptr [0x1723fafc] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ecx); /* 0x1718ED49: imul ecx, ecx */
    edx = esi; /* 0x1718ED4C: mov edx, esi */
    RECOMP_CALL(sub_1718CE6F); /* 0x1718ED4E: call 0x1718ce6f */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x2C), 0 */ /* 0x1718ED53: cmp dword ptr [ebp + 0x2c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x2C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718ED65; /* 0x1718ED57: je 0x1718ed65 */
L_1718ED59:
    fp_push((double)(int32_t)MEM32(ebp + 0xC)); /* 0x1718ED59: fild dword ptr [ebp + 0xc] */
    _st[0] = (double)*(float*)ADDR(0x17022118) / _st[0]; /* 0x1718ED5C: fdivr dword ptr [0x17022118] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x1718ED62: fstp dword ptr [ebp - 0x24] */
L_1718ED65:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x1718ED65: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x1718ED69: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(0x1723FAFC); /* 0x1718ED6D: mov ecx, dword ptr [0x1723fafc] */
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718EE20; /* 0x1718ED73: jle 0x1718ee20 */
L_1718ED79:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718ED79: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x1718ED7B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718EDA1; /* 0x1718ED7D: jle 0x1718eda1 */
L_1718ED7F:
    edx = MEM32(ebp + (-0x1C)); /* 0x1718ED7F: mov edx, dword ptr [ebp - 0x1c] */
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx); /* 0x1718ED82: imul edx, ecx */
    ecx = MEM32(ebp + 0x1C); /* 0x1718ED85: mov ecx, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x1718ED88: add edx, eax */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(ecx + edx * 4)); /* 0x1718ED8A: fld dword ptr [ecx + edx*4] */
    ecx = MEM32(ebx + 0x34); /* 0x1718ED8D: mov ecx, dword ptr [ebx + 0x34] */
    _st[0] -= *(double*)ADDR(ecx + eax * 8); /* 0x1718ED90: fsub qword ptr [ecx + eax*8] */
    { double _v = fp_pop(); *(double*)ADDR(edi + eax * 8) = _v; } /* 0x1718ED93: fstp qword ptr [edi + eax*8] */
    ecx = MEM32(0x1723FAFC); /* 0x1718ED96: mov ecx, dword ptr [0x1723fafc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1718ED9C: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, ecx */ /* 0x1718ED9D: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1718ED7F; /* 0x1718ED9F: jl 0x1718ed7f */
L_1718EDA1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1718EDA1: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x1718EDA3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x38)) = ecx; /* 0x1718EDA5: mov dword ptr [ebp - 0x38], ecx */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718EDDF; /* 0x1718EDA8: jle 0x1718eddf */
L_1718EDAA:
    eax = ecx; /* 0x1718EDAA: mov eax, ecx */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x1718EDAC: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x1718EDAC: shl eax, 3 */
    MEM32(ebp + (-0x30)) = eax; /* 0x1718EDAF: mov dword ptr [ebp - 0x30], eax */
    eax = MEM32(ebp + (-0x34)); /* 0x1718EDB2: mov eax, dword ptr [ebp - 0x34] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x1718EDB5: mov dword ptr [ebp - 0x2c], eax */
L_1718EDB8:
    fp_push(*(double*)ADDR(edi + esi * 8)); /* 0x1718EDB8: fld qword ptr [edi + esi*8] */
    eax = MEM32(ebp + (-0x2C)); /* 0x1718EDBB: mov eax, dword ptr [ebp - 0x2c] */
    edx = MEM32(ebp + (-0x38)); /* 0x1718EDBE: mov edx, dword ptr [ebp - 0x38] */
    PUSH32(esp, ecx); /* 0x1718EDC1: push ecx */
    PUSH32(esp, ecx); /* 0x1718EDC2: push ecx */
    ecx = edi; /* 0x1718EDC3: mov ecx, edi */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1718EDC5: fstp qword ptr [esp] */
    RECOMP_CALL(sub_1718CE89); /* 0x1718EDC8: call 0x1718ce89 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x30)); /* 0x1718EDCD: mov eax, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x2C)) = MEM32(ebp + (-0x2C)) + eax; /* 0x1718EDD0: add dword ptr [ebp - 0x2c], eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1718EDD3: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebp + (-0x38)) */ /* 0x1718EDD4: cmp esi, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x38)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1718EDB8; /* 0x1718EDD7: jl 0x1718edb8 */
L_1718EDD9:
    ecx = MEM32(0x1723FAFC); /* 0x1718EDD9: mov ecx, dword ptr [0x1723fafc] */
L_1718EDDF:
    /* cmp MEM32(ebp + 0x2C), 0 */ /* 0x1718EDDF: cmp dword ptr [ebp + 0x2c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x2C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718EE11; /* 0x1718EDE3: je 0x1718ee11 */
L_1718EDE5:
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x1718EDE5: fld dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + 0x30)); /* 0x1718EDE8: push dword ptr [ebp + 0x30] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x24)); /* 0x1718EDEB: fadd dword ptr [ebp - 0x24] */
    PUSH32(esp, ecx); /* 0x1718EDEE: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x1718EDEF: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x1718EDF2: fld dword ptr [ebp - 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x1718EDF5: fstp dword ptr [esp] */
    RECOMP_ICALL(MEM32(ebp + 0x2C)); /* 0x1718EDF8: call dword ptr [ebp + 0x2c] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1718EDFB: mov edi, eax */
    /* test edi, edi */ /* 0x1718EDFD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718EF89; /* 0x1718EDFF: jl 0x1718ef89 */
L_1718EE05:
    ecx = MEM32(0x1723FAFC); /* 0x1718EE05: mov ecx, dword ptr [0x1723fafc] */
    ebx = MEM32(ebp + (-0x20)); /* 0x1718EE0B: mov ebx, dword ptr [ebp - 0x20] */
    edi = MEM32(ebp + (-0x18)); /* 0x1718EE0E: mov edi, dword ptr [ebp - 0x18] */
L_1718EE11:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) + 1; /* 0x1718EE11: inc dword ptr [ebp - 0x1c] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x1C)); /* 0x1718EE14: mov eax, dword ptr [ebp - 0x1c] */
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x1718EE17: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1718ED79; /* 0x1718EE1A: jl 0x1718ed79 */
L_1718EE20:
    esi = MEM32(ebp + (-0x10)); /* 0x1718EE20: mov esi, dword ptr [ebp - 0x10] */
    PUSH32(esp, esi); /* 0x1718EE23: push esi */
    PUSH32(esp, ecx); /* 0x1718EE24: push ecx */
    PUSH32(esp, MEM32(ebp + (-0x34))); /* 0x1718EE25: push dword ptr [ebp - 0x34] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1718EE28: push dword ptr [ebp + 0x14] */
    RECOMP_CALL(sub_17196600); /* 0x1718EE2B: call 0x17196600 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(0x1723FAFC); /* 0x1718EE30: mov ecx, dword ptr [0x1723fafc] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 0x14)); /* 0x1718EE36: imul ecx, dword ptr [ebp + 0x14] */
    esi = MEM32(esi + 0x14); /* 0x1718EE3A: mov esi, dword ptr [esi + 0x14] */
    edi = MEM32(ebx + 0x30); /* 0x1718EE3D: mov edi, dword ptr [ebx + 0x30] */
    if (3u) _cf = (((ecx) >> 29) & 1u); /* 0x1718EE40: shl ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 3u; /* 0x1718EE40: shl ecx, 3 */
    eax = ecx; /* 0x1718EE43: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1718EE45: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1718EE45: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1718EE48: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1718EE4A: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1718EE4C: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1718EE4F: rep movsb byte ptr es:[edi], byte ptr [esi] */
    esi = MEM32(ebp + (-0x10)); /* 0x1718EE51: mov esi, dword ptr [ebp - 0x10] */
    ecx = MEM32(esi + 0x10); /* 0x1718EE54: mov ecx, dword ptr [esi + 0x10] */
    edi = MEM32(ebp + 0x14); /* 0x1718EE57: mov edi, dword ptr [ebp + 0x14] */
    eax = edi; /* 0x1718EE5A: mov eax, edi */
    edx = ecx; /* 0x1718EE5C: mov edx, ecx */
    RECOMP_CALL(sub_1718CF18); /* 0x1718EE5E: call 0x1718cf18 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebx + 0x10)); /* 0x1718EE63: push dword ptr [ebx + 0x10] */
    MEM32(ebx + 0x4) = edi; /* 0x1718EE66: mov dword ptr [ebx + 4], edi */
    PUSH32(esp, MEM32(0x1723FAFC)); /* 0x1718EE69: push dword ptr [0x1723fafc] */
    PUSH32(esp, MEM32(ebx + 0x34)); /* 0x1718EE6F: push dword ptr [ebx + 0x34] */
    RECOMP_CALL(sub_1718CED6); /* 0x1718EE72: call 0x1718ced6 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebx + 0x18)); /* 0x1718EE77: push dword ptr [ebx + 0x18] */
    PUSH32(esp, MEM32(ebx + 0x4)); /* 0x1718EE7A: push dword ptr [ebx + 4] */
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x1718EE7D: push dword ptr [esi + 0x10] */
    RECOMP_CALL(sub_1718CED6); /* 0x1718EE80: call 0x1718ced6 */
    RECOMP_FLAGS_IN();
    esi = MEM32(esi + 0x14); /* 0x1718EE85: mov esi, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1718EE88: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x4), edx */ /* 0x1718EE8A: cmp dword ptr [ebx + 4], edx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718EEC6; /* 0x1718EE8D: jle 0x1718eec6 */
L_1718EE8F:
    eax = MEM32(ebx + 0x14); /* 0x1718EE8F: mov eax, dword ptr [ebx + 0x14] */
    PUSH32(esp, MEM32(eax + edx * 4)); /* 0x1718EE92: push dword ptr [eax + edx*4] */
    PUSH32(esp, MEM32(0x1723FAFC)); /* 0x1718EE95: push dword ptr [0x1723fafc] */
    PUSH32(esp, esi); /* 0x1718EE9B: push esi */
    RECOMP_CALL(sub_1718CED6); /* 0x1718EE9C: call 0x1718ced6 */
    RECOMP_FLAGS_IN();
    eax = MEM32(0x1723FAFC); /* 0x1718EEA1: mov eax, dword ptr [0x1723fafc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1718EEA6: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, MEM32(ebx + 0x4) */ /* 0x1718EEA7: cmp edx, dword ptr [ebx + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebx + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = esi + eax * 8; /* 0x1718EEAA: lea esi, [esi + eax*8] */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1718EE8F; /* 0x1718EEAD: jl 0x1718ee8f */
L_1718EEAF:
    goto L_1718EEC6; /* 0x1718EEAF: jmp 0x1718eec6 */
L_1718EEB1:
    ecx = MEM32(0x1723FAFC); /* 0x1718EEB1: mov ecx, dword ptr [0x1723fafc] */
    /* test ecx, ecx */ /* 0x1718EEB7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebx + 0x14); /* 0x1718EEB9: mov eax, dword ptr [ebx + 0x14] */
    edi = MEM32(eax + edx * 4); /* 0x1718EEBC: mov edi, dword ptr [eax + edx*4] */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718EEC5; /* 0x1718EEBF: jle 0x1718eec5 */
L_1718EEC1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718EEC1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x1718EEC3: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
L_1718EEC5:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1718EEC5: inc edx */
    _flag_k = FK_INC;
L_1718EEC6:
    /* cmp edx, MEM32(ebp + (-0x3C)) */ /* 0x1718EEC6: cmp edx, dword ptr [ebp - 0x3c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x3C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1718EEB1; /* 0x1718EEC9: jl 0x1718eeb1 */
L_1718EECB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1718EECB: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1718EECD: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x14), edi */ /* 0x1718EECF: cmp dword ptr [ebp + 0x14], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1718EF30; /* 0x1718EED2: jbe 0x1718ef30 */
L_1718EED4:
    eax = MEM32(ebx + 0x18); /* 0x1718EED4: mov eax, dword ptr [ebx + 0x18] */
    fp_push(*(float*)&MEM32(eax + esi * 4)); /* 0x1718EED7: fld dword ptr [eax + esi*4] */
    PUSH32(esp, ecx); /* 0x1718EEDA: push ecx */
    PUSH32(esp, ecx); /* 0x1718EEDB: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1718EEDC: fstp qword ptr [esp] */
    RECOMP_CALL(sub_1721B3AA); /* 0x1718EEDF: call 0x1721b3aa */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1718EEE4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1718EEE6: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1718EEE7: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718EEF9; /* 0x1718EEE8: je 0x1718eef9 */
L_1718EEEA:
    PUSH32(esp, esi); /* 0x1718EEEA: push esi */
    PUSH32(esp, edi); /* 0x1718EEEB: push edi */
    PUSH32(esp, 0x170220E8u); /* 0x1718EEEC: push 0x170220e8 */
    RECOMP_CALL(sub_1718E79A); /* 0x1718EEF1: call 0x1718e79a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1718EEF6: add esp, 0xc */
    _flag_k = FK_ADD;
L_1718EEF9:
    eax = MEM32(ebx + 0x18); /* 0x1718EEF9: mov eax, dword ptr [ebx + 0x18] */
    fp_push(*(float*)&MEM32(eax + esi * 4)); /* 0x1718EEFC: fld dword ptr [eax + esi*4] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001DA8)); /* 0x1718EEFF: fcomp qword ptr [0x17001da8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1718EF05: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1718EF07: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1718EF2A; /* 0x1718EF0A: jp 0x1718ef2a */
L_1718EF0C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718EF0C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(0x1723FAFC), edi */ /* 0x1718EF0E: cmp dword ptr [0x1723fafc], edi */
    _flag_a = (uint32_t)(MEM32(0x1723FAFC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718EF2A; /* 0x1718EF14: jle 0x1718ef2a */
L_1718EF16:
    ecx = MEM32(ebx + 0x14); /* 0x1718EF16: mov ecx, dword ptr [ebx + 0x14] */
    fp_push(0.0); /* 0x1718EF19: fldz  */
    ecx = MEM32(ecx + esi * 4); /* 0x1718EF1B: mov ecx, dword ptr [ecx + esi*4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + eax * 4) = _v; } /* 0x1718EF1E: fstp dword ptr [ecx + eax*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1718EF21: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(0x1723FAFC) */ /* 0x1718EF22: cmp eax, dword ptr [0x1723fafc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x1723FAFC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1718EF16; /* 0x1718EF28: jl 0x1718ef16 */
L_1718EF2A:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1718EF2A: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, MEM32(ebp + 0x14) */ /* 0x1718EF2B: cmp esi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718EED4; /* 0x1718EF2E: jb 0x1718eed4 */
L_1718EF30:
    PUSH32(esp, MEM32(ebp + (-0x34))); /* 0x1718EF30: push dword ptr [ebp - 0x34] */
    RECOMP_CALL(sub_1721B010); /* 0x1718EF33: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1718EF38: push dword ptr [ebp - 0x18] */
    RECOMP_CALL(sub_1721B010); /* 0x1718EF3B: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1718EF40: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1718EF41: pop ecx */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1718EF42: push dword ptr [ebp - 0x10] */
    RECOMP_CALL(sub_17196580); /* 0x1718EF45: call 0x17196580 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x2C), edi */ /* 0x1718EF4A: cmp dword ptr [ebp + 0x2c], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x2C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718EFFD; /* 0x1718EF4D: je 0x1718effd */
L_1718EF53:
    PUSH32(esp, MEM32(ebp + 0x30)); /* 0x1718EF53: push dword ptr [ebp + 0x30] */
    fp_push(1.0); /* 0x1718EF56: fld1  */
    PUSH32(esp, ecx); /* 0x1718EF58: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x1718EF59: fstp dword ptr [esp] */
    RECOMP_ICALL(MEM32(ebp + 0x2C)); /* 0x1718EF5C: call dword ptr [ebp + 0x2c] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1718EF5F: mov edi, eax */
    /* test edi, edi */ /* 0x1718EF61: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718EF89; /* 0x1718EF63: jl 0x1718ef89 */
L_1718EF65:
    ebx = MEM32(ebp + (-0x20)); /* 0x1718EF65: mov ebx, dword ptr [ebp - 0x20] */
    goto L_1718EFFD; /* 0x1718EF68: jmp 0x1718effd */
L_1718EF6D:
    PUSH32(esp, esi); /* 0x1718EF6D: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x1718EF6E: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1718EF73: push edi */
    RECOMP_CALL(sub_1721B010); /* 0x1718EF74: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1718EF79: push dword ptr [ebp - 0x10] */
    RECOMP_CALL(sub_1721B010); /* 0x1718EF7C: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1718EF81: add esp, 0xc */
    _flag_k = FK_ADD;
L_1718EF84:
    edi = 0x8007000Eu; /* 0x1718EF84: mov edi, 0x8007000e */
L_1718EF89:
    ebx = POP32_VAL(esp); /* 0x1718EF89: pop ebx */
L_1718EF8A:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1718EF8A: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x1718EF8D: push dword ptr [ebp - 0x20] */
    RECOMP_CALL(sub_1718E56E); /* 0x1718EF90: call 0x1718e56e */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x44))); /* 0x1718EF95: push dword ptr [ebp - 0x44] */
    RECOMP_CALL(sub_1721B010); /* 0x1718EF98: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1718EF9D: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_1721B010); /* 0x1718EFA0: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x1718EFA5: push dword ptr [ebp - 0x28] */
    RECOMP_CALL(sub_1721B010); /* 0x1718EFA8: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1718EFAD: add esp, 0xc */
    _flag_k = FK_ADD;
    /* test edi, edi */ /* 0x1718EFB0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718EFD5; /* 0x1718EFB2: je 0x1718efd5 */
L_1718EFB4:
    eax = MEM32(ebp + 0x20); /* 0x1718EFB4: mov eax, dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(eax)); /* 0x1718EFB7: push dword ptr [eax] */
    RECOMP_CALL(sub_1721B010); /* 0x1718EFB9: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x24); /* 0x1718EFBE: mov eax, dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(eax)); /* 0x1718EFC1: push dword ptr [eax] */
    RECOMP_CALL(sub_1721B010); /* 0x1718EFC3: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x28); /* 0x1718EFC8: mov eax, dword ptr [ebp + 0x28] */
    PUSH32(esp, MEM32(eax)); /* 0x1718EFCB: push dword ptr [eax] */
    RECOMP_CALL(sub_1721B010); /* 0x1718EFCD: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1718EFD2: add esp, 0xc */
    _flag_k = FK_ADD;
L_1718EFD5:
    eax = edi; /* 0x1718EFD5: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x1718EFD7: pop edi */
    goto L_1718F28A; /* 0x1718EFD8: jmp 0x1718f28a */
L_1718EFDD:
    PUSH32(esp, MEM32(0x17237498)); /* 0x1718EFDD: push dword ptr [0x17237498] */
    eax = ebp + (-0x58); /* 0x1718EFE3: lea eax, [ebp - 0x58] */
    PUSH32(esp, MEM32(0x172374B8)); /* 0x1718EFE6: push dword ptr [0x172374b8] */
    PUSH32(esp, ebx); /* 0x1718EFEC: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x1718EFED: push dword ptr [ebp - 0x28] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1718EFF0: push dword ptr [ebp - 8] */
    PUSH32(esp, eax); /* 0x1718EFF3: push eax */
    RECOMP_CALL(sub_1718E7E9); /* 0x1718EFF4: call 0x1718e7e9 */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x1718EFF9: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718EF84; /* 0x1718EFFB: je 0x1718ef84 */
L_1718EFFD:
    PUSH32(esp, MEM32(0x1723FAFC)); /* 0x1718EFFD: push dword ptr [0x1723fafc] */
    PUSH32(esp, MEM32(0x172374B8)); /* 0x1718F003: push dword ptr [0x172374b8] */
    PUSH32(esp, ebx); /* 0x1718F009: push ebx */
    RECOMP_CALL(sub_1718E932); /* 0x1718F00A: call 0x1718e932 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1718F00F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(0x1723FAF0), esi */ /* 0x1718F011: cmp dword ptr [0x1723faf0], esi */
    _flag_a = (uint32_t)(MEM32(0x1723FAF0)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1718F02B; /* 0x1718F017: jne 0x1718f02b */
L_1718F019:
    eax = MEM32(0x17237490); /* 0x1718F019: mov eax, dword ptr [0x17237490] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + eax; /* 0x1718F01E: add dword ptr [ebp - 0xc], eax */
    _flag_k = FK_ADD;
    MEM32(0x1723FAF0) = 1; /* 0x1718F021: mov dword ptr [0x1723faf0], 1 */
L_1718F02B:
    ecx = MEM32(0x17237494); /* 0x1718F02B: mov ecx, dword ptr [0x17237494] */
    eax = ecx; /* 0x1718F031: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0xC)); /* 0x1718F033: sub eax, dword ptr [ebp - 0xc] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x17237498));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(0x17237498); /* 0x1718F036: add eax, dword ptr [0x17237498] */
    _flag_k = FK_ADD;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1718F03C: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x1718F03D: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(0x1723748C)); /* 0x1718F03F: imul eax, dword ptr [0x1723748c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x1723FAEC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(0x1723FAEC); /* 0x1718F046: add eax, dword ptr [0x1723faec] */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + 0x2C), esi */ /* 0x1718F04C: cmp dword ptr [ebp + 0x2c], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x2C)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x18)) = eax; /* 0x1718F04F: mov dword ptr [ebp - 0x18], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718F05F; /* 0x1718F052: je 0x1718f05f */
L_1718F054:
    fp_push(1.0); /* 0x1718F054: fld1  */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x14)); /* 0x1718F056: fsub dword ptr [ebp - 0x14] */
    _st[0] = _st[0] / (double)(int32_t)MEM32(ebp + (-0x18)); /* 0x1718F059: fidiv dword ptr [ebp - 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x1718F05C: fstp dword ptr [ebp - 0x24] */
L_1718F05F:
    /* cmp eax, esi */ /* 0x1718F05F: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = esi; /* 0x1718F061: mov dword ptr [ebp - 0x10], esi */
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718F11C; /* 0x1718F064: jle 0x1718f11c */
L_1718F06A:
    ecx = MEM32(ebp + 0xC); /* 0x1718F06A: mov ecx, dword ptr [ebp + 0xc] */
    esi = MEM32(ebp + (-0x8)); /* 0x1718F06D: mov esi, dword ptr [ebp - 8] */
    edi = MEM32(ebp + (-0x28)); /* 0x1718F070: mov edi, dword ptr [ebp - 0x28] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1718F073: push dword ptr [ebp - 0xc] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x1718F076: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x1718F076: shl ecx, 2 */
    eax = ecx; /* 0x1718F079: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1718F07B: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1718F07B: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1718F07E: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1718F080: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1718F082: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1718F085: rep movsb byte ptr es:[edi], byte ptr [esi] */
    PUSH32(esp, MEM32(0x172374B8)); /* 0x1718F087: push dword ptr [0x172374b8] */
    eax = ebp + (-0x58); /* 0x1718F08D: lea eax, [ebp - 0x58] */
    PUSH32(esp, ebx); /* 0x1718F090: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1718F091: push dword ptr [ebp - 8] */
    PUSH32(esp, eax); /* 0x1718F094: push eax */
    RECOMP_CALL(sub_1718E54F); /* 0x1718F095: call 0x1718e54f */
    RECOMP_FLAGS_IN();
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718F09A: fstp st(0) */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x1718F09C: push dword ptr [ebp - 0xc] */
    eax = ebp + (-0x58); /* 0x1718F09F: lea eax, [ebp - 0x58] */
    PUSH32(esp, MEM32(0x172374B8)); /* 0x1718F0A2: push dword ptr [0x172374b8] */
    PUSH32(esp, ebx); /* 0x1718F0A8: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x28))); /* 0x1718F0A9: push dword ptr [ebp - 0x28] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x1718F0AC: push dword ptr [ebp - 8] */
    PUSH32(esp, eax); /* 0x1718F0AF: push eax */
    RECOMP_CALL(sub_1718E7E9); /* 0x1718F0B0: call 0x1718e7e9 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x2C), 0 */ /* 0x1718F0B5: cmp dword ptr [ebp + 0x2c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x2C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718F0DE; /* 0x1718F0B9: je 0x1718f0de */
L_1718F0BB:
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x1718F0BB: fld dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + 0x30)); /* 0x1718F0BE: push dword ptr [ebp + 0x30] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x24)); /* 0x1718F0C1: fadd dword ptr [ebp - 0x24] */
    PUSH32(esp, ecx); /* 0x1718F0C4: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x1718F0C5: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x1718F0C8: fld dword ptr [ebp - 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x1718F0CB: fstp dword ptr [esp] */
    RECOMP_ICALL(MEM32(ebp + 0x2C)); /* 0x1718F0CE: call dword ptr [ebp + 0x2c] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1718F0D1: mov edi, eax */
    /* test edi, edi */ /* 0x1718F0D3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718EF89; /* 0x1718F0D5: jl 0x1718ef89 */
L_1718F0DB:
    ebx = MEM32(ebp + (-0x20)); /* 0x1718F0DB: mov ebx, dword ptr [ebp - 0x20] */
L_1718F0DE:
    edi = MEM32(ebp + (-0x18)); /* 0x1718F0DE: mov edi, dword ptr [ebp - 0x18] */
    esi = MEM32(ebp + (-0x10)); /* 0x1718F0E1: mov esi, dword ptr [ebp - 0x10] */
    ecx = edi + (-0x1); /* 0x1718F0E4: lea ecx, [edi - 1] */
    /* cmp esi, ecx */ /* 0x1718F0E7: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718F110; /* 0x1718F0E9: je 0x1718f110 */
L_1718F0EB:
    eax = esi + 0x1; /* 0x1718F0EB: lea eax, [esi + 1] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1718F0EE: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(0x1723748C); /* 0x1718F0EF: idiv dword ptr [0x1723748c] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    /* test edx, edx */ /* 0x1718F0F5: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1718F110; /* 0x1718F0F7: jne 0x1718f110 */
L_1718F0F9:
    eax = MEM32(ebp + (-0xC)); /* 0x1718F0F9: mov eax, dword ptr [ebp - 0xc] */
    /* cmp eax, MEM32(0x17237498) */ /* 0x1718F0FC: cmp eax, dword ptr [0x17237498] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x17237498));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718F110; /* 0x1718F102: je 0x1718f110 */
L_1718F104:
    /* cmp esi, ecx */ /* 0x1718F104: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718F110; /* 0x1718F106: je 0x1718f110 */
L_1718F108:
    eax = MEM32(0x17237494); /* 0x1718F108: mov eax, dword ptr [0x17237494] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + eax; /* 0x1718F10D: add dword ptr [ebp - 0xc], eax */
    _flag_k = FK_ADD;
L_1718F110:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1718F110: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, edi */ /* 0x1718F111: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = esi; /* 0x1718F113: mov dword ptr [ebp - 0x10], esi */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1718F06A; /* 0x1718F116: jl 0x1718f06a */
L_1718F11C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1718F11C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(0x172374B8), ecx */ /* 0x1718F11E: cmp dword ptr [0x172374b8], ecx */
    _flag_a = (uint32_t)(MEM32(0x172374B8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718F13A; /* 0x1718F124: jle 0x1718f13a */
L_1718F126:
    eax = ebx + 0xC; /* 0x1718F126: lea eax, [ebx + 0xc] */
L_1718F129:
    edx = MEM32(ebp + (-0xC)); /* 0x1718F129: mov edx, dword ptr [ebp - 0xc] */
    MEM32(eax) = edx; /* 0x1718F12C: mov dword ptr [eax], edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1718F12E: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x38u; /* 0x1718F12F: add eax, 0x38 */
    _flag_k = FK_ADD;
    /* cmp ecx, MEM32(0x172374B8) */ /* 0x1718F132: cmp ecx, dword ptr [0x172374b8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x172374B8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1718F129; /* 0x1718F138: jl 0x1718f129 */
L_1718F13A:
    eax = MEM32(ebp + 0x14); /* 0x1718F13A: mov eax, dword ptr [ebp + 0x14] */
    edi = MEM32(ebp + 0x8); /* 0x1718F13D: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1718F140: inc eax */
    _flag_k = FK_INC;
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x1718F141: imul eax, edi */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x10)); /* 0x1718F144: imul eax, dword ptr [ebp + 0x10] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1718F148: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1718F148: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1718F14B: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1718F14C: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x20); /* 0x1718F151: mov esi, dword ptr [ebp + 0x20] */
    MEM32(esi) = eax; /* 0x1718F154: mov dword ptr [esi], eax */
    eax = MEM32(ebp + 0xC); /* 0x1718F156: mov eax, dword ptr [ebp + 0xc] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x14)); /* 0x1718F159: imul eax, dword ptr [ebp + 0x14] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1718F15D: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1718F15D: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1718F160: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1718F161: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1718F166: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1718F167: pop ecx */
    ecx = MEM32(ebp + 0x24); /* 0x1718F168: mov ecx, dword ptr [ebp + 0x24] */
    MEM32(ecx) = eax; /* 0x1718F16B: mov dword ptr [ecx], eax */
    /* cmp MEM32(esi), 0 */ /* 0x1718F16D: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718EF84; /* 0x1718F170: je 0x1718ef84 */
L_1718F176:
    /* test eax, eax */ /* 0x1718F176: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718EF84; /* 0x1718F178: je 0x1718ef84 */
L_1718F17E:
    /* cmp MEM32(ebp + 0x10), 1 */ /* 0x1718F17E: cmp dword ptr [ebp + 0x10], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718F19E; /* 0x1718F182: je 0x1718f19e */
L_1718F184:
    eax = MEM32(ebp + 0xC); /* 0x1718F184: mov eax, dword ptr [ebp + 0xc] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1718F187: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1718F187: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1718F18A: push eax */
    RECOMP_CALL(sub_1721B01C); /* 0x1718F18B: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1718F190: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1718F192: pop ecx */
    ecx = MEM32(ebp + 0x28); /* 0x1718F193: mov ecx, dword ptr [ebp + 0x28] */
    MEM32(ecx) = eax; /* 0x1718F196: mov dword ptr [ecx], eax */
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718EF84; /* 0x1718F198: je 0x1718ef84 */
L_1718F19E:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x1718F19E: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = MEM32(esi); /* 0x1718F1A2: mov esi, dword ptr [esi] */
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718F211; /* 0x1718F1A4: jle 0x1718f211 */
L_1718F1A6:
    eax = MEM32(ebp + 0x10); /* 0x1718F1A6: mov eax, dword ptr [ebp + 0x10] */
    edx = ebx + 0x14; /* 0x1718F1A9: lea edx, [ebx + 0x14] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1718F1AC: mov dword ptr [ebp - 0x18], eax */
L_1718F1AF:
    /* test edi, edi */ /* 0x1718F1AF: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(edx + (-0x4)); /* 0x1718F1B1: mov ecx, dword ptr [edx - 4] */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718F1C8; /* 0x1718F1B4: jle 0x1718f1c8 */
L_1718F1B6:
    eax = esi; /* 0x1718F1B6: mov eax, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x1718F1B8: sub ecx, esi */
    _flag_k = FK_CMP;
L_1718F1BA:
    fp_push(*(float*)&MEM32(ecx + eax)); /* 0x1718F1BA: fld dword ptr [ecx + eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1718F1BD: fstp dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1718F1BF: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1718F1C2: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1718F1BA; /* 0x1718F1C3: jne 0x1718f1ba */
L_1718F1C5:
    edi = MEM32(ebp + 0x8); /* 0x1718F1C5: mov edi, dword ptr [ebp + 8] */
L_1718F1C8:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x1718F1C8: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi; /* 0x1718F1CC: mov eax, edi */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1718F1CE: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1718F1CE: shl eax, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1718F1D1: add esi, eax */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + 0x14), 0 */ /* 0x1718F1D3: cmp dword ptr [ebp + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1718F209; /* 0x1718F1D7: jbe 0x1718f209 */
L_1718F1D9:
    /* test edi, edi */ /* 0x1718F1D9: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edx); /* 0x1718F1DB: mov eax, dword ptr [edx] */
    ecx = MEM32(ebp + (-0x1C)); /* 0x1718F1DD: mov ecx, dword ptr [ebp - 0x1c] */
    ecx = MEM32(eax + ecx * 4); /* 0x1718F1E0: mov ecx, dword ptr [eax + ecx*4] */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1718F1F7; /* 0x1718F1E3: jle 0x1718f1f7 */
L_1718F1E5:
    eax = esi; /* 0x1718F1E5: mov eax, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x1718F1E7: sub ecx, esi */
    _flag_k = FK_CMP;
L_1718F1E9:
    fp_push(*(float*)&MEM32(ecx + eax)); /* 0x1718F1E9: fld dword ptr [ecx + eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1718F1EC: fstp dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1718F1EE: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1718F1F1: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1718F1E9; /* 0x1718F1F2: jne 0x1718f1e9 */
L_1718F1F4:
    edi = MEM32(ebp + 0x8); /* 0x1718F1F4: mov edi, dword ptr [ebp + 8] */
L_1718F1F7:
    eax = edi; /* 0x1718F1F7: mov eax, edi */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1718F1F9: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1718F1F9: shl eax, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x1718F1FC: add esi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) + 1; /* 0x1718F1FE: inc dword ptr [ebp - 0x1c] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x1C)); /* 0x1718F201: mov eax, dword ptr [ebp - 0x1c] */
    /* cmp eax, MEM32(ebp + 0x14) */ /* 0x1718F204: cmp eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718F1D9; /* 0x1718F207: jb 0x1718f1d9 */
L_1718F209:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x38u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x38u; /* 0x1718F209: add edx, 0x38 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) - 1; /* 0x1718F20C: dec dword ptr [ebp - 0x18] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1718F1AF; /* 0x1718F20F: jne 0x1718f1af */
L_1718F211:
    /* cmp MEM32(ebp + 0x10), 1 */ /* 0x1718F211: cmp dword ptr [ebp + 0x10], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1718F233; /* 0x1718F215: je 0x1718f233 */
L_1718F217:
    ecx = MEM32(ebp + 0xC); /* 0x1718F217: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x28); /* 0x1718F21A: mov eax, dword ptr [ebp + 0x28] */
    edi = MEM32(eax); /* 0x1718F21D: mov edi, dword ptr [eax] */
    esi = MEM32(ebp + (-0x8)); /* 0x1718F21F: mov esi, dword ptr [ebp - 8] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x1718F222: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x1718F222: shl ecx, 2 */
    eax = ecx; /* 0x1718F225: mov eax, ecx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x1718F227: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x1718F227: shr ecx, 2 */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x1718F22A: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = eax; /* 0x1718F22C: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x1718F22E: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    while (ecx) { MEM8(edi) = MEM8(esi); esi += _df * 1; edi += _df * 1; --ecx; } /* 0x1718F231: rep movsb byte ptr es:[edi], byte ptr [esi] */
L_1718F233:
    eax = MEM32(ebp + 0x24); /* 0x1718F233: mov eax, dword ptr [ebp + 0x24] */
    edi = MEM32(eax); /* 0x1718F236: mov edi, dword ptr [eax] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1718F238: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), esi */ /* 0x1718F23A: cmp dword ptr [ebp + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1718F27E; /* 0x1718F23D: jle 0x1718f27e */
L_1718F23F:
    eax = MEM32(ebp + 0x14); /* 0x1718F23F: mov eax, dword ptr [ebp + 0x14] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1718F242: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1718F242: shl eax, 2 */
    MEM32(ebp + (-0x30)) = eax; /* 0x1718F245: mov dword ptr [ebp - 0x30], eax */
    goto L_1718F24D; /* 0x1718F248: jmp 0x1718f24d */
L_1718F24A:
    ebx = MEM32(ebp + (-0x20)); /* 0x1718F24A: mov ebx, dword ptr [ebp - 0x20] */
L_1718F24D:
    PUSH32(esp, esi); /* 0x1718F24D: push esi */
    eax = ebp + (-0x58); /* 0x1718F24E: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x1718F251: push eax */
    RECOMP_CALL(sub_1718D02F); /* 0x1718F252: call 0x1718d02f */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x1718F257: mov ecx, eax */
    eax = MEM32(ebp + (-0x8)); /* 0x1718F259: mov eax, dword ptr [ebp - 8] */
    eax = MEM32(eax + esi * 4); /* 0x1718F25C: mov eax, dword ptr [eax + esi*4] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x38u); /* 0x1718F25F: imul eax, eax, 0x38 */
    PUSH32(esp, edi); /* 0x1718F262: push edi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1718F263: push dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x1718F266: add eax, ebx */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1718F268: push dword ptr [ebp + 8] */
    ebx = MEM32(ebx + 0x2C); /* 0x1718F26B: mov ebx, dword ptr [ebx + 0x2c] */
    RECOMP_CALL(sub_1718DCB7); /* 0x1718F26E: call 0x1718dcb7 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x30)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0x30)); /* 0x1718F273: add edi, dword ptr [ebp - 0x30] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1718F276: inc esi */
    _flag_k = FK_INC;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718F277: fstp st(0) */
    /* cmp esi, MEM32(ebp + 0xC) */ /* 0x1718F279: cmp esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1718F24A; /* 0x1718F27C: jl 0x1718f24a */
L_1718F27E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1718F27E: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_1718EF89; /* 0x1718F280: jmp 0x1718ef89 */
L_1718F285:
    eax = 0x8876086Cu; /* 0x1718F285: mov eax, 0x8876086c */
L_1718F28A:
    ecx = MEM32(ebp + (-0x4)); /* 0x1718F28A: mov ecx, dword ptr [ebp - 4] */
    esi = POP32_VAL(esp); /* 0x1718F28D: pop esi */
    RECOMP_CALL(sub_1721B76C); /* 0x1718F28E: call 0x1721b76c */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1718F293: leave  */
    RECOMP_FLAGS_OUT(); esp += 48; { RECOMP_REGS_OUT(); return; } /* 0x1718F294: ret 0x2c */
    RECOMP_REGS_OUT();
}

void sub_1718F29C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718F29Cu);

L_1718F29C:
    edi = edi; /* 0x1718F29C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718F29E: push ebp */
    ebp = esp; /* 0x1718F29F: mov ebp, esp */
    eax = ecx; /* 0x1718F2A1: mov eax, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x1718F2A3: mov ecx, dword ptr [ebp + 8] */
    MEM32(eax) = 0x1702211Cu; /* 0x1718F2A6: mov dword ptr [eax], 0x1702211c */
    MEM32(eax + 0x4) = ecx; /* 0x1718F2AC: mov dword ptr [eax + 4], ecx */
    ecx = MEM32(ecx + 0x80); /* 0x1718F2AF: mov ecx, dword ptr [ecx + 0x80] */
    MEM32(eax + 0x8) = ecx; /* 0x1718F2B5: mov dword ptr [eax + 8], ecx */
    ebp = POP32_VAL(esp); /* 0x1718F2B8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1718F2B9: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1718F2C1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718F2C1u);

L_1718F2C1:
    edi = edi; /* 0x1718F2C1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718F2C3: push ebp */
    ebp = esp; /* 0x1718F2C4: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1718F2C6: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1718F2C7: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1718F2CA: push edi */
    edi = ecx + 0xC; /* 0x1718F2CB: lea edi, [ecx + 0xc] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718F2CE: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718F2CF: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718F2D0: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + 0xC); /* 0x1718F2D1: mov esi, dword ptr [ebp + 0xc] */
    edi = ecx + 0x18; /* 0x1718F2D4: lea edi, [ecx + 0x18] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718F2D7: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718F2D8: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718F2D9: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + 0x10); /* 0x1718F2DA: mov esi, dword ptr [ebp + 0x10] */
    edi = ecx + 0x24; /* 0x1718F2DD: lea edi, [ecx + 0x24] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718F2E0: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718F2E1: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718F2E2: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x1718F2E3: pop edi */
    esi = POP32_VAL(esp); /* 0x1718F2E4: pop esi */
    ebp = POP32_VAL(esp); /* 0x1718F2E5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1718F2E6: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1718F2EE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718F2EEu);

L_1718F2EE:
    edi = edi; /* 0x1718F2EE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718F2F0: push ebp */
    ebp = esp; /* 0x1718F2F1: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1718F2F3: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x1718F2F7: push esi */
    esi = ecx; /* 0x1718F2F8: mov esi, ecx */
    MEM32(esi) = 0x1702212Cu; /* 0x1718F2FA: mov dword ptr [esi], 0x1702212c */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718F309; /* 0x1718F300: je 0x1718f309 */
L_1718F302:
    PUSH32(esp, esi); /* 0x1718F302: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x1718F303: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1718F308: pop ecx */
L_1718F309:
    eax = esi; /* 0x1718F309: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1718F30B: pop esi */
    ebp = POP32_VAL(esp); /* 0x1718F30C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1718F30D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1718F315(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718F315u);

L_1718F315:
    edi = edi; /* 0x1718F315: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718F317: push ebp */
    ebp = esp; /* 0x1718F318: mov ebp, esp */
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1718F31A: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    PUSH32(esp, esi); /* 0x1718F31E: push esi */
    esi = ecx; /* 0x1718F31F: mov esi, ecx */
    MEM32(esi) = 0x17022124u; /* 0x1718F321: mov dword ptr [esi], 0x17022124 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718F330; /* 0x1718F327: je 0x1718f330 */
L_1718F329:
    PUSH32(esp, esi); /* 0x1718F329: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x1718F32A: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1718F32F: pop ecx */
L_1718F330:
    eax = esi; /* 0x1718F330: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1718F332: pop esi */
    ebp = POP32_VAL(esp); /* 0x1718F333: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1718F334: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1718F33C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718F33Cu);

L_1718F33C:
    edi = edi; /* 0x1718F33C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718F33E: push ebp */
    ebp = esp; /* 0x1718F33F: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1718F341: push esi */
    esi = MEM32(ebp + 0x10); /* 0x1718F342: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x1718F345: push edi */
    eax = ecx; /* 0x1718F346: mov eax, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x1718F348: mov ecx, dword ptr [ebp + 8] */
    MEM32(eax + 0x4) = ecx; /* 0x1718F34B: mov dword ptr [eax + 4], ecx */
    ecx = MEM32(ebp + 0xC); /* 0x1718F34E: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax + 0x8) = ecx; /* 0x1718F351: mov dword ptr [eax + 8], ecx */
    MEM32(eax) = 0x17022140u; /* 0x1718F354: mov dword ptr [eax], 0x17022140 */
    edi = eax + 0xC; /* 0x1718F35A: lea edi, [eax + 0xc] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718F35D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718F35E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718F35F: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + 0x14); /* 0x1718F360: mov esi, dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0x1C); /* 0x1718F363: mov ecx, dword ptr [ebp + 0x1c] */
    edi = eax + 0x18; /* 0x1718F366: lea edi, [eax + 0x18] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718F369: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718F36A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718F36B: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + 0x18); /* 0x1718F36C: mov esi, dword ptr [ebp + 0x18] */
    edi = eax + 0x24; /* 0x1718F36F: lea edi, [eax + 0x24] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718F372: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718F373: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718F374: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x1718F375: pop edi */
    MEM32(eax + 0x30) = ecx; /* 0x1718F376: mov dword ptr [eax + 0x30], ecx */
    esi = POP32_VAL(esp); /* 0x1718F379: pop esi */
    ebp = POP32_VAL(esp); /* 0x1718F37A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1718F37B: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1718F383(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718F383u);

L_1718F383:
    edi = edi; /* 0x1718F383: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718F385: push ebp */
    ebp = esp; /* 0x1718F386: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1718F388: sub esp, 0xc */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x8); /* 0x1718F38B: mov edx, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ecx + 0xC)); /* 0x1718F38E: fld dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x1718F391: push esi */
    esi = MEM32(ecx + 0x8); /* 0x1718F392: mov esi, dword ptr [ecx + 8] */
    eax = edx + edx * 2; /* 0x1718F395: lea eax, [edx + edx*2] */
    eax = esi + eax * 4; /* 0x1718F398: lea eax, [esi + eax*4] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x1718F39B: fmul dword ptr [eax] */
    PUSH32(esp, edi); /* 0x1718F39D: push edi */
    fp_push(*(float*)&MEM32(ecx + 0x24)); /* 0x1718F39E: fld dword ptr [ecx + 0x24] */
    esi = ebp + (-0xC); /* 0x1718F3A1: lea esi, [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x1718F3A4: fmul dword ptr [eax + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1718F3A7: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x18)); /* 0x1718F3A9: fld dword ptr [ecx + 0x18] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x1718F3AC: fmul dword ptr [eax + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1718F3AF: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1718F3B1: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ecx + 0x10)); /* 0x1718F3B4: fld dword ptr [ecx + 0x10] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x1718F3B7: fmul dword ptr [eax] */
    fp_push(*(float*)&MEM32(ecx + 0x28)); /* 0x1718F3B9: fld dword ptr [ecx + 0x28] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x1718F3BC: fmul dword ptr [eax + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1718F3BF: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x1C)); /* 0x1718F3C1: fld dword ptr [ecx + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x1718F3C4: fmul dword ptr [eax + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1718F3C7: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1718F3C9: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ecx + 0x14)); /* 0x1718F3CC: fld dword ptr [ecx + 0x14] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x1718F3CF: fmul dword ptr [eax] */
    fp_push(*(float*)&MEM32(ecx + 0x2C)); /* 0x1718F3D1: fld dword ptr [ecx + 0x2c] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x1718F3D4: fmul dword ptr [eax + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1718F3D7: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x20)); /* 0x1718F3D9: fld dword ptr [ecx + 0x20] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x1718F3DC: fmul dword ptr [eax + 4] */
    eax = ecx + 0x38; /* 0x1718F3DF: lea eax, [ecx + 0x38] */
    edi = eax; /* 0x1718F3E2: mov edi, eax */
    MEM32(ecx + 0x34) = edx; /* 0x1718F3E4: mov dword ptr [ecx + 0x34], edx */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1718F3E7: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x1718F3E9: fstp dword ptr [ebp - 4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718F3EC: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718F3ED: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718F3EE: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x1718F3EF: pop edi */
    esi = POP32_VAL(esp); /* 0x1718F3F0: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1718F3F1: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1718F3F2: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1718F3FA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718F3FAu);

L_1718F3FA:
    edi = edi; /* 0x1718F3FA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718F3FC: push ebp */
    ebp = esp; /* 0x1718F3FD: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1718F3FF: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ecx + 0x4); /* 0x1718F402: mov ecx, dword ptr [ecx + 4] */
    eax = eax + eax * 2; /* 0x1718F405: lea eax, [eax + eax*2] */
    eax = ecx + eax * 4; /* 0x1718F408: lea eax, [ecx + eax*4] */
    ebp = POP32_VAL(esp); /* 0x1718F40B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1718F40C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1718F414(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718F414u);

L_1718F414:
    edi = edi; /* 0x1718F414: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718F416: push ebp */
    ebp = esp; /* 0x1718F417: mov ebp, esp */
    edx = MEM32(ecx + 0x8); /* 0x1718F419: mov edx, dword ptr [ecx + 8] */
    ecx = MEM32(ebp + 0xC); /* 0x1718F41C: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x1718F41F: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1718F422: push esi */
    esi = MEM32(edx + ecx * 8); /* 0x1718F423: mov esi, dword ptr [edx + ecx*8] */
    MEM32(eax) = esi; /* 0x1718F426: mov dword ptr [eax], esi */
    ecx = MEM32(edx + ecx * 8 + 0x4); /* 0x1718F428: mov ecx, dword ptr [edx + ecx*8 + 4] */
    MEM32(eax + 0x4) = ecx; /* 0x1718F42C: mov dword ptr [eax + 4], ecx */
    esi = POP32_VAL(esp); /* 0x1718F42F: pop esi */
    ebp = POP32_VAL(esp); /* 0x1718F430: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1718F431: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1718F439(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718F439u);

L_1718F439:
    edi = edi; /* 0x1718F439: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718F43B: push ebp */
    ebp = esp; /* 0x1718F43C: mov ebp, esp */
    eax = MEM32(ecx + 0x8); /* 0x1718F43E: mov eax, dword ptr [ecx + 8] */
    ecx = MEM32(ecx + 0x4); /* 0x1718F441: mov ecx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x8); /* 0x1718F444: add eax, dword ptr [ebp + 8] */
    _flag_k = FK_ADD;
    ecx = MEM32(ecx + 0x9C); /* 0x1718F447: mov ecx, dword ptr [ecx + 0x9c] */
    ecx = MEM32(ecx); /* 0x1718F44D: mov ecx, dword ptr [ecx] */
    eax = eax + eax * 2; /* 0x1718F44F: lea eax, [eax + eax*2] */
    eax = ecx + eax * 4; /* 0x1718F452: lea eax, [ecx + eax*4] */
    ebp = POP32_VAL(esp); /* 0x1718F455: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1718F456: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1718F45E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718F45Eu);

L_1718F45E:
    edi = edi; /* 0x1718F45E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718F460: push ebp */
    ebp = esp; /* 0x1718F461: mov ebp, esp */
    eax = MEM32(ecx + 0x4); /* 0x1718F463: mov eax, dword ptr [ecx + 4] */
    eax = MEM32(eax + 0xA8); /* 0x1718F466: mov eax, dword ptr [eax + 0xa8] */
    edx = MEM32(eax); /* 0x1718F46C: mov edx, dword ptr [eax] */
    ecx = MEM32(ebp + 0xC); /* 0x1718F46E: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x1718F471: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1718F474: push esi */
    esi = MEM32(edx + ecx * 8); /* 0x1718F475: mov esi, dword ptr [edx + ecx*8] */
    MEM32(eax) = esi; /* 0x1718F478: mov dword ptr [eax], esi */
    ecx = MEM32(edx + ecx * 8 + 0x4); /* 0x1718F47A: mov ecx, dword ptr [edx + ecx*8 + 4] */
    MEM32(eax + 0x4) = ecx; /* 0x1718F47E: mov dword ptr [eax + 4], ecx */
    esi = POP32_VAL(esp); /* 0x1718F481: pop esi */
    ebp = POP32_VAL(esp); /* 0x1718F482: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1718F483: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1718F48B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718F48Bu);

L_1718F48B:
    edi = edi; /* 0x1718F48B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718F48D: push ebp */
    ebp = esp; /* 0x1718F48E: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1718F490: push ecx */
    PUSH32(esp, ebx); /* 0x1718F491: push ebx */
    PUSH32(esp, esi); /* 0x1718F492: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1718F493: mov esi, dword ptr [ebp + 0xc] */
    ebx = ecx; /* 0x1718F496: mov ebx, ecx */
    ecx = MEM32(ebx + 0x8); /* 0x1718F498: mov ecx, dword ptr [ebx + 8] */
    eax = MEM32(ecx); /* 0x1718F49B: mov eax, dword ptr [ecx] */
    PUSH32(esp, edi); /* 0x1718F49D: push edi */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x1718F49E: push dword ptr [esi + 4] */
    RECOMP_ICALL(MEM32(eax)); /* 0x1718F4A1: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(esi + 0x8)); /* 0x1718F4A3: fld dword ptr [esi + 8] */
    fp_push(*(float*)&MEM32(esi + 0xC)); /* 0x1718F4A6: fld dword ptr [esi + 0xc] */
    ecx = MEM32(eax); /* 0x1718F4A9: mov ecx, dword ptr [eax] */
    fp_push(_st[0]); /* 0x1718F4AB: fld st(0) */
    edx = MEM32(eax + 0x4); /* 0x1718F4AD: mov edx, dword ptr [eax + 4] */
    eax = MEM32(eax + 0x8); /* 0x1718F4B0: mov eax, dword ptr [eax + 8] */
    _st[0] += _st[2]; /* 0x1718F4B3: fadd st(2) */
    edi = eax + eax * 2; /* 0x1718F4B5: lea edi, [eax + eax*2] */
    eax = MEM32(ebx + 0x4); /* 0x1718F4B8: mov eax, dword ptr [ebx + 4] */
    _st[0] = (double)*(float*)ADDR(0x17001424) - _st[0]; /* 0x1718F4BB: fsubr dword ptr [0x17001424] */
    edx = edx + edx * 2; /* 0x1718F4C1: lea edx, [edx + edx*2] */
    ecx = ecx + ecx * 2; /* 0x1718F4C4: lea ecx, [ecx + ecx*2] */
    fp_push(_st[0]); /* 0x1718F4C7: fld st(0) */
    esi = eax + edi * 4; /* 0x1718F4C9: lea esi, [eax + edi*4] */
    _st[0] *= (double)*(float*)ADDR(eax + edi * 4 + 0x8); /* 0x1718F4CC: fmul dword ptr [eax + edi*4 + 8] */
    edi = POP32_VAL(esp); /* 0x1718F4D0: pop edi */
    fp_push(_st[2]); /* 0x1718F4D1: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(eax + edx * 4 + 0x8); /* 0x1718F4D3: fmul dword ptr [eax + edx*4 + 8] */
    edx = eax + edx * 4; /* 0x1718F4D7: lea edx, [eax + edx*4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1718F4DA: faddp st(1) */
    fp_push(_st[3]); /* 0x1718F4DC: fld st(3) */
    _st[0] *= (double)*(float*)ADDR(eax + ecx * 4 + 0x8); /* 0x1718F4DE: fmul dword ptr [eax + ecx*4 + 8] */
    eax = eax + ecx * 4; /* 0x1718F4E2: lea eax, [eax + ecx*4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1718F4E5: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x1718F4E7: fstp dword ptr [ebp - 4] */
    fp_push(_st[2]); /* 0x1718F4EA: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x1718F4EC: fmul dword ptr [eax + 4] */
    fp_push(_st[2]); /* 0x1718F4EF: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x1718F4F1: fmul dword ptr [edx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1718F4F4: faddp st(1) */
    fp_push(_st[1]); /* 0x1718F4F6: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(esi + 0x4); /* 0x1718F4F8: fmul dword ptr [esi + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1718F4FB: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x1718F4FD: fstp dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0xC); /* 0x1718F500: mov ecx, dword ptr [ebp + 0xc] */
    fp_push(_st[2]); /* 0x1718F503: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x1718F505: fmul dword ptr [eax] */
    eax = MEM32(ebp + 0x8); /* 0x1718F507: mov eax, dword ptr [ebp + 8] */
    fp_push(_st[1]); /* 0x1718F50A: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(esi); /* 0x1718F50C: fmul dword ptr [esi] */
    esi = POP32_VAL(esp); /* 0x1718F50E: pop esi */
    ebx = POP32_VAL(esp); /* 0x1718F50F: pop ebx */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1718F510: faddp st(1) */
    fp_push(_st[2]); /* 0x1718F512: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x1718F514: fmul dword ptr [edx] */
    MEM32(eax + 0x4) = ecx; /* 0x1718F516: mov dword ptr [eax + 4], ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x1718F519: mov ecx, dword ptr [ebp - 4] */
    MEM32(eax + 0x8) = ecx; /* 0x1718F51C: mov dword ptr [eax + 8], ecx */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1718F51F: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1718F521: fstp dword ptr [eax] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718F523: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718F525: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718F527: fstp st(0) */
    fp_push(1.0); /* 0x1718F529: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x1718F52B: fstp dword ptr [eax + 0xc] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1718F52E: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1718F52F: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1718F537(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718F537u);

L_1718F537:
    edi = edi; /* 0x1718F537: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718F539: push ebp */
    ebp = esp; /* 0x1718F53A: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1718F53C: push esi */
    esi = ecx; /* 0x1718F53D: mov esi, ecx */
    RECOMP_CALL(sub_1718F55D); /* 0x1718F53F: call 0x1718f55d */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1718F544: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718F551; /* 0x1718F548: je 0x1718f551 */
L_1718F54A:
    PUSH32(esp, esi); /* 0x1718F54A: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x1718F54B: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1718F550: pop ecx */
L_1718F551:
    eax = esi; /* 0x1718F551: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1718F553: pop esi */
    ebp = POP32_VAL(esp); /* 0x1718F554: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1718F555: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1718F55D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718F55Du);

L_1718F55D:
    eax = 0x1721C5B2u; /* 0x1718F55D: mov eax, 0x1721c5b2 */
    RECOMP_CALL(sub_1721B168); /* 0x1718F562: call 0x1721b168 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x1718F567: push ecx */
    PUSH32(esp, esi); /* 0x1718F568: push esi */
    esi = ecx; /* 0x1718F569: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x1718F56B: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi) = 0x17022158u; /* 0x1718F56E: mov dword ptr [esi], 0x17022158 */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x1718F574: push dword ptr [esi + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1718F577: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1721B010); /* 0x1718F57B: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1718F580: pop ecx */
    ecx = MEM32(ebp + (-0xC)); /* 0x1718F581: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(esi) = 0x17022124u; /* 0x1718F584: mov dword ptr [esi], 0x17022124 */
    esi = POP32_VAL(esp); /* 0x1718F58A: pop esi */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1718F58B: mov dword ptr fs:[0], ecx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1718F592: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1718F593: ret  */
    RECOMP_REGS_OUT();
}

void sub_1718F599(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718F599u);

L_1718F599:
    edi = edi; /* 0x1718F599: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718F59B: push ebp */
    ebp = esp; /* 0x1718F59C: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1718F59E: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1718F5A1: push esi */
    esi = ecx; /* 0x1718F5A2: mov esi, ecx */
    ecx = MEM32(ebp + 0x14); /* 0x1718F5A4: mov ecx, dword ptr [ebp + 0x14] */
    MEM32(esi + 0x4) = eax; /* 0x1718F5A7: mov dword ptr [esi + 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x1718F5AA: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x8) = eax; /* 0x1718F5AD: mov dword ptr [esi + 8], eax */
    eax = MEM32(ebp + 0x10); /* 0x1718F5B0: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, ecx); /* 0x1718F5B3: push ecx */
    MEM32(esi + 0x10) = ecx; /* 0x1718F5B4: mov dword ptr [esi + 0x10], ecx */
    PUSH32(esp, eax); /* 0x1718F5B7: push eax */
    ecx = esi + 0x14; /* 0x1718F5B8: lea ecx, [esi + 0x14] */
    MEM32(esi) = 0x17022160u; /* 0x1718F5BB: mov dword ptr [esi], 0x17022160 */
    MEM32(esi + 0xC) = eax; /* 0x1718F5C1: mov dword ptr [esi + 0xc], eax */
    RECOMP_CALL(sub_17182CED); /* 0x1718F5C4: call 0x17182ced */
    RECOMP_FLAGS_IN();
    eax = esi; /* 0x1718F5C9: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1718F5CB: pop esi */
    ebp = POP32_VAL(esp); /* 0x1718F5CC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1718F5CD: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1718F5D5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718F5D5u);

L_1718F5D5:
    edi = edi; /* 0x1718F5D5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718F5D7: push ebp */
    ebp = esp; /* 0x1718F5D8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x1718F5DA: sub esp, 0x44 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1718F5DD: push ebx */
    PUSH32(esp, esi); /* 0x1718F5DE: push esi */
    PUSH32(esp, edi); /* 0x1718F5DF: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1718F5E0: mov edi, dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x1718F5E3: push dword ptr [edi + 4] */
    esi = ecx; /* 0x1718F5E6: mov esi, ecx */
    ecx = MEM32(esi + 0x8); /* 0x1718F5E8: mov ecx, dword ptr [esi + 8] */
    eax = MEM32(ecx); /* 0x1718F5EB: mov eax, dword ptr [ecx] */
    RECOMP_ICALL(MEM32(eax)); /* 0x1718F5ED: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(eax + 0x4); /* 0x1718F5EF: mov ecx, dword ptr [eax + 4] */
    ebx = MEM32(eax); /* 0x1718F5F2: mov ebx, dword ptr [eax] */
    eax = MEM32(eax + 0x8); /* 0x1718F5F4: mov eax, dword ptr [eax + 8] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x1718F5F7: mov dword ptr [ebp - 0x10], ecx */
    ecx = MEM32(edi + 0x8); /* 0x1718F5FA: mov ecx, dword ptr [edi + 8] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1718F5FD: mov dword ptr [ebp - 4], ecx */
    ecx = MEM32(edi + 0xC); /* 0x1718F600: mov ecx, dword ptr [edi + 0xc] */
    MEM32(ebp + 0xC) = ecx; /* 0x1718F603: mov dword ptr [ebp + 0xc], ecx */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1718F606: fld dword ptr [ebp + 0xc] */
    ecx = MEM32(esi + 0x8); /* 0x1718F609: mov ecx, dword ptr [esi + 8] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x4)); /* 0x1718F60C: fadd dword ptr [ebp - 4] */
    edx = MEM32(ecx); /* 0x1718F60F: mov edx, dword ptr [ecx] */
    PUSH32(esp, eax); /* 0x1718F611: push eax */
    eax = ebp + (-0x24); /* 0x1718F612: lea eax, [ebp - 0x24] */
    _st[0] = (double)*(float*)ADDR(0x17001424) - _st[0]; /* 0x1718F615: fsubr dword ptr [0x17001424] */
    PUSH32(esp, eax); /* 0x1718F61B: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1718F61C: fstp dword ptr [ebp - 8] */
    RECOMP_ICALL(MEM32(edx + 0x4)); /* 0x1718F61F: call dword ptr [edx + 4] */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x1718F622: fld dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x1718F625: push dword ptr [ebp - 0x10] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x1718F628: fmul dword ptr [eax] */
    ecx = MEM32(esi + 0x8); /* 0x1718F62A: mov ecx, dword ptr [esi + 8] */
    edx = ebp + (-0x2C); /* 0x1718F62D: lea edx, [ebp - 0x2c] */
    PUSH32(esp, edx); /* 0x1718F630: push edx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x1718F631: fstp dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x1718F634: fld dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x1718F637: fmul dword ptr [eax + 4] */
    eax = MEM32(ecx); /* 0x1718F63A: mov eax, dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x1718F63C: fstp dword ptr [ebp - 0x18] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1718F63F: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1718F642: fld dword ptr [ebp + 0xc] */
    ecx = MEM32(esi + 0x8); /* 0x1718F645: mov ecx, dword ptr [esi + 8] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x1718F648: fmul dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x1718F64A: push ebx */
    edx = ebp + (-0x3C); /* 0x1718F64B: lea edx, [ebp - 0x3c] */
    PUSH32(esp, edx); /* 0x1718F64E: push edx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x1718F64F: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1718F652: fld dword ptr [ebp + 0xc] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x1718F655: fmul dword ptr [eax + 4] */
    eax = MEM32(ecx); /* 0x1718F658: mov eax, dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x1718F65A: fstp dword ptr [ebp - 0x10] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1718F65D: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x1718F660: fld dword ptr [ebp - 4] */
    PUSH32(esp, ecx); /* 0x1718F663: push ecx */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x1718F664: fmul dword ptr [eax] */
    PUSH32(esp, ecx); /* 0x1718F666: push ecx */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x1718F667: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x1718F66A: fmul dword ptr [eax + 4] */
    fp_push(_st[1]); /* 0x1718F66D: fld st(1) */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x14)); /* 0x1718F66F: fadd dword ptr [ebp - 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1718F672: fstp dword ptr [ebp - 0xc] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x10)); /* 0x1718F675: fadd dword ptr [ebp - 0x10] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1718F678: fstp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x1718F67A: fld dword ptr [ebp - 0xc] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x1C)); /* 0x1718F67D: fadd dword ptr [ebp - 0x1c] */
    fp_push(_st[1]); /* 0x1718F680: fld st(1) */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x18)); /* 0x1718F682: fadd dword ptr [ebp - 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x1718F685: fstp dword ptr [ebp - 0x18] */
    _st[0] *= (double)*(float*)ADDR(esi + 0x1C); /* 0x1718F688: fmul dword ptr [esi + 0x1c] */
    _st[0] += (double)*(float*)ADDR(esi + 0x24); /* 0x1718F68B: fadd dword ptr [esi + 0x24] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1718F68E: fstp dword ptr [ebp - 0xc] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718F691: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x1718F693: fld dword ptr [ebp - 0x18] */
    _st[0] *= (double)*(float*)ADDR(esi + 0x20); /* 0x1718F696: fmul dword ptr [esi + 0x20] */
    _st[0] += (double)*(float*)ADDR(esi + 0x28); /* 0x1718F699: fadd dword ptr [esi + 0x28] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1718F69C: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x1718F69F: fld dword ptr [ebp - 0xc] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1718F6A2: fstp qword ptr [esp] */
    RECOMP_CALL(sub_1721B320); /* 0x1718F6A5: call 0x1721b320 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1721B050); /* 0x1718F6AA: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1718F6AF: mov edi, eax */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x1718F6B1: fld dword ptr [ebp - 8] */
    MEM32(ebp + 0xC) = edi; /* 0x1718F6B4: mov dword ptr [ebp + 0xc], edi */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1718F6B7: fstp qword ptr [esp] */
    RECOMP_CALL(sub_1721B320); /* 0x1718F6BA: call 0x1721b320 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1718F6BF: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1718F6C0: pop ecx */
    RECOMP_CALL(sub_1721B050); /* 0x1718F6C1: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    fp_push((double)(int32_t)MEM32(ebp + 0xC)); /* 0x1718F6C6: fild dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x1718F6C9: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x1718F6CB: mov dword ptr [ebp - 0x10], eax */
    _st[0] = (double)*(float*)ADDR(ebp + (-0xC)) - _st[0]; /* 0x1718F6CE: fsubr dword ptr [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x1718F6D1: fstp dword ptr [ebp + 0xc] */
    fp_push((double)(int32_t)MEM32(ebp + (-0x10))); /* 0x1718F6D4: fild dword ptr [ebp - 0x10] */
    _st[0] = (double)*(float*)ADDR(ebp + (-0x8)) - _st[0]; /* 0x1718F6D7: fsubr dword ptr [ebp - 8] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1718F6E3; /* 0x1718F6DA: jge 0x1718f6e3 */
L_1718F6DC:
    fp_push(0.0); /* 0x1718F6DC: fldz  */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1718F6DE: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x1718F6E0: fstp dword ptr [ebp + 0xc] */
L_1718F6E3:
    ecx = MEM32(esi + 0x14); /* 0x1718F6E3: mov ecx, dword ptr [esi + 0x14] */
    edx = ecx + (-0x1); /* 0x1718F6E6: lea edx, [ecx - 1] */
    /* cmp edi, edx */ /* 0x1718F6E9: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1718F6F7; /* 0x1718F6EB: jl 0x1718f6f7 */
L_1718F6ED:
    edi = ecx + (-0x2); /* 0x1718F6ED: lea edi, [ecx - 2] */
    MEM32(ebp + 0xC) = 0x3F7D70A4u; /* 0x1718F6F0: mov dword ptr [ebp + 0xc], 0x3f7d70a4 */
L_1718F6F7:
    /* test eax, eax */ /* 0x1718F6F7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1718F701; /* 0x1718F6F9: jge 0x1718f701 */
L_1718F6FB:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718F6FB: fstp st(0) */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1718F6FD: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(0.0); /* 0x1718F6FF: fldz  */
L_1718F701:
    ecx = MEM32(esi + 0x18); /* 0x1718F701: mov ecx, dword ptr [esi + 0x18] */
    edx = ecx + (-0x1); /* 0x1718F704: lea edx, [ecx - 1] */
    /* cmp eax, edx */ /* 0x1718F707: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1718F716; /* 0x1718F709: jl 0x1718f716 */
L_1718F70B:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718F70B: fstp st(0) */
    eax = ecx + (-0x2); /* 0x1718F70D: lea eax, [ecx - 2] */
    fp_push(*(float*)&MEM32(0x170018D0)); /* 0x1718F710: fld dword ptr [0x170018d0] */
L_1718F716:
    edx = MEM32(esi + 0xC); /* 0x1718F716: mov edx, dword ptr [esi + 0xc] */
    fp_push(1.0); /* 0x1718F719: fld1  */
    _st[0] -= (double)*(float*)ADDR(ebp + 0xC); /* 0x1718F71B: fsub dword ptr [ebp + 0xc] */
    ecx = edx; /* 0x1718F71E: mov ecx, edx */
    fp_push(1.0); /* 0x1718F720: fld1  */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x1718F722: imul ecx, eax */
    _st[0] -= _st[2]; /* 0x1718F725: fsub st(2) */
    fp_push(_st[0]); /* 0x1718F727: fld st(0) */
    _st[0] *= _st[2]; /* 0x1718F729: fmul st(2) */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x1718F72B: add ecx, edi */
    _flag_k = FK_ADD;
    eax = ecx + ecx * 2; /* 0x1718F72D: lea eax, [ecx + ecx*2] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x1718F730: fstp dword ptr [ebp - 0x44] */
    ecx = edx + edx * 2; /* 0x1718F733: lea ecx, [edx + edx*2] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1718F736: add ecx, eax */
    _flag_k = FK_ADD;
    _st[0] *= (double)*(float*)ADDR(ebp + 0xC); /* 0x1718F738: fmul dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x2C)) = ecx; /* 0x1718F73B: mov dword ptr [ebp - 0x2c], ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 3; /* 0x1718F73E: add ecx, 3 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x28)) = ecx; /* 0x1718F741: mov dword ptr [ebp - 0x28], ecx */
    ecx = MEM32(esi + 0x4); /* 0x1718F744: mov ecx, dword ptr [esi + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x1718F747: fstp dword ptr [ebp - 0x40] */
    edx = eax + 0x3; /* 0x1718F74A: lea edx, [eax + 3] */
    _st[0] *= _st[1]; /* 0x1718F74D: fmul st(1) */
    PUSH32(esp, 4); /* 0x1718F74F: push 4 */
    MEM32(ebp + (-0x34)) = eax; /* 0x1718F751: mov dword ptr [ebp - 0x34], eax */
    MEM32(ebp + (-0x30)) = edx; /* 0x1718F754: mov dword ptr [ebp - 0x30], edx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x1718F757: fstp dword ptr [ebp - 0x3c] */
    esi = ecx; /* 0x1718F75A: mov esi, ecx */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1718F75C: fld dword ptr [ebp + 0xc] */
    _st[0] *= _st[1]; /* 0x1718F75F: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x1718F761: fstp dword ptr [ebp - 0x38] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718F764: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x1718F766: fld dword ptr [ebp - 0x44] */
    _st[0] *= (double)*(float*)ADDR(ecx + eax * 4); /* 0x1718F769: fmul dword ptr [ecx + eax*4] */
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x1718F76C: fld dword ptr [ebp - 0x44] */
    _st[0] *= (double)*(float*)ADDR(ecx + eax * 4 + 0x4); /* 0x1718F76F: fmul dword ptr [ecx + eax*4 + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x1718F773: fld dword ptr [ebp - 0x44] */
    _st[0] *= (double)*(float*)ADDR(ecx + eax * 4 + 0x8); /* 0x1718F776: fmul dword ptr [ecx + eax*4 + 8] */
    eax = POP32_VAL(esp); /* 0x1718F77A: pop eax */
L_1718F77B:
    ecx = MEM32(ebp + eax + (-0x34)); /* 0x1718F77B: mov ecx, dword ptr [ebp + eax - 0x34] */
    fp_push(*(float*)&MEM32(ebp + eax + (-0x44))); /* 0x1718F77F: fld dword ptr [ebp + eax - 0x44] */
    fp_push(_st[0]); /* 0x1718F783: fld st(0) */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x1718F785: add eax, 4 */
    _flag_k = FK_ADD;
    /* cmp eax, 0x10u */ /* 0x1718F788: cmp eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _st[0] *= (double)*(float*)ADDR(esi + ecx * 4); /* 0x1718F78B: fmul dword ptr [esi + ecx*4] */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x1718F78E: faddp st(4) */
    fp_push(_st[0]); /* 0x1718F790: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(esi + ecx * 4 + 0x4); /* 0x1718F792: fmul dword ptr [esi + ecx*4 + 4] */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x1718F796: faddp st(3) */
    _st[0] *= (double)*(float*)ADDR(esi + ecx * 4 + 0x8); /* 0x1718F798: fmul dword ptr [esi + ecx*4 + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1718F79C: faddp st(1) */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718F77B; /* 0x1718F79E: jb 0x1718f77b */
L_1718F7A0:
    eax = MEM32(ebp + 0x8); /* 0x1718F7A0: mov eax, dword ptr [ebp + 8] */
    fp_push(_st[2]); /* 0x1718F7A3: fld st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1718F7A5: fstp dword ptr [eax] */
    edi = POP32_VAL(esp); /* 0x1718F7A7: pop edi */
    fp_push(_st[1]); /* 0x1718F7A8: fld st(1) */
    esi = POP32_VAL(esp); /* 0x1718F7AA: pop esi */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x1718F7AB: fstp dword ptr [eax + 4] */
    ebx = POP32_VAL(esp); /* 0x1718F7AE: pop ebx */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x1718F7AF: fstp dword ptr [eax + 8] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718F7B2: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718F7B4: fstp st(0) */
    fp_push(1.0); /* 0x1718F7B6: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x1718F7B8: fstp dword ptr [eax + 0xc] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1718F7BB: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1718F7BC: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1718F7C4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718F7C4u);

L_1718F7C4:
    edi = edi; /* 0x1718F7C4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718F7C6: push ebp */
    ebp = esp; /* 0x1718F7C7: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1718F7C9: push esi */
    esi = ecx; /* 0x1718F7CA: mov esi, ecx */
    RECOMP_CALL(sub_1718F7EA); /* 0x1718F7CC: call 0x1718f7ea */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x1718F7D1: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718F7DE; /* 0x1718F7D5: je 0x1718f7de */
L_1718F7D7:
    PUSH32(esp, esi); /* 0x1718F7D7: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x1718F7D8: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1718F7DD: pop ecx */
L_1718F7DE:
    eax = esi; /* 0x1718F7DE: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1718F7E0: pop esi */
    ebp = POP32_VAL(esp); /* 0x1718F7E1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1718F7E2: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1718F7EA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718F7EAu);

L_1718F7EA:
    eax = 0x1721C5B2u; /* 0x1718F7EA: mov eax, 0x1721c5b2 */
    RECOMP_CALL(sub_1721B168); /* 0x1718F7EF: call 0x1721b168 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ecx); /* 0x1718F7F4: push ecx */
    PUSH32(esp, esi); /* 0x1718F7F5: push esi */
    esi = ecx; /* 0x1718F7F6: mov esi, ecx */
    MEM32(ebp + (-0x10)) = esi; /* 0x1718F7F8: mov dword ptr [ebp - 0x10], esi */
    MEM32(esi) = 0x17022160u; /* 0x1718F7FB: mov dword ptr [esi], 0x17022160 */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x1718F801: push dword ptr [esi + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1718F804: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_CALL(sub_1721B010); /* 0x1718F808: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1718F80D: pop ecx */
    ecx = MEM32(ebp + (-0xC)); /* 0x1718F80E: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(esi) = 0x17022124u; /* 0x1718F811: mov dword ptr [esi], 0x17022124 */
    esi = POP32_VAL(esp); /* 0x1718F817: pop esi */
    MEM32(FS_BASE + (0)) = ecx; /* 0x1718F818: mov dword ptr fs:[0], ecx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1718F81F: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x1718F820: ret  */
    RECOMP_REGS_OUT();
}

void sub_1718F826(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718F826u);

L_1718F826:
    edi = edi; /* 0x1718F826: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718F828: push ebp */
    ebp = esp; /* 0x1718F829: mov ebp, esp */
    eax = ecx; /* 0x1718F82B: mov eax, ecx */
    ecx = MEM32(ebp + 0x8); /* 0x1718F82D: mov ecx, dword ptr [ebp + 8] */
    MEM32(eax + 0x4) = ecx; /* 0x1718F830: mov dword ptr [eax + 4], ecx */
    ecx = MEM32(ebp + 0xC); /* 0x1718F833: mov ecx, dword ptr [ebp + 0xc] */
    MEM32(eax) = 0x1702212Cu; /* 0x1718F836: mov dword ptr [eax], 0x1702212c */
    MEM32(eax + 0x8) = ecx; /* 0x1718F83C: mov dword ptr [eax + 8], ecx */
    ebp = POP32_VAL(esp); /* 0x1718F83F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1718F840: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1718F848(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718F848u);

L_1718F848:
    edi = edi; /* 0x1718F848: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718F84A: push ebp */
    ebp = esp; /* 0x1718F84B: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1718F84D: sub esp, 0xc */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x8); /* 0x1718F850: mov edx, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ecx + 0xC)); /* 0x1718F853: fld dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x1718F856: push esi */
    esi = MEM32(ecx + 0x8); /* 0x1718F857: mov esi, dword ptr [ecx + 8] */
    eax = edx + edx * 2; /* 0x1718F85A: lea eax, [edx + edx*2] */
    eax = esi + eax * 4; /* 0x1718F85D: lea eax, [esi + eax*4] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x1718F860: fmul dword ptr [eax] */
    PUSH32(esp, edi); /* 0x1718F862: push edi */
    fp_push(*(float*)&MEM32(ecx + 0x24)); /* 0x1718F863: fld dword ptr [ecx + 0x24] */
    esi = ebp + (-0xC); /* 0x1718F866: lea esi, [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x1718F869: fmul dword ptr [eax + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1718F86C: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x18)); /* 0x1718F86E: fld dword ptr [ecx + 0x18] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x1718F871: fmul dword ptr [eax + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1718F874: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1718F876: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ecx + 0x10)); /* 0x1718F879: fld dword ptr [ecx + 0x10] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x1718F87C: fmul dword ptr [eax] */
    fp_push(*(float*)&MEM32(ecx + 0x28)); /* 0x1718F87E: fld dword ptr [ecx + 0x28] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x1718F881: fmul dword ptr [eax + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1718F884: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x1C)); /* 0x1718F886: fld dword ptr [ecx + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x1718F889: fmul dword ptr [eax + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1718F88C: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1718F88E: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ecx + 0x14)); /* 0x1718F891: fld dword ptr [ecx + 0x14] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x1718F894: fmul dword ptr [eax] */
    fp_push(*(float*)&MEM32(ecx + 0x2C)); /* 0x1718F896: fld dword ptr [ecx + 0x2c] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x1718F899: fmul dword ptr [eax + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1718F89C: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x20)); /* 0x1718F89E: fld dword ptr [ecx + 0x20] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x1718F8A1: fmul dword ptr [eax + 4] */
    eax = ecx + 0x34; /* 0x1718F8A4: lea eax, [ecx + 0x34] */
    edi = eax; /* 0x1718F8A7: mov edi, eax */
    MEM32(ecx + 0x30) = edx; /* 0x1718F8A9: mov dword ptr [ecx + 0x30], edx */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1718F8AC: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x1718F8AE: fstp dword ptr [ebp - 4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718F8B1: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718F8B2: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1718F8B3: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x1718F8B4: pop edi */
    esi = POP32_VAL(esp); /* 0x1718F8B5: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1718F8B6: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1718F8B7: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1718F8BF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718F8BFu);

L_1718F8BF:
    edi = edi; /* 0x1718F8BF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718F8C1: push ebp */
    ebp = esp; /* 0x1718F8C2: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1718F8C4: push dword ptr [ebp + 0xc] */
    edx = ecx; /* 0x1718F8C7: mov edx, ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1718F8C9: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1718F826); /* 0x1718F8CC: call 0x1718f826 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x24); /* 0x1718F8D1: mov eax, dword ptr [ebp + 0x24] */
    ecx = MEM32(ebp + 0x14); /* 0x1718F8D4: mov ecx, dword ptr [ebp + 0x14] */
    MEM32(edx + 0x40) = eax; /* 0x1718F8D7: mov dword ptr [edx + 0x40], eax */
    eax = MEM32(ebp + 0x1C); /* 0x1718F8DA: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(edx + 0x44) = eax; /* 0x1718F8DD: mov dword ptr [edx + 0x44], eax */
    eax = MEM32(ebp + 0x18); /* 0x1718F8E0: mov eax, dword ptr [ebp + 0x18] */
    MEM32(edx + 0x48) = eax; /* 0x1718F8E3: mov dword ptr [edx + 0x48], eax */
    eax = MEM32(ebp + 0x20); /* 0x1718F8E6: mov eax, dword ptr [ebp + 0x20] */
    MEM32(edx + 0x4C) = eax; /* 0x1718F8E9: mov dword ptr [edx + 0x4c], eax */
    eax = MEM32(ebp + 0x10); /* 0x1718F8EC: mov eax, dword ptr [ebp + 0x10] */
    MEM32(edx + 0x50) = eax; /* 0x1718F8EF: mov dword ptr [edx + 0x50], eax */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x1718F8F2: imul eax, ecx */
    MEM32(edx + 0x58) = eax; /* 0x1718F8F5: mov dword ptr [edx + 0x58], eax */
    MEM32(edx) = 0x17022168u; /* 0x1718F8F8: mov dword ptr [edx], 0x17022168 */
    MEM32(edx + 0x54) = ecx; /* 0x1718F8FE: mov dword ptr [edx + 0x54], ecx */
    eax = edx; /* 0x1718F901: mov eax, edx */
    ebp = POP32_VAL(esp); /* 0x1718F903: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x1718F904: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_1718F90C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718F90Cu);

L_1718F90C:
    edi = edi; /* 0x1718F90C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718F90E: push ebp */
    ebp = esp; /* 0x1718F90F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x1718F911: sub esp, 0x30 */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x8); /* 0x1718F914: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(edx + 0x4); /* 0x1718F917: mov eax, dword ptr [edx + 4] */
    PUSH32(esp, ebx); /* 0x1718F91A: push ebx */
    PUSH32(esp, esi); /* 0x1718F91B: push esi */
    esi = ecx; /* 0x1718F91C: mov esi, ecx */
    ecx = MEM32(esi + 0x4C); /* 0x1718F91E: mov ecx, dword ptr [esi + 0x4c] */
    eax = eax + eax * 2; /* 0x1718F921: lea eax, [eax + eax*2] */
    eax = ecx + eax * 4; /* 0x1718F924: lea eax, [ecx + eax*4] */
    ecx = MEM32(esi + 0x58); /* 0x1718F927: mov ecx, dword ptr [esi + 0x58] */
    ebx = MEM32(eax); /* 0x1718F92A: mov ebx, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x1718F92C: push edi */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx); /* 0x1718F92D: imul ebx, ecx */
    edi = MEM32(eax + 0x4); /* 0x1718F930: mov edi, dword ptr [eax + 4] */
    edi = (uint32_t)((int32_t)edi * (int32_t)ecx); /* 0x1718F933: imul edi, ecx */
    MEM32(ebp + (-0x10)) = edi; /* 0x1718F936: mov dword ptr [ebp - 0x10], edi */
    edi = MEM32(eax + 0x8); /* 0x1718F939: mov edi, dword ptr [eax + 8] */
    eax = MEM32(edx + 0x8); /* 0x1718F93C: mov eax, dword ptr [edx + 8] */
    edi = (uint32_t)((int32_t)edi * (int32_t)ecx); /* 0x1718F93F: imul edi, ecx */
    ecx = MEM32(esi + 0x40); /* 0x1718F942: mov ecx, dword ptr [esi + 0x40] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1718F945: mov dword ptr [ebp - 8], eax */
    eax = MEM32(edx + 0xC); /* 0x1718F948: mov eax, dword ptr [edx + 0xc] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1718F94B: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ecx); /* 0x1718F94E: mov eax, dword ptr [ecx] */
    PUSH32(esp, edx); /* 0x1718F950: push edx */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x1718F951: fld dword ptr [ebp - 0xc] */
    edx = ebp + (-0x30); /* 0x1718F954: lea edx, [ebp - 0x30] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x8)); /* 0x1718F957: fadd dword ptr [ebp - 8] */
    PUSH32(esp, edx); /* 0x1718F95A: push edx */
    _st[0] = (double)*(float*)ADDR(0x17001424) - _st[0]; /* 0x1718F95B: fsubr dword ptr [0x17001424] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x1718F961: fstp dword ptr [ebp - 0x14] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1718F964: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x30)); /* 0x1718F967: mov eax, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1718F96A: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = eax; /* 0x1718F96E: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(ebp + (-0x2C)); /* 0x1718F971: mov eax, dword ptr [ebp - 0x2c] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1718F974: mov dword ptr [ebp - 0x1c], eax */
    eax = MEM32(ebp + (-0x28)); /* 0x1718F977: mov eax, dword ptr [ebp - 0x28] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1718F97A: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(esi + 0x50); /* 0x1718F97D: mov eax, dword ptr [esi + 0x50] */
L_1718F980:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x1718F980: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x1718F984: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718F9BF; /* 0x1718F986: jbe 0x1718f9bf */
L_1718F988:
    eax = MEM32(ebp + (-0x4)); /* 0x1718F988: mov eax, dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + eax * 4 + (-0x20))); /* 0x1718F98B: fld dword ptr [ebp + eax*4 - 0x20] */
L_1718F98F:
    eax = MEM32(esi + 0x50); /* 0x1718F98F: mov eax, dword ptr [esi + 0x50] */
    fp_push(_st[0]); /* 0x1718F992: fld st(0) */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x4))); /* 0x1718F994: imul eax, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + 0x8); /* 0x1718F998: mov ecx, dword ptr [ebp + 8] */
    edx = MEM32(esi + 0x44); /* 0x1718F99B: mov edx, dword ptr [esi + 0x44] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1718F99E: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(esi + 0x48); /* 0x1718F9A0: mov ecx, dword ptr [esi + 0x48] */
    ecx = ecx + eax * 4; /* 0x1718F9A3: lea ecx, [ecx + eax*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x1718F9A6: add eax, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x1718F9A8: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    _st[0] *= (double)*(float*)ADDR(edx + eax * 4); /* 0x1718F9AB: fmul dword ptr [edx + eax*4] */
    eax = MEM32(ebp + 0x8); /* 0x1718F9AE: mov eax, dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x1718F9B1: fmul dword ptr [ebp - 8] */
    _st[0] += (double)*(float*)ADDR(ecx); /* 0x1718F9B4: fadd dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x1718F9B6: fstp dword ptr [ecx] */
    /* cmp eax, MEM32(esi + 0x50) */ /* 0x1718F9B8: cmp eax, dword ptr [esi + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x50));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718F98F; /* 0x1718F9BB: jb 0x1718f98f */
L_1718F9BD:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718F9BD: fstp st(0) */
L_1718F9BF:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x1718F9BF: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x50), 0 */ /* 0x1718F9C3: cmp dword ptr [esi + 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1718FA03; /* 0x1718F9C7: jbe 0x1718fa03 */
L_1718F9C9:
    eax = MEM32(ebp + (-0x4)); /* 0x1718F9C9: mov eax, dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + eax * 4 + (-0x20))); /* 0x1718F9CC: fld dword ptr [ebp + eax*4 - 0x20] */
L_1718F9D0:
    eax = MEM32(esi + 0x50); /* 0x1718F9D0: mov eax, dword ptr [esi + 0x50] */
    fp_push(_st[0]); /* 0x1718F9D3: fld st(0) */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x4))); /* 0x1718F9D5: imul eax, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + 0x8); /* 0x1718F9D9: mov ecx, dword ptr [ebp + 8] */
    edx = MEM32(ebp + (-0x10)); /* 0x1718F9DC: mov edx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1718F9DF: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(esi + 0x48); /* 0x1718F9E1: mov ecx, dword ptr [esi + 0x48] */
    ecx = ecx + eax * 4; /* 0x1718F9E4: lea ecx, [ecx + eax*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1718F9E7: add eax, edx */
    _flag_k = FK_ADD;
    edx = MEM32(esi + 0x44); /* 0x1718F9E9: mov edx, dword ptr [esi + 0x44] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x1718F9EC: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    _st[0] *= (double)*(float*)ADDR(edx + eax * 4); /* 0x1718F9EF: fmul dword ptr [edx + eax*4] */
    eax = MEM32(ebp + 0x8); /* 0x1718F9F2: mov eax, dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x1718F9F5: fmul dword ptr [ebp - 0xc] */
    _st[0] += (double)*(float*)ADDR(ecx); /* 0x1718F9F8: fadd dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x1718F9FA: fstp dword ptr [ecx] */
    /* cmp eax, MEM32(esi + 0x50) */ /* 0x1718F9FC: cmp eax, dword ptr [esi + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x50));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718F9D0; /* 0x1718F9FF: jb 0x1718f9d0 */
L_1718FA01:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718FA01: fstp st(0) */
L_1718FA03:
    eax = MEM32(esi + 0x50); /* 0x1718FA03: mov eax, dword ptr [esi + 0x50] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x1718FA06: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x1718FA0A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718FA45; /* 0x1718FA0C: jbe 0x1718fa45 */
L_1718FA0E:
    eax = MEM32(ebp + (-0x4)); /* 0x1718FA0E: mov eax, dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + eax * 4 + (-0x20))); /* 0x1718FA11: fld dword ptr [ebp + eax*4 - 0x20] */
L_1718FA15:
    eax = MEM32(esi + 0x50); /* 0x1718FA15: mov eax, dword ptr [esi + 0x50] */
    fp_push(_st[0]); /* 0x1718FA18: fld st(0) */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x4))); /* 0x1718FA1A: imul eax, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + 0x8); /* 0x1718FA1E: mov ecx, dword ptr [ebp + 8] */
    edx = MEM32(esi + 0x44); /* 0x1718FA21: mov edx, dword ptr [esi + 0x44] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1718FA24: add eax, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(esi + 0x48); /* 0x1718FA26: mov ecx, dword ptr [esi + 0x48] */
    ecx = ecx + eax * 4; /* 0x1718FA29: lea ecx, [ecx + eax*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x1718FA2C: add eax, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x1718FA2E: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    _st[0] *= (double)*(float*)ADDR(edx + eax * 4); /* 0x1718FA31: fmul dword ptr [edx + eax*4] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x14)); /* 0x1718FA34: fmul dword ptr [ebp - 0x14] */
    _st[0] += (double)*(float*)ADDR(ecx); /* 0x1718FA37: fadd dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x1718FA39: fstp dword ptr [ecx] */
    eax = MEM32(esi + 0x50); /* 0x1718FA3B: mov eax, dword ptr [esi + 0x50] */
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x1718FA3E: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718FA15; /* 0x1718FA41: jb 0x1718fa15 */
L_1718FA43:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718FA43: fstp st(0) */
L_1718FA45:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x1718FA45: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + (-0x4)), 3 */ /* 0x1718FA48: cmp dword ptr [ebp - 4], 3 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718F980; /* 0x1718FA4C: jb 0x1718f980 */
L_1718FA52:
    edi = POP32_VAL(esp); /* 0x1718FA52: pop edi */
    esi = POP32_VAL(esp); /* 0x1718FA53: pop esi */
    ebx = POP32_VAL(esp); /* 0x1718FA54: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1718FA55: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1718FA56: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1718FA5E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718FA5Eu);

L_1718FA5E:
    edi = edi; /* 0x1718FA5E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718FA60: push ebp */
    ebp = esp; /* 0x1718FA61: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1718FA63: push esi */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x1718FA64: push dword ptr [ebp + 0x24] */
    esi = ecx; /* 0x1718FA67: mov esi, ecx */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1718FA69: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1718FA6C: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1718FA6F: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1718FA72: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1718FA75: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1718FA78: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1718FA7B: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1718F8BF); /* 0x1718FA7E: call 0x1718f8bf */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x1702217Cu; /* 0x1718FA83: mov dword ptr [esi], 0x1702217c */
    eax = esi; /* 0x1718FA89: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1718FA8B: pop esi */
    ebp = POP32_VAL(esp); /* 0x1718FA8C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x1718FA8D: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_1718FA95(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718FA95u);

L_1718FA95:
    edi = edi; /* 0x1718FA95: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718FA97: push ebp */
    ebp = esp; /* 0x1718FA98: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x1718FA9A: sub esp, 0x30 */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x8); /* 0x1718FA9D: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(edx + 0x4); /* 0x1718FAA0: mov eax, dword ptr [edx + 4] */
    PUSH32(esp, ebx); /* 0x1718FAA3: push ebx */
    PUSH32(esp, esi); /* 0x1718FAA4: push esi */
    eax = eax + eax * 2; /* 0x1718FAA5: lea eax, [eax + eax*2] */
    esi = ecx; /* 0x1718FAA8: mov esi, ecx */
    ecx = MEM32(esi + 0x4C); /* 0x1718FAAA: mov ecx, dword ptr [esi + 0x4c] */
    eax = ecx + eax * 4; /* 0x1718FAAD: lea eax, [ecx + eax*4] */
    ebx = MEM32(eax + 0x4); /* 0x1718FAB0: mov ebx, dword ptr [eax + 4] */
    ecx = MEM32(esi + 0x58); /* 0x1718FAB3: mov ecx, dword ptr [esi + 0x58] */
    PUSH32(esp, edi); /* 0x1718FAB6: push edi */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx); /* 0x1718FAB7: imul ebx, ecx */
    edi = MEM32(eax); /* 0x1718FABA: mov edi, dword ptr [eax] */
    eax = MEM32(eax + 0x8); /* 0x1718FABC: mov eax, dword ptr [eax + 8] */
    edi = (uint32_t)((int32_t)edi * (int32_t)ecx); /* 0x1718FABF: imul edi, ecx */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x1718FAC2: imul eax, ecx */
    ecx = MEM32(esi + 0x40); /* 0x1718FAC5: mov ecx, dword ptr [esi + 0x40] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1718FAC8: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(edx + 0x8); /* 0x1718FACB: mov eax, dword ptr [edx + 8] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1718FACE: mov dword ptr [ebp - 8], eax */
    eax = MEM32(edx + 0xC); /* 0x1718FAD1: mov eax, dword ptr [edx + 0xc] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1718FAD4: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ecx); /* 0x1718FAD7: mov eax, dword ptr [ecx] */
    PUSH32(esp, edx); /* 0x1718FAD9: push edx */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x1718FADA: fld dword ptr [ebp - 0xc] */
    edx = ebp + (-0x30); /* 0x1718FADD: lea edx, [ebp - 0x30] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x8)); /* 0x1718FAE0: fadd dword ptr [ebp - 8] */
    PUSH32(esp, edx); /* 0x1718FAE3: push edx */
    _st[0] = (double)*(float*)ADDR(0x17001424) - _st[0]; /* 0x1718FAE4: fsubr dword ptr [0x17001424] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x1718FAEA: fstp dword ptr [ebp - 0x14] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1718FAED: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x30)); /* 0x1718FAF0: mov eax, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1718FAF3: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = eax; /* 0x1718FAF7: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(ebp + (-0x2C)); /* 0x1718FAFA: mov eax, dword ptr [ebp - 0x2c] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1718FAFD: mov dword ptr [ebp - 0x1c], eax */
    eax = MEM32(ebp + (-0x28)); /* 0x1718FB00: mov eax, dword ptr [ebp - 0x28] */
    MEM32(ebp + (-0x18)) = eax; /* 0x1718FB03: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(esi + 0x50); /* 0x1718FB06: mov eax, dword ptr [esi + 0x50] */
L_1718FB09:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x1718FB09: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x1718FB0D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718FB4C; /* 0x1718FB0F: jbe 0x1718fb4c */
L_1718FB11:
    eax = MEM32(ebp + (-0x4)); /* 0x1718FB11: mov eax, dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + eax * 4 + (-0x20))); /* 0x1718FB14: fld dword ptr [ebp + eax*4 - 0x20] */
    ecx = edi; /* 0x1718FB18: mov ecx, edi */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x1718FB1A: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x1718FB1A: shl ecx, 2 */
L_1718FB1D:
    eax = MEM32(esi + 0x50); /* 0x1718FB1D: mov eax, dword ptr [esi + 0x50] */
    fp_push(_st[0]); /* 0x1718FB20: fld st(0) */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x4))); /* 0x1718FB22: imul eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x8); /* 0x1718FB26: add eax, dword ptr [ebp + 8] */
    _flag_k = FK_ADD;
    edx = MEM32(esi + 0x48); /* 0x1718FB29: mov edx, dword ptr [esi + 0x48] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x1718FB2C: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    eax = edx + eax * 4; /* 0x1718FB2F: lea eax, [edx + eax*4] */
    edx = MEM32(esi + 0x44); /* 0x1718FB32: mov edx, dword ptr [esi + 0x44] */
    _st[0] *= (double)*(float*)ADDR(edx + ecx); /* 0x1718FB35: fmul dword ptr [edx + ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1718FB38: add ecx, 4 */
    _flag_k = FK_ADD;
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x1718FB3B: fmul dword ptr [ebp - 8] */
    _st[0] += (double)*(float*)ADDR(eax); /* 0x1718FB3E: fadd dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1718FB40: fstp dword ptr [eax] */
    eax = MEM32(ebp + 0x8); /* 0x1718FB42: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(esi + 0x50) */ /* 0x1718FB45: cmp eax, dword ptr [esi + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x50));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718FB1D; /* 0x1718FB48: jb 0x1718fb1d */
L_1718FB4A:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718FB4A: fstp st(0) */
L_1718FB4C:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x1718FB4C: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x50), 0 */ /* 0x1718FB50: cmp dword ptr [esi + 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1718FB91; /* 0x1718FB54: jbe 0x1718fb91 */
L_1718FB56:
    eax = MEM32(ebp + (-0x4)); /* 0x1718FB56: mov eax, dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + eax * 4 + (-0x20))); /* 0x1718FB59: fld dword ptr [ebp + eax*4 - 0x20] */
    ecx = ebx; /* 0x1718FB5D: mov ecx, ebx */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x1718FB5F: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x1718FB5F: shl ecx, 2 */
L_1718FB62:
    eax = MEM32(esi + 0x50); /* 0x1718FB62: mov eax, dword ptr [esi + 0x50] */
    fp_push(_st[0]); /* 0x1718FB65: fld st(0) */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x4))); /* 0x1718FB67: imul eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x8); /* 0x1718FB6B: add eax, dword ptr [ebp + 8] */
    _flag_k = FK_ADD;
    edx = MEM32(esi + 0x48); /* 0x1718FB6E: mov edx, dword ptr [esi + 0x48] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x1718FB71: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    eax = edx + eax * 4; /* 0x1718FB74: lea eax, [edx + eax*4] */
    edx = MEM32(esi + 0x44); /* 0x1718FB77: mov edx, dword ptr [esi + 0x44] */
    _st[0] *= (double)*(float*)ADDR(ecx + edx); /* 0x1718FB7A: fmul dword ptr [ecx + edx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1718FB7D: add ecx, 4 */
    _flag_k = FK_ADD;
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x1718FB80: fmul dword ptr [ebp - 0xc] */
    _st[0] += (double)*(float*)ADDR(eax); /* 0x1718FB83: fadd dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1718FB85: fstp dword ptr [eax] */
    eax = MEM32(ebp + 0x8); /* 0x1718FB87: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, MEM32(esi + 0x50) */ /* 0x1718FB8A: cmp eax, dword ptr [esi + 0x50] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x50));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718FB62; /* 0x1718FB8D: jb 0x1718fb62 */
L_1718FB8F:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718FB8F: fstp st(0) */
L_1718FB91:
    eax = MEM32(esi + 0x50); /* 0x1718FB91: mov eax, dword ptr [esi + 0x50] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x1718FB94: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x1718FB98: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718FBD8; /* 0x1718FB9A: jbe 0x1718fbd8 */
L_1718FB9C:
    eax = MEM32(ebp + (-0x4)); /* 0x1718FB9C: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + (-0x10)); /* 0x1718FB9F: mov ecx, dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + eax * 4 + (-0x20))); /* 0x1718FBA2: fld dword ptr [ebp + eax*4 - 0x20] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x1718FBA6: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x1718FBA6: shl ecx, 2 */
L_1718FBA9:
    eax = MEM32(esi + 0x50); /* 0x1718FBA9: mov eax, dword ptr [esi + 0x50] */
    fp_push(_st[0]); /* 0x1718FBAC: fld st(0) */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x4))); /* 0x1718FBAE: imul eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x8); /* 0x1718FBB2: add eax, dword ptr [ebp + 8] */
    _flag_k = FK_ADD;
    edx = MEM32(esi + 0x48); /* 0x1718FBB5: mov edx, dword ptr [esi + 0x48] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x1718FBB8: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    eax = edx + eax * 4; /* 0x1718FBBB: lea eax, [edx + eax*4] */
    edx = MEM32(esi + 0x44); /* 0x1718FBBE: mov edx, dword ptr [esi + 0x44] */
    _st[0] *= (double)*(float*)ADDR(ecx + edx); /* 0x1718FBC1: fmul dword ptr [ecx + edx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1718FBC4: add ecx, 4 */
    _flag_k = FK_ADD;
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x14)); /* 0x1718FBC7: fmul dword ptr [ebp - 0x14] */
    _st[0] += (double)*(float*)ADDR(eax); /* 0x1718FBCA: fadd dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1718FBCC: fstp dword ptr [eax] */
    eax = MEM32(esi + 0x50); /* 0x1718FBCE: mov eax, dword ptr [esi + 0x50] */
    /* cmp MEM32(ebp + 0x8), eax */ /* 0x1718FBD1: cmp dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718FBA9; /* 0x1718FBD4: jb 0x1718fba9 */
L_1718FBD6:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718FBD6: fstp st(0) */
L_1718FBD8:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x1718FBD8: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + (-0x4)), 3 */ /* 0x1718FBDB: cmp dword ptr [ebp - 4], 3 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718FB09; /* 0x1718FBDF: jb 0x1718fb09 */
L_1718FBE5:
    edi = POP32_VAL(esp); /* 0x1718FBE5: pop edi */
    esi = POP32_VAL(esp); /* 0x1718FBE6: pop esi */
    ebx = POP32_VAL(esp); /* 0x1718FBE7: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1718FBE8: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1718FBE9: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1718FBF1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718FBF1u);

L_1718FBF1:
    edi = edi; /* 0x1718FBF1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718FBF3: push ebp */
    ebp = esp; /* 0x1718FBF4: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1718FBF6: push esi */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x1718FBF7: push dword ptr [ebp + 0x24] */
    esi = ecx; /* 0x1718FBFA: mov esi, ecx */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x1718FBFC: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x1718FBFF: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1718FC02: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1718FC05: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1718FC08: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1718FC0B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1718FC0E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1718F8BF); /* 0x1718FC11: call 0x1718f8bf */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x17022190u; /* 0x1718FC16: mov dword ptr [esi], 0x17022190 */
    eax = esi; /* 0x1718FC1C: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1718FC1E: pop esi */
    ebp = POP32_VAL(esp); /* 0x1718FC1F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x1718FC20: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_1718FC28(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718FC28u);

L_1718FC28:
    edi = edi; /* 0x1718FC28: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718FC2A: push ebp */
    ebp = esp; /* 0x1718FC2B: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x1718FC2D: sub esp, 0x1c */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x8); /* 0x1718FC30: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(edx + 0x4); /* 0x1718FC33: mov eax, dword ptr [edx + 4] */
    PUSH32(esp, ebx); /* 0x1718FC36: push ebx */
    PUSH32(esp, esi); /* 0x1718FC37: push esi */
    eax = eax + eax * 2; /* 0x1718FC38: lea eax, [eax + eax*2] */
    esi = ecx; /* 0x1718FC3B: mov esi, ecx */
    ecx = MEM32(esi + 0x4C); /* 0x1718FC3D: mov ecx, dword ptr [esi + 0x4c] */
    eax = ecx + eax * 4; /* 0x1718FC40: lea eax, [ecx + eax*4] */
    ebx = MEM32(eax + 0x4); /* 0x1718FC43: mov ebx, dword ptr [eax + 4] */
    ecx = MEM32(esi + 0x58); /* 0x1718FC46: mov ecx, dword ptr [esi + 0x58] */
    PUSH32(esp, edi); /* 0x1718FC49: push edi */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx); /* 0x1718FC4A: imul ebx, ecx */
    edi = MEM32(eax); /* 0x1718FC4D: mov edi, dword ptr [eax] */
    eax = MEM32(eax + 0x8); /* 0x1718FC4F: mov eax, dword ptr [eax + 8] */
    edi = (uint32_t)((int32_t)edi * (int32_t)ecx); /* 0x1718FC52: imul edi, ecx */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x1718FC55: imul eax, ecx */
    ecx = MEM32(esi + 0x40); /* 0x1718FC58: mov ecx, dword ptr [esi + 0x40] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1718FC5B: mov dword ptr [ebp - 8], eax */
    eax = MEM32(edx + 0x8); /* 0x1718FC5E: mov eax, dword ptr [edx + 8] */
    MEM32(ebp + 0x8) = eax; /* 0x1718FC61: mov dword ptr [ebp + 8], eax */
    eax = MEM32(edx + 0xC); /* 0x1718FC64: mov eax, dword ptr [edx + 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1718FC67: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ecx); /* 0x1718FC6A: mov eax, dword ptr [ecx] */
    PUSH32(esp, edx); /* 0x1718FC6C: push edx */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x1718FC6D: fld dword ptr [ebp - 4] */
    edx = ebp + (-0x1C); /* 0x1718FC70: lea edx, [ebp - 0x1c] */
    _st[0] += (double)*(float*)ADDR(ebp + 0x8); /* 0x1718FC73: fadd dword ptr [ebp + 8] */
    PUSH32(esp, edx); /* 0x1718FC76: push edx */
    _st[0] = (double)*(float*)ADDR(0x17001424) - _st[0]; /* 0x1718FC77: fsubr dword ptr [0x17001424] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1718FC7D: fstp dword ptr [ebp - 0xc] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1718FC80: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x1718FC83: fld dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1718FC86: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x50), ecx */ /* 0x1718FC88: cmp dword ptr [esi + 0x50], ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1718FCB5; /* 0x1718FC8B: jbe 0x1718fcb5 */
L_1718FC8D:
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x1718FC8D: fld dword ptr [ebp - 0x1c] */
    edx = edi; /* 0x1718FC90: mov edx, edi */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x1718FC92: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x1718FC92: shl edx, 2 */
L_1718FC95:
    edi = MEM32(esi + 0x44); /* 0x1718FC95: mov edi, dword ptr [esi + 0x44] */
    fp_push(_st[0]); /* 0x1718FC98: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(edi + edx); /* 0x1718FC9A: fmul dword ptr [edi + edx] */
    eax = MEM32(esi + 0x48); /* 0x1718FC9D: mov eax, dword ptr [esi + 0x48] */
    eax = eax + ecx * 4; /* 0x1718FCA0: lea eax, [eax + ecx*4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1718FCA3: inc ecx */
    _flag_k = FK_INC;
    _st[0] *= (double)*(float*)ADDR(ebp + 0x8); /* 0x1718FCA4: fmul dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x1718FCA7: add edx, 4 */
    _flag_k = FK_ADD;
    _st[0] += (double)*(float*)ADDR(eax); /* 0x1718FCAA: fadd dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1718FCAC: fstp dword ptr [eax] */
    /* cmp ecx, MEM32(esi + 0x50) */ /* 0x1718FCAE: cmp ecx, dword ptr [esi + 0x50] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x50));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718FC95; /* 0x1718FCB1: jb 0x1718fc95 */
L_1718FCB3:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718FCB3: fstp st(0) */
L_1718FCB5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1718FCB5: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x50), ecx */ /* 0x1718FCB7: cmp dword ptr [esi + 0x50], ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1718FCDD; /* 0x1718FCBA: jbe 0x1718fcdd */
L_1718FCBC:
    if (2u) _cf = (((ebx) >> 30) & 1u); /* 0x1718FCBC: shl ebx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ebx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 2u; /* 0x1718FCBC: shl ebx, 2 */
L_1718FCBF:
    edx = MEM32(esi + 0x44); /* 0x1718FCBF: mov edx, dword ptr [esi + 0x44] */
    fp_push(_st[0]); /* 0x1718FCC2: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ebx + edx); /* 0x1718FCC4: fmul dword ptr [ebx + edx] */
    eax = MEM32(esi + 0x48); /* 0x1718FCC7: mov eax, dword ptr [esi + 0x48] */
    eax = eax + ecx * 4; /* 0x1718FCCA: lea eax, [eax + ecx*4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1718FCCD: inc ecx */
    _flag_k = FK_INC;
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x1718FCCE: fmul dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x1718FCD1: add ebx, 4 */
    _flag_k = FK_ADD;
    _st[0] += (double)*(float*)ADDR(eax); /* 0x1718FCD4: fadd dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1718FCD6: fstp dword ptr [eax] */
    /* cmp ecx, MEM32(esi + 0x50) */ /* 0x1718FCD8: cmp ecx, dword ptr [esi + 0x50] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x50));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718FCBF; /* 0x1718FCDB: jb 0x1718fcbf */
L_1718FCDD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1718FCDD: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x50), ecx */ /* 0x1718FCDF: cmp dword ptr [esi + 0x50], ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1718FD08; /* 0x1718FCE2: jbe 0x1718fd08 */
L_1718FCE4:
    edx = MEM32(ebp + (-0x8)); /* 0x1718FCE4: mov edx, dword ptr [ebp - 8] */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x1718FCE7: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x1718FCE7: shl edx, 2 */
L_1718FCEA:
    edi = MEM32(esi + 0x44); /* 0x1718FCEA: mov edi, dword ptr [esi + 0x44] */
    fp_push(_st[0]); /* 0x1718FCED: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(edx + edi); /* 0x1718FCEF: fmul dword ptr [edx + edi] */
    eax = MEM32(esi + 0x48); /* 0x1718FCF2: mov eax, dword ptr [esi + 0x48] */
    eax = eax + ecx * 4; /* 0x1718FCF5: lea eax, [eax + ecx*4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1718FCF8: inc ecx */
    _flag_k = FK_INC;
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x1718FCF9: fmul dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x1718FCFC: add edx, 4 */
    _flag_k = FK_ADD;
    _st[0] += (double)*(float*)ADDR(eax); /* 0x1718FCFF: fadd dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1718FD01: fstp dword ptr [eax] */
    /* cmp ecx, MEM32(esi + 0x50) */ /* 0x1718FD03: cmp ecx, dword ptr [esi + 0x50] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x50));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718FCEA; /* 0x1718FD06: jb 0x1718fcea */
L_1718FD08:
    edi = POP32_VAL(esp); /* 0x1718FD08: pop edi */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718FD09: fstp st(0) */
    esi = POP32_VAL(esp); /* 0x1718FD0B: pop esi */
    ebx = POP32_VAL(esp); /* 0x1718FD0C: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1718FD0D: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1718FD0E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1718FD16(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718FD16u);

L_1718FD16:
    edi = edi; /* 0x1718FD16: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718FD18: push ebp */
    ebp = esp; /* 0x1718FD19: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1718FD1B: push dword ptr [ebp + 0xc] */
    edx = ecx; /* 0x1718FD1E: mov edx, ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1718FD20: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1718F826); /* 0x1718FD23: call 0x1718f826 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x24); /* 0x1718FD28: mov eax, dword ptr [ebp + 0x24] */
    ecx = MEM32(ebp + 0x14); /* 0x1718FD2B: mov ecx, dword ptr [ebp + 0x14] */
    MEM32(edx + 0x40) = eax; /* 0x1718FD2E: mov dword ptr [edx + 0x40], eax */
    eax = MEM32(ebp + 0x1C); /* 0x1718FD31: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(edx + 0x44) = eax; /* 0x1718FD34: mov dword ptr [edx + 0x44], eax */
    eax = MEM32(ebp + 0x18); /* 0x1718FD37: mov eax, dword ptr [ebp + 0x18] */
    MEM32(edx + 0x48) = eax; /* 0x1718FD3A: mov dword ptr [edx + 0x48], eax */
    eax = MEM32(ebp + 0x20); /* 0x1718FD3D: mov eax, dword ptr [ebp + 0x20] */
    MEM32(edx + 0x4C) = eax; /* 0x1718FD40: mov dword ptr [edx + 0x4c], eax */
    eax = MEM32(ebp + 0x10); /* 0x1718FD43: mov eax, dword ptr [ebp + 0x10] */
    MEM32(edx + 0x50) = eax; /* 0x1718FD46: mov dword ptr [edx + 0x50], eax */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x1718FD49: imul eax, ecx */
    MEM32(edx + 0x58) = eax; /* 0x1718FD4C: mov dword ptr [edx + 0x58], eax */
    MEM32(edx) = 0x170221A4u; /* 0x1718FD4F: mov dword ptr [edx], 0x170221a4 */
    MEM32(edx + 0x54) = ecx; /* 0x1718FD55: mov dword ptr [edx + 0x54], ecx */
    eax = edx; /* 0x1718FD58: mov eax, edx */
    ebp = POP32_VAL(esp); /* 0x1718FD5A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x1718FD5B: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_1718FD63(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718FD63u);

L_1718FD63:
    edi = edi; /* 0x1718FD63: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718FD65: push ebp */
    ebp = esp; /* 0x1718FD66: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x4Cu; /* 0x1718FD68: sub esp, 0x4c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1718FD6B: push ebx */
    PUSH32(esp, esi); /* 0x1718FD6C: push esi */
    PUSH32(esp, edi); /* 0x1718FD6D: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1718FD6E: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0x8); /* 0x1718FD71: mov eax, dword ptr [edi + 8] */
    MEM32(ebp + (-0x24)) = eax; /* 0x1718FD74: mov dword ptr [ebp - 0x24], eax */
    eax = MEM32(edi + 0xC); /* 0x1718FD77: mov eax, dword ptr [edi + 0xc] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1718FD7A: mov dword ptr [ebp - 0x20], eax */
    eax = ebp + (-0x3C); /* 0x1718FD7D: lea eax, [ebp - 0x3c] */
    PUSH32(esp, eax); /* 0x1718FD80: push eax */
    eax = ebp + (-0x1C); /* 0x1718FD81: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x1718FD84: push eax */
    eax = ebp + (-0x24); /* 0x1718FD85: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x1718FD88: push eax */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x1718FD89: push dword ptr [edi + 4] */
    esi = ecx; /* 0x1718FD8C: mov esi, ecx */
    ecx = MEM32(esi + 0x4C); /* 0x1718FD8E: mov ecx, dword ptr [esi + 0x4c] */
    RECOMP_CALL(sub_17187140); /* 0x1718FD91: call 0x17187140 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x1718FD96: fld dword ptr [ebp - 0x18] */
    eax = MEM32(esi + 0x58); /* 0x1718FD99: mov eax, dword ptr [esi + 0x58] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x1C)); /* 0x1718FD9C: fadd dword ptr [ebp - 0x1c] */
    ebx = eax; /* 0x1718FD9F: mov ebx, eax */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(ebp + (-0x3C))); /* 0x1718FDA1: imul ebx, dword ptr [ebp - 0x3c] */
    ecx = eax; /* 0x1718FDA5: mov ecx, eax */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x34))); /* 0x1718FDA7: imul eax, dword ptr [ebp - 0x34] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + (-0x38))); /* 0x1718FDAB: imul ecx, dword ptr [ebp - 0x38] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1718FDAF: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ebp + (-0x1C)); /* 0x1718FDB2: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1718FDB5: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + (-0x18)); /* 0x1718FDB8: mov eax, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1718FDBB: mov dword ptr [ebp - 8], ecx */
    ecx = MEM32(esi + 0x40); /* 0x1718FDBE: mov ecx, dword ptr [esi + 0x40] */
    PUSH32(esp, edi); /* 0x1718FDC1: push edi */
    _st[0] = (double)*(float*)ADDR(0x17001424) - _st[0]; /* 0x1718FDC2: fsubr dword ptr [0x17001424] */
    edx = ebp + (-0x4C); /* 0x1718FDC8: lea edx, [ebp - 0x4c] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1718FDCB: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ecx); /* 0x1718FDCE: mov eax, dword ptr [ecx] */
    PUSH32(esp, edx); /* 0x1718FDD0: push edx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x1718FDD1: fstp dword ptr [ebp - 0x14] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1718FDD4: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4C)); /* 0x1718FDD7: mov eax, dword ptr [ebp - 0x4c] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x1718FDDA: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x30)) = eax; /* 0x1718FDDE: mov dword ptr [ebp - 0x30], eax */
    eax = MEM32(ebp + (-0x48)); /* 0x1718FDE1: mov eax, dword ptr [ebp - 0x48] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x1718FDE4: mov dword ptr [ebp - 0x2c], eax */
    eax = MEM32(ebp + (-0x44)); /* 0x1718FDE7: mov eax, dword ptr [ebp - 0x44] */
    MEM32(ebp + (-0x28)) = eax; /* 0x1718FDEA: mov dword ptr [ebp - 0x28], eax */
    eax = MEM32(esi + 0x50); /* 0x1718FDED: mov eax, dword ptr [esi + 0x50] */
L_1718FDF0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1718FDF0: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x1718FDF2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718FE25; /* 0x1718FDF4: jbe 0x1718fe25 */
L_1718FDF6:
    eax = MEM32(ebp + 0x8); /* 0x1718FDF6: mov eax, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + eax * 4 + (-0x30))); /* 0x1718FDF9: fld dword ptr [ebp + eax*4 - 0x30] */
L_1718FDFD:
    eax = MEM32(esi + 0x50); /* 0x1718FDFD: mov eax, dword ptr [esi + 0x50] */
    fp_push(_st[0]); /* 0x1718FE00: fld st(0) */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x8)); /* 0x1718FE02: imul eax, dword ptr [ebp + 8] */
    ecx = MEM32(esi + 0x48); /* 0x1718FE06: mov ecx, dword ptr [esi + 0x48] */
    edi = MEM32(esi + 0x44); /* 0x1718FE09: mov edi, dword ptr [esi + 0x44] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1718FE0C: add eax, edx */
    _flag_k = FK_ADD;
    ecx = ecx + eax * 4; /* 0x1718FE0E: lea ecx, [ecx + eax*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x1718FE11: add eax, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1718FE13: inc edx */
    _flag_k = FK_INC;
    _st[0] *= (double)*(float*)ADDR(edi + eax * 4); /* 0x1718FE14: fmul dword ptr [edi + eax*4] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x1718FE17: fmul dword ptr [ebp - 4] */
    _st[0] += (double)*(float*)ADDR(ecx); /* 0x1718FE1A: fadd dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x1718FE1C: fstp dword ptr [ecx] */
    /* cmp edx, MEM32(esi + 0x50) */ /* 0x1718FE1E: cmp edx, dword ptr [esi + 0x50] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x50));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718FDFD; /* 0x1718FE21: jb 0x1718fdfd */
L_1718FE23:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718FE23: fstp st(0) */
L_1718FE25:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1718FE25: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x50), edx */ /* 0x1718FE27: cmp dword ptr [esi + 0x50], edx */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1718FE5E; /* 0x1718FE2A: jbe 0x1718fe5e */
L_1718FE2C:
    eax = MEM32(ebp + 0x8); /* 0x1718FE2C: mov eax, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + eax * 4 + (-0x30))); /* 0x1718FE2F: fld dword ptr [ebp + eax*4 - 0x30] */
L_1718FE33:
    eax = MEM32(esi + 0x50); /* 0x1718FE33: mov eax, dword ptr [esi + 0x50] */
    fp_push(_st[0]); /* 0x1718FE36: fld st(0) */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x8)); /* 0x1718FE38: imul eax, dword ptr [ebp + 8] */
    ecx = MEM32(esi + 0x48); /* 0x1718FE3C: mov ecx, dword ptr [esi + 0x48] */
    edi = MEM32(ebp + (-0x8)); /* 0x1718FE3F: mov edi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1718FE42: add eax, edx */
    _flag_k = FK_ADD;
    ecx = ecx + eax * 4; /* 0x1718FE44: lea ecx, [ecx + eax*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x1718FE47: add eax, edi */
    _flag_k = FK_ADD;
    edi = MEM32(esi + 0x44); /* 0x1718FE49: mov edi, dword ptr [esi + 0x44] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1718FE4C: inc edx */
    _flag_k = FK_INC;
    _st[0] *= (double)*(float*)ADDR(edi + eax * 4); /* 0x1718FE4D: fmul dword ptr [edi + eax*4] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x1718FE50: fmul dword ptr [ebp - 0xc] */
    _st[0] += (double)*(float*)ADDR(ecx); /* 0x1718FE53: fadd dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x1718FE55: fstp dword ptr [ecx] */
    /* cmp edx, MEM32(esi + 0x50) */ /* 0x1718FE57: cmp edx, dword ptr [esi + 0x50] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x50));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718FE33; /* 0x1718FE5A: jb 0x1718fe33 */
L_1718FE5C:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718FE5C: fstp st(0) */
L_1718FE5E:
    eax = MEM32(esi + 0x50); /* 0x1718FE5E: mov eax, dword ptr [esi + 0x50] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1718FE61: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x1718FE63: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1718FE9B; /* 0x1718FE65: jbe 0x1718fe9b */
L_1718FE67:
    eax = MEM32(ebp + 0x8); /* 0x1718FE67: mov eax, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + eax * 4 + (-0x30))); /* 0x1718FE6A: fld dword ptr [ebp + eax*4 - 0x30] */
L_1718FE6E:
    eax = MEM32(esi + 0x50); /* 0x1718FE6E: mov eax, dword ptr [esi + 0x50] */
    fp_push(_st[0]); /* 0x1718FE71: fld st(0) */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x8)); /* 0x1718FE73: imul eax, dword ptr [ebp + 8] */
    ecx = MEM32(esi + 0x48); /* 0x1718FE77: mov ecx, dword ptr [esi + 0x48] */
    edi = MEM32(ebp + (-0x10)); /* 0x1718FE7A: mov edi, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x1718FE7D: add eax, edx */
    _flag_k = FK_ADD;
    ecx = ecx + eax * 4; /* 0x1718FE7F: lea ecx, [ecx + eax*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x1718FE82: add eax, edi */
    _flag_k = FK_ADD;
    edi = MEM32(esi + 0x44); /* 0x1718FE84: mov edi, dword ptr [esi + 0x44] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1718FE87: inc edx */
    _flag_k = FK_INC;
    _st[0] *= (double)*(float*)ADDR(edi + eax * 4); /* 0x1718FE88: fmul dword ptr [edi + eax*4] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x14)); /* 0x1718FE8B: fmul dword ptr [ebp - 0x14] */
    _st[0] += (double)*(float*)ADDR(ecx); /* 0x1718FE8E: fadd dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x1718FE90: fstp dword ptr [ecx] */
    eax = MEM32(esi + 0x50); /* 0x1718FE92: mov eax, dword ptr [esi + 0x50] */
    /* cmp edx, eax */ /* 0x1718FE95: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718FE6E; /* 0x1718FE97: jb 0x1718fe6e */
L_1718FE99:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718FE99: fstp st(0) */
L_1718FE9B:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 1; /* 0x1718FE9B: inc dword ptr [ebp + 8] */
    _flag_k = FK_INC;
    /* cmp MEM32(ebp + 0x8), 3 */ /* 0x1718FE9E: cmp dword ptr [ebp + 8], 3 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718FDF0; /* 0x1718FEA2: jb 0x1718fdf0 */
L_1718FEA8:
    edi = POP32_VAL(esp); /* 0x1718FEA8: pop edi */
    esi = POP32_VAL(esp); /* 0x1718FEA9: pop esi */
    ebx = POP32_VAL(esp); /* 0x1718FEAA: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1718FEAB: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1718FEAC: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1718FEB4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718FEB4u);

L_1718FEB4:
    edi = edi; /* 0x1718FEB4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718FEB6: push ebp */
    ebp = esp; /* 0x1718FEB7: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1718FEB9: push dword ptr [ebp + 0xc] */
    edx = ecx; /* 0x1718FEBC: mov edx, ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1718FEBE: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1718F826); /* 0x1718FEC1: call 0x1718f826 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x24); /* 0x1718FEC6: mov eax, dword ptr [ebp + 0x24] */
    ecx = MEM32(ebp + 0x14); /* 0x1718FEC9: mov ecx, dword ptr [ebp + 0x14] */
    MEM32(edx + 0x40) = eax; /* 0x1718FECC: mov dword ptr [edx + 0x40], eax */
    eax = MEM32(ebp + 0x1C); /* 0x1718FECF: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(edx + 0x44) = eax; /* 0x1718FED2: mov dword ptr [edx + 0x44], eax */
    eax = MEM32(ebp + 0x18); /* 0x1718FED5: mov eax, dword ptr [ebp + 0x18] */
    MEM32(edx + 0x48) = eax; /* 0x1718FED8: mov dword ptr [edx + 0x48], eax */
    eax = MEM32(ebp + 0x20); /* 0x1718FEDB: mov eax, dword ptr [ebp + 0x20] */
    MEM32(edx + 0x4C) = eax; /* 0x1718FEDE: mov dword ptr [edx + 0x4c], eax */
    eax = MEM32(ebp + 0x10); /* 0x1718FEE1: mov eax, dword ptr [ebp + 0x10] */
    MEM32(edx + 0x50) = eax; /* 0x1718FEE4: mov dword ptr [edx + 0x50], eax */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x1718FEE7: imul eax, ecx */
    MEM32(edx + 0x58) = eax; /* 0x1718FEEA: mov dword ptr [edx + 0x58], eax */
    MEM32(edx) = 0x170221B8u; /* 0x1718FEED: mov dword ptr [edx], 0x170221b8 */
    MEM32(edx + 0x54) = ecx; /* 0x1718FEF3: mov dword ptr [edx + 0x54], ecx */
    eax = edx; /* 0x1718FEF6: mov eax, edx */
    ebp = POP32_VAL(esp); /* 0x1718FEF8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x1718FEF9: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_1718FF01(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1718FF01u);

L_1718FF01:
    edi = edi; /* 0x1718FF01: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1718FF03: push ebp */
    ebp = esp; /* 0x1718FF04: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x3Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x3Cu; /* 0x1718FF06: sub esp, 0x3c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x1718FF09: push ebx */
    PUSH32(esp, esi); /* 0x1718FF0A: push esi */
    PUSH32(esp, edi); /* 0x1718FF0B: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1718FF0C: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0x8); /* 0x1718FF0F: mov eax, dword ptr [edi + 8] */
    MEM32(ebp + (-0x20)) = eax; /* 0x1718FF12: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(edi + 0xC); /* 0x1718FF15: mov eax, dword ptr [edi + 0xc] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x1718FF18: mov dword ptr [ebp - 0x1c], eax */
    eax = ebp + (-0x2C); /* 0x1718FF1B: lea eax, [ebp - 0x2c] */
    PUSH32(esp, eax); /* 0x1718FF1E: push eax */
    eax = ebp + (-0x18); /* 0x1718FF1F: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x1718FF22: push eax */
    eax = ebp + (-0x20); /* 0x1718FF23: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1718FF26: push eax */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x1718FF27: push dword ptr [edi + 4] */
    esi = ecx; /* 0x1718FF2A: mov esi, ecx */
    ecx = MEM32(esi + 0x4C); /* 0x1718FF2C: mov ecx, dword ptr [esi + 0x4c] */
    RECOMP_CALL(sub_17187140); /* 0x1718FF2F: call 0x17187140 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x1718FF34: fld dword ptr [ebp - 0x14] */
    eax = MEM32(esi + 0x58); /* 0x1718FF37: mov eax, dword ptr [esi + 0x58] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x18)); /* 0x1718FF3A: fadd dword ptr [ebp - 0x18] */
    ebx = eax; /* 0x1718FF3D: mov ebx, eax */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(ebp + (-0x2C))); /* 0x1718FF3F: imul ebx, dword ptr [ebp - 0x2c] */
    ecx = eax; /* 0x1718FF43: mov ecx, eax */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x24))); /* 0x1718FF45: imul eax, dword ptr [ebp - 0x24] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + (-0x28))); /* 0x1718FF49: imul ecx, dword ptr [ebp - 0x28] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1718FF4D: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ebp + (-0x18)); /* 0x1718FF50: mov eax, dword ptr [ebp - 0x18] */
    MEM32(ebp + 0x8) = eax; /* 0x1718FF53: mov dword ptr [ebp + 8], eax */
    eax = MEM32(ebp + (-0x14)); /* 0x1718FF56: mov eax, dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1718FF59: mov dword ptr [ebp - 4], ecx */
    ecx = MEM32(esi + 0x40); /* 0x1718FF5C: mov ecx, dword ptr [esi + 0x40] */
    PUSH32(esp, edi); /* 0x1718FF5F: push edi */
    _st[0] = (double)*(float*)ADDR(0x17001424) - _st[0]; /* 0x1718FF60: fsubr dword ptr [0x17001424] */
    edx = ebp + (-0x3C); /* 0x1718FF66: lea edx, [ebp - 0x3c] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1718FF69: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ecx); /* 0x1718FF6C: mov eax, dword ptr [ecx] */
    PUSH32(esp, edx); /* 0x1718FF6E: push edx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x1718FF6F: fstp dword ptr [ebp - 0x10] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1718FF72: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x3C))); /* 0x1718FF75: fld dword ptr [ebp - 0x3c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1718FF78: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1718FF7A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x50), edi */ /* 0x1718FF7C: cmp dword ptr [esi + 0x50], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1718FFA9; /* 0x1718FF7F: jbe 0x1718ffa9 */
L_1718FF81:
    fp_push(*(float*)&MEM32(ebp + (-0x3C))); /* 0x1718FF81: fld dword ptr [ebp - 0x3c] */
    edx = ebx; /* 0x1718FF84: mov edx, ebx */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x1718FF86: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x1718FF86: shl edx, 2 */
L_1718FF89:
    ebx = MEM32(esi + 0x44); /* 0x1718FF89: mov ebx, dword ptr [esi + 0x44] */
    fp_push(_st[0]); /* 0x1718FF8C: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(edx + ebx); /* 0x1718FF8E: fmul dword ptr [edx + ebx] */
    eax = MEM32(esi + 0x48); /* 0x1718FF91: mov eax, dword ptr [esi + 0x48] */
    eax = eax + ecx * 4; /* 0x1718FF94: lea eax, [eax + ecx*4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1718FF97: inc ecx */
    _flag_k = FK_INC;
    _st[0] *= (double)*(float*)ADDR(ebp + 0x8); /* 0x1718FF98: fmul dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x1718FF9B: add edx, 4 */
    _flag_k = FK_ADD;
    _st[0] += (double)*(float*)ADDR(eax); /* 0x1718FF9E: fadd dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1718FFA0: fstp dword ptr [eax] */
    /* cmp ecx, MEM32(esi + 0x50) */ /* 0x1718FFA2: cmp ecx, dword ptr [esi + 0x50] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x50));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718FF89; /* 0x1718FFA5: jb 0x1718ff89 */
L_1718FFA7:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1718FFA7: fstp st(0) */
L_1718FFA9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1718FFA9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x50), edi */ /* 0x1718FFAB: cmp dword ptr [esi + 0x50], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1718FFD4; /* 0x1718FFAE: jbe 0x1718ffd4 */
L_1718FFB0:
    edx = MEM32(ebp + (-0x4)); /* 0x1718FFB0: mov edx, dword ptr [ebp - 4] */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x1718FFB3: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x1718FFB3: shl edx, 2 */
L_1718FFB6:
    ebx = MEM32(esi + 0x44); /* 0x1718FFB6: mov ebx, dword ptr [esi + 0x44] */
    fp_push(_st[0]); /* 0x1718FFB9: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(edx + ebx); /* 0x1718FFBB: fmul dword ptr [edx + ebx] */
    eax = MEM32(esi + 0x48); /* 0x1718FFBE: mov eax, dword ptr [esi + 0x48] */
    eax = eax + ecx * 4; /* 0x1718FFC1: lea eax, [eax + ecx*4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1718FFC4: inc ecx */
    _flag_k = FK_INC;
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x1718FFC5: fmul dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x1718FFC8: add edx, 4 */
    _flag_k = FK_ADD;
    _st[0] += (double)*(float*)ADDR(eax); /* 0x1718FFCB: fadd dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1718FFCD: fstp dword ptr [eax] */
    /* cmp ecx, MEM32(esi + 0x50) */ /* 0x1718FFCF: cmp ecx, dword ptr [esi + 0x50] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x50));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718FFB6; /* 0x1718FFD2: jb 0x1718ffb6 */
L_1718FFD4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1718FFD4: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x50), edi */ /* 0x1718FFD6: cmp dword ptr [esi + 0x50], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1718FFFF; /* 0x1718FFD9: jbe 0x1718ffff */
L_1718FFDB:
    edx = MEM32(ebp + (-0xC)); /* 0x1718FFDB: mov edx, dword ptr [ebp - 0xc] */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x1718FFDE: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x1718FFDE: shl edx, 2 */
L_1718FFE1:
    edi = MEM32(esi + 0x44); /* 0x1718FFE1: mov edi, dword ptr [esi + 0x44] */
    fp_push(_st[0]); /* 0x1718FFE4: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(edx + edi); /* 0x1718FFE6: fmul dword ptr [edx + edi] */
    eax = MEM32(esi + 0x48); /* 0x1718FFE9: mov eax, dword ptr [esi + 0x48] */
    eax = eax + ecx * 4; /* 0x1718FFEC: lea eax, [eax + ecx*4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1718FFEF: inc ecx */
    _flag_k = FK_INC;
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x10)); /* 0x1718FFF0: fmul dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x1718FFF3: add edx, 4 */
    _flag_k = FK_ADD;
    _st[0] += (double)*(float*)ADDR(eax); /* 0x1718FFF6: fadd dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1718FFF8: fstp dword ptr [eax] */
    /* cmp ecx, MEM32(esi + 0x50) */ /* 0x1718FFFA: cmp ecx, dword ptr [esi + 0x50] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x50));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1718FFE1; /* 0x1718FFFD: jb 0x1718ffe1 */
L_1718FFFF:
    edi = POP32_VAL(esp); /* 0x1718FFFF: pop edi */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17190000: fstp st(0) */
    esi = POP32_VAL(esp); /* 0x17190002: pop esi */
    ebx = POP32_VAL(esp); /* 0x17190003: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17190004: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17190005: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1719000D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1719000Du);

L_1719000D:
    MEM32(ecx) = 0x1702212Cu; /* 0x1719000D: mov dword ptr [ecx], 0x1702212c */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17190013: ret  */
    RECOMP_REGS_OUT();
}

void sub_17190019(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17190019u);

L_17190019:
    edi = edi; /* 0x17190019: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1719001B: push ebp */
    ebp = esp; /* 0x1719001C: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1719001E: push esi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1719001F: push dword ptr [ebp + 0xc] */
    esi = ecx; /* 0x17190022: mov esi, ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17190024: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1718F826); /* 0x17190027: call 0x1718f826 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x30); /* 0x1719002C: mov eax, dword ptr [ebp + 0x30] */
    ecx = MEM32(ebp + 0x2C); /* 0x1719002F: mov ecx, dword ptr [ebp + 0x2c] */
    MEM32(esi + 0x40) = eax; /* 0x17190032: mov dword ptr [esi + 0x40], eax */
    eax = MEM32(ebp + 0x1C); /* 0x17190035: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(esi + 0x44) = eax; /* 0x17190038: mov dword ptr [esi + 0x44], eax */
    eax = MEM32(ebp + 0x18); /* 0x1719003B: mov eax, dword ptr [ebp + 0x18] */
    MEM32(esi + 0x48) = eax; /* 0x1719003E: mov dword ptr [esi + 0x48], eax */
    eax = MEM32(ebp + 0x20); /* 0x17190041: mov eax, dword ptr [ebp + 0x20] */
    MEM32(esi + 0x4C) = eax; /* 0x17190044: mov dword ptr [esi + 0x4c], eax */
    eax = MEM32(ebp + 0x24); /* 0x17190047: mov eax, dword ptr [ebp + 0x24] */
    MEM32(esi + 0x50) = eax; /* 0x1719004A: mov dword ptr [esi + 0x50], eax */
    eax = MEM32(ebp + 0x28); /* 0x1719004D: mov eax, dword ptr [ebp + 0x28] */
    PUSH32(esp, ecx); /* 0x17190050: push ecx */
    MEM32(esi + 0x58) = ecx; /* 0x17190051: mov dword ptr [esi + 0x58], ecx */
    PUSH32(esp, eax); /* 0x17190054: push eax */
    ecx = esi + 0x5C; /* 0x17190055: lea ecx, [esi + 0x5c] */
    MEM32(esi) = 0x170221CCu; /* 0x17190058: mov dword ptr [esi], 0x170221cc */
    MEM32(esi + 0x54) = eax; /* 0x1719005E: mov dword ptr [esi + 0x54], eax */
    RECOMP_CALL(sub_17182CED); /* 0x17190061: call 0x17182ced */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x10); /* 0x17190066: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x14); /* 0x17190069: mov ecx, dword ptr [ebp + 0x14] */
    MEM32(esi + 0x74) = eax; /* 0x1719006C: mov dword ptr [esi + 0x74], eax */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x1719006F: imul eax, ecx */
    MEM32(esi + 0x7C) = eax; /* 0x17190072: mov dword ptr [esi + 0x7c], eax */
    MEM32(esi + 0x78) = ecx; /* 0x17190075: mov dword ptr [esi + 0x78], ecx */
    eax = esi; /* 0x17190078: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1719007A: pop esi */
    ebp = POP32_VAL(esp); /* 0x1719007B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 48; { RECOMP_REGS_OUT(); return; } /* 0x1719007C: ret 0x2c */
    RECOMP_REGS_OUT();
}

void sub_17190084(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17190084u);

L_17190084:
    edi = edi; /* 0x17190084: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17190086: push ebp */
    ebp = esp; /* 0x17190087: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40u; /* 0x17190089: sub esp, 0x40 */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x8); /* 0x1719008C: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(edx + 0x4); /* 0x1719008F: mov eax, dword ptr [edx + 4] */
    PUSH32(esp, ebx); /* 0x17190092: push ebx */
    PUSH32(esp, esi); /* 0x17190093: push esi */
    eax = eax + eax * 2; /* 0x17190094: lea eax, [eax + eax*2] */
    esi = ecx; /* 0x17190097: mov esi, ecx */
    ecx = MEM32(esi + 0x4C); /* 0x17190099: mov ecx, dword ptr [esi + 0x4c] */
    eax = ecx + eax * 4; /* 0x1719009C: lea eax, [ecx + eax*4] */
    ebx = MEM32(eax + 0x4); /* 0x1719009F: mov ebx, dword ptr [eax + 4] */
    ecx = MEM32(esi + 0x40); /* 0x171900A2: mov ecx, dword ptr [esi + 0x40] */
    PUSH32(esp, edi); /* 0x171900A5: push edi */
    edi = MEM32(eax); /* 0x171900A6: mov edi, dword ptr [eax] */
    eax = MEM32(eax + 0x8); /* 0x171900A8: mov eax, dword ptr [eax + 8] */
    MEM32(ebp + (-0x18)) = eax; /* 0x171900AB: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(edx + 0x8); /* 0x171900AE: mov eax, dword ptr [edx + 8] */
    MEM32(ebp + (-0x4)) = eax; /* 0x171900B1: mov dword ptr [ebp - 4], eax */
    eax = MEM32(edx + 0xC); /* 0x171900B4: mov eax, dword ptr [edx + 0xc] */
    MEM32(ebp + 0x8) = eax; /* 0x171900B7: mov dword ptr [ebp + 8], eax */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171900BA: fld dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x171900BD: mov eax, dword ptr [ecx] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171900BF: fadd dword ptr [ebp - 4] */
    PUSH32(esp, edx); /* 0x171900C2: push edx */
    edx = ebp + (-0x40); /* 0x171900C3: lea edx, [ebp - 0x40] */
    PUSH32(esp, edx); /* 0x171900C6: push edx */
    _st[0] = (double)*(float*)ADDR(0x17001424) - _st[0]; /* 0x171900C7: fsubr dword ptr [0x17001424] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x171900CD: fstp dword ptr [ebp - 8] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171900D0: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x40)); /* 0x171900D3: mov eax, dword ptr [ebp - 0x40] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x171900D6: fld dword ptr [ebp - 8] */
    ecx = MEM32(ebp + (-0x18)); /* 0x171900D9: mov ecx, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x30)) = eax; /* 0x171900DC: mov dword ptr [ebp - 0x30], eax */
    eax = MEM32(ebp + (-0x3C)); /* 0x171900DF: mov eax, dword ptr [ebp - 0x3c] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x171900E2: mov dword ptr [ebp - 0x2c], eax */
    eax = MEM32(ebp + (-0x38)); /* 0x171900E5: mov eax, dword ptr [ebp - 0x38] */
    MEM32(ebp + (-0x28)) = eax; /* 0x171900E8: mov dword ptr [ebp - 0x28], eax */
    eax = MEM32(esi + 0x50); /* 0x171900EB: mov eax, dword ptr [esi + 0x50] */
    ecx = eax + ecx * 8; /* 0x171900EE: lea ecx, [eax + ecx*8] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x171900F1: fmul dword ptr [ecx] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x171900F3: fld dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x171900F6: fmul dword ptr [ecx + 4] */
    ecx = eax + ebx * 8; /* 0x171900F9: lea ecx, [eax + ebx*8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171900FC: fld dword ptr [ebp + 8] */
    eax = eax + edi * 8; /* 0x171900FF: lea eax, [eax + edi*8] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x17190102: fmul dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x17190104: push ecx */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x17190105: fld dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x17190108: push ecx */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x17190109: fmul dword ptr [ecx + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x1719010C: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x1719010F: fmul dword ptr [eax] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17190111: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x17190114: fmul dword ptr [eax + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x17190117: fstp dword ptr [ebp - 0x18] */
    _st[0] += _st[2]; /* 0x1719011A: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1719011C: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x1719011F: fld dword ptr [ebp - 0x18] */
    _st[0] += _st[1]; /* 0x17190122: fadd st(1) */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x17190124: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17190126: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x17190128: fld dword ptr [ebp - 0xc] */
    _st[0] += _st[3]; /* 0x1719012B: fadd st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x1719012D: fstp dword ptr [ebp - 0x1c] */
    _st[0] += _st[1]; /* 0x17190130: fadd st(1) */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x17190132: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17190134: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x17190136: fld dword ptr [ebp - 0x1c] */
    _st[0] *= (double)*(float*)ADDR(esi + 0x64); /* 0x17190139: fmul dword ptr [esi + 0x64] */
    _st[0] += (double)*(float*)ADDR(esi + 0x6C); /* 0x1719013C: fadd dword ptr [esi + 0x6c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1719013F: fstp dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(esi + 0x68); /* 0x17190142: fmul dword ptr [esi + 0x68] */
    _st[0] += (double)*(float*)ADDR(esi + 0x70); /* 0x17190145: fadd dword ptr [esi + 0x70] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x17190148: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x1719014B: fld dword ptr [ebp - 0xc] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1719014E: fstp qword ptr [esp] */
    RECOMP_CALL(sub_1721B320); /* 0x17190151: call 0x1721b320 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1721B050); /* 0x17190156: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x1719015B: fld dword ptr [ebp - 8] */
    ebx = eax; /* 0x1719015E: mov ebx, eax */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x17190160: fstp qword ptr [esp] */
    MEM32(ebp + 0x8) = ebx; /* 0x17190163: mov dword ptr [ebp + 8], ebx */
    RECOMP_CALL(sub_1721B320); /* 0x17190166: call 0x1721b320 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1719016B: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1719016C: pop ecx */
    RECOMP_CALL(sub_1721B050); /* 0x1719016D: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    fp_push((double)(int32_t)MEM32(ebp + 0x8)); /* 0x17190172: fild dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x17190175: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = eax; /* 0x17190177: mov dword ptr [ebp - 0x18], eax */
    _st[0] = (double)*(float*)ADDR(ebp + (-0xC)) - _st[0]; /* 0x1719017A: fsubr dword ptr [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x1719017D: fstp dword ptr [ebp + 8] */
    fp_push((double)(int32_t)MEM32(ebp + (-0x18))); /* 0x17190180: fild dword ptr [ebp - 0x18] */
    _st[0] = (double)*(float*)ADDR(ebp + (-0x8)) - _st[0]; /* 0x17190183: fsubr dword ptr [ebp - 8] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1719018F; /* 0x17190186: jge 0x1719018f */
L_17190188:
    fp_push(0.0); /* 0x17190188: fldz  */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1719018A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x1719018C: fstp dword ptr [ebp + 8] */
L_1719018F:
    ecx = MEM32(esi + 0x5C); /* 0x1719018F: mov ecx, dword ptr [esi + 0x5c] */
    edx = ecx + (-0x1); /* 0x17190192: lea edx, [ecx - 1] */
    /* cmp ebx, edx */ /* 0x17190195: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171901A3; /* 0x17190197: jl 0x171901a3 */
L_17190199:
    ebx = ecx + (-0x2); /* 0x17190199: lea ebx, [ecx - 2] */
    MEM32(ebp + 0x8) = 0x3F7D70A4u; /* 0x1719019C: mov dword ptr [ebp + 8], 0x3f7d70a4 */
L_171901A3:
    /* test eax, eax */ /* 0x171901A3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_171901AD; /* 0x171901A5: jge 0x171901ad */
L_171901A7:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171901A7: fstp st(0) */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171901A9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(0.0); /* 0x171901AB: fldz  */
L_171901AD:
    ecx = MEM32(esi + 0x60); /* 0x171901AD: mov ecx, dword ptr [esi + 0x60] */
    edx = ecx + (-0x1); /* 0x171901B0: lea edx, [ecx - 1] */
    /* cmp eax, edx */ /* 0x171901B3: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171901C2; /* 0x171901B5: jl 0x171901c2 */
L_171901B7:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171901B7: fstp st(0) */
    eax = ecx + (-0x2); /* 0x171901B9: lea eax, [ecx - 2] */
    fp_push(*(float*)&MEM32(0x170018D0)); /* 0x171901BC: fld dword ptr [0x170018d0] */
L_171901C2:
    edi = MEM32(esi + 0x54); /* 0x171901C2: mov edi, dword ptr [esi + 0x54] */
    fp_push(1.0); /* 0x171901C5: fld1  */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x8); /* 0x171901C7: fsub dword ptr [ebp + 8] */
    edx = MEM32(esi + 0x7C); /* 0x171901CA: mov edx, dword ptr [esi + 0x7c] */
    fp_push(1.0); /* 0x171901CD: fld1  */
    ecx = edi; /* 0x171901CF: mov ecx, edi */
    _st[0] -= _st[2]; /* 0x171901D1: fsub st(2) */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x171901D3: imul ecx, eax */
    fp_push(_st[0]); /* 0x171901D6: fld st(0) */
    _st[0] *= _st[2]; /* 0x171901D8: fmul st(2) */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x171901DA: add ecx, ebx */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x171901DC: fstp dword ptr [ebp - 0x24] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx); /* 0x171901DF: imul ecx, edx */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x8); /* 0x171901E2: fmul dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x171901E5: fstp dword ptr [ebp - 0x20] */
    _st[0] *= _st[1]; /* 0x171901E8: fmul st(1) */
    eax = edx; /* 0x171901EA: mov eax, edx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x171901EC: fstp dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171901EF: fld dword ptr [ebp + 8] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x171901F2: imul eax, edi */
    _st[0] *= _st[1]; /* 0x171901F5: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x171901F7: fstp dword ptr [ebp - 0x18] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171901FA: fstp st(0) */
    edi = edx + ecx; /* 0x171901FC: lea edi, [edx + ecx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x171901FF: add edx, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = edi; /* 0x17190201: mov dword ptr [ebp - 0x10], edi */
    edi = eax + ecx; /* 0x17190204: lea edi, [eax + ecx] */
    eax = MEM32(esi + 0x74); /* 0x17190207: mov eax, dword ptr [esi + 0x74] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x1719020A: add edx, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x1719020C: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = ecx; /* 0x17190210: mov dword ptr [ebp - 0x14], ecx */
    MEM32(ebp + (-0xC)) = edi; /* 0x17190213: mov dword ptr [ebp - 0xc], edi */
    MEM32(ebp + (-0x8)) = edx; /* 0x17190216: mov dword ptr [ebp - 8], edx */
L_17190219:
    ecx = MEM32(ebp + 0x8); /* 0x17190219: mov ecx, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + ecx + (-0x24))); /* 0x1719021C: fld dword ptr [ebp + ecx - 0x24] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17190220: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_17190222:
    edi = MEM32(ebp + 0x8); /* 0x17190222: mov edi, dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x17190225: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ebp + edx * 4 + (-0x30)); /* 0x17190227: fmul dword ptr [ebp + edx*4 - 0x30] */
    ecx = eax; /* 0x1719022B: mov ecx, eax */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx); /* 0x1719022D: imul ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + edi + (-0x14)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + edi + (-0x14)); /* 0x17190230: add ecx, dword ptr [ebp + edi - 0x14] */
    _flag_k = FK_ADD;
    edi = MEM32(esi + 0x44); /* 0x17190234: mov edi, dword ptr [esi + 0x44] */
    edi = edi + ecx * 4; /* 0x17190237: lea edi, [edi + ecx*4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1719023A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x1719023C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1719025F; /* 0x1719023E: jbe 0x1719025f */
L_17190240:
    eax = MEM32(esi + 0x74); /* 0x17190240: mov eax, dword ptr [esi + 0x74] */
    fp_push(_st[0]); /* 0x17190243: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(edi + ecx * 4); /* 0x17190245: fmul dword ptr [edi + ecx*4] */
    ebx = MEM32(esi + 0x48); /* 0x17190248: mov ebx, dword ptr [esi + 0x48] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx); /* 0x1719024B: imul eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x1719024E: add eax, ecx */
    _flag_k = FK_ADD;
    eax = ebx + eax * 4; /* 0x17190250: lea eax, [ebx + eax*4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17190253: inc ecx */
    _flag_k = FK_INC;
    _st[0] += (double)*(float*)ADDR(eax); /* 0x17190254: fadd dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17190256: fstp dword ptr [eax] */
    eax = MEM32(esi + 0x74); /* 0x17190258: mov eax, dword ptr [esi + 0x74] */
    /* cmp ecx, eax */ /* 0x1719025B: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17190240; /* 0x1719025D: jb 0x17190240 */
L_1719025F:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1719025F: inc edx */
    _flag_k = FK_INC;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17190260: fstp st(0) */
    /* cmp edx, 3 */ /* 0x17190262: cmp edx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17190222; /* 0x17190265: jb 0x17190222 */
L_17190267:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 4; /* 0x17190267: add dword ptr [ebp + 8], 4 */
    _flag_k = FK_ADD;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1719026B: fstp st(0) */
    /* cmp MEM32(ebp + 0x8), 0x10u */ /* 0x1719026D: cmp dword ptr [ebp + 8], 0x10 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17190219; /* 0x17190271: jb 0x17190219 */
L_17190273:
    edi = POP32_VAL(esp); /* 0x17190273: pop edi */
    esi = POP32_VAL(esp); /* 0x17190274: pop esi */
    ebx = POP32_VAL(esp); /* 0x17190275: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17190276: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17190277: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1719027F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1719027Fu);

L_1719027F:
    edi = edi; /* 0x1719027F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17190281: push ebp */
    ebp = esp; /* 0x17190282: mov ebp, esp */
    PUSH32(esp, esi); /* 0x17190284: push esi */
    PUSH32(esp, MEM32(ebp + 0x30)); /* 0x17190285: push dword ptr [ebp + 0x30] */
    esi = ecx; /* 0x17190288: mov esi, ecx */
    PUSH32(esp, MEM32(ebp + 0x2C)); /* 0x1719028A: push dword ptr [ebp + 0x2c] */
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x1719028D: push dword ptr [ebp + 0x28] */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x17190290: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x17190293: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x17190296: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x17190299: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1719029C: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1719029F: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171902A2: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171902A5: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_17190019); /* 0x171902A8: call 0x17190019 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = 0x170221E0u; /* 0x171902AD: mov dword ptr [esi], 0x170221e0 */
    eax = esi; /* 0x171902B3: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171902B5: pop esi */
    ebp = POP32_VAL(esp); /* 0x171902B6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 48; { RECOMP_REGS_OUT(); return; } /* 0x171902B7: ret 0x2c */
    RECOMP_REGS_OUT();
}

void sub_171902BF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171902BFu);

L_171902BF:
    edi = edi; /* 0x171902BF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171902C1: push ebp */
    ebp = esp; /* 0x171902C2: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40u; /* 0x171902C4: sub esp, 0x40 */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x8); /* 0x171902C7: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(edx + 0x4); /* 0x171902CA: mov eax, dword ptr [edx + 4] */
    PUSH32(esp, ebx); /* 0x171902CD: push ebx */
    PUSH32(esp, esi); /* 0x171902CE: push esi */
    eax = eax + eax * 2; /* 0x171902CF: lea eax, [eax + eax*2] */
    esi = ecx; /* 0x171902D2: mov esi, ecx */
    ecx = MEM32(esi + 0x4C); /* 0x171902D4: mov ecx, dword ptr [esi + 0x4c] */
    eax = ecx + eax * 4; /* 0x171902D7: lea eax, [ecx + eax*4] */
    ebx = MEM32(eax + 0x4); /* 0x171902DA: mov ebx, dword ptr [eax + 4] */
    ecx = MEM32(esi + 0x40); /* 0x171902DD: mov ecx, dword ptr [esi + 0x40] */
    PUSH32(esp, edi); /* 0x171902E0: push edi */
    edi = MEM32(eax); /* 0x171902E1: mov edi, dword ptr [eax] */
    eax = MEM32(eax + 0x8); /* 0x171902E3: mov eax, dword ptr [eax + 8] */
    MEM32(ebp + (-0x18)) = eax; /* 0x171902E6: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(edx + 0x8); /* 0x171902E9: mov eax, dword ptr [edx + 8] */
    MEM32(ebp + (-0x4)) = eax; /* 0x171902EC: mov dword ptr [ebp - 4], eax */
    eax = MEM32(edx + 0xC); /* 0x171902EF: mov eax, dword ptr [edx + 0xc] */
    MEM32(ebp + 0x8) = eax; /* 0x171902F2: mov dword ptr [ebp + 8], eax */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171902F5: fld dword ptr [ebp + 8] */
    eax = MEM32(ecx); /* 0x171902F8: mov eax, dword ptr [ecx] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171902FA: fadd dword ptr [ebp - 4] */
    PUSH32(esp, edx); /* 0x171902FD: push edx */
    edx = ebp + (-0x40); /* 0x171902FE: lea edx, [ebp - 0x40] */
    PUSH32(esp, edx); /* 0x17190301: push edx */
    _st[0] = (double)*(float*)ADDR(0x17001424) - _st[0]; /* 0x17190302: fsubr dword ptr [0x17001424] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x17190308: fstp dword ptr [ebp - 8] */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x1719030B: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x40)); /* 0x1719030E: mov eax, dword ptr [ebp - 0x40] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17190311: fld dword ptr [ebp - 8] */
    ecx = MEM32(ebp + (-0x18)); /* 0x17190314: mov ecx, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x30)) = eax; /* 0x17190317: mov dword ptr [ebp - 0x30], eax */
    eax = MEM32(esi + 0x50); /* 0x1719031A: mov eax, dword ptr [esi + 0x50] */
    ecx = eax + ecx * 8; /* 0x1719031D: lea ecx, [eax + ecx*8] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x17190320: fmul dword ptr [ecx] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17190322: fld dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x17190325: fmul dword ptr [ecx + 4] */
    ecx = eax + ebx * 8; /* 0x17190328: lea ecx, [eax + ebx*8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x1719032B: fld dword ptr [ebp + 8] */
    eax = eax + edi * 8; /* 0x1719032E: lea eax, [eax + edi*8] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x17190331: fmul dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x17190333: push ecx */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x17190334: fld dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x17190337: push ecx */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x17190338: fmul dword ptr [ecx + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x1719033B: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x1719033E: fmul dword ptr [eax] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17190340: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x17190343: fmul dword ptr [eax + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x17190346: fstp dword ptr [ebp - 0x18] */
    _st[0] += _st[2]; /* 0x17190349: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1719034B: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x1719034E: fld dword ptr [ebp - 0x18] */
    _st[0] += _st[1]; /* 0x17190351: fadd st(1) */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x17190353: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17190355: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x17190357: fld dword ptr [ebp - 0xc] */
    _st[0] += _st[3]; /* 0x1719035A: fadd st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x1719035C: fstp dword ptr [ebp - 0x1c] */
    _st[0] += _st[1]; /* 0x1719035F: fadd st(1) */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x17190361: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17190363: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x17190365: fld dword ptr [ebp - 0x1c] */
    _st[0] *= (double)*(float*)ADDR(esi + 0x64); /* 0x17190368: fmul dword ptr [esi + 0x64] */
    _st[0] += (double)*(float*)ADDR(esi + 0x6C); /* 0x1719036B: fadd dword ptr [esi + 0x6c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1719036E: fstp dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(esi + 0x68); /* 0x17190371: fmul dword ptr [esi + 0x68] */
    _st[0] += (double)*(float*)ADDR(esi + 0x70); /* 0x17190374: fadd dword ptr [esi + 0x70] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x17190377: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x1719037A: fld dword ptr [ebp - 0xc] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1719037D: fstp qword ptr [esp] */
    RECOMP_CALL(sub_1721B320); /* 0x17190380: call 0x1721b320 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_1721B050); /* 0x17190385: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x1719038A: fld dword ptr [ebp - 8] */
    ebx = eax; /* 0x1719038D: mov ebx, eax */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1719038F: fstp qword ptr [esp] */
    MEM32(ebp + 0x8) = ebx; /* 0x17190392: mov dword ptr [ebp + 8], ebx */
    RECOMP_CALL(sub_1721B320); /* 0x17190395: call 0x1721b320 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1719039A: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1719039B: pop ecx */
    RECOMP_CALL(sub_1721B050); /* 0x1719039C: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    /* test ebx, ebx */ /* 0x171903A1: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push((double)(int32_t)MEM32(ebp + 0x8)); /* 0x171903A3: fild dword ptr [ebp + 8] */
    MEM32(ebp + (-0x18)) = eax; /* 0x171903A6: mov dword ptr [ebp - 0x18], eax */
    _st[0] = (double)*(float*)ADDR(ebp + (-0xC)) - _st[0]; /* 0x171903A9: fsubr dword ptr [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x171903AC: fstp dword ptr [ebp + 8] */
    fp_push((double)(int32_t)MEM32(ebp + (-0x18))); /* 0x171903AF: fild dword ptr [ebp - 0x18] */
    _st[0] = (double)*(float*)ADDR(ebp + (-0x8)) - _st[0]; /* 0x171903B2: fsubr dword ptr [ebp - 8] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_171903BE; /* 0x171903B5: jge 0x171903be */
L_171903B7:
    fp_push(0.0); /* 0x171903B7: fldz  */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171903B9: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x171903BB: fstp dword ptr [ebp + 8] */
L_171903BE:
    ecx = MEM32(esi + 0x5C); /* 0x171903BE: mov ecx, dword ptr [esi + 0x5c] */
    edx = ecx + (-0x1); /* 0x171903C1: lea edx, [ecx - 1] */
    /* cmp ebx, edx */ /* 0x171903C4: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171903D2; /* 0x171903C6: jl 0x171903d2 */
L_171903C8:
    ebx = ecx + (-0x2); /* 0x171903C8: lea ebx, [ecx - 2] */
    MEM32(ebp + 0x8) = 0x3F7D70A4u; /* 0x171903CB: mov dword ptr [ebp + 8], 0x3f7d70a4 */
L_171903D2:
    /* test eax, eax */ /* 0x171903D2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_171903DC; /* 0x171903D4: jge 0x171903dc */
L_171903D6:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171903D6: fstp st(0) */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171903D8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(0.0); /* 0x171903DA: fldz  */
L_171903DC:
    ecx = MEM32(esi + 0x60); /* 0x171903DC: mov ecx, dword ptr [esi + 0x60] */
    edx = ecx + (-0x1); /* 0x171903DF: lea edx, [ecx - 1] */
    /* cmp eax, edx */ /* 0x171903E2: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171903F1; /* 0x171903E4: jl 0x171903f1 */
L_171903E6:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171903E6: fstp st(0) */
    eax = ecx + (-0x2); /* 0x171903E8: lea eax, [ecx - 2] */
    fp_push(*(float*)&MEM32(0x170018D0)); /* 0x171903EB: fld dword ptr [0x170018d0] */
L_171903F1:
    edi = MEM32(esi + 0x54); /* 0x171903F1: mov edi, dword ptr [esi + 0x54] */
    fp_push(1.0); /* 0x171903F4: fld1  */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x8); /* 0x171903F6: fsub dword ptr [ebp + 8] */
    edx = MEM32(esi + 0x7C); /* 0x171903F9: mov edx, dword ptr [esi + 0x7c] */
    fp_push(1.0); /* 0x171903FC: fld1  */
    ecx = edi; /* 0x171903FE: mov ecx, edi */
    _st[0] -= _st[2]; /* 0x17190400: fsub st(2) */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x17190402: imul ecx, eax */
    fp_push(_st[0]); /* 0x17190405: fld st(0) */
    _st[0] *= _st[2]; /* 0x17190407: fmul st(2) */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x17190409: add ecx, ebx */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x1719040B: fstp dword ptr [ebp - 0x14] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx); /* 0x1719040E: imul ecx, edx */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x8); /* 0x17190411: fmul dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x17190414: fstp dword ptr [ebp - 0x10] */
    _st[0] *= _st[1]; /* 0x17190417: fmul st(1) */
    eax = edx; /* 0x17190419: mov eax, edx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1719041B: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x1719041E: fld dword ptr [ebp + 8] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x17190421: imul eax, edi */
    _st[0] *= _st[1]; /* 0x17190424: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x17190426: fstp dword ptr [ebp - 8] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17190429: fstp st(0) */
    edi = edx + ecx; /* 0x1719042B: lea edi, [edx + ecx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x1719042E: add edx, eax */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x20)) = edi; /* 0x17190430: mov dword ptr [ebp - 0x20], edi */
    edi = eax + ecx; /* 0x17190433: lea edi, [eax + ecx] */
    eax = MEM32(esi + 0x74); /* 0x17190436: mov eax, dword ptr [esi + 0x74] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x17190439: add edx, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x24)) = ecx; /* 0x1719043B: mov dword ptr [ebp - 0x24], ecx */
    MEM32(ebp + (-0x1C)) = edi; /* 0x1719043E: mov dword ptr [ebp - 0x1c], edi */
    MEM32(ebp + (-0x18)) = edx; /* 0x17190441: mov dword ptr [ebp - 0x18], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x17190444: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_17190446:
    edi = MEM32(esi + 0x44); /* 0x17190446: mov edi, dword ptr [esi + 0x44] */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x17190449: fld dword ptr [ebp - 0x30] */
    edx = MEM32(ebp + ecx + (-0x24)); /* 0x1719044C: mov edx, dword ptr [ebp + ecx - 0x24] */
    _st[0] *= (double)*(float*)ADDR(ebp + ecx + (-0x14)); /* 0x17190450: fmul dword ptr [ebp + ecx - 0x14] */
    edx = edi + edx * 4; /* 0x17190454: lea edx, [edi + edx*4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x17190457: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x17190459: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17190474; /* 0x1719045B: jbe 0x17190474 */
L_1719045D:
    eax = MEM32(esi + 0x48); /* 0x1719045D: mov eax, dword ptr [esi + 0x48] */
    fp_push(_st[0]); /* 0x17190460: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(edx + edi * 4); /* 0x17190462: fmul dword ptr [edx + edi*4] */
    eax = eax + edi * 4; /* 0x17190465: lea eax, [eax + edi*4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x17190468: inc edi */
    _flag_k = FK_INC;
    _st[0] += (double)*(float*)ADDR(eax); /* 0x17190469: fadd dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1719046B: fstp dword ptr [eax] */
    eax = MEM32(esi + 0x74); /* 0x1719046D: mov eax, dword ptr [esi + 0x74] */
    /* cmp edi, eax */ /* 0x17190470: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1719045D; /* 0x17190472: jb 0x1719045d */
L_17190474:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x17190474: add ecx, 4 */
    _flag_k = FK_ADD;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17190477: fstp st(0) */
    /* cmp ecx, 0x10u */ /* 0x17190479: cmp ecx, 0x10 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17190446; /* 0x1719047C: jb 0x17190446 */
L_1719047E:
    edi = POP32_VAL(esp); /* 0x1719047E: pop edi */
    esi = POP32_VAL(esp); /* 0x1719047F: pop esi */
    ebx = POP32_VAL(esp); /* 0x17190480: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17190481: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17190482: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1719048A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1719048Au);

L_1719048A:
    edi = edi; /* 0x1719048A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1719048C: push ebp */
    ebp = esp; /* 0x1719048D: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1719048F: mov eax, dword ptr [ebp + 8] */
    fp_push(1.0); /* 0x17190492: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17190494: fstp dword ptr [eax] */
    fp_push(1.0); /* 0x17190496: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x17190498: fstp dword ptr [eax + 4] */
    fp_push(1.0); /* 0x1719049B: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x1719049D: fstp dword ptr [eax + 8] */
    fp_push(1.0); /* 0x171904A0: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x171904A2: fstp dword ptr [eax + 0xc] */
    ebp = POP32_VAL(esp); /* 0x171904A5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171904A6: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171904AE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171904AEu);

L_171904AE:
    edi = edi; /* 0x171904AE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171904B0: push ebp */
    ebp = esp; /* 0x171904B1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171904B3: push esi */
    esi = ecx; /* 0x171904B4: mov esi, ecx */
    RECOMP_CALL(sub_1719000D); /* 0x171904B6: call 0x1719000d */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x171904BB: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171904C8; /* 0x171904BF: je 0x171904c8 */
L_171904C1:
    PUSH32(esp, esi); /* 0x171904C1: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x171904C2: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171904C7: pop ecx */
L_171904C8:
    eax = esi; /* 0x171904C8: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171904CA: pop esi */
    ebp = POP32_VAL(esp); /* 0x171904CB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171904CC: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171904D4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171904D4u);

L_171904D4:
    edi = edi; /* 0x171904D4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171904D6: push ebp */
    ebp = esp; /* 0x171904D7: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171904D9: push ebx */
    PUSH32(esp, esi); /* 0x171904DA: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171904DB: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ebp + 0xC), LO8(ebx) */ /* 0x171904DD: cmp byte ptr [ebp + 0xc], bl */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, edi); /* 0x171904E0: push edi */
    esi = ecx; /* 0x171904E1: mov esi, ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17190505; /* 0x171904E3: je 0x17190505 */
L_171904E5:
    PUSH32(esp, 4); /* 0x171904E5: push 4 */
    RECOMP_CALL(sub_1721B01C); /* 0x171904E7: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x171904EC: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x171904EE: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171904FE; /* 0x171904EF: je 0x171904fe */
L_171904F1:
    MEM32(eax) = 0x170221F4u; /* 0x171904F1: mov dword ptr [eax], 0x170221f4 */
    esi = eax; /* 0x171904F7: mov esi, eax */
    goto L_171905E8; /* 0x171904F9: jmp 0x171905e8 */
L_171904FE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171904FE: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171905E8; /* 0x17190500: jmp 0x171905e8 */
L_17190505:
    eax = MEM32(esi); /* 0x17190505: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x17190507: push esi */
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x17190508: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x1719050B: mov ecx, esi */
    edi = eax; /* 0x1719050D: mov edi, eax */
    RECOMP_CALL(sub_1717CC52); /* 0x1719050F: call 0x1717cc52 */
    RECOMP_FLAGS_IN();
    /* cmp edi, eax */ /* 0x17190514: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x17190516: setne al */
    /* cmp LO8(eax), LO8(ebx) */ /* 0x17190519: cmp al, bl */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1719052E; /* 0x1719051B: jne 0x1719052e */
L_1719051D:
    /* cmp MEM8(esi + 0x120), 1 */ /* 0x1719051D: cmp byte ptr [esi + 0x120], 1 */
    _flag_a = (uint32_t)(MEM8(esi + 0x120)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17190559; /* 0x17190524: jne 0x17190559 */
L_17190526:
    /* cmp MEM8(esi + 0x121), LO8(ebx) */ /* 0x17190526: cmp byte ptr [esi + 0x121], bl */
    _flag_a = (uint32_t)(MEM8(esi + 0x121)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_17190559; /* 0x1719052C: jne 0x17190559 */
L_1719052E:
    PUSH32(esp, 0xCu); /* 0x1719052E: push 0xc */
    RECOMP_CALL(sub_1721B01C); /* 0x17190530: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x17190535: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x17190537: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17190547; /* 0x17190538: je 0x17190547 */
L_1719053A:
    ecx = esi + 0x74; /* 0x1719053A: lea ecx, [esi + 0x74] */
    PUSH32(esp, ecx); /* 0x1719053D: push ecx */
    ecx = eax; /* 0x1719053E: mov ecx, eax */
    RECOMP_CALL(sub_1718F29C); /* 0x17190540: call 0x1718f29c */
    RECOMP_FLAGS_IN();
    goto L_17190549; /* 0x17190545: jmp 0x17190549 */
L_17190547:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17190547: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17190549:
    /* cmp eax, ebx */ /* 0x17190549: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = eax; /* 0x1719054B: mov edi, eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17190585; /* 0x1719054D: jne 0x17190585 */
L_1719054F:
    eax = 0x8007000Eu; /* 0x1719054F: mov eax, 0x8007000e */
    goto L_171905FD; /* 0x17190554: jmp 0x171905fd */
L_17190559:
    PUSH32(esp, 0xCu); /* 0x17190559: push 0xc */
    RECOMP_CALL(sub_1721B01C); /* 0x1719055B: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x17190560: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x17190562: pop ecx */
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17190547; /* 0x17190563: je 0x17190547 */
L_17190565:
    ecx = MEM32(esi + 0x4); /* 0x17190565: mov ecx, dword ptr [esi + 4] */
    /* cmp MEM32(ecx + 0x8), ebx */ /* 0x17190568: cmp dword ptr [ecx + 8], ebx */
    _flag_a = (uint32_t)(MEM32(ecx + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17190572; /* 0x1719056B: je 0x17190572 */
L_1719056D:
    edx = MEM32(ecx + 0x4); /* 0x1719056D: mov edx, dword ptr [ecx + 4] */
    goto L_17190574; /* 0x17190570: jmp 0x17190574 */
L_17190572:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17190572: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
L_17190574:
    ecx = MEM32(ecx + 0x24); /* 0x17190574: mov ecx, dword ptr [ecx + 0x24] */
    MEM32(eax) = 0x17022150u; /* 0x17190577: mov dword ptr [eax], 0x17022150 */
    MEM32(eax + 0x4) = ecx; /* 0x1719057D: mov dword ptr [eax + 4], ecx */
    MEM32(eax + 0x8) = edx; /* 0x17190580: mov dword ptr [eax + 8], edx */
    RECOMP_BACKEDGE();
    goto L_17190549; /* 0x17190583: jmp 0x17190549 */
L_17190585:
    /* cmp MEM32(esi + 0x34), ebx */ /* 0x17190585: cmp dword ptr [esi + 0x34], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x34)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171905A9; /* 0x17190588: je 0x171905a9 */
L_1719058A:
    PUSH32(esp, 0x2Cu); /* 0x1719058A: push 0x2c */
    RECOMP_CALL(sub_1721B01C); /* 0x1719058C: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x17190591: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x17190593: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171905D9; /* 0x17190594: je 0x171905d9 */
L_17190596:
    PUSH32(esp, MEM32(esi + 0x3C)); /* 0x17190596: push dword ptr [esi + 0x3c] */
    ecx = eax; /* 0x17190599: mov ecx, eax */
    PUSH32(esp, MEM32(esi + 0x38)); /* 0x1719059B: push dword ptr [esi + 0x38] */
    PUSH32(esp, edi); /* 0x1719059E: push edi */
    PUSH32(esp, MEM32(esi + 0x34)); /* 0x1719059F: push dword ptr [esi + 0x34] */
    RECOMP_CALL(sub_1718F599); /* 0x171905A2: call 0x1718f599 */
    RECOMP_FLAGS_IN();
    goto L_171905DB; /* 0x171905A7: jmp 0x171905db */
L_171905A9:
    /* cmp MEM32(esi + 0x2C), ebx */ /* 0x171905A9: cmp dword ptr [esi + 0x2c], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x2C)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171905BC; /* 0x171905AC: jne 0x171905bc */
L_171905AE:
    PUSH32(esp, edi); /* 0x171905AE: push edi */
    RECOMP_CALL(sub_1721B010); /* 0x171905AF: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171905B4: pop ecx */
    eax = 0x8876086Cu; /* 0x171905B5: mov eax, 0x8876086c */
    goto L_171905FD; /* 0x171905BA: jmp 0x171905fd */
L_171905BC:
    PUSH32(esp, 0xCu); /* 0x171905BC: push 0xc */
    RECOMP_CALL(sub_1721B01C); /* 0x171905BE: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x171905C3: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x171905C5: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171905D9; /* 0x171905C6: je 0x171905d9 */
L_171905C8:
    esi = MEM32(esi + 0x2C); /* 0x171905C8: mov esi, dword ptr [esi + 0x2c] */
    MEM32(eax) = 0x17022158u; /* 0x171905CB: mov dword ptr [eax], 0x17022158 */
    MEM32(eax + 0x4) = esi; /* 0x171905D1: mov dword ptr [eax + 4], esi */
    MEM32(eax + 0x8) = edi; /* 0x171905D4: mov dword ptr [eax + 8], edi */
    goto L_171905DB; /* 0x171905D7: jmp 0x171905db */
L_171905D9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171905D9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171905DB:
    esi = eax; /* 0x171905DB: mov esi, eax */
    /* cmp esi, ebx */ /* 0x171905DD: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171905E8; /* 0x171905DF: jne 0x171905e8 */
L_171905E1:
    PUSH32(esp, edi); /* 0x171905E1: push edi */
    RECOMP_CALL(sub_1721B010); /* 0x171905E2: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171905E7: pop ecx */
L_171905E8:
    eax = MEM32(ebp + 0x8); /* 0x171905E8: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = esi; /* 0x171905EB: mov dword ptr [eax], esi */
    eax = esi; /* 0x171905ED: mov eax, esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x171905EF: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x171905F1: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FF8FFF2u);
    eax = eax & 0x7FF8FFF2u; /* 0x171905F3: and eax, 0x7ff8fff2 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8007000Eu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x8007000Eu; /* 0x171905F8: add eax, 0x8007000e */
    _flag_k = FK_ADD;
L_171905FD:
    edi = POP32_VAL(esp); /* 0x171905FD: pop edi */
    esi = POP32_VAL(esp); /* 0x171905FE: pop esi */
    ebx = POP32_VAL(esp); /* 0x171905FF: pop ebx */
    ebp = POP32_VAL(esp); /* 0x17190600: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17190601: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17190609(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17190609u);

L_17190609:
    edi = edi; /* 0x17190609: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1719060B: push ebp */
    ebp = esp; /* 0x1719060C: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1719060E: push esi */
    esi = ecx; /* 0x1719060F: mov esi, ecx */
    RECOMP_CALL(sub_1719062F); /* 0x17190611: call 0x1719062f */
    RECOMP_FLAGS_IN();
    /* test MEM8(ebp + 0x8), 1 */ /* 0x17190616: test byte ptr [ebp + 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17190623; /* 0x1719061A: je 0x17190623 */
L_1719061C:
    PUSH32(esp, esi); /* 0x1719061C: push esi */
    RECOMP_CALL(sub_1721B010); /* 0x1719061D: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x17190622: pop ecx */
L_17190623:
    eax = esi; /* 0x17190623: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x17190625: pop esi */
    ebp = POP32_VAL(esp); /* 0x17190626: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17190627: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1719062F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1719062Fu);

L_1719062F:
    MEM32(ecx) = 0x17022124u; /* 0x1719062F: mov dword ptr [ecx], 0x17022124 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17190635: ret  */
    RECOMP_REGS_OUT();
}

void sub_1719063B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1719063Bu);

L_1719063B:
    eax = 0x1721C607u; /* 0x1719063B: mov eax, 0x1721c607 */
    RECOMP_CALL(sub_1721B168); /* 0x17190640: call 0x1721b168 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x17190645: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x17190648: push ebx */
    PUSH32(esp, esi); /* 0x17190649: push esi */
    esi = ecx; /* 0x1719064A: mov esi, ecx */
    eax = MEM32(esi); /* 0x1719064C: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x1719064E: push edi */
    PUSH32(esp, esi); /* 0x1719064F: push esi */
    RECOMP_ICALL(MEM32(eax + 0x2C)); /* 0x17190650: call dword ptr [eax + 0x2c] */
    RECOMP_FLAGS_IN();
    ecx = esi; /* 0x17190653: mov ecx, esi */
    edi = eax; /* 0x17190655: mov edi, eax */
    RECOMP_CALL(sub_1717CC52); /* 0x17190657: call 0x1717cc52 */
    RECOMP_FLAGS_IN();
    /* cmp edi, eax */ /* 0x1719065C: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM8(ebp + (-0xD)) = (uint8_t)((CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x1719065E: setne byte ptr [ebp - 0xd] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x17190662: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x17190664: inc ebx */
    _flag_k = FK_INC;
    /* cmp MEM8(ebp + (-0xD)), 0 */ /* 0x17190665: cmp byte ptr [ebp - 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xD))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1719067F; /* 0x17190669: jne 0x1719067f */
L_1719066B:
    /* cmp MEM8(esi + 0x120), LO8(ebx) */ /* 0x1719066B: cmp byte ptr [esi + 0x120], bl */
    _flag_a = (uint32_t)(MEM8(esi + 0x120)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1719067F; /* 0x17190671: jne 0x1719067f */
L_17190673:
    /* cmp MEM8(esi + 0x121), 0 */ /* 0x17190673: cmp byte ptr [esi + 0x121], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x121)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1719067F; /* 0x1719067A: jne 0x1719067f */
L_1719067C:
    MEM8(ebp + (-0xD)) = (uint8_t)(LO8(ebx)); /* 0x1719067C: mov byte ptr [ebp - 0xd], bl */
L_1719067F:
    /* cmp MEM32(esi + 0x30), 0 */ /* 0x1719067F: cmp dword ptr [esi + 0x30], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x30)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = MEM32(ebp + 0xC); /* 0x17190683: mov edi, dword ptr [ebp + 0xc] */
    eax = MEM32(edi); /* 0x17190686: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x17190688: push edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171907A1; /* 0x17190689: jne 0x171907a1 */
L_1719068F:
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x1719068F: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17190692: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1719070A; /* 0x17190694: je 0x1719070a */
L_17190696:
    PUSH32(esp, 0x80u); /* 0x17190696: push 0x80 */
    RECOMP_CALL(sub_1721B01C); /* 0x1719069B: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171906A0: pop ecx */
    MEM32(ebp + (-0x18)) = eax; /* 0x171906A1: mov dword ptr [ebp - 0x18], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171906A4: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x171906A6: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = ecx; /* 0x171906A8: mov dword ptr [ebp - 4], ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1719090D; /* 0x171906AB: je 0x1719090d */
L_171906B1:
    eax = MEM32(esi + 0x4); /* 0x171906B1: mov eax, dword ptr [esi + 4] */
    /* cmp MEM32(eax + 0x8), ecx */ /* 0x171906B4: cmp dword ptr [eax + 8], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171906BC; /* 0x171906B7: je 0x171906bc */
L_171906B9:
    ecx = MEM32(eax + 0x4); /* 0x171906B9: mov ecx, dword ptr [eax + 4] */
L_171906BC:
    ebx = MEM32(eax + 0x24); /* 0x171906BC: mov ebx, dword ptr [eax + 0x24] */
    eax = MEM32(esi + 0x8); /* 0x171906BF: mov eax, dword ptr [esi + 8] */
    eax = MEM32(eax + 0x10); /* 0x171906C2: mov eax, dword ptr [eax + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171906C5: push dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x14)) = eax; /* 0x171906C8: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(edi); /* 0x171906CB: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x171906CD: push edi */
    MEM32(ebp + 0xC) = ecx; /* 0x171906CE: mov dword ptr [ebp + 0xc], ecx */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x171906D1: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x171906D4: push eax */
    eax = MEM32(edi); /* 0x171906D5: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x171906D7: push edi */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x171906D8: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x171906DB: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171906DC: push dword ptr [ebp + 0xc] */
    eax = MEM32(edi); /* 0x171906DF: mov eax, dword ptr [edi] */
    PUSH32(esp, ebx); /* 0x171906E1: push ebx */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x171906E2: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x171906E5: push dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x171906E8: push edi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x171906E9: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x171906EC: push eax */
    eax = MEM32(edi); /* 0x171906ED: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x171906EF: push edi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x171906F0: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x18)); /* 0x171906F3: mov ecx, dword ptr [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x171906F6: push eax */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x171906F7: push dword ptr [ebp - 0x14] */
    eax = MEM32(esi + 0x8); /* 0x171906FA: mov eax, dword ptr [esi + 8] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x171906FD: push dword ptr [eax + 0xc] */
    RECOMP_CALL(sub_1719027F); /* 0x17190700: call 0x1719027f */
    RECOMP_FLAGS_IN();
    goto L_1719090F; /* 0x17190705: jmp 0x1719090f */
L_1719070A:
    PUSH32(esp, 0x5Cu); /* 0x1719070A: push 0x5c */
    RECOMP_CALL(sub_1721B01C); /* 0x1719070C: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + (-0xD)), 0 */ /* 0x17190711: cmp byte ptr [ebp - 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xD))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + 0xC) = eax; /* 0x17190715: mov dword ptr [ebp + 0xc], eax */
    ecx = POP32_VAL(esp); /* 0x17190718: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1719075B; /* 0x17190719: je 0x1719075b */
L_1719071B:
    /* test eax, eax */ /* 0x1719071B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ebx; /* 0x1719071D: mov dword ptr [ebp - 4], ebx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1719090D; /* 0x17190720: je 0x1719090d */
L_17190726:
    eax = MEM32(esi + 0x8); /* 0x17190726: mov eax, dword ptr [esi + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17190729: push dword ptr [ebp + 0x10] */
    ebx = MEM32(eax + 0x10); /* 0x1719072C: mov ebx, dword ptr [eax + 0x10] */
    eax = esi + 0x74; /* 0x1719072F: lea eax, [esi + 0x74] */
    PUSH32(esp, eax); /* 0x17190732: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x17190733: push dword ptr [ebp + 0x18] */
    eax = MEM32(edi); /* 0x17190736: mov eax, dword ptr [edi] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x17190738: push dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x1719073B: push edi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x1719073C: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1719073F: push eax */
    eax = MEM32(edi); /* 0x17190740: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x17190742: push edi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x17190743: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x17190746: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x17190749: push eax */
    eax = MEM32(esi + 0x8); /* 0x1719074A: mov eax, dword ptr [esi + 8] */
    PUSH32(esp, ebx); /* 0x1719074D: push ebx */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x1719074E: push dword ptr [eax + 0xc] */
    RECOMP_CALL(sub_1718FEB4); /* 0x17190751: call 0x1718feb4 */
    RECOMP_FLAGS_IN();
    goto L_1719090F; /* 0x17190756: jmp 0x1719090f */
L_1719075B:
    /* test eax, eax */ /* 0x1719075B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 2; /* 0x1719075D: mov dword ptr [ebp - 4], 2 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1719090D; /* 0x17190764: je 0x1719090d */
L_1719076A:
    eax = MEM32(esi + 0x8); /* 0x1719076A: mov eax, dword ptr [esi + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1719076D: push dword ptr [ebp + 0x10] */
    ebx = MEM32(eax + 0x10); /* 0x17190770: mov ebx, dword ptr [eax + 0x10] */
    eax = MEM32(esi + 0x4); /* 0x17190773: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, MEM32(eax + 0x24)); /* 0x17190776: push dword ptr [eax + 0x24] */
    eax = MEM32(edi); /* 0x17190779: mov eax, dword ptr [edi] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1719077B: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1719077E: push dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x17190781: push edi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x17190782: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x17190785: push eax */
    eax = MEM32(edi); /* 0x17190786: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x17190788: push edi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x17190789: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x1719078C: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x1719078F: push eax */
    eax = MEM32(esi + 0x8); /* 0x17190790: mov eax, dword ptr [esi + 8] */
    PUSH32(esp, ebx); /* 0x17190793: push ebx */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x17190794: push dword ptr [eax + 0xc] */
    RECOMP_CALL(sub_1718FBF1); /* 0x17190797: call 0x1718fbf1 */
    RECOMP_FLAGS_IN();
    goto L_1719090F; /* 0x1719079C: jmp 0x1719090f */
L_171907A1:
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x171907A1: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    /* cmp eax, ebx */ /* 0x171907A4: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171907F9; /* 0x171907A6: jne 0x171907f9 */
L_171907A8:
    PUSH32(esp, 0x5Cu); /* 0x171907A8: push 0x5c */
    RECOMP_CALL(sub_1721B01C); /* 0x171907AA: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171907AF: pop ecx */
    MEM32(ebp + 0xC) = eax; /* 0x171907B0: mov dword ptr [ebp + 0xc], eax */
    /* test eax, eax */ /* 0x171907B3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 3; /* 0x171907B5: mov dword ptr [ebp - 4], 3 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1719090D; /* 0x171907BC: je 0x1719090d */
L_171907C2:
    eax = MEM32(esi + 0x8); /* 0x171907C2: mov eax, dword ptr [esi + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171907C5: push dword ptr [ebp + 0x10] */
    ebx = MEM32(eax + 0x10); /* 0x171907C8: mov ebx, dword ptr [eax + 0x10] */
    eax = MEM32(esi + 0x4); /* 0x171907CB: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, MEM32(eax + 0x24)); /* 0x171907CE: push dword ptr [eax + 0x24] */
    eax = MEM32(edi); /* 0x171907D1: mov eax, dword ptr [edi] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x171907D3: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x171907D6: push dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x171907D9: push edi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x171907DA: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x171907DD: push eax */
    eax = MEM32(edi); /* 0x171907DE: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x171907E0: push edi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x171907E1: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x171907E4: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x171907E7: push eax */
    eax = MEM32(esi + 0x8); /* 0x171907E8: mov eax, dword ptr [esi + 8] */
    PUSH32(esp, ebx); /* 0x171907EB: push ebx */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x171907EC: push dword ptr [eax + 0xc] */
    RECOMP_CALL(sub_1718FA5E); /* 0x171907EF: call 0x1718fa5e */
    RECOMP_FLAGS_IN();
    goto L_1719090F; /* 0x171907F4: jmp 0x1719090f */
L_171907F9:
    eax = MEM32(edi); /* 0x171907F9: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x171907FB: push edi */
    RECOMP_ICALL(MEM32(eax + 0x18)); /* 0x171907FC: call dword ptr [eax + 0x18] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171907FF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17190880; /* 0x17190801: je 0x17190880 */
L_17190803:
    PUSH32(esp, 0x80u); /* 0x17190803: push 0x80 */
    RECOMP_CALL(sub_1721B01C); /* 0x17190808: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x1719080D: pop ecx */
    MEM32(ebp + (-0x14)) = eax; /* 0x1719080E: mov dword ptr [ebp - 0x14], eax */
    /* test eax, eax */ /* 0x17190811: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 4; /* 0x17190813: mov dword ptr [ebp - 4], 4 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1719090D; /* 0x1719081A: je 0x1719090d */
L_17190820:
    eax = MEM32(esi + 0x4); /* 0x17190820: mov eax, dword ptr [esi + 4] */
    /* cmp MEM32(eax + 0x8), 0 */ /* 0x17190823: cmp dword ptr [eax + 8], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17190831; /* 0x17190827: je 0x17190831 */
L_17190829:
    ecx = MEM32(eax + 0x4); /* 0x17190829: mov ecx, dword ptr [eax + 4] */
    MEM32(ebp + 0xC) = ecx; /* 0x1719082C: mov dword ptr [ebp + 0xc], ecx */
    goto L_17190835; /* 0x1719082F: jmp 0x17190835 */
L_17190831:
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0; /* 0x17190831: and dword ptr [ebp + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_17190835:
    ebx = MEM32(eax + 0x24); /* 0x17190835: mov ebx, dword ptr [eax + 0x24] */
    eax = MEM32(esi + 0x8); /* 0x17190838: mov eax, dword ptr [esi + 8] */
    eax = MEM32(eax + 0x10); /* 0x1719083B: mov eax, dword ptr [eax + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1719083E: push dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x18)) = eax; /* 0x17190841: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(edi); /* 0x17190844: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x17190846: push edi */
    RECOMP_ICALL(MEM32(eax + 0x20)); /* 0x17190847: call dword ptr [eax + 0x20] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x1719084A: push eax */
    eax = MEM32(edi); /* 0x1719084B: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x1719084D: push edi */
    RECOMP_ICALL(MEM32(eax + 0x1C)); /* 0x1719084E: call dword ptr [eax + 0x1c] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x17190851: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17190852: push dword ptr [ebp + 0xc] */
    eax = MEM32(edi); /* 0x17190855: mov eax, dword ptr [edi] */
    PUSH32(esp, ebx); /* 0x17190857: push ebx */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x17190858: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1719085B: push dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x1719085E: push edi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x1719085F: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x17190862: push eax */
    eax = MEM32(edi); /* 0x17190863: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x17190865: push edi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x17190866: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x14)); /* 0x17190869: mov ecx, dword ptr [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x1719086C: push eax */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x1719086D: push dword ptr [ebp - 0x18] */
    eax = MEM32(esi + 0x8); /* 0x17190870: mov eax, dword ptr [esi + 8] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x17190873: push dword ptr [eax + 0xc] */
    RECOMP_CALL(sub_17190019); /* 0x17190876: call 0x17190019 */
    RECOMP_FLAGS_IN();
    goto L_1719090F; /* 0x1719087B: jmp 0x1719090f */
L_17190880:
    PUSH32(esp, 0x5Cu); /* 0x17190880: push 0x5c */
    RECOMP_CALL(sub_1721B01C); /* 0x17190882: call 0x1721b01c */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebp + (-0xD)), 0 */ /* 0x17190887: cmp byte ptr [ebp - 0xd], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0xD))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + 0xC) = eax; /* 0x1719088B: mov dword ptr [ebp + 0xc], eax */
    ecx = POP32_VAL(esp); /* 0x1719088E: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171908CE; /* 0x1719088F: je 0x171908ce */
L_17190891:
    /* test eax, eax */ /* 0x17190891: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 5; /* 0x17190893: mov dword ptr [ebp - 4], 5 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1719090D; /* 0x1719089A: je 0x1719090d */
L_1719089C:
    eax = MEM32(esi + 0x8); /* 0x1719089C: mov eax, dword ptr [esi + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1719089F: push dword ptr [ebp + 0x10] */
    ebx = MEM32(eax + 0x10); /* 0x171908A2: mov ebx, dword ptr [eax + 0x10] */
    eax = esi + 0x74; /* 0x171908A5: lea eax, [esi + 0x74] */
    PUSH32(esp, eax); /* 0x171908A8: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x171908A9: push dword ptr [ebp + 0x18] */
    eax = MEM32(edi); /* 0x171908AC: mov eax, dword ptr [edi] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x171908AE: push dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x171908B1: push edi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x171908B2: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x171908B5: push eax */
    eax = MEM32(edi); /* 0x171908B6: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x171908B8: push edi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x171908B9: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x171908BC: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x171908BF: push eax */
    eax = MEM32(esi + 0x8); /* 0x171908C0: mov eax, dword ptr [esi + 8] */
    PUSH32(esp, ebx); /* 0x171908C3: push ebx */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x171908C4: push dword ptr [eax + 0xc] */
    RECOMP_CALL(sub_1718FD16); /* 0x171908C7: call 0x1718fd16 */
    RECOMP_FLAGS_IN();
    goto L_1719090F; /* 0x171908CC: jmp 0x1719090f */
L_171908CE:
    /* test eax, eax */ /* 0x171908CE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = 6; /* 0x171908D0: mov dword ptr [ebp - 4], 6 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1719090D; /* 0x171908D7: je 0x1719090d */
L_171908D9:
    eax = MEM32(esi + 0x8); /* 0x171908D9: mov eax, dword ptr [esi + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171908DC: push dword ptr [ebp + 0x10] */
    ebx = MEM32(eax + 0x10); /* 0x171908DF: mov ebx, dword ptr [eax + 0x10] */
    eax = MEM32(esi + 0x4); /* 0x171908E2: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, MEM32(eax + 0x24)); /* 0x171908E5: push dword ptr [eax + 0x24] */
    eax = MEM32(edi); /* 0x171908E8: mov eax, dword ptr [edi] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x171908EA: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x171908ED: push dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x171908F0: push edi */
    RECOMP_ICALL(MEM32(eax + 0x14)); /* 0x171908F1: call dword ptr [eax + 0x14] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x171908F4: push eax */
    eax = MEM32(edi); /* 0x171908F5: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x171908F7: push edi */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x171908F8: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x171908FB: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x171908FE: push eax */
    eax = MEM32(esi + 0x8); /* 0x171908FF: mov eax, dword ptr [esi + 8] */
    PUSH32(esp, ebx); /* 0x17190902: push ebx */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x17190903: push dword ptr [eax + 0xc] */
    RECOMP_CALL(sub_1718F8BF); /* 0x17190906: call 0x1718f8bf */
    RECOMP_FLAGS_IN();
    goto L_1719090F; /* 0x1719090B: jmp 0x1719090f */
L_1719090D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1719090D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1719090F:
    ecx = MEM32(ebp + 0x8); /* 0x1719090F: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx) = eax; /* 0x17190912: mov dword ptr [ecx], eax */
    ecx = MEM32(ebp + (-0xC)); /* 0x17190914: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x17190917: neg eax */
    _flag_k = FK_CMP;
    { uint32_t _sa = eax, _sb = eax, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x17190919: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    edi = POP32_VAL(esp); /* 0x1719091B: pop edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x7FF8FFF2u);
    eax = eax & 0x7FF8FFF2u; /* 0x1719091C: and eax, 0x7ff8fff2 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x17190921: pop esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x8007000Eu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x8007000Eu; /* 0x17190922: add eax, 0x8007000e */
    _flag_k = FK_ADD;
    ebx = POP32_VAL(esp); /* 0x17190927: pop ebx */
    MEM32(FS_BASE + (0)) = ecx; /* 0x17190928: mov dword ptr fs:[0], ecx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1719092F: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x17190930: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_17192A22(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17192A22u);

L_17192A22:
    fp_push(*(double*)ADDR(0x172374F0)); /* 0x17192A22: fld qword ptr [0x172374f0] */
    fp_push(*(double*)ADDR(0x170234E8)); /* 0x17192A28: fld qword ptr [0x170234e8] */
    _st[0] *= _st[1]; /* 0x17192A2E: fmul st(1) */
    fp_push(_st[1]); /* 0x17192A30: fld st(1) */
    _st[0] *= _st[2]; /* 0x17192A32: fmul st(2) */
    _st[0] = *(double*)ADDR(0x170234E0) / _st[0]; /* 0x17192A34: fdivr qword ptr [0x170234e0] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17192A3A: fsubp st(1) */
    fp_push(*(double*)ADDR(0x170234D8)); /* 0x17192A3C: fld qword ptr [0x170234d8] */
    _st[0] /= _st[2]; /* 0x17192A42: fdiv st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17192A44: faddp st(1) */
    _st[0] += *(double*)ADDR(0x170234D0); /* 0x17192A46: fadd qword ptr [0x170234d0] */
    *(double*)ADDR(0x17237510) = _st[0]; /* 0x17192A4C: fst qword ptr [0x17237510] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x17192A52: fstp st(1) */
    fp_push(*(double*)ADDR(0x17001D88)); /* 0x17192A54: fld qword ptr [0x17001d88] */
    _st[0] += _st[1]; /* 0x17192A5A: fadd st(1) */
    fp_push(1.0); /* 0x17192A5C: fld1  */
    _st[0] -= _st[2]; /* 0x17192A5E: fsub st(2) */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x17192A60: fdivp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(0x17237518) = _v; } /* 0x17192A62: fstp qword ptr [0x17237518] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17192A68: fstp st(0) */
    fp_push(*(double*)ADDR(0x17237500)); /* 0x17192A6A: fld qword ptr [0x17237500] */
    _st[0] += *(double*)ADDR(0x172374F8); /* 0x17192A70: fadd qword ptr [0x172374f8] */
    fp_push(_st[0]); /* 0x17192A76: fld st(0) */
    *(double*)ADDR(0x17237520) = _st[0]; /* 0x17192A78: fst qword ptr [0x17237520] */
    fp_push(_st[1]); /* 0x17192A7E: fld st(1) */
    _st[0] *= *(double*)ADDR(0x17237500); /* 0x17192A80: fmul qword ptr [0x17237500] */
    _st[0] *= *(double*)ADDR(0x17005458); /* 0x17192A86: fmul qword ptr [0x17005458] */
    _st[0] = sqrt(_st[0]); /* 0x17192A8C: fsqrt  */
    { double _v = fp_pop(); *(double*)ADDR(0x1723FB28) = _v; } /* 0x17192A8E: fstp qword ptr [0x1723fb28] */
    fp_push(1.0); /* 0x17192A94: fld1  */
    _st[0] /= _st[1]; /* 0x17192A96: fdiv st(1) */
    { double _v = fp_pop(); *(double*)ADDR(0x17237528) = _v; } /* 0x17192A98: fstp qword ptr [0x17237528] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17192A9E: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17192AA0: fstp st(0) */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17192AA2: ret  */
    RECOMP_REGS_OUT();
}

void sub_17192AA8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17192AA8u);

L_17192AA8:
    edi = edi; /* 0x17192AA8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17192AAA: push ebp */
    ebp = esp; /* 0x17192AAB: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x17192AAD: sub esp, 0xc */
    _flag_k = FK_CMP;
    fp_push(0.0); /* 0x17192AB0: fldz  */
    PUSH32(esp, esi); /* 0x17192AB2: push esi */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x17192AB3: fstp dword ptr [ebp - 0xc] */
    PUSH32(esp, edi); /* 0x17192AB6: push edi */
    fp_push(0.0); /* 0x17192AB7: fldz  */
    esi = ebp + (-0xC); /* 0x17192AB9: lea esi, [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x17192ABC: fstp dword ptr [ebp - 8] */
    edi = ecx; /* 0x17192ABF: mov edi, ecx */
    fp_push(0.0); /* 0x17192AC1: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17192AC3: fstp dword ptr [ebp - 4] */
    fp_push(0.0); /* 0x17192AC6: fldz  */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17192AC8: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0xC) = _v; } /* 0x17192AC9: fstp dword ptr [ecx + 0xc] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17192ACC: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17192ACD: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x17192ACE: pop edi */
    esi = POP32_VAL(esp); /* 0x17192ACF: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17192AD0: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x17192AD1: ret  */
    RECOMP_REGS_OUT();
}

void sub_17192AD7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17192AD7u);

L_17192AD7:
    edi = edi; /* 0x17192AD7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17192AD9: push ebp */
    ebp = esp; /* 0x17192ADA: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x17192ADC: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x17192ADF: push ebx */
    ebx = ecx; /* 0x17192AE0: mov ebx, ecx */
    ecx = MEM32(ebp + 0x10); /* 0x17192AE2: mov ecx, dword ptr [ebp + 0x10] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3Cu); /* 0x17192AE5: imul ecx, ecx, 0x3c */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0x28));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebx + 0x28); /* 0x17192AE8: add ecx, dword ptr [ebx + 0x28] */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x17192AEB: push esi */
    eax = MEM32(ecx + 0x18); /* 0x17192AEC: mov eax, dword ptr [ecx + 0x18] */
    /* cmp eax, 0xFFFFFFFFu */ /* 0x17192AEF: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x17192AF2: push edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17192BA1; /* 0x17192AF3: je 0x17192ba1 */
L_17192AF9:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x17192AF9: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x17192AFD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17192BBC; /* 0x17192AFF: jbe 0x17192bbc */
L_17192B05:
    eax = ecx + 0x1C; /* 0x17192B05: lea eax, [ecx + 0x1c] */
    MEM32(ebp + 0x10) = eax; /* 0x17192B08: mov dword ptr [ebp + 0x10], eax */
L_17192B0B:
    eax = MEM32(ebp + 0x10); /* 0x17192B0B: mov eax, dword ptr [ebp + 0x10] */
    edx = MEM32(eax); /* 0x17192B0E: mov edx, dword ptr [eax] */
    edx = edx + edx * 2; /* 0x17192B10: lea edx, [edx + edx*2] */
    if (3u) _cf = (((edx) >> 29) & 1u); /* 0x17192B13: shl edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 3u; /* 0x17192B13: shl edx, 3 */
    MEM32(ebp + (-0x8)) = 3; /* 0x17192B16: mov dword ptr [ebp - 8], 3 */
L_17192B1D:
    eax = MEM32(ebx + 0x40); /* 0x17192B1D: mov eax, dword ptr [ebx + 0x40] */
    eax = MEM32(eax + edx); /* 0x17192B20: mov eax, dword ptr [eax + edx] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebx + 0x38)); /* 0x17192B23: imul eax, dword ptr [ebx + 0x38] */
    esi = MEM32(ebx + 0x3C); /* 0x17192B27: mov esi, dword ptr [ebx + 0x3c] */
    eax = eax + eax * 2; /* 0x17192B2A: lea eax, [eax + eax*2] */
    esi = esi + eax * 4; /* 0x17192B2D: lea esi, [esi + eax*4] */
    eax = MEM32(ebp + 0x8); /* 0x17192B30: mov eax, dword ptr [ebp + 8] */
    edi = ebp + (-0x14); /* 0x17192B33: lea edi, [ebp - 0x14] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17192B36: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17192B37: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17192B38: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x17192B39: fld dword ptr [ebp - 0x14] */
    _st[0] -= (double)*(float*)ADDR(eax); /* 0x17192B3C: fsub dword ptr [eax] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x17192B3E: fld dword ptr [ebp - 0x10] */
    esi = MEM32(ebp + 0xC); /* 0x17192B41: mov esi, dword ptr [ebp + 0xc] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x4); /* 0x17192B44: fsub dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x17192B47: fld dword ptr [ebp - 0xc] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x8); /* 0x17192B4A: fsub dword ptr [eax + 8] */
    fp_push(_st[0]); /* 0x17192B4D: fld st(0) */
    _st[0] *= _st[1]; /* 0x17192B4F: fmul st(1) */
    fp_push(_st[2]); /* 0x17192B51: fld st(2) */
    _st[0] *= _st[3]; /* 0x17192B53: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17192B55: faddp st(1) */
    fp_push(_st[3]); /* 0x17192B57: fld st(3) */
    _st[0] *= _st[4]; /* 0x17192B59: fmul st(4) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17192B5B: faddp st(1) */
    _st[0] = sqrt(_st[0]); /* 0x17192B5D: fsqrt  */
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x17192B5F: fstp st(3) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17192B61: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17192B63: fstp st(0) */
    fp_push(*(double*)ADDR(0x17237508)); /* 0x17192B65: fld qword ptr [0x17237508] */
    fp_xch(1); /* 0x17192B6B: fxch st(1) */
    fp_push(_st[1]); /* 0x17192B6D: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x17192B6F: fmulp st(1) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x17192B71: fstp st(1) */
    fp_push(_st[0]); /* 0x17192B73: fld st(0) */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(esi)); /* 0x17192B75: fcomp dword ptr [esi] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17192B77: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17192B79: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17192B82; /* 0x17192B7C: jne 0x17192b82 */
L_17192B7E:
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x17192B7E: fstp dword ptr [esi] */
    goto L_17192B84; /* 0x17192B80: jmp 0x17192b84 */
L_17192B82:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17192B82: fstp st(0) */
L_17192B84:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x17192B84: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) - 1; /* 0x17192B87: dec dword ptr [ebp - 8] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17192B1D; /* 0x17192B8A: jne 0x17192b1d */
L_17192B8C:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x17192B8C: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x4)); /* 0x17192B8F: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 4; /* 0x17192B92: add dword ptr [ebp + 0x10], 4 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ecx + 0x18) */ /* 0x17192B96: cmp eax, dword ptr [ecx + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17192B0B; /* 0x17192B99: jb 0x17192b0b */
L_17192B9F:
    goto L_17192BBC; /* 0x17192B9F: jmp 0x17192bbc */
L_17192BA1:
    PUSH32(esp, 8); /* 0x17192BA1: push 8 */
    esi = ecx + 0x1C; /* 0x17192BA3: lea esi, [ecx + 0x1c] */
    edi = POP32_VAL(esp); /* 0x17192BA6: pop edi */
L_17192BA7:
    PUSH32(esp, MEM32(esi)); /* 0x17192BA7: push dword ptr [esi] */
    ecx = ebx; /* 0x17192BA9: mov ecx, ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17192BAB: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17192BAE: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_17192AD7); /* 0x17192BB1: call 0x17192ad7 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x17192BB6: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x17192BB9: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17192BA7; /* 0x17192BBA: jne 0x17192ba7 */
L_17192BBC:
    edi = POP32_VAL(esp); /* 0x17192BBC: pop edi */
    esi = POP32_VAL(esp); /* 0x17192BBD: pop esi */
    ebx = POP32_VAL(esp); /* 0x17192BBE: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17192BBF: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17192BC0: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17192BC8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17192BC8u);

L_17192BC8:
    edi = edi; /* 0x17192BC8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17192BCA: push ebp */
    ebp = esp; /* 0x17192BCB: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xE0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xE0u; /* 0x17192BCD: sub esp, 0xe0 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x17192BD3: push ebx */
    PUSH32(esp, esi); /* 0x17192BD4: push esi */
    esi = MEM32(ebp + 0xC); /* 0x17192BD5: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x17192BD8: push edi */
    edi = MEM32(esi + 0x8); /* 0x17192BD9: mov edi, dword ptr [esi + 8] */
    ebx = ecx; /* 0x17192BDC: mov ebx, ecx */
    edx = MEM32(ebx + 0x38); /* 0x17192BDE: mov edx, dword ptr [ebx + 0x38] */
    ecx = MEM32(ebx + 0x3C); /* 0x17192BE1: mov ecx, dword ptr [ebx + 0x3c] */
    eax = edx; /* 0x17192BE4: mov eax, edx */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x17192BE6: imul eax, edi */
    eax = eax + eax * 2; /* 0x17192BE9: lea eax, [eax + eax*2] */
    eax = ecx + eax * 4; /* 0x17192BEC: lea eax, [ecx + eax*4] */
    MEM32(ebp + (-0x28)) = edi; /* 0x17192BEF: mov dword ptr [ebp - 0x28], edi */
    edi = MEM32(ebp + 0x10); /* 0x17192BF2: mov edi, dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(edi + 0x8)); /* 0x17192BF5: fld dword ptr [edi + 8] */
    fp_push(_st[0]); /* 0x17192BF8: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x17192BFA: fmul dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x17192BFC: fstp dword ptr [ebp - 0x24] */
    fp_push(_st[0]); /* 0x17192BFF: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x17192C01: fmul dword ptr [eax + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x17192C04: fstp dword ptr [ebp - 0x20] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x17192C07: fmul dword ptr [eax + 8] */
    eax = MEM32(esi + 0x4); /* 0x17192C0A: mov eax, dword ptr [esi + 4] */
    fp_push(*(float*)&MEM32(edi + 0x4)); /* 0x17192C0D: fld dword ptr [edi + 4] */
    MEM32(ebp + (-0x30)) = eax; /* 0x17192C10: mov dword ptr [ebp - 0x30], eax */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx); /* 0x17192C13: imul eax, edx */
    fp_push(_st[0]); /* 0x17192C16: fld st(0) */
    eax = eax + eax * 2; /* 0x17192C18: lea eax, [eax + eax*2] */
    eax = ecx + eax * 4; /* 0x17192C1B: lea eax, [ecx + eax*4] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x17192C1E: fmul dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x17192C20: fstp dword ptr [ebp - 0xc] */
    fp_push(_st[0]); /* 0x17192C23: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x17192C25: fmul dword ptr [eax + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x17192C28: fstp dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x17192C2B: fmul dword ptr [eax + 8] */
    eax = MEM32(esi); /* 0x17192C2E: mov eax, dword ptr [esi] */
    fp_push(*(float*)&MEM32(edi)); /* 0x17192C30: fld dword ptr [edi] */
    MEM32(ebp + (-0x48)) = eax; /* 0x17192C32: mov dword ptr [ebp - 0x48], eax */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx); /* 0x17192C35: imul eax, edx */
    fp_push(_st[0]); /* 0x17192C38: fld st(0) */
    eax = eax + eax * 2; /* 0x17192C3A: lea eax, [eax + eax*2] */
    eax = ecx + eax * 4; /* 0x17192C3D: lea eax, [ecx + eax*4] */
    esi = ebp + (-0x18); /* 0x17192C40: lea esi, [ebp - 0x18] */
    edi = ebp + (-0x90); /* 0x17192C43: lea edi, [ebp - 0x90] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x17192C49: fmul dword ptr [eax] */
    ecx = edx; /* 0x17192C4B: mov ecx, edx */
    fp_push(_st[1]); /* 0x17192C4D: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x17192C4F: fmul dword ptr [eax + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x17192C52: fstp dword ptr [ebp - 0x14] */
    fp_push(_st[1]); /* 0x17192C55: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x17192C57: fmul dword ptr [eax + 8] */
    eax = ecx; /* 0x17192C5A: mov eax, ecx */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x28))); /* 0x17192C5C: imul eax, dword ptr [ebp - 0x28] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x17192C60: fstp dword ptr [ebp - 0x10] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0xC)); /* 0x17192C63: fadd dword ptr [ebp - 0xc] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x17192C66: fstp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x17192C68: fld dword ptr [ebp - 0x14] */
    eax = eax + eax * 2; /* 0x17192C6B: lea eax, [eax + eax*2] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x8)); /* 0x17192C6E: fadd dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x17192C71: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x17192C74: fld dword ptr [ebp - 0x10] */
    _st[0] += _st[2]; /* 0x17192C77: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17192C79: fstp dword ptr [ebp - 4] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x24)); /* 0x17192C7C: fadd dword ptr [ebp - 0x24] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x17192C7F: fstp dword ptr [ebp - 0x18] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17192C82: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17192C84: fld dword ptr [ebp - 8] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x20)); /* 0x17192C87: fadd dword ptr [ebp - 0x20] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x17192C8A: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17192C8D: fld dword ptr [ebp - 4] */
    _st[0] += _st[1]; /* 0x17192C90: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x17192C92: fstp dword ptr [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17192C95: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17192C96: movsd dword ptr es:[edi], dword ptr [esi] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17192C97: fstp st(0) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17192C99: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = MEM32(ebp + 0x14); /* 0x17192C9A: mov edi, dword ptr [ebp + 0x14] */
    esi = MEM32(ebx + 0x3C); /* 0x17192C9D: mov esi, dword ptr [ebx + 0x3c] */
    eax = esi + eax * 4; /* 0x17192CA0: lea eax, [esi + eax*4] */
    fp_push(*(float*)&MEM32(edi + 0x8)); /* 0x17192CA3: fld dword ptr [edi + 8] */
    fp_push(_st[0]); /* 0x17192CA6: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x17192CA8: fmul dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x17192CAA: fstp dword ptr [ebp - 0x24] */
    fp_push(_st[0]); /* 0x17192CAD: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x17192CAF: fmul dword ptr [eax + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x17192CB2: fstp dword ptr [ebp - 0x20] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x17192CB5: fmul dword ptr [eax + 8] */
    eax = ecx; /* 0x17192CB8: mov eax, ecx */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + (-0x48))); /* 0x17192CBA: imul ecx, dword ptr [ebp - 0x48] */
    fp_push(*(float*)&MEM32(edi + 0x4)); /* 0x17192CBE: fld dword ptr [edi + 4] */
    fp_push(_st[0]); /* 0x17192CC1: fld st(0) */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x30))); /* 0x17192CC3: imul eax, dword ptr [ebp - 0x30] */
    eax = eax + eax * 2; /* 0x17192CC7: lea eax, [eax + eax*2] */
    eax = esi + eax * 4; /* 0x17192CCA: lea eax, [esi + eax*4] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x17192CCD: fmul dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x17192CCF: fstp dword ptr [ebp - 0xc] */
    fp_push(_st[0]); /* 0x17192CD2: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x17192CD4: fmul dword ptr [eax + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x17192CD7: fstp dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x17192CDA: fmul dword ptr [eax + 8] */
    eax = ecx + ecx * 2; /* 0x17192CDD: lea eax, [ecx + ecx*2] */
    fp_push(*(float*)&MEM32(edi)); /* 0x17192CE0: fld dword ptr [edi] */
    eax = esi + eax * 4; /* 0x17192CE2: lea eax, [esi + eax*4] */
    fp_push(_st[0]); /* 0x17192CE5: fld st(0) */
    ecx = edx; /* 0x17192CE7: mov ecx, edx */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x17192CE9: fmul dword ptr [eax] */
    edx = MEM32(ebp + 0x18); /* 0x17192CEB: mov edx, dword ptr [ebp + 0x18] */
    fp_push(_st[1]); /* 0x17192CEE: fld st(1) */
    esi = ebp + (-0x18); /* 0x17192CF0: lea esi, [ebp - 0x18] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x17192CF3: fmul dword ptr [eax + 4] */
    edi = ebp + (-0x84); /* 0x17192CF6: lea edi, [ebp - 0x84] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x17192CFC: fstp dword ptr [ebp - 0x14] */
    fp_push(_st[1]); /* 0x17192CFF: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x17192D01: fmul dword ptr [eax + 8] */
    eax = ecx; /* 0x17192D04: mov eax, ecx */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x28))); /* 0x17192D06: imul eax, dword ptr [ebp - 0x28] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x17192D0A: fstp dword ptr [ebp - 0x10] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0xC)); /* 0x17192D0D: fadd dword ptr [ebp - 0xc] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x17192D10: fstp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x17192D12: fld dword ptr [ebp - 0x14] */
    eax = eax + eax * 2; /* 0x17192D15: lea eax, [eax + eax*2] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x8)); /* 0x17192D18: fadd dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x17192D1B: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x17192D1E: fld dword ptr [ebp - 0x10] */
    _st[0] += _st[2]; /* 0x17192D21: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17192D23: fstp dword ptr [ebp - 4] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x24)); /* 0x17192D26: fadd dword ptr [ebp - 0x24] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x17192D29: fstp dword ptr [ebp - 0x18] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17192D2C: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17192D2E: fld dword ptr [ebp - 8] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x20)); /* 0x17192D31: fadd dword ptr [ebp - 0x20] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x17192D34: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17192D37: fld dword ptr [ebp - 4] */
    _st[0] += _st[1]; /* 0x17192D3A: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x17192D3C: fstp dword ptr [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17192D3F: movsd dword ptr es:[edi], dword ptr [esi] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17192D40: fstp st(0) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17192D42: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(edx + 0x8)); /* 0x17192D43: fld dword ptr [edx + 8] */
    fp_push(_st[0]); /* 0x17192D46: fld st(0) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17192D48: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebx + 0x3C); /* 0x17192D49: mov esi, dword ptr [ebx + 0x3c] */
    eax = esi + eax * 4; /* 0x17192D4C: lea eax, [esi + eax*4] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x17192D4F: fmul dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x17192D51: fstp dword ptr [ebp - 0x24] */
    fp_push(_st[0]); /* 0x17192D54: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x17192D56: fmul dword ptr [eax + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x17192D59: fstp dword ptr [ebp - 0x20] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x17192D5C: fmul dword ptr [eax + 8] */
    eax = ecx; /* 0x17192D5F: mov eax, ecx */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + (-0x30))); /* 0x17192D61: imul eax, dword ptr [ebp - 0x30] */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x17192D65: fld dword ptr [edx + 4] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + (-0x48))); /* 0x17192D68: imul ecx, dword ptr [ebp - 0x48] */
    fp_push(_st[0]); /* 0x17192D6C: fld st(0) */
    eax = eax + eax * 2; /* 0x17192D6E: lea eax, [eax + eax*2] */
    eax = esi + eax * 4; /* 0x17192D71: lea eax, [esi + eax*4] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x17192D74: fmul dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x17192D76: fstp dword ptr [ebp - 0xc] */
    fp_push(_st[0]); /* 0x17192D79: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x17192D7B: fmul dword ptr [eax + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x17192D7E: fstp dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x17192D81: fmul dword ptr [eax + 8] */
    /* cmp MEM32(ebp + 0x30), 6 */ /* 0x17192D84: cmp dword ptr [ebp + 0x30], 6 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x30)); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(edx)); /* 0x17192D88: fld dword ptr [edx] */
    fp_push(_st[0]); /* 0x17192D8A: fld st(0) */
    eax = ecx + ecx * 2; /* 0x17192D8C: lea eax, [ecx + ecx*2] */
    eax = esi + eax * 4; /* 0x17192D8F: lea eax, [esi + eax*4] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x17192D92: fmul dword ptr [eax] */
    esi = ebp + (-0x18); /* 0x17192D94: lea esi, [ebp - 0x18] */
    fp_push(_st[1]); /* 0x17192D97: fld st(1) */
    edi = ebp + (-0x78); /* 0x17192D99: lea edi, [ebp - 0x78] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x17192D9C: fmul dword ptr [eax + 4] */
    MEM8(ebp + (-0x29)) = (uint8_t)(0); /* 0x17192D9F: mov byte ptr [ebp - 0x29], 0 */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x17192DA3: fstp dword ptr [ebp - 0x14] */
    fp_push(_st[1]); /* 0x17192DA6: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x17192DA8: fmul dword ptr [eax + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x17192DAB: fstp dword ptr [ebp - 0x10] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0xC)); /* 0x17192DAE: fadd dword ptr [ebp - 0xc] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x17192DB1: fstp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x17192DB3: fld dword ptr [ebp - 0x14] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x8)); /* 0x17192DB6: fadd dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x17192DB9: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x17192DBC: fld dword ptr [ebp - 0x10] */
    _st[0] += _st[2]; /* 0x17192DBF: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17192DC1: fstp dword ptr [ebp - 4] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x24)); /* 0x17192DC4: fadd dword ptr [ebp - 0x24] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x17192DC7: fstp dword ptr [ebp - 0x18] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17192DCA: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17192DCC: fld dword ptr [ebp - 8] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x20)); /* 0x17192DCF: fadd dword ptr [ebp - 0x20] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x17192DD2: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17192DD5: fld dword ptr [ebp - 4] */
    _st[0] += _st[1]; /* 0x17192DD8: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x17192DDA: fstp dword ptr [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17192DDD: movsd dword ptr es:[edi], dword ptr [esi] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17192DDE: fstp st(0) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17192DE0: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(double*)ADDR(ebp + 0x34)); /* 0x17192DE1: fld qword ptr [ebp + 0x34] */
    _st[0] *= *(double*)ADDR(0x170054D8); /* 0x17192DE4: fmul qword ptr [0x170054d8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17192DEA: movsd dword ptr es:[edi], dword ptr [esi] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0xC8)) = _v; } /* 0x17192DEB: fstp qword ptr [ebp - 0xc8] */
    fp_push(*(double*)ADDR(0x17237508)); /* 0x17192DF1: fld qword ptr [0x17237508] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17192E8B; /* 0x17192DF7: je 0x17192e8b */
L_17192DFD:
    fp_push(*(double*)ADDR(0x170054B8)); /* 0x17192DFD: fld qword ptr [0x170054b8] */
    PUSH32(esp, 3); /* 0x17192E03: push 3 */
    _st[0] *= _st[1]; /* 0x17192E05: fmul st(1) */
    MEM32(ebp + (-0x4C)) = 0xBF800000u; /* 0x17192E07: mov dword ptr [ebp - 0x4c], 0xbf800000 */
    fp_push(_st[1]); /* 0x17192E0E: fld st(1) */
    edx = ebp + (-0x88); /* 0x17192E10: lea edx, [ebp - 0x88] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x17192E16: fstp dword ptr [ebp - 0x28] */
    esi = POP32_VAL(esp); /* 0x17192E19: pop esi */
L_17192E1A:
    ecx = MEM32(ebp + 0x24); /* 0x17192E1A: mov ecx, dword ptr [ebp + 0x24] */
    fp_push(*(float*)&MEM32(edx + (-0x8))); /* 0x17192E1D: fld dword ptr [edx - 8] */
    _st[0] -= (double)*(float*)ADDR(ecx); /* 0x17192E20: fsub dword ptr [ecx] */
    fp_push(*(float*)&MEM32(edx + (-0x4))); /* 0x17192E22: fld dword ptr [edx - 4] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x4); /* 0x17192E25: fsub dword ptr [ecx + 4] */
    fp_push(*(float*)&MEM32(edx)); /* 0x17192E28: fld dword ptr [edx] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x8); /* 0x17192E2A: fsub dword ptr [ecx + 8] */
    fp_push(_st[2]); /* 0x17192E2D: fld st(2) */
    _st[0] *= _st[3]; /* 0x17192E2F: fmul st(3) */
    fp_push(_st[1]); /* 0x17192E31: fld st(1) */
    _st[0] *= _st[2]; /* 0x17192E33: fmul st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17192E35: faddp st(1) */
    fp_push(_st[2]); /* 0x17192E37: fld st(2) */
    _st[0] *= _st[3]; /* 0x17192E39: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17192E3B: faddp st(1) */
    _st[0] = sqrt(_st[0]); /* 0x17192E3D: fsqrt  */
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x17192E3F: fstp st(3) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17192E41: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17192E43: fstp st(0) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x28)); /* 0x17192E45: fmul dword ptr [ebp - 0x28] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x17192E48: fst dword ptr [ebp - 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x17192E4B: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17192E4D: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x17192E4F: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17192E59; /* 0x17192E52: jp 0x17192e59 */
L_17192E54:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17192E54: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x17192E56: fld dword ptr [ebp - 0x30] */
L_17192E59:
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x17192E59: fld dword ptr [ebp - 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x4C))); /* 0x17192E5C: fcomp dword ptr [ebp - 0x4c] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17192E5F: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17192E61: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17192E6C; /* 0x17192E64: jne 0x17192e6c */
L_17192E66:
    eax = MEM32(ebp + (-0x30)); /* 0x17192E66: mov eax, dword ptr [ebp - 0x30] */
    MEM32(ebp + (-0x4C)) = eax; /* 0x17192E69: mov dword ptr [ebp - 0x4c], eax */
L_17192E6C:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0xCu; /* 0x17192E6C: add edx, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x17192E6F: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17192E1A; /* 0x17192E70: jne 0x17192e1a */
L_17192E72:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17007800)); /* 0x17192E72: fcomp qword ptr [0x17007800] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17192E78: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x17192E7A: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17192E8E; /* 0x17192E7D: jp 0x17192e8e */
L_17192E7F:
    /* cmp MEM32(ebp + 0x30), 4 */ /* 0x17192E7F: cmp dword ptr [ebp + 0x30], 4 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x30)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_17192E8E; /* 0x17192E83: jae 0x17192e8e */
L_17192E85:
    MEM8(ebp + (-0x29)) = (uint8_t)(1); /* 0x17192E85: mov byte ptr [ebp - 0x29], 1 */
    goto L_17192E8E; /* 0x17192E89: jmp 0x17192e8e */
L_17192E8B:
    ecx = MEM32(ebp + 0x24); /* 0x17192E8B: mov ecx, dword ptr [ebp + 0x24] */
L_17192E8E:
    fp_push(*(float*)&MEM32(0x17023500)); /* 0x17192E8E: fld dword ptr [0x17023500] */
    esi = ebp + (-0xC); /* 0x17192E94: lea esi, [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0x78))); /* 0x17192E97: fld dword ptr [ebp - 0x78] */
    edi = ebp + (-0xB4); /* 0x17192E9A: lea edi, [ebp - 0xb4] */
    _st[0] *= _st[1]; /* 0x17192EA0: fmul st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x4C)) = _v; } /* 0x17192EA2: fst dword ptr [ebp - 0x4c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x17192EA5: fstp dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0x74))); /* 0x17192EA8: fld dword ptr [ebp - 0x74] */
    _st[0] *= _st[1]; /* 0x17192EAB: fmul st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x17192EAD: fst dword ptr [ebp - 0x28] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x17192EB0: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x70))); /* 0x17192EB3: fld dword ptr [ebp - 0x70] */
    _st[0] *= _st[1]; /* 0x17192EB6: fmul st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x17192EB8: fst dword ptr [ebp - 0x30] */
    eax = MEM32(ebp + (-0x30)); /* 0x17192EBB: mov eax, dword ptr [ebp - 0x30] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x17192EBE: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x84))); /* 0x17192EC1: fld dword ptr [ebp - 0x84] */
    _st[0] *= _st[1]; /* 0x17192EC7: fmul st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x17192EC9: fst dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0x80))); /* 0x17192ECC: fld dword ptr [ebp - 0x80] */
    _st[0] *= _st[2]; /* 0x17192ECF: fmul st(2) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x58)) = _v; } /* 0x17192ED1: fst dword ptr [ebp - 0x58] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x17192ED4: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x7C))); /* 0x17192ED7: fld dword ptr [ebp - 0x7c] */
    _st[0] *= _st[2]; /* 0x17192EDA: fmul st(2) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x17192EDC: fst dword ptr [ebp - 0x3c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17192EDF: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(0x170054A8)); /* 0x17192EE2: fld dword ptr [0x170054a8] */
    fp_push(*(float*)&MEM32(ebp + (-0x90))); /* 0x17192EE8: fld dword ptr [ebp - 0x90] */
    _st[0] *= _st[1]; /* 0x17192EEE: fmul st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x8C))); /* 0x17192EF0: fld dword ptr [ebp - 0x8c] */
    _st[0] *= _st[2]; /* 0x17192EF6: fmul st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0x88))); /* 0x17192EF8: fld dword ptr [ebp - 0x88] */
    _st[0] *= _st[3]; /* 0x17192EFE: fmul st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x64)) = _v; } /* 0x17192F00: fstp dword ptr [ebp - 0x64] */
    fp_push(_st[1]); /* 0x17192F03: fld st(1) */
    _st[0] += (double)*(float*)ADDR(ebp + (-0xC)); /* 0x17192F05: fadd dword ptr [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x17192F08: fstp dword ptr [ebp - 0x24] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x8)); /* 0x17192F0B: fadd dword ptr [ebp - 8] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x17192F0E: fstp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x64))); /* 0x17192F10: fld dword ptr [ebp - 0x64] */
    MEM32(ebp + (-0x64)) = eax; /* 0x17192F13: mov dword ptr [ebp - 0x64], eax */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x4)); /* 0x17192F16: fadd dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x17192F19: fld dword ptr [ebp - 0x24] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x18)); /* 0x17192F1C: fadd dword ptr [ebp - 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x17192F1F: fstp dword ptr [ebp - 0xc] */
    fp_push(_st[1]); /* 0x17192F22: fld st(1) */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x14)); /* 0x17192F24: fadd dword ptr [ebp - 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x17192F27: fstp dword ptr [ebp - 8] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x10)); /* 0x17192F2A: fadd dword ptr [ebp - 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17192F2D: fstp dword ptr [ebp - 4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17192F30: movsd dword ptr es:[edi], dword ptr [esi] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17192F31: fstp st(0) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17192F33: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x4C))); /* 0x17192F34: fld dword ptr [ebp - 0x4c] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x17192F37: fld dword ptr [ebp - 0x28] */
    fp_push(*(float*)&MEM32(ebp + (-0x84))); /* 0x17192F3A: fld dword ptr [ebp - 0x84] */
    _st[0] *= _st[3]; /* 0x17192F40: fmul st(3) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17192F42: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x80))); /* 0x17192F43: fld dword ptr [ebp - 0x80] */
    _st[0] *= _st[4]; /* 0x17192F46: fmul st(4) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x17192F48: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x7C))); /* 0x17192F4B: fld dword ptr [ebp - 0x7c] */
    _st[0] *= _st[4]; /* 0x17192F4E: fmul st(4) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x17192F50: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x90))); /* 0x17192F53: fld dword ptr [ebp - 0x90] */
    _st[0] *= _st[6]; /* 0x17192F59: fmul st(6) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4C)) = _v; } /* 0x17192F5B: fstp dword ptr [ebp - 0x4c] */
    eax = MEM32(ebp + (-0x4C)); /* 0x17192F5E: mov eax, dword ptr [ebp - 0x4c] */
    fp_push(*(float*)&MEM32(ebp + (-0x8C))); /* 0x17192F61: fld dword ptr [ebp - 0x8c] */
    MEM32(ebp + (-0xC)) = eax; /* 0x17192F67: mov dword ptr [ebp - 0xc], eax */
    _st[0] *= _st[6]; /* 0x17192F6A: fmul st(6) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x17192F6C: fstp dword ptr [ebp - 0x28] */
    fp_push(*(float*)&MEM32(ebp + (-0x88))); /* 0x17192F6F: fld dword ptr [ebp - 0x88] */
    eax = MEM32(ebp + (-0x28)); /* 0x17192F75: mov eax, dword ptr [ebp - 0x28] */
    _st[0] *= _st[6]; /* 0x17192F78: fmul st(6) */
    MEM32(ebp + (-0x8)) = eax; /* 0x17192F7A: mov dword ptr [ebp - 8], eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x17192F7D: fstp dword ptr [ebp - 0x30] */
    eax = MEM32(ebp + (-0x30)); /* 0x17192F80: mov eax, dword ptr [ebp - 0x30] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x17192F83: fld dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x17192F86: mov dword ptr [ebp - 4], eax */
    _st[0] += _st[1]; /* 0x17192F89: fadd st(1) */
    esi = ebp + (-0xC); /* 0x17192F8B: lea esi, [ebp - 0xc] */
    edi = ebp + (-0xA8); /* 0x17192F8E: lea edi, [ebp - 0xa8] */
    eax = MEM32(ebp + (-0x3C)); /* 0x17192F94: mov eax, dword ptr [ebp - 0x3c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x17192F97: fstp dword ptr [ebp - 0x24] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17192F9A: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17192F9C: fld dword ptr [ebp - 8] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x14)); /* 0x17192F9F: fadd dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17192FA2: fld dword ptr [ebp - 4] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x10)); /* 0x17192FA5: fadd dword ptr [ebp - 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x17192FA8: fstp dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x17192FAB: fld dword ptr [ebp - 0x24] */
    _st[0] += _st[3]; /* 0x17192FAE: fadd st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x17192FB0: fstp dword ptr [ebp - 0xc] */
    _st[0] += _st[1]; /* 0x17192FB3: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x17192FB5: fstp dword ptr [ebp - 8] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17192FB8: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17192FBA: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x17192FBC: fld dword ptr [ebp - 0x1c] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x64)); /* 0x17192FBF: fadd dword ptr [ebp - 0x64] */
    MEM32(ebp + (-0x64)) = eax; /* 0x17192FC2: mov dword ptr [ebp - 0x64], eax */
    eax = MEM32(ebp + (-0x28)); /* 0x17192FC5: mov eax, dword ptr [ebp - 0x28] */
    MEM32(ebp + (-0x14)) = eax; /* 0x17192FC8: mov dword ptr [ebp - 0x14], eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17192FCB: fstp dword ptr [ebp - 4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17192FCE: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x78))); /* 0x17192FCF: fld dword ptr [ebp - 0x78] */
    _st[0] *= _st[1]; /* 0x17192FD2: fmul st(1) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17192FD4: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17192FD5: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x17192FD6: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0x74))); /* 0x17192FD9: fld dword ptr [ebp - 0x74] */
    _st[0] *= _st[1]; /* 0x17192FDC: fmul st(1) */
    eax = MEM32(ebp + (-0x30)); /* 0x17192FDE: mov eax, dword ptr [ebp - 0x30] */
    MEM32(ebp + (-0x10)) = eax; /* 0x17192FE1: mov dword ptr [ebp - 0x10], eax */
    esi = ebp + (-0x18); /* 0x17192FE4: lea esi, [ebp - 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x17192FE7: fstp dword ptr [ebp - 8] */
    edi = ebp + (-0x9C); /* 0x17192FEA: lea edi, [ebp - 0x9c] */
    fp_push(*(float*)&MEM32(ebp + (-0x70))); /* 0x17192FF0: fld dword ptr [ebp - 0x70] */
    _st[0] *= _st[1]; /* 0x17192FF3: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17192FF5: fstp dword ptr [ebp - 4] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17192FF8: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17192FFC: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x58))); /* 0x17192FFE: fld dword ptr [ebp - 0x58] */
    fp_push(*(float*)&MEM32(ebp + (-0x4C))); /* 0x17193001: fld dword ptr [ebp - 0x4c] */
    _st[0] += _st[2]; /* 0x17193004: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x17193006: fstp dword ptr [ebp - 0x24] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x17193009: fld dword ptr [ebp - 0x14] */
    _st[0] += _st[1]; /* 0x1719300C: fadd st(1) */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x1719300E: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17193010: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x17193012: fld dword ptr [ebp - 0x10] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x64)); /* 0x17193015: fadd dword ptr [ebp - 0x64] */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x17193018: fld dword ptr [ebp - 0x24] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0xC)); /* 0x1719301B: fadd dword ptr [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x1719301E: fstp dword ptr [ebp - 0x18] */
    fp_push(_st[1]); /* 0x17193021: fld st(1) */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x8)); /* 0x17193023: fadd dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x17193026: fstp dword ptr [ebp - 0x14] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x4)); /* 0x17193029: fadd dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x1719302C: fstp dword ptr [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1719302F: movsd dword ptr es:[edi], dword ptr [esi] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17193030: fstp st(0) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17193032: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x17193033: fstp dword ptr [ebp - 0x28] */
    fp_push(*(double*)ADDR(0x17237528)); /* 0x17193036: fld qword ptr [0x17237528] */
    fp_push(_st[0]); /* 0x1719303C: fld st(0) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1719303E: movsd dword ptr es:[edi], dword ptr [esi] */
    *(double*)ADDR(ebp + (-0x14)) = _st[0]; /* 0x1719303F: fst qword ptr [ebp - 0x14] */
    fp_push(*(double*)ADDR(0x17237518)); /* 0x17193042: fld qword ptr [0x17237518] */
    _st[0] *= *(double*)ADDR(0x170234F8); /* 0x17193048: fmul qword ptr [0x170234f8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x1719304E: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] += *(double*)ADDR(0x17001D88); /* 0x17193050: fadd qword ptr [0x17001d88] */
    _st[0] *= _st[2]; /* 0x17193056: fmul st(2) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x50)) = _v; } /* 0x17193058: fstp qword ptr [ebp - 0x50] */
    fp_push(_st[0]); /* 0x1719305B: fld st(0) */
    _st[0] *= _st[1]; /* 0x1719305D: fmul st(1) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x34)) = _v; } /* 0x1719305F: fstp qword ptr [ebp - 0x34] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17193062: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17193064: fstp st(0) */
    fp_push(*(double*)ADDR(ebp + (-0x50))); /* 0x17193066: fld qword ptr [ebp - 0x50] */
    esi = ebp + (-0xAC); /* 0x17193069: lea esi, [ebp - 0xac] */
    _st[0] *= *(double*)ADDR(ebp + (-0x50)); /* 0x1719306F: fmul qword ptr [ebp - 0x50] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x20)) = _v; } /* 0x17193072: fstp qword ptr [ebp - 0x20] */
    fp_push(1.0); /* 0x17193075: fld1  */
    _st[0] -= *(double*)ADDR(0x17237510); /* 0x17193077: fsub qword ptr [0x17237510] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x1719307D: fstp qword ptr [ebp - 8] */
    goto L_17193085; /* 0x17193080: jmp 0x17193085 */
L_17193082:
    ecx = MEM32(ebp + 0x24); /* 0x17193082: mov ecx, dword ptr [ebp + 0x24] */
L_17193085:
    fp_push(*(float*)&MEM32(esi + (-0x8))); /* 0x17193085: fld dword ptr [esi - 8] */
    _st[0] -= (double)*(float*)ADDR(ecx); /* 0x17193088: fsub dword ptr [ecx] */
    fp_push(*(float*)&MEM32(esi + (-0x4))); /* 0x1719308A: fld dword ptr [esi - 4] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x4); /* 0x1719308D: fsub dword ptr [ecx + 4] */
    fp_push(*(float*)&MEM32(esi)); /* 0x17193090: fld dword ptr [esi] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x8); /* 0x17193092: fsub dword ptr [ecx + 8] */
    fp_push(_st[2]); /* 0x17193095: fld st(2) */
    _st[0] *= _st[3]; /* 0x17193097: fmul st(3) */
    fp_push(_st[1]); /* 0x17193099: fld st(1) */
    _st[0] *= _st[2]; /* 0x1719309B: fmul st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1719309D: faddp st(1) */
    fp_push(_st[2]); /* 0x1719309F: fld st(2) */
    _st[0] *= _st[3]; /* 0x171930A1: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x171930A3: faddp st(1) */
    _st[0] = sqrt(_st[0]); /* 0x171930A5: fsqrt  */
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x171930A7: fstp st(3) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171930A9: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171930AB: fstp st(0) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x28)); /* 0x171930AD: fmul dword ptr [ebp - 0x28] */
    fp_push(_st[0]); /* 0x171930B0: fld st(0) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x171930B2: fmulp st(1) */
    fp_push(*(double*)ADDR(ebp + (-0x34))); /* 0x171930B4: fld qword ptr [ebp - 0x34] */
    _st[0] += _st[1]; /* 0x171930B7: fadd st(1) */
    _st[0] = sqrt(_st[0]); /* 0x171930B9: fsqrt  */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x5C)) = _v; } /* 0x171930BB: fstp qword ptr [ebp - 0x5c] */
    fp_push(*(double*)ADDR(ebp + (-0x20))); /* 0x171930BE: fld qword ptr [ebp - 0x20] */
    _st[0] += _st[1]; /* 0x171930C1: fadd st(1) */
    _st[0] = sqrt(_st[0]); /* 0x171930C3: fsqrt  */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x40)) = _v; } /* 0x171930C5: fstp qword ptr [ebp - 0x40] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171930C8: fstp st(0) */
    fp_push(*(double*)ADDR(ebp + (-0x40))); /* 0x171930CA: fld qword ptr [ebp - 0x40] */
    _st[0] *= *(double*)ADDR(0x1723FB28); /* 0x171930CD: fmul qword ptr [0x1723fb28] */
    _st[0] = -_st[0]; /* 0x171930D3: fchs  */
    RECOMP_CALL(sub_1721B3E6); /* 0x171930D5: call 0x1721b3e6 */
    RECOMP_FLAGS_IN();
    fp_push(1.0); /* 0x171930DA: fld1  */
    _st[0] /= *(double*)ADDR(ebp + (-0x40)); /* 0x171930DC: fdiv qword ptr [ebp - 0x40] */
    _st[0] += *(double*)ADDR(0x1723FB28); /* 0x171930DF: fadd qword ptr [0x1723fb28] */
    _st[0] *= *(double*)ADDR(ebp + (-0x50)); /* 0x171930E5: fmul qword ptr [ebp - 0x50] */
    fp_push(*(double*)ADDR(ebp + (-0x40))); /* 0x171930E8: fld qword ptr [ebp - 0x40] */
    _st[0] *= *(double*)ADDR(ebp + (-0x40)); /* 0x171930EB: fmul qword ptr [ebp - 0x40] */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x171930EE: fdivp st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x171930F0: fmulp st(1) */
    fp_push(*(double*)ADDR(ebp + (-0x5C))); /* 0x171930F2: fld qword ptr [ebp - 0x5c] */
    _st[0] *= *(double*)ADDR(0x1723FB28); /* 0x171930F5: fmul qword ptr [0x1723fb28] */
    _st[0] = -_st[0]; /* 0x171930FB: fchs  */
    RECOMP_CALL(sub_1721B3E6); /* 0x171930FD: call 0x1721b3e6 */
    RECOMP_FLAGS_IN();
    fp_push(1.0); /* 0x17193102: fld1  */
    _st[0] /= *(double*)ADDR(ebp + (-0x5C)); /* 0x17193104: fdiv qword ptr [ebp - 0x5c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x17193107: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xCu; /* 0x17193108: add esi, 0xc */
    _flag_k = FK_ADD;
    /* cmp edi, 3 */ /* 0x1719310B: cmp edi, 3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _st[0] += *(double*)ADDR(0x1723FB28); /* 0x1719310E: fadd qword ptr [0x1723fb28] */
    _st[0] *= *(double*)ADDR(ebp + (-0x14)); /* 0x17193114: fmul qword ptr [ebp - 0x14] */
    fp_push(*(double*)ADDR(ebp + (-0x5C))); /* 0x17193117: fld qword ptr [ebp - 0x5c] */
    _st[0] *= *(double*)ADDR(ebp + (-0x5C)); /* 0x1719311A: fmul qword ptr [ebp - 0x5c] */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x1719311D: fdivp st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x1719311F: fmulp st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17193121: faddp st(1) */
    _st[0] *= *(double*)ADDR(0x170234F0); /* 0x17193123: fmul qword ptr [0x170234f0] */
    _st[0] *= *(double*)ADDR(ebp + (-0x8)); /* 0x17193129: fmul qword ptr [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + edi * 8 + (-0xE8)) = _v; } /* 0x1719312C: fstp qword ptr [ebp + edi*8 - 0xe8] */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_17193082; /* 0x17193133: jl 0x17193082 */
L_17193139:
    fp_push(*(float*)&MEM32(0x170054A8)); /* 0x17193139: fld dword ptr [0x170054a8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1719313F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0xC0)) = _v; } /* 0x17193141: fst dword ptr [ebp - 0xc0] */
    eax = ebp + (-0xBC); /* 0x17193147: lea eax, [ebp - 0xbc] */
    fp_push(*(float*)&MEM32(0x17023500)); /* 0x1719314D: fld dword ptr [0x17023500] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0xBC)) = _v; } /* 0x17193153: fst dword ptr [ebp - 0xbc] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0xB8)) = _v; } /* 0x17193159: fst dword ptr [ebp - 0xb8] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0xB4)) = _v; } /* 0x1719315F: fst dword ptr [ebp - 0xb4] */
    fp_push(_st[1]); /* 0x17193165: fld st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xB0)) = _v; } /* 0x17193167: fstp dword ptr [ebp - 0xb0] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0xAC)) = _v; } /* 0x1719316D: fst dword ptr [ebp - 0xac] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0xA8)) = _v; } /* 0x17193173: fst dword ptr [ebp - 0xa8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xA4)) = _v; } /* 0x17193179: fstp dword ptr [ebp - 0xa4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xA0)) = _v; } /* 0x1719317F: fstp dword ptr [ebp - 0xa0] */
    fp_push(*(float*)&MEM32(0x1700600C)); /* 0x17193185: fld dword ptr [0x1700600c] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x9C)) = _v; } /* 0x1719318B: fst dword ptr [ebp - 0x9c] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x98)) = _v; } /* 0x17193191: fst dword ptr [ebp - 0x98] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x94)) = _v; } /* 0x17193197: fst dword ptr [ebp - 0x94] */
    fp_push(0.0); /* 0x1719319D: fldz  */
    fp_push(0.0); /* 0x1719319F: fldz  */
    fp_push(0.0); /* 0x171931A1: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x171931A3: fstp dword ptr [ebp - 4] */
L_171931A6:
    /* cmp ecx, 3 */ /* 0x171931A6: cmp ecx, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171931BF; /* 0x171931A9: jae 0x171931bf */
L_171931AB:
    fp_push(*(double*)ADDR(ebp + 0x1C)); /* 0x171931AB: fld qword ptr [ebp + 0x1c] */
    edx = ebp + ecx * 8 + (-0xE0); /* 0x171931AE: lea edx, [ebp + ecx*8 - 0xe0] */
    _st[0] *= *(double*)ADDR(edx); /* 0x171931B5: fmul qword ptr [edx] */
    _st[0] *= *(double*)ADDR(0x170054D8); /* 0x171931B7: fmul qword ptr [0x170054d8] */
    { double _v = fp_pop(); *(double*)ADDR(edx) = _v; } /* 0x171931BD: fstp qword ptr [edx] */
L_171931BF:
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x171931BF: fld dword ptr [eax + 4] */
    edx = MEM32(ebp + 0x18); /* 0x171931C2: mov edx, dword ptr [ebp + 0x18] */
    fp_push(_st[0]); /* 0x171931C5: fld st(0) */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171931C7: inc ecx */
    _flag_k = FK_INC;
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x171931C8: fmul dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x171931CA: fstp dword ptr [ebp - 0x44] */
    fp_push(_st[0]); /* 0x171931CD: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x171931CF: fmul dword ptr [edx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x171931D2: fstp dword ptr [ebp - 0x40] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x171931D5: fmul dword ptr [edx + 8] */
    edx = MEM32(ebp + 0x14); /* 0x171931D8: mov edx, dword ptr [ebp + 0x14] */
    fp_push(*(float*)&MEM32(eax)); /* 0x171931DB: fld dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x171931DD: add eax, 0xc */
    _flag_k = FK_ADD;
    /* cmp ecx, 4 */ /* 0x171931E0: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push(_st[0]); /* 0x171931E3: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x171931E5: fmul dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x171931E7: fstp dword ptr [ebp - 0x18] */
    fp_push(_st[0]); /* 0x171931EA: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x171931EC: fmul dword ptr [edx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x171931EF: fstp dword ptr [ebp - 0x14] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x171931F2: fmul dword ptr [edx + 8] */
    edx = MEM32(ebp + 0x10); /* 0x171931F5: mov edx, dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(eax + (-0x10))); /* 0x171931F8: fld dword ptr [eax - 0x10] */
    fp_push(_st[0]); /* 0x171931FB: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x171931FD: fmul dword ptr [edx] */
    fp_push(_st[1]); /* 0x171931FF: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x17193201: fmul dword ptr [edx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x17193204: fstp dword ptr [ebp - 0x20] */
    fp_push(_st[1]); /* 0x17193207: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x17193209: fmul dword ptr [edx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x1719320C: fstp dword ptr [ebp - 0x1c] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x18)); /* 0x1719320F: fadd dword ptr [ebp - 0x18] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x17193212: fstp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x17193214: fld dword ptr [ebp - 0x20] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x14)); /* 0x17193217: fadd dword ptr [ebp - 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x5C)) = _v; } /* 0x1719321A: fstp dword ptr [ebp - 0x5c] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x1719321D: fld dword ptr [ebp - 0x1c] */
    _st[0] += _st[2]; /* 0x17193220: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x58)) = _v; } /* 0x17193222: fstp dword ptr [ebp - 0x58] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x44)); /* 0x17193225: fadd dword ptr [ebp - 0x44] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x54)) = _v; } /* 0x17193228: fstp dword ptr [ebp - 0x54] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1719322B: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x5C))); /* 0x1719322D: fld dword ptr [ebp - 0x5c] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x40)); /* 0x17193230: fadd dword ptr [ebp - 0x40] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x17193233: fstp dword ptr [ebp - 0x50] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x58)); /* 0x17193236: fadd dword ptr [ebp - 0x58] */
    fp_push(*(double*)ADDR(ebp + ecx * 8 + (-0xE8))); /* 0x17193239: fld qword ptr [ebp + ecx*8 - 0xe8] */
    fp_push(*(float*)&MEM32(ebp + (-0x54))); /* 0x17193240: fld dword ptr [ebp - 0x54] */
    _st[0] *= _st[1]; /* 0x17193243: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x17193245: fstp dword ptr [ebp - 0x38] */
    fp_push(*(float*)&MEM32(ebp + (-0x50))); /* 0x17193248: fld dword ptr [ebp - 0x50] */
    _st[0] *= _st[1]; /* 0x1719324B: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x1719324D: fstp dword ptr [ebp - 0x34] */
    fp_push(_st[1]); /* 0x17193250: fld st(1) */
    _st[0] *= _st[1]; /* 0x17193252: fmul st(1) */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x17193254: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17193256: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x38))); /* 0x17193258: fld dword ptr [ebp - 0x38] */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x1719325B: faddp st(3) */
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x1719325D: fld dword ptr [ebp - 0x34] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x17193260: faddp st(2) */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x4)); /* 0x17193262: fadd dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17193265: fstp dword ptr [ebp - 4] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171931A6; /* 0x17193268: jb 0x171931a6 */
L_1719326E:
    /* cmp MEM8(ebp + (-0x29)), 0 */ /* 0x1719326E: cmp byte ptr [ebp - 0x29], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x29))) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x17193272: fstp dword ptr [ebp - 8] */
    edi = MEM32(ebp + 0x18); /* 0x17193275: mov edi, dword ptr [ebp + 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x17193278: fstp dword ptr [ebp - 0xc] */
    esi = MEM32(ebp + 0x14); /* 0x1719327B: mov esi, dword ptr [ebp + 0x14] */
    fp_push(*(float*)&MEM32(edi)); /* 0x1719327E: fld dword ptr [edi] */
    _st[0] *= _st[1]; /* 0x17193280: fmul st(1) */
    fp_push(*(float*)&MEM32(edi + 0x4)); /* 0x17193282: fld dword ptr [edi + 4] */
    _st[0] *= _st[2]; /* 0x17193285: fmul st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x17193287: fstp dword ptr [ebp - 0x40] */
    fp_push(*(float*)&MEM32(edi + 0x8)); /* 0x1719328A: fld dword ptr [edi + 8] */
    _st[0] *= _st[2]; /* 0x1719328D: fmul st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x1719328F: fstp dword ptr [ebp - 0x3c] */
    fp_push(*(float*)&MEM32(esi)); /* 0x17193292: fld dword ptr [esi] */
    _st[0] *= _st[2]; /* 0x17193294: fmul st(2) */
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x17193296: fld dword ptr [esi + 4] */
    _st[0] *= _st[3]; /* 0x17193299: fmul st(3) */
    fp_push(*(float*)&MEM32(esi + 0x8)); /* 0x1719329B: fld dword ptr [esi + 8] */
    _st[0] *= _st[4]; /* 0x1719329E: fmul st(4) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x64)) = _v; } /* 0x171932A0: fstp dword ptr [ebp - 0x64] */
    fp_push(*(float*)&MEM32(edx)); /* 0x171932A3: fld dword ptr [edx] */
    _st[0] *= _st[4]; /* 0x171932A5: fmul st(4) */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x171932A7: fld dword ptr [edx + 4] */
    _st[0] *= _st[5]; /* 0x171932AA: fmul st(5) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x171932AC: fstp dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(edx + 0x8)); /* 0x171932AF: fld dword ptr [edx + 8] */
    _st[0] *= _st[5]; /* 0x171932B2: fmul st(5) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x171932B4: fstp dword ptr [ebp - 0x1c] */
    _st[0] += _st[2]; /* 0x171932B7: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x171932B9: fstp dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x171932BC: fld dword ptr [ebp - 0x20] */
    _st[0] += _st[1]; /* 0x171932BF: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x171932C1: fstp dword ptr [ebp - 0x14] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171932C4: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171932C6: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x171932C8: fld dword ptr [ebp - 0x1c] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x64)); /* 0x171932CB: fadd dword ptr [ebp - 0x64] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x171932CE: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x171932D1: fld dword ptr [ebp - 0x18] */
    _st[0] += _st[1]; /* 0x171932D4: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x171932D6: fstp dword ptr [ebp - 0x24] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171932D9: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171932DB: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x171932DD: fld dword ptr [ebp - 0x14] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x40)); /* 0x171932E0: fadd dword ptr [ebp - 0x40] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x171932E3: fld dword ptr [ebp - 0x10] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x3C)); /* 0x171932E6: fadd dword ptr [ebp - 0x3c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x171932E9: fstp dword ptr [ebp - 0x1c] */
    fp_push(*(double*)ADDR(ebp + 0x34)); /* 0x171932EC: fld qword ptr [ebp + 0x34] */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x171932EF: fld dword ptr [ebp - 0x24] */
    _st[0] *= _st[1]; /* 0x171932F2: fmul st(1) */
    fp_push(_st[2]); /* 0x171932F4: fld st(2) */
    _st[0] *= _st[2]; /* 0x171932F6: fmul st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x171932F8: fstp dword ptr [ebp - 0x40] */
    eax = MEM32(ebp + (-0x40)); /* 0x171932FB: mov eax, dword ptr [ebp - 0x40] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x171932FE: fld dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0x14)) = eax; /* 0x17193301: mov dword ptr [ebp - 0x14], eax */
    _st[0] *= _st[2]; /* 0x17193304: fmul st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x17193306: fstp dword ptr [ebp - 0x3c] */
    eax = MEM32(ebp + (-0x3C)); /* 0x17193309: mov eax, dword ptr [ebp - 0x3c] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1719330C: mov dword ptr [ebp - 0x10], eax */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x1719330F: fst dword ptr [ebp - 0x18] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17193312: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17193314: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17193316: fstp st(0) */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17193428; /* 0x17193318: jne 0x17193428 */
L_1719331E:
    /* cmp MEM32(ebp + 0x30), 6 */ /* 0x1719331E: cmp dword ptr [ebp + 0x30], 6 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x30)); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1719354A; /* 0x17193322: je 0x1719354a */
L_17193328:
    ecx = MEM32(ebp + (-0x48)); /* 0x17193328: mov ecx, dword ptr [ebp - 0x48] */
    fp_push(0.0); /* 0x1719332B: fldz  */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + 0x28)); /* 0x1719332D: imul ecx, dword ptr [ebp + 0x28] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8C)) = _v; } /* 0x17193331: fstp dword ptr [ebp - 0x8c] */
    fp_push(0.0); /* 0x17193337: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x88)) = _v; } /* 0x17193339: fstp dword ptr [ebp - 0x88] */
    fp_push(0.0); /* 0x1719333F: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x84)) = _v; } /* 0x17193341: fstp dword ptr [ebp - 0x84] */
    fp_push(0.0); /* 0x17193347: fldz  */
    eax = MEM32(ebp + 0x8); /* 0x17193349: mov eax, dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x80)) = _v; } /* 0x1719334C: fstp dword ptr [ebp - 0x80] */
    eax = MEM32(eax); /* 0x1719334F: mov eax, dword ptr [eax] */
    fp_push(0.0); /* 0x17193351: fldz  */
    _flag_a = (uint32_t)(MEM32(ebp + 0x38)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x38) = MEM32(ebp + 0x38) & 0; /* 0x17193353: and dword ptr [ebp + 0x38], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = eax + ecx * 4; /* 0x17193357: lea edi, [eax + ecx*4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x7C)) = _v; } /* 0x1719335A: fstp dword ptr [ebp - 0x7c] */
    ecx = MEM32(ebp + 0xC); /* 0x1719335D: mov ecx, dword ptr [ebp + 0xc] */
    fp_push(0.0); /* 0x17193360: fldz  */
    edx = MEM32(ecx + 0x4); /* 0x17193362: mov edx, dword ptr [ecx + 4] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0x28)); /* 0x17193365: imul edx, dword ptr [ebp + 0x28] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x78)) = _v; } /* 0x17193369: fstp dword ptr [ebp - 0x78] */
    fp_push(0.0); /* 0x1719336C: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x74)) = _v; } /* 0x1719336E: fstp dword ptr [ebp - 0x74] */
    fp_push(0.0); /* 0x17193371: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x70)) = _v; } /* 0x17193373: fstp dword ptr [ebp - 0x70] */
    fp_push(0.0); /* 0x17193376: fldz  */
    esi = eax + edx * 4; /* 0x17193378: lea esi, [eax + edx*4] */
    edx = MEM32(ecx + 0x8); /* 0x1719337B: mov edx, dword ptr [ecx + 8] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0x28)); /* 0x1719337E: imul edx, dword ptr [ebp + 0x28] */
    eax = eax + edx * 4; /* 0x17193382: lea eax, [eax + edx*4] */
L_17193385:
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17193385: fld dword ptr [ebp - 4] */
    edx = MEM32(ebp + 0x38); /* 0x17193388: mov edx, dword ptr [ebp + 0x38] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x1719338B: fmul dword ptr [eax] */
    edx = ebp + edx * 4 + (-0x8C); /* 0x1719338D: lea edx, [ebp + edx*4 - 0x8c] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17193394: fld dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(esi); /* 0x17193397: fmul dword ptr [esi] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17193399: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x1719339B: fld dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(edi); /* 0x1719339E: fmul dword ptr [edi] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x171933A0: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(edx); /* 0x171933A2: fadd dword ptr [edx] */
    { float _v = (float)_st[0]; *(float*)ADDR(edx) = _v; } /* 0x171933A4: fst dword ptr [edx] */
    edx = MEM32(ebp + 0x38); /* 0x171933A6: mov edx, dword ptr [ebp + 0x38] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x171933A9: fld dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x38)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x38) = MEM32(ebp + 0x38) + 1; /* 0x171933AC: inc dword ptr [ebp + 0x38] */
    _flag_k = FK_INC;
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x171933AF: fmul dword ptr [eax] */
    edx = ebp + edx * 4 + (-0x7C); /* 0x171933B1: lea edx, [ebp + edx*4 - 0x7c] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x171933B5: fld dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171933B8: add eax, 4 */
    _flag_k = FK_ADD;
    _st[0] *= (double)*(float*)ADDR(esi); /* 0x171933BB: fmul dword ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x171933BD: add esi, 4 */
    _flag_k = FK_ADD;
    { double _v = fp_pop(); _st[0] += _v; } /* 0x171933C0: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x171933C2: fld dword ptr [ebp - 0x18] */
    _st[0] *= (double)*(float*)ADDR(edi); /* 0x171933C5: fmul dword ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x171933C7: add edi, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + 0x38), 4 */ /* 0x171933CA: cmp dword ptr [ebp + 0x38], 4 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x38)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { double _v = fp_pop(); _st[0] += _v; } /* 0x171933CE: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(edx); /* 0x171933D0: fadd dword ptr [edx] */
    { float _v = (float)_st[0]; *(float*)ADDR(edx) = _v; } /* 0x171933D2: fst dword ptr [edx] */
    fp_push(_st[1]); /* 0x171933D4: fld st(1) */
    _st[0] -= _st[1]; /* 0x171933D6: fsub st(1) */
    _st[0] = fabs(_st[0]); /* 0x171933D8: fabs  */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x171933DA: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171933DC: fstp st(0) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x171933DE: faddp st(1) */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17193385; /* 0x171933E0: jb 0x17193385 */
L_171933E2:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17237530)); /* 0x171933E2: fcomp qword ptr [0x17237530] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171933E8: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171933EA: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1719354D; /* 0x171933ED: jne 0x1719354d */
L_171933F3:
    edx = MEM32(ebp + 0x10); /* 0x171933F3: mov edx, dword ptr [ebp + 0x10] */
    edi = MEM32(ebp + 0x18); /* 0x171933F6: mov edi, dword ptr [ebp + 0x18] */
    esi = MEM32(ebp + 0x14); /* 0x171933F9: mov esi, dword ptr [ebp + 0x14] */
L_171933FC:
    eax = MEM32(ebp + 0x30); /* 0x171933FC: mov eax, dword ptr [ebp + 0x30] */
    fp_push(*(double*)ADDR(ebp + 0x1C)); /* 0x171933FF: fld qword ptr [ebp + 0x1c] */
    _st[0] *= *(double*)ADDR(0x170054D8); /* 0x17193402: fmul qword ptr [0x170054d8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17193408: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x3C)) = eax; /* 0x17193409: mov dword ptr [ebp - 0x3c], eax */
    eax = ebp + (-0xE0); /* 0x1719340C: lea eax, [ebp - 0xe0] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x17193412: fstp qword ptr [ebp - 8] */
    MEM32(ebp + 0x20) = eax; /* 0x17193415: mov dword ptr [ebp + 0x20], eax */
    MEM32(ebp + 0x30) = 0x17023550u; /* 0x17193418: mov dword ptr [ebp + 0x30], 0x17023550 */
    MEM32(ebp + (-0x48)) = 4; /* 0x1719341F: mov dword ptr [ebp - 0x48], 4 */
    goto L_17193439; /* 0x17193426: jmp 0x17193439 */
L_17193428:
    ecx = MEM32(ebp + 0xC); /* 0x17193428: mov ecx, dword ptr [ebp + 0xc] */
    RECOMP_BACKEDGE();
    goto L_171933FC; /* 0x1719342B: jmp 0x171933fc */
L_1719342D:
    ecx = MEM32(ebp + 0xC); /* 0x1719342D: mov ecx, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x10); /* 0x17193430: mov edx, dword ptr [ebp + 0x10] */
    edi = MEM32(ebp + 0x18); /* 0x17193433: mov edi, dword ptr [ebp + 0x18] */
    esi = MEM32(ebp + 0x14); /* 0x17193436: mov esi, dword ptr [ebp + 0x14] */
L_17193439:
    eax = ebp + (-0xB4); /* 0x17193439: lea eax, [ebp - 0xb4] */
    MEM32(ebp + 0x38) = eax; /* 0x1719343F: mov dword ptr [ebp + 0x38], eax */
    eax = MEM32(ebp + 0x30); /* 0x17193442: mov eax, dword ptr [ebp + 0x30] */
    MEM32(ebp + 0x30) = eax; /* 0x17193445: mov dword ptr [ebp + 0x30], eax */
    MEM32(ebp + (-0x4C)) = 3; /* 0x17193448: mov dword ptr [ebp - 0x4c], 3 */
    goto L_17193457; /* 0x1719344F: jmp 0x17193457 */
L_17193451:
    edi = MEM32(ebp + 0x18); /* 0x17193451: mov edi, dword ptr [ebp + 0x18] */
    esi = MEM32(ebp + 0x14); /* 0x17193454: mov esi, dword ptr [ebp + 0x14] */
L_17193457:
    eax = MEM32(ebp + 0x30); /* 0x17193457: mov eax, dword ptr [ebp + 0x30] */
    eax = MEM32(eax); /* 0x1719345A: mov eax, dword ptr [eax] */
    eax = eax + eax * 2; /* 0x1719345C: lea eax, [eax + eax*2] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1719345F: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1719345F: shl eax, 2 */
    fp_push(*(float*)&MEM32(eax + 0x17023510)); /* 0x17193462: fld dword ptr [eax + 0x17023510] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x30)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x30) = MEM32(ebp + 0x30) + 4; /* 0x17193468: add dword ptr [ebp + 0x30], 4 */
    _flag_k = FK_ADD;
    fp_push(_st[0]); /* 0x1719346C: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(edi); /* 0x1719346E: fmul dword ptr [edi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x60)) = _v; } /* 0x17193470: fstp dword ptr [ebp - 0x60] */
    fp_push(_st[0]); /* 0x17193473: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(edi + 0x4); /* 0x17193475: fmul dword ptr [edi + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x5C)) = _v; } /* 0x17193478: fstp dword ptr [ebp - 0x5c] */
    _st[0] *= (double)*(float*)ADDR(edi + 0x8); /* 0x1719347B: fmul dword ptr [edi + 8] */
    edi = MEM32(ebp + 0x38); /* 0x1719347E: mov edi, dword ptr [ebp + 0x38] */
    fp_push(*(float*)&MEM32(eax + 0x1702350C)); /* 0x17193481: fld dword ptr [eax + 0x1702350c] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x38)); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x38) = MEM32(ebp + 0x38) + 0xCu; /* 0x17193487: add dword ptr [ebp + 0x38], 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4C))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4C)) = MEM32(ebp + (-0x4C)) - 1; /* 0x1719348B: dec dword ptr [ebp - 0x4c] */
    _flag_k = FK_DEC;
    fp_push(_st[0]); /* 0x1719348E: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(esi); /* 0x17193490: fmul dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x17193492: fstp dword ptr [ebp - 0x18] */
    fp_push(_st[0]); /* 0x17193495: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(esi + 0x4); /* 0x17193497: fmul dword ptr [esi + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x1719349A: fstp dword ptr [ebp - 0x14] */
    _st[0] *= (double)*(float*)ADDR(esi + 0x8); /* 0x1719349D: fmul dword ptr [esi + 8] */
    esi = ebp + (-0x6C); /* 0x171934A0: lea esi, [ebp - 0x6c] */
    fp_push(*(float*)&MEM32(eax + 0x17023508)); /* 0x171934A3: fld dword ptr [eax + 0x17023508] */
    fp_push(_st[0]); /* 0x171934A9: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x171934AB: fmul dword ptr [edx] */
    fp_push(_st[1]); /* 0x171934AD: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x171934AF: fmul dword ptr [edx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x171934B2: fstp dword ptr [ebp - 0x20] */
    fp_push(_st[1]); /* 0x171934B5: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x171934B7: fmul dword ptr [edx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x171934BA: fstp dword ptr [ebp - 0x1c] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x18)); /* 0x171934BD: fadd dword ptr [ebp - 0x18] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x171934C0: fstp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x171934C2: fld dword ptr [ebp - 0x20] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x14)); /* 0x171934C5: fadd dword ptr [ebp - 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x171934C8: fstp dword ptr [ebp - 0x34] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x171934CB: fld dword ptr [ebp - 0x1c] */
    _st[0] += _st[2]; /* 0x171934CE: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x171934D0: fstp dword ptr [ebp - 0x30] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x60)); /* 0x171934D3: fadd dword ptr [ebp - 0x60] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x6C)) = _v; } /* 0x171934D6: fstp dword ptr [ebp - 0x6c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171934D9: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x171934DB: fld dword ptr [ebp - 0x34] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x5C)); /* 0x171934DE: fadd dword ptr [ebp - 0x5c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x68)) = _v; } /* 0x171934E1: fstp dword ptr [ebp - 0x68] */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x171934E4: fld dword ptr [ebp - 0x30] */
    _st[0] += _st[1]; /* 0x171934E7: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x64)) = _v; } /* 0x171934E9: fstp dword ptr [ebp - 0x64] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171934EC: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171934ED: movsd dword ptr es:[edi], dword ptr [esi] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171934EE: fstp st(0) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171934F0: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17193451; /* 0x171934F1: jne 0x17193451 */
L_171934F7:
    eax = MEM32(ebp + 0x20); /* 0x171934F7: mov eax, dword ptr [ebp + 0x20] */
    fp_push(*(double*)ADDR(eax)); /* 0x171934FA: fld qword ptr [eax] */
    PUSH32(esp, ecx); /* 0x171934FC: push ecx */
    PUSH32(esp, ecx); /* 0x171934FD: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x171934FE: fstp qword ptr [esp] */
    PUSH32(esp, MEM32(ebp + (-0x3C))); /* 0x17193501: push dword ptr [ebp - 0x3c] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x17193504: fld qword ptr [ebp - 8] */
    eax = ebp + (-0x9C); /* 0x17193507: lea eax, [ebp - 0x9c] */
    PUSH32(esp, MEM32(ebp + 0x2C)); /* 0x1719350D: push dword ptr [ebp + 0x2c] */
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x17193510: push dword ptr [ebp + 0x28] */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x17193513: push dword ptr [ebp + 0x24] */
    PUSH32(esp, ecx); /* 0x17193516: push ecx */
    PUSH32(esp, ecx); /* 0x17193517: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x17193518: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x1719351B: push eax */
    eax = ebp + (-0xA8); /* 0x1719351C: lea eax, [ebp - 0xa8] */
    PUSH32(esp, eax); /* 0x17193522: push eax */
    eax = ebp + (-0xB4); /* 0x17193523: lea eax, [ebp - 0xb4] */
    PUSH32(esp, eax); /* 0x17193529: push eax */
    PUSH32(esp, ecx); /* 0x1719352A: push ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1719352B: push dword ptr [ebp + 8] */
    ecx = ebx; /* 0x1719352E: mov ecx, ebx */
    RECOMP_CALL(sub_17192BC8); /* 0x17193530: call 0x17192bc8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x30); /* 0x17193535: mov eax, dword ptr [ebp + 0x30] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x20) = MEM32(ebp + 0x20) + 8; /* 0x17193538: add dword ptr [ebp + 0x20], 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x48))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x48)) = MEM32(ebp + (-0x48)) - 1; /* 0x1719353C: dec dword ptr [ebp - 0x48] */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x30) = eax; /* 0x1719353F: mov dword ptr [ebp + 0x30], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1719342D; /* 0x17193542: jne 0x1719342d */
L_17193548:
    goto L_17193597; /* 0x17193548: jmp 0x17193597 */
L_1719354A:
    ecx = MEM32(ebp + 0xC); /* 0x1719354A: mov ecx, dword ptr [ebp + 0xc] */
L_1719354D:
    edi = MEM32(ebp + 0x28); /* 0x1719354D: mov edi, dword ptr [ebp + 0x28] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17193550: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x17193552: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17193597; /* 0x17193554: jbe 0x17193597 */
L_17193556:
    ebx = MEM32(ecx); /* 0x17193556: mov ebx, dword ptr [ecx] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x17193558: fld dword ptr [ebp - 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x1719355B: mov eax, dword ptr [ebp + 8] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edi); /* 0x1719355E: imul ebx, edi */
    eax = MEM32(eax); /* 0x17193561: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + esi; /* 0x17193563: add ebx, esi */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + 0x2C); /* 0x17193565: mov edx, dword ptr [ebp + 0x2c] */
    edx = edx + esi * 4; /* 0x17193568: lea edx, [edx + esi*4] */
    _st[0] *= (double)*(float*)ADDR(eax + ebx * 4); /* 0x1719356B: fmul dword ptr [eax + ebx*4] */
    ebx = MEM32(ecx + 0x8); /* 0x1719356E: mov ebx, dword ptr [ecx + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17193571: fld dword ptr [ebp - 4] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edi); /* 0x17193574: imul ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + esi; /* 0x17193577: add ebx, esi */
    _flag_k = FK_ADD;
    _st[0] *= (double)*(float*)ADDR(eax + ebx * 4); /* 0x17193579: fmul dword ptr [eax + ebx*4] */
    ebx = MEM32(ecx + 0x4); /* 0x1719357C: mov ebx, dword ptr [ecx + 4] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edi); /* 0x1719357F: imul ebx, edi */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17193582: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17193584: fld dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + esi; /* 0x17193587: add ebx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17193589: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, edi */ /* 0x1719358A: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _st[0] *= (double)*(float*)ADDR(eax + ebx * 4); /* 0x1719358C: fmul dword ptr [eax + ebx*4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1719358F: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(edx); /* 0x17193591: fadd dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x17193593: fstp dword ptr [edx] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17193556; /* 0x17193595: jb 0x17193556 */
L_17193597:
    edi = POP32_VAL(esp); /* 0x17193597: pop edi */
    esi = POP32_VAL(esp); /* 0x17193598: pop esi */
    ebx = POP32_VAL(esp); /* 0x17193599: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1719359A: leave  */
    RECOMP_FLAGS_OUT(); esp += 56; { RECOMP_REGS_OUT(); return; } /* 0x1719359B: ret 0x34 */
    RECOMP_REGS_OUT();
}

void sub_171935A3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171935A3u);

L_171935A3:
    edi = edi; /* 0x171935A3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171935A5: push ebp */
    ebp = esp; /* 0x171935A6: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x171935A8: sub esp, 0x2c */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x14); /* 0x171935AB: mov eax, dword ptr [ebp + 0x14] */
    edx = MEM32(ecx + 0x28); /* 0x171935AE: mov edx, dword ptr [ecx + 0x28] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3Cu); /* 0x171935B1: imul eax, eax, 0x3c */
    /* cmp MEM32(edx + eax + 0x18), 0xFFFFFFFFu */ /* 0x171935B4: cmp dword ptr [edx + eax + 0x18], -1 */
    _flag_a = (uint32_t)(MEM32(edx + eax + 0x18)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = ecx; /* 0x171935B9: mov dword ptr [ebp - 4], ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171935C9; /* 0x171935BC: je 0x171935c9 */
L_171935BE:
    fp_push(*(double*)ADDR(0x17023580)); /* 0x171935BE: fld qword ptr [0x17023580] */
    goto L_17193709; /* 0x171935C4: jmp 0x17193709 */
L_171935C9:
    PUSH32(esp, ebx); /* 0x171935C9: push ebx */
    fp_push(0.0); /* 0x171935CA: fldz  */
    PUSH32(esp, esi); /* 0x171935CC: push esi */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x24)) = _v; } /* 0x171935CD: fstp qword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171935D0: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x1Cu; /* 0x171935D2: add eax, 0x1c */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x171935D5: push edi */
    edi = MEM32(ebp + 0xC); /* 0x171935D6: mov edi, dword ptr [ebp + 0xc] */
    MEM32(ebp + 0x14) = eax; /* 0x171935D9: mov dword ptr [ebp + 0x14], eax */
L_171935DC:
    eax = MEM32(ecx + 0x28); /* 0x171935DC: mov eax, dword ptr [ecx + 0x28] */
    fp_push(*(float*)&MEM32(0x170018D8)); /* 0x171935DF: fld dword ptr [0x170018d8] */
    edx = MEM32(ebp + 0x14); /* 0x171935E5: mov edx, dword ptr [ebp + 0x14] */
    esi = MEM32(edx + eax); /* 0x171935E8: mov esi, dword ptr [edx + eax] */
    esi = (uint32_t)((int32_t)esi * (int32_t)0x3Cu); /* 0x171935EB: imul esi, esi, 0x3c */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x171935EE: add esi, eax */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(esi + 0x14)); /* 0x171935F0: fld dword ptr [esi + 0x14] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171935F3: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171935F5: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171935F7: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171936E4; /* 0x171935FA: jnp 0x171936e4 */
L_17193600:
    fp_push(*(float*)&MEM32(edi)); /* 0x17193600: fld dword ptr [edi] */
    _st[0] -= (double)*(float*)ADDR(esi); /* 0x17193602: fsub dword ptr [esi] */
    fp_push(*(float*)&MEM32(edi + 0x4)); /* 0x17193604: fld dword ptr [edi + 4] */
    _st[0] -= (double)*(float*)ADDR(esi + 0x4); /* 0x17193607: fsub dword ptr [esi + 4] */
    fp_push(*(float*)&MEM32(edi + 0x8)); /* 0x1719360A: fld dword ptr [edi + 8] */
    _st[0] -= (double)*(float*)ADDR(esi + 0x8); /* 0x1719360D: fsub dword ptr [esi + 8] */
    fp_push(_st[0]); /* 0x17193610: fld st(0) */
    _st[0] *= _st[1]; /* 0x17193612: fmul st(1) */
    fp_push(_st[2]); /* 0x17193614: fld st(2) */
    _st[0] *= _st[3]; /* 0x17193616: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17193618: faddp st(1) */
    fp_push(_st[3]); /* 0x1719361A: fld st(3) */
    _st[0] *= _st[4]; /* 0x1719361C: fmul st(4) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1719361E: faddp st(1) */
    _st[0] = sqrt(_st[0]); /* 0x17193620: fsqrt  */
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x17193622: fstp st(3) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17193624: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17193626: fstp st(0) */
    fp_push(*(double*)ADDR(0x17237508)); /* 0x17193628: fld qword ptr [0x17237508] */
    fp_xch(1); /* 0x1719362E: fxch st(1) */
    fp_push(_st[1]); /* 0x17193630: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x17193632: fmulp st(1) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x17193634: fstp st(1) */
    fp_push(_st[0]); /* 0x17193636: fld st(0) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x17193638: fmulp st(1) */
    fp_push(*(double*)ADDR(0x17237528)); /* 0x1719363A: fld qword ptr [0x17237528] */
    fp_push(_st[0]); /* 0x17193640: fld st(0) */
    *(double*)ADDR(ebp + (-0x2C)) = _st[0]; /* 0x17193642: fst qword ptr [ebp - 0x2c] */
    fp_push(*(double*)ADDR(0x17237518)); /* 0x17193645: fld qword ptr [0x17237518] */
    _st[0] *= *(double*)ADDR(0x170234F8); /* 0x1719364B: fmul qword ptr [0x170234f8] */
    _st[0] += *(double*)ADDR(0x17001D88); /* 0x17193651: fadd qword ptr [0x17001d88] */
    _st[0] *= _st[2]; /* 0x17193657: fmul st(2) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x1C)) = _v; } /* 0x17193659: fstp qword ptr [ebp - 0x1c] */
    fp_push(_st[0]); /* 0x1719365C: fld st(0) */
    _st[0] *= _st[1]; /* 0x1719365E: fmul st(1) */
    _st[0] += _st[3]; /* 0x17193660: fadd st(3) */
    _st[0] = sqrt(_st[0]); /* 0x17193662: fsqrt  */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x14)) = _v; } /* 0x17193664: fstp qword ptr [ebp - 0x14] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17193667: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17193669: fstp st(0) */
    fp_push(*(double*)ADDR(ebp + (-0x1C))); /* 0x1719366B: fld qword ptr [ebp - 0x1c] */
    _st[0] *= *(double*)ADDR(ebp + (-0x1C)); /* 0x1719366E: fmul qword ptr [ebp - 0x1c] */
    _st[0] += _st[1]; /* 0x17193671: fadd st(1) */
    _st[0] = sqrt(_st[0]); /* 0x17193673: fsqrt  */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0xC)) = _v; } /* 0x17193675: fstp qword ptr [ebp - 0xc] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17193678: fstp st(0) */
    fp_push(*(double*)ADDR(0x1723FB28)); /* 0x1719367A: fld qword ptr [0x1723fb28] */
    _st[0] *= *(double*)ADDR(ebp + (-0xC)); /* 0x17193680: fmul qword ptr [ebp - 0xc] */
    _st[0] = -_st[0]; /* 0x17193683: fchs  */
    RECOMP_CALL(sub_1721B3E6); /* 0x17193685: call 0x1721b3e6 */
    RECOMP_FLAGS_IN();
    fp_push(1.0); /* 0x1719368A: fld1  */
    _st[0] /= *(double*)ADDR(ebp + (-0xC)); /* 0x1719368C: fdiv qword ptr [ebp - 0xc] */
    _st[0] += *(double*)ADDR(0x1723FB28); /* 0x1719368F: fadd qword ptr [0x1723fb28] */
    _st[0] *= *(double*)ADDR(ebp + (-0x1C)); /* 0x17193695: fmul qword ptr [ebp - 0x1c] */
    fp_push(*(double*)ADDR(ebp + (-0xC))); /* 0x17193698: fld qword ptr [ebp - 0xc] */
    _st[0] *= *(double*)ADDR(ebp + (-0xC)); /* 0x1719369B: fmul qword ptr [ebp - 0xc] */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x1719369E: fdivp st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x171936A0: fmulp st(1) */
    fp_push(*(double*)ADDR(0x1723FB28)); /* 0x171936A2: fld qword ptr [0x1723fb28] */
    _st[0] *= *(double*)ADDR(ebp + (-0x14)); /* 0x171936A8: fmul qword ptr [ebp - 0x14] */
    _st[0] = -_st[0]; /* 0x171936AB: fchs  */
    RECOMP_CALL(sub_1721B3E6); /* 0x171936AD: call 0x1721b3e6 */
    RECOMP_FLAGS_IN();
    fp_push(1.0); /* 0x171936B2: fld1  */
    _st[0] /= *(double*)ADDR(ebp + (-0x14)); /* 0x171936B4: fdiv qword ptr [ebp - 0x14] */
    _st[0] += *(double*)ADDR(0x1723FB28); /* 0x171936B7: fadd qword ptr [0x1723fb28] */
    _st[0] *= *(double*)ADDR(ebp + (-0x2C)); /* 0x171936BD: fmul qword ptr [ebp - 0x2c] */
    fp_push(*(double*)ADDR(ebp + (-0x14))); /* 0x171936C0: fld qword ptr [ebp - 0x14] */
    _st[0] *= *(double*)ADDR(ebp + (-0x14)); /* 0x171936C3: fmul qword ptr [ebp - 0x14] */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x171936C6: fdivp st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x171936C8: fmulp st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x171936CA: faddp st(1) */
    _st[0] *= *(double*)ADDR(0x170234F0); /* 0x171936CC: fmul qword ptr [0x170234f0] */
    ecx = MEM32(ebp + (-0x4)); /* 0x171936D2: mov ecx, dword ptr [ebp - 4] */
    fp_push(1.0); /* 0x171936D5: fld1  */
    _st[0] -= *(double*)ADDR(0x17237510); /* 0x171936D7: fsub qword ptr [0x17237510] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x171936DD: fmulp st(1) */
    _st[0] *= (double)*(float*)ADDR(esi + 0xC); /* 0x171936DF: fmul dword ptr [esi + 0xc] */
    goto L_171936E6; /* 0x171936E2: jmp 0x171936e6 */
L_171936E4:
    fp_push(0.0); /* 0x171936E4: fldz  */
L_171936E6:
    eax = MEM32(ebp + 0x18); /* 0x171936E6: mov eax, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + 4; /* 0x171936E9: add dword ptr [ebp + 0x14], 4 */
    _flag_k = FK_ADD;
    { double _v = fp_pop(); *(double*)ADDR(eax + ebx * 8) = _v; } /* 0x171936ED: fstp qword ptr [eax + ebx*8] */
    fp_push(*(double*)ADDR(ebp + (-0x24))); /* 0x171936F0: fld qword ptr [ebp - 0x24] */
    _st[0] += *(double*)ADDR(eax + ebx * 8); /* 0x171936F3: fadd qword ptr [eax + ebx*8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x171936F6: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, 8 */ /* 0x171936F7: cmp ebx, 8 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x24)) = _v; } /* 0x171936FA: fstp qword ptr [ebp - 0x24] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171935DC; /* 0x171936FD: jb 0x171935dc */
L_17193703:
    fp_push(*(double*)ADDR(ebp + (-0x24))); /* 0x17193703: fld qword ptr [ebp - 0x24] */
    edi = POP32_VAL(esp); /* 0x17193706: pop edi */
    esi = POP32_VAL(esp); /* 0x17193707: pop esi */
    ebx = POP32_VAL(esp); /* 0x17193708: pop ebx */
L_17193709:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17193709: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1719370A: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_17193712(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17193712u);

L_17193712:
    edi = edi; /* 0x17193712: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17193714: push ebp */
    ebp = esp; /* 0x17193715: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x50u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x50u; /* 0x17193717: sub esp, 0x50 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x14); /* 0x1719371A: mov eax, dword ptr [ebp + 0x14] */
    eax = MEM32(eax); /* 0x1719371D: mov eax, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x1719371F: push ebx */
    ebx = ecx; /* 0x17193720: mov ebx, ecx */
    ecx = MEM32(ebp + 0x10); /* 0x17193722: mov ecx, dword ptr [ebp + 0x10] */
    /* cmp MEM8(ecx + eax), 0 */ /* 0x17193725: cmp byte ptr [ecx + eax], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + eax)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17193732; /* 0x17193729: je 0x17193732 */
L_1719372B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1719372B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17193A00; /* 0x1719372D: jmp 0x17193a00 */
L_17193732:
    PUSH32(esp, esi); /* 0x17193732: push esi */
    esi = MEM32(ebp + 0x8); /* 0x17193733: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x17193736: push edi */
    edi = MEM32(esi + 0x4); /* 0x17193737: mov edi, dword ptr [esi + 4] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1719373A: push dword ptr [ebp + 0xc] */
    ecx = esi; /* 0x1719373D: mov ecx, esi */
    MEM32(ebp + (-0xC)) = edi; /* 0x1719373F: mov dword ptr [ebp - 0xc], edi */
    RECOMP_CALL(sub_1717B8F0); /* 0x17193742: call 0x1717b8f0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17193747: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = eax; /* 0x17193749: mov dword ptr [ebp - 0x20], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171939FE; /* 0x1719374C: jl 0x171939fe */
L_17193752:
    ecx = MEM32(ebp + 0xC); /* 0x17193752: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x17193755: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1719376B; /* 0x17193757: jbe 0x1719376b */
L_17193759:
    eax = edi; /* 0x17193759: mov eax, edi */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1719375B: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1719375B: shl eax, 2 */
L_1719375E:
    edx = MEM32(esi); /* 0x1719375E: mov edx, dword ptr [esi] */
    fp_push(0.0); /* 0x17193760: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + edx) = _v; } /* 0x17193762: fstp dword ptr [eax + edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x17193765: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x17193768: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1719375E; /* 0x17193769: jne 0x1719375e */
L_1719376B:
    esi = MEM32(ebp + 0x10); /* 0x1719376B: mov esi, dword ptr [ebp + 0x10] */
    edi = MEM32(ebx + 0x28); /* 0x1719376E: mov edi, dword ptr [ebx + 0x28] */
    esi = (uint32_t)((int32_t)esi * (int32_t)0x3Cu); /* 0x17193771: imul esi, esi, 0x3c */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x17193774: add edi, esi */
    _flag_k = FK_ADD;
    ecx = edi; /* 0x17193776: mov ecx, edi */
    MEM32(ebp + (-0x2C)) = esi; /* 0x17193778: mov dword ptr [ebp - 0x2c], esi */
    MEM32(ebp + (-0x1C)) = edi; /* 0x1719377B: mov dword ptr [ebp - 0x1c], edi */
    RECOMP_CALL(sub_17192AA8); /* 0x1719377E: call 0x17192aa8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0xC)); /* 0x17193783: mov eax, dword ptr [ebp - 0xc] */
    ecx = MEM32(ebp + 0x10); /* 0x17193786: mov ecx, dword ptr [ebp + 0x10] */
    fp_push(0.0); /* 0x17193789: fldz  */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x1719378B: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    *(double*)ADDR(ebp + (-0x28)) = _st[0]; /* 0x1719378F: fst qword ptr [ebp - 0x28] */
    MEM32(edi + 0x10) = eax; /* 0x17193792: mov dword ptr [edi + 0x10], eax */
    fp_push(0.0); /* 0x17193795: fldz  */
    eax = MEM32(ebp + 0x14); /* 0x17193797: mov eax, dword ptr [ebp + 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x1719379A: fstp dword ptr [ebp - 0x38] */
    eax = MEM32(eax); /* 0x1719379D: mov eax, dword ptr [eax] */
    fp_push(0.0); /* 0x1719379F: fldz  */
    MEM8(ecx + eax) = (uint8_t)(1); /* 0x171937A1: mov byte ptr [ecx + eax], 1 */
    eax = MEM32(ebx + 0x28); /* 0x171937A5: mov eax, dword ptr [ebx + 0x28] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x171937A8: fstp dword ptr [ebp - 0x34] */
    esi = MEM32(esi + eax + 0x18); /* 0x171937AB: mov esi, dword ptr [esi + eax + 0x18] */
    fp_push(0.0); /* 0x171937AF: fldz  */
    /* cmp esi, 0xFFFFFFFFu */ /* 0x171937B1: cmp esi, -1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x171937B4: fstp dword ptr [ebp - 0x30] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171938C3; /* 0x171937B7: je 0x171938c3 */
L_171937BD:
    /* test esi, esi */ /* 0x171937BD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1719398B; /* 0x171937BF: jbe 0x1719398b */
L_171937C5:
    ecx = edi + 0x1C; /* 0x171937C5: lea ecx, [edi + 0x1c] */
    MEM32(ebp + (-0x18)) = ecx; /* 0x171937C8: mov dword ptr [ebp - 0x18], ecx */
L_171937CB:
    eax = MEM32(ecx); /* 0x171937CB: mov eax, dword ptr [ecx] */
    edx = MEM32(ebx + 0x18); /* 0x171937CD: mov edx, dword ptr [ebx + 0x18] */
    eax = eax + eax * 4; /* 0x171937D0: lea eax, [eax + eax*4] */
    eax = edx + eax * 4; /* 0x171937D3: lea eax, [edx + eax*4] */
    fp_push(*(float*)&MEM32(eax + 0xC)); /* 0x171937D6: fld dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x171937D9: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(_st[0]); /* 0x171937DD: fld st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x171937DF: faddp st(2) */
    fp_push(_st[0]); /* 0x171937E1: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x171937E3: fmul dword ptr [eax] */
    fp_push(_st[1]); /* 0x171937E5: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x171937E7: fmul dword ptr [eax + 4] */
    fp_push(_st[2]); /* 0x171937EA: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x171937EC: fmul dword ptr [eax + 8] */
    eax = MEM32(ecx); /* 0x171937EF: mov eax, dword ptr [ecx] */
    eax = eax + eax * 4; /* 0x171937F1: lea eax, [eax + eax*4] */
    ecx = edx; /* 0x171937F4: mov ecx, edx */
    eax = MEM32(ecx + eax * 4 + 0x10); /* 0x171937F6: mov eax, dword ptr [ecx + eax*4 + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x48)) = _v; } /* 0x171937FA: fstp dword ptr [ebp - 0x48] */
    ecx = MEM32(ebx + 0x40); /* 0x171937FD: mov ecx, dword ptr [ebx + 0x40] */
    fp_push(_st[1]); /* 0x17193800: fld st(1) */
    edx = MEM32(ebp + 0xC); /* 0x17193802: mov edx, dword ptr [ebp + 0xc] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x38)); /* 0x17193805: fadd dword ptr [ebp - 0x38] */
    eax = eax + eax * 2; /* 0x17193808: lea eax, [eax + eax*2] */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x1719380B: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x1719380B: shl eax, 3 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1719380E: add ecx, eax */
    _flag_k = FK_ADD;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x17193810: fstp dword ptr [ebp - 0x38] */
    esi = MEM32(ecx); /* 0x17193813: mov esi, dword ptr [ecx] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x34)); /* 0x17193815: fadd dword ptr [ebp - 0x34] */
    esi = (uint32_t)((int32_t)esi * (int32_t)edx); /* 0x17193818: imul esi, edx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x1719381B: fstp dword ptr [ebp - 0x34] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1719381E: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x48))); /* 0x17193820: fld dword ptr [ebp - 0x48] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x30)); /* 0x17193823: fadd dword ptr [ebp - 0x30] */
    MEM32(ebp + (-0x44)) = esi; /* 0x17193826: mov dword ptr [ebp - 0x44], esi */
    esi = MEM32(ecx + 0x4); /* 0x17193829: mov esi, dword ptr [ecx + 4] */
    ecx = MEM32(ecx + 0x8); /* 0x1719382C: mov ecx, dword ptr [ecx + 8] */
    esi = (uint32_t)((int32_t)esi * (int32_t)edx); /* 0x1719382F: imul esi, edx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x17193832: fstp dword ptr [ebp - 0x30] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx); /* 0x17193835: imul ecx, edx */
    /* test edx, edx */ /* 0x17193838: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x40)) = esi; /* 0x1719383A: mov dword ptr [ebp - 0x40], esi */
    MEM32(ebp + (-0x3C)) = ecx; /* 0x1719383D: mov dword ptr [ebp - 0x3c], ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1719389D; /* 0x17193840: jbe 0x1719389d */
L_17193842:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xCu; /* 0x17193842: add eax, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x24)) = eax; /* 0x17193845: mov dword ptr [ebp - 0x24], eax */
    eax = MEM32(ebp + (-0xC)); /* 0x17193848: mov eax, dword ptr [ebp - 0xc] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1719384B: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1719384B: shl eax, 2 */
    MEM32(ebp + (-0x14)) = eax; /* 0x1719384E: mov dword ptr [ebp - 0x14], eax */
L_17193851:
    eax = MEM32(ebp + (-0x24)); /* 0x17193851: mov eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) & 0; /* 0x17193854: and dword ptr [ebp + 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x17193858: mov dword ptr [ebp - 0x10], eax */
L_1719385B:
    edx = MEM32(ebp + 0x14); /* 0x1719385B: mov edx, dword ptr [ebp + 0x14] */
    edx = MEM32(ebp + edx * 4 + (-0x44)); /* 0x1719385E: mov edx, dword ptr [ebp + edx*4 - 0x44] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x8)); /* 0x17193862: add edx, dword ptr [ebp - 8] */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x17193865: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax); /* 0x17193868: mov eax, dword ptr [eax] */
    ecx = MEM32(ebp + (-0x14)); /* 0x1719386A: mov ecx, dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(eax + edx * 4)); /* 0x1719386D: fld dword ptr [eax + edx*4] */
    esi = MEM32(ebx + 0x40); /* 0x17193870: mov esi, dword ptr [ebx + 0x40] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x17193873: add ecx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x10)); /* 0x17193875: mov eax, dword ptr [ebp - 0x10] */
    _st[0] *= (double)*(float*)ADDR(eax + esi); /* 0x17193878: fmul dword ptr [eax + esi] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + 1; /* 0x1719387B: inc dword ptr [ebp + 0x14] */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + 4; /* 0x1719387E: add dword ptr [ebp - 0x10], 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + 0x14), 3 */ /* 0x17193882: cmp dword ptr [ebp + 0x14], 3 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _st[0] *= _st[1]; /* 0x17193886: fmul st(1) */
    _st[0] += (double)*(float*)ADDR(ecx); /* 0x17193888: fadd dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x1719388A: fstp dword ptr [ecx] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1719385B; /* 0x1719388C: jb 0x1719385b */
L_1719388E:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x1719388E: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x8)); /* 0x17193891: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) + 4; /* 0x17193894: add dword ptr [ebp - 0x14], 4 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x17193898: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17193851; /* 0x1719389B: jb 0x17193851 */
L_1719389D:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x1719389D: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171938A0: fstp st(0) */
    ecx = MEM32(ebp + (-0x18)); /* 0x171938A2: mov ecx, dword ptr [ebp - 0x18] */
    eax = MEM32(ebx + 0x28); /* 0x171938A5: mov eax, dword ptr [ebx + 0x28] */
    edx = MEM32(ebp + (-0x2C)); /* 0x171938A8: mov edx, dword ptr [ebp - 0x2c] */
    esi = MEM32(ebp + (-0x4)); /* 0x171938AB: mov esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x171938AE: add ecx, 4 */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(edx + eax + 0x18) */ /* 0x171938B1: cmp esi, dword ptr [edx + eax + 0x18] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(edx + eax + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x18)) = ecx; /* 0x171938B5: mov dword ptr [ebp - 0x18], ecx */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171937CB; /* 0x171938B8: jb 0x171937cb */
L_171938BE:
    goto L_1719398B; /* 0x171938BE: jmp 0x1719398b */
L_171938C3:
    esi = edi + 0x1C; /* 0x171938C3: lea esi, [edi + 0x1c] */
L_171938C6:
    ecx = MEM32(ebp + 0x14); /* 0x171938C6: mov ecx, dword ptr [ebp + 0x14] */
    eax = MEM32(esi); /* 0x171938C9: mov eax, dword ptr [esi] */
    edx = MEM32(ecx); /* 0x171938CB: mov edx, dword ptr [ecx] */
    /* cmp MEM8(eax + edx), 0 */ /* 0x171938CD: cmp byte ptr [eax + edx], 0 */
    _flag_a = (uint32_t)(MEM8(eax + edx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171938F2; /* 0x171938D1: jne 0x171938f2 */
L_171938D3:
    PUSH32(esp, ecx); /* 0x171938D3: push ecx */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171938D4: fstp st(0) */
    PUSH32(esp, eax); /* 0x171938D6: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171938D7: push dword ptr [ebp + 0xc] */
    ecx = ebx; /* 0x171938DA: mov ecx, ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171938DC: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_17193712); /* 0x171938DF: call 0x17193712 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171938E4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = eax; /* 0x171938E6: mov dword ptr [ebp - 0x20], eax */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171939FE; /* 0x171938E9: jl 0x171939fe */
L_171938EF:
    fp_push(*(double*)ADDR(ebp + (-0x28))); /* 0x171938EF: fld qword ptr [ebp - 0x28] */
L_171938F2:
    eax = MEM32(esi); /* 0x171938F2: mov eax, dword ptr [esi] */
    ecx = MEM32(ebx + 0x28); /* 0x171938F4: mov ecx, dword ptr [ebx + 0x28] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3Cu); /* 0x171938F7: imul eax, eax, 0x3c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x171938FA: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x171938FC: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x17193900: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(eax + 0xC)); /* 0x17193904: fld dword ptr [eax + 0xc] */
    fp_push(_st[0]); /* 0x17193907: fld st(0) */
    _st[0] += _st[2]; /* 0x17193909: fadd st(2) */
    *(double*)ADDR(ebp + (-0x28)) = _st[0]; /* 0x1719390B: fst qword ptr [ebp - 0x28] */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x1719390E: fstp st(2) */
    fp_push(_st[0]); /* 0x17193910: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x17193912: fmul dword ptr [eax] */
    fp_push(_st[1]); /* 0x17193914: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x17193916: fmul dword ptr [eax + 4] */
    fp_push(_st[2]); /* 0x17193919: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x1719391B: fmul dword ptr [eax + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x48)) = _v; } /* 0x1719391E: fstp dword ptr [ebp - 0x48] */
    fp_push(_st[1]); /* 0x17193921: fld st(1) */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x38)); /* 0x17193923: fadd dword ptr [ebp - 0x38] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x17193926: fstp dword ptr [ebp - 0x38] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x34)); /* 0x17193929: fadd dword ptr [ebp - 0x34] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x1719392C: fstp dword ptr [ebp - 0x34] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1719392F: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x48))); /* 0x17193931: fld dword ptr [ebp - 0x48] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x30)); /* 0x17193934: fadd dword ptr [ebp - 0x30] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x17193937: fstp dword ptr [ebp - 0x30] */
    if (CMP_BE(_flag_a, _flag_b)) goto L_17193979; /* 0x1719393A: jbe 0x17193979 */
L_1719393C:
    eax = MEM32(ebp + (-0xC)); /* 0x1719393C: mov eax, dword ptr [ebp - 0xc] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1719393F: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1719393F: shl eax, 2 */
    MEM32(ebp + (-0x14)) = eax; /* 0x17193942: mov dword ptr [ebp - 0x14], eax */
L_17193945:
    edx = MEM32(esi); /* 0x17193945: mov edx, dword ptr [esi] */
    fp_push(_st[0]); /* 0x17193947: fld st(0) */
    edi = MEM32(ebx + 0x28); /* 0x17193949: mov edi, dword ptr [ebx + 0x28] */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x3Cu); /* 0x1719394C: imul edx, edx, 0x3c */
    edx = MEM32(edx + edi + 0x10); /* 0x1719394F: mov edx, dword ptr [edx + edi + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x8)); /* 0x17193953: add edx, dword ptr [ebp - 8] */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + 0x8); /* 0x17193956: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax); /* 0x17193959: mov eax, dword ptr [eax] */
    ecx = MEM32(ebp + (-0x14)); /* 0x1719395B: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) + 4; /* 0x1719395E: add dword ptr [ebp - 0x14], 4 */
    _flag_k = FK_ADD;
    _st[0] *= (double)*(float*)ADDR(eax + edx * 4); /* 0x17193962: fmul dword ptr [eax + edx*4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x17193965: add ecx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x17193967: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    eax = MEM32(ebp + (-0x8)); /* 0x1719396A: mov eax, dword ptr [ebp - 8] */
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x1719396D: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _st[0] += (double)*(float*)ADDR(ecx); /* 0x17193970: fadd dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x17193972: fstp dword ptr [ecx] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17193945; /* 0x17193974: jb 0x17193945 */
L_17193976:
    edi = MEM32(ebp + (-0x1C)); /* 0x17193976: mov edi, dword ptr [ebp - 0x1c] */
L_17193979:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x17193979: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1719397C: fstp st(0) */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x1719397E: add esi, 4 */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + (-0x4)), 8 */ /* 0x17193981: cmp dword ptr [ebp - 4], 8 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171938C6; /* 0x17193985: jb 0x171938c6 */
L_1719398B:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17023588)); /* 0x1719398B: fcom qword ptr [0x17023588] */
    { float _v = (float)_st[0]; *(float*)ADDR(edi + 0xC) = _v; } /* 0x17193991: fst dword ptr [edi + 0xc] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17193994: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17193996: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1719399F; /* 0x17193999: jne 0x1719399f */
L_1719399B:
    fp_push(1.0); /* 0x1719399B: fld1  */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x1719399D: fdivrp st(1) */
L_1719399F:
    fp_push(_st[0]); /* 0x1719399F: fld st(0) */
    edx = MEM32(ebp + 0xC); /* 0x171939A1: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x171939A4: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(*(float*)&MEM32(ebp + (-0x38))); /* 0x171939A6: fld dword ptr [ebp - 0x38] */
    _st[0] *= _st[1]; /* 0x171939A9: fmul st(1) */
    esi = ebp + (-0x44); /* 0x171939AB: lea esi, [ebp - 0x44] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x171939AE: fstp dword ptr [ebp - 0x44] */
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x171939B1: fld dword ptr [ebp - 0x34] */
    _st[0] *= _st[1]; /* 0x171939B4: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x171939B6: fstp dword ptr [ebp - 0x40] */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x171939B9: fld dword ptr [ebp - 0x30] */
    _st[0] *= _st[1]; /* 0x171939BC: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x171939BE: fstp dword ptr [ebp - 0x3c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171939C1: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171939C2: movsd dword ptr es:[edi], dword ptr [esi] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171939C3: fstp st(0) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171939C5: movsd dword ptr es:[edi], dword ptr [esi] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171939E1; /* 0x171939C6: jbe 0x171939e1 */
L_171939C8:
    ecx = MEM32(ebp + (-0xC)); /* 0x171939C8: mov ecx, dword ptr [ebp - 0xc] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x171939CB: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x171939CB: shl ecx, 2 */
L_171939CE:
    eax = MEM32(ebp + 0x8); /* 0x171939CE: mov eax, dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x171939D1: fld st(0) */
    eax = MEM32(eax); /* 0x171939D3: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x171939D5: add eax, ecx */
    _flag_k = FK_ADD;
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x171939D7: fmul dword ptr [eax] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x171939D9: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x171939DC: dec edx */
    _flag_k = FK_DEC;
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x171939DD: fstp dword ptr [eax] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171939CE; /* 0x171939DF: jne 0x171939ce */
L_171939E1:
    ecx = MEM32(ebp + (-0x1C)); /* 0x171939E1: mov ecx, dword ptr [ebp - 0x1c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171939E4: fstp st(0) */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171939E6: push dword ptr [ebp + 0x10] */
    eax = ecx + 0x14; /* 0x171939E9: lea eax, [ecx + 0x14] */
    PUSH32(esp, eax); /* 0x171939EC: push eax */
    PUSH32(esp, ecx); /* 0x171939ED: push ecx */
    ecx = ebx; /* 0x171939EE: mov ecx, ebx */
    MEM32(eax) = 0xBDCCCCCDu; /* 0x171939F0: mov dword ptr [eax], 0xbdcccccd */
    RECOMP_CALL(sub_17192AD7); /* 0x171939F6: call 0x17192ad7 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x20)); /* 0x171939FB: mov eax, dword ptr [ebp - 0x20] */
L_171939FE:
    edi = POP32_VAL(esp); /* 0x171939FE: pop edi */
    esi = POP32_VAL(esp); /* 0x171939FF: pop esi */
L_17193A00:
    ebx = POP32_VAL(esp); /* 0x17193A00: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17193A01: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17193A02: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_17193A0A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17193A0Au);

L_17193A0A:
    edi = edi; /* 0x17193A0A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17193A0C: push ebp */
    ebp = esp; /* 0x17193A0D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x64u; /* 0x17193A0F: sub esp, 0x64 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x17193A12: push ebx */
    PUSH32(esp, esi); /* 0x17193A13: push esi */
    PUSH32(esp, edi); /* 0x17193A14: push edi */
    edi = MEM32(ebp + 0x18); /* 0x17193A15: mov edi, dword ptr [ebp + 0x18] */
    edi = (uint32_t)((int32_t)edi * (int32_t)0x3Cu); /* 0x17193A18: imul edi, edi, 0x3c */
    esi = ecx; /* 0x17193A1B: mov esi, ecx */
    eax = MEM32(esi + 0x28); /* 0x17193A1D: mov eax, dword ptr [esi + 0x28] */
    ebx = edi + eax; /* 0x17193A20: lea ebx, [edi + eax] */
    /* cmp MEM32(ebx + 0x18), 0xFFFFFFFFu */ /* 0x17193A23: cmp dword ptr [ebx + 0x18], -1 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x18)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edi; /* 0x17193A27: mov dword ptr [ebp - 4], edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17193BE3; /* 0x17193A2A: je 0x17193be3 */
L_17193A30:
    fp_push(*(float*)&MEM32(ebx + 0xC)); /* 0x17193A30: fld dword ptr [ebx + 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) & 0; /* 0x17193A33: and dword ptr [ebp + 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] += *(double*)ADDR(0x1723FB18); /* 0x17193A37: fadd qword ptr [0x1723fb18] */
    { double _v = fp_pop(); *(double*)ADDR(0x1723FB18) = _v; } /* 0x17193A3D: fstp qword ptr [0x1723fb18] */
    eax = MEM32(esi + 0x28); /* 0x17193A43: mov eax, dword ptr [esi + 0x28] */
    /* cmp MEM32(eax + edi + 0x18), 0 */ /* 0x17193A46: cmp dword ptr [eax + edi + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(eax + edi + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_17193D9F; /* 0x17193A4B: jle 0x17193d9f */
L_17193A51:
    fp_push(1.0); /* 0x17193A51: fld1  */
    ebx = MEM32(ebp + 0xC); /* 0x17193A53: mov ebx, dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x48)) = _v; } /* 0x17193A56: fstp dword ptr [ebp - 0x48] */
    edx = edi + 0x1C; /* 0x17193A59: lea edx, [edi + 0x1c] */
    fp_push(0.0); /* 0x17193A5C: fldz  */
    MEM32(ebp + 0xC) = edx; /* 0x17193A5E: mov dword ptr [ebp + 0xc], edx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x17193A61: fstp dword ptr [ebp - 0x44] */
    fp_push(0.0); /* 0x17193A64: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x17193A66: fstp dword ptr [ebp - 0x40] */
    fp_push(0.0); /* 0x17193A69: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x17193A6B: fstp dword ptr [ebp - 0x3c] */
    fp_push(1.0); /* 0x17193A6E: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x17193A70: fstp dword ptr [ebp - 0x38] */
    fp_push(0.0); /* 0x17193A73: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x17193A75: fstp dword ptr [ebp - 0x34] */
    fp_push(0.0); /* 0x17193A78: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x17193A7A: fstp dword ptr [ebp - 0x30] */
    fp_push(0.0); /* 0x17193A7D: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x17193A7F: fstp dword ptr [ebp - 0x2c] */
    fp_push(1.0); /* 0x17193A82: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x17193A84: fstp dword ptr [ebp - 0x28] */
    goto L_17193A8C; /* 0x17193A87: jmp 0x17193a8c */
L_17193A89:
    edx = MEM32(ebp + 0xC); /* 0x17193A89: mov edx, dword ptr [ebp + 0xc] */
L_17193A8C:
    ecx = MEM32(esi + 0x28); /* 0x17193A8C: mov ecx, dword ptr [esi + 0x28] */
    ecx = MEM32(edx + ecx); /* 0x17193A8F: mov ecx, dword ptr [edx + ecx] */
    edi = MEM32(esi + 0x18); /* 0x17193A92: mov edi, dword ptr [esi + 0x18] */
    ecx = ecx + ecx * 4; /* 0x17193A95: lea ecx, [ecx + ecx*4] */
    edi = edi + ecx * 4; /* 0x17193A98: lea edi, [edi + ecx*4] */
    fp_push(*(float*)&MEM32(edi)); /* 0x17193A9B: fld dword ptr [edi] */
    eax = MEM32(edx + eax); /* 0x17193A9D: mov eax, dword ptr [edx + eax] */
    _st[0] -= (double)*(float*)ADDR(ebx); /* 0x17193AA0: fsub dword ptr [ebx] */
    ecx = MEM32(esi + 0x18); /* 0x17193AA2: mov ecx, dword ptr [esi + 0x18] */
    fp_push(*(float*)&MEM32(edi + 0x4)); /* 0x17193AA5: fld dword ptr [edi + 4] */
    eax = eax + eax * 4; /* 0x17193AA8: lea eax, [eax + eax*4] */
    _st[0] -= (double)*(float*)ADDR(ebx + 0x4); /* 0x17193AAB: fsub dword ptr [ebx + 4] */
    eax = ecx + eax * 4 + 0xC; /* 0x17193AAE: lea eax, [ecx + eax*4 + 0xc] */
    fp_push(*(float*)&MEM32(edi + 0x8)); /* 0x17193AB2: fld dword ptr [edi + 8] */
    MEM32(ebp + 0x20) = eax; /* 0x17193AB5: mov dword ptr [ebp + 0x20], eax */
    _st[0] -= (double)*(float*)ADDR(ebx + 0x8); /* 0x17193AB8: fsub dword ptr [ebx + 8] */
    fp_push(_st[0]); /* 0x17193ABB: fld st(0) */
    _st[0] *= _st[1]; /* 0x17193ABD: fmul st(1) */
    fp_push(_st[2]); /* 0x17193ABF: fld st(2) */
    _st[0] *= _st[3]; /* 0x17193AC1: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17193AC3: faddp st(1) */
    fp_push(_st[3]); /* 0x17193AC5: fld st(3) */
    _st[0] *= _st[4]; /* 0x17193AC7: fmul st(4) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17193AC9: faddp st(1) */
    _st[0] = sqrt(_st[0]); /* 0x17193ACB: fsqrt  */
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x17193ACD: fstp st(3) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17193ACF: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17193AD1: fstp st(0) */
    fp_push(*(double*)ADDR(0x17237508)); /* 0x17193AD3: fld qword ptr [0x17237508] */
    fp_xch(1); /* 0x17193AD9: fxch st(1) */
    fp_push(_st[1]); /* 0x17193ADB: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x17193ADD: fmulp st(1) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x17193ADF: fstp st(1) */
    fp_push(_st[0]); /* 0x17193AE1: fld st(0) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x17193AE3: fmulp st(1) */
    fp_push(*(double*)ADDR(0x17237528)); /* 0x17193AE5: fld qword ptr [0x17237528] */
    fp_push(_st[0]); /* 0x17193AEB: fld st(0) */
    *(double*)ADDR(ebp + (-0x24)) = _st[0]; /* 0x17193AED: fst qword ptr [ebp - 0x24] */
    fp_push(*(double*)ADDR(0x17237518)); /* 0x17193AF0: fld qword ptr [0x17237518] */
    _st[0] *= *(double*)ADDR(0x170234F8); /* 0x17193AF6: fmul qword ptr [0x170234f8] */
    _st[0] += *(double*)ADDR(0x17001D88); /* 0x17193AFC: fadd qword ptr [0x17001d88] */
    _st[0] *= _st[2]; /* 0x17193B02: fmul st(2) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x1C)) = _v; } /* 0x17193B04: fstp qword ptr [ebp - 0x1c] */
    fp_push(_st[0]); /* 0x17193B07: fld st(0) */
    _st[0] *= _st[1]; /* 0x17193B09: fmul st(1) */
    _st[0] += _st[3]; /* 0x17193B0B: fadd st(3) */
    _st[0] = sqrt(_st[0]); /* 0x17193B0D: fsqrt  */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x14)) = _v; } /* 0x17193B0F: fstp qword ptr [ebp - 0x14] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17193B12: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17193B14: fstp st(0) */
    fp_push(*(double*)ADDR(ebp + (-0x1C))); /* 0x17193B16: fld qword ptr [ebp - 0x1c] */
    _st[0] *= *(double*)ADDR(ebp + (-0x1C)); /* 0x17193B19: fmul qword ptr [ebp - 0x1c] */
    _st[0] += _st[1]; /* 0x17193B1C: fadd st(1) */
    _st[0] = sqrt(_st[0]); /* 0x17193B1E: fsqrt  */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0xC)) = _v; } /* 0x17193B20: fstp qword ptr [ebp - 0xc] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17193B23: fstp st(0) */
    fp_push(*(double*)ADDR(ebp + (-0xC))); /* 0x17193B25: fld qword ptr [ebp - 0xc] */
    _st[0] *= *(double*)ADDR(0x1723FB28); /* 0x17193B28: fmul qword ptr [0x1723fb28] */
    _st[0] = -_st[0]; /* 0x17193B2E: fchs  */
    RECOMP_CALL(sub_1721B3E6); /* 0x17193B30: call 0x1721b3e6 */
    RECOMP_FLAGS_IN();
    fp_push(1.0); /* 0x17193B35: fld1  */
    _st[0] /= *(double*)ADDR(ebp + (-0xC)); /* 0x17193B37: fdiv qword ptr [ebp - 0xc] */
    _st[0] += *(double*)ADDR(0x1723FB28); /* 0x17193B3A: fadd qword ptr [0x1723fb28] */
    _st[0] *= *(double*)ADDR(ebp + (-0x1C)); /* 0x17193B40: fmul qword ptr [ebp - 0x1c] */
    fp_push(*(double*)ADDR(ebp + (-0xC))); /* 0x17193B43: fld qword ptr [ebp - 0xc] */
    _st[0] *= *(double*)ADDR(ebp + (-0xC)); /* 0x17193B46: fmul qword ptr [ebp - 0xc] */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x17193B49: fdivp st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x17193B4B: fmulp st(1) */
    fp_push(*(double*)ADDR(ebp + (-0x14))); /* 0x17193B4D: fld qword ptr [ebp - 0x14] */
    _st[0] *= *(double*)ADDR(0x1723FB28); /* 0x17193B50: fmul qword ptr [0x1723fb28] */
    _st[0] = -_st[0]; /* 0x17193B56: fchs  */
    RECOMP_CALL(sub_1721B3E6); /* 0x17193B58: call 0x1721b3e6 */
    RECOMP_FLAGS_IN();
    fp_push(1.0); /* 0x17193B5D: fld1  */
    _st[0] /= *(double*)ADDR(ebp + (-0x14)); /* 0x17193B5F: fdiv qword ptr [ebp - 0x14] */
    _st[0] += *(double*)ADDR(0x1723FB28); /* 0x17193B62: fadd qword ptr [0x1723fb28] */
    eax = MEM32(ebp + 0x20); /* 0x17193B68: mov eax, dword ptr [ebp + 0x20] */
    PUSH32(esp, ecx); /* 0x17193B6B: push ecx */
    PUSH32(esp, ecx); /* 0x17193B6C: push ecx */
    _st[0] *= *(double*)ADDR(ebp + (-0x24)); /* 0x17193B6D: fmul qword ptr [ebp - 0x24] */
    fp_push(*(double*)ADDR(ebp + (-0x14))); /* 0x17193B70: fld qword ptr [ebp - 0x14] */
    edi = MEM32(edi + 0x10); /* 0x17193B73: mov edi, dword ptr [edi + 0x10] */
    _st[0] *= *(double*)ADDR(ebp + (-0x14)); /* 0x17193B76: fmul qword ptr [ebp - 0x14] */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x17193B79: fdivp st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x17193B7B: fmulp st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17193B7D: faddp st(1) */
    _st[0] *= *(double*)ADDR(0x170234F0); /* 0x17193B7F: fmul qword ptr [0x170234f0] */
    fp_push(1.0); /* 0x17193B85: fld1  */
    _st[0] -= *(double*)ADDR(0x17237510); /* 0x17193B87: fsub qword ptr [0x17237510] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x17193B8D: fmulp st(1) */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x17193B8F: fmul dword ptr [eax] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x17193B91: fstp qword ptr [esp] */
    PUSH32(esp, 0); /* 0x17193B94: push 0 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x17193B96: push dword ptr [ebp + 0x14] */
    fp_push(*(float*)&MEM32(eax)); /* 0x17193B99: fld dword ptr [eax] */
    eax = ebp + (-0x30); /* 0x17193B9B: lea eax, [ebp - 0x30] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17193B9E: push dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x17193BA1: push ebx */
    PUSH32(esp, ecx); /* 0x17193BA2: push ecx */
    PUSH32(esp, ecx); /* 0x17193BA3: push ecx */
    ecx = MEM32(esi + 0x40); /* 0x17193BA4: mov ecx, dword ptr [esi + 0x40] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x17193BA7: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x17193BAA: push eax */
    eax = ebp + (-0x3C); /* 0x17193BAB: lea eax, [ebp - 0x3c] */
    PUSH32(esp, eax); /* 0x17193BAE: push eax */
    eax = ebp + (-0x48); /* 0x17193BAF: lea eax, [ebp - 0x48] */
    PUSH32(esp, eax); /* 0x17193BB2: push eax */
    eax = edi + edi * 2; /* 0x17193BB3: lea eax, [edi + edi*2] */
    eax = ecx + eax * 8; /* 0x17193BB6: lea eax, [ecx + eax*8] */
    PUSH32(esp, eax); /* 0x17193BB9: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17193BBA: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x17193BBD: mov ecx, esi */
    RECOMP_CALL(sub_17192BC8); /* 0x17193BBF: call 0x17192bc8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + 1; /* 0x17193BC4: inc dword ptr [ebp + 0x18] */
    _flag_k = FK_INC;
    eax = MEM32(esi + 0x28); /* 0x17193BC7: mov eax, dword ptr [esi + 0x28] */
    ecx = MEM32(ebp + (-0x4)); /* 0x17193BCA: mov ecx, dword ptr [ebp - 4] */
    edx = MEM32(ebp + 0x18); /* 0x17193BCD: mov edx, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 4; /* 0x17193BD0: add dword ptr [ebp + 0xc], 4 */
    _flag_k = FK_ADD;
    /* cmp edx, MEM32(eax + ecx + 0x18) */ /* 0x17193BD4: cmp edx, dword ptr [eax + ecx + 0x18] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + ecx + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_17193A89; /* 0x17193BD8: jl 0x17193a89 */
L_17193BDE:
    goto L_17193D9F; /* 0x17193BDE: jmp 0x17193d9f */
L_17193BE3:
    ecx = MEM32(ebp + 0xC); /* 0x17193BE3: mov ecx, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebx)); /* 0x17193BE6: fld dword ptr [ebx] */
    _st[0] -= (double)*(float*)ADDR(ecx); /* 0x17193BE8: fsub dword ptr [ecx] */
    fp_push(*(float*)&MEM32(ebx + 0x4)); /* 0x17193BEA: fld dword ptr [ebx + 4] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x4); /* 0x17193BED: fsub dword ptr [ecx + 4] */
    fp_push(*(float*)&MEM32(ebx + 0x8)); /* 0x17193BF0: fld dword ptr [ebx + 8] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x8); /* 0x17193BF3: fsub dword ptr [ecx + 8] */
    fp_push(_st[0]); /* 0x17193BF6: fld st(0) */
    _st[0] *= _st[1]; /* 0x17193BF8: fmul st(1) */
    fp_push(_st[2]); /* 0x17193BFA: fld st(2) */
    _st[0] *= _st[3]; /* 0x17193BFC: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17193BFE: faddp st(1) */
    fp_push(_st[3]); /* 0x17193C00: fld st(3) */
    _st[0] *= _st[4]; /* 0x17193C02: fmul st(4) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17193C04: faddp st(1) */
    _st[0] = sqrt(_st[0]); /* 0x17193C06: fsqrt  */
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x17193C08: fstp st(3) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17193C0A: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17193C0C: fstp st(0) */
    fp_push(*(double*)ADDR(0x17237508)); /* 0x17193C0E: fld qword ptr [0x17237508] */
    fp_xch(1); /* 0x17193C14: fxch st(1) */
    fp_push(_st[1]); /* 0x17193C16: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x17193C18: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17193C1A: fstp dword ptr [ebp - 4] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17193C1D: fstp st(0) */
    fp_push(*(double*)ADDR(ebp + 0x1C)); /* 0x17193C1F: fld qword ptr [ebp + 0x1c] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x1C)) = _v; } /* 0x17193C22: fstp qword ptr [ebp - 0x1c] */
    fp_push(*(double*)ADDR(0x170055F8)); /* 0x17193C25: fld qword ptr [0x170055f8] */
    fp_push(*(double*)ADDR(ebp + 0x1C)); /* 0x17193C2B: fld qword ptr [ebp + 0x1c] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x17193C2E: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17193C30: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x17193C32: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17193CEC; /* 0x17193C35: jp 0x17193cec */
L_17193C3B:
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17193C3B: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x17193C3E: fmul dword ptr [ebp - 4] */
    fp_push(*(double*)ADDR(0x17237528)); /* 0x17193C41: fld qword ptr [0x17237528] */
    fp_push(_st[0]); /* 0x17193C47: fld st(0) */
    *(double*)ADDR(ebp + (-0x24)) = _st[0]; /* 0x17193C49: fst qword ptr [ebp - 0x24] */
    fp_push(*(double*)ADDR(0x17237518)); /* 0x17193C4C: fld qword ptr [0x17237518] */
    _st[0] *= *(double*)ADDR(0x170234F8); /* 0x17193C52: fmul qword ptr [0x170234f8] */
    _st[0] += *(double*)ADDR(0x17001D88); /* 0x17193C58: fadd qword ptr [0x17001d88] */
    _st[0] *= _st[2]; /* 0x17193C5E: fmul st(2) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x1C)) = _v; } /* 0x17193C60: fstp qword ptr [ebp - 0x1c] */
    fp_push(_st[0]); /* 0x17193C63: fld st(0) */
    _st[0] *= _st[1]; /* 0x17193C65: fmul st(1) */
    _st[0] += _st[3]; /* 0x17193C67: fadd st(3) */
    _st[0] = sqrt(_st[0]); /* 0x17193C69: fsqrt  */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x14)) = _v; } /* 0x17193C6B: fstp qword ptr [ebp - 0x14] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17193C6E: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17193C70: fstp st(0) */
    fp_push(*(double*)ADDR(ebp + (-0x1C))); /* 0x17193C72: fld qword ptr [ebp - 0x1c] */
    _st[0] *= *(double*)ADDR(ebp + (-0x1C)); /* 0x17193C75: fmul qword ptr [ebp - 0x1c] */
    _st[0] += _st[1]; /* 0x17193C78: fadd st(1) */
    _st[0] = sqrt(_st[0]); /* 0x17193C7A: fsqrt  */
    { double _v = fp_pop(); *(double*)ADDR(ebp + 0x1C) = _v; } /* 0x17193C7C: fstp qword ptr [ebp + 0x1c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17193C7F: fstp st(0) */
    fp_push(*(double*)ADDR(ebp + 0x1C)); /* 0x17193C81: fld qword ptr [ebp + 0x1c] */
    _st[0] *= *(double*)ADDR(0x1723FB28); /* 0x17193C84: fmul qword ptr [0x1723fb28] */
    _st[0] = -_st[0]; /* 0x17193C8A: fchs  */
    RECOMP_CALL(sub_1721B3E6); /* 0x17193C8C: call 0x1721b3e6 */
    RECOMP_FLAGS_IN();
    fp_push(1.0); /* 0x17193C91: fld1  */
    _st[0] /= *(double*)ADDR(ebp + 0x1C); /* 0x17193C93: fdiv qword ptr [ebp + 0x1c] */
    _st[0] += *(double*)ADDR(0x1723FB28); /* 0x17193C96: fadd qword ptr [0x1723fb28] */
    _st[0] *= *(double*)ADDR(ebp + (-0x1C)); /* 0x17193C9C: fmul qword ptr [ebp - 0x1c] */
    fp_push(*(double*)ADDR(ebp + 0x1C)); /* 0x17193C9F: fld qword ptr [ebp + 0x1c] */
    _st[0] *= *(double*)ADDR(ebp + 0x1C); /* 0x17193CA2: fmul qword ptr [ebp + 0x1c] */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x17193CA5: fdivp st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x17193CA7: fmulp st(1) */
    fp_push(*(double*)ADDR(ebp + (-0x14))); /* 0x17193CA9: fld qword ptr [ebp - 0x14] */
    _st[0] *= *(double*)ADDR(0x1723FB28); /* 0x17193CAC: fmul qword ptr [0x1723fb28] */
    _st[0] = -_st[0]; /* 0x17193CB2: fchs  */
    RECOMP_CALL(sub_1721B3E6); /* 0x17193CB4: call 0x1721b3e6 */
    RECOMP_FLAGS_IN();
    fp_push(1.0); /* 0x17193CB9: fld1  */
    _st[0] /= *(double*)ADDR(ebp + (-0x14)); /* 0x17193CBB: fdiv qword ptr [ebp - 0x14] */
    ecx = MEM32(ebp + 0xC); /* 0x17193CBE: mov ecx, dword ptr [ebp + 0xc] */
    _st[0] += *(double*)ADDR(0x1723FB28); /* 0x17193CC1: fadd qword ptr [0x1723fb28] */
    _st[0] *= *(double*)ADDR(ebp + (-0x24)); /* 0x17193CC7: fmul qword ptr [ebp - 0x24] */
    fp_push(*(double*)ADDR(ebp + (-0x14))); /* 0x17193CCA: fld qword ptr [ebp - 0x14] */
    _st[0] *= *(double*)ADDR(ebp + (-0x14)); /* 0x17193CCD: fmul qword ptr [ebp - 0x14] */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x17193CD0: fdivp st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x17193CD2: fmulp st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17193CD4: faddp st(1) */
    _st[0] *= *(double*)ADDR(0x170234F0); /* 0x17193CD6: fmul qword ptr [0x170234f0] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0xC); /* 0x17193CDC: fmul dword ptr [ebx + 0xc] */
    fp_push(1.0); /* 0x17193CDF: fld1  */
    _st[0] -= *(double*)ADDR(0x17237510); /* 0x17193CE1: fsub qword ptr [0x17237510] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x17193CE7: fmulp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x1C)) = _v; } /* 0x17193CE9: fstp qword ptr [ebp - 0x1c] */
L_17193CEC:
    eax = ebp + (-0x64); /* 0x17193CEC: lea eax, [ebp - 0x64] */
    PUSH32(esp, eax); /* 0x17193CEF: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x17193CF0: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17193CF3: push dword ptr [ebp + 0x10] */
    PUSH32(esp, ecx); /* 0x17193CF6: push ecx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17193CF7: push dword ptr [ebp + 8] */
    ecx = esi; /* 0x17193CFA: mov ecx, esi */
    RECOMP_CALL(sub_171935A3); /* 0x17193CFC: call 0x171935a3 */
    RECOMP_FLAGS_IN();
    _st[0] = *(double*)ADDR(ebp + (-0x1C)) - _st[0]; /* 0x17193D01: fsubr qword ptr [ebp - 0x1c] */
    _st[0] = fabs(_st[0]); /* 0x17193D04: fabs  */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x170234C0)); /* 0x17193D06: fcomp qword ptr [0x170234c0] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17193D0C: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17193D0E: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17193D6F; /* 0x17193D11: je 0x17193d6f */
L_17193D13:
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17193D13: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x17193D16: fmul dword ptr [ebp - 4] */
    _st[0] = (double)*(float*)ADDR(ebx + 0xC) / _st[0]; /* 0x17193D19: fdivr dword ptr [ebx + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x170234B8)); /* 0x17193D1C: fcomp qword ptr [0x170234b8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17193D22: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17193D24: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_17193D6F; /* 0x17193D27: je 0x17193d6f */
L_17193D29:
    eax = MEM32(esi + 0x28); /* 0x17193D29: mov eax, dword ptr [esi + 0x28] */
    fp_push(*(float*)&MEM32(edi + eax + 0xC)); /* 0x17193D2C: fld dword ptr [edi + eax + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x17193D30: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x10), ecx */ /* 0x17193D32: cmp dword ptr [ebp + 0x10], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _st[0] += *(double*)ADDR(0x1723FB20); /* 0x17193D35: fadd qword ptr [0x1723fb20] */
    { double _v = fp_pop(); *(double*)ADDR(0x1723FB20) = _v; } /* 0x17193D3B: fstp qword ptr [0x1723fb20] */
    eax = MEM32(esi + 0x28); /* 0x17193D41: mov eax, dword ptr [esi + 0x28] */
    edi = MEM32(edi + eax + 0x10); /* 0x17193D44: mov edi, dword ptr [edi + eax + 0x10] */
    if (CMP_BE(_flag_a, _flag_b)) goto L_17193D9F; /* 0x17193D48: jbe 0x17193d9f */
L_17193D4A:
    edx = edi; /* 0x17193D4A: mov edx, edi */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x17193D4C: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x17193D4C: shl edx, 2 */
L_17193D4F:
    esi = MEM32(ebp + 0x8); /* 0x17193D4F: mov esi, dword ptr [ebp + 8] */
    esi = MEM32(esi); /* 0x17193D52: mov esi, dword ptr [esi] */
    fp_push(*(float*)&MEM32(esi + edx)); /* 0x17193D54: fld dword ptr [esi + edx] */
    eax = MEM32(ebp + 0x14); /* 0x17193D57: mov eax, dword ptr [ebp + 0x14] */
    _st[0] *= *(double*)ADDR(ebp + (-0x1C)); /* 0x17193D5A: fmul qword ptr [ebp - 0x1c] */
    eax = eax + ecx * 4; /* 0x17193D5D: lea eax, [eax + ecx*4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x17193D60: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x17193D61: add edx, 4 */
    _flag_k = FK_ADD;
    /* cmp ecx, MEM32(ebp + 0x10) */ /* 0x17193D64: cmp ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _st[0] += (double)*(float*)ADDR(eax); /* 0x17193D67: fadd dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17193D69: fstp dword ptr [eax] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_17193D4F; /* 0x17193D6B: jb 0x17193d4f */
L_17193D6D:
    goto L_17193D9F; /* 0x17193D6D: jmp 0x17193d9f */
L_17193D6F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x17193D6F: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x1Cu; /* 0x17193D71: add edi, 0x1c */
    _flag_k = FK_ADD;
L_17193D74:
    fp_push(*(double*)ADDR(ebp + ebx * 8 + (-0x64))); /* 0x17193D74: fld qword ptr [ebp + ebx*8 - 0x64] */
    eax = MEM32(esi + 0x28); /* 0x17193D78: mov eax, dword ptr [esi + 0x28] */
    PUSH32(esp, ecx); /* 0x17193D7B: push ecx */
    PUSH32(esp, ecx); /* 0x17193D7C: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x17193D7D: fstp qword ptr [esp] */
    PUSH32(esp, MEM32(eax + edi)); /* 0x17193D80: push dword ptr [eax + edi] */
    ecx = esi; /* 0x17193D83: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x17193D85: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17193D88: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17193D8B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17193D8E: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_17193A0A); /* 0x17193D91: call 0x17193a0a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x17193D96: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x17193D97: add edi, 4 */
    _flag_k = FK_ADD;
    /* cmp ebx, 8 */ /* 0x17193D9A: cmp ebx, 8 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_17193D74; /* 0x17193D9D: jl 0x17193d74 */
L_17193D9F:
    edi = POP32_VAL(esp); /* 0x17193D9F: pop edi */
    esi = POP32_VAL(esp); /* 0x17193DA0: pop esi */
    ebx = POP32_VAL(esp); /* 0x17193DA1: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17193DA2: leave  */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x17193DA3: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_17193DAB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17193DABu);

L_17193DAB:
    eax = 0x1721C64Cu; /* 0x17193DAB: mov eax, 0x1721c64c */
    RECOMP_CALL(sub_1721B168); /* 0x17193DB0: call 0x1721b168 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x17193DB5: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x17193DB8: push esi */
    esi = ecx; /* 0x17193DB9: mov esi, ecx */
    ecx = ebp + (-0x20); /* 0x17193DBB: lea ecx, [ebp - 0x20] */
    RECOMP_CALL(sub_1718BF75); /* 0x17193DBE: call 0x1718bf75 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x14)); /* 0x17193DC3: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x17193DC6: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x17193DCA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17193E00; /* 0x17193DCC: jl 0x17193e00 */
L_17193DCE:
    PUSH32(esp, MEM32(esi + 0x2C)); /* 0x17193DCE: push dword ptr [esi + 0x2c] */
    ecx = ebp + (-0x20); /* 0x17193DD1: lea ecx, [ebp - 0x20] */
    RECOMP_CALL(sub_171852AF); /* 0x17193DD4: call 0x171852af */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17193DD9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_17193E00; /* 0x17193DDB: jl 0x17193e00 */
L_17193DDD:
    eax = ebp + (-0xD); /* 0x17193DDD: lea eax, [ebp - 0xd] */
    PUSH32(esp, eax); /* 0x17193DE0: push eax */
    ecx = ebp + (-0x20); /* 0x17193DE1: lea ecx, [ebp - 0x20] */
    MEM8(ebp + (-0xD)) = (uint8_t)(0); /* 0x17193DE4: mov byte ptr [ebp - 0xd], 0 */
    RECOMP_CALL(sub_1718BAB3); /* 0x17193DE8: call 0x1718bab3 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x20); /* 0x17193DED: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x17193DF0: push eax */
    PUSH32(esp, 0); /* 0x17193DF1: push 0 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17193DF3: push dword ptr [ebp + 0xc] */
    ecx = esi; /* 0x17193DF6: mov ecx, esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17193DF8: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_17193712); /* 0x17193DFB: call 0x17193712 */
    RECOMP_FLAGS_IN();
L_17193E00:
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x17193E00: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x20); /* 0x17193E04: lea ecx, [ebp - 0x20] */
    esi = eax; /* 0x17193E07: mov esi, eax */
    RECOMP_CALL(sub_1717AF06); /* 0x17193E09: call 0x1717af06 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x17193E0E: mov ecx, dword ptr [ebp - 0xc] */
    eax = esi; /* 0x17193E11: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x17193E13: pop esi */
    MEM32(FS_BASE + (0)) = ecx; /* 0x17193E14: mov dword ptr fs:[0], ecx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17193E1B: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17193E1C: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17193E24(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17193E24u);

L_17193E24:
    edi = edi; /* 0x17193E24: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17193E26: push ebp */
    ebp = esp; /* 0x17193E27: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x4Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x4Cu; /* 0x17193E29: sub esp, 0x4c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x17193E2C: push ebx */
    ebx = ecx; /* 0x17193E2D: mov ebx, ecx */
    ecx = MEM32(ebp + 0x18); /* 0x17193E2F: mov ecx, dword ptr [ebp + 0x18] */
    edx = MEM32(ebx + 0x28); /* 0x17193E32: mov edx, dword ptr [ebx + 0x28] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3Cu); /* 0x17193E35: imul ecx, ecx, 0x3c */
    eax = edx + ecx; /* 0x17193E38: lea eax, [edx + ecx] */
    /* cmp MEM32(eax + 0x18), 0xFFFFFFFFu */ /* 0x17193E3B: cmp dword ptr [eax + 0x18], -1 */
    _flag_a = (uint32_t)(MEM32(eax + 0x18)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x17193E3F: push esi */
    PUSH32(esp, edi); /* 0x17193E40: push edi */
    MEM32(ebp + (-0x4)) = ecx; /* 0x17193E41: mov dword ptr [ebp - 4], ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17193FFD; /* 0x17193E44: je 0x17193ffd */
L_17193E4A:
    fp_push(*(float*)&MEM32(eax + 0xC)); /* 0x17193E4A: fld dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) & 0; /* 0x17193E4D: and dword ptr [ebp + 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] += *(double*)ADDR(0x1723FB18); /* 0x17193E51: fadd qword ptr [0x1723fb18] */
    { double _v = fp_pop(); *(double*)ADDR(0x1723FB18) = _v; } /* 0x17193E57: fstp qword ptr [0x1723fb18] */
    eax = MEM32(ebx + 0x28); /* 0x17193E5D: mov eax, dword ptr [ebx + 0x28] */
    /* cmp MEM32(eax + ecx + 0x18), 0 */ /* 0x17193E60: cmp dword ptr [eax + ecx + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(eax + ecx + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_17194139; /* 0x17193E65: jle 0x17194139 */
L_17193E6B:
    fp_push(1.0); /* 0x17193E6B: fld1  */
    edi = MEM32(ebp + 0xC); /* 0x17193E6D: mov edi, dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4C)) = _v; } /* 0x17193E70: fstp dword ptr [ebp - 0x4c] */
    edx = ecx + 0x1C; /* 0x17193E73: lea edx, [ecx + 0x1c] */
    fp_push(0.0); /* 0x17193E76: fldz  */
    MEM32(ebp + 0xC) = edx; /* 0x17193E78: mov dword ptr [ebp + 0xc], edx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x48)) = _v; } /* 0x17193E7B: fstp dword ptr [ebp - 0x48] */
    fp_push(0.0); /* 0x17193E7E: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x17193E80: fstp dword ptr [ebp - 0x44] */
    fp_push(0.0); /* 0x17193E83: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x17193E85: fstp dword ptr [ebp - 0x40] */
    fp_push(1.0); /* 0x17193E88: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x17193E8A: fstp dword ptr [ebp - 0x3c] */
    fp_push(0.0); /* 0x17193E8D: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x17193E8F: fstp dword ptr [ebp - 0x38] */
    fp_push(0.0); /* 0x17193E92: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x17193E94: fstp dword ptr [ebp - 0x34] */
    fp_push(0.0); /* 0x17193E97: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x17193E99: fstp dword ptr [ebp - 0x30] */
    fp_push(1.0); /* 0x17193E9C: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x17193E9E: fstp dword ptr [ebp - 0x2c] */
    goto L_17193EA6; /* 0x17193EA1: jmp 0x17193ea6 */
L_17193EA3:
    edx = MEM32(ebp + 0xC); /* 0x17193EA3: mov edx, dword ptr [ebp + 0xc] */
L_17193EA6:
    ecx = MEM32(ebx + 0x28); /* 0x17193EA6: mov ecx, dword ptr [ebx + 0x28] */
    ecx = MEM32(edx + ecx); /* 0x17193EA9: mov ecx, dword ptr [edx + ecx] */
    esi = MEM32(ebx + 0x18); /* 0x17193EAC: mov esi, dword ptr [ebx + 0x18] */
    ecx = ecx + ecx * 4; /* 0x17193EAF: lea ecx, [ecx + ecx*4] */
    esi = esi + ecx * 4; /* 0x17193EB2: lea esi, [esi + ecx*4] */
    fp_push(*(float*)&MEM32(esi)); /* 0x17193EB5: fld dword ptr [esi] */
    eax = MEM32(edx + eax); /* 0x17193EB7: mov eax, dword ptr [edx + eax] */
    _st[0] -= (double)*(float*)ADDR(edi); /* 0x17193EBA: fsub dword ptr [edi] */
    ecx = MEM32(ebx + 0x18); /* 0x17193EBC: mov ecx, dword ptr [ebx + 0x18] */
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x17193EBF: fld dword ptr [esi + 4] */
    eax = eax + eax * 4; /* 0x17193EC2: lea eax, [eax + eax*4] */
    _st[0] -= (double)*(float*)ADDR(edi + 0x4); /* 0x17193EC5: fsub dword ptr [edi + 4] */
    eax = ecx + eax * 4 + 0xC; /* 0x17193EC8: lea eax, [ecx + eax*4 + 0xc] */
    fp_push(*(float*)&MEM32(esi + 0x8)); /* 0x17193ECC: fld dword ptr [esi + 8] */
    MEM32(ebp + 0x24) = eax; /* 0x17193ECF: mov dword ptr [ebp + 0x24], eax */
    _st[0] -= (double)*(float*)ADDR(edi + 0x8); /* 0x17193ED2: fsub dword ptr [edi + 8] */
    fp_push(_st[1]); /* 0x17193ED5: fld st(1) */
    _st[0] *= _st[2]; /* 0x17193ED7: fmul st(2) */
    fp_push(_st[1]); /* 0x17193ED9: fld st(1) */
    _st[0] *= _st[2]; /* 0x17193EDB: fmul st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17193EDD: faddp st(1) */
    fp_push(_st[3]); /* 0x17193EDF: fld st(3) */
    _st[0] *= _st[4]; /* 0x17193EE1: fmul st(4) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17193EE3: faddp st(1) */
    _st[0] = sqrt(_st[0]); /* 0x17193EE5: fsqrt  */
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x17193EE7: fstp st(3) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17193EE9: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17193EEB: fstp st(0) */
    fp_push(*(double*)ADDR(0x17237508)); /* 0x17193EED: fld qword ptr [0x17237508] */
    fp_xch(1); /* 0x17193EF3: fxch st(1) */
    fp_push(_st[1]); /* 0x17193EF5: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x17193EF7: fmulp st(1) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x17193EF9: fstp st(1) */
    fp_push(_st[0]); /* 0x17193EFB: fld st(0) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x17193EFD: fmulp st(1) */
    fp_push(*(double*)ADDR(0x17237528)); /* 0x17193EFF: fld qword ptr [0x17237528] */
    fp_push(_st[0]); /* 0x17193F05: fld st(0) */
    *(double*)ADDR(ebp + (-0x24)) = _st[0]; /* 0x17193F07: fst qword ptr [ebp - 0x24] */
    fp_push(*(double*)ADDR(0x17237518)); /* 0x17193F0A: fld qword ptr [0x17237518] */
    _st[0] *= *(double*)ADDR(0x170234F8); /* 0x17193F10: fmul qword ptr [0x170234f8] */
    _st[0] += *(double*)ADDR(0x17001D88); /* 0x17193F16: fadd qword ptr [0x17001d88] */
    _st[0] *= _st[2]; /* 0x17193F1C: fmul st(2) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x18)) = _v; } /* 0x17193F1E: fstp qword ptr [ebp - 0x18] */
    fp_push(_st[0]); /* 0x17193F21: fld st(0) */
    _st[0] *= _st[1]; /* 0x17193F23: fmul st(1) */
    _st[0] += _st[3]; /* 0x17193F25: fadd st(3) */
    _st[0] = sqrt(_st[0]); /* 0x17193F27: fsqrt  */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0xC)) = _v; } /* 0x17193F29: fstp qword ptr [ebp - 0xc] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17193F2C: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17193F2E: fstp st(0) */
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x17193F30: fld qword ptr [ebp - 0x18] */
    _st[0] *= *(double*)ADDR(ebp + (-0x18)); /* 0x17193F33: fmul qword ptr [ebp - 0x18] */
    _st[0] += _st[1]; /* 0x17193F36: fadd st(1) */
    _st[0] = sqrt(_st[0]); /* 0x17193F38: fsqrt  */
    { double _v = fp_pop(); *(double*)ADDR(ebp + 0x2C) = _v; } /* 0x17193F3A: fstp qword ptr [ebp + 0x2c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17193F3D: fstp st(0) */
    fp_push(*(double*)ADDR(ebp + 0x2C)); /* 0x17193F3F: fld qword ptr [ebp + 0x2c] */
    _st[0] *= *(double*)ADDR(0x1723FB28); /* 0x17193F42: fmul qword ptr [0x1723fb28] */
    _st[0] = -_st[0]; /* 0x17193F48: fchs  */
    RECOMP_CALL(sub_1721B3E6); /* 0x17193F4A: call 0x1721b3e6 */
    RECOMP_FLAGS_IN();
    fp_push(1.0); /* 0x17193F4F: fld1  */
    _st[0] /= *(double*)ADDR(ebp + 0x2C); /* 0x17193F51: fdiv qword ptr [ebp + 0x2c] */
    _st[0] += *(double*)ADDR(0x1723FB28); /* 0x17193F54: fadd qword ptr [0x1723fb28] */
    _st[0] *= *(double*)ADDR(ebp + (-0x18)); /* 0x17193F5A: fmul qword ptr [ebp - 0x18] */
    fp_push(*(double*)ADDR(ebp + 0x2C)); /* 0x17193F5D: fld qword ptr [ebp + 0x2c] */
    _st[0] *= *(double*)ADDR(ebp + 0x2C); /* 0x17193F60: fmul qword ptr [ebp + 0x2c] */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x17193F63: fdivp st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x17193F65: fmulp st(1) */
    fp_push(*(double*)ADDR(ebp + (-0xC))); /* 0x17193F67: fld qword ptr [ebp - 0xc] */
    _st[0] *= *(double*)ADDR(0x1723FB28); /* 0x17193F6A: fmul qword ptr [0x1723fb28] */
    _st[0] = -_st[0]; /* 0x17193F70: fchs  */
    RECOMP_CALL(sub_1721B3E6); /* 0x17193F72: call 0x1721b3e6 */
    RECOMP_FLAGS_IN();
    fp_push(1.0); /* 0x17193F77: fld1  */
    _st[0] /= *(double*)ADDR(ebp + (-0xC)); /* 0x17193F79: fdiv qword ptr [ebp - 0xc] */
    _st[0] += *(double*)ADDR(0x1723FB28); /* 0x17193F7C: fadd qword ptr [0x1723fb28] */
    eax = MEM32(ebp + 0x24); /* 0x17193F82: mov eax, dword ptr [ebp + 0x24] */
    PUSH32(esp, ecx); /* 0x17193F85: push ecx */
    PUSH32(esp, ecx); /* 0x17193F86: push ecx */
    _st[0] *= *(double*)ADDR(ebp + (-0x24)); /* 0x17193F87: fmul qword ptr [ebp - 0x24] */
    fp_push(*(double*)ADDR(ebp + (-0xC))); /* 0x17193F8A: fld qword ptr [ebp - 0xc] */
    esi = MEM32(esi + 0x10); /* 0x17193F8D: mov esi, dword ptr [esi + 0x10] */
    _st[0] *= *(double*)ADDR(ebp + (-0xC)); /* 0x17193F90: fmul qword ptr [ebp - 0xc] */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x17193F93: fdivp st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x17193F95: fmulp st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17193F97: faddp st(1) */
    _st[0] *= *(double*)ADDR(0x170234F0); /* 0x17193F99: fmul qword ptr [0x170234f0] */
    fp_push(1.0); /* 0x17193F9F: fld1  */
    _st[0] -= *(double*)ADDR(0x17237510); /* 0x17193FA1: fsub qword ptr [0x17237510] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x17193FA7: fmulp st(1) */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x17193FA9: fmul dword ptr [eax] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x17193FAB: fstp qword ptr [esp] */
    PUSH32(esp, 0); /* 0x17193FAE: push 0 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x17193FB0: push dword ptr [ebp + 0x14] */
    fp_push(*(float*)&MEM32(eax)); /* 0x17193FB3: fld dword ptr [eax] */
    eax = ebp + (-0x34); /* 0x17193FB5: lea eax, [ebp - 0x34] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17193FB8: push dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x17193FBB: push edi */
    PUSH32(esp, ecx); /* 0x17193FBC: push ecx */
    PUSH32(esp, ecx); /* 0x17193FBD: push ecx */
    ecx = MEM32(ebx + 0x40); /* 0x17193FBE: mov ecx, dword ptr [ebx + 0x40] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x17193FC1: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x17193FC4: push eax */
    eax = ebp + (-0x40); /* 0x17193FC5: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x17193FC8: push eax */
    eax = ebp + (-0x4C); /* 0x17193FC9: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x17193FCC: push eax */
    eax = esi + esi * 2; /* 0x17193FCD: lea eax, [esi + esi*2] */
    eax = ecx + eax * 8; /* 0x17193FD0: lea eax, [ecx + eax*8] */
    PUSH32(esp, eax); /* 0x17193FD3: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17193FD4: push dword ptr [ebp + 8] */
    ecx = ebx; /* 0x17193FD7: mov ecx, ebx */
    RECOMP_CALL(sub_17192BC8); /* 0x17193FD9: call 0x17192bc8 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + 1; /* 0x17193FDE: inc dword ptr [ebp + 0x18] */
    _flag_k = FK_INC;
    eax = MEM32(ebx + 0x28); /* 0x17193FE1: mov eax, dword ptr [ebx + 0x28] */
    ecx = MEM32(ebp + (-0x4)); /* 0x17193FE4: mov ecx, dword ptr [ebp - 4] */
    edx = MEM32(ebp + 0x18); /* 0x17193FE7: mov edx, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 4; /* 0x17193FEA: add dword ptr [ebp + 0xc], 4 */
    _flag_k = FK_ADD;
    /* cmp edx, MEM32(eax + ecx + 0x18) */ /* 0x17193FEE: cmp edx, dword ptr [eax + ecx + 0x18] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + ecx + 0x18));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_17193EA3; /* 0x17193FF2: jl 0x17193ea3 */
L_17193FF8:
    goto L_17194139; /* 0x17193FF8: jmp 0x17194139 */
L_17193FFD:
    fp_push(*(float*)&MEM32(ebp + 0x28)); /* 0x17193FFD: fld dword ptr [ebp + 0x28] */
    esi = MEM32(ebp + 0xC); /* 0x17194000: mov esi, dword ptr [ebp + 0xc] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x1C); /* 0x17194003: fsub dword ptr [ebp + 0x1c] */
    edi = ebp + (-0x10); /* 0x17194006: lea edi, [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17194009: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x1719400A: fstp dword ptr [ebp - 0x28] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1719400D: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + 0x2C)); /* 0x1719400E: fld dword ptr [ebp + 0x2c] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x20); /* 0x17194011: fsub dword ptr [ebp + 0x20] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17194014: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x17194015: fstp dword ptr [ebp - 0x24] */
    fp_push(*(float*)&MEM32(ebp + 0x30)); /* 0x17194018: fld dword ptr [ebp + 0x30] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x24); /* 0x1719401B: fsub dword ptr [ebp + 0x24] */
    fp_push(*(float*)&MEM32(0x1700141C)); /* 0x1719401E: fld dword ptr [0x1700141c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17194024: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x17194026: fld dword ptr [ebp - 0x28] */
    _st[0] *= _st[1]; /* 0x17194029: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x1719402B: fstp dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x1719402E: fld dword ptr [ebp - 0x24] */
    _st[0] *= _st[1]; /* 0x17194031: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x17194033: fstp dword ptr [ebp - 0x18] */
    fp_push(_st[1]); /* 0x17194036: fld st(1) */
    _st[0] *= _st[1]; /* 0x17194038: fmul st(1) */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x1719403A: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1719403C: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x1719403E: fld dword ptr [ebp - 0x1c] */
    _st[0] += (double)*(float*)ADDR(ebp + 0x1C); /* 0x17194041: fadd dword ptr [ebp + 0x1c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x17194044: fstp dword ptr [ebp - 0x28] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x17194047: fld dword ptr [ebp - 0x18] */
    _st[0] += (double)*(float*)ADDR(ebp + 0x20); /* 0x1719404A: fadd dword ptr [ebp + 0x20] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x1719404D: fstp dword ptr [ebp - 0x24] */
    _st[0] += (double)*(float*)ADDR(ebp + 0x24); /* 0x17194050: fadd dword ptr [ebp + 0x24] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x17194053: fstp dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x17194056: fld dword ptr [ebp - 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x28))); /* 0x17194059: fcomp dword ptr [ebp - 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1719405C: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1719405E: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17194064; /* 0x17194061: jne 0x17194064 */
L_17194063:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17194063: inc esi */
    _flag_k = FK_INC;
L_17194064:
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x17194064: fld dword ptr [ebp - 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x24))); /* 0x17194067: fcomp dword ptr [ebp - 0x24] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1719406A: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1719406C: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17194076; /* 0x1719406F: jne 0x17194076 */
L_17194071:
    PUSH32(esp, 2); /* 0x17194071: push 2 */
    ecx = POP32_VAL(esp); /* 0x17194073: pop ecx */
    goto L_17194078; /* 0x17194074: jmp 0x17194078 */
L_17194076:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x17194076: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_17194078:
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17194078: fld dword ptr [ebp - 8] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x20))); /* 0x1719407B: fcomp dword ptr [ebp - 0x20] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1719407E: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17194080: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1719408A; /* 0x17194083: jne 0x1719408a */
L_17194085:
    PUSH32(esp, 4); /* 0x17194085: push 4 */
    eax = POP32_VAL(esp); /* 0x17194087: pop eax */
    goto L_1719408C; /* 0x17194088: jmp 0x1719408c */
L_1719408A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1719408A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1719408C:
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x1719408C: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | esi)); _flag_b = (uint32_t)((eax | esi));
    eax = eax | esi; /* 0x1719408E: or eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17194090: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax; /* 0x17194092: mov ecx, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17194094: inc esi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = ecx; /* 0x17194095: mov dword ptr [ebp - 4], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17194098: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_1719409A:
    edi = esi; /* 0x1719409A: mov edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    edi = edi & ecx; /* 0x1719409C: and edi, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171940A6; /* 0x1719409E: je 0x171940a6 */
L_171940A0:
    fp_push(*(float*)&MEM32(ebp + eax + (-0x28))); /* 0x171940A0: fld dword ptr [ebp + eax - 0x28] */
    goto L_171940AA; /* 0x171940A4: jmp 0x171940aa */
L_171940A6:
    fp_push(*(float*)&MEM32(ebp + eax + 0x1C)); /* 0x171940A6: fld dword ptr [ebp + eax + 0x1c] */
L_171940AA:
    /* test edi, edi */ /* 0x171940AA: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + eax + (-0x10)) = _v; } /* 0x171940AC: fstp dword ptr [ebp + eax - 0x10] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171940B8; /* 0x171940B0: je 0x171940b8 */
L_171940B2:
    fp_push(*(float*)&MEM32(ebp + eax + 0x28)); /* 0x171940B2: fld dword ptr [ebp + eax + 0x28] */
    goto L_171940BC; /* 0x171940B6: jmp 0x171940bc */
L_171940B8:
    fp_push(*(float*)&MEM32(ebp + eax + (-0x28))); /* 0x171940B8: fld dword ptr [ebp + eax - 0x28] */
L_171940BC:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + eax + (-0x1C)) = _v; } /* 0x171940BC: fstp dword ptr [ebp + eax - 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171940C0: add eax, 4 */
    _flag_k = FK_ADD;
    if (1u) _cf = (((esi) >> 31) & 1u); /* 0x171940C3: shl esi, 1 */
    if (1u) { _flag_a = recomp_flags_pack((esi << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 1u; /* 0x171940C3: shl esi, 1 */
    /* cmp eax, 0xCu */ /* 0x171940C5: cmp eax, 0xc */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1719409A; /* 0x171940C8: jl 0x1719409a */
L_171940CA:
    eax = MEM32(ebp + 0x18); /* 0x171940CA: mov eax, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x171940CD: sub esp, 0xc */
    _flag_k = FK_CMP;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xFu); /* 0x171940D0: imul eax, eax, 0xf */
    edi = esp; /* 0x171940D3: mov edi, esp */
    esi = ebp + (-0x1C); /* 0x171940D5: lea esi, [ebp - 0x1c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171940D8: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171940D9: movsd dword ptr es:[edi], dword ptr [esi] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x171940DA: sub esp, 0xc */
    _flag_k = FK_CMP;
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171940DD: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = esp; /* 0x171940DE: mov edi, esp */
    MEM32(ebp + 0x18) = eax; /* 0x171940E0: mov dword ptr [ebp + 0x18], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x171940E3: add eax, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(edx + eax * 4 + 0x1C)); /* 0x171940E5: push dword ptr [edx + eax*4 + 0x1c] */
    esi = ebp + (-0x10); /* 0x171940E9: lea esi, [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x171940EC: push dword ptr [ebp + 0x14] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171940EF: movsd dword ptr es:[edi], dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171940F0: push dword ptr [ebp + 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171940F3: movsd dword ptr es:[edi], dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x171940F4: push dword ptr [ebp + 0xc] */
    ecx = ebx; /* 0x171940F7: mov ecx, ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171940F9: push dword ptr [ebp + 8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171940FC: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_17193E24); /* 0x171940FD: call 0x17193e24 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17194102: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_17194104:
    /* cmp esi, MEM32(ebp + (-0x4)) */ /* 0x17194104: cmp esi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17194133; /* 0x17194107: je 0x17194133 */
L_17194109:
    eax = MEM32(ebp + 0x18); /* 0x17194109: mov eax, dword ptr [ebp + 0x18] */
    fp_push(*(double*)ADDR(0x170055F8)); /* 0x1719410C: fld qword ptr [0x170055f8] */
    PUSH32(esp, ecx); /* 0x17194112: push ecx */
    PUSH32(esp, ecx); /* 0x17194113: push ecx */
    ecx = MEM32(ebx + 0x28); /* 0x17194114: mov ecx, dword ptr [ebx + 0x28] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x17194117: fstp qword ptr [esp] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x1719411A: add eax, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(ecx + eax * 4 + 0x1C)); /* 0x1719411C: push dword ptr [ecx + eax*4 + 0x1c] */
    ecx = ebx; /* 0x17194120: mov ecx, ebx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x17194122: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17194125: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17194128: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1719412B: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_17193A0A); /* 0x1719412E: call 0x17193a0a */
    RECOMP_FLAGS_IN();
L_17194133:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x17194133: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, 8 */ /* 0x17194134: cmp esi, 8 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_17194104; /* 0x17194137: jl 0x17194104 */
L_17194139:
    edi = POP32_VAL(esp); /* 0x17194139: pop edi */
    esi = POP32_VAL(esp); /* 0x1719413A: pop esi */
    ebx = POP32_VAL(esp); /* 0x1719413B: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1719413C: leave  */
    RECOMP_FLAGS_OUT(); esp += 48; { RECOMP_REGS_OUT(); return; } /* 0x1719413D: ret 0x2c */
    RECOMP_REGS_OUT();
}
