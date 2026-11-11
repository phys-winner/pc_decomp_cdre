#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_17042E28(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17042E28u);

L_17042E28:
    edi = edi; /* 0x17042E28: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17042E2A: push ebp */
    ebp = esp; /* 0x17042E2B: mov ebp, esp */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17042E2D: fld dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x17042E30: mov eax, dword ptr [ebp + 8] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0xC); /* 0x17042E33: fsub dword ptr [ebp + 0xc] */
    MEM32(eax + 0x2C) = 0xBF800000u; /* 0x17042E36: mov dword ptr [eax + 0x2c], 0xbf800000 */
    _st[0] = (double)*(float*)ADDR(0x17001424) / _st[0]; /* 0x17042E3D: fdivr dword ptr [0x17001424] */
    fp_push(*(float*)&MEM32(ebp + 0x18)); /* 0x17042E43: fld dword ptr [ebp + 0x18] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x14); /* 0x17042E46: fsub dword ptr [ebp + 0x14] */
    _st[0] = (double)*(float*)ADDR(0x17001424) / _st[0]; /* 0x17042E49: fdivr dword ptr [0x17001424] */
    fp_push(*(float*)&MEM32(0x170018CC)); /* 0x17042E4F: fld dword ptr [0x170018cc] */
    fp_push(_st[2]); /* 0x17042E55: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x1C); /* 0x17042E57: fmul dword ptr [ebp + 0x1c] */
    _st[0] *= _st[1]; /* 0x17042E5A: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17042E5C: fstp dword ptr [eax] */
    fp_push(0.0); /* 0x17042E5E: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x17042E60: fstp dword ptr [eax + 4] */
    fp_push(0.0); /* 0x17042E63: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x17042E65: fstp dword ptr [eax + 8] */
    fp_push(0.0); /* 0x17042E68: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x17042E6A: fstp dword ptr [eax + 0xc] */
    fp_push(0.0); /* 0x17042E6D: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x10) = _v; } /* 0x17042E6F: fstp dword ptr [eax + 0x10] */
    fp_push(_st[1]); /* 0x17042E72: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x1C); /* 0x17042E74: fmul dword ptr [ebp + 0x1c] */
    _st[0] *= _st[1]; /* 0x17042E77: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x14) = _v; } /* 0x17042E79: fstp dword ptr [eax + 0x14] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17042E7C: fstp st(0) */
    fp_push(0.0); /* 0x17042E7E: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x18) = _v; } /* 0x17042E80: fstp dword ptr [eax + 0x18] */
    fp_push(0.0); /* 0x17042E83: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x1C) = _v; } /* 0x17042E85: fstp dword ptr [eax + 0x1c] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x17042E88: fld dword ptr [ebp + 0xc] */
    _st[0] += (double)*(float*)ADDR(ebp + 0x10); /* 0x17042E8B: fadd dword ptr [ebp + 0x10] */
    _st[0] *= _st[2]; /* 0x17042E8E: fmul st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x20) = _v; } /* 0x17042E90: fstp dword ptr [eax + 0x20] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x17042E93: fld dword ptr [ebp + 0x14] */
    _st[0] += (double)*(float*)ADDR(ebp + 0x18); /* 0x17042E96: fadd dword ptr [ebp + 0x18] */
    _st[0] *= _st[1]; /* 0x17042E99: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x24) = _v; } /* 0x17042E9B: fstp dword ptr [eax + 0x24] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17042E9E: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17042EA0: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x17042EA2: fld dword ptr [ebp + 0x1c] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x20); /* 0x17042EA5: fsub dword ptr [ebp + 0x20] */
    _st[0] = (double)*(float*)ADDR(ebp + 0x20) / _st[0]; /* 0x17042EA8: fdivr dword ptr [ebp + 0x20] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x28) = _v; } /* 0x17042EAB: fst dword ptr [eax + 0x28] */
    fp_push(0.0); /* 0x17042EAE: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x30) = _v; } /* 0x17042EB0: fstp dword ptr [eax + 0x30] */
    fp_push(0.0); /* 0x17042EB3: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x34) = _v; } /* 0x17042EB5: fstp dword ptr [eax + 0x34] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x1C); /* 0x17042EB8: fmul dword ptr [ebp + 0x1c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x38) = _v; } /* 0x17042EBB: fstp dword ptr [eax + 0x38] */
    fp_push(0.0); /* 0x17042EBE: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x3C) = _v; } /* 0x17042EC0: fstp dword ptr [eax + 0x3c] */
    ebp = POP32_VAL(esp); /* 0x17042EC3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x17042EC4: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_17042ECC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17042ECCu);

L_17042ECC:
    edi = edi; /* 0x17042ECC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17042ECE: push ebp */
    ebp = esp; /* 0x17042ECF: mov ebp, esp */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17042ED1: fld dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x17042ED4: mov eax, dword ptr [ebp + 8] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0xC); /* 0x17042ED7: fsub dword ptr [ebp + 0xc] */
    _st[0] = (double)*(float*)ADDR(0x17001424) / _st[0]; /* 0x17042EDA: fdivr dword ptr [0x17001424] */
    fp_push(*(float*)&MEM32(ebp + 0x18)); /* 0x17042EE0: fld dword ptr [ebp + 0x18] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x14); /* 0x17042EE3: fsub dword ptr [ebp + 0x14] */
    _st[0] = (double)*(float*)ADDR(0x17001424) / _st[0]; /* 0x17042EE6: fdivr dword ptr [0x17001424] */
    fp_push(*(float*)&MEM32(0x170018CC)); /* 0x17042EEC: fld dword ptr [0x170018cc] */
    fp_push(_st[2]); /* 0x17042EF2: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x1C); /* 0x17042EF4: fmul dword ptr [ebp + 0x1c] */
    _st[0] *= _st[1]; /* 0x17042EF7: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17042EF9: fstp dword ptr [eax] */
    fp_push(0.0); /* 0x17042EFB: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x17042EFD: fstp dword ptr [eax + 4] */
    fp_push(0.0); /* 0x17042F00: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x17042F02: fstp dword ptr [eax + 8] */
    fp_push(0.0); /* 0x17042F05: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x17042F07: fstp dword ptr [eax + 0xc] */
    fp_push(0.0); /* 0x17042F0A: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x10) = _v; } /* 0x17042F0C: fstp dword ptr [eax + 0x10] */
    fp_push(_st[1]); /* 0x17042F0F: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x1C); /* 0x17042F11: fmul dword ptr [ebp + 0x1c] */
    _st[0] *= _st[1]; /* 0x17042F14: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x14) = _v; } /* 0x17042F16: fstp dword ptr [eax + 0x14] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17042F19: fstp st(0) */
    fp_push(0.0); /* 0x17042F1B: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x18) = _v; } /* 0x17042F1D: fstp dword ptr [eax + 0x18] */
    fp_push(0.0); /* 0x17042F20: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x1C) = _v; } /* 0x17042F22: fstp dword ptr [eax + 0x1c] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x17042F25: fld dword ptr [ebp + 0xc] */
    _st[0] += (double)*(float*)ADDR(ebp + 0x10); /* 0x17042F28: fadd dword ptr [ebp + 0x10] */
    _st[0] *= _st[2]; /* 0x17042F2B: fmul st(2) */
    _st[0] = -_st[0]; /* 0x17042F2D: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x20) = _v; } /* 0x17042F2F: fstp dword ptr [eax + 0x20] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x17042F32: fld dword ptr [ebp + 0x14] */
    _st[0] += (double)*(float*)ADDR(ebp + 0x18); /* 0x17042F35: fadd dword ptr [ebp + 0x18] */
    _st[0] *= _st[1]; /* 0x17042F38: fmul st(1) */
    _st[0] = -_st[0]; /* 0x17042F3A: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x24) = _v; } /* 0x17042F3C: fstp dword ptr [eax + 0x24] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17042F3F: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17042F41: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + 0x20)); /* 0x17042F43: fld dword ptr [ebp + 0x20] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x1C); /* 0x17042F46: fsub dword ptr [ebp + 0x1c] */
    _st[0] = (double)*(float*)ADDR(ebp + 0x20) / _st[0]; /* 0x17042F49: fdivr dword ptr [ebp + 0x20] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x28) = _v; } /* 0x17042F4C: fst dword ptr [eax + 0x28] */
    fp_push(1.0); /* 0x17042F4F: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x2C) = _v; } /* 0x17042F51: fstp dword ptr [eax + 0x2c] */
    fp_push(0.0); /* 0x17042F54: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x30) = _v; } /* 0x17042F56: fstp dword ptr [eax + 0x30] */
    fp_push(0.0); /* 0x17042F59: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x34) = _v; } /* 0x17042F5B: fstp dword ptr [eax + 0x34] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x1C); /* 0x17042F5E: fmul dword ptr [ebp + 0x1c] */
    _st[0] = -_st[0]; /* 0x17042F61: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x38) = _v; } /* 0x17042F63: fstp dword ptr [eax + 0x38] */
    fp_push(0.0); /* 0x17042F66: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x3C) = _v; } /* 0x17042F68: fstp dword ptr [eax + 0x3c] */
    ebp = POP32_VAL(esp); /* 0x17042F6B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x17042F6C: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_17042F74(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17042F74u);

L_17042F74:
    edi = edi; /* 0x17042F74: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17042F76: push ebp */
    ebp = esp; /* 0x17042F77: mov ebp, esp */
    fp_push(*(float*)&MEM32(0x170018CC)); /* 0x17042F79: fld dword ptr [0x170018cc] */
    eax = MEM32(ebp + 0x8); /* 0x17042F7F: mov eax, dword ptr [ebp + 8] */
    _st[0] /= (double)*(float*)ADDR(ebp + 0xC); /* 0x17042F82: fdiv dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17042F85: fstp dword ptr [eax] */
    fp_push(0.0); /* 0x17042F87: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x17042F89: fstp dword ptr [eax + 4] */
    fp_push(0.0); /* 0x17042F8C: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x17042F8E: fstp dword ptr [eax + 8] */
    fp_push(0.0); /* 0x17042F91: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x17042F93: fstp dword ptr [eax + 0xc] */
    fp_push(0.0); /* 0x17042F96: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x10) = _v; } /* 0x17042F98: fstp dword ptr [eax + 0x10] */
    fp_push(*(float*)&MEM32(0x170018CC)); /* 0x17042F9B: fld dword ptr [0x170018cc] */
    _st[0] /= (double)*(float*)ADDR(ebp + 0x10); /* 0x17042FA1: fdiv dword ptr [ebp + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x14) = _v; } /* 0x17042FA4: fstp dword ptr [eax + 0x14] */
    fp_push(0.0); /* 0x17042FA7: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x18) = _v; } /* 0x17042FA9: fstp dword ptr [eax + 0x18] */
    fp_push(0.0); /* 0x17042FAC: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x1C) = _v; } /* 0x17042FAE: fstp dword ptr [eax + 0x1c] */
    fp_push(0.0); /* 0x17042FB1: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x20) = _v; } /* 0x17042FB3: fstp dword ptr [eax + 0x20] */
    fp_push(0.0); /* 0x17042FB6: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x24) = _v; } /* 0x17042FB8: fstp dword ptr [eax + 0x24] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x17042FBB: fld dword ptr [ebp + 0x14] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x18); /* 0x17042FBE: fsub dword ptr [ebp + 0x18] */
    _st[0] = (double)*(float*)ADDR(0x17001424) / _st[0]; /* 0x17042FC1: fdivr dword ptr [0x17001424] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x28) = _v; } /* 0x17042FC7: fst dword ptr [eax + 0x28] */
    fp_push(0.0); /* 0x17042FCA: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x2C) = _v; } /* 0x17042FCC: fstp dword ptr [eax + 0x2c] */
    fp_push(0.0); /* 0x17042FCF: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x30) = _v; } /* 0x17042FD1: fstp dword ptr [eax + 0x30] */
    fp_push(0.0); /* 0x17042FD4: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x34) = _v; } /* 0x17042FD6: fstp dword ptr [eax + 0x34] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x14); /* 0x17042FD9: fmul dword ptr [ebp + 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x38) = _v; } /* 0x17042FDC: fstp dword ptr [eax + 0x38] */
    fp_push(1.0); /* 0x17042FDF: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x3C) = _v; } /* 0x17042FE1: fstp dword ptr [eax + 0x3c] */
    ebp = POP32_VAL(esp); /* 0x17042FE4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x17042FE5: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_17042FED(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17042FEDu);

L_17042FED:
    edi = edi; /* 0x17042FED: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17042FEF: push ebp */
    ebp = esp; /* 0x17042FF0: mov ebp, esp */
    fp_push(*(float*)&MEM32(0x170018CC)); /* 0x17042FF2: fld dword ptr [0x170018cc] */
    eax = MEM32(ebp + 0x8); /* 0x17042FF8: mov eax, dword ptr [ebp + 8] */
    _st[0] /= (double)*(float*)ADDR(ebp + 0xC); /* 0x17042FFB: fdiv dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17042FFE: fstp dword ptr [eax] */
    fp_push(0.0); /* 0x17043000: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x17043002: fstp dword ptr [eax + 4] */
    fp_push(0.0); /* 0x17043005: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x17043007: fstp dword ptr [eax + 8] */
    fp_push(0.0); /* 0x1704300A: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x1704300C: fstp dword ptr [eax + 0xc] */
    fp_push(0.0); /* 0x1704300F: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x10) = _v; } /* 0x17043011: fstp dword ptr [eax + 0x10] */
    fp_push(*(float*)&MEM32(0x170018CC)); /* 0x17043014: fld dword ptr [0x170018cc] */
    _st[0] /= (double)*(float*)ADDR(ebp + 0x10); /* 0x1704301A: fdiv dword ptr [ebp + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x14) = _v; } /* 0x1704301D: fstp dword ptr [eax + 0x14] */
    fp_push(0.0); /* 0x17043020: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x18) = _v; } /* 0x17043022: fstp dword ptr [eax + 0x18] */
    fp_push(0.0); /* 0x17043025: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x1C) = _v; } /* 0x17043027: fstp dword ptr [eax + 0x1c] */
    fp_push(0.0); /* 0x1704302A: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x20) = _v; } /* 0x1704302C: fstp dword ptr [eax + 0x20] */
    fp_push(0.0); /* 0x1704302F: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x24) = _v; } /* 0x17043031: fstp dword ptr [eax + 0x24] */
    fp_push(*(float*)&MEM32(ebp + 0x18)); /* 0x17043034: fld dword ptr [ebp + 0x18] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x14); /* 0x17043037: fsub dword ptr [ebp + 0x14] */
    _st[0] = (double)*(float*)ADDR(0x17001424) / _st[0]; /* 0x1704303A: fdivr dword ptr [0x17001424] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x28) = _v; } /* 0x17043040: fst dword ptr [eax + 0x28] */
    fp_push(0.0); /* 0x17043043: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x2C) = _v; } /* 0x17043045: fstp dword ptr [eax + 0x2c] */
    fp_push(0.0); /* 0x17043048: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x30) = _v; } /* 0x1704304A: fstp dword ptr [eax + 0x30] */
    fp_push(0.0); /* 0x1704304D: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x34) = _v; } /* 0x1704304F: fstp dword ptr [eax + 0x34] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x14); /* 0x17043052: fmul dword ptr [ebp + 0x14] */
    _st[0] = -_st[0]; /* 0x17043055: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x38) = _v; } /* 0x17043057: fstp dword ptr [eax + 0x38] */
    fp_push(1.0); /* 0x1704305A: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x3C) = _v; } /* 0x1704305C: fstp dword ptr [eax + 0x3c] */
    ebp = POP32_VAL(esp); /* 0x1704305F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x17043060: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_17043068(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17043068u);

L_17043068:
    edi = edi; /* 0x17043068: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704306A: push ebp */
    ebp = esp; /* 0x1704306B: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1704306D: push ecx */
    fp_push(*(float*)&MEM32(0x17001424)); /* 0x1704306E: fld dword ptr [0x17001424] */
    eax = MEM32(ebp + 0x8); /* 0x17043074: mov eax, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17043077: fld dword ptr [ebp + 0x10] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0xC); /* 0x1704307A: fsub dword ptr [ebp + 0xc] */
    _st[0] = _st[1] / _st[0]; /* 0x1704307D: fdivr st(1) */
    fp_push(*(float*)&MEM32(ebp + 0x18)); /* 0x1704307F: fld dword ptr [ebp + 0x18] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x14); /* 0x17043082: fsub dword ptr [ebp + 0x14] */
    _st[0] = _st[2] / _st[0]; /* 0x17043085: fdivr st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17043087: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(0x170018CC)); /* 0x1704308A: fld dword ptr [0x170018cc] */
    fp_push(_st[1]); /* 0x17043090: fld st(1) */
    _st[0] *= _st[1]; /* 0x17043092: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17043094: fstp dword ptr [eax] */
    fp_push(0.0); /* 0x17043096: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x17043098: fstp dword ptr [eax + 4] */
    fp_push(0.0); /* 0x1704309B: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x1704309D: fstp dword ptr [eax + 8] */
    fp_push(0.0); /* 0x170430A0: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x170430A2: fstp dword ptr [eax + 0xc] */
    fp_push(0.0); /* 0x170430A5: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x10) = _v; } /* 0x170430A7: fstp dword ptr [eax + 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x170430AA: fld dword ptr [ebp - 4] */
    _st[0] *= _st[1]; /* 0x170430AD: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x14) = _v; } /* 0x170430AF: fstp dword ptr [eax + 0x14] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170430B2: fstp st(0) */
    fp_push(0.0); /* 0x170430B4: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x18) = _v; } /* 0x170430B6: fstp dword ptr [eax + 0x18] */
    fp_push(0.0); /* 0x170430B9: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x1C) = _v; } /* 0x170430BB: fstp dword ptr [eax + 0x1c] */
    fp_push(0.0); /* 0x170430BE: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x20) = _v; } /* 0x170430C0: fstp dword ptr [eax + 0x20] */
    fp_push(0.0); /* 0x170430C3: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x24) = _v; } /* 0x170430C5: fstp dword ptr [eax + 0x24] */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x170430C8: fld dword ptr [ebp + 0x1c] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x20); /* 0x170430CB: fsub dword ptr [ebp + 0x20] */
    _st[0] = _st[2] / _st[0]; /* 0x170430CE: fdivr st(2) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + 0x8) = _v; } /* 0x170430D0: fst dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x28) = _v; } /* 0x170430D3: fstp dword ptr [eax + 0x28] */
    fp_push(0.0); /* 0x170430D6: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x2C) = _v; } /* 0x170430D8: fstp dword ptr [eax + 0x2c] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x170430DB: fld dword ptr [ebp + 0xc] */
    _st[0] += (double)*(float*)ADDR(ebp + 0x10); /* 0x170430DE: fadd dword ptr [ebp + 0x10] */
    _st[0] *= _st[1]; /* 0x170430E1: fmul st(1) */
    _st[0] = -_st[0]; /* 0x170430E3: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x30) = _v; } /* 0x170430E5: fstp dword ptr [eax + 0x30] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170430E8: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170430EA: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x170430EC: fld dword ptr [ebp + 0x14] */
    _st[0] += (double)*(float*)ADDR(ebp + 0x18); /* 0x170430EF: fadd dword ptr [ebp + 0x18] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x170430F2: fmul dword ptr [ebp - 4] */
    _st[0] = -_st[0]; /* 0x170430F5: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x34) = _v; } /* 0x170430F7: fstp dword ptr [eax + 0x34] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x170430FA: fld dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x1C); /* 0x170430FD: fmul dword ptr [ebp + 0x1c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x38) = _v; } /* 0x17043100: fstp dword ptr [eax + 0x38] */
    fp_push(1.0); /* 0x17043103: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x3C) = _v; } /* 0x17043105: fstp dword ptr [eax + 0x3c] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17043108: leave  */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x17043109: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_17043111(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17043111u);

L_17043111:
    edi = edi; /* 0x17043111: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17043113: push ebp */
    ebp = esp; /* 0x17043114: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x17043116: push ecx */
    fp_push(*(float*)&MEM32(0x17001424)); /* 0x17043117: fld dword ptr [0x17001424] */
    eax = MEM32(ebp + 0x8); /* 0x1704311D: mov eax, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17043120: fld dword ptr [ebp + 0x10] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0xC); /* 0x17043123: fsub dword ptr [ebp + 0xc] */
    _st[0] = _st[1] / _st[0]; /* 0x17043126: fdivr st(1) */
    fp_push(*(float*)&MEM32(ebp + 0x18)); /* 0x17043128: fld dword ptr [ebp + 0x18] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x14); /* 0x1704312B: fsub dword ptr [ebp + 0x14] */
    _st[0] = _st[2] / _st[0]; /* 0x1704312E: fdivr st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17043130: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(0x170018CC)); /* 0x17043133: fld dword ptr [0x170018cc] */
    fp_push(_st[1]); /* 0x17043139: fld st(1) */
    _st[0] *= _st[1]; /* 0x1704313B: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1704313D: fstp dword ptr [eax] */
    fp_push(0.0); /* 0x1704313F: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x17043141: fstp dword ptr [eax + 4] */
    fp_push(0.0); /* 0x17043144: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x17043146: fstp dword ptr [eax + 8] */
    fp_push(0.0); /* 0x17043149: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x1704314B: fstp dword ptr [eax + 0xc] */
    fp_push(0.0); /* 0x1704314E: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x10) = _v; } /* 0x17043150: fstp dword ptr [eax + 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17043153: fld dword ptr [ebp - 4] */
    _st[0] *= _st[1]; /* 0x17043156: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x14) = _v; } /* 0x17043158: fstp dword ptr [eax + 0x14] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704315B: fstp st(0) */
    fp_push(0.0); /* 0x1704315D: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x18) = _v; } /* 0x1704315F: fstp dword ptr [eax + 0x18] */
    fp_push(0.0); /* 0x17043162: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x1C) = _v; } /* 0x17043164: fstp dword ptr [eax + 0x1c] */
    fp_push(0.0); /* 0x17043167: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x20) = _v; } /* 0x17043169: fstp dword ptr [eax + 0x20] */
    fp_push(0.0); /* 0x1704316C: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x24) = _v; } /* 0x1704316E: fstp dword ptr [eax + 0x24] */
    fp_push(*(float*)&MEM32(ebp + 0x20)); /* 0x17043171: fld dword ptr [ebp + 0x20] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x1C); /* 0x17043174: fsub dword ptr [ebp + 0x1c] */
    _st[0] = _st[2] / _st[0]; /* 0x17043177: fdivr st(2) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + 0x8) = _v; } /* 0x17043179: fst dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x28) = _v; } /* 0x1704317C: fstp dword ptr [eax + 0x28] */
    fp_push(0.0); /* 0x1704317F: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x2C) = _v; } /* 0x17043181: fstp dword ptr [eax + 0x2c] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x17043184: fld dword ptr [ebp + 0xc] */
    _st[0] += (double)*(float*)ADDR(ebp + 0x10); /* 0x17043187: fadd dword ptr [ebp + 0x10] */
    _st[0] *= _st[1]; /* 0x1704318A: fmul st(1) */
    _st[0] = -_st[0]; /* 0x1704318C: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x30) = _v; } /* 0x1704318E: fstp dword ptr [eax + 0x30] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17043191: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17043193: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x17043195: fld dword ptr [ebp + 0x14] */
    _st[0] += (double)*(float*)ADDR(ebp + 0x18); /* 0x17043198: fadd dword ptr [ebp + 0x18] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x1704319B: fmul dword ptr [ebp - 4] */
    _st[0] = -_st[0]; /* 0x1704319E: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x34) = _v; } /* 0x170431A0: fstp dword ptr [eax + 0x34] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x170431A3: fld dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x1C); /* 0x170431A6: fmul dword ptr [ebp + 0x1c] */
    _st[0] = -_st[0]; /* 0x170431A9: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x38) = _v; } /* 0x170431AB: fstp dword ptr [eax + 0x38] */
    fp_push(1.0); /* 0x170431AE: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x3C) = _v; } /* 0x170431B0: fstp dword ptr [eax + 0x3c] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170431B3: leave  */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x170431B4: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_170431BC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170431BCu);

L_170431BC:
    edi = edi; /* 0x170431BC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170431BE: push ebp */
    ebp = esp; /* 0x170431BF: mov ebp, esp */
    PUSH32(esp, 1); /* 0x170431C1: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x170431C3: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x170431C8: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x172240B8)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_170431D4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170431D4u);

L_170431D4:
    { _itail_tgt = (uint32_t)(MEM32(0x172240B8)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_170431DF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170431DFu);

L_170431DF:
    edi = edi; /* 0x170431DF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170431E1: push ebp */
    ebp = esp; /* 0x170431E2: mov ebp, esp */
    PUSH32(esp, 1); /* 0x170431E4: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x170431E6: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x170431EB: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x172240BC)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_170431F7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170431F7u);

L_170431F7:
    { _itail_tgt = (uint32_t)(MEM32(0x172240BC)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17043202(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17043202u);

L_17043202:
    edi = edi; /* 0x17043202: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17043204: push ebp */
    ebp = esp; /* 0x17043205: mov ebp, esp */
    PUSH32(esp, 1); /* 0x17043207: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x17043209: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1704320E: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x172240A8)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1704321A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704321Au);

L_1704321A:
    { _itail_tgt = (uint32_t)(MEM32(0x172240A8)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17043225(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17043225u);

L_17043225:
    edi = edi; /* 0x17043225: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17043227: push ebp */
    ebp = esp; /* 0x17043228: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x1704322A: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x1704322D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x8); /* 0x1704322F: mov eax, dword ptr [ebp + 8] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17043244; /* 0x17043232: je 0x17043244 */
L_17043234:
    edx = MEM32(eax); /* 0x17043234: mov edx, dword ptr [eax] */
    MEM32(ecx) = edx; /* 0x17043236: mov dword ptr [ecx], edx */
    edx = MEM32(eax + 0x4); /* 0x17043238: mov edx, dword ptr [eax + 4] */
    MEM32(ecx + 0x4) = edx; /* 0x1704323B: mov dword ptr [ecx + 4], edx */
    edx = MEM32(eax + 0x8); /* 0x1704323E: mov edx, dword ptr [eax + 8] */
    MEM32(ecx + 0x8) = edx; /* 0x17043241: mov dword ptr [ecx + 8], edx */
L_17043244:
    PUSH32(esp, esi); /* 0x17043244: push esi */
    esi = MEM32(ebp + 0x10); /* 0x17043245: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x17043248: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17043258; /* 0x1704324A: je 0x17043258 */
L_1704324C:
    fp_push(*(float*)&MEM32(eax + 0xC)); /* 0x1704324C: fld dword ptr [eax + 0xc] */
    RECOMP_CALL(sub_1721B142); /* 0x1704324F: call 0x1721b142 */
    RECOMP_FLAGS_IN();
    _st[0] += _st[0]; /* 0x17043254: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x17043256: fstp dword ptr [esi] */
L_17043258:
    esi = POP32_VAL(esp); /* 0x17043258: pop esi */
    ebp = POP32_VAL(esp); /* 0x17043259: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1704325A: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17043262(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17043262u);

L_17043262:
    edi = edi; /* 0x17043262: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17043264: push ebp */
    ebp = esp; /* 0x17043265: mov ebp, esp */
    PUSH32(esp, 1); /* 0x17043267: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x17043269: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1704326E: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x172240AC)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1704327A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704327Au);

L_1704327A:
    { _itail_tgt = (uint32_t)(MEM32(0x172240AC)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17043285(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17043285u);

L_17043285:
    edi = edi; /* 0x17043285: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17043287: push ebp */
    ebp = esp; /* 0x17043288: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x1704328A: sub esp, 0x1c */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0xC); /* 0x1704328D: mov ecx, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ecx + 0x14)); /* 0x17043290: fld dword ptr [ecx + 0x14] */
    _st[0] += (double)*(float*)ADDR(ecx); /* 0x17043293: fadd dword ptr [ecx] */
    _st[0] += (double)*(float*)ADDR(ecx + 0x28); /* 0x17043295: fadd dword ptr [ecx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17001430)); /* 0x17043298: fcom dword ptr [0x17001430] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1704329E: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x170432A0: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170432E6; /* 0x170432A3: jne 0x170432e6 */
L_170432A5:
    _st[0] += (double)*(float*)ADDR(0x17001424); /* 0x170432A5: fadd dword ptr [0x17001424] */
    eax = MEM32(ebp + 0x8); /* 0x170432AB: mov eax, dword ptr [ebp + 8] */
    _st[0] = sqrt(_st[0]); /* 0x170432AE: fsqrt  */
    _st[0] *= (double)*(float*)ADDR(0x1700141C); /* 0x170432B0: fmul dword ptr [0x1700141c] */
    fp_push(_st[0]); /* 0x170432B6: fld st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x170432B8: fstp dword ptr [eax + 0xc] */
    _st[0] = (double)*(float*)ADDR(0x17001870) / _st[0]; /* 0x170432BB: fdivr dword ptr [0x17001870] */
    fp_push(*(float*)&MEM32(ecx + 0x18)); /* 0x170432C1: fld dword ptr [ecx + 0x18] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x24); /* 0x170432C4: fsub dword ptr [ecx + 0x24] */
    _st[0] *= _st[1]; /* 0x170432C7: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x170432C9: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(ecx + 0x20)); /* 0x170432CB: fld dword ptr [ecx + 0x20] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x8); /* 0x170432CE: fsub dword ptr [ecx + 8] */
    _st[0] *= _st[1]; /* 0x170432D1: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x170432D3: fstp dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x170432D6: fld dword ptr [ecx + 4] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x10); /* 0x170432D9: fsub dword ptr [ecx + 0x10] */
    _st[0] *= _st[1]; /* 0x170432DC: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x170432DE: fstp dword ptr [eax + 8] */
    goto L_170433B5; /* 0x170432E1: jmp 0x170433b5 */
L_170432E6:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170432E6: fstp st(0) */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) & 0; /* 0x170432E8: and dword ptr [ebp - 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(*(float*)&MEM32(ecx)); /* 0x170432EC: fld dword ptr [ecx] */
    PUSH32(esp, ebx); /* 0x170432EE: push ebx */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x14); /* 0x170432EF: fsub dword ptr [ecx + 0x14] */
    PUSH32(esp, esi); /* 0x170432F2: push esi */
    PUSH32(esp, edi); /* 0x170432F3: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x170432F4: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] -= (double)*(float*)ADDR(ecx + 0x28); /* 0x170432F6: fsub dword ptr [ecx + 0x28] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x170432F9: inc ebx */
    _flag_k = FK_INC;
    PUSH32(esp, 2); /* 0x170432FA: push 2 */
    edx = POP32_VAL(esp); /* 0x170432FC: pop edx */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x170432FD: fst dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0x1C)) = ebx; /* 0x17043300: mov dword ptr [ebp - 0x1c], ebx */
    fp_push(*(float*)&MEM32(ecx + 0x14)); /* 0x17043303: fld dword ptr [ecx + 0x14] */
    MEM32(ebp + (-0x18)) = edx; /* 0x17043306: mov dword ptr [ebp - 0x18], edx */
    _st[0] -= (double)*(float*)ADDR(ecx); /* 0x17043309: fsub dword ptr [ecx] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x28); /* 0x1704330B: fsub dword ptr [ecx + 0x28] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1704330E: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ecx + 0x14)); /* 0x17043311: fld dword ptr [ecx + 0x14] */
    _st[0] += (double)*(float*)ADDR(ecx); /* 0x17043314: fadd dword ptr [ecx] */
    _st[0] = (double)*(float*)ADDR(ecx + 0x28) - _st[0]; /* 0x17043316: fsubr dword ptr [ecx + 0x28] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x17043319: fstp dword ptr [ebp - 8] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0xC))); /* 0x1704331C: fcomp dword ptr [ebp - 0xc] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1704331F: fnstsw ax */
    /* test LO8(ebx), HI8(eax) */ /* 0x17043321: test bl, ah */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(HI8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17043327; /* 0x17043323: jne 0x17043327 */
L_17043325:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x17043325: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_17043327:
    fp_push(*(float*)&MEM32(ebp + ebx * 4 + (-0x10))); /* 0x17043327: fld dword ptr [ebp + ebx*4 - 0x10] */
    MEM32(ebp + 0xC) = ebx; /* 0x1704332B: mov dword ptr [ebp + 0xc], ebx */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + (-0x8))); /* 0x1704332E: fcomp dword ptr [ebp - 8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17043331: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x17043333: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704333D; /* 0x17043336: je 0x1704333d */
L_17043338:
    ebx = edx; /* 0x17043338: mov ebx, edx */
    MEM32(ebp + 0xC) = ebx; /* 0x1704333A: mov dword ptr [ebp + 0xc], ebx */
L_1704333D:
    edx = ebx; /* 0x1704333D: mov edx, ebx */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x1704333F: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x1704333F: shl edx, 2 */
    fp_push(*(float*)&MEM32(ebp + edx + (-0x10))); /* 0x17043342: fld dword ptr [ebp + edx - 0x10] */
    edi = MEM32(ebp + edx + (-0x1C)); /* 0x17043346: mov edi, dword ptr [ebp + edx - 0x1c] */
    _st[0] += (double)*(float*)ADDR(0x17001424); /* 0x1704334A: fadd dword ptr [0x17001424] */
    eax = MEM32(ebp + 0x8); /* 0x17043350: mov eax, dword ptr [ebp + 8] */
    esi = edi; /* 0x17043353: mov esi, edi */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x17043355: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x17043355: shl esi, 2 */
    _st[0] = sqrt(_st[0]); /* 0x17043358: fsqrt  */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + esi; /* 0x1704335A: add ebx, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = edi; /* 0x1704335C: mov dword ptr [ebp - 4], edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x1704335F: add edi, edx */
    _flag_k = FK_ADD;
    _st[0] *= (double)*(float*)ADDR(0x1700141C); /* 0x17043361: fmul dword ptr [0x1700141c] */
    fp_push(_st[0]); /* 0x17043367: fld st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + eax) = _v; } /* 0x17043369: fstp dword ptr [edx + eax] */
    _st[0] = (double)*(float*)ADDR(0x17001870) / _st[0]; /* 0x1704336C: fdivr dword ptr [0x17001870] */
    fp_push(*(float*)&MEM32(ecx + ebx * 4)); /* 0x17043372: fld dword ptr [ecx + ebx*4] */
    _st[0] += (double)*(float*)ADDR(ecx + edi * 4); /* 0x17043375: fadd dword ptr [ecx + edi*4] */
    ebx = MEM32(ebp + 0xC); /* 0x17043378: mov ebx, dword ptr [ebp + 0xc] */
    edi = MEM32(ebp + esi + (-0x1C)); /* 0x1704337B: mov edi, dword ptr [ebp + esi - 0x1c] */
    if (2u) _cf = (((edi) >> 30) & 1u); /* 0x1704337F: shl edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 2u; /* 0x1704337F: shl edi, 2 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edi; /* 0x17043382: add ebx, edi */
    _flag_k = FK_ADD;
    _st[0] *= _st[1]; /* 0x17043384: fmul st(1) */
    MEM32(ebp + 0x8) = edi; /* 0x17043386: mov dword ptr [ebp + 8], edi */
    edi = MEM32(ebp + esi + (-0x1C)); /* 0x17043389: mov edi, dword ptr [ebp + esi - 0x1c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + eax) = _v; } /* 0x1704338D: fstp dword ptr [esi + eax] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x17043390: add edx, edi */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(ecx + ebx * 4)); /* 0x17043392: fld dword ptr [ecx + ebx*4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edi; /* 0x17043395: add esi, edi */
    _flag_k = FK_ADD;
    _st[0] += (double)*(float*)ADDR(ecx + edx * 4); /* 0x17043397: fadd dword ptr [ecx + edx*4] */
    edx = MEM32(ebp + 0x8); /* 0x1704339A: mov edx, dword ptr [ebp + 8] */
    edi = MEM32(ebp + (-0x4)); /* 0x1704339D: mov edi, dword ptr [ebp - 4] */
    _st[0] *= _st[1]; /* 0x170433A0: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + eax) = _v; } /* 0x170433A2: fstp dword ptr [edx + eax] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x170433A5: add edx, edi */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(ecx + esi * 4)); /* 0x170433A7: fld dword ptr [ecx + esi*4] */
    edi = POP32_VAL(esp); /* 0x170433AA: pop edi */
    _st[0] -= (double)*(float*)ADDR(ecx + edx * 4); /* 0x170433AB: fsub dword ptr [ecx + edx*4] */
    esi = POP32_VAL(esp); /* 0x170433AE: pop esi */
    ebx = POP32_VAL(esp); /* 0x170433AF: pop ebx */
    _st[0] *= _st[1]; /* 0x170433B0: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x170433B2: fstp dword ptr [eax + 0xc] */
L_170433B5:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170433B5: fstp st(0) */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170433B7: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x170433B8: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_170433C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170433C0u);

L_170433C0:
    edi = edi; /* 0x170433C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170433C2: push ebp */
    ebp = esp; /* 0x170433C3: mov ebp, esp */
    PUSH32(esp, 1); /* 0x170433C5: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x170433C7: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x170433CC: fld dword ptr [ebp + 0x10] */
    PUSH32(esp, ecx); /* 0x170433CF: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x170433D0: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170433D3: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170433D6: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x172240C0)); /* 0x170433D9: call dword ptr [0x172240c0] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x170433DF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170433E0: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170433E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170433E8u);

L_170433E8:
    { _itail_tgt = (uint32_t)(MEM32(0x172240C0)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_170433F3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170433F3u);

L_170433F3:
    edi = edi; /* 0x170433F3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170433F5: push ebp */
    ebp = esp; /* 0x170433F6: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x170433F8: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170433FB: push dword ptr [ebp + 0xc] */
    eax = ebp + (-0x14); /* 0x170433FE: lea eax, [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x17043401: push eax */
    RECOMP_CALL(sub_17040B68); /* 0x17043402: call 0x17040b68 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17043407: fld dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x1704340A: mov ecx, dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(0x1700141C); /* 0x1704340D: fmul dword ptr [0x1700141c] */
    eax = ecx + 0xC; /* 0x17043413: lea eax, [ecx + 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x17043416: mov dword ptr [ebp - 4], eax */
    eax = ebp + 0xC; /* 0x17043419: lea eax, [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x1704341C: fstp dword ptr [ebp + 8] */
    MEM32(ebp + (-0x8)) = eax; /* 0x1704341F: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ebp + (-0x8)); /* 0x17043422: mov eax, dword ptr [ebp - 8] */
    edx = MEM32(ebp + (-0x4)); /* 0x17043425: mov edx, dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x17043428: fld dword ptr [ebp + 8] */
    { double _a = _st[0]; _st[0] = sin(_a); fp_push(cos(_a)); } _fpu_cmp = 1; /* 0x1704342B: fsincos  */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x1704342D: fstp dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1704342F: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x17043431: fld dword ptr [ebp - 0x14] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0xC); /* 0x17043434: fmul dword ptr [ebp + 0xc] */
    eax = ecx; /* 0x17043437: mov eax, ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x17043439: fstp dword ptr [ecx] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x1704343B: fld dword ptr [ebp - 0x10] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0xC); /* 0x1704343E: fmul dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x4) = _v; } /* 0x17043441: fstp dword ptr [ecx + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x17043444: fld dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0xC); /* 0x17043447: fmul dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x8) = _v; } /* 0x1704344A: fstp dword ptr [ecx + 8] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704344D: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1704344E: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17043456(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17043456u);

L_17043456:
    edi = edi; /* 0x17043456: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17043458: push ebp */
    ebp = esp; /* 0x17043459: mov ebp, esp */
    PUSH32(esp, 1); /* 0x1704345B: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x1704345D: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x17043462: fld dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x17043465: sub esp, 0xc */
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x8) = _v; } /* 0x17043468: fstp dword ptr [esp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x1704346C: fld dword ptr [ebp + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x1704346F: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x17043473: fld dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17043476: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17043479: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x172240B0)); /* 0x1704347C: call dword ptr [0x172240b0] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17043482: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17043483: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1704348B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704348Bu);

L_1704348B:
    { _itail_tgt = (uint32_t)(MEM32(0x172240B0)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17043496(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17043496u);

L_17043496:
    edi = edi; /* 0x17043496: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17043498: push ebp */
    ebp = esp; /* 0x17043499: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x1704349B: sub esp, 0x20 */
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x1704349E: fld dword ptr [ebp + 0x14] */
    eax = ebp + (-0x4); /* 0x170434A1: lea eax, [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(0x1700141C); /* 0x170434A4: fmul dword ptr [0x1700141c] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x170434AA: mov dword ptr [ebp - 0x1c], eax */
    eax = ebp + 0x14; /* 0x170434AD: lea eax, [ebp + 0x14] */
    MEM32(ebp + (-0x20)) = eax; /* 0x170434B0: mov dword ptr [ebp - 0x20], eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x170434B3: fstp dword ptr [ebp - 0x18] */
    eax = MEM32(ebp + (-0x20)); /* 0x170434B6: mov eax, dword ptr [ebp - 0x20] */
    edx = MEM32(ebp + (-0x1C)); /* 0x170434B9: mov edx, dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x170434BC: fld dword ptr [ebp - 0x18] */
    { double _a = _st[0]; _st[0] = sin(_a); fp_push(cos(_a)); } _fpu_cmp = 1; /* 0x170434BF: fsincos  */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x170434C1: fstp dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x170434C3: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x170434C5: fld dword ptr [ebp + 0x10] */
    eax = ebp + (-0xC); /* 0x170434C8: lea eax, [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(0x1700141C); /* 0x170434CB: fmul dword ptr [0x1700141c] */
    MEM32(ebp + (-0x20)) = eax; /* 0x170434D1: mov dword ptr [ebp - 0x20], eax */
    eax = ebp + (-0x14); /* 0x170434D4: lea eax, [ebp - 0x14] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x170434D7: mov dword ptr [ebp - 0x1c], eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x170434DA: fstp dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + (-0x1C)); /* 0x170434DD: mov eax, dword ptr [ebp - 0x1c] */
    edx = MEM32(ebp + (-0x20)); /* 0x170434E0: mov edx, dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x170434E3: fld dword ptr [ebp + 0x10] */
    { double _a = _st[0]; _st[0] = sin(_a); fp_push(cos(_a)); } _fpu_cmp = 1; /* 0x170434E6: fsincos  */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x170434E8: fstp dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x170434EA: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x170434EC: fld dword ptr [ebp + 0xc] */
    eax = ebp + (-0x8); /* 0x170434EF: lea eax, [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(0x1700141C); /* 0x170434F2: fmul dword ptr [0x1700141c] */
    MEM32(ebp + (-0x20)) = eax; /* 0x170434F8: mov dword ptr [ebp - 0x20], eax */
    eax = ebp + (-0x10); /* 0x170434FB: lea eax, [ebp - 0x10] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x170434FE: mov dword ptr [ebp - 0x1c], eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x17043501: fstp dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + (-0x1C)); /* 0x17043504: mov eax, dword ptr [ebp - 0x1c] */
    edx = MEM32(ebp + (-0x20)); /* 0x17043507: mov edx, dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x1704350A: fld dword ptr [ebp + 0x10] */
    { double _a = _st[0]; _st[0] = sin(_a); fp_push(cos(_a)); } _fpu_cmp = 1; /* 0x1704350D: fsincos  */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x1704350F: fstp dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17043511: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x17043513: fld dword ptr [ebp - 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x17043516: mov eax, dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x17043519: fmul dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x1704351C: fld dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x14)); /* 0x1704351F: fmul dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17043522: fld dword ptr [ebp - 4] */
    _st[0] *= _st[1]; /* 0x17043525: fmul st(1) */
    fp_push(_st[2]); /* 0x17043527: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x14); /* 0x17043529: fmul dword ptr [ebp + 0x14] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704352C: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1704352E: fstp dword ptr [eax] */
    fp_push(_st[1]); /* 0x17043530: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x17043532: fmul dword ptr [ebp - 4] */
    fp_push(_st[1]); /* 0x17043535: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x14); /* 0x17043537: fmul dword ptr [ebp + 0x14] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1704353A: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x1704353C: fstp dword ptr [eax + 4] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704353F: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17043541: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17043543: fld dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x17043546: fmul dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x17043549: fld dword ptr [ebp - 0x10] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x14)); /* 0x1704354C: fmul dword ptr [ebp - 0x14] */
    fp_push(_st[1]); /* 0x1704354F: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x14); /* 0x17043551: fmul dword ptr [ebp + 0x14] */
    fp_push(_st[1]); /* 0x17043554: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x17043556: fmul dword ptr [ebp - 4] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17043559: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x1704355B: fstp dword ptr [eax + 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x14); /* 0x1704355E: fmul dword ptr [ebp + 0x14] */
    fp_push(_st[1]); /* 0x17043561: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x17043563: fmul dword ptr [ebp - 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17043566: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x17043568: fstp dword ptr [eax + 0xc] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704356B: fstp st(0) */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704356D: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1704356E: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_17043576(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17043576u);

L_17043576:
    edi = edi; /* 0x17043576: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17043578: push ebp */
    ebp = esp; /* 0x17043579: mov ebp, esp */
    PUSH32(esp, 1); /* 0x1704357B: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x1704357D: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17043582: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x17224098)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1704358E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704358Eu);

L_1704358E:
    { _itail_tgt = (uint32_t)(MEM32(0x17224098)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17043599(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17043599u);

L_17043599:
    edi = edi; /* 0x17043599: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704359B: push ebp */
    ebp = esp; /* 0x1704359C: mov ebp, esp */
    eax = MEM32(ebp + 0x10); /* 0x1704359E: mov eax, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + 0xC); /* 0x170435A1: mov edx, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x170435A4: mov ecx, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(eax + 0xC)); /* 0x170435A7: fld dword ptr [eax + 0xc] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x170435AA: fmul dword ptr [edx] */
    fp_push(*(float*)&MEM32(eax + 0xC)); /* 0x170435AC: fld dword ptr [eax + 0xc] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x170435AF: fmul dword ptr [edx + 8] */
    fp_push(*(float*)&MEM32(eax + 0xC)); /* 0x170435B2: fld dword ptr [eax + 0xc] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x170435B5: fmul dword ptr [edx + 4] */
    fp_push(*(float*)&MEM32(eax + 0xC)); /* 0x170435B8: fld dword ptr [eax + 0xc] */
    _st[0] *= (double)*(float*)ADDR(edx + 0xC); /* 0x170435BB: fmul dword ptr [edx + 0xc] */
    fp_xch(3); /* 0x170435BE: fxch st(3) */
    fp_push(*(float*)&MEM32(eax)); /* 0x170435C0: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(edx + 0xC); /* 0x170435C2: fmul dword ptr [edx + 0xc] */
    fp_push(*(float*)&MEM32(eax)); /* 0x170435C5: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x170435C7: fmul dword ptr [edx + 4] */
    fp_push(*(float*)&MEM32(eax)); /* 0x170435CA: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x170435CC: fmul dword ptr [edx + 8] */
    fp_push(*(float*)&MEM32(eax)); /* 0x170435CF: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x170435D1: fmul dword ptr [edx] */
    fp_xch(3); /* 0x170435D3: fxch st(3) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x170435D5: faddp st(4) */
    { double _v = fp_pop(); _st[3] -= _v; } /* 0x170435D7: fsubp st(4) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x170435D9: faddp st(4) */
    { double _v = fp_pop(); _st[3] -= _v; } /* 0x170435DB: fsubp st(4) */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x170435DD: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x170435E0: fmul dword ptr [edx + 8] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x170435E3: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x170435E6: fmul dword ptr [edx] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x170435E8: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0xC); /* 0x170435EB: fmul dword ptr [edx + 0xc] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x170435EE: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x170435F1: fmul dword ptr [edx + 4] */
    fp_xch(3); /* 0x170435F4: fxch st(3) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x170435F6: faddp st(4) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x170435F8: faddp st(4) */
    { double _v = fp_pop(); _st[3] -= _v; } /* 0x170435FA: fsubp st(4) */
    { double _v = fp_pop(); _st[3] -= _v; } /* 0x170435FC: fsubp st(4) */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x170435FE: fld dword ptr [eax + 8] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x17043601: fmul dword ptr [edx + 4] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x17043604: fld dword ptr [eax + 8] */
    _st[0] *= (double)*(float*)ADDR(edx + 0xC); /* 0x17043607: fmul dword ptr [edx + 0xc] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x1704360A: fld dword ptr [eax + 8] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x1704360D: fmul dword ptr [edx] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x1704360F: fld dword ptr [eax + 8] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x17043612: fmul dword ptr [edx + 8] */
    fp_xch(3); /* 0x17043615: fxch st(3) */
    { double _v = fp_pop(); _st[3] -= _v; } /* 0x17043617: fsubp st(4) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x17043619: faddp st(4) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x1704361B: faddp st(4) */
    { double _v = fp_pop(); _st[3] -= _v; } /* 0x1704361D: fsubp st(4) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x1704361F: fstp dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x4) = _v; } /* 0x17043621: fstp dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x8) = _v; } /* 0x17043624: fstp dword ptr [ecx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0xC) = _v; } /* 0x17043627: fstp dword ptr [ecx + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x1704362A: mov eax, dword ptr [ebp + 8] */
    ebp = POP32_VAL(esp); /* 0x1704362D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1704362E: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17043636(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17043636u);

L_17043636:
    edi = edi; /* 0x17043636: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17043638: push ebp */
    ebp = esp; /* 0x17043639: mov ebp, esp */
    PUSH32(esp, 1); /* 0x1704363B: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x1704363D: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17043642: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x1722409C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1704364E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704364Eu);

L_1704364E:
    { _itail_tgt = (uint32_t)(MEM32(0x1722409C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17043659(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17043659u);

L_17043659:
    edi = edi; /* 0x17043659: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704365B: push ebp */
    ebp = esp; /* 0x1704365C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1704365E: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x17043661: push esi */
    esi = MEM32(ebp + 0xC); /* 0x17043662: mov esi, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(esi + 0xC)); /* 0x17043665: fld dword ptr [esi + 0xc] */
    PUSH32(esp, edi); /* 0x17043668: push edi */
    fp_push(*(float*)&MEM32(esi + 0x8)); /* 0x17043669: fld dword ptr [esi + 8] */
    PUSH32(esp, ecx); /* 0x1704366C: push ecx */
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x1704366D: fld dword ptr [esi + 4] */
    PUSH32(esp, ecx); /* 0x17043670: push ecx */
    fp_push(*(float*)&MEM32(esi)); /* 0x17043671: fld dword ptr [esi] */
    fp_push(_st[0]); /* 0x17043673: fld st(0) */
    _st[0] *= _st[1]; /* 0x17043675: fmul st(1) */
    fp_push(_st[2]); /* 0x17043677: fld st(2) */
    _st[0] *= _st[3]; /* 0x17043679: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704367B: faddp st(1) */
    fp_push(_st[3]); /* 0x1704367D: fld st(3) */
    _st[0] *= _st[4]; /* 0x1704367F: fmul st(4) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17043681: faddp st(1) */
    fp_push(_st[4]); /* 0x17043683: fld st(4) */
    _st[0] *= _st[5]; /* 0x17043685: fmul st(5) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17043687: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x17043689: fstp dword ptr [ebp + 0xc] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704368C: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704368E: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17043690: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17043692: fstp st(0) */
    fp_push(1.0); /* 0x17043694: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x17043696: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1704369A: fld dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x1704369D: fstp dword ptr [esp] */
    RECOMP_CALL(sub_1704063B); /* 0x170436A0: call 0x1704063b */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170436A5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170436B8; /* 0x170436A7: je 0x170436b8 */
L_170436A9:
    eax = MEM32(ebp + 0x8); /* 0x170436A9: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, esi */ /* 0x170436AC: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704370B; /* 0x170436AE: je 0x1704370b */
L_170436B0:
    edi = eax; /* 0x170436B0: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170436B2: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170436B3: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170436B4: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170436B5: movsd dword ptr es:[edi], dword ptr [esi] */
    goto L_1704370B; /* 0x170436B6: jmp 0x1704370b */
L_170436B8:
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x170436B8: fld dword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17005308)); /* 0x170436BB: fcomp dword ptr [0x17005308] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170436C1: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x170436C3: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(ebp + 0x8); /* 0x170436C6: mov eax, dword ptr [ebp + 8] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170436F8; /* 0x170436C9: jne 0x170436f8 */
L_170436CB:
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x170436CB: fld dword ptr [ebp + 0xc] */
    _st[0] = sqrt(_st[0]); /* 0x170436CE: fsqrt  */
    _st[0] = (double)*(float*)ADDR(0x17001424) / _st[0]; /* 0x170436D0: fdivr dword ptr [0x17001424] */
    fp_push(_st[0]); /* 0x170436D6: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(esi); /* 0x170436D8: fmul dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x170436DA: fstp dword ptr [ebp - 0x10] */
    fp_push(_st[0]); /* 0x170436DD: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(esi + 0x4); /* 0x170436DF: fmul dword ptr [esi + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x170436E2: fstp dword ptr [ebp - 0xc] */
    fp_push(_st[0]); /* 0x170436E5: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(esi + 0x8); /* 0x170436E7: fmul dword ptr [esi + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x170436EA: fstp dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(esi + 0xC); /* 0x170436ED: fmul dword ptr [esi + 0xc] */
    esi = ebp + (-0x10); /* 0x170436F0: lea esi, [ebp - 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x170436F3: fstp dword ptr [ebp - 4] */
    RECOMP_BACKEDGE();
    goto L_170436B0; /* 0x170436F6: jmp 0x170436b0 */
L_170436F8:
    fp_push(0.0); /* 0x170436F8: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x170436FA: fstp dword ptr [eax] */
    fp_push(0.0); /* 0x170436FC: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x170436FE: fstp dword ptr [eax + 4] */
    fp_push(0.0); /* 0x17043701: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x17043703: fstp dword ptr [eax + 8] */
    fp_push(0.0); /* 0x17043706: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x17043708: fstp dword ptr [eax + 0xc] */
L_1704370B:
    edi = POP32_VAL(esp); /* 0x1704370B: pop edi */
    esi = POP32_VAL(esp); /* 0x1704370C: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704370D: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1704370E: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17043716(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17043716u);

L_17043716:
    edi = edi; /* 0x17043716: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17043718: push ebp */
    ebp = esp; /* 0x17043719: mov ebp, esp */
    PUSH32(esp, 1); /* 0x1704371B: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x1704371D: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17043722: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x172240FC)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1704372E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704372Eu);

L_1704372E:
    { _itail_tgt = (uint32_t)(MEM32(0x172240FC)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17043739(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17043739u);

L_17043739:
    edi = edi; /* 0x17043739: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704373B: push ebp */
    ebp = esp; /* 0x1704373C: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x1704373E: mov edx, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(edx + 0xC)); /* 0x17043741: fld dword ptr [edx + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x17043744: mov ecx, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(edx + 0x8)); /* 0x17043747: fld dword ptr [edx + 8] */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x1704374A: fld dword ptr [edx + 4] */
    fp_push(*(float*)&MEM32(edx)); /* 0x1704374D: fld dword ptr [edx] */
    fp_push(_st[0]); /* 0x1704374F: fld st(0) */
    _st[0] *= _st[1]; /* 0x17043751: fmul st(1) */
    fp_push(_st[2]); /* 0x17043753: fld st(2) */
    _st[0] *= _st[3]; /* 0x17043755: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17043757: faddp st(1) */
    fp_push(_st[3]); /* 0x17043759: fld st(3) */
    _st[0] *= _st[4]; /* 0x1704375B: fmul st(4) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704375D: faddp st(1) */
    fp_push(_st[4]); /* 0x1704375F: fld st(4) */
    _st[0] *= _st[5]; /* 0x17043761: fmul st(5) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17043763: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x17043765: fstp dword ptr [ebp + 0xc] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17043768: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704376A: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704376C: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704376E: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x17043770: fld dword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x1700530C)); /* 0x17043773: fcomp dword ptr [0x1700530c] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17043779: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1704377B: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170437D3; /* 0x1704377E: jne 0x170437d3 */
L_17043780:
    fp_push(*(float*)&MEM32(edx)); /* 0x17043780: fld dword ptr [edx] */
    PUSH32(esp, ecx); /* 0x17043782: push ecx */
    _st[0] = -_st[0]; /* 0x17043783: fchs  */
    PUSH32(esp, ecx); /* 0x17043785: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x17043786: fstp dword ptr [ecx] */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x17043788: fld dword ptr [edx + 4] */
    _st[0] = -_st[0]; /* 0x1704378B: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x4) = _v; } /* 0x1704378D: fstp dword ptr [ecx + 4] */
    fp_push(*(float*)&MEM32(edx + 0x8)); /* 0x17043790: fld dword ptr [edx + 8] */
    _st[0] = -_st[0]; /* 0x17043793: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x8) = _v; } /* 0x17043795: fstp dword ptr [ecx + 8] */
    eax = MEM32(edx + 0xC); /* 0x17043798: mov eax, dword ptr [edx + 0xc] */
    fp_push(1.0); /* 0x1704379B: fld1  */
    MEM32(ecx + 0xC) = eax; /* 0x1704379D: mov dword ptr [ecx + 0xc], eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x170437A0: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x170437A4: fld dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x170437A7: fstp dword ptr [esp] */
    RECOMP_CALL(sub_1704063B); /* 0x170437AA: call 0x1704063b */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170437AF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170437E6; /* 0x170437B1: jne 0x170437e6 */
L_170437B3:
    fp_push(1.0); /* 0x170437B3: fld1  */
    _st[0] /= (double)*(float*)ADDR(ebp + 0xC); /* 0x170437B5: fdiv dword ptr [ebp + 0xc] */
    fp_push(_st[0]); /* 0x170437B8: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x170437BA: fmul dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x170437BC: fstp dword ptr [ecx] */
    fp_push(_st[0]); /* 0x170437BE: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x170437C0: fmul dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x4) = _v; } /* 0x170437C3: fstp dword ptr [ecx + 4] */
    fp_push(_st[0]); /* 0x170437C6: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x170437C8: fmul dword ptr [ecx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x8) = _v; } /* 0x170437CB: fstp dword ptr [ecx + 8] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0xC); /* 0x170437CE: fmul dword ptr [ecx + 0xc] */
    goto L_170437E3; /* 0x170437D1: jmp 0x170437e3 */
L_170437D3:
    fp_push(0.0); /* 0x170437D3: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x170437D5: fstp dword ptr [ecx] */
    fp_push(0.0); /* 0x170437D7: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x4) = _v; } /* 0x170437D9: fstp dword ptr [ecx + 4] */
    fp_push(0.0); /* 0x170437DC: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x8) = _v; } /* 0x170437DE: fstp dword ptr [ecx + 8] */
    fp_push(0.0); /* 0x170437E1: fldz  */
L_170437E3:
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0xC) = _v; } /* 0x170437E3: fstp dword ptr [ecx + 0xc] */
L_170437E6:
    eax = ecx; /* 0x170437E6: mov eax, ecx */
    ebp = POP32_VAL(esp); /* 0x170437E8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x170437E9: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_170437F1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170437F1u);

L_170437F1:
    edi = edi; /* 0x170437F1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170437F3: push ebp */
    ebp = esp; /* 0x170437F4: mov ebp, esp */
    PUSH32(esp, 1); /* 0x170437F6: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x170437F8: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x170437FD: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x17224128)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17043809(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17043809u);

L_17043809:
    { _itail_tgt = (uint32_t)(MEM32(0x17224128)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17043814(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17043814u);

L_17043814:
    edi = edi; /* 0x17043814: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17043816: push ebp */
    ebp = esp; /* 0x17043817: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x17043819: push ecx */
    PUSH32(esp, esi); /* 0x1704381A: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1704381B: mov esi, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(esi + 0xC)); /* 0x1704381E: fld dword ptr [esi + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17001424)); /* 0x17043821: fcomp dword ptr [0x17001424] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17043827: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x17043829: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17043874; /* 0x1704382C: jp 0x17043874 */
L_1704382E:
    fp_push(*(float*)&MEM32(esi + 0xC)); /* 0x1704382E: fld dword ptr [esi + 0xc] */
    RECOMP_CALL(sub_1721B142); /* 0x17043831: call 0x1721b142 */
    RECOMP_FLAGS_IN();
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + 0xC) = _v; } /* 0x17043836: fst dword ptr [ebp + 0xc] */
    _st[0] = sin(_st[0]); _fpu_cmp = 1; /* 0x17043839: fsin  */
    PUSH32(esp, ecx); /* 0x1704383B: push ecx */
    PUSH32(esp, ecx); /* 0x1704383C: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x1704383D: fstp dword ptr [ebp - 4] */
    fp_push(0.0); /* 0x17043840: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x17043842: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17043846: fld dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17043849: fstp dword ptr [esp] */
    RECOMP_CALL(sub_1704063B); /* 0x1704384C: call 0x1704063b */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17043851: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x8); /* 0x17043853: mov eax, dword ptr [ebp + 8] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17043877; /* 0x17043856: jne 0x17043877 */
L_17043858:
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x17043858: fld dword ptr [ebp + 0xc] */
    _st[0] /= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x1704385B: fdiv dword ptr [ebp - 4] */
    fp_push(_st[0]); /* 0x1704385E: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(esi); /* 0x17043860: fmul dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17043862: fstp dword ptr [eax] */
    fp_push(_st[0]); /* 0x17043864: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(esi + 0x4); /* 0x17043866: fmul dword ptr [esi + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x17043869: fstp dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(esi + 0x8); /* 0x1704386C: fmul dword ptr [esi + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x1704386F: fstp dword ptr [eax + 8] */
    goto L_17043887; /* 0x17043872: jmp 0x17043887 */
L_17043874:
    eax = MEM32(ebp + 0x8); /* 0x17043874: mov eax, dword ptr [ebp + 8] */
L_17043877:
    fp_push(*(float*)&MEM32(esi)); /* 0x17043877: fld dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17043879: fstp dword ptr [eax] */
    ecx = MEM32(esi + 0x4); /* 0x1704387B: mov ecx, dword ptr [esi + 4] */
    MEM32(eax + 0x4) = ecx; /* 0x1704387E: mov dword ptr [eax + 4], ecx */
    ecx = MEM32(esi + 0x8); /* 0x17043881: mov ecx, dword ptr [esi + 8] */
    MEM32(eax + 0x8) = ecx; /* 0x17043884: mov dword ptr [eax + 8], ecx */
L_17043887:
    fp_push(0.0); /* 0x17043887: fldz  */
    esi = POP32_VAL(esp); /* 0x17043889: pop esi */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x1704388A: fstp dword ptr [eax + 0xc] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704388D: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1704388E: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17043896(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17043896u);

L_17043896:
    edi = edi; /* 0x17043896: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17043898: push ebp */
    ebp = esp; /* 0x17043899: mov ebp, esp */
    PUSH32(esp, 1); /* 0x1704389B: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x1704389D: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x170438A2: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x1722412C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_170438AE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170438AEu);

L_170438AE:
    { _itail_tgt = (uint32_t)(MEM32(0x1722412C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_170438B9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170438B9u);

L_170438B9:
    edi = edi; /* 0x170438B9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170438BB: push ebp */
    ebp = esp; /* 0x170438BC: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x170438BE: push ecx */
    PUSH32(esp, ecx); /* 0x170438BF: push ecx */
    ecx = MEM32(ebp + 0xC); /* 0x170438C0: mov ecx, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x170438C3: fld dword ptr [ecx + 8] */
    PUSH32(esp, esi); /* 0x170438C6: push esi */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x170438C7: fld dword ptr [ecx + 4] */
    esi = MEM32(ebp + 0x8); /* 0x170438CA: mov esi, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x170438CD: fld dword ptr [ecx] */
    eax = esi + 0xC; /* 0x170438CF: lea eax, [esi + 0xc] */
    fp_push(_st[0]); /* 0x170438D2: fld st(0) */
    MEM32(ebp + 0x8) = eax; /* 0x170438D4: mov dword ptr [ebp + 8], eax */
    _st[0] *= _st[1]; /* 0x170438D7: fmul st(1) */
    eax = ebp + 0xC; /* 0x170438D9: lea eax, [ebp + 0xc] */
    fp_push(_st[2]); /* 0x170438DC: fld st(2) */
    MEM32(ebp + (-0x8)) = eax; /* 0x170438DE: mov dword ptr [ebp - 8], eax */
    _st[0] *= _st[3]; /* 0x170438E1: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170438E3: faddp st(1) */
    fp_push(_st[3]); /* 0x170438E5: fld st(3) */
    _st[0] *= _st[4]; /* 0x170438E7: fmul st(4) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170438E9: faddp st(1) */
    _st[0] = sqrt(_st[0]); /* 0x170438EB: fsqrt  */
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x170438ED: fstp st(3) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170438EF: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170438F1: fstp st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x170438F3: fstp dword ptr [ebp - 4] */
    eax = MEM32(ebp + (-0x8)); /* 0x170438F6: mov eax, dword ptr [ebp - 8] */
    edx = MEM32(ebp + 0x8); /* 0x170438F9: mov edx, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x170438FC: fld dword ptr [ebp - 4] */
    { double _a = _st[0]; _st[0] = sin(_a); fp_push(cos(_a)); } _fpu_cmp = 1; /* 0x170438FF: fsincos  */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x17043901: fstp dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17043903: fstp dword ptr [eax] */
    fp_push(0.0); /* 0x17043905: fldz  */
    PUSH32(esp, ecx); /* 0x17043907: push ecx */
    PUSH32(esp, ecx); /* 0x17043908: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x17043909: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1704390D: fld dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17043910: fstp dword ptr [esp] */
    RECOMP_CALL(sub_1704063B); /* 0x17043913: call 0x1704063b */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17043918: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17043932; /* 0x1704391A: je 0x17043932 */
L_1704391C:
    /* cmp esi, ecx */ /* 0x1704391C: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704394C; /* 0x1704391E: je 0x1704394c */
L_17043920:
    eax = MEM32(ecx); /* 0x17043920: mov eax, dword ptr [ecx] */
    MEM32(esi) = eax; /* 0x17043922: mov dword ptr [esi], eax */
    eax = MEM32(ecx + 0x4); /* 0x17043924: mov eax, dword ptr [ecx + 4] */
    MEM32(esi + 0x4) = eax; /* 0x17043927: mov dword ptr [esi + 4], eax */
    eax = MEM32(ecx + 0x8); /* 0x1704392A: mov eax, dword ptr [ecx + 8] */
    MEM32(esi + 0x8) = eax; /* 0x1704392D: mov dword ptr [esi + 8], eax */
    goto L_1704394C; /* 0x17043930: jmp 0x1704394c */
L_17043932:
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x17043932: fld dword ptr [ebp + 0xc] */
    _st[0] /= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x17043935: fdiv dword ptr [ebp - 4] */
    fp_push(_st[0]); /* 0x17043938: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x1704393A: fmul dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x1704393C: fstp dword ptr [esi] */
    fp_push(_st[0]); /* 0x1704393E: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x17043940: fmul dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x17043943: fstp dword ptr [esi + 4] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x17043946: fmul dword ptr [ecx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x8) = _v; } /* 0x17043949: fstp dword ptr [esi + 8] */
L_1704394C:
    eax = esi; /* 0x1704394C: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x1704394E: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704394F: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17043950: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17043958(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17043958u);

L_17043958:
    edi = edi; /* 0x17043958: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704395A: push ebp */
    ebp = esp; /* 0x1704395B: mov ebp, esp */
    PUSH32(esp, 1); /* 0x1704395D: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x1704395F: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x17043964: fld dword ptr [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x17043967: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17043968: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1704396B: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x1704396E: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17043971: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x172240D8)); /* 0x17043974: call dword ptr [0x172240d8] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1704397A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1704397B: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_17043983(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17043983u);

L_17043983:
    { _itail_tgt = (uint32_t)(MEM32(0x172240D8)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1704398E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704398Eu);

L_1704398E:
    edi = edi; /* 0x1704398E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17043990: push ebp */
    ebp = esp; /* 0x17043991: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x17043993: push ecx */
    ecx = MEM32(ebp + 0xC); /* 0x17043994: mov ecx, dword ptr [ebp + 0xc] */
    fp_push(1.0); /* 0x17043997: fld1  */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x14); /* 0x17043999: fsub dword ptr [ebp + 0x14] */
    edx = MEM32(ebp + 0x10); /* 0x1704399C: mov edx, dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x1704399F: fld dword ptr [ecx] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x170439A1: fmul dword ptr [edx] */
    fp_push(*(float*)&MEM32(edx + 0x8)); /* 0x170439A3: fld dword ptr [edx + 8] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x170439A6: fmul dword ptr [ecx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170439A9: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x170439AB: fld dword ptr [edx + 4] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x170439AE: fmul dword ptr [ecx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170439B1: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0xC)); /* 0x170439B3: fld dword ptr [edx + 0xc] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0xC); /* 0x170439B6: fmul dword ptr [ecx + 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170439B9: faddp st(1) */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17001430)); /* 0x170439BB: fcom dword ptr [0x17001430] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170439C1: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x170439C3: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170439CF; /* 0x170439C6: jne 0x170439cf */
L_170439C8:
    fp_push(1.0); /* 0x170439C8: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x170439CA: fstp dword ptr [ebp + 0xc] */
    goto L_170439D6; /* 0x170439CD: jmp 0x170439d6 */
L_170439CF:
    MEM32(ebp + 0xC) = 0xBF800000u; /* 0x170439CF: mov dword ptr [ebp + 0xc], 0xbf800000 */
L_170439D6:
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x170439D6: fld dword ptr [ebp + 0xc] */
    _st[0] *= _st[1]; /* 0x170439D9: fmul st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + 0x10) = _v; } /* 0x170439DB: fst dword ptr [ebp + 0x10] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x170439DE: fstp st(1) */
    fp_push(1.0); /* 0x170439E0: fld1  */
    _st[0] -= _st[1]; /* 0x170439E2: fsub st(1) */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x170052F8)); /* 0x170439E4: fcomp dword ptr [0x170052f8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170439EA: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x170439EC: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17043A2B; /* 0x170439EF: jne 0x17043a2b */
L_170439F1:
    fp_push(_st[0]); /* 0x170439F1: fld st(0) */
    _st[0] *= _st[1]; /* 0x170439F3: fmul st(1) */
    _st[0] = (double)*(float*)ADDR(0x17001424) - _st[0]; /* 0x170439F5: fsubr dword ptr [0x17001424] */
    _st[0] = sqrt(_st[0]); /* 0x170439FB: fsqrt  */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x170439FD: fstp st(1) */
    fp_push(_st[0]); /* 0x170439FF: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17043A01: fld dword ptr [ebp + 0x10] */
    { double _x = fp_pop(); _st[0] = atan2(_st[0], _x); } /* 0x17043A04: fpatan  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x17043A06: fstp dword ptr [ebp + 0x10] */
    fp_push(1.0); /* 0x17043A09: fld1  */
    _st[0] /= _st[1]; /* 0x17043A0B: fdiv st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17043A0D: fstp dword ptr [ebp - 4] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17043A10: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17043A12: fld dword ptr [ebp + 0x10] */
    _st[0] *= _st[1]; /* 0x17043A15: fmul st(1) */
    _st[0] = sin(_st[0]); _fpu_cmp = 1; /* 0x17043A17: fsin  */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x17043A19: fstp st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x17043A1B: fmul dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17043A1E: fld dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x14); /* 0x17043A21: fmul dword ptr [ebp + 0x14] */
    _st[0] = sin(_st[0]); _fpu_cmp = 1; /* 0x17043A24: fsin  */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x17043A26: fmul dword ptr [ebp - 4] */
    goto L_17043A30; /* 0x17043A29: jmp 0x17043a30 */
L_17043A2B:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17043A2B: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x17043A2D: fld dword ptr [ebp + 0x14] */
L_17043A30:
    _st[0] *= (double)*(float*)ADDR(ebp + 0xC); /* 0x17043A30: fmul dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x17043A33: mov eax, dword ptr [ebp + 8] */
    fp_push(_st[1]); /* 0x17043A36: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x17043A38: fmul dword ptr [ecx] */
    fp_push(_st[1]); /* 0x17043A3A: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x17043A3C: fmul dword ptr [edx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17043A3E: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17043A40: fstp dword ptr [eax] */
    fp_push(_st[0]); /* 0x17043A42: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x17043A44: fmul dword ptr [edx + 4] */
    fp_push(_st[2]); /* 0x17043A47: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x17043A49: fmul dword ptr [ecx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17043A4C: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x17043A4E: fstp dword ptr [eax + 4] */
    fp_push(_st[0]); /* 0x17043A51: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x17043A53: fmul dword ptr [edx + 8] */
    fp_push(_st[2]); /* 0x17043A56: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x17043A58: fmul dword ptr [ecx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17043A5B: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x17043A5D: fstp dword ptr [eax + 8] */
    _st[0] *= (double)*(float*)ADDR(edx + 0xC); /* 0x17043A60: fmul dword ptr [edx + 0xc] */
    fp_push(_st[1]); /* 0x17043A63: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ecx + 0xC); /* 0x17043A65: fmul dword ptr [ecx + 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17043A68: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x17043A6A: fstp dword ptr [eax + 0xc] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17043A6D: fstp st(0) */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17043A6F: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17043A70: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_17043A78(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17043A78u);

L_17043A78:
    edi = edi; /* 0x17043A78: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17043A7A: push ebp */
    ebp = esp; /* 0x17043A7B: mov ebp, esp */
    PUSH32(esp, 1); /* 0x17043A7D: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x17043A7F: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x17043A84: fld dword ptr [ebp + 0x1c] */
    PUSH32(esp, ecx); /* 0x17043A87: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17043A88: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x17043A8B: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x17043A8E: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17043A91: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17043A94: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17043A97: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x172240F8)); /* 0x17043A9A: call dword ptr [0x172240f8] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17043AA0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x17043AA1: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_17043AA9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17043AA9u);

L_17043AA9:
    { _itail_tgt = (uint32_t)(MEM32(0x172240F8)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17043AB4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17043AB4u);

L_17043AB4:
    edi = edi; /* 0x17043AB4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17043AB6: push ebp */
    ebp = esp; /* 0x17043AB7: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x17043AB9: sub esp, 0x20 */
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x17043ABC: fld dword ptr [ebp + 0x1c] */
    PUSH32(esp, ecx); /* 0x17043ABF: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17043AC0: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x17043AC3: push dword ptr [ebp + 0x18] */
    eax = ebp + (-0x20); /* 0x17043AC6: lea eax, [ebp - 0x20] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17043AC9: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x17043ACC: push eax */
    RECOMP_CALL(sub_17043983); /* 0x17043ACD: call 0x17043983 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x17043AD2: fld dword ptr [ebp + 0x1c] */
    PUSH32(esp, ecx); /* 0x17043AD5: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17043AD6: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x17043AD9: push dword ptr [ebp + 0x14] */
    eax = ebp + (-0x10); /* 0x17043ADC: lea eax, [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17043ADF: push dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x17043AE2: push eax */
    RECOMP_CALL(sub_17043983); /* 0x17043AE3: call 0x17043983 */
    RECOMP_FLAGS_IN();
    fp_push(1.0); /* 0x17043AE8: fld1  */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x1C); /* 0x17043AEA: fsub dword ptr [ebp + 0x1c] */
    PUSH32(esp, ecx); /* 0x17043AED: push ecx */
    eax = ebp + (-0x10); /* 0x17043AEE: lea eax, [ebp - 0x10] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x1C); /* 0x17043AF1: fmul dword ptr [ebp + 0x1c] */
    _st[0] += _st[0]; /* 0x17043AF4: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17043AF6: fstp dword ptr [esp] */
    PUSH32(esp, eax); /* 0x17043AF9: push eax */
    eax = ebp + (-0x20); /* 0x17043AFA: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x17043AFD: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17043AFE: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_17043983); /* 0x17043B01: call 0x17043983 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x17043B06: mov eax, dword ptr [ebp + 8] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17043B09: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x17043B0A: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_17043B12(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17043B12u);

L_17043B12:
    edi = edi; /* 0x17043B12: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17043B14: push ebp */
    ebp = esp; /* 0x17043B15: mov ebp, esp */
    PUSH32(esp, 1); /* 0x17043B17: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x17043B19: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17043B1E: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x17224100)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17043B2A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17043B2Au);

L_17043B2A:
    { _itail_tgt = (uint32_t)(MEM32(0x17224100)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17043B35(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17043B35u);

L_17043B35:
    edi = edi; /* 0x17043B35: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17043B37: push ebp */
    ebp = esp; /* 0x17043B38: mov ebp, esp */
    PUSH32(esp, 1); /* 0x17043B3A: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x17043B3C: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x17043B41: fld dword ptr [ebp + 0x1c] */
    PUSH32(esp, ecx); /* 0x17043B44: push ecx */
    PUSH32(esp, ecx); /* 0x17043B45: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x17043B46: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + 0x18)); /* 0x17043B4A: fld dword ptr [ebp + 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17043B4D: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x17043B50: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17043B53: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17043B56: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17043B59: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x172240DC)); /* 0x17043B5C: call dword ptr [0x172240dc] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17043B62: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x17043B63: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_17043B6B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17043B6Bu);

L_17043B6B:
    { _itail_tgt = (uint32_t)(MEM32(0x172240DC)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17043B76(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17043B76u);

L_17043B76:
    edi = edi; /* 0x17043B76: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17043B78: push ebp */
    ebp = esp; /* 0x17043B79: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x17043B7B: sub esp, 0x20 */
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(ebp + 0x18)); /* 0x17043B7E: fld dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x17043B81: push esi */
    _st[0] += (double)*(float*)ADDR(ebp + 0x1C); /* 0x17043B82: fadd dword ptr [ebp + 0x1c] */
    PUSH32(esp, ecx); /* 0x17043B85: push ecx */
    PUSH32(esp, ecx); /* 0x17043B86: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x18) = _v; } /* 0x17043B87: fstp dword ptr [ebp + 0x18] */
    fp_push(0.0); /* 0x17043B8A: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x17043B8C: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + 0x18)); /* 0x17043B90: fld dword ptr [ebp + 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17043B93: fstp dword ptr [esp] */
    RECOMP_CALL(sub_1704063B); /* 0x17043B96: call 0x1704063b */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17043B9B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17043BB2; /* 0x17043B9D: je 0x17043bb2 */
L_17043B9F:
    esi = MEM32(ebp + 0xC); /* 0x17043B9F: mov esi, dword ptr [ebp + 0xc] */
    /* cmp MEM32(ebp + 0x8), esi */ /* 0x17043BA2: cmp dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17043BF8; /* 0x17043BA5: je 0x17043bf8 */
L_17043BA7:
    PUSH32(esp, edi); /* 0x17043BA7: push edi */
    edi = MEM32(ebp + 0x8); /* 0x17043BA8: mov edi, dword ptr [ebp + 8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17043BAB: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17043BAC: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17043BAD: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17043BAE: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x17043BAF: pop edi */
    goto L_17043BF8; /* 0x17043BB0: jmp 0x17043bf8 */
L_17043BB2:
    fp_push(*(float*)&MEM32(ebp + 0x18)); /* 0x17043BB2: fld dword ptr [ebp + 0x18] */
    PUSH32(esp, ecx); /* 0x17043BB5: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17043BB6: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17043BB9: push dword ptr [ebp + 0x10] */
    eax = ebp + (-0x20); /* 0x17043BBC: lea eax, [ebp - 0x20] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17043BBF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x17043BC2: push eax */
    RECOMP_CALL(sub_17043983); /* 0x17043BC3: call 0x17043983 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x18)); /* 0x17043BC8: fld dword ptr [ebp + 0x18] */
    PUSH32(esp, ecx); /* 0x17043BCB: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17043BCC: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x17043BCF: push dword ptr [ebp + 0x14] */
    eax = ebp + (-0x10); /* 0x17043BD2: lea eax, [ebp - 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17043BD5: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x17043BD8: push eax */
    RECOMP_CALL(sub_17043983); /* 0x17043BD9: call 0x17043983 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x17043BDE: fld dword ptr [ebp + 0x1c] */
    _st[0] /= (double)*(float*)ADDR(ebp + 0x18); /* 0x17043BE1: fdiv dword ptr [ebp + 0x18] */
    PUSH32(esp, ecx); /* 0x17043BE4: push ecx */
    eax = ebp + (-0x10); /* 0x17043BE5: lea eax, [ebp - 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17043BE8: fstp dword ptr [esp] */
    PUSH32(esp, eax); /* 0x17043BEB: push eax */
    eax = ebp + (-0x20); /* 0x17043BEC: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x17043BEF: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17043BF0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_17043983); /* 0x17043BF3: call 0x17043983 */
    RECOMP_FLAGS_IN();
L_17043BF8:
    eax = MEM32(ebp + 0x8); /* 0x17043BF8: mov eax, dword ptr [ebp + 8] */
    esi = POP32_VAL(esp); /* 0x17043BFB: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17043BFC: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x17043BFD: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_17043C05(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17043C05u);

L_17043C05:
    edi = edi; /* 0x17043C05: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17043C07: push ebp */
    ebp = esp; /* 0x17043C08: mov ebp, esp */
    PUSH32(esp, 1); /* 0x17043C0A: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x17043C0C: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17043C11: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x172240A0)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17043C1D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17043C1Du);

L_17043C1D:
    { _itail_tgt = (uint32_t)(MEM32(0x172240A0)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17043C28(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17043C28u);

L_17043C28:
    edi = edi; /* 0x17043C28: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17043C2A: push ebp */
    ebp = esp; /* 0x17043C2B: mov ebp, esp */
    PUSH32(esp, esi); /* 0x17043C2D: push esi */
    esi = MEM32(ebp + 0xC); /* 0x17043C2E: mov esi, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(esi + 0x8)); /* 0x17043C31: fld dword ptr [esi + 8] */
    PUSH32(esp, ecx); /* 0x17043C34: push ecx */
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x17043C35: fld dword ptr [esi + 4] */
    PUSH32(esp, ecx); /* 0x17043C38: push ecx */
    fp_push(*(float*)&MEM32(esi)); /* 0x17043C39: fld dword ptr [esi] */
    fp_push(_st[0]); /* 0x17043C3B: fld st(0) */
    _st[0] *= _st[1]; /* 0x17043C3D: fmul st(1) */
    fp_push(_st[2]); /* 0x17043C3F: fld st(2) */
    _st[0] *= _st[3]; /* 0x17043C41: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17043C43: faddp st(1) */
    fp_push(_st[3]); /* 0x17043C45: fld st(3) */
    _st[0] *= _st[4]; /* 0x17043C47: fmul st(4) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17043C49: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x17043C4B: fstp dword ptr [ebp + 0xc] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17043C4E: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17043C50: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17043C52: fstp st(0) */
    fp_push(1.0); /* 0x17043C54: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x17043C56: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x17043C5A: fld dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17043C5D: fstp dword ptr [esp] */
    RECOMP_CALL(sub_1704063B); /* 0x17043C60: call 0x1704063b */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17043C65: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17043C7A; /* 0x17043C67: je 0x17043c7a */
L_17043C69:
    eax = MEM32(ebp + 0x8); /* 0x17043C69: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, esi */ /* 0x17043C6C: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17043CC6; /* 0x17043C6E: je 0x17043cc6 */
L_17043C70:
    PUSH32(esp, edi); /* 0x17043C70: push edi */
    edi = eax; /* 0x17043C71: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17043C73: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17043C74: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17043C75: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17043C76: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x17043C77: pop edi */
    goto L_17043CC6; /* 0x17043C78: jmp 0x17043cc6 */
L_17043C7A:
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x17043C7A: fld dword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17005308)); /* 0x17043C7D: fcomp dword ptr [0x17005308] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17043C83: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x17043C85: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(ebp + 0x8); /* 0x17043C88: mov eax, dword ptr [ebp + 8] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17043CB3; /* 0x17043C8B: jne 0x17043cb3 */
L_17043C8D:
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x17043C8D: fld dword ptr [ebp + 0xc] */
    _st[0] = sqrt(_st[0]); /* 0x17043C90: fsqrt  */
    _st[0] = (double)*(float*)ADDR(0x17001424) / _st[0]; /* 0x17043C92: fdivr dword ptr [0x17001424] */
    fp_push(_st[0]); /* 0x17043C98: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(esi); /* 0x17043C9A: fmul dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17043C9C: fstp dword ptr [eax] */
    fp_push(_st[0]); /* 0x17043C9E: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(esi + 0x4); /* 0x17043CA0: fmul dword ptr [esi + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x17043CA3: fstp dword ptr [eax + 4] */
    fp_push(_st[0]); /* 0x17043CA6: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(esi + 0x8); /* 0x17043CA8: fmul dword ptr [esi + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x17043CAB: fstp dword ptr [eax + 8] */
    _st[0] *= (double)*(float*)ADDR(esi + 0xC); /* 0x17043CAE: fmul dword ptr [esi + 0xc] */
    goto L_17043CC3; /* 0x17043CB1: jmp 0x17043cc3 */
L_17043CB3:
    fp_push(0.0); /* 0x17043CB3: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17043CB5: fstp dword ptr [eax] */
    fp_push(0.0); /* 0x17043CB7: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x17043CB9: fstp dword ptr [eax + 4] */
    fp_push(0.0); /* 0x17043CBC: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x17043CBE: fstp dword ptr [eax + 8] */
    fp_push(0.0); /* 0x17043CC1: fldz  */
L_17043CC3:
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x17043CC3: fstp dword ptr [eax + 0xc] */
L_17043CC6:
    esi = POP32_VAL(esp); /* 0x17043CC6: pop esi */
    ebp = POP32_VAL(esp); /* 0x17043CC7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17043CC8: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17043CD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17043CD0u);

L_17043CD0:
    edi = edi; /* 0x17043CD0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17043CD2: push ebp */
    ebp = esp; /* 0x17043CD3: mov ebp, esp */
    PUSH32(esp, 1); /* 0x17043CD5: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x17043CD7: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17043CDC: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x172240A4)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17043CE8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17043CE8u);

L_17043CE8:
    { _itail_tgt = (uint32_t)(MEM32(0x172240A4)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17043CF3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17043CF3u);

L_17043CF3:
    edi = edi; /* 0x17043CF3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17043CF5: push ebp */
    ebp = esp; /* 0x17043CF6: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x17043CF8: mov ecx, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x17043CFB: fld dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x17043CFD: push esi */
    esi = MEM32(ebp + 0x10); /* 0x17043CFE: mov esi, dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(esi); /* 0x17043D01: fmul dword ptr [esi] */
    PUSH32(esp, edi); /* 0x17043D03: push edi */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x17043D04: fld dword ptr [ecx + 4] */
    edi = MEM32(ebp + 0x14); /* 0x17043D07: mov edi, dword ptr [ebp + 0x14] */
    _st[0] *= (double)*(float*)ADDR(esi + 0x4); /* 0x17043D0A: fmul dword ptr [esi + 4] */
    fp_push(*(float*)&MEM32(esi + 0x8)); /* 0x17043D0D: fld dword ptr [esi + 8] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x17043D10: fmul dword ptr [ecx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17043D13: faddp st(1) */
    _st[0] += _st[1]; /* 0x17043D15: fadd st(1) */
    fp_push(*(float*)&MEM32(ecx)); /* 0x17043D17: fld dword ptr [ecx] */
    _st[0] *= (double)*(float*)ADDR(edi); /* 0x17043D19: fmul dword ptr [edi] */
    fp_push(*(float*)&MEM32(edi + 0x8)); /* 0x17043D1B: fld dword ptr [edi + 8] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x17043D1E: fmul dword ptr [ecx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17043D21: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x17043D23: fld dword ptr [ecx + 4] */
    _st[0] *= (double)*(float*)ADDR(edi + 0x4); /* 0x17043D26: fmul dword ptr [edi + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17043D29: faddp st(1) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17043D2B: fsubp st(1) */
    fp_push(*(float*)&MEM32(0x17001430)); /* 0x17043D2D: fld dword ptr [0x17001430] */
    fp_push(_st[1]); /* 0x17043D33: fld st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x17043D35: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17043D37: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x17043D39: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17043D44; /* 0x17043D3C: jp 0x17043d44 */
L_17043D3E:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17043D3E: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17043D40: fstp st(0) */
    goto L_17043D73; /* 0x17043D42: jmp 0x17043d73 */
L_17043D44:
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x17043D44: fld dword ptr [ecx + 4] */
    PUSH32(esp, ecx); /* 0x17043D47: push ecx */
    _st[0] *= (double)*(float*)ADDR(esi + 0x4); /* 0x17043D48: fmul dword ptr [esi + 4] */
    PUSH32(esp, ecx); /* 0x17043D4B: push ecx */
    fp_push(*(float*)&MEM32(esi + 0x8)); /* 0x17043D4C: fld dword ptr [esi + 8] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x17043D4F: fmul dword ptr [ecx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17043D52: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + 0xC); /* 0x17043D54: fadd dword ptr [ecx + 0xc] */
    _st[0] += _st[2]; /* 0x17043D57: fadd st(2) */
    _st[0] /= _st[1]; /* 0x17043D59: fdiv st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x17043D5B: fstp dword ptr [ebp + 0xc] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17043D5E: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17043D60: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x17043D62: fld dword ptr [ebp + 0xc] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x17043D65: fstp qword ptr [esp] */
    RECOMP_CALL(sub_1721B14E); /* 0x17043D68: call 0x1721b14e */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17043D6D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x17043D6F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x17043D70: pop ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17043D77; /* 0x17043D71: jne 0x17043d77 */
L_17043D73:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17043D73: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17043DA3; /* 0x17043D75: jmp 0x17043da3 */
L_17043D77:
    fp_push(*(float*)&MEM32(edi)); /* 0x17043D77: fld dword ptr [edi] */
    eax = MEM32(ebp + 0x8); /* 0x17043D79: mov eax, dword ptr [ebp + 8] */
    _st[0] -= (double)*(float*)ADDR(esi); /* 0x17043D7C: fsub dword ptr [esi] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0xC); /* 0x17043D7E: fmul dword ptr [ebp + 0xc] */
    _st[0] += (double)*(float*)ADDR(esi); /* 0x17043D81: fadd dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17043D83: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(edi + 0x4)); /* 0x17043D85: fld dword ptr [edi + 4] */
    _st[0] -= (double)*(float*)ADDR(esi + 0x4); /* 0x17043D88: fsub dword ptr [esi + 4] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0xC); /* 0x17043D8B: fmul dword ptr [ebp + 0xc] */
    _st[0] += (double)*(float*)ADDR(esi + 0x4); /* 0x17043D8E: fadd dword ptr [esi + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x17043D91: fstp dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(edi + 0x8)); /* 0x17043D94: fld dword ptr [edi + 8] */
    _st[0] -= (double)*(float*)ADDR(esi + 0x8); /* 0x17043D97: fsub dword ptr [esi + 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0xC); /* 0x17043D9A: fmul dword ptr [ebp + 0xc] */
    _st[0] += (double)*(float*)ADDR(esi + 0x8); /* 0x17043D9D: fadd dword ptr [esi + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x17043DA0: fstp dword ptr [eax + 8] */
L_17043DA3:
    edi = POP32_VAL(esp); /* 0x17043DA3: pop edi */
    esi = POP32_VAL(esp); /* 0x17043DA4: pop esi */
    ebp = POP32_VAL(esp); /* 0x17043DA5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17043DA6: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_17043DAE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17043DAEu);

L_17043DAE:
    edi = edi; /* 0x17043DAE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17043DB0: push ebp */
    ebp = esp; /* 0x17043DB1: mov ebp, esp */
    PUSH32(esp, 1); /* 0x17043DB3: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x17043DB5: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17043DBA: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x1722407C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17043DC6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17043DC6u);

L_17043DC6:
    { _itail_tgt = (uint32_t)(MEM32(0x1722407C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17043DD1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17043DD1u);

L_17043DD1:
    edi = edi; /* 0x17043DD1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17043DD3: push ebp */
    ebp = esp; /* 0x17043DD4: mov ebp, esp */
    ecx = MEM32(ebp + 0x10); /* 0x17043DD6: mov ecx, dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x17043DD9: fld dword ptr [ecx] */
    eax = MEM32(ebp + 0x8); /* 0x17043DDB: mov eax, dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17043DDE: fstp dword ptr [eax] */
    edx = MEM32(ecx + 0x4); /* 0x17043DE0: mov edx, dword ptr [ecx + 4] */
    MEM32(eax + 0x4) = edx; /* 0x17043DE3: mov dword ptr [eax + 4], edx */
    edx = MEM32(ecx + 0x8); /* 0x17043DE6: mov edx, dword ptr [ecx + 8] */
    MEM32(eax + 0x8) = edx; /* 0x17043DE9: mov dword ptr [eax + 8], edx */
    edx = MEM32(ebp + 0xC); /* 0x17043DEC: mov edx, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x17043DEF: fld dword ptr [edx + 4] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x17043DF2: fmul dword ptr [ecx + 4] */
    fp_push(*(float*)&MEM32(edx + 0x8)); /* 0x17043DF5: fld dword ptr [edx + 8] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x17043DF8: fmul dword ptr [ecx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17043DFB: faddp st(1) */
    fp_push(*(float*)&MEM32(edx)); /* 0x17043DFD: fld dword ptr [edx] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x17043DFF: fmul dword ptr [ecx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17043E01: faddp st(1) */
    _st[0] = -_st[0]; /* 0x17043E03: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x17043E05: fstp dword ptr [eax + 0xc] */
    ebp = POP32_VAL(esp); /* 0x17043E08: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17043E09: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17043E11(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17043E11u);

L_17043E11:
    edi = edi; /* 0x17043E11: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17043E13: push ebp */
    ebp = esp; /* 0x17043E14: mov ebp, esp */
    PUSH32(esp, 1); /* 0x17043E16: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x17043E18: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17043E1D: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x17224080)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17043E29(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17043E29u);

L_17043E29:
    { _itail_tgt = (uint32_t)(MEM32(0x17224080)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17043E34(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17043E34u);

L_17043E34:
    edi = edi; /* 0x17043E34: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17043E36: push ebp */
    ebp = esp; /* 0x17043E37: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x17043E39: sub esp, 0x18 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x10); /* 0x17043E3C: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x17043E3F: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x17043E40: mov ebx, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebx)); /* 0x17043E43: fld dword ptr [ebx] */
    PUSH32(esp, esi); /* 0x17043E45: push esi */
    _st[0] -= (double)*(float*)ADDR(eax); /* 0x17043E46: fsub dword ptr [eax] */
    PUSH32(esp, edi); /* 0x17043E48: push edi */
    fp_push(*(float*)&MEM32(ebx + 0x4)); /* 0x17043E49: fld dword ptr [ebx + 4] */
    edi = MEM32(ebp + 0x8); /* 0x17043E4C: mov edi, dword ptr [ebp + 8] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x4); /* 0x17043E4F: fsub dword ptr [eax + 4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17043E52: push dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebx + 0x8)); /* 0x17043E55: fld dword ptr [ebx + 8] */
    esi = ebp + (-0x18); /* 0x17043E58: lea esi, [ebp - 0x18] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x8); /* 0x17043E5B: fsub dword ptr [eax + 8] */
    eax = MEM32(ebp + 0x14); /* 0x17043E5E: mov eax, dword ptr [ebp + 0x14] */
    fp_push(*(float*)&MEM32(ebx)); /* 0x17043E61: fld dword ptr [ebx] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17043E63: push dword ptr [ebp + 8] */
    _st[0] -= (double)*(float*)ADDR(eax); /* 0x17043E66: fsub dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x17043E68: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebx + 0x4)); /* 0x17043E6B: fld dword ptr [ebx + 4] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x4); /* 0x17043E6E: fsub dword ptr [eax + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x17043E71: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebx + 0x8)); /* 0x17043E74: fld dword ptr [ebx + 8] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x8); /* 0x17043E77: fsub dword ptr [eax + 8] */
    fp_push(_st[0]); /* 0x17043E7A: fld st(0) */
    _st[0] *= _st[3]; /* 0x17043E7C: fmul st(3) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17043E7E: fld dword ptr [ebp - 8] */
    _st[0] *= _st[3]; /* 0x17043E81: fmul st(3) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17043E83: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x17043E85: fstp dword ptr [ebp - 0x18] */
    fp_push(_st[1]); /* 0x17043E88: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x17043E8A: fmul dword ptr [ebp - 0xc] */
    fp_push(_st[1]); /* 0x17043E8D: fld st(1) */
    _st[0] *= _st[5]; /* 0x17043E8F: fmul st(5) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17043E91: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x17043E93: fstp dword ptr [ebp - 0x14] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17043E96: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17043E98: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17043E9A: fld dword ptr [ebp - 8] */
    _st[0] *= _st[2]; /* 0x17043E9D: fmul st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x17043E9F: fld dword ptr [ebp - 0xc] */
    _st[0] *= _st[2]; /* 0x17043EA2: fmul st(2) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17043EA4: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x17043EA6: fstp dword ptr [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17043EA9: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17043EAA: movsd dword ptr es:[edi], dword ptr [esi] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17043EAB: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17043EAD: fstp st(0) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17043EAF: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_17040B68); /* 0x17043EB0: call 0x17040b68 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x17043EB5: mov eax, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x17043EB8: pop edi */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x17043EB9: fld dword ptr [eax + 4] */
    esi = POP32_VAL(esp); /* 0x17043EBC: pop esi */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x4); /* 0x17043EBD: fmul dword ptr [ebx + 4] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x17043EC0: fld dword ptr [eax + 8] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x8); /* 0x17043EC3: fmul dword ptr [ebx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17043EC6: faddp st(1) */
    fp_push(*(float*)&MEM32(eax)); /* 0x17043EC8: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(ebx); /* 0x17043ECA: fmul dword ptr [ebx] */
    ebx = POP32_VAL(esp); /* 0x17043ECC: pop ebx */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17043ECD: faddp st(1) */
    _st[0] = -_st[0]; /* 0x17043ECF: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x17043ED1: fstp dword ptr [eax + 0xc] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17043ED4: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17043ED5: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_17043EDD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17043EDDu);

L_17043EDD:
    edi = edi; /* 0x17043EDD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17043EDF: push ebp */
    ebp = esp; /* 0x17043EE0: mov ebp, esp */
    PUSH32(esp, 1); /* 0x17043EE2: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x17043EE4: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17043EE9: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x172240D4)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17043EF5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17043EF5u);

L_17043EF5:
    { _itail_tgt = (uint32_t)(MEM32(0x172240D4)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17043F00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17043F00u);

L_17043F00:
    edi = edi; /* 0x17043F00: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17043F02: push ebp */
    ebp = esp; /* 0x17043F03: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x17043F05: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x10); /* 0x17043F08: mov ecx, dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0xC); /* 0x17043F0B: mov eax, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ecx + 0x20)); /* 0x17043F0E: fld dword ptr [ecx + 0x20] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x17043F11: fmul dword ptr [eax + 8] */
    PUSH32(esp, esi); /* 0x17043F14: push esi */
    fp_push(*(float*)&MEM32(ecx + 0x30)); /* 0x17043F15: fld dword ptr [ecx + 0x30] */
    PUSH32(esp, edi); /* 0x17043F18: push edi */
    _st[0] *= (double)*(float*)ADDR(eax + 0xC); /* 0x17043F19: fmul dword ptr [eax + 0xc] */
    esi = ebp + (-0x10); /* 0x17043F1C: lea esi, [ebp - 0x10] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17043F1F: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x10)); /* 0x17043F21: fld dword ptr [ecx + 0x10] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x17043F24: fmul dword ptr [eax + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17043F27: faddp st(1) */
    fp_push(*(float*)&MEM32(eax)); /* 0x17043F29: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x17043F2B: fmul dword ptr [ecx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17043F2D: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x17043F2F: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ecx + 0x24)); /* 0x17043F32: fld dword ptr [ecx + 0x24] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x17043F35: fmul dword ptr [eax + 8] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x17043F38: fld dword ptr [ecx + 4] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x17043F3B: fmul dword ptr [eax] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17043F3D: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x34)); /* 0x17043F3F: fld dword ptr [ecx + 0x34] */
    _st[0] *= (double)*(float*)ADDR(eax + 0xC); /* 0x17043F42: fmul dword ptr [eax + 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17043F45: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x14)); /* 0x17043F47: fld dword ptr [ecx + 0x14] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x17043F4A: fmul dword ptr [eax + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17043F4D: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x17043F4F: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ecx + 0x28)); /* 0x17043F52: fld dword ptr [ecx + 0x28] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x17043F55: fmul dword ptr [eax + 8] */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x17043F58: fld dword ptr [ecx + 8] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x17043F5B: fmul dword ptr [eax] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17043F5D: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x38)); /* 0x17043F5F: fld dword ptr [ecx + 0x38] */
    _st[0] *= (double)*(float*)ADDR(eax + 0xC); /* 0x17043F62: fmul dword ptr [eax + 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17043F65: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x18)); /* 0x17043F67: fld dword ptr [ecx + 0x18] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x17043F6A: fmul dword ptr [eax + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17043F6D: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x17043F6F: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ecx + 0x2C)); /* 0x17043F72: fld dword ptr [ecx + 0x2c] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x17043F75: fmul dword ptr [eax + 8] */
    fp_push(*(float*)&MEM32(ecx + 0xC)); /* 0x17043F78: fld dword ptr [ecx + 0xc] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x17043F7B: fmul dword ptr [eax] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17043F7D: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x3C)); /* 0x17043F7F: fld dword ptr [ecx + 0x3c] */
    _st[0] *= (double)*(float*)ADDR(eax + 0xC); /* 0x17043F82: fmul dword ptr [eax + 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17043F85: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x1C)); /* 0x17043F87: fld dword ptr [ecx + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x17043F8A: fmul dword ptr [eax + 4] */
    eax = MEM32(ebp + 0x8); /* 0x17043F8D: mov eax, dword ptr [ebp + 8] */
    edi = eax; /* 0x17043F90: mov edi, eax */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17043F92: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17043F94: fstp dword ptr [ebp - 4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17043F97: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17043F98: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17043F99: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17043F9A: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x17043F9B: pop edi */
    esi = POP32_VAL(esp); /* 0x17043F9C: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17043F9D: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17043F9E: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17043FA6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17043FA6u);

L_17043FA6:
    edi = edi; /* 0x17043FA6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17043FA8: push ebp */
    ebp = esp; /* 0x17043FA9: mov ebp, esp */
    PUSH32(esp, 1); /* 0x17043FAB: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x17043FAD: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17043FB2: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x1722415C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17043FBE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17043FBEu);

L_17043FBE:
    { _itail_tgt = (uint32_t)(MEM32(0x1722415C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17043FC9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17043FC9u);

L_17043FC9:
    edi = edi; /* 0x17043FC9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17043FCB: push ebp */
    ebp = esp; /* 0x17043FCC: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x17043FCE: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x1C); /* 0x17043FD1: mov eax, dword ptr [ebp + 0x1c] */
    /* test eax, eax */ /* 0x17043FD4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x17043FD6: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x17043FD7: mov ebx, dword ptr [ebp + 8] */
    MEM32(ebp + 0x8) = ebx; /* 0x17043FDA: mov dword ptr [ebp + 8], ebx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17044082; /* 0x17043FDD: jbe 0x17044082 */
L_17043FE3:
    edx = MEM32(ebp + 0x18); /* 0x17043FE3: mov edx, dword ptr [ebp + 0x18] */
    ecx = MEM32(ebp + 0x10); /* 0x17043FE6: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x17043FE9: push esi */
    PUSH32(esp, edi); /* 0x17043FEA: push edi */
L_17043FEB:
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x17043FEB: fld dword ptr [ecx + 4] */
    edi = ebx; /* 0x17043FEE: mov edi, ebx */
    _st[0] *= (double)*(float*)ADDR(edx + 0x10); /* 0x17043FF0: fmul dword ptr [edx + 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + 0xC); /* 0x17043FF3: add ebx, dword ptr [ebp + 0xc] */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(edx + 0x30)); /* 0x17043FF6: fld dword ptr [edx + 0x30] */
    esi = ebp + (-0x10); /* 0x17043FF9: lea esi, [ebp - 0x10] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0xC); /* 0x17043FFC: fmul dword ptr [ecx + 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17043FFF: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x17044001: fld dword ptr [ecx + 8] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x20); /* 0x17044004: fmul dword ptr [edx + 0x20] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17044007: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx)); /* 0x17044009: fld dword ptr [ecx] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x1704400B: fmul dword ptr [edx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704400D: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x1704400F: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x17044012: fld dword ptr [ecx + 8] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x24); /* 0x17044015: fmul dword ptr [edx + 0x24] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x17044018: fld dword ptr [ecx] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x1704401A: fmul dword ptr [edx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704401D: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x1704401F: fld dword ptr [ecx + 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x14); /* 0x17044022: fmul dword ptr [edx + 0x14] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17044025: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x34)); /* 0x17044027: fld dword ptr [edx + 0x34] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0xC); /* 0x1704402A: fmul dword ptr [ecx + 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704402D: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1704402F: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ecx + 0xC)); /* 0x17044032: fld dword ptr [ecx + 0xc] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x38); /* 0x17044035: fmul dword ptr [edx + 0x38] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x17044038: fld dword ptr [ecx + 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x18); /* 0x1704403B: fmul dword ptr [edx + 0x18] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704403E: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x8)); /* 0x17044040: fld dword ptr [edx + 8] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x17044043: fmul dword ptr [ecx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17044045: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x17044047: fld dword ptr [ecx + 8] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x28); /* 0x1704404A: fmul dword ptr [edx + 0x28] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704404D: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1704404F: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x17044052: fld dword ptr [ecx + 8] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x2C); /* 0x17044055: fmul dword ptr [edx + 0x2c] */
    fp_push(*(float*)&MEM32(edx + 0xC)); /* 0x17044058: fld dword ptr [edx + 0xc] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x1704405B: fmul dword ptr [ecx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704405D: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x1704405F: fld dword ptr [ecx + 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x1C); /* 0x17044062: fmul dword ptr [edx + 0x1c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17044065: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0xC)); /* 0x17044067: fld dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + 0x14); /* 0x1704406A: add ecx, dword ptr [ebp + 0x14] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1704406D: dec eax */
    _flag_k = FK_DEC;
    _st[0] *= (double)*(float*)ADDR(edx + 0x3C); /* 0x1704406E: fmul dword ptr [edx + 0x3c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17044071: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17044073: fstp dword ptr [ebp - 4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17044076: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17044077: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17044078: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17044079: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17043FEB; /* 0x1704407A: jne 0x17043feb */
L_17044080:
    edi = POP32_VAL(esp); /* 0x17044080: pop edi */
    esi = POP32_VAL(esp); /* 0x17044081: pop esi */
L_17044082:
    eax = MEM32(ebp + 0x8); /* 0x17044082: mov eax, dword ptr [ebp + 8] */
    ebx = POP32_VAL(esp); /* 0x17044085: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17044086: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x17044087: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1704408F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704408Fu);

L_1704408F:
    edi = edi; /* 0x1704408F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17044091: push ebp */
    ebp = esp; /* 0x17044092: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x17044094: mov ecx, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x17044097: fld dword ptr [ecx] */
    eax = MEM32(ebp + 0x8); /* 0x17044099: mov eax, dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(0x17005318); /* 0x1704409C: fmul dword ptr [0x17005318] */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x170440A2: fld dword ptr [ecx + 8] */
    _st[0] *= (double)*(float*)ADDR(0x17005314); /* 0x170440A5: fmul dword ptr [0x17005314] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170440AB: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x170440AD: fld dword ptr [ecx + 4] */
    _st[0] *= (double)*(float*)ADDR(0x17005310); /* 0x170440B0: fmul dword ptr [0x17005310] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170440B6: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx)); /* 0x170440B8: fld dword ptr [ecx] */
    _st[0] -= _st[1]; /* 0x170440BA: fsub st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x10); /* 0x170440BC: fmul dword ptr [ebp + 0x10] */
    _st[0] += _st[1]; /* 0x170440BF: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x170440C1: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x170440C3: fld dword ptr [ecx + 4] */
    _st[0] -= _st[1]; /* 0x170440C6: fsub st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x10); /* 0x170440C8: fmul dword ptr [ebp + 0x10] */
    _st[0] += _st[1]; /* 0x170440CB: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x170440CD: fstp dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x170440D0: fld dword ptr [ecx + 8] */
    _st[0] -= _st[1]; /* 0x170440D3: fsub st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x10); /* 0x170440D5: fmul dword ptr [ebp + 0x10] */
    _st[0] += _st[1]; /* 0x170440D8: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x170440DA: fstp dword ptr [eax + 8] */
    ecx = MEM32(ecx + 0xC); /* 0x170440DD: mov ecx, dword ptr [ecx + 0xc] */
    MEM32(eax + 0xC) = ecx; /* 0x170440E0: mov dword ptr [eax + 0xc], ecx */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170440E3: fstp st(0) */
    ebp = POP32_VAL(esp); /* 0x170440E5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170440E6: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170440EE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170440EEu);

L_170440EE:
    edi = edi; /* 0x170440EE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170440F0: push ebp */
    ebp = esp; /* 0x170440F1: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x170440F3: mov ecx, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(0x1700141C)); /* 0x170440F6: fld dword ptr [0x1700141c] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x170440FC: fld dword ptr [ecx] */
    eax = MEM32(ebp + 0x8); /* 0x170440FE: mov eax, dword ptr [ebp + 8] */
    _st[0] -= _st[1]; /* 0x17044101: fsub st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x10); /* 0x17044103: fmul dword ptr [ebp + 0x10] */
    _st[0] += _st[1]; /* 0x17044106: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17044108: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x1704410A: fld dword ptr [ecx + 4] */
    _st[0] -= _st[1]; /* 0x1704410D: fsub st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x10); /* 0x1704410F: fmul dword ptr [ebp + 0x10] */
    _st[0] += _st[1]; /* 0x17044112: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x17044114: fstp dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x17044117: fld dword ptr [ecx + 8] */
    _st[0] -= _st[1]; /* 0x1704411A: fsub st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x10); /* 0x1704411C: fmul dword ptr [ebp + 0x10] */
    _st[0] += _st[1]; /* 0x1704411F: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x17044121: fstp dword ptr [eax + 8] */
    ecx = MEM32(ecx + 0xC); /* 0x17044124: mov ecx, dword ptr [ecx + 0xc] */
    MEM32(eax + 0xC) = ecx; /* 0x17044127: mov dword ptr [eax + 0xc], ecx */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704412A: fstp st(0) */
    ebp = POP32_VAL(esp); /* 0x1704412C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1704412D: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17044135(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17044135u);

L_17044135:
    edi = edi; /* 0x17044135: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17044137: push ebp */
    ebp = esp; /* 0x17044138: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1704413A: push ecx */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x1704413B: fld dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17005308)); /* 0x1704413E: fcomp dword ptr [0x17005308] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17044144: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x17044146: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17044153; /* 0x17044149: jp 0x17044153 */
L_1704414B:
    fp_push(*(float*)&MEM32(0x17001424)); /* 0x1704414B: fld dword ptr [0x17001424] */
    goto L_170441D0; /* 0x17044151: jmp 0x170441d0 */
L_17044153:
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x17044153: fld dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x8); /* 0x17044156: fmul dword ptr [ebp + 8] */
    fp_push(1.0); /* 0x17044159: fld1  */
    _st[0] -= _st[1]; /* 0x1704415B: fsub st(1) */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1704415D: fld dword ptr [ebp + 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0xC); /* 0x17044160: fmul dword ptr [ebp + 0xc] */
    _st[0] -= _st[1]; /* 0x17044163: fsub st(1) */
    _st[0] = fabs(_st[0]); /* 0x17044165: fabs  */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + 0xC) = _v; } /* 0x17044167: fst dword ptr [ebp + 0xc] */
    _st[0] = sqrt(_st[0]); /* 0x1704416A: fsqrt  */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x8); /* 0x1704416C: fmul dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x1704416F: fld st(0) */
    _st[0] += _st[1]; /* 0x17044171: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17044173: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x17044176: fld dword ptr [ebp + 0xc] */
    _st[0] += _st[3]; /* 0x17044179: fadd st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x1704417B: fstp dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x1704417E: fld st(0) */
    _st[0] -= _st[2]; /* 0x17044180: fsub st(2) */
    fp_push(_st[1]); /* 0x17044182: fld st(1) */
    _st[0] += _st[3]; /* 0x17044184: fadd st(3) */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x17044186: fdivp st(1) */
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x17044188: fstp st(3) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704418A: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704418C: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x1704418E: fld dword ptr [ebp + 8] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x17044191: fsub dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(0x1700141C); /* 0x17044194: fmul dword ptr [0x1700141c] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x1704419A: fld dword ptr [ebp + 8] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x4)); /* 0x1704419D: fadd dword ptr [ebp - 4] */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x170441A0: fdivp st(1) */
    fp_push(_st[1]); /* 0x170441A2: fld st(1) */
    _st[0] *= _st[2]; /* 0x170441A4: fmul st(2) */
    _st[0] += (double)*(float*)ADDR(0x17001424); /* 0x170441A6: fadd dword ptr [0x17001424] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x170441AC: fmulp st(1) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x170441AE: fstp st(1) */
    fp_push(1.0); /* 0x170441B0: fld1  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x170441B2: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170441B4: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x170441B6: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_170441C1; /* 0x170441B9: jp 0x170441c1 */
L_170441BB:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170441BB: fstp st(0) */
    fp_push(1.0); /* 0x170441BD: fld1  */
    goto L_170441D0; /* 0x170441BF: jmp 0x170441d0 */
L_170441C1:
    fp_push(0.0); /* 0x170441C1: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x170441C3: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170441C5: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x170441C7: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170441D0; /* 0x170441CA: jne 0x170441d0 */
L_170441CC:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170441CC: fstp st(0) */
    fp_push(0.0); /* 0x170441CE: fldz  */
L_170441D0:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170441D0: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x170441D1: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_170441D9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170441D9u);

L_170441D9:
    edi = edi; /* 0x170441D9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170441DB: push ebp */
    ebp = esp; /* 0x170441DC: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x170441DE: sub esp, 0x1c */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x170441E1: push ebx */
    PUSH32(esp, esi); /* 0x170441E2: push esi */
    PUSH32(esp, edi); /* 0x170441E3: push edi */
    edi = MEM32(ebp + 0x8); /* 0x170441E4: mov edi, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(edi)); /* 0x170441E7: fld dword ptr [edi] */
    _st[0] += (double)*(float*)ADDR(0x17005320); /* 0x170441E9: fadd dword ptr [0x17005320] */
    fp_push(_st[0]); /* 0x170441EF: fld st(0) */
    RECOMP_CALL(sub_1721B050); /* 0x170441F1: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x170441F6: mov dword ptr [ebp - 4], eax */
    _st[0] = _st[0] - (double)(int32_t)MEM32(ebp + (-0x4)); /* 0x170441F9: fisub dword ptr [ebp - 4] */
    esi = 0xFFu; /* 0x170441FC: mov esi, 0xff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x17044201: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(*(float*)&MEM32(0x17001424)); /* 0x17044203: fld dword ptr [0x17001424] */
    MEM32(ebp + (-0x10)) = eax; /* 0x17044209: mov dword ptr [ebp - 0x10], eax */
    _st[0] = _st[1] - _st[0]; /* 0x1704420C: fsubr st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x1704420E: fst dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(edi + 0x4)); /* 0x17044211: fld dword ptr [edi + 4] */
    _st[0] += (double)*(float*)ADDR(0x17005320); /* 0x17044214: fadd dword ptr [0x17005320] */
    fp_push(_st[0]); /* 0x1704421A: fld st(0) */
    RECOMP_CALL(sub_1721B050); /* 0x1704421C: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x4)) = eax; /* 0x17044221: mov dword ptr [ebp - 4], eax */
    _st[0] = _st[0] - (double)(int32_t)MEM32(ebp + (-0x4)); /* 0x17044224: fisub dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x17044227: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = eax; /* 0x17044229: mov ebx, eax */
    fp_push(*(float*)&MEM32(0x17001424)); /* 0x1704422B: fld dword ptr [0x17001424] */
    eax = MEM32(ebp + 0x8); /* 0x17044231: mov eax, dword ptr [ebp + 8] */
    _st[0] = _st[1] - _st[0]; /* 0x17044234: fsubr st(1) */
    edi = ebx + 0x1; /* 0x17044236: lea edi, [ebx + 1] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    edi = edi & esi; /* 0x17044239: and edi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1704423B: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x1704423E: fld dword ptr [eax + 8] */
    _st[0] += (double)*(float*)ADDR(0x17005320); /* 0x17044241: fadd dword ptr [0x17005320] */
    fp_push(_st[0]); /* 0x17044247: fld st(0) */
    RECOMP_CALL(sub_1721B050); /* 0x17044249: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x10)); /* 0x1704424E: mov edx, dword ptr [ebp - 0x10] */
    edx = MEM32(edx * 4 + 0x170032D8); /* 0x17044251: mov edx, dword ptr [edx*4 + 0x170032d8] */
    MEM32(ebp + (-0x4)) = eax; /* 0x17044258: mov dword ptr [ebp - 4], eax */
    fp_push((double)(int32_t)MEM32(ebp + (-0x4))); /* 0x1704425B: fild dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x1704425E: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = edx; /* 0x17044260: mov dword ptr [ebp - 4], edx */
    edx = MEM32(ebp + (-0x10)); /* 0x17044263: mov edx, dword ptr [ebp - 0x10] */
    _st[0] = _st[1] - _st[0]; /* 0x17044266: fsubr st(1) */
    ecx = eax; /* 0x17044268: mov ecx, eax */
    eax = ecx + 0x1; /* 0x1704426A: lea eax, [ecx + 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    eax = eax & esi; /* 0x1704426D: and eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1704426F: fst dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x17044272: inc edx */
    _flag_k = FK_INC;
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x17044273: fstp st(1) */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    edx = edx & esi; /* 0x17044275: and edx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(*(float*)&MEM32(0x17001424)); /* 0x17044277: fld dword ptr [0x17001424] */
    edx = MEM32(edx * 4 + 0x170032D8); /* 0x1704427D: mov edx, dword ptr [edx*4 + 0x170032d8] */
    esi = MEM32(ebp + (-0x4)); /* 0x17044284: mov esi, dword ptr [ebp - 4] */
    _st[0] = _st[1] - _st[0]; /* 0x17044287: fsubr st(1) */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ebx; /* 0x17044289: add esi, ebx */
    _flag_k = FK_ADD;
    esi = MEM32(esi * 4 + 0x170032D8); /* 0x1704428B: mov esi, dword ptr [esi*4 + 0x170032d8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x17044292: fstp dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edx; /* 0x17044295: add ebx, edx */
    _flag_k = FK_ADD;
    ebx = MEM32(ebx * 4 + 0x170032D8); /* 0x17044297: mov ebx, dword ptr [ebx*4 + 0x170032d8] */
    fp_push(_st[3]); /* 0x1704429E: fld st(3) */
    _st[0] += _st[0]; /* 0x170442A0: fadd st(0), st(0) */
    MEM32(ebp + (-0x10)) = ebx; /* 0x170442A2: mov dword ptr [ebp - 0x10], ebx */
    ebx = MEM32(ebp + (-0x4)); /* 0x170442A5: mov ebx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edi; /* 0x170442A8: add ebx, edi */
    _flag_k = FK_ADD;
    _st[0] = (double)*(float*)ADDR(0x17001DA0) - _st[0]; /* 0x170442AA: fsubr dword ptr [0x17001da0] */
    ebx = MEM32(ebx * 4 + 0x170032D8); /* 0x170442B0: mov ebx, dword ptr [ebx*4 + 0x170032d8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x170442B7: add edx, edi */
    _flag_k = FK_ADD;
    edi = MEM32(edx * 4 + 0x170032D8); /* 0x170442B9: mov edi, dword ptr [edx*4 + 0x170032d8] */
    _st[0] *= _st[4]; /* 0x170442C0: fmul st(4) */
    edx = esi + ecx; /* 0x170442C2: lea edx, [esi + ecx] */
    _st[0] *= _st[4]; /* 0x170442C5: fmul st(4) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x170442C7: fstp dword ptr [ebp - 4] */
    fp_push(_st[1]); /* 0x170442CA: fld st(1) */
    _st[0] += _st[0]; /* 0x170442CC: fadd st(0), st(0) */
    _st[0] = (double)*(float*)ADDR(0x17001DA0) - _st[0]; /* 0x170442CE: fsubr dword ptr [0x17001da0] */
    _st[0] *= _st[2]; /* 0x170442D4: fmul st(2) */
    _st[0] *= _st[2]; /* 0x170442D6: fmul st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x170442D8: fstp dword ptr [ebp - 0x14] */
    fp_push(_st[0]); /* 0x170442DB: fld st(0) */
    edx = edx + edx * 2; /* 0x170442DD: lea edx, [edx + edx*2] */
    edx = edx * 4 + 0x17003AE0; /* 0x170442E0: lea edx, [edx*4 + 0x17003ae0] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x170442E7: fmul dword ptr [edx + 8] */
    fp_push(_st[2]); /* 0x170442EA: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x170442EC: fmul dword ptr [edx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170442EF: faddp st(1) */
    fp_push(_st[4]); /* 0x170442F1: fld st(4) */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x170442F3: fmul dword ptr [edx] */
    edx = MEM32(ebp + (-0x10)); /* 0x170442F5: mov edx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x170442F8: add edx, ecx */
    _flag_k = FK_ADD;
    edx = edx + edx * 2; /* 0x170442FA: lea edx, [edx + edx*2] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170442FD: faddp st(1) */
    edx = edx * 4 + 0x17003AE0; /* 0x170442FF: lea edx, [edx*4 + 0x17003ae0] */
    fp_push(_st[1]); /* 0x17044306: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x17044308: fmul dword ptr [edx + 8] */
    fp_push(_st[3]); /* 0x1704430B: fld st(3) */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x1704430D: fmul dword ptr [edx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17044310: faddp st(1) */
    fp_push(_st[4]); /* 0x17044312: fld st(4) */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x17044314: fmul dword ptr [edx] */
    edx = ebx + ecx; /* 0x17044316: lea edx, [ebx + ecx] */
    edx = edx + edx * 2; /* 0x17044319: lea edx, [edx + edx*2] */
    edx = edx * 4 + 0x17003AE0; /* 0x1704431C: lea edx, [edx*4 + 0x17003ae0] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17044323: faddp st(1) */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x17044325: add ecx, edi */
    _flag_k = FK_ADD;
    ecx = ecx + ecx * 2; /* 0x17044327: lea ecx, [ecx + ecx*2] */
    ecx = ecx * 4 + 0x17003AE0; /* 0x1704432A: lea ecx, [ecx*4 + 0x17003ae0] */
    _st[0] -= _st[1]; /* 0x17044331: fsub st(1) */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x17044333: add esi, eax */
    _flag_k = FK_ADD;
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x17044335: fmul dword ptr [ebp - 4] */
    _st[0] += _st[1]; /* 0x17044338: fadd st(1) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1704433A: fstp st(1) */
    fp_push(_st[1]); /* 0x1704433C: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x1704433E: fmul dword ptr [edx + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17044341: fld dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x17044344: fmul dword ptr [edx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17044347: faddp st(1) */
    fp_push(_st[5]); /* 0x17044349: fld st(5) */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x1704434B: fmul dword ptr [edx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704434D: faddp st(1) */
    fp_push(_st[2]); /* 0x1704434F: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x17044351: fmul dword ptr [ecx + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17044354: fld dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x17044357: fmul dword ptr [ecx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704435A: faddp st(1) */
    fp_push(_st[5]); /* 0x1704435C: fld st(5) */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x1704435E: fmul dword ptr [ecx] */
    ecx = esi + esi * 2; /* 0x17044360: lea ecx, [esi + esi*2] */
    ecx = ecx * 4 + 0x17003AE0; /* 0x17044363: lea ecx, [ecx*4 + 0x17003ae0] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704436A: faddp st(1) */
    _st[0] -= _st[1]; /* 0x1704436C: fsub st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x1704436E: fmul dword ptr [ebp - 4] */
    _st[0] += _st[1]; /* 0x17044371: fadd st(1) */
    _st[0] -= _st[2]; /* 0x17044373: fsub st(2) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x14)); /* 0x17044375: fmul dword ptr [ebp - 0x14] */
    _st[0] += _st[2]; /* 0x17044378: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x1704437A: fstp dword ptr [ebp - 0x18] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704437D: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704437F: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17044381: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x17044383: fld dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x17044386: fmul dword ptr [ecx + 8] */
    fp_push(_st[1]); /* 0x17044389: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x1704438B: fmul dword ptr [ecx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704438E: faddp st(1) */
    fp_push(_st[3]); /* 0x17044390: fld st(3) */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x17044392: fmul dword ptr [ecx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17044394: faddp st(1) */
    ecx = MEM32(ebp + (-0x10)); /* 0x17044396: mov ecx, dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x17044399: fld dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x1704439C: add ecx, eax */
    _flag_k = FK_ADD;
    ecx = ecx + ecx * 2; /* 0x1704439E: lea ecx, [ecx + ecx*2] */
    ecx = ecx * 4 + 0x17003AE0; /* 0x170443A1: lea ecx, [ecx*4 + 0x17003ae0] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x170443A8: fmul dword ptr [ecx + 8] */
    fp_push(_st[2]); /* 0x170443AB: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x170443AD: fmul dword ptr [ecx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170443B0: faddp st(1) */
    fp_push(_st[3]); /* 0x170443B2: fld st(3) */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x170443B4: fmul dword ptr [ecx] */
    ecx = ebx + eax; /* 0x170443B6: lea ecx, [ebx + eax] */
    ecx = ecx + ecx * 2; /* 0x170443B9: lea ecx, [ecx + ecx*2] */
    ecx = ecx * 4 + 0x17003AE0; /* 0x170443BC: lea ecx, [ecx*4 + 0x17003ae0] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170443C3: faddp st(1) */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x170443C5: add eax, edi */
    _flag_k = FK_ADD;
    eax = eax + eax * 2; /* 0x170443C7: lea eax, [eax + eax*2] */
    eax = eax * 4 + 0x17003AE0; /* 0x170443CA: lea eax, [eax*4 + 0x17003ae0] */
    _st[0] -= _st[1]; /* 0x170443D1: fsub st(1) */
    edi = POP32_VAL(esp); /* 0x170443D3: pop edi */
    esi = POP32_VAL(esp); /* 0x170443D4: pop esi */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x170443D5: fmul dword ptr [ebp - 4] */
    _st[0] += _st[1]; /* 0x170443D8: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x170443DA: fstp dword ptr [ebp - 0x10] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170443DD: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170443DF: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170443E1: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x170443E3: fld dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x170443E6: fmul dword ptr [ecx + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x170443E9: fld dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x170443EC: fmul dword ptr [ecx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170443EF: faddp st(1) */
    fp_push(_st[1]); /* 0x170443F1: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x170443F3: fmul dword ptr [ecx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170443F5: faddp st(1) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x170443F7: fstp st(1) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x170443F9: fld dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x170443FC: fmul dword ptr [eax + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x170443FF: fld dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x17044402: fmul dword ptr [eax + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17044405: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x17044407: fld dword ptr [ebp - 0x1c] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x1704440A: fmul dword ptr [eax] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704440C: faddp st(1) */
    _st[0] -= _st[1]; /* 0x1704440E: fsub st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x17044410: fmul dword ptr [ebp - 4] */
    _st[0] += _st[1]; /* 0x17044413: fadd st(1) */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x10)); /* 0x17044415: fsub dword ptr [ebp - 0x10] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x14)); /* 0x17044418: fmul dword ptr [ebp - 0x14] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x10)); /* 0x1704441B: fadd dword ptr [ebp - 0x10] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x18)); /* 0x1704441E: fsub dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x17044421: fld dword ptr [ebp - 0xc] */
    _st[0] += _st[0]; /* 0x17044424: fadd st(0), st(0) */
    _st[0] = (double)*(float*)ADDR(0x17001DA0) - _st[0]; /* 0x17044426: fsubr dword ptr [0x17001da0] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x1704442C: fmul dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x1704442F: fmul dword ptr [ebp - 0xc] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x17044432: fmulp st(1) */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x18)); /* 0x17044434: fadd dword ptr [ebp - 0x18] */
    _st[0] *= (double)*(float*)ADDR(0x1700531C); /* 0x17044437: fmul dword ptr [0x1700531c] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1704443D: fstp st(1) */
    ebx = POP32_VAL(esp); /* 0x1704443F: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17044440: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17044441: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17044449(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17044449u);

L_17044449:
    edi = edi; /* 0x17044449: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704444B: push ebp */
    ebp = esp; /* 0x1704444C: mov ebp, esp */
    PUSH32(esp, 1); /* 0x1704444E: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x17044450: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17044455: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x17224160)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17044461(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17044461u);

L_17044461:
    { _itail_tgt = (uint32_t)(MEM32(0x17224160)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1704446C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704446Cu);

L_1704446C:
    edi = edi; /* 0x1704446C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704446E: push ebp */
    ebp = esp; /* 0x1704446F: mov ebp, esp */
    PUSH32(esp, 1); /* 0x17044471: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x17044473: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17044478: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x17224164)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17044484(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17044484u);

L_17044484:
    { _itail_tgt = (uint32_t)(MEM32(0x17224164)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1704448F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704448Fu);

L_1704448F:
    edi = edi; /* 0x1704448F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17044491: push ebp */
    ebp = esp; /* 0x17044492: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x17044494: push ecx */
    PUSH32(esp, ecx); /* 0x17044495: push ecx */
    ecx = MEM32(ebp + 0xC); /* 0x17044496: mov ecx, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x17044499: fld dword ptr [ecx + 4] */
    PUSH32(esp, ecx); /* 0x1704449C: push ecx */
    fp_push(*(float*)&MEM32(ecx)); /* 0x1704449D: fld dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x1704449F: push ecx */
    fp_push(_st[0]); /* 0x170444A0: fld st(0) */
    _st[0] *= _st[1]; /* 0x170444A2: fmul st(1) */
    fp_push(_st[2]); /* 0x170444A4: fld st(2) */
    _st[0] *= _st[3]; /* 0x170444A6: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170444A8: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x170444AA: fstp dword ptr [ebp + 0xc] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170444AD: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170444AF: fstp st(0) */
    fp_push(1.0); /* 0x170444B1: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x170444B3: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x170444B7: fld dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x170444BA: fstp dword ptr [esp] */
    RECOMP_CALL(sub_1704063B); /* 0x170444BD: call 0x1704063b */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x170444C2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170444D9; /* 0x170444C4: je 0x170444d9 */
L_170444C6:
    eax = MEM32(ebp + 0x8); /* 0x170444C6: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, ecx */ /* 0x170444C9: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17044517; /* 0x170444CB: je 0x17044517 */
L_170444CD:
    edx = MEM32(ecx); /* 0x170444CD: mov edx, dword ptr [ecx] */
    MEM32(eax) = edx; /* 0x170444CF: mov dword ptr [eax], edx */
    ecx = MEM32(ecx + 0x4); /* 0x170444D1: mov ecx, dword ptr [ecx + 4] */
L_170444D4:
    MEM32(eax + 0x4) = ecx; /* 0x170444D4: mov dword ptr [eax + 4], ecx */
    goto L_17044517; /* 0x170444D7: jmp 0x17044517 */
L_170444D9:
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x170444D9: fld dword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17005308)); /* 0x170444DC: fcomp dword ptr [0x17005308] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170444E2: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x170444E4: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(ebp + 0x8); /* 0x170444E7: mov eax, dword ptr [ebp + 8] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1704450E; /* 0x170444EA: jne 0x1704450e */
L_170444EC:
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x170444EC: fld dword ptr [ebp + 0xc] */
    _st[0] = sqrt(_st[0]); /* 0x170444EF: fsqrt  */
    _st[0] = (double)*(float*)ADDR(0x17001424) / _st[0]; /* 0x170444F1: fdivr dword ptr [0x17001424] */
    fp_push(_st[0]); /* 0x170444F7: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x170444F9: fmul dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x170444FB: fstp dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x170444FE: fmul dword ptr [ecx + 4] */
    ecx = MEM32(ebp + (-0x8)); /* 0x17044501: mov ecx, dword ptr [ebp - 8] */
    MEM32(eax) = ecx; /* 0x17044504: mov dword ptr [eax], ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17044506: fstp dword ptr [ebp - 4] */
    ecx = MEM32(ebp + (-0x4)); /* 0x17044509: mov ecx, dword ptr [ebp - 4] */
    RECOMP_BACKEDGE();
    goto L_170444D4; /* 0x1704450C: jmp 0x170444d4 */
L_1704450E:
    fp_push(0.0); /* 0x1704450E: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17044510: fstp dword ptr [eax] */
    fp_push(0.0); /* 0x17044512: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x17044514: fstp dword ptr [eax + 4] */
L_17044517:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17044517: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17044518: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17044520(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17044520u);

L_17044520:
    edi = edi; /* 0x17044520: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17044522: push ebp */
    ebp = esp; /* 0x17044523: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x17044525: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x10); /* 0x17044528: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0xC); /* 0x1704452B: mov ecx, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(eax + 0x10)); /* 0x1704452E: fld dword ptr [eax + 0x10] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x17044531: fmul dword ptr [ecx + 4] */
    PUSH32(esp, esi); /* 0x17044534: push esi */
    fp_push(*(float*)&MEM32(ecx)); /* 0x17044535: fld dword ptr [ecx] */
    PUSH32(esp, edi); /* 0x17044537: push edi */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x17044538: fmul dword ptr [eax] */
    esi = ebp + (-0x10); /* 0x1704453A: lea esi, [ebp - 0x10] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704453D: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(eax + 0x30); /* 0x1704453F: fadd dword ptr [eax + 0x30] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x17044542: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x17044545: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x17044548: fmul dword ptr [ecx] */
    fp_push(*(float*)&MEM32(eax + 0x14)); /* 0x1704454A: fld dword ptr [eax + 0x14] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x1704454D: fmul dword ptr [ecx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17044550: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(eax + 0x34); /* 0x17044552: fadd dword ptr [eax + 0x34] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x17044555: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x17044558: fld dword ptr [eax + 8] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x1704455B: fmul dword ptr [ecx] */
    fp_push(*(float*)&MEM32(eax + 0x18)); /* 0x1704455D: fld dword ptr [eax + 0x18] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x17044560: fmul dword ptr [ecx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17044563: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(eax + 0x38); /* 0x17044565: fadd dword ptr [eax + 0x38] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x17044568: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(eax + 0xC)); /* 0x1704456B: fld dword ptr [eax + 0xc] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x1704456E: fmul dword ptr [ecx] */
    fp_push(*(float*)&MEM32(eax + 0x1C)); /* 0x17044570: fld dword ptr [eax + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x17044573: fmul dword ptr [ecx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17044576: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(eax + 0x3C); /* 0x17044578: fadd dword ptr [eax + 0x3c] */
    eax = MEM32(ebp + 0x8); /* 0x1704457B: mov eax, dword ptr [ebp + 8] */
    edi = eax; /* 0x1704457E: mov edi, eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17044580: fstp dword ptr [ebp - 4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17044583: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17044584: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17044585: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17044586: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x17044587: pop edi */
    esi = POP32_VAL(esp); /* 0x17044588: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17044589: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1704458A: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17044592(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17044592u);

L_17044592:
    edi = edi; /* 0x17044592: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17044594: push ebp */
    ebp = esp; /* 0x17044595: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x17044597: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x1C); /* 0x1704459A: mov eax, dword ptr [ebp + 0x1c] */
    /* test eax, eax */ /* 0x1704459D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x1704459F: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x170445A0: mov ebx, dword ptr [ebp + 8] */
    MEM32(ebp + 0x8) = ebx; /* 0x170445A3: mov dword ptr [ebp + 8], ebx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704460F; /* 0x170445A6: jbe 0x1704460f */
L_170445A8:
    ecx = MEM32(ebp + 0x18); /* 0x170445A8: mov ecx, dword ptr [ebp + 0x18] */
    edx = MEM32(ebp + 0x10); /* 0x170445AB: mov edx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x170445AE: push esi */
    PUSH32(esp, edi); /* 0x170445AF: push edi */
L_170445B0:
    fp_push(*(float*)&MEM32(ecx + 0x10)); /* 0x170445B0: fld dword ptr [ecx + 0x10] */
    edi = ebx; /* 0x170445B3: mov edi, ebx */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x170445B5: fmul dword ptr [edx + 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + 0xC); /* 0x170445B8: add ebx, dword ptr [ebp + 0xc] */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(edx)); /* 0x170445BB: fld dword ptr [edx] */
    esi = ebp + (-0x10); /* 0x170445BD: lea esi, [ebp - 0x10] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x170445C0: fmul dword ptr [ecx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170445C2: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + 0x30); /* 0x170445C4: fadd dword ptr [ecx + 0x30] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x170445C7: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x170445CA: fld dword ptr [ecx + 4] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x170445CD: fmul dword ptr [edx] */
    fp_push(*(float*)&MEM32(ecx + 0x14)); /* 0x170445CF: fld dword ptr [ecx + 0x14] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x170445D2: fmul dword ptr [edx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170445D5: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + 0x34); /* 0x170445D7: fadd dword ptr [ecx + 0x34] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x170445DA: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x170445DD: fld dword ptr [ecx + 8] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x170445E0: fmul dword ptr [edx] */
    fp_push(*(float*)&MEM32(ecx + 0x18)); /* 0x170445E2: fld dword ptr [ecx + 0x18] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x170445E5: fmul dword ptr [edx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170445E8: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + 0x38); /* 0x170445EA: fadd dword ptr [ecx + 0x38] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x170445ED: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(edx)); /* 0x170445F0: fld dword ptr [edx] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0xC); /* 0x170445F2: fmul dword ptr [ecx + 0xc] */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x170445F5: fld dword ptr [edx + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + 0x14); /* 0x170445F8: add edx, dword ptr [ebp + 0x14] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x170445FB: dec eax */
    _flag_k = FK_DEC;
    _st[0] *= (double)*(float*)ADDR(ecx + 0x1C); /* 0x170445FC: fmul dword ptr [ecx + 0x1c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170445FF: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + 0x3C); /* 0x17044601: fadd dword ptr [ecx + 0x3c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17044604: fstp dword ptr [ebp - 4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17044607: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17044608: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17044609: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704460A: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170445B0; /* 0x1704460B: jne 0x170445b0 */
L_1704460D:
    edi = POP32_VAL(esp); /* 0x1704460D: pop edi */
    esi = POP32_VAL(esp); /* 0x1704460E: pop esi */
L_1704460F:
    eax = MEM32(ebp + 0x8); /* 0x1704460F: mov eax, dword ptr [ebp + 8] */
    ebx = POP32_VAL(esp); /* 0x17044612: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17044613: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x17044614: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1704461C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704461Cu);

L_1704461C:
    edi = edi; /* 0x1704461C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704461E: push ebp */
    ebp = esp; /* 0x1704461F: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x17044621: push ecx */
    eax = MEM32(ebp + 0xC); /* 0x17044622: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x10); /* 0x17044625: mov edx, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x17044628: mov ecx, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1704462B: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x1704462D: fmul dword ptr [edx] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1704462F: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x17044631: fmul dword ptr [edx + 4] */
    fp_push(*(float*)&MEM32(eax)); /* 0x17044634: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(edx + 0xC); /* 0x17044636: fmul dword ptr [edx + 0xc] */
    fp_xch(2); /* 0x17044639: fxch st(2) */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1704463B: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x10); /* 0x1704463E: fmul dword ptr [edx + 0x10] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x17044641: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x14); /* 0x17044644: fmul dword ptr [edx + 0x14] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x17044647: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x1C); /* 0x1704464A: fmul dword ptr [edx + 0x1c] */
    fp_xch(2); /* 0x1704464D: fxch st(2) */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x1704464F: faddp st(3) */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x17044651: faddp st(3) */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x17044653: faddp st(3) */
    fp_push(*(float*)&MEM32(edx + 0x30)); /* 0x17044655: fld dword ptr [edx + 0x30] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17044658: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x34)); /* 0x1704465A: fld dword ptr [edx + 0x34] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x1704465D: faddp st(2) */
    fp_push(*(float*)&MEM32(edx + 0x3C)); /* 0x1704465F: fld dword ptr [edx + 0x3c] */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x17044662: faddp st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x17044664: fstp dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x4) = _v; } /* 0x17044666: fstp dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17044669: fstp dword ptr [ebp - 4] */
    fp_push(1.0); /* 0x1704466C: fld1  */
    PUSH32(esp, ecx); /* 0x1704466E: push ecx */
    PUSH32(esp, ecx); /* 0x1704466F: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x17044670: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17044674: fld dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17044677: fstp dword ptr [esp] */
    RECOMP_CALL(sub_1704063B); /* 0x1704467A: call 0x1704063b */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704467F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x8); /* 0x17044681: mov eax, dword ptr [ebp + 8] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17044697; /* 0x17044684: jne 0x17044697 */
L_17044686:
    fp_push(1.0); /* 0x17044686: fld1  */
    _st[0] /= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x17044688: fdiv dword ptr [ebp - 4] */
    fp_push(_st[0]); /* 0x1704468B: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x1704468D: fmul dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1704468F: fstp dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x17044691: fmul dword ptr [eax + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x17044694: fstp dword ptr [eax + 4] */
L_17044697:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17044697: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17044698: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170446A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170446A0u);

L_170446A0:
    edi = edi; /* 0x170446A0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170446A2: push ebp */
    ebp = esp; /* 0x170446A3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x170446A5: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x170446A8: push ebx */
    PUSH32(esp, esi); /* 0x170446A9: push esi */
    esi = MEM32(ebp + 0x8); /* 0x170446AA: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x170446AD: push edi */
    edi = MEM32(ebp + 0x1C); /* 0x170446AE: mov edi, dword ptr [ebp + 0x1c] */
    /* test edi, edi */ /* 0x170446B1: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = esi; /* 0x170446B3: mov ebx, esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17044731; /* 0x170446B5: jbe 0x17044731 */
L_170446B7:
    ecx = MEM32(ebp + 0x18); /* 0x170446B7: mov ecx, dword ptr [ebp + 0x18] */
    edx = MEM32(ebp + 0x10); /* 0x170446BA: mov edx, dword ptr [ebp + 0x10] */
L_170446BD:
    fp_push(*(float*)&MEM32(ecx + 0x10)); /* 0x170446BD: fld dword ptr [ecx + 0x10] */
    PUSH32(esp, ecx); /* 0x170446C0: push ecx */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x170446C1: fmul dword ptr [edx + 4] */
    PUSH32(esp, ecx); /* 0x170446C4: push ecx */
    fp_push(*(float*)&MEM32(edx)); /* 0x170446C5: fld dword ptr [edx] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x170446C7: fmul dword ptr [ecx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170446C9: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + 0x30); /* 0x170446CB: fadd dword ptr [ecx + 0x30] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x170446CE: fstp dword ptr [ebp - 0x10] */
    eax = MEM32(ebp + (-0x10)); /* 0x170446D1: mov eax, dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x170446D4: fld dword ptr [ecx + 4] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x170446D7: fmul dword ptr [edx] */
    fp_push(*(float*)&MEM32(ecx + 0x14)); /* 0x170446D9: fld dword ptr [ecx + 0x14] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x170446DC: fmul dword ptr [edx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170446DF: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + 0x34); /* 0x170446E1: fadd dword ptr [ecx + 0x34] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x170446E4: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ecx + 0xC)); /* 0x170446E7: fld dword ptr [ecx + 0xc] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x170446EA: fmul dword ptr [edx] */
    fp_push(*(float*)&MEM32(ecx + 0x1C)); /* 0x170446EC: fld dword ptr [ecx + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x170446EF: fmul dword ptr [edx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170446F2: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + 0x3C); /* 0x170446F4: fadd dword ptr [ecx + 0x3c] */
    MEM32(esi) = eax; /* 0x170446F7: mov dword ptr [esi], eax */
    eax = MEM32(ebp + (-0xC)); /* 0x170446F9: mov eax, dword ptr [ebp - 0xc] */
    MEM32(esi + 0x4) = eax; /* 0x170446FC: mov dword ptr [esi + 4], eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x170446FF: fstp dword ptr [ebp + 8] */
    fp_push(1.0); /* 0x17044702: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x17044704: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x17044708: fld dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x1704470B: fstp dword ptr [esp] */
    RECOMP_CALL(sub_1704063B); /* 0x1704470E: call 0x1704063b */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17044713: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17044728; /* 0x17044715: jne 0x17044728 */
L_17044717:
    fp_push(1.0); /* 0x17044717: fld1  */
    _st[0] /= (double)*(float*)ADDR(ebp + 0x8); /* 0x17044719: fdiv dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x1704471C: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(esi); /* 0x1704471E: fmul dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x17044720: fstp dword ptr [esi] */
    _st[0] *= (double)*(float*)ADDR(esi + 0x4); /* 0x17044722: fmul dword ptr [esi + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x17044725: fstp dword ptr [esi + 4] */
L_17044728:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + 0x14); /* 0x17044728: add edx, dword ptr [ebp + 0x14] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0xC); /* 0x1704472B: add esi, dword ptr [ebp + 0xc] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x1704472E: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170446BD; /* 0x1704472F: jne 0x170446bd */
L_17044731:
    edi = POP32_VAL(esp); /* 0x17044731: pop edi */
    esi = POP32_VAL(esp); /* 0x17044732: pop esi */
    eax = ebx; /* 0x17044733: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x17044735: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17044736: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x17044737: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1704473F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704473Fu);

L_1704473F:
    edi = edi; /* 0x1704473F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17044741: push ebp */
    ebp = esp; /* 0x17044742: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x17044744: push ecx */
    PUSH32(esp, ecx); /* 0x17044745: push ecx */
    ecx = MEM32(ebp + 0x10); /* 0x17044746: mov ecx, dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0xC); /* 0x17044749: mov eax, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ecx + 0x10)); /* 0x1704474C: fld dword ptr [ecx + 0x10] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x1704474F: fmul dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(eax)); /* 0x17044752: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x17044754: fmul dword ptr [ecx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17044756: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x17044758: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x1704475B: fld dword ptr [ecx + 4] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x1704475E: fmul dword ptr [eax] */
    fp_push(*(float*)&MEM32(ecx + 0x14)); /* 0x17044760: fld dword ptr [ecx + 0x14] */
    ecx = MEM32(ebp + (-0x8)); /* 0x17044763: mov ecx, dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x17044766: fmul dword ptr [eax + 4] */
    eax = MEM32(ebp + 0x8); /* 0x17044769: mov eax, dword ptr [ebp + 8] */
    MEM32(eax) = ecx; /* 0x1704476C: mov dword ptr [eax], ecx */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704476E: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17044770: fstp dword ptr [ebp - 4] */
    ecx = MEM32(ebp + (-0x4)); /* 0x17044773: mov ecx, dword ptr [ebp - 4] */
    MEM32(eax + 0x4) = ecx; /* 0x17044776: mov dword ptr [eax + 4], ecx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17044779: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1704477A: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17044782(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17044782u);

L_17044782:
    edi = edi; /* 0x17044782: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17044784: push ebp */
    ebp = esp; /* 0x17044785: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x17044787: push ecx */
    PUSH32(esp, ecx); /* 0x17044788: push ecx */
    PUSH32(esp, esi); /* 0x17044789: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1704478A: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x1704478D: push edi */
    edi = MEM32(ebp + 0x1C); /* 0x1704478E: mov edi, dword ptr [ebp + 0x1c] */
    /* test edi, edi */ /* 0x17044791: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi; /* 0x17044793: mov eax, esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170447D2; /* 0x17044795: jbe 0x170447d2 */
L_17044797:
    edx = MEM32(ebp + 0x18); /* 0x17044797: mov edx, dword ptr [ebp + 0x18] */
    ecx = MEM32(ebp + 0x10); /* 0x1704479A: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x1704479D: push ebx */
L_1704479E:
    fp_push(*(float*)&MEM32(edx + 0x10)); /* 0x1704479E: fld dword ptr [edx + 0x10] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x170447A1: fmul dword ptr [ecx + 4] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x170447A4: fld dword ptr [ecx] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x170447A6: fmul dword ptr [edx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170447A8: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x170447AA: fstp dword ptr [ebp - 8] */
    ebx = MEM32(ebp + (-0x8)); /* 0x170447AD: mov ebx, dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x170447B0: fld dword ptr [edx + 4] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x170447B3: fmul dword ptr [ecx] */
    fp_push(*(float*)&MEM32(edx + 0x14)); /* 0x170447B5: fld dword ptr [edx + 0x14] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x170447B8: fmul dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + 0x14); /* 0x170447BB: add ecx, dword ptr [ebp + 0x14] */
    _flag_k = FK_ADD;
    MEM32(esi) = ebx; /* 0x170447BE: mov dword ptr [esi], ebx */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170447C0: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x170447C2: fstp dword ptr [ebp - 4] */
    ebx = MEM32(ebp + (-0x4)); /* 0x170447C5: mov ebx, dword ptr [ebp - 4] */
    MEM32(esi + 0x4) = ebx; /* 0x170447C8: mov dword ptr [esi + 4], ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + 0xC); /* 0x170447CB: add esi, dword ptr [ebp + 0xc] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x170447CE: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_1704479E; /* 0x170447CF: jne 0x1704479e */
L_170447D1:
    ebx = POP32_VAL(esp); /* 0x170447D1: pop ebx */
L_170447D2:
    edi = POP32_VAL(esp); /* 0x170447D2: pop edi */
    esi = POP32_VAL(esp); /* 0x170447D3: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170447D4: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x170447D5: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_170447DD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170447DDu);

L_170447DD:
    edi = edi; /* 0x170447DD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170447DF: push ebp */
    ebp = esp; /* 0x170447E0: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x170447E2: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x170447E5: push esi */
    esi = MEM32(ebp + 0xC); /* 0x170447E6: mov esi, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(esi + 0x8)); /* 0x170447E9: fld dword ptr [esi + 8] */
    PUSH32(esp, edi); /* 0x170447EC: push edi */
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x170447ED: fld dword ptr [esi + 4] */
    PUSH32(esp, ecx); /* 0x170447F0: push ecx */
    fp_push(*(float*)&MEM32(esi)); /* 0x170447F1: fld dword ptr [esi] */
    PUSH32(esp, ecx); /* 0x170447F3: push ecx */
    fp_push(_st[0]); /* 0x170447F4: fld st(0) */
    _st[0] *= _st[1]; /* 0x170447F6: fmul st(1) */
    fp_push(_st[2]); /* 0x170447F8: fld st(2) */
    _st[0] *= _st[3]; /* 0x170447FA: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170447FC: faddp st(1) */
    fp_push(_st[3]); /* 0x170447FE: fld st(3) */
    _st[0] *= _st[4]; /* 0x17044800: fmul st(4) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17044802: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x17044804: fstp dword ptr [ebp + 0xc] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17044807: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17044809: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704480B: fstp st(0) */
    fp_push(1.0); /* 0x1704480D: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x1704480F: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x17044813: fld dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17044816: fstp dword ptr [esp] */
    RECOMP_CALL(sub_1704063B); /* 0x17044819: call 0x1704063b */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704481E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17044830; /* 0x17044820: je 0x17044830 */
L_17044822:
    eax = MEM32(ebp + 0x8); /* 0x17044822: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, esi */ /* 0x17044825: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17044876; /* 0x17044827: je 0x17044876 */
L_17044829:
    edi = eax; /* 0x17044829: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704482B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704482C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704482D: movsd dword ptr es:[edi], dword ptr [esi] */
    goto L_17044876; /* 0x1704482E: jmp 0x17044876 */
L_17044830:
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x17044830: fld dword ptr [ebp + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17005308)); /* 0x17044833: fcomp dword ptr [0x17005308] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17044839: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1704483B: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(ebp + 0x8); /* 0x1704483E: mov eax, dword ptr [ebp + 8] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17044868; /* 0x17044841: jne 0x17044868 */
L_17044843:
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x17044843: fld dword ptr [ebp + 0xc] */
    _st[0] = sqrt(_st[0]); /* 0x17044846: fsqrt  */
    _st[0] = (double)*(float*)ADDR(0x17001424) / _st[0]; /* 0x17044848: fdivr dword ptr [0x17001424] */
    fp_push(_st[0]); /* 0x1704484E: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(esi); /* 0x17044850: fmul dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x17044852: fstp dword ptr [ebp - 0xc] */
    fp_push(_st[0]); /* 0x17044855: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(esi + 0x4); /* 0x17044857: fmul dword ptr [esi + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1704485A: fstp dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(esi + 0x8); /* 0x1704485D: fmul dword ptr [esi + 8] */
    esi = ebp + (-0xC); /* 0x17044860: lea esi, [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17044863: fstp dword ptr [ebp - 4] */
    RECOMP_BACKEDGE();
    goto L_17044829; /* 0x17044866: jmp 0x17044829 */
L_17044868:
    fp_push(0.0); /* 0x17044868: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1704486A: fstp dword ptr [eax] */
    fp_push(0.0); /* 0x1704486C: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x1704486E: fstp dword ptr [eax + 4] */
    fp_push(0.0); /* 0x17044871: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x17044873: fstp dword ptr [eax + 8] */
L_17044876:
    edi = POP32_VAL(esp); /* 0x17044876: pop edi */
    esi = POP32_VAL(esp); /* 0x17044877: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17044878: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17044879: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17044881(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17044881u);

L_17044881:
    edi = edi; /* 0x17044881: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17044883: push ebp */
    ebp = esp; /* 0x17044884: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x17044886: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x10); /* 0x17044889: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0xC); /* 0x1704488C: mov ecx, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(eax + 0x20)); /* 0x1704488F: fld dword ptr [eax + 0x20] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x17044892: fmul dword ptr [ecx + 8] */
    PUSH32(esp, esi); /* 0x17044895: push esi */
    fp_push(*(float*)&MEM32(eax + 0x10)); /* 0x17044896: fld dword ptr [eax + 0x10] */
    PUSH32(esp, edi); /* 0x17044899: push edi */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x1704489A: fmul dword ptr [ecx + 4] */
    esi = ebp + (-0x10); /* 0x1704489D: lea esi, [ebp - 0x10] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170448A0: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx)); /* 0x170448A2: fld dword ptr [ecx] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x170448A4: fmul dword ptr [eax] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170448A6: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(eax + 0x30); /* 0x170448A8: fadd dword ptr [eax + 0x30] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x170448AB: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(eax + 0x24)); /* 0x170448AE: fld dword ptr [eax + 0x24] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x170448B1: fmul dword ptr [ecx + 8] */
    fp_push(*(float*)&MEM32(eax + 0x14)); /* 0x170448B4: fld dword ptr [eax + 0x14] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x170448B7: fmul dword ptr [ecx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170448BA: faddp st(1) */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x170448BC: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x170448BF: fmul dword ptr [ecx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170448C1: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(eax + 0x34); /* 0x170448C3: fadd dword ptr [eax + 0x34] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x170448C6: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(eax + 0x28)); /* 0x170448C9: fld dword ptr [eax + 0x28] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x170448CC: fmul dword ptr [ecx + 8] */
    fp_push(*(float*)&MEM32(eax + 0x18)); /* 0x170448CF: fld dword ptr [eax + 0x18] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x170448D2: fmul dword ptr [ecx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170448D5: faddp st(1) */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x170448D7: fld dword ptr [eax + 8] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x170448DA: fmul dword ptr [ecx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170448DC: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(eax + 0x38); /* 0x170448DE: fadd dword ptr [eax + 0x38] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x170448E1: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(eax + 0x2C)); /* 0x170448E4: fld dword ptr [eax + 0x2c] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x170448E7: fmul dword ptr [ecx + 8] */
    fp_push(*(float*)&MEM32(eax + 0x1C)); /* 0x170448EA: fld dword ptr [eax + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x170448ED: fmul dword ptr [ecx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170448F0: faddp st(1) */
    fp_push(*(float*)&MEM32(eax + 0xC)); /* 0x170448F2: fld dword ptr [eax + 0xc] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x170448F5: fmul dword ptr [ecx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170448F7: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(eax + 0x3C); /* 0x170448F9: fadd dword ptr [eax + 0x3c] */
    eax = MEM32(ebp + 0x8); /* 0x170448FC: mov eax, dword ptr [ebp + 8] */
    edi = eax; /* 0x170448FF: mov edi, eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17044901: fstp dword ptr [ebp - 4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17044904: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17044905: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17044906: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17044907: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x17044908: pop edi */
    esi = POP32_VAL(esp); /* 0x17044909: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704490A: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1704490B: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17044913(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17044913u);

L_17044913:
    edi = edi; /* 0x17044913: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17044915: push ebp */
    ebp = esp; /* 0x17044916: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x17044918: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x1C); /* 0x1704491B: mov eax, dword ptr [ebp + 0x1c] */
    /* test eax, eax */ /* 0x1704491E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x17044920: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x17044921: mov ebx, dword ptr [ebp + 8] */
    MEM32(ebp + 0x8) = ebx; /* 0x17044924: mov dword ptr [ebp + 8], ebx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170449B4; /* 0x17044927: jbe 0x170449b4 */
L_1704492D:
    ecx = MEM32(ebp + 0x18); /* 0x1704492D: mov ecx, dword ptr [ebp + 0x18] */
    edx = MEM32(ebp + 0x10); /* 0x17044930: mov edx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x17044933: push esi */
    PUSH32(esp, edi); /* 0x17044934: push edi */
L_17044935:
    fp_push(*(float*)&MEM32(ecx + 0x10)); /* 0x17044935: fld dword ptr [ecx + 0x10] */
    edi = ebx; /* 0x17044938: mov edi, ebx */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x1704493A: fmul dword ptr [edx + 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + 0xC); /* 0x1704493D: add ebx, dword ptr [ebp + 0xc] */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(ecx + 0x20)); /* 0x17044940: fld dword ptr [ecx + 0x20] */
    esi = ebp + (-0x10); /* 0x17044943: lea esi, [ebp - 0x10] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x17044946: fmul dword ptr [edx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17044949: faddp st(1) */
    fp_push(*(float*)&MEM32(edx)); /* 0x1704494B: fld dword ptr [edx] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x1704494D: fmul dword ptr [ecx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704494F: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + 0x30); /* 0x17044951: fadd dword ptr [ecx + 0x30] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x17044954: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x17044957: fld dword ptr [ecx + 4] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x1704495A: fmul dword ptr [edx] */
    fp_push(*(float*)&MEM32(ecx + 0x14)); /* 0x1704495C: fld dword ptr [ecx + 0x14] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x1704495F: fmul dword ptr [edx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17044962: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x24)); /* 0x17044964: fld dword ptr [ecx + 0x24] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x17044967: fmul dword ptr [edx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704496A: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + 0x34); /* 0x1704496C: fadd dword ptr [ecx + 0x34] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1704496F: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(edx + 0x8)); /* 0x17044972: fld dword ptr [edx + 8] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x28); /* 0x17044975: fmul dword ptr [ecx + 0x28] */
    fp_push(*(float*)&MEM32(edx)); /* 0x17044978: fld dword ptr [edx] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x1704497A: fmul dword ptr [ecx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704497D: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x1704497F: fld dword ptr [edx + 4] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x18); /* 0x17044982: fmul dword ptr [ecx + 0x18] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17044985: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + 0x38); /* 0x17044987: fadd dword ptr [ecx + 0x38] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1704498A: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ecx + 0xC)); /* 0x1704498D: fld dword ptr [ecx + 0xc] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x17044990: fmul dword ptr [edx] */
    fp_push(*(float*)&MEM32(ecx + 0x1C)); /* 0x17044992: fld dword ptr [ecx + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x17044995: fmul dword ptr [edx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17044998: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x2C)); /* 0x1704499A: fld dword ptr [ecx + 0x2c] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x1704499D: fmul dword ptr [edx + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + 0x14); /* 0x170449A0: add edx, dword ptr [ebp + 0x14] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x170449A3: dec eax */
    _flag_k = FK_DEC;
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170449A4: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + 0x3C); /* 0x170449A6: fadd dword ptr [ecx + 0x3c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x170449A9: fstp dword ptr [ebp - 4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170449AC: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170449AD: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170449AE: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170449AF: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17044935; /* 0x170449B0: jne 0x17044935 */
L_170449B2:
    edi = POP32_VAL(esp); /* 0x170449B2: pop edi */
    esi = POP32_VAL(esp); /* 0x170449B3: pop esi */
L_170449B4:
    eax = MEM32(ebp + 0x8); /* 0x170449B4: mov eax, dword ptr [ebp + 8] */
    ebx = POP32_VAL(esp); /* 0x170449B7: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170449B8: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x170449B9: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_170449C1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170449C1u);

L_170449C1:
    edi = edi; /* 0x170449C1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170449C3: push ebp */
    ebp = esp; /* 0x170449C4: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x170449C6: push ecx */
    eax = MEM32(ebp + 0xC); /* 0x170449C7: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x10); /* 0x170449CA: mov edx, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0x8); /* 0x170449CD: mov ecx, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(eax)); /* 0x170449D0: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x170449D2: fmul dword ptr [edx] */
    fp_push(*(float*)&MEM32(eax)); /* 0x170449D4: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x170449D6: fmul dword ptr [edx + 8] */
    fp_push(*(float*)&MEM32(eax)); /* 0x170449D9: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x170449DB: fmul dword ptr [edx + 4] */
    fp_push(*(float*)&MEM32(eax)); /* 0x170449DE: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(edx + 0xC); /* 0x170449E0: fmul dword ptr [edx + 0xc] */
    fp_xch(3); /* 0x170449E3: fxch st(3) */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x170449E5: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x10); /* 0x170449E8: fmul dword ptr [edx + 0x10] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x170449EB: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x18); /* 0x170449EE: fmul dword ptr [edx + 0x18] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x170449F1: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x14); /* 0x170449F4: fmul dword ptr [edx + 0x14] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x170449F7: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x1C); /* 0x170449FA: fmul dword ptr [edx + 0x1c] */
    fp_xch(3); /* 0x170449FD: fxch st(3) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x170449FF: faddp st(4) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x17044A01: faddp st(4) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x17044A03: faddp st(4) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x17044A05: faddp st(4) */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x17044A07: fld dword ptr [eax + 8] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x20); /* 0x17044A0A: fmul dword ptr [edx + 0x20] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x17044A0D: fld dword ptr [eax + 8] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x28); /* 0x17044A10: fmul dword ptr [edx + 0x28] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x17044A13: fld dword ptr [eax + 8] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x24); /* 0x17044A16: fmul dword ptr [edx + 0x24] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x17044A19: fld dword ptr [eax + 8] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x2C); /* 0x17044A1C: fmul dword ptr [edx + 0x2c] */
    fp_xch(3); /* 0x17044A1F: fxch st(3) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x17044A21: faddp st(4) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x17044A23: faddp st(4) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x17044A25: faddp st(4) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x17044A27: faddp st(4) */
    fp_push(*(float*)&MEM32(edx + 0x30)); /* 0x17044A29: fld dword ptr [edx + 0x30] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17044A2C: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x34)); /* 0x17044A2E: fld dword ptr [edx + 0x34] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x17044A31: faddp st(2) */
    fp_push(*(float*)&MEM32(edx + 0x38)); /* 0x17044A33: fld dword ptr [edx + 0x38] */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x17044A36: faddp st(3) */
    fp_push(*(float*)&MEM32(edx + 0x3C)); /* 0x17044A38: fld dword ptr [edx + 0x3c] */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x17044A3B: faddp st(4) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x17044A3D: fstp dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x4) = _v; } /* 0x17044A3F: fstp dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + 0x8) = _v; } /* 0x17044A42: fstp dword ptr [ecx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17044A45: fstp dword ptr [ebp - 4] */
    fp_push(1.0); /* 0x17044A48: fld1  */
    PUSH32(esp, ecx); /* 0x17044A4A: push ecx */
    PUSH32(esp, ecx); /* 0x17044A4B: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x17044A4C: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17044A50: fld dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17044A53: fstp dword ptr [esp] */
    RECOMP_CALL(sub_1704063B); /* 0x17044A56: call 0x1704063b */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17044A5B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x8); /* 0x17044A5D: mov eax, dword ptr [ebp + 8] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17044A7B; /* 0x17044A60: jne 0x17044a7b */
L_17044A62:
    fp_push(1.0); /* 0x17044A62: fld1  */
    _st[0] /= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x17044A64: fdiv dword ptr [ebp - 4] */
    fp_push(_st[0]); /* 0x17044A67: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x17044A69: fmul dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17044A6B: fstp dword ptr [eax] */
    fp_push(_st[0]); /* 0x17044A6D: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x17044A6F: fmul dword ptr [eax + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x17044A72: fstp dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x17044A75: fmul dword ptr [eax + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x17044A78: fstp dword ptr [eax + 8] */
L_17044A7B:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17044A7B: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17044A7C: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17044A84(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17044A84u);

L_17044A84:
    edi = edi; /* 0x17044A84: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17044A86: push ebp */
    ebp = esp; /* 0x17044A87: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x17044A89: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x1C); /* 0x17044A8C: mov eax, dword ptr [ebp + 0x1c] */
    /* test eax, eax */ /* 0x17044A8F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x17044A91: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x17044A92: mov ebx, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x17044A95: mov dword ptr [ebp - 4], ebx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17044B5D; /* 0x17044A98: jbe 0x17044b5d */
L_17044A9E:
    ecx = MEM32(ebp + 0x18); /* 0x17044A9E: mov ecx, dword ptr [ebp + 0x18] */
    edx = MEM32(ebp + 0x10); /* 0x17044AA1: mov edx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x17044AA4: push esi */
    MEM32(ebp + 0x1C) = eax; /* 0x17044AA5: mov dword ptr [ebp + 0x1c], eax */
    PUSH32(esp, edi); /* 0x17044AA8: push edi */
L_17044AA9:
    fp_push(*(float*)&MEM32(ecx + 0x10)); /* 0x17044AA9: fld dword ptr [ecx + 0x10] */
    esi = ebp + (-0x10); /* 0x17044AAC: lea esi, [ebp - 0x10] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x17044AAF: fmul dword ptr [edx + 4] */
    edi = ebx; /* 0x17044AB2: mov edi, ebx */
    fp_push(*(float*)&MEM32(ecx + 0x20)); /* 0x17044AB4: fld dword ptr [ecx + 0x20] */
    PUSH32(esp, ecx); /* 0x17044AB7: push ecx */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x17044AB8: fmul dword ptr [edx + 8] */
    PUSH32(esp, ecx); /* 0x17044ABB: push ecx */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17044ABC: faddp st(1) */
    fp_push(*(float*)&MEM32(edx)); /* 0x17044ABE: fld dword ptr [edx] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x17044AC0: fmul dword ptr [ecx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17044AC2: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + 0x30); /* 0x17044AC4: fadd dword ptr [ecx + 0x30] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x17044AC7: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x17044ACA: fld dword ptr [ecx + 4] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x17044ACD: fmul dword ptr [edx] */
    fp_push(*(float*)&MEM32(ecx + 0x14)); /* 0x17044ACF: fld dword ptr [ecx + 0x14] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x17044AD2: fmul dword ptr [edx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17044AD5: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x24)); /* 0x17044AD7: fld dword ptr [ecx + 0x24] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x17044ADA: fmul dword ptr [edx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17044ADD: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + 0x34); /* 0x17044ADF: fadd dword ptr [ecx + 0x34] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x17044AE2: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(edx + 0x8)); /* 0x17044AE5: fld dword ptr [edx + 8] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x28); /* 0x17044AE8: fmul dword ptr [ecx + 0x28] */
    fp_push(*(float*)&MEM32(edx)); /* 0x17044AEB: fld dword ptr [edx] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x17044AED: fmul dword ptr [ecx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17044AF0: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x17044AF2: fld dword ptr [edx + 4] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x18); /* 0x17044AF5: fmul dword ptr [ecx + 0x18] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17044AF8: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + 0x38); /* 0x17044AFA: fadd dword ptr [ecx + 0x38] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x17044AFD: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ecx + 0xC)); /* 0x17044B00: fld dword ptr [ecx + 0xc] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x17044B03: fmul dword ptr [edx] */
    fp_push(*(float*)&MEM32(ecx + 0x1C)); /* 0x17044B05: fld dword ptr [ecx + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x17044B08: fmul dword ptr [edx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17044B0B: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x2C)); /* 0x17044B0D: fld dword ptr [ecx + 0x2c] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x17044B10: fmul dword ptr [edx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17044B13: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + 0x3C); /* 0x17044B15: fadd dword ptr [ecx + 0x3c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17044B18: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17044B19: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x17044B1A: fstp dword ptr [ebp + 8] */
    fp_push(1.0); /* 0x17044B1D: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x17044B1F: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x17044B23: fld dword ptr [ebp + 8] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17044B26: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17044B27: fstp dword ptr [esp] */
    RECOMP_CALL(sub_1704063B); /* 0x17044B2A: call 0x1704063b */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x17044B2F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17044B4C; /* 0x17044B31: jne 0x17044b4c */
L_17044B33:
    fp_push(1.0); /* 0x17044B33: fld1  */
    _st[0] /= (double)*(float*)ADDR(ebp + 0x8); /* 0x17044B35: fdiv dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x17044B38: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ebx); /* 0x17044B3A: fmul dword ptr [ebx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx) = _v; } /* 0x17044B3C: fstp dword ptr [ebx] */
    fp_push(_st[0]); /* 0x17044B3E: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x4); /* 0x17044B40: fmul dword ptr [ebx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0x4) = _v; } /* 0x17044B43: fstp dword ptr [ebx + 4] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x8); /* 0x17044B46: fmul dword ptr [ebx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0x8) = _v; } /* 0x17044B49: fstp dword ptr [ebx + 8] */
L_17044B4C:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + 0x14); /* 0x17044B4C: add edx, dword ptr [ebp + 0x14] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + 0xC); /* 0x17044B4F: add ebx, dword ptr [ebp + 0xc] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) - 1; /* 0x17044B52: dec dword ptr [ebp + 0x1c] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17044AA9; /* 0x17044B55: jne 0x17044aa9 */
L_17044B5B:
    edi = POP32_VAL(esp); /* 0x17044B5B: pop edi */
    esi = POP32_VAL(esp); /* 0x17044B5C: pop esi */
L_17044B5D:
    eax = MEM32(ebp + (-0x4)); /* 0x17044B5D: mov eax, dword ptr [ebp - 4] */
    ebx = POP32_VAL(esp); /* 0x17044B60: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17044B61: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x17044B62: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_17044B6A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17044B6Au);

L_17044B6A:
    edi = edi; /* 0x17044B6A: mov edi, edi */
    PUSH32(esp, ebx); /* 0x17044B6C: push ebx */
    ebx = esp; /* 0x17044B6D: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x17044B6F: push ecx */
    PUSH32(esp, ecx); /* 0x17044B70: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x17044B71: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x17044B74: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x17044B77: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x17044B78: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x17044B7B: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x17044B7F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x58u; /* 0x17044B81: sub esp, 0x58 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17044B84: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x17044B86: push esi */
    PUSH32(esp, edi); /* 0x17044B87: push edi */
    edi = MEM32(ebx + 0x1C); /* 0x17044B88: mov edi, dword ptr [ebx + 0x1c] */
    /* test edi, edi */ /* 0x17044B8B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x17044B8D: setne al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x17044B90: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ebp + (-0x50); /* 0x17044B92: lea esi, [ebp - 0x50] */
    if (1u) _cf = (((eax) >> 31) & 1u); /* 0x17044B95: shl eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 1u; /* 0x17044B95: shl eax, 1 */
    /* cmp MEM32(ebx + 0x18), ecx */ /* 0x17044B97: cmp dword ptr [ebx + 0x18], ecx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x18)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x17044B9A: setne cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17044B9D: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x17044B9F: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebx + 0x14); /* 0x17044BA1: mov ecx, dword ptr [ebx + 0x14] */
    if (1u) _cf = (((eax) >> 31) & 1u); /* 0x17044BA4: shl eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 1u; /* 0x17044BA4: shl eax, 1 */
    /* test ecx, ecx */ /* 0x17044BA6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(edx, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x17044BA8: setne dl */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x17044BAB: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 7 */ /* 0x17044BAD: cmp eax, 7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_17044C48; /* 0x17044BB0: ja 0x17044c48 */
L_17044BB6:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x17044CDC)); goto _ljump; }
L_17044BBD:
    fp_push(0.0); /* 0x17044BBD: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x17044BBF: fstp dword ptr [ebp - 0x18] */
    fp_push(0.0); /* 0x17044BC2: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x17044BC4: fstp dword ptr [ebp - 0x1c] */
    fp_push(0.0); /* 0x17044BC7: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x17044BC9: fstp dword ptr [ebp - 0x20] */
    fp_push(0.0); /* 0x17044BCC: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x17044BCE: fstp dword ptr [ebp - 0x24] */
    fp_push(0.0); /* 0x17044BD1: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x17044BD3: fstp dword ptr [ebp - 0x2c] */
    fp_push(0.0); /* 0x17044BD6: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x17044BD8: fstp dword ptr [ebp - 0x30] */
    fp_push(0.0); /* 0x17044BDB: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x17044BDD: fstp dword ptr [ebp - 0x34] */
    fp_push(0.0); /* 0x17044BE0: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x17044BE2: fstp dword ptr [ebp - 0x38] */
    fp_push(0.0); /* 0x17044BE5: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x17044BE7: fstp dword ptr [ebp - 0x40] */
    fp_push(0.0); /* 0x17044BEA: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x17044BEC: fstp dword ptr [ebp - 0x44] */
    fp_push(0.0); /* 0x17044BEF: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x48)) = _v; } /* 0x17044BF1: fstp dword ptr [ebp - 0x48] */
    fp_push(0.0); /* 0x17044BF4: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4C)) = _v; } /* 0x17044BF6: fstp dword ptr [ebp - 0x4c] */
    fp_push(1.0); /* 0x17044BF9: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x17044BFB: fstp dword ptr [ebp - 0x14] */
    fp_push(1.0); /* 0x17044BFE: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x17044C00: fstp dword ptr [ebp - 0x28] */
    fp_push(1.0); /* 0x17044C03: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x17044C05: fstp dword ptr [ebp - 0x3c] */
    fp_push(1.0); /* 0x17044C08: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x17044C0A: fstp dword ptr [ebp - 0x50] */
    goto L_17044C48; /* 0x17044C0D: jmp 0x17044c48 */
L_17044C0F:
    esi = ecx; /* 0x17044C0F: mov esi, ecx */
    goto L_17044C48; /* 0x17044C11: jmp 0x17044c48 */
L_17044C13:
    esi = MEM32(ebx + 0x18); /* 0x17044C13: mov esi, dword ptr [ebx + 0x18] */
    goto L_17044C48; /* 0x17044C16: jmp 0x17044c48 */
L_17044C18:
    PUSH32(esp, ecx); /* 0x17044C18: push ecx */
    PUSH32(esp, MEM32(ebx + 0x18)); /* 0x17044C19: push dword ptr [ebx + 0x18] */
    goto L_17044C3F; /* 0x17044C1C: jmp 0x17044c3f */
L_17044C1E:
    esi = edi; /* 0x17044C1E: mov esi, edi */
    goto L_17044C48; /* 0x17044C20: jmp 0x17044c48 */
L_17044C22:
    PUSH32(esp, ecx); /* 0x17044C22: push ecx */
    goto L_17044C28; /* 0x17044C23: jmp 0x17044c28 */
L_17044C25:
    PUSH32(esp, MEM32(ebx + 0x18)); /* 0x17044C25: push dword ptr [ebx + 0x18] */
L_17044C28:
    PUSH32(esp, edi); /* 0x17044C28: push edi */
    goto L_17044C3F; /* 0x17044C29: jmp 0x17044c3f */
L_17044C2B:
    PUSH32(esp, MEM32(ebx + 0x18)); /* 0x17044C2B: push dword ptr [ebx + 0x18] */
    eax = ebp + (-0x50); /* 0x17044C2E: lea eax, [ebp - 0x50] */
    PUSH32(esp, edi); /* 0x17044C31: push edi */
    PUSH32(esp, eax); /* 0x17044C32: push eax */
    RECOMP_CALL(sub_17041794); /* 0x17044C33: call 0x17041794 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebx + 0x14)); /* 0x17044C38: push dword ptr [ebx + 0x14] */
    eax = ebp + (-0x50); /* 0x17044C3B: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x17044C3E: push eax */
L_17044C3F:
    eax = ebp + (-0x50); /* 0x17044C3F: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x17044C42: push eax */
    RECOMP_CALL(sub_17041794); /* 0x17044C43: call 0x17041794 */
    RECOMP_FLAGS_IN();
L_17044C48:
    PUSH32(esp, esi); /* 0x17044C48: push esi */
    PUSH32(esp, MEM32(ebx + 0xC)); /* 0x17044C49: push dword ptr [ebx + 0xc] */
    esi = MEM32(ebx + 0x8); /* 0x17044C4C: mov esi, dword ptr [ebx + 8] */
    PUSH32(esp, esi); /* 0x17044C4F: push esi */
    RECOMP_CALL(sub_17040E7B); /* 0x17044C50: call 0x17040e7b */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x10); /* 0x17044C55: mov eax, dword ptr [ebx + 0x10] */
    /* test eax, eax */ /* 0x17044C58: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17044CCF; /* 0x17044C5A: je 0x17044ccf */
L_17044C5C:
    fp_push(*(float*)&MEM32(esi)); /* 0x17044C5C: fld dword ptr [esi] */
    ecx = MEM32(eax + 0x8); /* 0x17044C5E: mov ecx, dword ptr [eax + 8] */
    /* test ecx, ecx */ /* 0x17044C61: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] += (double)*(float*)ADDR(0x17001424); /* 0x17044C63: fadd dword ptr [0x17001424] */
    fp_push((double)(int32_t)MEM32(eax + 0x8)); /* 0x17044C69: fild dword ptr [eax + 8] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_17044C74; /* 0x17044C6C: jge 0x17044c74 */
L_17044C6E:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x17044C6E: fadd dword ptr [0x1700142c] */
L_17044C74:
    ecx = MEM32(eax); /* 0x17044C74: mov ecx, dword ptr [eax] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x17044C76: fmulp st(1) */
    /* test ecx, ecx */ /* 0x17044C78: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] *= (double)*(float*)ADDR(0x1700141C); /* 0x17044C7A: fmul dword ptr [0x1700141c] */
    fp_push((double)(int32_t)MEM32(eax)); /* 0x17044C80: fild dword ptr [eax] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_17044C8A; /* 0x17044C82: jge 0x17044c8a */
L_17044C84:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x17044C84: fadd dword ptr [0x1700142c] */
L_17044C8A:
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17044C8A: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x17044C8C: fstp dword ptr [esi] */
    ecx = MEM32(eax + 0xC); /* 0x17044C8E: mov ecx, dword ptr [eax + 0xc] */
    /* test ecx, ecx */ /* 0x17044C91: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(1.0); /* 0x17044C93: fld1  */
    _st[0] -= (double)*(float*)ADDR(esi + 0x4); /* 0x17044C95: fsub dword ptr [esi + 4] */
    fp_push((double)(int32_t)MEM32(eax + 0xC)); /* 0x17044C98: fild dword ptr [eax + 0xc] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_17044CA3; /* 0x17044C9B: jge 0x17044ca3 */
L_17044C9D:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x17044C9D: fadd dword ptr [0x1700142c] */
L_17044CA3:
    ecx = MEM32(eax + 0x4); /* 0x17044CA3: mov ecx, dword ptr [eax + 4] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x17044CA6: fmulp st(1) */
    /* test ecx, ecx */ /* 0x17044CA8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] *= (double)*(float*)ADDR(0x1700141C); /* 0x17044CAA: fmul dword ptr [0x1700141c] */
    fp_push((double)(int32_t)MEM32(eax + 0x4)); /* 0x17044CB0: fild dword ptr [eax + 4] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_17044CBB; /* 0x17044CB3: jge 0x17044cbb */
L_17044CB5:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x17044CB5: fadd dword ptr [0x1700142c] */
L_17044CBB:
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17044CBB: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x17044CBD: fstp dword ptr [esi + 4] */
    fp_push(*(float*)&MEM32(eax + 0x14)); /* 0x17044CC0: fld dword ptr [eax + 0x14] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x10); /* 0x17044CC3: fsub dword ptr [eax + 0x10] */
    _st[0] *= (double)*(float*)ADDR(esi + 0x8); /* 0x17044CC6: fmul dword ptr [esi + 8] */
    _st[0] += (double)*(float*)ADDR(eax + 0x10); /* 0x17044CC9: fadd dword ptr [eax + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x8) = _v; } /* 0x17044CCC: fstp dword ptr [esi + 8] */
L_17044CCF:
    edi = POP32_VAL(esp); /* 0x17044CCF: pop edi */
    eax = esi; /* 0x17044CD0: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x17044CD2: pop esi */
    esp = ebp; /* 0x17044CD3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x17044CD5: pop ebp */
    esp = ebx; /* 0x17044CD6: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x17044CD8: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x17044CD9: ret 0x18 */
  _ljump:
    switch (_itail_tgt) {
      case 0x17044BBDu: goto L_17044BBD;
      case 0x17044C0Fu: goto L_17044C0F;
      case 0x17044C13u: goto L_17044C13;
      case 0x17044C18u: goto L_17044C18;
      case 0x17044C1Eu: goto L_17044C1E;
      case 0x17044C22u: goto L_17044C22;
      case 0x17044C25u: goto L_17044C25;
      case 0x17044C2Bu: goto L_17044C2B;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17044D01(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17044D01u);

L_17044D01:
    edi = edi; /* 0x17044D01: mov edi, edi */
    PUSH32(esp, ebx); /* 0x17044D03: push ebx */
    ebx = esp; /* 0x17044D04: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x17044D06: push ecx */
    PUSH32(esp, ecx); /* 0x17044D07: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x17044D08: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x17044D0B: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x17044D0E: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x17044D0F: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x17044D12: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x17044D16: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x98u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x98u; /* 0x17044D18: sub esp, 0x98 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17044D1E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x17044D20: push esi */
    PUSH32(esp, edi); /* 0x17044D21: push edi */
    edi = MEM32(ebx + 0x24); /* 0x17044D22: mov edi, dword ptr [ebx + 0x24] */
    /* test edi, edi */ /* 0x17044D25: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x17044D27: setne al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x17044D2A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = ebp + (-0x50); /* 0x17044D2C: lea esi, [ebp - 0x50] */
    if (1u) _cf = (((eax) >> 31) & 1u); /* 0x17044D2F: shl eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 1u; /* 0x17044D2F: shl eax, 1 */
    /* cmp MEM32(ebx + 0x20), ecx */ /* 0x17044D31: cmp dword ptr [ebx + 0x20], ecx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x20)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x17044D34: setne cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17044D37: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x17044D39: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = MEM32(ebx + 0x1C); /* 0x17044D3B: mov ecx, dword ptr [ebx + 0x1c] */
    if (1u) _cf = (((eax) >> 31) & 1u); /* 0x17044D3E: shl eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 1u; /* 0x17044D3E: shl eax, 1 */
    /* test ecx, ecx */ /* 0x17044D40: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(edx, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x17044D42: setne dl */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x17044D45: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 7 */ /* 0x17044D47: cmp eax, 7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_17044DE2; /* 0x17044D4A: ja 0x17044de2 */
L_17044D50:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x17044ED6)); goto _ljump; }
L_17044D57:
    fp_push(0.0); /* 0x17044D57: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x17044D59: fstp dword ptr [ebp - 0x18] */
    fp_push(0.0); /* 0x17044D5C: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x17044D5E: fstp dword ptr [ebp - 0x1c] */
    fp_push(0.0); /* 0x17044D61: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x17044D63: fstp dword ptr [ebp - 0x20] */
    fp_push(0.0); /* 0x17044D66: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x17044D68: fstp dword ptr [ebp - 0x24] */
    fp_push(0.0); /* 0x17044D6B: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x17044D6D: fstp dword ptr [ebp - 0x2c] */
    fp_push(0.0); /* 0x17044D70: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x17044D72: fstp dword ptr [ebp - 0x30] */
    fp_push(0.0); /* 0x17044D75: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x17044D77: fstp dword ptr [ebp - 0x34] */
    fp_push(0.0); /* 0x17044D7A: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x17044D7C: fstp dword ptr [ebp - 0x38] */
    fp_push(0.0); /* 0x17044D7F: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x17044D81: fstp dword ptr [ebp - 0x40] */
    fp_push(0.0); /* 0x17044D84: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x17044D86: fstp dword ptr [ebp - 0x44] */
    fp_push(0.0); /* 0x17044D89: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x48)) = _v; } /* 0x17044D8B: fstp dword ptr [ebp - 0x48] */
    fp_push(0.0); /* 0x17044D8E: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4C)) = _v; } /* 0x17044D90: fstp dword ptr [ebp - 0x4c] */
    fp_push(1.0); /* 0x17044D93: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x17044D95: fstp dword ptr [ebp - 0x14] */
    fp_push(1.0); /* 0x17044D98: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x17044D9A: fstp dword ptr [ebp - 0x28] */
    fp_push(1.0); /* 0x17044D9D: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x17044D9F: fstp dword ptr [ebp - 0x3c] */
    fp_push(1.0); /* 0x17044DA2: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x17044DA4: fstp dword ptr [ebp - 0x50] */
    goto L_17044DE2; /* 0x17044DA7: jmp 0x17044de2 */
L_17044DA9:
    esi = ecx; /* 0x17044DA9: mov esi, ecx */
    goto L_17044DE2; /* 0x17044DAB: jmp 0x17044de2 */
L_17044DAD:
    esi = MEM32(ebx + 0x20); /* 0x17044DAD: mov esi, dword ptr [ebx + 0x20] */
    goto L_17044DE2; /* 0x17044DB0: jmp 0x17044de2 */
L_17044DB2:
    PUSH32(esp, ecx); /* 0x17044DB2: push ecx */
    PUSH32(esp, MEM32(ebx + 0x20)); /* 0x17044DB3: push dword ptr [ebx + 0x20] */
    goto L_17044DD9; /* 0x17044DB6: jmp 0x17044dd9 */
L_17044DB8:
    esi = edi; /* 0x17044DB8: mov esi, edi */
    goto L_17044DE2; /* 0x17044DBA: jmp 0x17044de2 */
L_17044DBC:
    PUSH32(esp, ecx); /* 0x17044DBC: push ecx */
    goto L_17044DC2; /* 0x17044DBD: jmp 0x17044dc2 */
L_17044DBF:
    PUSH32(esp, MEM32(ebx + 0x20)); /* 0x17044DBF: push dword ptr [ebx + 0x20] */
L_17044DC2:
    PUSH32(esp, edi); /* 0x17044DC2: push edi */
    goto L_17044DD9; /* 0x17044DC3: jmp 0x17044dd9 */
L_17044DC5:
    PUSH32(esp, MEM32(ebx + 0x20)); /* 0x17044DC5: push dword ptr [ebx + 0x20] */
    eax = ebp + (-0x50); /* 0x17044DC8: lea eax, [ebp - 0x50] */
    PUSH32(esp, edi); /* 0x17044DCB: push edi */
    PUSH32(esp, eax); /* 0x17044DCC: push eax */
    RECOMP_CALL(sub_17041794); /* 0x17044DCD: call 0x17041794 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebx + 0x1C)); /* 0x17044DD2: push dword ptr [ebx + 0x1c] */
    eax = ebp + (-0x50); /* 0x17044DD5: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x17044DD8: push eax */
L_17044DD9:
    eax = ebp + (-0x50); /* 0x17044DD9: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x17044DDC: push eax */
    RECOMP_CALL(sub_17041794); /* 0x17044DDD: call 0x17041794 */
    RECOMP_FLAGS_IN();
L_17044DE2:
    eax = MEM32(ebx + 0x18); /* 0x17044DE2: mov eax, dword ptr [ebx + 0x18] */
    /* test eax, eax */ /* 0x17044DE5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17044EB6; /* 0x17044DE7: je 0x17044eb6 */
L_17044DED:
    ecx = MEM32(eax + 0x8); /* 0x17044DED: mov ecx, dword ptr [eax + 8] */
    fp_push((double)(int32_t)MEM32(eax + 0x8)); /* 0x17044DF0: fild dword ptr [eax + 8] */
    /* test ecx, ecx */ /* 0x17044DF3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_17044DFD; /* 0x17044DF5: jge 0x17044dfd */
L_17044DF7:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x17044DF7: fadd dword ptr [0x1700142c] */
L_17044DFD:
    _st[0] *= (double)*(float*)ADDR(0x1700141C); /* 0x17044DFD: fmul dword ptr [0x1700141c] */
    ecx = MEM32(eax + 0xC); /* 0x17044E03: mov ecx, dword ptr [eax + 0xc] */
    /* test ecx, ecx */ /* 0x17044E06: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x90)) = _v; } /* 0x17044E08: fst dword ptr [ebp - 0x90] */
    fp_push(0.0); /* 0x17044E0E: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8C)) = _v; } /* 0x17044E10: fstp dword ptr [ebp - 0x8c] */
    fp_push(0.0); /* 0x17044E16: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x88)) = _v; } /* 0x17044E18: fstp dword ptr [ebp - 0x88] */
    fp_push(0.0); /* 0x17044E1E: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x84)) = _v; } /* 0x17044E20: fstp dword ptr [ebp - 0x84] */
    fp_push(0.0); /* 0x17044E26: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x80)) = _v; } /* 0x17044E28: fstp dword ptr [ebp - 0x80] */
    fp_push((double)(int32_t)MEM32(eax + 0xC)); /* 0x17044E2B: fild dword ptr [eax + 0xc] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_17044E36; /* 0x17044E2E: jge 0x17044e36 */
L_17044E30:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x17044E30: fadd dword ptr [0x1700142c] */
L_17044E36:
    fp_push(*(float*)&MEM32(0x1700194C)); /* 0x17044E36: fld dword ptr [0x1700194c] */
    ecx = MEM32(eax); /* 0x17044E3C: mov ecx, dword ptr [eax] */
    /* test ecx, ecx */ /* 0x17044E3E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] *= _st[1]; /* 0x17044E40: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x7C)) = _v; } /* 0x17044E42: fstp dword ptr [ebp - 0x7c] */
    fp_push(0.0); /* 0x17044E45: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x78)) = _v; } /* 0x17044E47: fstp dword ptr [ebp - 0x78] */
    fp_push(0.0); /* 0x17044E4A: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x74)) = _v; } /* 0x17044E4C: fstp dword ptr [ebp - 0x74] */
    fp_push(0.0); /* 0x17044E4F: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x70)) = _v; } /* 0x17044E51: fstp dword ptr [ebp - 0x70] */
    fp_push(0.0); /* 0x17044E54: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x6C)) = _v; } /* 0x17044E56: fstp dword ptr [ebp - 0x6c] */
    fp_push(*(float*)&MEM32(eax + 0x14)); /* 0x17044E59: fld dword ptr [eax + 0x14] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x10); /* 0x17044E5C: fsub dword ptr [eax + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x68)) = _v; } /* 0x17044E5F: fstp dword ptr [ebp - 0x68] */
    fp_push(0.0); /* 0x17044E62: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x64)) = _v; } /* 0x17044E64: fstp dword ptr [ebp - 0x64] */
    fp_push((double)(int32_t)MEM32(eax)); /* 0x17044E67: fild dword ptr [eax] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_17044E71; /* 0x17044E69: jge 0x17044e71 */
L_17044E6B:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x17044E6B: fadd dword ptr [0x1700142c] */
L_17044E71:
    ecx = MEM32(eax + 0x4); /* 0x17044E71: mov ecx, dword ptr [eax + 4] */
    _st[0] += _st[2]; /* 0x17044E74: fadd st(2) */
    /* test ecx, ecx */ /* 0x17044E76: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x60)) = _v; } /* 0x17044E78: fstp dword ptr [ebp - 0x60] */
    fp_push((double)(int32_t)MEM32(eax + 0x4)); /* 0x17044E7B: fild dword ptr [eax + 4] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_17044E86; /* 0x17044E7E: jge 0x17044e86 */
L_17044E80:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x17044E80: fadd dword ptr [0x1700142c] */
L_17044E86:
    eax = MEM32(eax + 0x10); /* 0x17044E86: mov eax, dword ptr [eax + 0x10] */
    fp_push(_st[1]); /* 0x17044E89: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(0x1700141C); /* 0x17044E8B: fmul dword ptr [0x1700141c] */
    MEM32(ebp + (-0x58)) = eax; /* 0x17044E91: mov dword ptr [ebp - 0x58], eax */
    eax = ebp + (-0x90); /* 0x17044E94: lea eax, [ebp - 0x90] */
    PUSH32(esp, eax); /* 0x17044E9A: push eax */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17044E9B: faddp st(1) */
    PUSH32(esp, esi); /* 0x17044E9D: push esi */
    eax = ebp + (-0x50); /* 0x17044E9E: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x17044EA1: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x5C)) = _v; } /* 0x17044EA2: fstp dword ptr [ebp - 0x5c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17044EA5: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17044EA7: fstp st(0) */
    fp_push(1.0); /* 0x17044EA9: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x54)) = _v; } /* 0x17044EAB: fstp dword ptr [ebp - 0x54] */
    RECOMP_CALL(sub_17041794); /* 0x17044EAE: call 0x17041794 */
    RECOMP_FLAGS_IN();
    esi = ebp + (-0x50); /* 0x17044EB3: lea esi, [ebp - 0x50] */
L_17044EB6:
    PUSH32(esp, MEM32(ebx + 0x28)); /* 0x17044EB6: push dword ptr [ebx + 0x28] */
    PUSH32(esp, esi); /* 0x17044EB9: push esi */
    PUSH32(esp, MEM32(ebx + 0x14)); /* 0x17044EBA: push dword ptr [ebx + 0x14] */
    PUSH32(esp, MEM32(ebx + 0x10)); /* 0x17044EBD: push dword ptr [ebx + 0x10] */
    PUSH32(esp, MEM32(ebx + 0xC)); /* 0x17044EC0: push dword ptr [ebx + 0xc] */
    PUSH32(esp, MEM32(ebx + 0x8)); /* 0x17044EC3: push dword ptr [ebx + 8] */
    RECOMP_CALL(sub_17040E9E); /* 0x17044EC6: call 0x17040e9e */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x17044ECB: pop edi */
    esi = POP32_VAL(esp); /* 0x17044ECC: pop esi */
    esp = ebp; /* 0x17044ECD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x17044ECF: pop ebp */
    esp = ebx; /* 0x17044ED0: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x17044ED2: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x17044ED3: ret 0x24 */
  _ljump:
    switch (_itail_tgt) {
      case 0x17044D57u: goto L_17044D57;
      case 0x17044DA9u: goto L_17044DA9;
      case 0x17044DADu: goto L_17044DAD;
      case 0x17044DB2u: goto L_17044DB2;
      case 0x17044DB8u: goto L_17044DB8;
      case 0x17044DBCu: goto L_17044DBC;
      case 0x17044DBFu: goto L_17044DBF;
      case 0x17044DC5u: goto L_17044DC5;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17044EFB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17044EFBu);

L_17044EFB:
    edi = edi; /* 0x17044EFB: mov edi, edi */
    PUSH32(esp, ebx); /* 0x17044EFD: push ebx */
    ebx = esp; /* 0x17044EFE: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x17044F00: push ecx */
    PUSH32(esp, ecx); /* 0x17044F01: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x17044F02: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x17044F05: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x17044F08: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x17044F09: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x17044F0C: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x17044F10: mov ebp, esp */
    ecx = MEM32(ebx + 0x18); /* 0x17044F12: mov ecx, dword ptr [ebx + 0x18] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x58u; /* 0x17044F15: sub esp, 0x58 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17044F18: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x17044F1A: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17044F1B: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x17044F1D: push edi */
    edi = MEM32(ebx + 0x1C); /* 0x17044F1E: mov edi, dword ptr [ebx + 0x1c] */
    /* cmp edi, esi */ /* 0x17044F21: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x17044F23: setne al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17044F26: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (1u) _cf = (((eax) >> 31) & 1u); /* 0x17044F28: shl eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 1u; /* 0x17044F28: shl eax, 1 */
    /* cmp ecx, esi */ /* 0x17044F2A: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(edx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x17044F2C: setne dl */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x17044F2F: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x17044F31: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (1u) _cf = (((eax) >> 31) & 1u); /* 0x17044F33: shl eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 1u; /* 0x17044F33: shl eax, 1 */
    /* cmp MEM32(ebx + 0x14), esi */ /* 0x17044F35: cmp dword ptr [ebx + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(edx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x17044F38: setne dl */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x17044F3B: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 7 */ /* 0x17044F3D: cmp eax, 7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_17044FE2; /* 0x17044F40: ja 0x17044fe2 */
L_17044F46:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x17045082)); goto _ljump; }
L_17044F4D:
    fp_push(0.0); /* 0x17044F4D: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x17044F4F: fstp dword ptr [ebp - 0x18] */
    fp_push(0.0); /* 0x17044F52: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x17044F54: fstp dword ptr [ebp - 0x1c] */
    fp_push(0.0); /* 0x17044F57: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x17044F59: fstp dword ptr [ebp - 0x20] */
    fp_push(0.0); /* 0x17044F5C: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x17044F5E: fstp dword ptr [ebp - 0x24] */
    fp_push(0.0); /* 0x17044F61: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x17044F63: fstp dword ptr [ebp - 0x2c] */
    fp_push(0.0); /* 0x17044F66: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x17044F68: fstp dword ptr [ebp - 0x30] */
    fp_push(0.0); /* 0x17044F6B: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x17044F6D: fstp dword ptr [ebp - 0x34] */
    fp_push(0.0); /* 0x17044F70: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x17044F72: fstp dword ptr [ebp - 0x38] */
    fp_push(0.0); /* 0x17044F75: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x17044F77: fstp dword ptr [ebp - 0x40] */
    fp_push(0.0); /* 0x17044F7A: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x17044F7C: fstp dword ptr [ebp - 0x44] */
    fp_push(0.0); /* 0x17044F7F: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x48)) = _v; } /* 0x17044F81: fstp dword ptr [ebp - 0x48] */
    fp_push(0.0); /* 0x17044F84: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4C)) = _v; } /* 0x17044F86: fstp dword ptr [ebp - 0x4c] */
    fp_push(1.0); /* 0x17044F89: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x17044F8B: fstp dword ptr [ebp - 0x14] */
    fp_push(1.0); /* 0x17044F8E: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x17044F90: fstp dword ptr [ebp - 0x28] */
    fp_push(1.0); /* 0x17044F93: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x17044F95: fstp dword ptr [ebp - 0x3c] */
    fp_push(1.0); /* 0x17044F98: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x17044F9A: fstp dword ptr [ebp - 0x50] */
    goto L_17044FE2; /* 0x17044F9D: jmp 0x17044fe2 */
L_17044F9F:
    PUSH32(esp, MEM32(ebx + 0x14)); /* 0x17044F9F: push dword ptr [ebx + 0x14] */
    goto L_17044FD8; /* 0x17044FA2: jmp 0x17044fd8 */
L_17044FA4:
    PUSH32(esp, ecx); /* 0x17044FA4: push ecx */
    goto L_17044FD8; /* 0x17044FA5: jmp 0x17044fd8 */
L_17044FA7:
    PUSH32(esp, MEM32(ebx + 0x14)); /* 0x17044FA7: push dword ptr [ebx + 0x14] */
    PUSH32(esp, ecx); /* 0x17044FAA: push ecx */
    goto L_17044FCB; /* 0x17044FAB: jmp 0x17044fcb */
L_17044FAD:
    PUSH32(esp, edi); /* 0x17044FAD: push edi */
    goto L_17044FD8; /* 0x17044FAE: jmp 0x17044fd8 */
L_17044FB0:
    PUSH32(esp, MEM32(ebx + 0x14)); /* 0x17044FB0: push dword ptr [ebx + 0x14] */
    goto L_17044FB6; /* 0x17044FB3: jmp 0x17044fb6 */
L_17044FB5:
    PUSH32(esp, ecx); /* 0x17044FB5: push ecx */
L_17044FB6:
    PUSH32(esp, edi); /* 0x17044FB6: push edi */
    goto L_17044FCB; /* 0x17044FB7: jmp 0x17044fcb */
L_17044FB9:
    PUSH32(esp, ecx); /* 0x17044FB9: push ecx */
    PUSH32(esp, edi); /* 0x17044FBA: push edi */
    eax = ebp + (-0x50); /* 0x17044FBB: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x17044FBE: push eax */
    RECOMP_CALL(sub_17041794); /* 0x17044FBF: call 0x17041794 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebx + 0x14)); /* 0x17044FC4: push dword ptr [ebx + 0x14] */
    eax = ebp + (-0x50); /* 0x17044FC7: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x17044FCA: push eax */
L_17044FCB:
    eax = ebp + (-0x50); /* 0x17044FCB: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x17044FCE: push eax */
    RECOMP_CALL(sub_17041794); /* 0x17044FCF: call 0x17041794 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x50); /* 0x17044FD4: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x17044FD7: push eax */
L_17044FD8:
    eax = ebp + (-0x50); /* 0x17044FD8: lea eax, [ebp - 0x50] */
    PUSH32(esp, esi); /* 0x17044FDB: push esi */
    PUSH32(esp, eax); /* 0x17044FDC: push eax */
    RECOMP_CALL(sub_17041CED); /* 0x17044FDD: call 0x17041ced */
    RECOMP_FLAGS_IN();
L_17044FE2:
    eax = MEM32(ebx + 0x10); /* 0x17044FE2: mov eax, dword ptr [ebx + 0x10] */
    /* cmp eax, esi */ /* 0x17044FE5: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17045065; /* 0x17044FE7: je 0x17045065 */
L_17044FE9:
    ecx = MEM32(eax); /* 0x17044FE9: mov ecx, dword ptr [eax] */
    fp_push((double)(int32_t)MEM32(eax)); /* 0x17044FEB: fild dword ptr [eax] */
    /* test ecx, ecx */ /* 0x17044FED: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_17044FF7; /* 0x17044FEF: jge 0x17044ff7 */
L_17044FF1:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x17044FF1: fadd dword ptr [0x1700142c] */
L_17044FF7:
    ecx = MEM32(ebx + 0xC); /* 0x17044FF7: mov ecx, dword ptr [ebx + 0xc] */
    _st[0] = (double)*(float*)ADDR(ecx) - _st[0]; /* 0x17044FFA: fsubr dword ptr [ecx] */
    edx = MEM32(eax + 0x8); /* 0x17044FFC: mov edx, dword ptr [eax + 8] */
    /* test edx, edx */ /* 0x17044FFF: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push((double)(int32_t)MEM32(eax + 0x8)); /* 0x17045001: fild dword ptr [eax + 8] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1704500C; /* 0x17045004: jge 0x1704500c */
L_17045006:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x17045006: fadd dword ptr [0x1700142c] */
L_1704500C:
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x1704500C: fdivp st(1) */
    esi = MEM32(ebx + 0x8); /* 0x1704500E: mov esi, dword ptr [ebx + 8] */
    _st[0] += _st[0]; /* 0x17045011: fadd st(0), st(0) */
    _st[0] -= (double)*(float*)ADDR(0x17001424); /* 0x17045013: fsub dword ptr [0x17001424] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x17045019: fstp dword ptr [esi] */
    edx = MEM32(eax + 0x4); /* 0x1704501B: mov edx, dword ptr [eax + 4] */
    /* test edx, edx */ /* 0x1704501E: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push((double)(int32_t)MEM32(eax + 0x4)); /* 0x17045020: fild dword ptr [eax + 4] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1704502B; /* 0x17045023: jge 0x1704502b */
L_17045025:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x17045025: fadd dword ptr [0x1700142c] */
L_1704502B:
    _st[0] = (double)*(float*)ADDR(ecx + 0x4) - _st[0]; /* 0x1704502B: fsubr dword ptr [ecx + 4] */
    edx = MEM32(eax + 0xC); /* 0x1704502E: mov edx, dword ptr [eax + 0xc] */
    /* test edx, edx */ /* 0x17045031: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push((double)(int32_t)MEM32(eax + 0xC)); /* 0x17045033: fild dword ptr [eax + 0xc] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1704503E; /* 0x17045036: jge 0x1704503e */
L_17045038:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x17045038: fadd dword ptr [0x1700142c] */
L_1704503E:
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x1704503E: fdivp st(1) */
    _st[0] += _st[0]; /* 0x17045040: fadd st(0), st(0) */
    _st[0] -= (double)*(float*)ADDR(0x17001424); /* 0x17045042: fsub dword ptr [0x17001424] */
    _st[0] = -_st[0]; /* 0x17045048: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x1704504A: fstp dword ptr [esi + 4] */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x1704504D: fld dword ptr [ecx + 8] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x10); /* 0x17045050: fsub dword ptr [eax + 0x10] */
    fp_push(*(float*)&MEM32(eax + 0x14)); /* 0x17045053: fld dword ptr [eax + 0x14] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x10); /* 0x17045056: fsub dword ptr [eax + 0x10] */
    eax = ebp + (-0x50); /* 0x17045059: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x1704505C: push eax */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x1704505D: fdivp st(1) */
    PUSH32(esp, esi); /* 0x1704505F: push esi */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x8) = _v; } /* 0x17045060: fstp dword ptr [esi + 8] */
    goto L_1704506F; /* 0x17045063: jmp 0x1704506f */
L_17045065:
    esi = MEM32(ebx + 0x8); /* 0x17045065: mov esi, dword ptr [ebx + 8] */
    eax = ebp + (-0x50); /* 0x17045068: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x1704506B: push eax */
    PUSH32(esp, MEM32(ebx + 0xC)); /* 0x1704506C: push dword ptr [ebx + 0xc] */
L_1704506F:
    PUSH32(esp, esi); /* 0x1704506F: push esi */
    RECOMP_CALL(sub_17040E7B); /* 0x17045070: call 0x17040e7b */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x17045075: pop edi */
    eax = esi; /* 0x17045076: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x17045078: pop esi */
    esp = ebp; /* 0x17045079: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1704507B: pop ebp */
    esp = ebx; /* 0x1704507C: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x1704507E: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1704507F: ret 0x18 */
  _ljump:
    switch (_itail_tgt) {
      case 0x17044F4Du: goto L_17044F4D;
      case 0x17044F9Fu: goto L_17044F9F;
      case 0x17044FA4u: goto L_17044FA4;
      case 0x17044FA7u: goto L_17044FA7;
      case 0x17044FADu: goto L_17044FAD;
      case 0x17044FB0u: goto L_17044FB0;
      case 0x17044FB5u: goto L_17044FB5;
      case 0x17044FB9u: goto L_17044FB9;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_170450A7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170450A7u);

L_170450A7:
    edi = edi; /* 0x170450A7: mov edi, edi */
    PUSH32(esp, ebx); /* 0x170450A9: push ebx */
    ebx = esp; /* 0x170450AA: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x170450AC: push ecx */
    PUSH32(esp, ecx); /* 0x170450AD: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x170450AE: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x170450B1: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x170450B4: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x170450B5: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x170450B8: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x170450BC: mov ebp, esp */
    ecx = MEM32(ebx + 0x20); /* 0x170450BE: mov ecx, dword ptr [ebx + 0x20] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xA8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xA8u; /* 0x170450C1: sub esp, 0xa8 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x170450C7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x170450C9: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x170450CA: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x170450CC: push edi */
    edi = MEM32(ebx + 0x24); /* 0x170450CD: mov edi, dword ptr [ebx + 0x24] */
    /* cmp edi, esi */ /* 0x170450D0: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x170450D2: setne al */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x170450D5: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (1u) _cf = (((eax) >> 31) & 1u); /* 0x170450D7: shl eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 1u; /* 0x170450D7: shl eax, 1 */
    /* cmp ecx, esi */ /* 0x170450D9: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(edx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x170450DB: setne dl */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x170450DE: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x170450E0: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (1u) _cf = (((eax) >> 31) & 1u); /* 0x170450E2: shl eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 1u; /* 0x170450E2: shl eax, 1 */
    /* cmp MEM32(ebx + 0x1C), esi */ /* 0x170450E4: cmp dword ptr [ebx + 0x1c], esi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x1C)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(edx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x170450E7: setne dl */
    _flag_a = (uint32_t)((eax | edx)); _flag_b = (uint32_t)((eax | edx));
    eax = eax | edx; /* 0x170450EA: or eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, 7 */ /* 0x170450EC: cmp eax, 7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_17045191; /* 0x170450EF: ja 0x17045191 */
L_170450F5:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x170452A8)); goto _ljump; }
L_170450FC:
    fp_push(0.0); /* 0x170450FC: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x170450FE: fstp dword ptr [ebp - 0x18] */
    fp_push(0.0); /* 0x17045101: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x17045103: fstp dword ptr [ebp - 0x1c] */
    fp_push(0.0); /* 0x17045106: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x17045108: fstp dword ptr [ebp - 0x20] */
    fp_push(0.0); /* 0x1704510B: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x1704510D: fstp dword ptr [ebp - 0x24] */
    fp_push(0.0); /* 0x17045110: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x17045112: fstp dword ptr [ebp - 0x2c] */
    fp_push(0.0); /* 0x17045115: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x17045117: fstp dword ptr [ebp - 0x30] */
    fp_push(0.0); /* 0x1704511A: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x1704511C: fstp dword ptr [ebp - 0x34] */
    fp_push(0.0); /* 0x1704511F: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x17045121: fstp dword ptr [ebp - 0x38] */
    fp_push(0.0); /* 0x17045124: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x17045126: fstp dword ptr [ebp - 0x40] */
    fp_push(0.0); /* 0x17045129: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x1704512B: fstp dword ptr [ebp - 0x44] */
    fp_push(0.0); /* 0x1704512E: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x48)) = _v; } /* 0x17045130: fstp dword ptr [ebp - 0x48] */
    fp_push(0.0); /* 0x17045133: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4C)) = _v; } /* 0x17045135: fstp dword ptr [ebp - 0x4c] */
    fp_push(1.0); /* 0x17045138: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x1704513A: fstp dword ptr [ebp - 0x14] */
    fp_push(1.0); /* 0x1704513D: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x1704513F: fstp dword ptr [ebp - 0x28] */
    fp_push(1.0); /* 0x17045142: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x17045144: fstp dword ptr [ebp - 0x3c] */
    fp_push(1.0); /* 0x17045147: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x17045149: fstp dword ptr [ebp - 0x50] */
    goto L_17045191; /* 0x1704514C: jmp 0x17045191 */
L_1704514E:
    PUSH32(esp, MEM32(ebx + 0x1C)); /* 0x1704514E: push dword ptr [ebx + 0x1c] */
    goto L_17045187; /* 0x17045151: jmp 0x17045187 */
L_17045153:
    PUSH32(esp, ecx); /* 0x17045153: push ecx */
    goto L_17045187; /* 0x17045154: jmp 0x17045187 */
L_17045156:
    PUSH32(esp, MEM32(ebx + 0x1C)); /* 0x17045156: push dword ptr [ebx + 0x1c] */
    PUSH32(esp, ecx); /* 0x17045159: push ecx */
    goto L_1704517A; /* 0x1704515A: jmp 0x1704517a */
L_1704515C:
    PUSH32(esp, edi); /* 0x1704515C: push edi */
    goto L_17045187; /* 0x1704515D: jmp 0x17045187 */
L_1704515F:
    PUSH32(esp, MEM32(ebx + 0x1C)); /* 0x1704515F: push dword ptr [ebx + 0x1c] */
    goto L_17045165; /* 0x17045162: jmp 0x17045165 */
L_17045164:
    PUSH32(esp, ecx); /* 0x17045164: push ecx */
L_17045165:
    PUSH32(esp, edi); /* 0x17045165: push edi */
    goto L_1704517A; /* 0x17045166: jmp 0x1704517a */
L_17045168:
    PUSH32(esp, ecx); /* 0x17045168: push ecx */
    PUSH32(esp, edi); /* 0x17045169: push edi */
    eax = ebp + (-0x50); /* 0x1704516A: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x1704516D: push eax */
    RECOMP_CALL(sub_17041794); /* 0x1704516E: call 0x17041794 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebx + 0x1C)); /* 0x17045173: push dword ptr [ebx + 0x1c] */
    eax = ebp + (-0x50); /* 0x17045176: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x17045179: push eax */
L_1704517A:
    eax = ebp + (-0x50); /* 0x1704517A: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x1704517D: push eax */
    RECOMP_CALL(sub_17041794); /* 0x1704517E: call 0x17041794 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x50); /* 0x17045183: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x17045186: push eax */
L_17045187:
    eax = ebp + (-0x50); /* 0x17045187: lea eax, [ebp - 0x50] */
    PUSH32(esp, esi); /* 0x1704518A: push esi */
    PUSH32(esp, eax); /* 0x1704518B: push eax */
    RECOMP_CALL(sub_17041CED); /* 0x1704518C: call 0x17041ced */
    RECOMP_FLAGS_IN();
L_17045191:
    eax = MEM32(ebx + 0x18); /* 0x17045191: mov eax, dword ptr [ebx + 0x18] */
    /* cmp eax, esi */ /* 0x17045194: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17045285; /* 0x17045196: je 0x17045285 */
L_1704519C:
    ecx = MEM32(eax + 0x8); /* 0x1704519C: mov ecx, dword ptr [eax + 8] */
    fp_push((double)(int32_t)MEM32(eax + 0x8)); /* 0x1704519F: fild dword ptr [eax + 8] */
    /* test ecx, ecx */ /* 0x170451A2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_170451AC; /* 0x170451A4: jge 0x170451ac */
L_170451A6:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x170451A6: fadd dword ptr [0x1700142c] */
L_170451AC:
    ecx = MEM32(eax + 0xC); /* 0x170451AC: mov ecx, dword ptr [eax + 0xc] */
    /* test ecx, ecx */ /* 0x170451AF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] = (double)*(float*)ADDR(0x170018CC) / _st[0]; /* 0x170451B1: fdivr dword ptr [0x170018cc] */
    fp_push((double)(int32_t)MEM32(eax + 0xC)); /* 0x170451B7: fild dword ptr [eax + 0xc] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_170451C2; /* 0x170451BA: jge 0x170451c2 */
L_170451BC:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x170451BC: fadd dword ptr [0x1700142c] */
L_170451C2:
    _st[0] = (double)*(float*)ADDR(0x170018CC) / _st[0]; /* 0x170451C2: fdivr dword ptr [0x170018cc] */
    ecx = MEM32(eax); /* 0x170451C8: mov ecx, dword ptr [eax] */
    /* test ecx, ecx */ /* 0x170451CA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(*(float*)&MEM32(0x17001424)); /* 0x170451CC: fld dword ptr [0x17001424] */
    fp_push(*(float*)&MEM32(eax + 0x14)); /* 0x170451D2: fld dword ptr [eax + 0x14] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x10); /* 0x170451D5: fsub dword ptr [eax + 0x10] */
    _st[0] = _st[1] / _st[0]; /* 0x170451D8: fdivr st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x170451DA: fst dword ptr [ebp - 4] */
    fp_push(_st[3]); /* 0x170451DD: fld st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xA0)) = _v; } /* 0x170451DF: fstp dword ptr [ebp - 0xa0] */
    fp_push(0.0); /* 0x170451E5: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x9C)) = _v; } /* 0x170451E7: fstp dword ptr [ebp - 0x9c] */
    fp_push(0.0); /* 0x170451ED: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x98)) = _v; } /* 0x170451EF: fstp dword ptr [ebp - 0x98] */
    fp_push(0.0); /* 0x170451F5: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x94)) = _v; } /* 0x170451F7: fstp dword ptr [ebp - 0x94] */
    fp_push(0.0); /* 0x170451FD: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x90)) = _v; } /* 0x170451FF: fstp dword ptr [ebp - 0x90] */
    fp_push(_st[2]); /* 0x17045205: fld st(2) */
    _st[0] = -_st[0]; /* 0x17045207: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8C)) = _v; } /* 0x17045209: fstp dword ptr [ebp - 0x8c] */
    fp_push(0.0); /* 0x1704520F: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x88)) = _v; } /* 0x17045211: fstp dword ptr [ebp - 0x88] */
    fp_push(0.0); /* 0x17045217: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x84)) = _v; } /* 0x17045219: fstp dword ptr [ebp - 0x84] */
    fp_push(0.0); /* 0x1704521F: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x80)) = _v; } /* 0x17045221: fstp dword ptr [ebp - 0x80] */
    fp_push(0.0); /* 0x17045224: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x7C)) = _v; } /* 0x17045226: fstp dword ptr [ebp - 0x7c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x78)) = _v; } /* 0x17045229: fstp dword ptr [ebp - 0x78] */
    fp_push(0.0); /* 0x1704522C: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x74)) = _v; } /* 0x1704522E: fstp dword ptr [ebp - 0x74] */
    fp_push((double)(int32_t)MEM32(eax)); /* 0x17045231: fild dword ptr [eax] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1704523B; /* 0x17045233: jge 0x1704523b */
L_17045235:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x17045235: fadd dword ptr [0x1700142c] */
L_1704523B:
    ecx = MEM32(eax + 0x4); /* 0x1704523B: mov ecx, dword ptr [eax + 4] */
    /* test ecx, ecx */ /* 0x1704523E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] *= _st[3]; /* 0x17045240: fmul st(3) */
    _st[0] = -_st[0]; /* 0x17045242: fchs  */
    _st[0] -= _st[1]; /* 0x17045244: fsub st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x70)) = _v; } /* 0x17045246: fstp dword ptr [ebp - 0x70] */
    fp_push((double)(int32_t)MEM32(eax + 0x4)); /* 0x17045249: fild dword ptr [eax + 4] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_17045254; /* 0x1704524C: jge 0x17045254 */
L_1704524E:
    _st[0] += (double)*(float*)ADDR(0x1700142C); /* 0x1704524E: fadd dword ptr [0x1700142c] */
L_17045254:
    _st[0] *= _st[2]; /* 0x17045254: fmul st(2) */
    _st[0] += _st[1]; /* 0x17045256: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x6C)) = _v; } /* 0x17045258: fstp dword ptr [ebp - 0x6c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704525B: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704525D: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704525F: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17045261: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x10); /* 0x17045264: fmul dword ptr [eax + 0x10] */
    eax = ebp + (-0x50); /* 0x17045267: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x1704526A: push eax */
    eax = ebp + (-0xA0); /* 0x1704526B: lea eax, [ebp - 0xa0] */
    _st[0] = -_st[0]; /* 0x17045271: fchs  */
    PUSH32(esp, eax); /* 0x17045273: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x68)) = _v; } /* 0x17045274: fstp dword ptr [ebp - 0x68] */
    eax = ebp + (-0x50); /* 0x17045277: lea eax, [ebp - 0x50] */
    fp_push(1.0); /* 0x1704527A: fld1  */
    PUSH32(esp, eax); /* 0x1704527C: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x64)) = _v; } /* 0x1704527D: fstp dword ptr [ebp - 0x64] */
    RECOMP_CALL(sub_17041794); /* 0x17045280: call 0x17041794 */
    RECOMP_FLAGS_IN();
L_17045285:
    PUSH32(esp, MEM32(ebx + 0x28)); /* 0x17045285: push dword ptr [ebx + 0x28] */
    eax = ebp + (-0x50); /* 0x17045288: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x1704528B: push eax */
    PUSH32(esp, MEM32(ebx + 0x14)); /* 0x1704528C: push dword ptr [ebx + 0x14] */
    PUSH32(esp, MEM32(ebx + 0x10)); /* 0x1704528F: push dword ptr [ebx + 0x10] */
    PUSH32(esp, MEM32(ebx + 0xC)); /* 0x17045292: push dword ptr [ebx + 0xc] */
    PUSH32(esp, MEM32(ebx + 0x8)); /* 0x17045295: push dword ptr [ebx + 8] */
    RECOMP_CALL(sub_17040E9E); /* 0x17045298: call 0x17040e9e */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1704529D: pop edi */
    esi = POP32_VAL(esp); /* 0x1704529E: pop esi */
    esp = ebp; /* 0x1704529F: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x170452A1: pop ebp */
    esp = ebx; /* 0x170452A2: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x170452A4: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x170452A5: ret 0x24 */
  _ljump:
    switch (_itail_tgt) {
      case 0x170450FCu: goto L_170450FC;
      case 0x1704514Eu: goto L_1704514E;
      case 0x17045153u: goto L_17045153;
      case 0x17045156u: goto L_17045156;
      case 0x1704515Cu: goto L_1704515C;
      case 0x1704515Fu: goto L_1704515F;
      case 0x17045164u: goto L_17045164;
      case 0x17045168u: goto L_17045168;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_170452CD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170452CDu);

L_170452CD:
    edi = edi; /* 0x170452CD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170452CF: push ebp */
    ebp = esp; /* 0x170452D0: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x84u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x84u; /* 0x170452D2: sub esp, 0x84 */
    _flag_k = FK_CMP;
    fp_push(1.0); /* 0x170452D8: fld1  */
    PUSH32(esp, ebx); /* 0x170452DA: push ebx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x170452DB: fstp dword ptr [ebp - 0xc] */
    PUSH32(esp, esi); /* 0x170452DE: push esi */
    PUSH32(esp, edi); /* 0x170452DF: push edi */
    fp_push(0.0); /* 0x170452E0: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x170452E2: fstp dword ptr [ebp - 8] */
    esi = ebp + (-0xC); /* 0x170452E5: lea esi, [ebp - 0xc] */
    fp_push(0.0); /* 0x170452E8: fldz  */
    edi = ebp + (-0x84); /* 0x170452EA: lea edi, [ebp - 0x84] */
    eax = MEM32(ebp + 0x14); /* 0x170452F0: mov eax, dword ptr [ebp + 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x170452F3: fstp dword ptr [ebp - 4] */
    ecx = MEM32(ebp + 0x10); /* 0x170452F6: mov ecx, dword ptr [ebp + 0x10] */
    fp_push(0.0); /* 0x170452F9: fldz  */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170452FB: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170452FC: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170452FD: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x170452FE: fstp dword ptr [ebp - 0xc] */
    fp_push(1.0); /* 0x17045301: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x17045303: fstp dword ptr [ebp - 8] */
    esi = ebp + (-0xC); /* 0x17045306: lea esi, [ebp - 0xc] */
    fp_push(0.0); /* 0x17045309: fldz  */
    edi = ebp + (-0x78); /* 0x1704530B: lea edi, [ebp - 0x78] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x1704530E: fstp dword ptr [ebp - 4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17045311: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(0.0); /* 0x17045312: fldz  */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17045314: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17045315: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x17045316: fstp dword ptr [ebp - 0xc] */
    fp_push(0.0); /* 0x17045319: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1704531B: fstp dword ptr [ebp - 8] */
    esi = ebp + (-0xC); /* 0x1704531E: lea esi, [ebp - 0xc] */
    fp_push(1.0); /* 0x17045321: fld1  */
    edi = ebp + (-0x6C); /* 0x17045323: lea edi, [ebp - 0x6c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17045326: fstp dword ptr [ebp - 4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17045329: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(eax + 0x30)); /* 0x1704532A: fld dword ptr [eax + 0x30] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x1704532D: fstp dword ptr [ecx] */
    fp_push(0.0); /* 0x1704532F: fldz  */
    edx = MEM32(eax + 0x34); /* 0x17045331: mov edx, dword ptr [eax + 0x34] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x17045334: fstp dword ptr [ebp - 0x20] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17045337: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(0.0); /* 0x17045338: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x1704533A: fstp dword ptr [ebp - 0x24] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704533D: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(0.0); /* 0x1704533E: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x17045340: fstp dword ptr [ebp - 0x28] */
    fp_push(0.0); /* 0x17045343: fldz  */
    MEM32(ecx + 0x4) = edx; /* 0x17045345: mov dword ptr [ecx + 4], edx */
    edx = MEM32(eax + 0x38); /* 0x17045348: mov edx, dword ptr [eax + 0x38] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x1704534B: fstp dword ptr [ebp - 0x2c] */
    MEM32(ecx + 0x8) = edx; /* 0x1704534E: mov dword ptr [ecx + 8], edx */
    fp_push(0.0); /* 0x17045351: fldz  */
    esi = eax; /* 0x17045353: mov esi, eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x17045355: fstp dword ptr [ebp - 0x3c] */
    edi = ebp + (-0x58); /* 0x17045358: lea edi, [ebp - 0x58] */
    fp_push(0.0); /* 0x1704535B: fldz  */
    ecx = ebp + (-0x58); /* 0x1704535D: lea ecx, [ebp - 0x58] */
    MEM32(ebp + (-0xC)) = ecx; /* 0x17045360: mov dword ptr [ebp - 0xc], ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4C)) = _v; } /* 0x17045363: fstp dword ptr [ebp - 0x4c] */
    ecx = ebp + (-0x48); /* 0x17045366: lea ecx, [ebp - 0x48] */
    fp_push(1.0); /* 0x17045369: fld1  */
    MEM32(ebp + (-0x8)) = ecx; /* 0x1704536B: mov dword ptr [ebp - 8], ecx */
    ecx = ebp + (-0x38); /* 0x1704536E: lea ecx, [ebp - 0x38] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x17045371: fstp dword ptr [ebp - 0x1c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17045374: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17045375: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17045376: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = eax + 0x10; /* 0x17045377: lea esi, [eax + 0x10] */
    edi = ebp + (-0x48); /* 0x1704537A: lea edi, [ebp - 0x48] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704537D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704537E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704537F: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = eax + 0x20; /* 0x17045380: lea esi, [eax + 0x20] */
    edi = ebp + (-0x38); /* 0x17045383: lea edi, [ebp - 0x38] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17045386: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17045387: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17045388: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x50))); /* 0x17045389: fld dword ptr [ebp - 0x50] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x50)); /* 0x1704538C: fmul dword ptr [ebp - 0x50] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x1704538F: mov dword ptr [ebp - 4], ecx */
    fp_push(*(float*)&MEM32(ebp + (-0x54))); /* 0x17045392: fld dword ptr [ebp - 0x54] */
    edx = MEM32(ebp + 0x8); /* 0x17045395: mov edx, dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x54)); /* 0x17045398: fmul dword ptr [ebp - 0x54] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704539B: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x58))); /* 0x1704539D: fld dword ptr [ebp - 0x58] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x58)); /* 0x170453A0: fmul dword ptr [ebp - 0x58] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170453A3: faddp st(1) */
    _st[0] = sqrt(_st[0]); /* 0x170453A5: fsqrt  */
    fp_push(_st[0]); /* 0x170453A7: fld st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x170453A9: fstp dword ptr [edx] */
    fp_push(*(float*)&MEM32(ebp + (-0x40))); /* 0x170453AB: fld dword ptr [ebp - 0x40] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x40)); /* 0x170453AE: fmul dword ptr [ebp - 0x40] */
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x170453B1: fld dword ptr [ebp - 0x44] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x44)); /* 0x170453B4: fmul dword ptr [ebp - 0x44] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170453B7: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x48))); /* 0x170453B9: fld dword ptr [ebp - 0x48] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x48)); /* 0x170453BC: fmul dword ptr [ebp - 0x48] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170453BF: faddp st(1) */
    _st[0] = sqrt(_st[0]); /* 0x170453C1: fsqrt  */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + 0x10) = _v; } /* 0x170453C3: fst dword ptr [ebp + 0x10] */
    { float _v = (float)_st[0]; *(float*)ADDR(edx + 0x4) = _v; } /* 0x170453C6: fst dword ptr [edx + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x170453C9: fld dword ptr [ebp - 0x30] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x30)); /* 0x170453CC: fmul dword ptr [ebp - 0x30] */
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x170453CF: fld dword ptr [ebp - 0x34] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x34)); /* 0x170453D2: fmul dword ptr [ebp - 0x34] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170453D5: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x38))); /* 0x170453D7: fld dword ptr [ebp - 0x38] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x38)); /* 0x170453DA: fmul dword ptr [ebp - 0x38] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170453DD: faddp st(1) */
    _st[0] = sqrt(_st[0]); /* 0x170453DF: fsqrt  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x14) = _v; } /* 0x170453E1: fstp dword ptr [ebp + 0x14] */
    fp_push(_st[1]); /* 0x170453E4: fld st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x170453E6: fcomp st(1) */
    fp_pop();
    eax = MEM32(ebp + 0x14); /* 0x170453E8: mov eax, dword ptr [ebp + 0x14] */
    MEM32(edx + 0x8) = eax; /* 0x170453EB: mov dword ptr [edx + 8], eax */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170453EE: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x170453F0: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17045431; /* 0x170453F3: jp 0x17045431 */
L_170453F5:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + 0x14)); /* 0x170453F5: fcomp dword ptr [ebp + 0x14] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170453F8: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x170453FA: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1704540A; /* 0x170453FD: jp 0x1704540a */
L_170453FF:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0; /* 0x170453FF: and dword ptr [ebp + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17045403: fstp st(0) */
    PUSH32(esp, 2); /* 0x17045405: push 2 */
    esi = POP32_VAL(esp); /* 0x17045407: pop esi */
    goto L_1704546C; /* 0x17045408: jmp 0x1704546c */
L_1704540A:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + 0x14)); /* 0x1704540A: fcomp dword ptr [ebp + 0x14] */
    fp_pop();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1704540D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1704540F: inc esi */
    _flag_k = FK_INC;
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17045410: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x17045412: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17045424; /* 0x17045415: jp 0x17045424 */
L_17045417:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0; /* 0x17045417: and dword ptr [ebp + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x14) = 2; /* 0x1704541B: mov dword ptr [ebp + 0x14], 2 */
    goto L_17045473; /* 0x17045422: jmp 0x17045473 */
L_17045424:
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) & 0; /* 0x17045424: and dword ptr [ebp + 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = 2; /* 0x17045428: mov dword ptr [ebp + 0x10], 2 */
    goto L_17045473; /* 0x1704542F: jmp 0x17045473 */
L_17045431:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17045431: fstp st(0) */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + 0x14)); /* 0x17045433: fcomp dword ptr [ebp + 0x14] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17045436: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x17045438: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1704544D; /* 0x1704543B: jp 0x1704544d */
L_1704543D:
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) & 0; /* 0x1704543D: and dword ptr [ebp + 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 2); /* 0x17045441: push 2 */
    esi = POP32_VAL(esp); /* 0x17045443: pop esi */
L_17045444:
    MEM32(ebp + 0x10) = 1; /* 0x17045444: mov dword ptr [ebp + 0x10], 1 */
    goto L_17045473; /* 0x1704544B: jmp 0x17045473 */
L_1704544D:
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x1704544D: fld dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x17045450: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + 0x14)); /* 0x17045452: fcomp dword ptr [ebp + 0x14] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17045455: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x17045457: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17045465; /* 0x1704545A: jp 0x17045465 */
L_1704545C:
    MEM32(ebp + 0x14) = 2; /* 0x1704545C: mov dword ptr [ebp + 0x14], 2 */
    RECOMP_BACKEDGE();
    goto L_17045444; /* 0x17045463: jmp 0x17045444 */
L_17045465:
    MEM32(ebp + 0x10) = 2; /* 0x17045465: mov dword ptr [ebp + 0x10], 2 */
L_1704546C:
    MEM32(ebp + 0x14) = 1; /* 0x1704546C: mov dword ptr [ebp + 0x14], 1 */
L_17045473:
    ecx = esi; /* 0x17045473: mov ecx, esi */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x17045475: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x17045475: shl ecx, 2 */
    eax = ecx + edx; /* 0x17045478: lea eax, [ecx + edx] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1704547B: fld dword ptr [eax] */
    MEM32(ebp + (-0x5C)) = eax; /* 0x1704547D: mov dword ptr [ebp - 0x5c], eax */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17001F4C)); /* 0x17045480: fcomp dword ptr [0x17001f4c] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17045486: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x17045488: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1704549E; /* 0x1704548B: jp 0x1704549e */
L_1704548D:
    edi = MEM32(ebp + ecx + (-0xC)); /* 0x1704548D: mov edi, dword ptr [ebp + ecx - 0xc] */
    esi = esi + esi * 2; /* 0x17045491: lea esi, [esi + esi*2] */
    esi = ebp + esi * 4 + (-0x84); /* 0x17045494: lea esi, [ebp + esi*4 - 0x84] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704549B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704549C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704549D: movsd dword ptr es:[edi], dword ptr [esi] */
L_1704549E:
    ebx = ebp + ecx + (-0xC); /* 0x1704549E: lea ebx, [ebp + ecx - 0xc] */
    eax = MEM32(ebx); /* 0x170454A2: mov eax, dword ptr [ebx] */
    PUSH32(esp, eax); /* 0x170454A4: push eax */
    PUSH32(esp, eax); /* 0x170454A5: push eax */
    RECOMP_CALL(sub_17040B68); /* 0x170454A6: call 0x17040b68 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x14); /* 0x170454AB: mov edx, dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0x8); /* 0x170454AE: mov eax, dword ptr [ebp + 8] */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x170454B1: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x170454B1: shl edx, 2 */
    fp_push(*(float*)&MEM32(edx + eax)); /* 0x170454B4: fld dword ptr [edx + eax] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17001F4C)); /* 0x170454B7: fcomp dword ptr [0x17001f4c] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170454BD: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x170454BF: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17045569; /* 0x170454C2: jp 0x17045569 */
L_170454C8:
    ecx = MEM32(ebx); /* 0x170454C8: mov ecx, dword ptr [ebx] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x170454CA: fld dword ptr [ecx] */
    _st[0] = fabs(_st[0]); /* 0x170454CC: fabs  */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x170454CE: fld dword ptr [ecx + 4] */
    _st[0] = fabs(_st[0]); /* 0x170454D1: fabs  */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x60)) = _v; } /* 0x170454D3: fst dword ptr [ebp - 0x60] */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x170454D6: fld dword ptr [ecx + 8] */
    _st[0] = fabs(_st[0]); /* 0x170454D9: fabs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x14) = _v; } /* 0x170454DB: fstp dword ptr [ebp + 0x14] */
    fp_push(_st[1]); /* 0x170454DE: fld st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x170454E0: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170454E2: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x170454E4: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17045505; /* 0x170454E7: jp 0x17045505 */
L_170454E9:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + 0x14)); /* 0x170454E9: fcomp dword ptr [ebp + 0x14] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170454EC: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x170454EE: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_170454F7; /* 0x170454F1: jp 0x170454f7 */
L_170454F3:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170454F3: fstp st(0) */
    goto L_17045501; /* 0x170454F5: jmp 0x17045501 */
L_170454F7:
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + 0x14)); /* 0x170454F7: fcomp dword ptr [ebp + 0x14] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170454FA: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x170454FC: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17045523; /* 0x170454FF: jp 0x17045523 */
L_17045501:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17045501: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17045526; /* 0x17045503: jmp 0x17045526 */
L_17045505:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17045505: fstp st(0) */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + 0x14)); /* 0x17045507: fcomp dword ptr [ebp + 0x14] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1704550A: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1704550C: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17045516; /* 0x1704550F: jp 0x17045516 */
L_17045511:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17045511: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x17045513: inc eax */
    _flag_k = FK_INC;
    goto L_17045526; /* 0x17045514: jmp 0x17045526 */
L_17045516:
    fp_push(*(float*)&MEM32(ebp + (-0x60))); /* 0x17045516: fld dword ptr [ebp - 0x60] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(ebp + 0x14)); /* 0x17045519: fcomp dword ptr [ebp + 0x14] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1704551C: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1704551E: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_17045511; /* 0x17045521: jnp 0x17045511 */
L_17045523:
    PUSH32(esp, 2); /* 0x17045523: push 2 */
    eax = POP32_VAL(esp); /* 0x17045525: pop eax */
L_17045526:
    eax = eax + eax * 2; /* 0x17045526: lea eax, [eax + eax*2] */
    eax = ebp + eax * 4 + (-0x84); /* 0x17045529: lea eax, [ebp + eax*4 - 0x84] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x17045530: fld dword ptr [eax + 8] */
    edi = MEM32(ebp + edx + (-0xC)); /* 0x17045533: mov edi, dword ptr [ebp + edx - 0xc] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x17045537: fmul dword ptr [ecx + 4] */
    esi = ebp + (-0x18); /* 0x1704553A: lea esi, [ebp - 0x18] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1704553D: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x17045540: fmul dword ptr [ecx + 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17045543: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x17045545: fstp dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x17045548: fld dword ptr [ecx + 8] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x1704554B: fmul dword ptr [eax] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x1704554D: fld dword ptr [eax + 8] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x17045550: fmul dword ptr [ecx] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17045552: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x17045554: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x17045557: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x1704555A: fmul dword ptr [ecx] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x1704555C: fld dword ptr [ecx + 4] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x1704555F: fmul dword ptr [eax] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17045561: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x17045563: fstp dword ptr [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17045566: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17045567: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17045568: movsd dword ptr es:[edi], dword ptr [esi] */
L_17045569:
    esi = ebp + edx + (-0xC); /* 0x17045569: lea esi, [ebp + edx - 0xc] */
    eax = MEM32(esi); /* 0x1704556D: mov eax, dword ptr [esi] */
    PUSH32(esp, eax); /* 0x1704556F: push eax */
    PUSH32(esp, eax); /* 0x17045570: push eax */
    RECOMP_CALL(sub_17040B68); /* 0x17045571: call 0x17040b68 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x10); /* 0x17045576: mov edx, dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x17045579: mov eax, dword ptr [ebp + 8] */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x1704557C: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x1704557C: shl edx, 2 */
    fp_push(*(float*)&MEM32(edx + eax)); /* 0x1704557F: fld dword ptr [edx + eax] */
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17001F4C)); /* 0x17045582: fcomp dword ptr [0x17001f4c] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17045588: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1704558A: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_170455CC; /* 0x1704558D: jp 0x170455cc */
L_1704558F:
    eax = MEM32(esi); /* 0x1704558F: mov eax, dword ptr [esi] */
    ecx = MEM32(ebx); /* 0x17045591: mov ecx, dword ptr [ebx] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x17045593: fld dword ptr [eax + 8] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x17045596: fmul dword ptr [ecx + 4] */
    edi = MEM32(ebp + edx + (-0xC)); /* 0x17045599: mov edi, dword ptr [ebp + edx - 0xc] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1704559D: fld dword ptr [eax + 4] */
    esi = ebp + (-0x18); /* 0x170455A0: lea esi, [ebp - 0x18] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x170455A3: fmul dword ptr [ecx + 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170455A6: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x170455A8: fstp dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(eax)); /* 0x170455AB: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x170455AD: fmul dword ptr [ecx + 8] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x170455B0: fld dword ptr [eax + 8] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x170455B3: fmul dword ptr [ecx] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170455B5: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x170455B7: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x170455BA: fld dword ptr [ecx] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x170455BC: fmul dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x170455BF: fld dword ptr [ecx + 4] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x170455C2: fmul dword ptr [eax] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170455C4: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x170455C6: fstp dword ptr [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170455C9: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170455CA: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170455CB: movsd dword ptr es:[edi], dword ptr [esi] */
L_170455CC:
    edx = MEM32(ebp + edx + (-0xC)); /* 0x170455CC: mov edx, dword ptr [ebp + edx - 0xc] */
    PUSH32(esp, edx); /* 0x170455D0: push edx */
    PUSH32(esp, edx); /* 0x170455D1: push edx */
    RECOMP_CALL(sub_17040B68); /* 0x170455D2: call 0x17040b68 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x58); /* 0x170455D7: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x170455DA: push eax */
    RECOMP_CALL(sub_1704167D); /* 0x170455DB: call 0x1704167d */
    RECOMP_FLAGS_IN();
    _fpu_cmp = FPU_CMP(_st[0], (double)*(float*)ADDR(0x17001430)); /* 0x170455E0: fcom dword ptr [0x17001430] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170455E6: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x170455E8: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1704561D; /* 0x170455EB: jp 0x1704561d */
L_170455ED:
    eax = MEM32(ebp + (-0x5C)); /* 0x170455ED: mov eax, dword ptr [ebp - 0x5c] */
    fp_push(*(float*)&MEM32(eax)); /* 0x170455F0: fld dword ptr [eax] */
    ebx = MEM32(ebx); /* 0x170455F2: mov ebx, dword ptr [ebx] */
    _st[0] = -_st[0]; /* 0x170455F4: fchs  */
    esi = ebp + (-0x18); /* 0x170455F6: lea esi, [ebp - 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x170455F9: fstp dword ptr [eax] */
    edi = ebx; /* 0x170455FB: mov edi, ebx */
    fp_push(*(float*)&MEM32(ebx)); /* 0x170455FD: fld dword ptr [ebx] */
    _st[0] = -_st[0]; /* 0x170455FF: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x17045601: fstp dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ebx + 0x4)); /* 0x17045604: fld dword ptr [ebx + 4] */
    _st[0] = -_st[0]; /* 0x17045607: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x17045609: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebx + 0x8)); /* 0x1704560C: fld dword ptr [ebx + 8] */
    _st[0] = -_st[0]; /* 0x1704560F: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x17045611: fstp dword ptr [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17045614: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17045615: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(_st[0]); /* 0x17045616: fld st(0) */
    _st[0] = -_st[0]; /* 0x17045618: fchs  */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1704561A: fstp st(1) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704561C: movsd dword ptr es:[edi], dword ptr [esi] */
L_1704561D:
    _st[0] -= (double)*(float*)ADDR(0x17001424); /* 0x1704561D: fsub dword ptr [0x17001424] */
    edi = POP32_VAL(esp); /* 0x17045623: pop edi */
    esi = POP32_VAL(esp); /* 0x17045624: pop esi */
    ebx = POP32_VAL(esp); /* 0x17045625: pop ebx */
    fp_push(_st[0]); /* 0x17045626: fld st(0) */
    _st[0] *= _st[1]; /* 0x17045628: fmul st(1) */
    fp_push(*(float*)&MEM32(0x17001F4C)); /* 0x1704562A: fld dword ptr [0x17001f4c] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x17045630: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17045632: fnstsw ax */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17045634: fstp st(0) */
    /* test HI8(eax), 5 */ /* 0x17045636: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17045642; /* 0x17045639: jp 0x17045642 */
L_1704563B:
    eax = 0x8876086Cu; /* 0x1704563B: mov eax, 0x8876086c */
    goto L_17045650; /* 0x17045640: jmp 0x17045650 */
L_17045642:
    eax = ebp + (-0x58); /* 0x17045642: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x17045645: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17045646: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_1704327A); /* 0x17045649: call 0x1704327a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704564E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_17045650:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17045650: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17045651: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_17045659(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17045659u);

L_17045659:
    edi = edi; /* 0x17045659: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704565B: push ebp */
    ebp = esp; /* 0x1704565C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1704565E: sub esp, 0x10 */
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x17045661: fld dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x17045664: sub esp, 0xc */
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x8) = _v; } /* 0x17045667: fstp dword ptr [esp + 8] */
    eax = ebp + (-0x10); /* 0x1704566B: lea eax, [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x1704566E: fld dword ptr [ebp + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x17045671: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x17045675: fld dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17045678: fstp dword ptr [esp] */
    PUSH32(esp, eax); /* 0x1704567B: push eax */
    RECOMP_CALL(sub_1704348B); /* 0x1704567C: call 0x1704348b */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x10); /* 0x17045681: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x17045684: push eax */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17045685: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_17042551); /* 0x17045688: call 0x17042551 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x1704568D: mov eax, dword ptr [ebp + 8] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17045690: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17045691: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_17045699(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17045699u);

L_17045699:
    edi = edi; /* 0x17045699: mov edi, edi */
    PUSH32(esp, ebx); /* 0x1704569B: push ebx */
    ebx = esp; /* 0x1704569C: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x1704569E: push ecx */
    PUSH32(esp, ecx); /* 0x1704569F: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x170456A0: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x170456A3: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x170456A6: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x170456A7: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x170456AA: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x170456AE: mov ebp, esp */
    eax = MEM32(ebx + 0x14); /* 0x170456B0: mov eax, dword ptr [ebx + 0x14] */
    fp_push(0.0); /* 0x170456B3: fldz  */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xC8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xC8u; /* 0x170456B5: sub esp, 0xc8 */
    _flag_k = FK_CMP;
    /* test eax, eax */ /* 0x170456BB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x170456BD: push esi */
    PUSH32(esp, edi); /* 0x170456BE: push edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170458D0; /* 0x170456BF: je 0x170458d0 */
L_170456C5:
    /* cmp MEM32(ebx + 0x10), 0 */ /* 0x170456C5: cmp dword ptr [ebx + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17045816; /* 0x170456C9: je 0x17045816 */
L_170456CF:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x170456CF: fstp dword ptr [ebp - 8] */
    ecx = MEM32(eax); /* 0x170456D2: mov ecx, dword ptr [eax] */
    fp_push(0.0); /* 0x170456D4: fldz  */
    PUSH32(esp, MEM32(ebx + 0x10)); /* 0x170456D6: push dword ptr [ebx + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x170456D9: fstp dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x40)) = ecx; /* 0x170456DC: mov dword ptr [ebp - 0x40], ecx */
    fp_push(0.0); /* 0x170456DF: fldz  */
    ecx = MEM32(eax + 0x4); /* 0x170456E1: mov ecx, dword ptr [eax + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x170456E4: fstp dword ptr [ebp - 0x10] */
    eax = MEM32(eax + 0x8); /* 0x170456E7: mov eax, dword ptr [eax + 8] */
    fp_push(0.0); /* 0x170456EA: fldz  */
    MEM32(ebp + (-0x18)) = eax; /* 0x170456EC: mov dword ptr [ebp - 0x18], eax */
    eax = ebp + (-0x80); /* 0x170456EF: lea eax, [ebp - 0x80] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x170456F2: fstp dword ptr [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x170456F5: push eax */
    fp_push(0.0); /* 0x170456F6: fldz  */
    MEM32(ebp + (-0x2C)) = ecx; /* 0x170456F8: mov dword ptr [ebp - 0x2c], ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x170456FB: fstp dword ptr [ebp - 0x1c] */
    fp_push(0.0); /* 0x170456FE: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x17045700: fstp dword ptr [ebp - 0x20] */
    fp_push(0.0); /* 0x17045703: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x17045705: fstp dword ptr [ebp - 0x24] */
    fp_push(0.0); /* 0x17045708: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x1704570A: fstp dword ptr [ebp - 0x28] */
    fp_push(0.0); /* 0x1704570D: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x1704570F: fstp dword ptr [ebp - 0x30] */
    fp_push(0.0); /* 0x17045712: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x17045714: fstp dword ptr [ebp - 0x34] */
    fp_push(0.0); /* 0x17045717: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x17045719: fstp dword ptr [ebp - 0x38] */
    fp_push(0.0); /* 0x1704571C: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x1704571E: fstp dword ptr [ebp - 0x3c] */
    fp_push(1.0); /* 0x17045721: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17045723: fstp dword ptr [ebp - 4] */
    RECOMP_CALL(sub_17042551); /* 0x17045726: call 0x17042551 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebx + 0xC); /* 0x1704572B: mov edi, dword ptr [ebx + 0xc] */
    /* test edi, edi */ /* 0x1704572E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x80); /* 0x17045730: lea eax, [ebp - 0x80] */
    PUSH32(esp, eax); /* 0x17045733: push eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170457F2; /* 0x17045734: je 0x170457f2 */
L_1704573A:
    eax = ebp + (-0xC0); /* 0x1704573A: lea eax, [ebp - 0xc0] */
    PUSH32(esp, eax); /* 0x17045740: push eax */
    RECOMP_CALL(sub_170419F4); /* 0x17045741: call 0x170419f4 */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x17045746: fldz  */
    esi = MEM32(ebx + 0x8); /* 0x17045748: mov esi, dword ptr [ebx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x38) = _v; } /* 0x1704574B: fstp dword ptr [esi + 0x38] */
    fp_push(0.0); /* 0x1704574E: fldz  */
    eax = ebp + (-0xC0); /* 0x17045750: lea eax, [ebp - 0xc0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x34) = _v; } /* 0x17045756: fstp dword ptr [esi + 0x34] */
    PUSH32(esp, eax); /* 0x17045759: push eax */
    fp_push(0.0); /* 0x1704575A: fldz  */
    PUSH32(esp, esi); /* 0x1704575C: push esi */
    PUSH32(esp, esi); /* 0x1704575D: push esi */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x30) = _v; } /* 0x1704575E: fstp dword ptr [esi + 0x30] */
    fp_push(0.0); /* 0x17045761: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x2C) = _v; } /* 0x17045763: fstp dword ptr [esi + 0x2c] */
    fp_push(0.0); /* 0x17045766: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x24) = _v; } /* 0x17045768: fstp dword ptr [esi + 0x24] */
    fp_push(0.0); /* 0x1704576B: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x20) = _v; } /* 0x1704576D: fstp dword ptr [esi + 0x20] */
    fp_push(0.0); /* 0x17045770: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x1C) = _v; } /* 0x17045772: fstp dword ptr [esi + 0x1c] */
    fp_push(0.0); /* 0x17045775: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x18) = _v; } /* 0x17045777: fstp dword ptr [esi + 0x18] */
    fp_push(0.0); /* 0x1704577A: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x10) = _v; } /* 0x1704577C: fstp dword ptr [esi + 0x10] */
    fp_push(0.0); /* 0x1704577F: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0xC) = _v; } /* 0x17045781: fstp dword ptr [esi + 0xc] */
    fp_push(0.0); /* 0x17045784: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x8) = _v; } /* 0x17045786: fstp dword ptr [esi + 8] */
    fp_push(0.0); /* 0x17045789: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x1704578B: fstp dword ptr [esi + 4] */
    fp_push(1.0); /* 0x1704578E: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x3C) = _v; } /* 0x17045790: fstp dword ptr [esi + 0x3c] */
    fp_push(1.0); /* 0x17045793: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x28) = _v; } /* 0x17045795: fstp dword ptr [esi + 0x28] */
    fp_push(1.0); /* 0x17045798: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x14) = _v; } /* 0x1704579A: fstp dword ptr [esi + 0x14] */
    fp_push(1.0); /* 0x1704579D: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x1704579F: fstp dword ptr [esi] */
    fp_push(*(float*)&MEM32(edi)); /* 0x170457A1: fld dword ptr [edi] */
    _st[0] = -_st[0]; /* 0x170457A3: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x30) = _v; } /* 0x170457A5: fstp dword ptr [esi + 0x30] */
    fp_push(*(float*)&MEM32(edi + 0x4)); /* 0x170457A8: fld dword ptr [edi + 4] */
    _st[0] = -_st[0]; /* 0x170457AB: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x34) = _v; } /* 0x170457AD: fstp dword ptr [esi + 0x34] */
    fp_push(*(float*)&MEM32(edi + 0x8)); /* 0x170457B0: fld dword ptr [edi + 8] */
    _st[0] = -_st[0]; /* 0x170457B3: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x38) = _v; } /* 0x170457B5: fstp dword ptr [esi + 0x38] */
    RECOMP_CALL(sub_17041794); /* 0x170457B8: call 0x17041794 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x40); /* 0x170457BD: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x170457C0: push eax */
    PUSH32(esp, esi); /* 0x170457C1: push esi */
    PUSH32(esp, esi); /* 0x170457C2: push esi */
    RECOMP_CALL(sub_17041794); /* 0x170457C3: call 0x17041794 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x80); /* 0x170457C8: lea eax, [ebp - 0x80] */
    PUSH32(esp, eax); /* 0x170457CB: push eax */
    PUSH32(esp, esi); /* 0x170457CC: push esi */
    PUSH32(esp, esi); /* 0x170457CD: push esi */
    RECOMP_CALL(sub_17041794); /* 0x170457CE: call 0x17041794 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(esi + 0x30)); /* 0x170457D3: fld dword ptr [esi + 0x30] */
    _st[0] += (double)*(float*)ADDR(edi); /* 0x170457D6: fadd dword ptr [edi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x30) = _v; } /* 0x170457D8: fstp dword ptr [esi + 0x30] */
    fp_push(*(float*)&MEM32(edi + 0x4)); /* 0x170457DB: fld dword ptr [edi + 4] */
    _st[0] += (double)*(float*)ADDR(esi + 0x34); /* 0x170457DE: fadd dword ptr [esi + 0x34] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x34) = _v; } /* 0x170457E1: fstp dword ptr [esi + 0x34] */
    fp_push(*(float*)&MEM32(esi + 0x38)); /* 0x170457E4: fld dword ptr [esi + 0x38] */
    _st[0] += (double)*(float*)ADDR(edi + 0x8); /* 0x170457E7: fadd dword ptr [edi + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x38) = _v; } /* 0x170457EA: fstp dword ptr [esi + 0x38] */
    goto L_17045920; /* 0x170457ED: jmp 0x17045920 */
L_170457F2:
    esi = MEM32(ebx + 0x8); /* 0x170457F2: mov esi, dword ptr [ebx + 8] */
    PUSH32(esp, esi); /* 0x170457F5: push esi */
    RECOMP_CALL(sub_170419F4); /* 0x170457F6: call 0x170419f4 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x40); /* 0x170457FB: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x170457FE: push eax */
    PUSH32(esp, esi); /* 0x170457FF: push esi */
    PUSH32(esp, esi); /* 0x17045800: push esi */
    RECOMP_CALL(sub_17041794); /* 0x17045801: call 0x17041794 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x80); /* 0x17045806: lea eax, [ebp - 0x80] */
    PUSH32(esp, eax); /* 0x17045809: push eax */
    PUSH32(esp, esi); /* 0x1704580A: push esi */
    PUSH32(esp, esi); /* 0x1704580B: push esi */
    RECOMP_CALL(sub_17041794); /* 0x1704580C: call 0x17041794 */
    RECOMP_FLAGS_IN();
    goto L_17045920; /* 0x17045811: jmp 0x17045920 */
L_17045816:
    ecx = MEM32(ebx + 0xC); /* 0x17045816: mov ecx, dword ptr [ebx + 0xc] */
    /* test ecx, ecx */ /* 0x17045819: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebx + 0x8); /* 0x1704581B: mov esi, dword ptr [ebx + 8] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17045884; /* 0x1704581E: je 0x17045884 */
L_17045820:
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x2C) = _v; } /* 0x17045820: fstp dword ptr [esi + 0x2c] */
    fp_push(0.0); /* 0x17045823: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x24) = _v; } /* 0x17045825: fstp dword ptr [esi + 0x24] */
    fp_push(0.0); /* 0x17045828: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x20) = _v; } /* 0x1704582A: fstp dword ptr [esi + 0x20] */
    fp_push(0.0); /* 0x1704582D: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x1C) = _v; } /* 0x1704582F: fstp dword ptr [esi + 0x1c] */
    fp_push(0.0); /* 0x17045832: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x18) = _v; } /* 0x17045834: fstp dword ptr [esi + 0x18] */
    fp_push(0.0); /* 0x17045837: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x10) = _v; } /* 0x17045839: fstp dword ptr [esi + 0x10] */
    fp_push(0.0); /* 0x1704583C: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0xC) = _v; } /* 0x1704583E: fstp dword ptr [esi + 0xc] */
    fp_push(0.0); /* 0x17045841: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x8) = _v; } /* 0x17045843: fstp dword ptr [esi + 8] */
    fp_push(0.0); /* 0x17045846: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x17045848: fstp dword ptr [esi + 4] */
    fp_push(1.0); /* 0x1704584B: fld1  */
    edx = MEM32(eax); /* 0x1704584D: mov edx, dword ptr [eax] */
    MEM32(esi) = edx; /* 0x1704584F: mov dword ptr [esi], edx */
    edx = MEM32(eax + 0x4); /* 0x17045851: mov edx, dword ptr [eax + 4] */
    MEM32(esi + 0x14) = edx; /* 0x17045854: mov dword ptr [esi + 0x14], edx */
    edx = MEM32(eax + 0x8); /* 0x17045857: mov edx, dword ptr [eax + 8] */
    MEM32(esi + 0x28) = edx; /* 0x1704585A: mov dword ptr [esi + 0x28], edx */
    _st[0] -= (double)*(float*)ADDR(eax); /* 0x1704585D: fsub dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x1704585F: fmul dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x30) = _v; } /* 0x17045861: fstp dword ptr [esi + 0x30] */
    fp_push(1.0); /* 0x17045864: fld1  */
    _st[0] -= (double)*(float*)ADDR(eax + 0x4); /* 0x17045866: fsub dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x17045869: fmul dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x34) = _v; } /* 0x1704586C: fstp dword ptr [esi + 0x34] */
    fp_push(1.0); /* 0x1704586F: fld1  */
    _st[0] -= (double)*(float*)ADDR(eax + 0x8); /* 0x17045871: fsub dword ptr [eax + 8] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x17045874: fmul dword ptr [ecx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x38) = _v; } /* 0x17045877: fstp dword ptr [esi + 0x38] */
L_1704587A:
    fp_push(1.0); /* 0x1704587A: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x3C) = _v; } /* 0x1704587C: fstp dword ptr [esi + 0x3c] */
    goto L_17045920; /* 0x1704587F: jmp 0x17045920 */
L_17045884:
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x38) = _v; } /* 0x17045884: fstp dword ptr [esi + 0x38] */
    fp_push(0.0); /* 0x17045887: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x34) = _v; } /* 0x17045889: fstp dword ptr [esi + 0x34] */
    fp_push(0.0); /* 0x1704588C: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x30) = _v; } /* 0x1704588E: fstp dword ptr [esi + 0x30] */
    fp_push(0.0); /* 0x17045891: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x2C) = _v; } /* 0x17045893: fstp dword ptr [esi + 0x2c] */
    fp_push(0.0); /* 0x17045896: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x24) = _v; } /* 0x17045898: fstp dword ptr [esi + 0x24] */
    fp_push(0.0); /* 0x1704589B: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x20) = _v; } /* 0x1704589D: fstp dword ptr [esi + 0x20] */
    fp_push(0.0); /* 0x170458A0: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x1C) = _v; } /* 0x170458A2: fstp dword ptr [esi + 0x1c] */
    fp_push(0.0); /* 0x170458A5: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x18) = _v; } /* 0x170458A7: fstp dword ptr [esi + 0x18] */
    fp_push(0.0); /* 0x170458AA: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x10) = _v; } /* 0x170458AC: fstp dword ptr [esi + 0x10] */
    fp_push(0.0); /* 0x170458AF: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0xC) = _v; } /* 0x170458B1: fstp dword ptr [esi + 0xc] */
    fp_push(0.0); /* 0x170458B4: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x8) = _v; } /* 0x170458B6: fstp dword ptr [esi + 8] */
    fp_push(0.0); /* 0x170458B9: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x170458BB: fstp dword ptr [esi + 4] */
    ecx = MEM32(eax); /* 0x170458BE: mov ecx, dword ptr [eax] */
    MEM32(esi) = ecx; /* 0x170458C0: mov dword ptr [esi], ecx */
    ecx = MEM32(eax + 0x4); /* 0x170458C2: mov ecx, dword ptr [eax + 4] */
    MEM32(esi + 0x14) = ecx; /* 0x170458C5: mov dword ptr [esi + 0x14], ecx */
    eax = MEM32(eax + 0x8); /* 0x170458C8: mov eax, dword ptr [eax + 8] */
    MEM32(esi + 0x28) = eax; /* 0x170458CB: mov dword ptr [esi + 0x28], eax */
    RECOMP_BACKEDGE();
    goto L_1704587A; /* 0x170458CE: jmp 0x1704587a */
L_170458D0:
    esi = MEM32(ebx + 0x8); /* 0x170458D0: mov esi, dword ptr [ebx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x38) = _v; } /* 0x170458D3: fstp dword ptr [esi + 0x38] */
    fp_push(0.0); /* 0x170458D6: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x34) = _v; } /* 0x170458D8: fstp dword ptr [esi + 0x34] */
    fp_push(0.0); /* 0x170458DB: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x30) = _v; } /* 0x170458DD: fstp dword ptr [esi + 0x30] */
    fp_push(0.0); /* 0x170458E0: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x2C) = _v; } /* 0x170458E2: fstp dword ptr [esi + 0x2c] */
    fp_push(0.0); /* 0x170458E5: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x24) = _v; } /* 0x170458E7: fstp dword ptr [esi + 0x24] */
    fp_push(0.0); /* 0x170458EA: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x20) = _v; } /* 0x170458EC: fstp dword ptr [esi + 0x20] */
    fp_push(0.0); /* 0x170458EF: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x1C) = _v; } /* 0x170458F1: fstp dword ptr [esi + 0x1c] */
    fp_push(0.0); /* 0x170458F4: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x18) = _v; } /* 0x170458F6: fstp dword ptr [esi + 0x18] */
    fp_push(0.0); /* 0x170458F9: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x10) = _v; } /* 0x170458FB: fstp dword ptr [esi + 0x10] */
    fp_push(0.0); /* 0x170458FE: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0xC) = _v; } /* 0x17045900: fstp dword ptr [esi + 0xc] */
    fp_push(0.0); /* 0x17045903: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x8) = _v; } /* 0x17045905: fstp dword ptr [esi + 8] */
    fp_push(0.0); /* 0x17045908: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x1704590A: fstp dword ptr [esi + 4] */
    fp_push(1.0); /* 0x1704590D: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x3C) = _v; } /* 0x1704590F: fstp dword ptr [esi + 0x3c] */
    fp_push(1.0); /* 0x17045912: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x28) = _v; } /* 0x17045914: fstp dword ptr [esi + 0x28] */
    fp_push(1.0); /* 0x17045917: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x14) = _v; } /* 0x17045919: fstp dword ptr [esi + 0x14] */
    fp_push(1.0); /* 0x1704591C: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x1704591E: fstp dword ptr [esi] */
L_17045920:
    /* cmp MEM32(ebx + 0x1C), 0 */ /* 0x17045920: cmp dword ptr [ebx + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1704597F; /* 0x17045924: je 0x1704597f */
L_17045926:
    PUSH32(esp, MEM32(ebx + 0x1C)); /* 0x17045926: push dword ptr [ebx + 0x1c] */
    eax = ebp + (-0x80); /* 0x17045929: lea eax, [ebp - 0x80] */
    PUSH32(esp, eax); /* 0x1704592C: push eax */
    RECOMP_CALL(sub_17042551); /* 0x1704592D: call 0x17042551 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebx + 0x18); /* 0x17045932: mov edi, dword ptr [ebx + 0x18] */
    /* test edi, edi */ /* 0x17045935: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x80); /* 0x17045937: lea eax, [ebp - 0x80] */
    PUSH32(esp, eax); /* 0x1704593A: push eax */
    PUSH32(esp, esi); /* 0x1704593B: push esi */
    PUSH32(esp, esi); /* 0x1704593C: push esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704597A; /* 0x1704593D: je 0x1704597a */
L_1704593F:
    fp_push(*(float*)&MEM32(esi + 0x30)); /* 0x1704593F: fld dword ptr [esi + 0x30] */
    _st[0] -= (double)*(float*)ADDR(edi); /* 0x17045942: fsub dword ptr [edi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x30) = _v; } /* 0x17045944: fstp dword ptr [esi + 0x30] */
    fp_push(*(float*)&MEM32(esi + 0x34)); /* 0x17045947: fld dword ptr [esi + 0x34] */
    _st[0] -= (double)*(float*)ADDR(edi + 0x4); /* 0x1704594A: fsub dword ptr [edi + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x34) = _v; } /* 0x1704594D: fstp dword ptr [esi + 0x34] */
    fp_push(*(float*)&MEM32(esi + 0x38)); /* 0x17045950: fld dword ptr [esi + 0x38] */
    _st[0] -= (double)*(float*)ADDR(edi + 0x8); /* 0x17045953: fsub dword ptr [edi + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x38) = _v; } /* 0x17045956: fstp dword ptr [esi + 0x38] */
    RECOMP_CALL(sub_17041794); /* 0x17045959: call 0x17041794 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(esi + 0x30)); /* 0x1704595E: fld dword ptr [esi + 0x30] */
    _st[0] += (double)*(float*)ADDR(edi); /* 0x17045961: fadd dword ptr [edi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x30) = _v; } /* 0x17045963: fstp dword ptr [esi + 0x30] */
    fp_push(*(float*)&MEM32(esi + 0x34)); /* 0x17045966: fld dword ptr [esi + 0x34] */
    _st[0] += (double)*(float*)ADDR(edi + 0x4); /* 0x17045969: fadd dword ptr [edi + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x34) = _v; } /* 0x1704596C: fstp dword ptr [esi + 0x34] */
    fp_push(*(float*)&MEM32(esi + 0x38)); /* 0x1704596F: fld dword ptr [esi + 0x38] */
    _st[0] += (double)*(float*)ADDR(edi + 0x8); /* 0x17045972: fadd dword ptr [edi + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x38) = _v; } /* 0x17045975: fstp dword ptr [esi + 0x38] */
    goto L_1704597F; /* 0x17045978: jmp 0x1704597f */
L_1704597A:
    RECOMP_CALL(sub_17041794); /* 0x1704597A: call 0x17041794 */
    RECOMP_FLAGS_IN();
L_1704597F:
    eax = MEM32(ebx + 0x20); /* 0x1704597F: mov eax, dword ptr [ebx + 0x20] */
    /* test eax, eax */ /* 0x17045982: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_170459A0; /* 0x17045984: je 0x170459a0 */
L_17045986:
    fp_push(*(float*)&MEM32(esi + 0x30)); /* 0x17045986: fld dword ptr [esi + 0x30] */
    _st[0] += (double)*(float*)ADDR(eax); /* 0x17045989: fadd dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x30) = _v; } /* 0x1704598B: fstp dword ptr [esi + 0x30] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1704598E: fld dword ptr [eax + 4] */
    _st[0] += (double)*(float*)ADDR(esi + 0x34); /* 0x17045991: fadd dword ptr [esi + 0x34] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x34) = _v; } /* 0x17045994: fstp dword ptr [esi + 0x34] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x17045997: fld dword ptr [eax + 8] */
    _st[0] += (double)*(float*)ADDR(esi + 0x38); /* 0x1704599A: fadd dword ptr [esi + 0x38] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x38) = _v; } /* 0x1704599D: fstp dword ptr [esi + 0x38] */
L_170459A0:
    edi = POP32_VAL(esp); /* 0x170459A0: pop edi */
    eax = esi; /* 0x170459A1: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x170459A3: pop esi */
    esp = ebp; /* 0x170459A4: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x170459A6: pop ebp */
    esp = ebx; /* 0x170459A7: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x170459A9: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x170459AA: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_170459B2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170459B2u);

L_170459B2:
    edi = edi; /* 0x170459B2: mov edi, edi */
    PUSH32(esp, ebx); /* 0x170459B4: push ebx */
    ebx = esp; /* 0x170459B5: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x170459B7: push ecx */
    PUSH32(esp, ecx); /* 0x170459B8: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x170459B9: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x170459BC: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x170459BF: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x170459C0: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x170459C3: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x170459C7: mov ebp, esp */
    ecx = MEM32(ebx + 0x14); /* 0x170459C9: mov ecx, dword ptr [ebx + 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xC8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xC8u; /* 0x170459CC: sub esp, 0xc8 */
    _flag_k = FK_CMP;
    /* test ecx, ecx */ /* 0x170459D2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x170459D4: push esi */
    PUSH32(esp, edi); /* 0x170459D5: push edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17045BDF; /* 0x170459D6: je 0x17045bdf */
L_170459DC:
    fp_push(*(float*)&MEM32(ebx + 0x10)); /* 0x170459DC: fld dword ptr [ebx + 0x10] */
    fp_push(*(float*)&MEM32(0x17001430)); /* 0x170459DF: fld dword ptr [0x17001430] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x170459E5: fucompp  */
    fp_pop(); fp_pop();
    fp_push(0.0); /* 0x170459E7: fldz  */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170459E9: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x170459EB: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_17045B2D; /* 0x170459EE: jnp 0x17045b2d */
L_170459F4:
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x170459F4: fstp dword ptr [ebp - 8] */
    eax = MEM32(ecx); /* 0x170459F7: mov eax, dword ptr [ecx] */
    fp_push(0.0); /* 0x170459F9: fldz  */
    MEM32(ebp + (-0x40)) = eax; /* 0x170459FB: mov dword ptr [ebp - 0x40], eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x170459FE: fstp dword ptr [ebp - 0xc] */
    eax = MEM32(ecx + 0x4); /* 0x17045A01: mov eax, dword ptr [ecx + 4] */
    fp_push(0.0); /* 0x17045A04: fldz  */
    PUSH32(esp, ecx); /* 0x17045A06: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x17045A07: fstp dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x17045A0A: mov dword ptr [ebp - 0x2c], eax */
    fp_push(0.0); /* 0x17045A0D: fldz  */
    eax = ebp + (-0x80); /* 0x17045A0F: lea eax, [ebp - 0x80] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x17045A12: fstp dword ptr [ebp - 0x14] */
    fp_push(0.0); /* 0x17045A15: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x17045A17: fstp dword ptr [ebp - 0x1c] */
    fp_push(0.0); /* 0x17045A1A: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x17045A1C: fstp dword ptr [ebp - 0x20] */
    fp_push(0.0); /* 0x17045A1F: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x17045A21: fstp dword ptr [ebp - 0x24] */
    fp_push(0.0); /* 0x17045A24: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x17045A26: fstp dword ptr [ebp - 0x28] */
    fp_push(0.0); /* 0x17045A29: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x17045A2B: fstp dword ptr [ebp - 0x30] */
    fp_push(0.0); /* 0x17045A2E: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x17045A30: fstp dword ptr [ebp - 0x34] */
    fp_push(0.0); /* 0x17045A33: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x17045A35: fstp dword ptr [ebp - 0x38] */
    fp_push(0.0); /* 0x17045A38: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x17045A3A: fstp dword ptr [ebp - 0x3c] */
    fp_push(1.0); /* 0x17045A3D: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x17045A3F: fstp dword ptr [ebp - 0x18] */
    fp_push(1.0); /* 0x17045A42: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17045A44: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebx + 0x10)); /* 0x17045A47: fld dword ptr [ebx + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17045A4A: fstp dword ptr [esp] */
    PUSH32(esp, eax); /* 0x17045A4D: push eax */
    RECOMP_CALL(sub_17042372); /* 0x17045A4E: call 0x17042372 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebx + 0xC); /* 0x17045A53: mov edi, dword ptr [ebx + 0xc] */
    /* test edi, edi */ /* 0x17045A56: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x80); /* 0x17045A58: lea eax, [ebp - 0x80] */
    PUSH32(esp, eax); /* 0x17045A5B: push eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17045B09; /* 0x17045A5C: je 0x17045b09 */
L_17045A62:
    eax = ebp + (-0xC0); /* 0x17045A62: lea eax, [ebp - 0xc0] */
    PUSH32(esp, eax); /* 0x17045A68: push eax */
    RECOMP_CALL(sub_170419F4); /* 0x17045A69: call 0x170419f4 */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x17045A6E: fldz  */
    esi = MEM32(ebx + 0x8); /* 0x17045A70: mov esi, dword ptr [ebx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x38) = _v; } /* 0x17045A73: fstp dword ptr [esi + 0x38] */
    fp_push(0.0); /* 0x17045A76: fldz  */
    eax = ebp + (-0xC0); /* 0x17045A78: lea eax, [ebp - 0xc0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x34) = _v; } /* 0x17045A7E: fstp dword ptr [esi + 0x34] */
    PUSH32(esp, eax); /* 0x17045A81: push eax */
    fp_push(0.0); /* 0x17045A82: fldz  */
    PUSH32(esp, esi); /* 0x17045A84: push esi */
    PUSH32(esp, esi); /* 0x17045A85: push esi */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x30) = _v; } /* 0x17045A86: fstp dword ptr [esi + 0x30] */
    fp_push(0.0); /* 0x17045A89: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x2C) = _v; } /* 0x17045A8B: fstp dword ptr [esi + 0x2c] */
    fp_push(0.0); /* 0x17045A8E: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x24) = _v; } /* 0x17045A90: fstp dword ptr [esi + 0x24] */
    fp_push(0.0); /* 0x17045A93: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x20) = _v; } /* 0x17045A95: fstp dword ptr [esi + 0x20] */
    fp_push(0.0); /* 0x17045A98: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x1C) = _v; } /* 0x17045A9A: fstp dword ptr [esi + 0x1c] */
    fp_push(0.0); /* 0x17045A9D: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x18) = _v; } /* 0x17045A9F: fstp dword ptr [esi + 0x18] */
    fp_push(0.0); /* 0x17045AA2: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x10) = _v; } /* 0x17045AA4: fstp dword ptr [esi + 0x10] */
    fp_push(0.0); /* 0x17045AA7: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0xC) = _v; } /* 0x17045AA9: fstp dword ptr [esi + 0xc] */
    fp_push(0.0); /* 0x17045AAC: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x8) = _v; } /* 0x17045AAE: fstp dword ptr [esi + 8] */
    fp_push(0.0); /* 0x17045AB1: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x17045AB3: fstp dword ptr [esi + 4] */
    fp_push(1.0); /* 0x17045AB6: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x3C) = _v; } /* 0x17045AB8: fstp dword ptr [esi + 0x3c] */
    fp_push(1.0); /* 0x17045ABB: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x28) = _v; } /* 0x17045ABD: fstp dword ptr [esi + 0x28] */
    fp_push(1.0); /* 0x17045AC0: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x14) = _v; } /* 0x17045AC2: fstp dword ptr [esi + 0x14] */
    fp_push(1.0); /* 0x17045AC5: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x17045AC7: fstp dword ptr [esi] */
    fp_push(*(float*)&MEM32(edi)); /* 0x17045AC9: fld dword ptr [edi] */
    _st[0] = -_st[0]; /* 0x17045ACB: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x30) = _v; } /* 0x17045ACD: fstp dword ptr [esi + 0x30] */
    fp_push(*(float*)&MEM32(edi + 0x4)); /* 0x17045AD0: fld dword ptr [edi + 4] */
    _st[0] = -_st[0]; /* 0x17045AD3: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x34) = _v; } /* 0x17045AD5: fstp dword ptr [esi + 0x34] */
    RECOMP_CALL(sub_17041794); /* 0x17045AD8: call 0x17041794 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x40); /* 0x17045ADD: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x17045AE0: push eax */
    PUSH32(esp, esi); /* 0x17045AE1: push esi */
    PUSH32(esp, esi); /* 0x17045AE2: push esi */
    RECOMP_CALL(sub_17041794); /* 0x17045AE3: call 0x17041794 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x80); /* 0x17045AE8: lea eax, [ebp - 0x80] */
    PUSH32(esp, eax); /* 0x17045AEB: push eax */
    PUSH32(esp, esi); /* 0x17045AEC: push esi */
    PUSH32(esp, esi); /* 0x17045AED: push esi */
    RECOMP_CALL(sub_17041794); /* 0x17045AEE: call 0x17041794 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(edi)); /* 0x17045AF3: fld dword ptr [edi] */
    _st[0] += (double)*(float*)ADDR(esi + 0x30); /* 0x17045AF5: fadd dword ptr [esi + 0x30] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x30) = _v; } /* 0x17045AF8: fstp dword ptr [esi + 0x30] */
    fp_push(*(float*)&MEM32(edi + 0x4)); /* 0x17045AFB: fld dword ptr [edi + 4] */
    _st[0] += (double)*(float*)ADDR(esi + 0x34); /* 0x17045AFE: fadd dword ptr [esi + 0x34] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x34) = _v; } /* 0x17045B01: fstp dword ptr [esi + 0x34] */
    goto L_17045C31; /* 0x17045B04: jmp 0x17045c31 */
L_17045B09:
    esi = MEM32(ebx + 0x8); /* 0x17045B09: mov esi, dword ptr [ebx + 8] */
    PUSH32(esp, esi); /* 0x17045B0C: push esi */
    RECOMP_CALL(sub_170419F4); /* 0x17045B0D: call 0x170419f4 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x40); /* 0x17045B12: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x17045B15: push eax */
    PUSH32(esp, esi); /* 0x17045B16: push esi */
    PUSH32(esp, esi); /* 0x17045B17: push esi */
    RECOMP_CALL(sub_17041794); /* 0x17045B18: call 0x17041794 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x80); /* 0x17045B1D: lea eax, [ebp - 0x80] */
    PUSH32(esp, eax); /* 0x17045B20: push eax */
    PUSH32(esp, esi); /* 0x17045B21: push esi */
    PUSH32(esp, esi); /* 0x17045B22: push esi */
    RECOMP_CALL(sub_17041794); /* 0x17045B23: call 0x17041794 */
    RECOMP_FLAGS_IN();
    goto L_17045C31; /* 0x17045B28: jmp 0x17045c31 */
L_17045B2D:
    eax = MEM32(ebx + 0xC); /* 0x17045B2D: mov eax, dword ptr [ebx + 0xc] */
    /* test eax, eax */ /* 0x17045B30: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    esi = MEM32(ebx + 0x8); /* 0x17045B32: mov esi, dword ptr [ebx + 8] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17045B94; /* 0x17045B35: je 0x17045b94 */
L_17045B37:
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x2C) = _v; } /* 0x17045B37: fstp dword ptr [esi + 0x2c] */
    fp_push(0.0); /* 0x17045B3A: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x24) = _v; } /* 0x17045B3C: fstp dword ptr [esi + 0x24] */
    fp_push(0.0); /* 0x17045B3F: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x20) = _v; } /* 0x17045B41: fstp dword ptr [esi + 0x20] */
    fp_push(0.0); /* 0x17045B44: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x1C) = _v; } /* 0x17045B46: fstp dword ptr [esi + 0x1c] */
    fp_push(0.0); /* 0x17045B49: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x18) = _v; } /* 0x17045B4B: fstp dword ptr [esi + 0x18] */
    fp_push(0.0); /* 0x17045B4E: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x10) = _v; } /* 0x17045B50: fstp dword ptr [esi + 0x10] */
    fp_push(0.0); /* 0x17045B53: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0xC) = _v; } /* 0x17045B55: fstp dword ptr [esi + 0xc] */
    fp_push(0.0); /* 0x17045B58: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x8) = _v; } /* 0x17045B5A: fstp dword ptr [esi + 8] */
    fp_push(0.0); /* 0x17045B5D: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x17045B5F: fstp dword ptr [esi + 4] */
    fp_push(1.0); /* 0x17045B62: fld1  */
    edx = MEM32(ecx); /* 0x17045B64: mov edx, dword ptr [ecx] */
    MEM32(esi) = edx; /* 0x17045B66: mov dword ptr [esi], edx */
    edx = MEM32(ecx + 0x4); /* 0x17045B68: mov edx, dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x28) = _v; } /* 0x17045B6B: fstp dword ptr [esi + 0x28] */
    MEM32(esi + 0x14) = edx; /* 0x17045B6E: mov dword ptr [esi + 0x14], edx */
    fp_push(1.0); /* 0x17045B71: fld1  */
    _st[0] -= (double)*(float*)ADDR(ecx); /* 0x17045B73: fsub dword ptr [ecx] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x17045B75: fmul dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x30) = _v; } /* 0x17045B77: fstp dword ptr [esi + 0x30] */
    fp_push(1.0); /* 0x17045B7A: fld1  */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x4); /* 0x17045B7C: fsub dword ptr [ecx + 4] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x17045B7F: fmul dword ptr [eax + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x34) = _v; } /* 0x17045B82: fstp dword ptr [esi + 0x34] */
    fp_push(0.0); /* 0x17045B85: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x38) = _v; } /* 0x17045B87: fstp dword ptr [esi + 0x38] */
L_17045B8A:
    fp_push(1.0); /* 0x17045B8A: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x3C) = _v; } /* 0x17045B8C: fstp dword ptr [esi + 0x3c] */
    goto L_17045C31; /* 0x17045B8F: jmp 0x17045c31 */
L_17045B94:
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x38) = _v; } /* 0x17045B94: fstp dword ptr [esi + 0x38] */
    fp_push(0.0); /* 0x17045B97: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x34) = _v; } /* 0x17045B99: fstp dword ptr [esi + 0x34] */
    fp_push(0.0); /* 0x17045B9C: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x30) = _v; } /* 0x17045B9E: fstp dword ptr [esi + 0x30] */
    fp_push(0.0); /* 0x17045BA1: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x2C) = _v; } /* 0x17045BA3: fstp dword ptr [esi + 0x2c] */
    fp_push(0.0); /* 0x17045BA6: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x24) = _v; } /* 0x17045BA8: fstp dword ptr [esi + 0x24] */
    fp_push(0.0); /* 0x17045BAB: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x20) = _v; } /* 0x17045BAD: fstp dword ptr [esi + 0x20] */
    fp_push(0.0); /* 0x17045BB0: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x1C) = _v; } /* 0x17045BB2: fstp dword ptr [esi + 0x1c] */
    fp_push(0.0); /* 0x17045BB5: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x18) = _v; } /* 0x17045BB7: fstp dword ptr [esi + 0x18] */
    fp_push(0.0); /* 0x17045BBA: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x10) = _v; } /* 0x17045BBC: fstp dword ptr [esi + 0x10] */
    fp_push(0.0); /* 0x17045BBF: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0xC) = _v; } /* 0x17045BC1: fstp dword ptr [esi + 0xc] */
    fp_push(0.0); /* 0x17045BC4: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x8) = _v; } /* 0x17045BC6: fstp dword ptr [esi + 8] */
    fp_push(0.0); /* 0x17045BC9: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x17045BCB: fstp dword ptr [esi + 4] */
    fp_push(1.0); /* 0x17045BCE: fld1  */
    eax = MEM32(ecx); /* 0x17045BD0: mov eax, dword ptr [ecx] */
    MEM32(esi) = eax; /* 0x17045BD2: mov dword ptr [esi], eax */
    eax = MEM32(ecx + 0x4); /* 0x17045BD4: mov eax, dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x28) = _v; } /* 0x17045BD7: fstp dword ptr [esi + 0x28] */
    MEM32(esi + 0x14) = eax; /* 0x17045BDA: mov dword ptr [esi + 0x14], eax */
    RECOMP_BACKEDGE();
    goto L_17045B8A; /* 0x17045BDD: jmp 0x17045b8a */
L_17045BDF:
    esi = MEM32(ebx + 0x8); /* 0x17045BDF: mov esi, dword ptr [ebx + 8] */
    fp_push(0.0); /* 0x17045BE2: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x38) = _v; } /* 0x17045BE4: fstp dword ptr [esi + 0x38] */
    fp_push(0.0); /* 0x17045BE7: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x34) = _v; } /* 0x17045BE9: fstp dword ptr [esi + 0x34] */
    fp_push(0.0); /* 0x17045BEC: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x30) = _v; } /* 0x17045BEE: fstp dword ptr [esi + 0x30] */
    fp_push(0.0); /* 0x17045BF1: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x2C) = _v; } /* 0x17045BF3: fstp dword ptr [esi + 0x2c] */
    fp_push(0.0); /* 0x17045BF6: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x24) = _v; } /* 0x17045BF8: fstp dword ptr [esi + 0x24] */
    fp_push(0.0); /* 0x17045BFB: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x20) = _v; } /* 0x17045BFD: fstp dword ptr [esi + 0x20] */
    fp_push(0.0); /* 0x17045C00: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x1C) = _v; } /* 0x17045C02: fstp dword ptr [esi + 0x1c] */
    fp_push(0.0); /* 0x17045C05: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x18) = _v; } /* 0x17045C07: fstp dword ptr [esi + 0x18] */
    fp_push(0.0); /* 0x17045C0A: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x10) = _v; } /* 0x17045C0C: fstp dword ptr [esi + 0x10] */
    fp_push(0.0); /* 0x17045C0F: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0xC) = _v; } /* 0x17045C11: fstp dword ptr [esi + 0xc] */
    fp_push(0.0); /* 0x17045C14: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x8) = _v; } /* 0x17045C16: fstp dword ptr [esi + 8] */
    fp_push(0.0); /* 0x17045C19: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x17045C1B: fstp dword ptr [esi + 4] */
    fp_push(1.0); /* 0x17045C1E: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x3C) = _v; } /* 0x17045C20: fstp dword ptr [esi + 0x3c] */
    fp_push(1.0); /* 0x17045C23: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x28) = _v; } /* 0x17045C25: fstp dword ptr [esi + 0x28] */
    fp_push(1.0); /* 0x17045C28: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x14) = _v; } /* 0x17045C2A: fstp dword ptr [esi + 0x14] */
    fp_push(1.0); /* 0x17045C2D: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x17045C2F: fstp dword ptr [esi] */
L_17045C31:
    fp_push(*(float*)&MEM32(ebx + 0x1C)); /* 0x17045C31: fld dword ptr [ebx + 0x1c] */
    fp_push(*(float*)&MEM32(0x17001430)); /* 0x17045C34: fld dword ptr [0x17001430] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x17045C3A: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17045C3C: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x17045C3E: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_17045C8E; /* 0x17045C41: jnp 0x17045c8e */
L_17045C43:
    fp_push(*(float*)&MEM32(ebx + 0x1C)); /* 0x17045C43: fld dword ptr [ebx + 0x1c] */
    PUSH32(esp, ecx); /* 0x17045C46: push ecx */
    eax = ebp + (-0x80); /* 0x17045C47: lea eax, [ebp - 0x80] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17045C4A: fstp dword ptr [esp] */
    PUSH32(esp, eax); /* 0x17045C4D: push eax */
    RECOMP_CALL(sub_17042372); /* 0x17045C4E: call 0x17042372 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebx + 0x18); /* 0x17045C53: mov edi, dword ptr [ebx + 0x18] */
    /* test edi, edi */ /* 0x17045C56: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x80); /* 0x17045C58: lea eax, [ebp - 0x80] */
    PUSH32(esp, eax); /* 0x17045C5B: push eax */
    PUSH32(esp, esi); /* 0x17045C5C: push esi */
    PUSH32(esp, esi); /* 0x17045C5D: push esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17045C89; /* 0x17045C5E: je 0x17045c89 */
L_17045C60:
    fp_push(*(float*)&MEM32(esi + 0x30)); /* 0x17045C60: fld dword ptr [esi + 0x30] */
    _st[0] -= (double)*(float*)ADDR(edi); /* 0x17045C63: fsub dword ptr [edi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x30) = _v; } /* 0x17045C65: fstp dword ptr [esi + 0x30] */
    fp_push(*(float*)&MEM32(esi + 0x34)); /* 0x17045C68: fld dword ptr [esi + 0x34] */
    _st[0] -= (double)*(float*)ADDR(edi + 0x4); /* 0x17045C6B: fsub dword ptr [edi + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x34) = _v; } /* 0x17045C6E: fstp dword ptr [esi + 0x34] */
    RECOMP_CALL(sub_17041794); /* 0x17045C71: call 0x17041794 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(edi)); /* 0x17045C76: fld dword ptr [edi] */
    _st[0] += (double)*(float*)ADDR(esi + 0x30); /* 0x17045C78: fadd dword ptr [esi + 0x30] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x30) = _v; } /* 0x17045C7B: fstp dword ptr [esi + 0x30] */
    fp_push(*(float*)&MEM32(edi + 0x4)); /* 0x17045C7E: fld dword ptr [edi + 4] */
    _st[0] += (double)*(float*)ADDR(esi + 0x34); /* 0x17045C81: fadd dword ptr [esi + 0x34] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x34) = _v; } /* 0x17045C84: fstp dword ptr [esi + 0x34] */
    goto L_17045C8E; /* 0x17045C87: jmp 0x17045c8e */
L_17045C89:
    RECOMP_CALL(sub_17041794); /* 0x17045C89: call 0x17041794 */
    RECOMP_FLAGS_IN();
L_17045C8E:
    eax = MEM32(ebx + 0x20); /* 0x17045C8E: mov eax, dword ptr [ebx + 0x20] */
    /* test eax, eax */ /* 0x17045C91: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17045CA6; /* 0x17045C93: je 0x17045ca6 */
L_17045C95:
    fp_push(*(float*)&MEM32(eax)); /* 0x17045C95: fld dword ptr [eax] */
    _st[0] += (double)*(float*)ADDR(esi + 0x30); /* 0x17045C97: fadd dword ptr [esi + 0x30] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x30) = _v; } /* 0x17045C9A: fstp dword ptr [esi + 0x30] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x17045C9D: fld dword ptr [eax + 4] */
    _st[0] += (double)*(float*)ADDR(esi + 0x34); /* 0x17045CA0: fadd dword ptr [esi + 0x34] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x34) = _v; } /* 0x17045CA3: fstp dword ptr [esi + 0x34] */
L_17045CA6:
    edi = POP32_VAL(esp); /* 0x17045CA6: pop edi */
    eax = esi; /* 0x17045CA7: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x17045CA9: pop esi */
    esp = ebp; /* 0x17045CAA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x17045CAC: pop ebp */
    esp = ebx; /* 0x17045CAD: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x17045CAF: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x17045CB0: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_17045CB8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17045CB8u);

L_17045CB8:
    edi = edi; /* 0x17045CB8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17045CBA: push ebp */
    ebp = esp; /* 0x17045CBB: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x17045CBD: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x17045CC0: push esi */
    PUSH32(esp, edi); /* 0x17045CC1: push edi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17045CC2: push dword ptr [ebp + 0x10] */
    eax = ebp + (-0x10); /* 0x17045CC5: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x17045CC8: push eax */
    RECOMP_CALL(sub_17043C1D); /* 0x17045CC9: call 0x17043c1d */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x17045CCE: fld dword ptr [ebp - 0xc] */
    ecx = MEM32(ebp + 0xC); /* 0x17045CD1: mov ecx, dword ptr [ebp + 0xc] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x17045CD4: fmul dword ptr [ecx + 4] */
    eax = MEM32(ebp + 0x8); /* 0x17045CD7: mov eax, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x17045CDA: fld dword ptr [ebp - 0x10] */
    esi = ebp + (-0x20); /* 0x17045CDD: lea esi, [ebp - 0x20] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x17045CE0: fmul dword ptr [ecx] */
    edi = ebp + (-0x10); /* 0x17045CE2: lea edi, [ebp - 0x10] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17045CE5: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17045CE7: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0xC); /* 0x17045CEA: fmul dword ptr [ecx + 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17045CED: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17045CEF: fld dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x17045CF2: fmul dword ptr [ecx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17045CF5: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x17045CF7: fld dword ptr [ebp - 0x10] */
    _st[0] = -_st[0]; /* 0x17045CFA: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x17045CFC: fstp dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x17045CFF: fld dword ptr [ebp - 0xc] */
    _st[0] = -_st[0]; /* 0x17045D02: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x17045D04: fstp dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17045D07: fld dword ptr [ebp - 8] */
    _st[0] = -_st[0]; /* 0x17045D0A: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x17045D0C: fstp dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17045D0F: fld dword ptr [ebp - 4] */
    _st[0] = -_st[0]; /* 0x17045D12: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x17045D14: fstp dword ptr [ebp - 0x14] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17045D17: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17045D18: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17045D19: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17045D1A: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x17045D1B: fld dword ptr [ebp - 0x10] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x17045D1E: fmul dword ptr [ecx] */
    _st[0] += _st[1]; /* 0x17045D20: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17045D22: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x17045D24: fld dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x17045D27: fmul dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x10) = _v; } /* 0x17045D29: fstp dword ptr [eax + 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17045D2C: fld dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x17045D2F: fmul dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x20) = _v; } /* 0x17045D31: fstp dword ptr [eax + 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17045D34: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x17045D37: fmul dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x30) = _v; } /* 0x17045D39: fstp dword ptr [eax + 0x30] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x17045D3C: fld dword ptr [ebp - 0x10] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x17045D3F: fmul dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x17045D42: fstp dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x17045D45: fld dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x17045D48: fmul dword ptr [ecx + 4] */
    _st[0] += _st[1]; /* 0x17045D4B: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x14) = _v; } /* 0x17045D4D: fstp dword ptr [eax + 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17045D50: fld dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x17045D53: fmul dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x24) = _v; } /* 0x17045D56: fstp dword ptr [eax + 0x24] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17045D59: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x17045D5C: fmul dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x34) = _v; } /* 0x17045D5F: fstp dword ptr [eax + 0x34] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x17045D62: fld dword ptr [ebp - 0x10] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x17045D65: fmul dword ptr [ecx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x17045D68: fstp dword ptr [eax + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x17045D6B: fld dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x17045D6E: fmul dword ptr [ecx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x18) = _v; } /* 0x17045D71: fstp dword ptr [eax + 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17045D74: fld dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x17045D77: fmul dword ptr [ecx + 8] */
    _st[0] += _st[1]; /* 0x17045D7A: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x28) = _v; } /* 0x17045D7C: fstp dword ptr [eax + 0x28] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17045D7F: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x17045D82: fmul dword ptr [ecx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x38) = _v; } /* 0x17045D85: fstp dword ptr [eax + 0x38] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x17045D88: fld dword ptr [ebp - 0x10] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0xC); /* 0x17045D8B: fmul dword ptr [ecx + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x17045D8E: fstp dword ptr [eax + 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x17045D91: fld dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0xC); /* 0x17045D94: fmul dword ptr [ecx + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x1C) = _v; } /* 0x17045D97: fstp dword ptr [eax + 0x1c] */
    edi = POP32_VAL(esp); /* 0x17045D9A: pop edi */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17045D9B: fld dword ptr [ebp - 8] */
    esi = POP32_VAL(esp); /* 0x17045D9E: pop esi */
    _st[0] *= (double)*(float*)ADDR(ecx + 0xC); /* 0x17045D9F: fmul dword ptr [ecx + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x2C) = _v; } /* 0x17045DA2: fstp dword ptr [eax + 0x2c] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17045DA5: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0xC); /* 0x17045DA8: fmul dword ptr [ecx + 0xc] */
    _st[0] += _st[1]; /* 0x17045DAB: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x3C) = _v; } /* 0x17045DAD: fstp dword ptr [eax + 0x3c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17045DB0: fstp st(0) */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17045DB2: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17045DB3: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17045DBB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17045DBBu);

L_17045DBB:
    edi = edi; /* 0x17045DBB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17045DBD: push ebp */
    ebp = esp; /* 0x17045DBE: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x17045DC0: sub esp, 0x10 */
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17045DC3: push dword ptr [ebp + 0xc] */
    eax = ebp + (-0x10); /* 0x17045DC6: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x17045DC9: push eax */
    RECOMP_CALL(sub_17043C1D); /* 0x17045DCA: call 0x17043c1d */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x17045DCF: fld dword ptr [ebp - 0x10] */
    _st[0] *= (double)*(float*)ADDR(0x17001688); /* 0x17045DD2: fmul dword ptr [0x17001688] */
    eax = MEM32(ebp + 0x8); /* 0x17045DD8: mov eax, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x17045DDB: fld dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(0x17001688); /* 0x17045DDE: fmul dword ptr [0x17001688] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17045DE4: fld dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(0x17001688); /* 0x17045DE7: fmul dword ptr [0x17001688] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + 0xC) = _v; } /* 0x17045DED: fst dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(0x17001424)); /* 0x17045DF0: fld dword ptr [0x17001424] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x17045DF6: fld dword ptr [ebp - 0x10] */
    _st[0] *= _st[4]; /* 0x17045DF9: fmul st(4) */
    _st[0] += _st[1]; /* 0x17045DFB: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17045DFD: fstp dword ptr [eax] */
    fp_push(_st[2]); /* 0x17045DFF: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x10)); /* 0x17045E01: fmul dword ptr [ebp - 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x17045E04: fstp dword ptr [eax + 4] */
    fp_push(_st[1]); /* 0x17045E07: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x10)); /* 0x17045E09: fmul dword ptr [ebp - 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x17045E0C: fstp dword ptr [eax + 8] */
    fp_push(0.0); /* 0x17045E0F: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x17045E11: fstp dword ptr [eax + 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x17045E14: fld dword ptr [ebp - 0xc] */
    _st[0] *= _st[4]; /* 0x17045E17: fmul st(4) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x10) = _v; } /* 0x17045E19: fstp dword ptr [eax + 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x17045E1C: fld dword ptr [ebp - 0xc] */
    _st[0] *= _st[3]; /* 0x17045E1F: fmul st(3) */
    _st[0] += _st[1]; /* 0x17045E21: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x14) = _v; } /* 0x17045E23: fstp dword ptr [eax + 0x14] */
    fp_push(_st[1]); /* 0x17045E26: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x17045E28: fmul dword ptr [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x18) = _v; } /* 0x17045E2B: fstp dword ptr [eax + 0x18] */
    fp_push(0.0); /* 0x17045E2E: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x1C) = _v; } /* 0x17045E30: fstp dword ptr [eax + 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17045E33: fld dword ptr [ebp - 8] */
    _st[0] *= _st[4]; /* 0x17045E36: fmul st(4) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x20) = _v; } /* 0x17045E38: fstp dword ptr [eax + 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17045E3B: fld dword ptr [ebp - 8] */
    _st[0] *= _st[3]; /* 0x17045E3E: fmul st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x24) = _v; } /* 0x17045E40: fstp dword ptr [eax + 0x24] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17045E43: fld dword ptr [ebp - 8] */
    _st[0] *= _st[2]; /* 0x17045E46: fmul st(2) */
    _st[0] += _st[1]; /* 0x17045E48: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x28) = _v; } /* 0x17045E4A: fstp dword ptr [eax + 0x28] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17045E4D: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17045E4F: fstp st(0) */
    fp_push(0.0); /* 0x17045E51: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x2C) = _v; } /* 0x17045E53: fstp dword ptr [eax + 0x2c] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17045E56: fld dword ptr [ebp - 4] */
    _st[0] *= _st[2]; /* 0x17045E59: fmul st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x30) = _v; } /* 0x17045E5B: fstp dword ptr [eax + 0x30] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17045E5E: fld dword ptr [ebp - 4] */
    _st[0] *= _st[1]; /* 0x17045E61: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x34) = _v; } /* 0x17045E63: fstp dword ptr [eax + 0x34] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17045E66: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17045E68: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17045E6A: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0xC); /* 0x17045E6D: fmul dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x38) = _v; } /* 0x17045E70: fstp dword ptr [eax + 0x38] */
    fp_push(1.0); /* 0x17045E73: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x3C) = _v; } /* 0x17045E75: fstp dword ptr [eax + 0x3c] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17045E78: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17045E79: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17045E81(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17045E81u);

L_17045E81:
    edi = edi; /* 0x17045E81: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17045E83: push ebp */
    ebp = esp; /* 0x17045E84: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xA0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xA0u; /* 0x17045E86: sub esp, 0xa0 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x17045E8C: push esi */
    esi = MEM32(ebp + 0x14); /* 0x17045E8D: mov esi, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x17045E90: push edi */
    edi = ebp + (-0x80); /* 0x17045E91: lea edi, [ebp - 0x80] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17045E94: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17045E95: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17045E96: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17045E97: movsd dword ptr es:[edi], dword ptr [esi] */
    esi = MEM32(ebp + 0x18); /* 0x17045E98: mov esi, dword ptr [ebp + 0x18] */
    edi = ebp + (-0x50); /* 0x17045E9B: lea edi, [ebp - 0x50] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17045E9E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17045E9F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17045EA0: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17045EA1: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x50))); /* 0x17045EA2: fld dword ptr [ebp - 0x50] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x80)); /* 0x17045EA5: fadd dword ptr [ebp - 0x80] */
    fp_push(*(float*)&MEM32(ebp + (-0x4C))); /* 0x17045EA8: fld dword ptr [ebp - 0x4c] */
    esi = MEM32(ebp + 0x1C); /* 0x17045EAB: mov esi, dword ptr [ebp + 0x1c] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x7C)); /* 0x17045EAE: fadd dword ptr [ebp - 0x7c] */
    edi = ebp + (-0x20); /* 0x17045EB1: lea edi, [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x48))); /* 0x17045EB4: fld dword ptr [ebp - 0x48] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17045EB7: movsd dword ptr es:[edi], dword ptr [esi] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x78)); /* 0x17045EB8: fadd dword ptr [ebp - 0x78] */
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x17045EBB: fld dword ptr [ebp - 0x44] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x74)); /* 0x17045EBE: fadd dword ptr [ebp - 0x74] */
    fp_push(*(float*)&MEM32(ebp + (-0x80))); /* 0x17045EC1: fld dword ptr [ebp - 0x80] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17045EC4: movsd dword ptr es:[edi], dword ptr [esi] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x50)); /* 0x17045EC5: fsub dword ptr [ebp - 0x50] */
    fp_push(*(float*)&MEM32(ebp + (-0x7C))); /* 0x17045EC8: fld dword ptr [ebp - 0x7c] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x4C)); /* 0x17045ECB: fsub dword ptr [ebp - 0x4c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17045ECE: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x17045ECF: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0x78))); /* 0x17045ED2: fld dword ptr [ebp - 0x78] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x48)); /* 0x17045ED5: fsub dword ptr [ebp - 0x48] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17045ED8: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x17045ED9: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x74))); /* 0x17045EDC: fld dword ptr [ebp - 0x74] */
    esi = MEM32(ebp + 0x20); /* 0x17045EDF: mov esi, dword ptr [ebp + 0x20] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x44)); /* 0x17045EE2: fsub dword ptr [ebp - 0x44] */
    edi = ebp + (-0x70); /* 0x17045EE5: lea edi, [ebp - 0x70] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17045EE8: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17045EE9: fstp dword ptr [ebp - 4] */
    fp_push(_st[1]); /* 0x17045EEC: fld st(1) */
    _st[0] *= _st[2]; /* 0x17045EEE: fmul st(2) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17045EF0: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(_st[3]); /* 0x17045EF1: fld st(3) */
    _st[0] *= _st[4]; /* 0x17045EF3: fmul st(4) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17045EF5: movsd dword ptr es:[edi], dword ptr [esi] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17045EF6: faddp st(1) */
    fp_push(_st[4]); /* 0x17045EF8: fld st(4) */
    _st[0] *= _st[5]; /* 0x17045EFA: fmul st(5) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17045EFC: movsd dword ptr es:[edi], dword ptr [esi] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17045EFD: faddp st(1) */
    fp_push(_st[5]); /* 0x17045EFF: fld st(5) */
    _st[0] *= _st[6]; /* 0x17045F01: fmul st(6) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17045F03: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17045F05: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x17045F08: fmul dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17045F0B: fld dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x17045F0E: fmul dword ptr [ebp - 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17045F11: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x17045F13: fld dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x17045F16: fmul dword ptr [ebp - 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17045F19: faddp st(1) */
    fp_push(_st[2]); /* 0x17045F1B: fld st(2) */
    _st[0] *= _st[3]; /* 0x17045F1D: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17045F1F: faddp st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x17045F21: fcompp  */
    fp_pop(); fp_pop();
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17045F23: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17045F25: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17045F27: fstp st(0) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17045F29: fnstsw ax */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17045F2B: fstp st(0) */
    /* test HI8(eax), 0x41u */ /* 0x17045F2D: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17045F30: fstp st(0) */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17045F5E; /* 0x17045F32: jne 0x17045f5e */
L_17045F34:
    fp_push(*(float*)&MEM32(ebp + (-0x80))); /* 0x17045F34: fld dword ptr [ebp - 0x80] */
    esi = ebp + (-0x30); /* 0x17045F37: lea esi, [ebp - 0x30] */
    _st[0] = -_st[0]; /* 0x17045F3A: fchs  */
    edi = ebp + (-0x80); /* 0x17045F3C: lea edi, [ebp - 0x80] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x17045F3F: fstp dword ptr [ebp - 0x30] */
    fp_push(*(float*)&MEM32(ebp + (-0x7C))); /* 0x17045F42: fld dword ptr [ebp - 0x7c] */
    _st[0] = -_st[0]; /* 0x17045F45: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x17045F47: fstp dword ptr [ebp - 0x2c] */
    fp_push(*(float*)&MEM32(ebp + (-0x78))); /* 0x17045F4A: fld dword ptr [ebp - 0x78] */
    _st[0] = -_st[0]; /* 0x17045F4D: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x17045F4F: fstp dword ptr [ebp - 0x28] */
    fp_push(*(float*)&MEM32(ebp + (-0x74))); /* 0x17045F52: fld dword ptr [ebp - 0x74] */
    _st[0] = -_st[0]; /* 0x17045F55: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x17045F57: fstp dword ptr [ebp - 0x24] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17045F5A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17045F5B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17045F5C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17045F5D: movsd dword ptr es:[edi], dword ptr [esi] */
L_17045F5E:
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x17045F5E: fld dword ptr [ebp - 0x20] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x50)); /* 0x17045F61: fadd dword ptr [ebp - 0x50] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x17045F64: fld dword ptr [ebp - 0x1c] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x4C)); /* 0x17045F67: fadd dword ptr [ebp - 0x4c] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x17045F6A: fld dword ptr [ebp - 0x18] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x48)); /* 0x17045F6D: fadd dword ptr [ebp - 0x48] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x17045F70: fld dword ptr [ebp - 0x14] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x44)); /* 0x17045F73: fadd dword ptr [ebp - 0x44] */
    fp_push(*(float*)&MEM32(ebp + (-0x50))); /* 0x17045F76: fld dword ptr [ebp - 0x50] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x20)); /* 0x17045F79: fsub dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x4C))); /* 0x17045F7C: fld dword ptr [ebp - 0x4c] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x1C)); /* 0x17045F7F: fsub dword ptr [ebp - 0x1c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x17045F82: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0x48))); /* 0x17045F85: fld dword ptr [ebp - 0x48] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x18)); /* 0x17045F88: fsub dword ptr [ebp - 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x17045F8B: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x17045F8E: fld dword ptr [ebp - 0x44] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x14)); /* 0x17045F91: fsub dword ptr [ebp - 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17045F94: fstp dword ptr [ebp - 4] */
    fp_push(_st[1]); /* 0x17045F97: fld st(1) */
    _st[0] *= _st[2]; /* 0x17045F99: fmul st(2) */
    fp_push(_st[3]); /* 0x17045F9B: fld st(3) */
    _st[0] *= _st[4]; /* 0x17045F9D: fmul st(4) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17045F9F: faddp st(1) */
    fp_push(_st[4]); /* 0x17045FA1: fld st(4) */
    _st[0] *= _st[5]; /* 0x17045FA3: fmul st(5) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17045FA5: faddp st(1) */
    fp_push(_st[5]); /* 0x17045FA7: fld st(5) */
    _st[0] *= _st[6]; /* 0x17045FA9: fmul st(6) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17045FAB: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17045FAD: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x17045FB0: fmul dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17045FB3: fld dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x17045FB6: fmul dword ptr [ebp - 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17045FB9: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x17045FBB: fld dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x17045FBE: fmul dword ptr [ebp - 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17045FC1: faddp st(1) */
    fp_push(_st[2]); /* 0x17045FC3: fld st(2) */
    _st[0] *= _st[3]; /* 0x17045FC5: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17045FC7: faddp st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x17045FC9: fcompp  */
    fp_pop(); fp_pop();
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17045FCB: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17045FCD: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17045FCF: fstp st(0) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17045FD1: fnstsw ax */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17045FD3: fstp st(0) */
    /* test HI8(eax), 0x41u */ /* 0x17045FD5: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17045FD8: fstp st(0) */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_17046006; /* 0x17045FDA: jne 0x17046006 */
L_17045FDC:
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x17045FDC: fld dword ptr [ebp - 0x20] */
    esi = ebp + (-0x30); /* 0x17045FDF: lea esi, [ebp - 0x30] */
    _st[0] = -_st[0]; /* 0x17045FE2: fchs  */
    edi = ebp + (-0x20); /* 0x17045FE4: lea edi, [ebp - 0x20] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x17045FE7: fstp dword ptr [ebp - 0x30] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x17045FEA: fld dword ptr [ebp - 0x1c] */
    _st[0] = -_st[0]; /* 0x17045FED: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x17045FEF: fstp dword ptr [ebp - 0x2c] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x17045FF2: fld dword ptr [ebp - 0x18] */
    _st[0] = -_st[0]; /* 0x17045FF5: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x17045FF7: fstp dword ptr [ebp - 0x28] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x17045FFA: fld dword ptr [ebp - 0x14] */
    _st[0] = -_st[0]; /* 0x17045FFD: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x17045FFF: fstp dword ptr [ebp - 0x24] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17046002: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17046003: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17046004: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17046005: movsd dword ptr es:[edi], dword ptr [esi] */
L_17046006:
    fp_push(*(float*)&MEM32(ebp + (-0x70))); /* 0x17046006: fld dword ptr [ebp - 0x70] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x20)); /* 0x17046009: fadd dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x6C))); /* 0x1704600C: fld dword ptr [ebp - 0x6c] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x1C)); /* 0x1704600F: fadd dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0x68))); /* 0x17046012: fld dword ptr [ebp - 0x68] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x18)); /* 0x17046015: fadd dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0x64))); /* 0x17046018: fld dword ptr [ebp - 0x64] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x14)); /* 0x1704601B: fadd dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x1704601E: fld dword ptr [ebp - 0x20] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x70)); /* 0x17046021: fsub dword ptr [ebp - 0x70] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x17046024: fld dword ptr [ebp - 0x1c] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x6C)); /* 0x17046027: fsub dword ptr [ebp - 0x6c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1704602A: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x1704602D: fld dword ptr [ebp - 0x18] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x68)); /* 0x17046030: fsub dword ptr [ebp - 0x68] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x17046033: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x17046036: fld dword ptr [ebp - 0x14] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x64)); /* 0x17046039: fsub dword ptr [ebp - 0x64] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x1704603C: fstp dword ptr [ebp - 4] */
    fp_push(_st[1]); /* 0x1704603F: fld st(1) */
    _st[0] *= _st[2]; /* 0x17046041: fmul st(2) */
    fp_push(_st[3]); /* 0x17046043: fld st(3) */
    _st[0] *= _st[4]; /* 0x17046045: fmul st(4) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17046047: faddp st(1) */
    fp_push(_st[4]); /* 0x17046049: fld st(4) */
    _st[0] *= _st[5]; /* 0x1704604B: fmul st(5) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704604D: faddp st(1) */
    fp_push(_st[5]); /* 0x1704604F: fld st(5) */
    _st[0] *= _st[6]; /* 0x17046051: fmul st(6) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17046053: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17046055: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x17046058: fmul dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x1704605B: fld dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x1704605E: fmul dword ptr [ebp - 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17046061: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x17046063: fld dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x17046066: fmul dword ptr [ebp - 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17046069: faddp st(1) */
    fp_push(_st[2]); /* 0x1704606B: fld st(2) */
    _st[0] *= _st[3]; /* 0x1704606D: fmul st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704606F: faddp st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x17046071: fcompp  */
    fp_pop(); fp_pop();
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17046073: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17046075: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17046077: fstp st(0) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17046079: fnstsw ax */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704607B: fstp st(0) */
    /* test HI8(eax), 0x41u */ /* 0x1704607D: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17046080: fstp st(0) */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_170460AE; /* 0x17046082: jne 0x170460ae */
L_17046084:
    fp_push(*(float*)&MEM32(ebp + (-0x70))); /* 0x17046084: fld dword ptr [ebp - 0x70] */
    esi = ebp + (-0x30); /* 0x17046087: lea esi, [ebp - 0x30] */
    _st[0] = -_st[0]; /* 0x1704608A: fchs  */
    edi = ebp + (-0x70); /* 0x1704608C: lea edi, [ebp - 0x70] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x1704608F: fstp dword ptr [ebp - 0x30] */
    fp_push(*(float*)&MEM32(ebp + (-0x6C))); /* 0x17046092: fld dword ptr [ebp - 0x6c] */
    _st[0] = -_st[0]; /* 0x17046095: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x17046097: fstp dword ptr [ebp - 0x2c] */
    fp_push(*(float*)&MEM32(ebp + (-0x68))); /* 0x1704609A: fld dword ptr [ebp - 0x68] */
    _st[0] = -_st[0]; /* 0x1704609D: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x1704609F: fstp dword ptr [ebp - 0x28] */
    fp_push(*(float*)&MEM32(ebp + (-0x64))); /* 0x170460A2: fld dword ptr [ebp - 0x64] */
    _st[0] = -_st[0]; /* 0x170460A5: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x170460A7: fstp dword ptr [ebp - 0x24] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170460AA: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170460AB: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170460AC: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170460AD: movsd dword ptr es:[edi], dword ptr [esi] */
L_170460AE:
    eax = ebp + (-0x50); /* 0x170460AE: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x170460B1: push eax */
    eax = ebp + (-0x30); /* 0x170460B2: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x170460B5: push eax */
    RECOMP_CALL(sub_1704372E); /* 0x170460B6: call 0x1704372e */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x80); /* 0x170460BB: lea eax, [ebp - 0x80] */
    PUSH32(esp, eax); /* 0x170460BE: push eax */
    eax = ebp + (-0x30); /* 0x170460BF: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x170460C2: push eax */
    eax = ebp + (-0x40); /* 0x170460C3: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x170460C6: push eax */
    RECOMP_CALL(sub_1704358E); /* 0x170460C7: call 0x1704358e */
    RECOMP_FLAGS_IN();
    esi = ebp + (-0x40); /* 0x170460CC: lea esi, [ebp - 0x40] */
    edi = ebp + (-0x60); /* 0x170460CF: lea edi, [ebp - 0x60] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170460D2: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170460D3: movsd dword ptr es:[edi], dword ptr [esi] */
    eax = ebp + (-0x60); /* 0x170460D4: lea eax, [ebp - 0x60] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170460D7: movsd dword ptr es:[edi], dword ptr [esi] */
    PUSH32(esp, eax); /* 0x170460D8: push eax */
    eax = ebp + (-0x90); /* 0x170460D9: lea eax, [ebp - 0x90] */
    PUSH32(esp, eax); /* 0x170460DF: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170460E0: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_17043809); /* 0x170460E1: call 0x17043809 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x20); /* 0x170460E6: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x170460E9: push eax */
    eax = ebp + (-0x30); /* 0x170460EA: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x170460ED: push eax */
    eax = ebp + (-0x40); /* 0x170460EE: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x170460F1: push eax */
    RECOMP_CALL(sub_1704358E); /* 0x170460F2: call 0x1704358e */
    RECOMP_FLAGS_IN();
    esi = ebp + (-0x40); /* 0x170460F7: lea esi, [ebp - 0x40] */
    edi = ebp + (-0x60); /* 0x170460FA: lea edi, [ebp - 0x60] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170460FD: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170460FE: movsd dword ptr es:[edi], dword ptr [esi] */
    eax = ebp + (-0x60); /* 0x170460FF: lea eax, [ebp - 0x60] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17046102: movsd dword ptr es:[edi], dword ptr [esi] */
    PUSH32(esp, eax); /* 0x17046103: push eax */
    eax = ebp + (-0x10); /* 0x17046104: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x17046107: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17046108: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_17043809); /* 0x17046109: call 0x17043809 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x60); /* 0x1704610E: lea eax, [ebp - 0x60] */
    fp_push(*(float*)&MEM32(ebp + (-0x90))); /* 0x17046111: fld dword ptr [ebp - 0x90] */
    PUSH32(esp, eax); /* 0x17046117: push eax */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x10)); /* 0x17046118: fadd dword ptr [ebp - 0x10] */
    eax = ebp + (-0xA0); /* 0x1704611B: lea eax, [ebp - 0xa0] */
    fp_push(*(float*)&MEM32(ebp + (-0x8C))); /* 0x17046121: fld dword ptr [ebp - 0x8c] */
    PUSH32(esp, eax); /* 0x17046127: push eax */
    _st[0] += (double)*(float*)ADDR(ebp + (-0xC)); /* 0x17046128: fadd dword ptr [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x1704612B: fstp dword ptr [ebp - 0x3c] */
    fp_push(*(float*)&MEM32(ebp + (-0x88))); /* 0x1704612E: fld dword ptr [ebp - 0x88] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x8)); /* 0x17046134: fadd dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x17046137: fstp dword ptr [ebp - 0x38] */
    fp_push(*(float*)&MEM32(ebp + (-0x84))); /* 0x1704613A: fld dword ptr [ebp - 0x84] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x4)); /* 0x17046140: fadd dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(0x17005324)); /* 0x17046143: fld dword ptr [0x17005324] */
    fp_push(_st[2]); /* 0x17046149: fld st(2) */
    _st[0] *= _st[1]; /* 0x1704614B: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x60)) = _v; } /* 0x1704614D: fstp dword ptr [ebp - 0x60] */
    fp_push(*(float*)&MEM32(ebp + (-0x3C))); /* 0x17046150: fld dword ptr [ebp - 0x3c] */
    _st[0] *= _st[1]; /* 0x17046153: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x5C)) = _v; } /* 0x17046155: fstp dword ptr [ebp - 0x5c] */
    fp_push(*(float*)&MEM32(ebp + (-0x38))); /* 0x17046158: fld dword ptr [ebp - 0x38] */
    _st[0] *= _st[1]; /* 0x1704615B: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x58)) = _v; } /* 0x1704615D: fstp dword ptr [ebp - 0x58] */
    fp_push(_st[1]); /* 0x17046160: fld st(1) */
    _st[0] *= _st[1]; /* 0x17046162: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x54)) = _v; } /* 0x17046164: fstp dword ptr [ebp - 0x54] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17046167: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17046169: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704616B: fstp st(0) */
    RECOMP_CALL(sub_170438AE); /* 0x1704616D: call 0x170438ae */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0xA0); /* 0x17046172: lea eax, [ebp - 0xa0] */
    PUSH32(esp, eax); /* 0x17046178: push eax */
    eax = ebp + (-0x50); /* 0x17046179: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x1704617C: push eax */
    eax = ebp + (-0x40); /* 0x1704617D: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x17046180: push eax */
    RECOMP_CALL(sub_1704358E); /* 0x17046181: call 0x1704358e */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x17046186: mov edi, dword ptr [ebp + 8] */
    esi = ebp + (-0x40); /* 0x17046189: lea esi, [ebp - 0x40] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704618C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704618D: movsd dword ptr es:[edi], dword ptr [esi] */
    eax = ebp + (-0x20); /* 0x1704618E: lea eax, [ebp - 0x20] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17046191: movsd dword ptr es:[edi], dword ptr [esi] */
    PUSH32(esp, eax); /* 0x17046192: push eax */
    eax = ebp + (-0x30); /* 0x17046193: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x17046196: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17046197: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_1704372E); /* 0x17046198: call 0x1704372e */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x50); /* 0x1704619D: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x170461A0: push eax */
    eax = ebp + (-0x30); /* 0x170461A1: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x170461A4: push eax */
    eax = ebp + (-0x40); /* 0x170461A5: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x170461A8: push eax */
    RECOMP_CALL(sub_1704358E); /* 0x170461A9: call 0x1704358e */
    RECOMP_FLAGS_IN();
    esi = ebp + (-0x40); /* 0x170461AE: lea esi, [ebp - 0x40] */
    edi = ebp + (-0x60); /* 0x170461B1: lea edi, [ebp - 0x60] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170461B4: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170461B5: movsd dword ptr es:[edi], dword ptr [esi] */
    eax = ebp + (-0x60); /* 0x170461B6: lea eax, [ebp - 0x60] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170461B9: movsd dword ptr es:[edi], dword ptr [esi] */
    PUSH32(esp, eax); /* 0x170461BA: push eax */
    eax = ebp + (-0x90); /* 0x170461BB: lea eax, [ebp - 0x90] */
    PUSH32(esp, eax); /* 0x170461C1: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170461C2: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_17043809); /* 0x170461C3: call 0x17043809 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x70); /* 0x170461C8: lea eax, [ebp - 0x70] */
    PUSH32(esp, eax); /* 0x170461CB: push eax */
    eax = ebp + (-0x30); /* 0x170461CC: lea eax, [ebp - 0x30] */
    PUSH32(esp, eax); /* 0x170461CF: push eax */
    eax = ebp + (-0x40); /* 0x170461D0: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x170461D3: push eax */
    RECOMP_CALL(sub_1704358E); /* 0x170461D4: call 0x1704358e */
    RECOMP_FLAGS_IN();
    esi = ebp + (-0x40); /* 0x170461D9: lea esi, [ebp - 0x40] */
    edi = ebp + (-0x60); /* 0x170461DC: lea edi, [ebp - 0x60] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170461DF: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170461E0: movsd dword ptr es:[edi], dword ptr [esi] */
    eax = ebp + (-0x60); /* 0x170461E1: lea eax, [ebp - 0x60] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170461E4: movsd dword ptr es:[edi], dword ptr [esi] */
    PUSH32(esp, eax); /* 0x170461E5: push eax */
    eax = ebp + (-0x10); /* 0x170461E6: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x170461E9: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170461EA: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_17043809); /* 0x170461EB: call 0x17043809 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x60); /* 0x170461F0: lea eax, [ebp - 0x60] */
    fp_push(*(float*)&MEM32(ebp + (-0x90))); /* 0x170461F3: fld dword ptr [ebp - 0x90] */
    PUSH32(esp, eax); /* 0x170461F9: push eax */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x10)); /* 0x170461FA: fadd dword ptr [ebp - 0x10] */
    eax = ebp + (-0xA0); /* 0x170461FD: lea eax, [ebp - 0xa0] */
    fp_push(*(float*)&MEM32(ebp + (-0x8C))); /* 0x17046203: fld dword ptr [ebp - 0x8c] */
    PUSH32(esp, eax); /* 0x17046209: push eax */
    _st[0] += (double)*(float*)ADDR(ebp + (-0xC)); /* 0x1704620A: fadd dword ptr [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x1704620D: fstp dword ptr [ebp - 0x3c] */
    fp_push(*(float*)&MEM32(ebp + (-0x88))); /* 0x17046210: fld dword ptr [ebp - 0x88] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x8)); /* 0x17046216: fadd dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x17046219: fstp dword ptr [ebp - 0x38] */
    fp_push(*(float*)&MEM32(ebp + (-0x84))); /* 0x1704621C: fld dword ptr [ebp - 0x84] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x4)); /* 0x17046222: fadd dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(0x17005324)); /* 0x17046225: fld dword ptr [0x17005324] */
    fp_push(_st[2]); /* 0x1704622B: fld st(2) */
    _st[0] *= _st[1]; /* 0x1704622D: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x60)) = _v; } /* 0x1704622F: fstp dword ptr [ebp - 0x60] */
    fp_push(*(float*)&MEM32(ebp + (-0x3C))); /* 0x17046232: fld dword ptr [ebp - 0x3c] */
    _st[0] *= _st[1]; /* 0x17046235: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x5C)) = _v; } /* 0x17046237: fstp dword ptr [ebp - 0x5c] */
    fp_push(*(float*)&MEM32(ebp + (-0x38))); /* 0x1704623A: fld dword ptr [ebp - 0x38] */
    _st[0] *= _st[1]; /* 0x1704623D: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x58)) = _v; } /* 0x1704623F: fstp dword ptr [ebp - 0x58] */
    fp_push(_st[1]); /* 0x17046242: fld st(1) */
    _st[0] *= _st[1]; /* 0x17046244: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x54)) = _v; } /* 0x17046246: fstp dword ptr [ebp - 0x54] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17046249: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704624B: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704624D: fstp st(0) */
    RECOMP_CALL(sub_170438AE); /* 0x1704624F: call 0x170438ae */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0xA0); /* 0x17046254: lea eax, [ebp - 0xa0] */
    PUSH32(esp, eax); /* 0x1704625A: push eax */
    eax = ebp + (-0x20); /* 0x1704625B: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x1704625E: push eax */
    eax = ebp + (-0x40); /* 0x1704625F: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x17046262: push eax */
    RECOMP_CALL(sub_1704358E); /* 0x17046263: call 0x1704358e */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0xC); /* 0x17046268: mov edi, dword ptr [ebp + 0xc] */
    esi = ebp + (-0x40); /* 0x1704626B: lea esi, [ebp - 0x40] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704626E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704626F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17046270: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17046271: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = MEM32(ebp + 0x10); /* 0x17046272: mov edi, dword ptr [ebp + 0x10] */
    esi = ebp + (-0x20); /* 0x17046275: lea esi, [ebp - 0x20] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17046278: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17046279: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704627A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704627B: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x1704627C: pop edi */
    esi = POP32_VAL(esp); /* 0x1704627D: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704627E: leave  */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x1704627F: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_17046287(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17046287u);

L_17046287:
    edi = edi; /* 0x17046287: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17046289: push ebp */
    ebp = esp; /* 0x1704628A: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x1704628C: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0xC); /* 0x1704628F: mov eax, dword ptr [ecx + 0xc] */
    /* test eax, eax */ /* 0x17046292: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704629A; /* 0x17046294: je 0x1704629a */
L_17046296:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17046296: dec eax */
    _flag_k = FK_DEC;
    MEM32(ecx + 0xC) = eax; /* 0x17046297: mov dword ptr [ecx + 0xc], eax */
L_1704629A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1704629A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x1704629C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1704629D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170462A5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170462A5u);

L_170462A5:
    edi = edi; /* 0x170462A5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170462A7: push ebp */
    ebp = esp; /* 0x170462A8: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x170462AA: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0xC); /* 0x170462AD: mov eax, dword ptr [ecx + 0xc] */
    if (6u) _cf = (((eax) >> 26) & 1u); /* 0x170462B0: shl eax, 6 */
    if (6u) { _flag_a = recomp_flags_pack((eax << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 6u; /* 0x170462B0: shl eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x8); /* 0x170462B3: add eax, dword ptr [ecx + 8] */
    _flag_k = FK_ADD;
    ebp = POP32_VAL(esp); /* 0x170462B6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x170462B7: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_170462BF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170462BFu);

L_170462BF:
    eax = MEM32(ecx + 0x8); /* 0x170462BF: mov eax, dword ptr [ecx + 8] */
    /* test eax, eax */ /* 0x170462C2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = 0x17005328u; /* 0x170462C4: mov dword ptr [ecx], 0x17005328 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170462D9; /* 0x170462CA: je 0x170462d9 */
L_170462CC:
    ecx = (uint32_t)MEM8(eax + (-0x1)); /* 0x170462CC: movzx ecx, byte ptr [eax - 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x170462D0: sub eax, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x170462D2: push eax */
    RECOMP_CALL(sub_1721B010); /* 0x170462D3: call 0x1721b010 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x170462D8: pop ecx */
L_170462D9:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x170462D9: ret  */
    RECOMP_REGS_OUT();
}
