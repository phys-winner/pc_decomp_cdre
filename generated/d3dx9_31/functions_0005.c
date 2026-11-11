#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_17040DAE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17040DAEu);

L_17040DAE:
    { _itail_tgt = (uint32_t)(MEM32(0x17224118)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17040DB9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17040DB9u);

L_17040DB9:
    edi = edi; /* 0x17040DB9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17040DBB: push ebp */
    ebp = esp; /* 0x17040DBC: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x17040DBE: mov ecx, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x10); /* 0x17040DC1: mov edx, dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(edx)); /* 0x17040DC4: fld dword ptr [edx] */
    eax = MEM32(ebp + 0x8); /* 0x17040DC6: mov eax, dword ptr [ebp + 8] */
    _st[0] -= (double)*(float*)ADDR(ecx); /* 0x17040DC9: fsub dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x17040DCB: push esi */
    esi = MEM32(ebp + 0x14); /* 0x17040DCC: mov esi, dword ptr [ebp + 0x14] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x18); /* 0x17040DCF: fmul dword ptr [ebp + 0x18] */
    fp_push(*(float*)&MEM32(esi)); /* 0x17040DD2: fld dword ptr [esi] */
    _st[0] -= (double)*(float*)ADDR(ecx); /* 0x17040DD4: fsub dword ptr [ecx] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x1C); /* 0x17040DD6: fmul dword ptr [ebp + 0x1c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17040DD9: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(ecx); /* 0x17040DDB: fadd dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17040DDD: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x17040DDF: fld dword ptr [edx + 4] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x4); /* 0x17040DE2: fsub dword ptr [ecx + 4] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x18); /* 0x17040DE5: fmul dword ptr [ebp + 0x18] */
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x17040DE8: fld dword ptr [esi + 4] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x4); /* 0x17040DEB: fsub dword ptr [ecx + 4] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x1C); /* 0x17040DEE: fmul dword ptr [ebp + 0x1c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17040DF1: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + 0x4); /* 0x17040DF3: fadd dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x17040DF6: fstp dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(edx + 0x8)); /* 0x17040DF9: fld dword ptr [edx + 8] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x8); /* 0x17040DFC: fsub dword ptr [ecx + 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x18); /* 0x17040DFF: fmul dword ptr [ebp + 0x18] */
    fp_push(*(float*)&MEM32(esi + 0x8)); /* 0x17040E02: fld dword ptr [esi + 8] */
    esi = POP32_VAL(esp); /* 0x17040E05: pop esi */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x8); /* 0x17040E06: fsub dword ptr [ecx + 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x1C); /* 0x17040E09: fmul dword ptr [ebp + 0x1c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17040E0C: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + 0x8); /* 0x17040E0E: fadd dword ptr [ecx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x17040E11: fstp dword ptr [eax + 8] */
    ebp = POP32_VAL(esp); /* 0x17040E14: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x17040E15: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_17040E1D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17040E1Du);

L_17040E1D:
    edi = edi; /* 0x17040E1D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17040E1F: push ebp */
    ebp = esp; /* 0x17040E20: mov ebp, esp */
    PUSH32(esp, 1); /* 0x17040E22: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x17040E24: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17040E29: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x1722404C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17040E35(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17040E35u);

L_17040E35:
    { _itail_tgt = (uint32_t)(MEM32(0x1722404C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17040E40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17040E40u);

L_17040E40:
    edi = edi; /* 0x17040E40: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17040E42: push ebp */
    ebp = esp; /* 0x17040E43: mov ebp, esp */
    PUSH32(esp, 1); /* 0x17040E45: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x17040E47: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17040E4C: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x17224144)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17040E58(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17040E58u);

L_17040E58:
    { _itail_tgt = (uint32_t)(MEM32(0x17224144)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17040E63(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17040E63u);

L_17040E63:
    edi = edi; /* 0x17040E63: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17040E65: push ebp */
    ebp = esp; /* 0x17040E66: mov ebp, esp */
    PUSH32(esp, 1); /* 0x17040E68: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x17040E6A: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17040E6F: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x17224070)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17040E7B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17040E7Bu);

L_17040E7B:
    { _itail_tgt = (uint32_t)(MEM32(0x17224070)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17040E86(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17040E86u);

L_17040E86:
    edi = edi; /* 0x17040E86: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17040E88: push ebp */
    ebp = esp; /* 0x17040E89: mov ebp, esp */
    PUSH32(esp, 1); /* 0x17040E8B: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x17040E8D: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17040E92: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x17224148)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17040E9E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17040E9Eu);

L_17040E9E:
    { _itail_tgt = (uint32_t)(MEM32(0x17224148)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17040EA9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17040EA9u);

L_17040EA9:
    edi = edi; /* 0x17040EA9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17040EAB: push ebp */
    ebp = esp; /* 0x17040EAC: mov ebp, esp */
    PUSH32(esp, 1); /* 0x17040EAE: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x17040EB0: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17040EB5: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x17224060)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17040EC1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17040EC1u);

L_17040EC1:
    { _itail_tgt = (uint32_t)(MEM32(0x17224060)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17040ECC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17040ECCu);

L_17040ECC:
    edi = edi; /* 0x17040ECC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17040ECE: push ebp */
    ebp = esp; /* 0x17040ECF: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x17040ED1: sub esp, 0xc */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x10); /* 0x17040ED4: mov ecx, dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0xC); /* 0x17040ED7: mov eax, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ecx + 0x20)); /* 0x17040EDA: fld dword ptr [ecx + 0x20] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x17040EDD: fmul dword ptr [eax + 8] */
    PUSH32(esp, esi); /* 0x17040EE0: push esi */
    fp_push(*(float*)&MEM32(ecx + 0x10)); /* 0x17040EE1: fld dword ptr [ecx + 0x10] */
    PUSH32(esp, edi); /* 0x17040EE4: push edi */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x17040EE5: fmul dword ptr [eax + 4] */
    esi = ebp + (-0xC); /* 0x17040EE8: lea esi, [ebp - 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17040EEB: faddp st(1) */
    fp_push(*(float*)&MEM32(eax)); /* 0x17040EED: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x17040EEF: fmul dword ptr [ecx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17040EF1: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x17040EF3: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ecx + 0x24)); /* 0x17040EF6: fld dword ptr [ecx + 0x24] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x17040EF9: fmul dword ptr [eax + 8] */
    fp_push(*(float*)&MEM32(ecx + 0x14)); /* 0x17040EFC: fld dword ptr [ecx + 0x14] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x17040EFF: fmul dword ptr [eax + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17040F02: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x17040F04: fld dword ptr [ecx + 4] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x17040F07: fmul dword ptr [eax] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17040F09: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x17040F0B: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ecx + 0x28)); /* 0x17040F0E: fld dword ptr [ecx + 0x28] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x17040F11: fmul dword ptr [eax + 8] */
    fp_push(*(float*)&MEM32(ecx + 0x18)); /* 0x17040F14: fld dword ptr [ecx + 0x18] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x17040F17: fmul dword ptr [eax + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17040F1A: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x17040F1C: fld dword ptr [ecx + 8] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x17040F1F: fmul dword ptr [eax] */
    eax = MEM32(ebp + 0x8); /* 0x17040F21: mov eax, dword ptr [ebp + 8] */
    edi = eax; /* 0x17040F24: mov edi, eax */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17040F26: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17040F28: fstp dword ptr [ebp - 4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17040F2B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17040F2C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17040F2D: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x17040F2E: pop edi */
    esi = POP32_VAL(esp); /* 0x17040F2F: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17040F30: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17040F31: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17040F39(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17040F39u);

L_17040F39:
    edi = edi; /* 0x17040F39: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17040F3B: push ebp */
    ebp = esp; /* 0x17040F3C: mov ebp, esp */
    PUSH32(esp, 1); /* 0x17040F3E: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x17040F40: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17040F45: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x1722414C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17040F51(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17040F51u);

L_17040F51:
    { _itail_tgt = (uint32_t)(MEM32(0x1722414C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17040F5C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17040F5Cu);

L_17040F5C:
    edi = edi; /* 0x17040F5C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17040F5E: push ebp */
    ebp = esp; /* 0x17040F5F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x17040F61: sub esp, 0xc */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x1C); /* 0x17040F64: mov eax, dword ptr [ebp + 0x1c] */
    /* test eax, eax */ /* 0x17040F67: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x17040F69: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x17040F6A: mov ebx, dword ptr [ebp + 8] */
    MEM32(ebp + 0x8) = ebx; /* 0x17040F6D: mov dword ptr [ebp + 8], ebx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17040FD4; /* 0x17040F70: jbe 0x17040fd4 */
L_17040F72:
    edx = MEM32(ebp + 0x18); /* 0x17040F72: mov edx, dword ptr [ebp + 0x18] */
    ecx = MEM32(ebp + 0x10); /* 0x17040F75: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x17040F78: push esi */
    PUSH32(esp, edi); /* 0x17040F79: push edi */
L_17040F7A:
    fp_push(*(float*)&MEM32(edx + 0x10)); /* 0x17040F7A: fld dword ptr [edx + 0x10] */
    edi = ebx; /* 0x17040F7D: mov edi, ebx */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x17040F7F: fmul dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + 0xC); /* 0x17040F82: add ebx, dword ptr [ebp + 0xc] */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(edx + 0x20)); /* 0x17040F85: fld dword ptr [edx + 0x20] */
    esi = ebp + (-0xC); /* 0x17040F88: lea esi, [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x17040F8B: fmul dword ptr [ecx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17040F8E: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx)); /* 0x17040F90: fld dword ptr [ecx] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x17040F92: fmul dword ptr [edx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17040F94: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x17040F96: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x17040F99: fld dword ptr [edx + 4] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x17040F9C: fmul dword ptr [ecx] */
    fp_push(*(float*)&MEM32(edx + 0x14)); /* 0x17040F9E: fld dword ptr [edx + 0x14] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x17040FA1: fmul dword ptr [ecx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17040FA4: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x24)); /* 0x17040FA6: fld dword ptr [edx + 0x24] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x17040FA9: fmul dword ptr [ecx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17040FAC: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x17040FAE: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x17040FB1: fld dword ptr [ecx + 8] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x28); /* 0x17040FB4: fmul dword ptr [edx + 0x28] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x17040FB7: fld dword ptr [ecx] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x17040FB9: fmul dword ptr [edx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17040FBC: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x17040FBE: fld dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + 0x14); /* 0x17040FC1: add ecx, dword ptr [ebp + 0x14] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17040FC4: dec eax */
    _flag_k = FK_DEC;
    _st[0] *= (double)*(float*)ADDR(edx + 0x18); /* 0x17040FC5: fmul dword ptr [edx + 0x18] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17040FC8: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17040FCA: fstp dword ptr [ebp - 4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17040FCD: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17040FCE: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17040FCF: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_17040F7A; /* 0x17040FD0: jne 0x17040f7a */
L_17040FD2:
    edi = POP32_VAL(esp); /* 0x17040FD2: pop edi */
    esi = POP32_VAL(esp); /* 0x17040FD3: pop esi */
L_17040FD4:
    eax = MEM32(ebp + 0x8); /* 0x17040FD4: mov eax, dword ptr [ebp + 8] */
    ebx = POP32_VAL(esp); /* 0x17040FD7: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17040FD8: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x17040FD9: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_17040FE1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17040FE1u);

L_17040FE1:
    edi = edi; /* 0x17040FE1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17040FE3: push ebp */
    ebp = esp; /* 0x17040FE4: mov ebp, esp */
    PUSH32(esp, 1); /* 0x17040FE6: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x17040FE8: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17040FED: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x17224084)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17040FF9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17040FF9u);

L_17040FF9:
    { _itail_tgt = (uint32_t)(MEM32(0x17224084)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17041004(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17041004u);

L_17041004:
    edi = edi; /* 0x17041004: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17041006: push ebp */
    ebp = esp; /* 0x17041007: mov ebp, esp */
    PUSH32(esp, 1); /* 0x17041009: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x1704100B: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17041010: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x17224154)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1704101C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704101Cu);

L_1704101C:
    { _itail_tgt = (uint32_t)(MEM32(0x17224154)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17041027(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17041027u);

L_17041027:
    edi = edi; /* 0x17041027: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17041029: push ebp */
    ebp = esp; /* 0x1704102A: mov ebp, esp */
    PUSH32(esp, 1); /* 0x1704102C: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x1704102E: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17041033: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x17224088)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1704103F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704103Fu);

L_1704103F:
    { _itail_tgt = (uint32_t)(MEM32(0x17224088)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1704104A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704104Au);

L_1704104A:
    edi = edi; /* 0x1704104A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704104C: push ebp */
    ebp = esp; /* 0x1704104D: mov ebp, esp */
    PUSH32(esp, 1); /* 0x1704104F: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x17041051: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17041056: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x17224158)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17041062(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17041062u);

L_17041062:
    { _itail_tgt = (uint32_t)(MEM32(0x17224158)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1704106D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704106Du);

L_1704106D:
    edi = edi; /* 0x1704106D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704106F: push ebp */
    ebp = esp; /* 0x17041070: mov ebp, esp */
    PUSH32(esp, 1); /* 0x17041072: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x17041074: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17041079: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x1722408C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17041085(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17041085u);

L_17041085:
    { _itail_tgt = (uint32_t)(MEM32(0x1722408C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17041090(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17041090u);

L_17041090:
    edi = edi; /* 0x17041090: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17041092: push ebp */
    ebp = esp; /* 0x17041093: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x17041095: sub esp, 0x1c */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x14); /* 0x17041098: mov ecx, dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0x10); /* 0x1704109B: mov eax, dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ecx + 0xC)); /* 0x1704109E: fld dword ptr [ecx + 0xc] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x170410A1: fmul dword ptr [eax + 8] */
    edx = MEM32(ebp + 0xC); /* 0x170410A4: mov edx, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(eax + 0xC)); /* 0x170410A7: fld dword ptr [eax + 0xc] */
    PUSH32(esp, esi); /* 0x170410AA: push esi */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x170410AB: fmul dword ptr [ecx + 8] */
    PUSH32(esp, edi); /* 0x170410AE: push edi */
    fp_push(*(float*)&MEM32(ecx + 0xC)); /* 0x170410AF: fld dword ptr [ecx + 0xc] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x170410B2: fmul dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(eax + 0xC)); /* 0x170410B5: fld dword ptr [eax + 0xc] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x170410B8: fmul dword ptr [ecx + 4] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170410BB: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x170410BD: fstp dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x170410C0: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x170410C3: fmul dword ptr [ecx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x170410C6: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x170410C9: fld dword ptr [eax + 8] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x170410CC: fmul dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x170410CF: fstp dword ptr [ebp - 4] */
    fp_push(_st[1]); /* 0x170410D2: fld st(1) */
    _st[0] -= _st[1]; /* 0x170410D4: fsub st(1) */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x170410D6: fmul dword ptr [edx + 4] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x170410D9: fld dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x170410DC: fmul dword ptr [edx + 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170410DF: fsubp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x170410E1: fld dword ptr [ebp - 8] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x170410E4: fsub dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0xC); /* 0x170410E7: fmul dword ptr [edx + 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170410EA: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x170410EC: fstp dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(eax + 0xC)); /* 0x170410EF: fld dword ptr [eax + 0xc] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x170410F2: fmul dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x170410F4: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ecx + 0xC)); /* 0x170410F7: fld dword ptr [ecx + 0xc] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x170410FA: fmul dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x14) = _v; } /* 0x170410FC: fstp dword ptr [ebp + 0x14] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x170410FF: fld dword ptr [ecx] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x17041101: fmul dword ptr [eax + 8] */
    fp_push(*(float*)&MEM32(eax)); /* 0x17041104: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x17041106: fmul dword ptr [ecx + 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17041109: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1704110B: fstp dword ptr [ebp - 0xc] */
    _st[0] -= _st[1]; /* 0x1704110E: fsub st(1) */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x17041110: fmul dword ptr [edx] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x17041112: fld dword ptr [ebp + 0xc] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x14); /* 0x17041115: fsub dword ptr [ebp + 0x14] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x17041118: fmul dword ptr [edx + 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1704111B: fsubp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x1704111D: fld dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(edx + 0xC); /* 0x17041120: fmul dword ptr [edx + 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041123: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x17041125: fstp dword ptr [ebp - 0x18] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17041128: fstp st(0) */
    fp_push(*(float*)&MEM32(eax)); /* 0x1704112A: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x1704112C: fmul dword ptr [ecx + 4] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x1704112F: fld dword ptr [ecx] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x17041131: fmul dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17041134: fld dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x17041137: fmul dword ptr [edx] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x17041139: fld dword ptr [ebp + 0x14] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0xC); /* 0x1704113C: fsub dword ptr [ebp + 0xc] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x1704113F: fmul dword ptr [edx + 4] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17041142: fsubp st(1) */
    fp_push(_st[2]); /* 0x17041144: fld st(2) */
    _st[0] -= _st[2]; /* 0x17041146: fsub st(2) */
    _st[0] *= (double)*(float*)ADDR(edx + 0xC); /* 0x17041148: fmul dword ptr [edx + 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704114B: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x1704114D: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17041150: fld dword ptr [ebp - 4] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x17041153: fsub dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x17041156: fmul dword ptr [edx] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x17041158: fld dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x1704115B: fmul dword ptr [edx + 4] */
    eax = MEM32(ebp + 0x8); /* 0x1704115E: mov eax, dword ptr [ebp + 8] */
    esi = ebp + (-0x1C); /* 0x17041161: lea esi, [ebp - 0x1c] */
    edi = eax; /* 0x17041164: mov edi, eax */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17041166: fsubp st(1) */
    fp_push(_st[1]); /* 0x17041168: fld st(1) */
    _st[0] -= _st[3]; /* 0x1704116A: fsub st(3) */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x1704116C: fmul dword ptr [edx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704116F: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x17041171: fstp dword ptr [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17041174: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17041175: movsd dword ptr es:[edi], dword ptr [esi] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17041176: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17041178: fstp st(0) */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704117A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704117B: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x1704117C: pop edi */
    esi = POP32_VAL(esp); /* 0x1704117D: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704117E: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1704117F: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_17041187(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17041187u);

L_17041187:
    edi = edi; /* 0x17041187: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17041189: push ebp */
    ebp = esp; /* 0x1704118A: mov ebp, esp */
    PUSH32(esp, 1); /* 0x1704118C: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x1704118E: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17041193: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x17224068)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1704119F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704119Fu);

L_1704119F:
    { _itail_tgt = (uint32_t)(MEM32(0x17224068)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_170411AA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170411AAu);

L_170411AA:
    edi = edi; /* 0x170411AA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170411AC: push ebp */
    ebp = esp; /* 0x170411AD: mov ebp, esp */
    PUSH32(esp, 1); /* 0x170411AF: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x170411B1: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x170411B6: fld dword ptr [ebp + 0x1c] */
    PUSH32(esp, ecx); /* 0x170411B9: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x170411BA: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x170411BD: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x170411C0: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170411C3: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170411C6: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170411C9: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x1722411C)); /* 0x170411CC: call dword ptr [0x1722411c] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x170411D2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x170411D3: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_170411DB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170411DBu);

L_170411DB:
    { _itail_tgt = (uint32_t)(MEM32(0x1722411C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_170411E6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170411E6u);

L_170411E6:
    edi = edi; /* 0x170411E6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170411E8: push ebp */
    ebp = esp; /* 0x170411E9: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x170411EB: sub esp, 0xc */
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x170411EE: fld dword ptr [ebp + 0x1c] */
    ecx = MEM32(ebp + 0xC); /* 0x170411F1: mov ecx, dword ptr [ebp + 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x1C); /* 0x170411F4: fmul dword ptr [ebp + 0x1c] */
    edx = MEM32(ebp + 0x10); /* 0x170411F7: mov edx, dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x170411FA: fld dword ptr [ebp + 0x1c] */
    eax = MEM32(ebp + 0x8); /* 0x170411FD: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x17041200: push esi */
    _st[0] *= _st[1]; /* 0x17041201: fmul st(1) */
    esi = MEM32(ebp + 0x14); /* 0x17041203: mov esi, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x17041206: push edi */
    edi = MEM32(ebp + 0x18); /* 0x17041207: mov edi, dword ptr [ebp + 0x18] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x1704120A: fst dword ptr [ebp - 4] */
    _st[0] += _st[0]; /* 0x1704120D: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1704120F: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(0x17001DA0)); /* 0x17041212: fld dword ptr [0x17001da0] */
    _st[0] *= _st[1]; /* 0x17041218: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1704121A: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x1704121D: fld dword ptr [ebp - 0xc] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x17041220: fsub dword ptr [ebp - 8] */
    _st[0] += (double)*(float*)ADDR(0x17001424); /* 0x17041223: fadd dword ptr [0x17001424] */
    fp_push(_st[1]); /* 0x17041229: fld st(1) */
    _st[0] += _st[0]; /* 0x1704122B: fadd st(0), st(0) */
    _st[0] = (double)*(float*)ADDR(ebp + (-0x4)) - _st[0]; /* 0x1704122D: fsubr dword ptr [ebp - 4] */
    _st[0] += (double)*(float*)ADDR(ebp + 0x1C); /* 0x17041230: fadd dword ptr [ebp + 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17041233: fld dword ptr [ebp - 8] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x17041236: fsub dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17041239: fld dword ptr [ebp - 4] */
    _st[0] -= _st[4]; /* 0x1704123C: fsub st(4) */
    fp_push(_st[3]); /* 0x1704123E: fld st(3) */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x17041240: fmul dword ptr [ecx] */
    fp_push(_st[3]); /* 0x17041242: fld st(3) */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x17041244: fmul dword ptr [edx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041246: faddp st(1) */
    fp_push(_st[2]); /* 0x17041248: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(esi); /* 0x1704124A: fmul dword ptr [esi] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704124C: faddp st(1) */
    fp_push(_st[1]); /* 0x1704124E: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(edi); /* 0x17041250: fmul dword ptr [edi] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041252: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17041254: fstp dword ptr [eax] */
    fp_push(_st[0]); /* 0x17041256: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(edi + 0x4); /* 0x17041258: fmul dword ptr [edi + 4] */
    fp_push(_st[2]); /* 0x1704125B: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(esi + 0x4); /* 0x1704125D: fmul dword ptr [esi + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041260: faddp st(1) */
    fp_push(_st[3]); /* 0x17041262: fld st(3) */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x17041264: fmul dword ptr [edx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041267: faddp st(1) */
    fp_push(_st[4]); /* 0x17041269: fld st(4) */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x1704126B: fmul dword ptr [ecx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704126E: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x17041270: fstp dword ptr [eax + 4] */
    fp_push(_st[0]); /* 0x17041273: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(edi + 0x8); /* 0x17041275: fmul dword ptr [edi + 8] */
    fp_push(_st[2]); /* 0x17041278: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(esi + 0x8); /* 0x1704127A: fmul dword ptr [esi + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704127D: faddp st(1) */
    fp_push(_st[3]); /* 0x1704127F: fld st(3) */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x17041281: fmul dword ptr [edx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041284: faddp st(1) */
    fp_push(_st[4]); /* 0x17041286: fld st(4) */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x17041288: fmul dword ptr [ecx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704128B: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x1704128D: fstp dword ptr [eax + 8] */
    _st[0] *= (double)*(float*)ADDR(edi + 0xC); /* 0x17041290: fmul dword ptr [edi + 0xc] */
    edi = POP32_VAL(esp); /* 0x17041293: pop edi */
    fp_push(_st[1]); /* 0x17041294: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(esi + 0xC); /* 0x17041296: fmul dword ptr [esi + 0xc] */
    esi = POP32_VAL(esp); /* 0x17041299: pop esi */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704129A: faddp st(1) */
    fp_push(_st[2]); /* 0x1704129C: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(edx + 0xC); /* 0x1704129E: fmul dword ptr [edx + 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170412A1: faddp st(1) */
    fp_push(_st[3]); /* 0x170412A3: fld st(3) */
    _st[0] *= (double)*(float*)ADDR(ecx + 0xC); /* 0x170412A5: fmul dword ptr [ecx + 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170412A8: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x170412AA: fstp dword ptr [eax + 0xc] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170412AD: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170412AF: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170412B1: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170412B3: fstp st(0) */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170412B5: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x170412B6: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_170412BE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170412BEu);

L_170412BE:
    edi = edi; /* 0x170412BE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170412C0: push ebp */
    ebp = esp; /* 0x170412C1: mov ebp, esp */
    PUSH32(esp, 1); /* 0x170412C3: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x170412C5: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x170412CA: fld dword ptr [ebp + 0x1c] */
    PUSH32(esp, ecx); /* 0x170412CD: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x170412CE: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x170412D1: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x170412D4: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x170412D7: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170412DA: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170412DD: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x17224120)); /* 0x170412E0: call dword ptr [0x17224120] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x170412E6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x170412E7: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_170412EF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170412EFu);

L_170412EF:
    { _itail_tgt = (uint32_t)(MEM32(0x17224120)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_170412FA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170412FAu);

L_170412FA:
    edi = edi; /* 0x170412FA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170412FC: push ebp */
    ebp = esp; /* 0x170412FD: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x170412FF: push ecx */
    PUSH32(esp, ecx); /* 0x17041300: push ecx */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x17041301: fld dword ptr [ebp + 0x1c] */
    ecx = MEM32(ebp + 0xC); /* 0x17041304: mov ecx, dword ptr [ebp + 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x1C); /* 0x17041307: fmul dword ptr [ebp + 0x1c] */
    edx = MEM32(ebp + 0x10); /* 0x1704130A: mov edx, dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x1704130D: fld dword ptr [ebp + 0x1c] */
    eax = MEM32(ebp + 0x8); /* 0x17041310: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x17041313: push esi */
    _st[0] *= _st[1]; /* 0x17041314: fmul st(1) */
    esi = MEM32(ebp + 0x14); /* 0x17041316: mov esi, dword ptr [ebp + 0x14] */
    fp_push(*(float*)&MEM32(0x170018CC)); /* 0x17041319: fld dword ptr [0x170018cc] */
    PUSH32(esp, edi); /* 0x1704131F: push edi */
    fp_push(_st[2]); /* 0x17041320: fld st(2) */
    edi = MEM32(ebp + 0x18); /* 0x17041322: mov edi, dword ptr [ebp + 0x18] */
    _st[0] *= _st[1]; /* 0x17041325: fmul st(1) */
    _st[0] -= _st[2]; /* 0x17041327: fsub st(2) */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x1C); /* 0x17041329: fsub dword ptr [ebp + 0x1c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1704132C: fstp dword ptr [ebp - 8] */
    fp_push(_st[1]); /* 0x1704132F: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(0x17001DA0); /* 0x17041331: fmul dword ptr [0x17001da0] */
    fp_push(_st[3]); /* 0x17041337: fld st(3) */
    _st[0] *= (double)*(float*)ADDR(0x17005304); /* 0x17041339: fmul dword ptr [0x17005304] */
    _st[0] = _st[1] - _st[0]; /* 0x1704133F: fsubr st(1) */
    _st[0] += _st[2]; /* 0x17041341: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17041343: fstp dword ptr [ebp - 4] */
    fp_push(_st[3]); /* 0x17041346: fld st(3) */
    _st[0] *= (double)*(float*)ADDR(0x17005300); /* 0x17041348: fmul dword ptr [0x17005300] */
    _st[0] -= _st[1]; /* 0x1704134E: fsub st(1) */
    _st[0] += (double)*(float*)ADDR(ebp + 0x1C); /* 0x17041350: fadd dword ptr [ebp + 0x1c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x1C) = _v; } /* 0x17041353: fstp dword ptr [ebp + 0x1c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17041356: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17041358: fstp st(0) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x1704135A: fsubrp st(1) */
    fp_push(*(float*)&MEM32(0x1700141C)); /* 0x1704135C: fld dword ptr [0x1700141c] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17041362: fld dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x17041365: fmul dword ptr [ecx] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17041367: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x1704136A: fmul dword ptr [edx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704136C: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x1704136E: fld dword ptr [ebp + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(esi); /* 0x17041371: fmul dword ptr [esi] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041373: faddp st(1) */
    fp_push(_st[2]); /* 0x17041375: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(edi); /* 0x17041377: fmul dword ptr [edi] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041379: faddp st(1) */
    _st[0] *= _st[1]; /* 0x1704137B: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1704137D: fstp dword ptr [eax] */
    fp_push(_st[1]); /* 0x1704137F: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(edi + 0x4); /* 0x17041381: fmul dword ptr [edi + 4] */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x17041384: fld dword ptr [ebp + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(esi + 0x4); /* 0x17041387: fmul dword ptr [esi + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704138A: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x1704138C: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x1704138F: fmul dword ptr [edx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041392: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17041394: fld dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x17041397: fmul dword ptr [ecx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704139A: faddp st(1) */
    _st[0] *= _st[1]; /* 0x1704139C: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x1704139E: fstp dword ptr [eax + 4] */
    fp_push(_st[1]); /* 0x170413A1: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(edi + 0x8); /* 0x170413A3: fmul dword ptr [edi + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x170413A6: fld dword ptr [ebp + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(esi + 0x8); /* 0x170413A9: fmul dword ptr [esi + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170413AC: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x170413AE: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x170413B1: fmul dword ptr [edx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170413B4: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x170413B6: fld dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x170413B9: fmul dword ptr [ecx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170413BC: faddp st(1) */
    _st[0] *= _st[1]; /* 0x170413BE: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x170413C0: fstp dword ptr [eax + 8] */
    fp_push(_st[1]); /* 0x170413C3: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(edi + 0xC); /* 0x170413C5: fmul dword ptr [edi + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x170413C8: fld dword ptr [ebp + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(esi + 0xC); /* 0x170413CB: fmul dword ptr [esi + 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170413CE: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x170413D0: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0xC); /* 0x170413D3: fmul dword ptr [edx + 0xc] */
    edi = POP32_VAL(esp); /* 0x170413D6: pop edi */
    esi = POP32_VAL(esp); /* 0x170413D7: pop esi */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170413D8: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x170413DA: fld dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0xC); /* 0x170413DD: fmul dword ptr [ecx + 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170413E0: faddp st(1) */
    _st[0] *= _st[1]; /* 0x170413E2: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x170413E4: fstp dword ptr [eax + 0xc] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170413E7: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170413E9: fstp st(0) */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170413EB: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x170413EC: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_170413F4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170413F4u);

L_170413F4:
    edi = edi; /* 0x170413F4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170413F6: push ebp */
    ebp = esp; /* 0x170413F7: mov ebp, esp */
    PUSH32(esp, 1); /* 0x170413F9: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x170413FB: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x17041400: fld dword ptr [ebp + 0x1c] */
    PUSH32(esp, ecx); /* 0x17041403: push ecx */
    PUSH32(esp, ecx); /* 0x17041404: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x17041405: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + 0x18)); /* 0x17041409: fld dword ptr [ebp + 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x1704140C: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1704140F: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17041412: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17041415: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17041418: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x17224124)); /* 0x1704141B: call dword ptr [0x17224124] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17041421: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x17041422: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_1704142A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704142Au);

L_1704142A:
    { _itail_tgt = (uint32_t)(MEM32(0x17224124)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17041435(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17041435u);

L_17041435:
    edi = edi; /* 0x17041435: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17041437: push ebp */
    ebp = esp; /* 0x17041438: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x1704143A: mov ecx, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x10); /* 0x1704143D: mov edx, dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(edx)); /* 0x17041440: fld dword ptr [edx] */
    eax = MEM32(ebp + 0x8); /* 0x17041442: mov eax, dword ptr [ebp + 8] */
    _st[0] -= (double)*(float*)ADDR(ecx); /* 0x17041445: fsub dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x17041447: push esi */
    esi = MEM32(ebp + 0x14); /* 0x17041448: mov esi, dword ptr [ebp + 0x14] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x18); /* 0x1704144B: fmul dword ptr [ebp + 0x18] */
    fp_push(*(float*)&MEM32(esi)); /* 0x1704144E: fld dword ptr [esi] */
    _st[0] -= (double)*(float*)ADDR(ecx); /* 0x17041450: fsub dword ptr [ecx] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x1C); /* 0x17041452: fmul dword ptr [ebp + 0x1c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041455: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(ecx); /* 0x17041457: fadd dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17041459: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x1704145B: fld dword ptr [edx + 4] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x4); /* 0x1704145E: fsub dword ptr [ecx + 4] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x18); /* 0x17041461: fmul dword ptr [ebp + 0x18] */
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x17041464: fld dword ptr [esi + 4] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x4); /* 0x17041467: fsub dword ptr [ecx + 4] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x1C); /* 0x1704146A: fmul dword ptr [ebp + 0x1c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704146D: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + 0x4); /* 0x1704146F: fadd dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x17041472: fstp dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(edx + 0x8)); /* 0x17041475: fld dword ptr [edx + 8] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x8); /* 0x17041478: fsub dword ptr [ecx + 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x18); /* 0x1704147B: fmul dword ptr [ebp + 0x18] */
    fp_push(*(float*)&MEM32(esi + 0x8)); /* 0x1704147E: fld dword ptr [esi + 8] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x8); /* 0x17041481: fsub dword ptr [ecx + 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x1C); /* 0x17041484: fmul dword ptr [ebp + 0x1c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041487: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + 0x8); /* 0x17041489: fadd dword ptr [ecx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x1704148C: fstp dword ptr [eax + 8] */
    fp_push(*(float*)&MEM32(edx + 0xC)); /* 0x1704148F: fld dword ptr [edx + 0xc] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0xC); /* 0x17041492: fsub dword ptr [ecx + 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x18); /* 0x17041495: fmul dword ptr [ebp + 0x18] */
    fp_push(*(float*)&MEM32(esi + 0xC)); /* 0x17041498: fld dword ptr [esi + 0xc] */
    esi = POP32_VAL(esp); /* 0x1704149B: pop esi */
    _st[0] -= (double)*(float*)ADDR(ecx + 0xC); /* 0x1704149C: fsub dword ptr [ecx + 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x1C); /* 0x1704149F: fmul dword ptr [ebp + 0x1c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170414A2: faddp st(1) */
    _st[0] += (double)*(float*)ADDR(ecx + 0xC); /* 0x170414A4: fadd dword ptr [ecx + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x170414A7: fstp dword ptr [eax + 0xc] */
    ebp = POP32_VAL(esp); /* 0x170414AA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x170414AB: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_170414B3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170414B3u);

L_170414B3:
    edi = edi; /* 0x170414B3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170414B5: push ebp */
    ebp = esp; /* 0x170414B6: mov ebp, esp */
    PUSH32(esp, 1); /* 0x170414B8: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x170414BA: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x170414BF: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x17224050)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_170414CB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170414CBu);

L_170414CB:
    { _itail_tgt = (uint32_t)(MEM32(0x17224050)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_170414D6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170414D6u);

L_170414D6:
    edi = edi; /* 0x170414D6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170414D8: push ebp */
    ebp = esp; /* 0x170414D9: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x170414DB: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x10); /* 0x170414DE: mov ecx, dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0xC); /* 0x170414E1: mov eax, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ecx + 0x30)); /* 0x170414E4: fld dword ptr [ecx + 0x30] */
    _st[0] *= (double)*(float*)ADDR(eax + 0xC); /* 0x170414E7: fmul dword ptr [eax + 0xc] */
    PUSH32(esp, esi); /* 0x170414EA: push esi */
    fp_push(*(float*)&MEM32(ecx + 0x10)); /* 0x170414EB: fld dword ptr [ecx + 0x10] */
    PUSH32(esp, edi); /* 0x170414EE: push edi */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x170414EF: fmul dword ptr [eax + 4] */
    esi = ebp + (-0x10); /* 0x170414F2: lea esi, [ebp - 0x10] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170414F5: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x20)); /* 0x170414F7: fld dword ptr [ecx + 0x20] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x170414FA: fmul dword ptr [eax + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170414FD: faddp st(1) */
    fp_push(*(float*)&MEM32(eax)); /* 0x170414FF: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x17041501: fmul dword ptr [ecx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041503: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x17041505: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ecx + 0x34)); /* 0x17041508: fld dword ptr [ecx + 0x34] */
    _st[0] *= (double)*(float*)ADDR(eax + 0xC); /* 0x1704150B: fmul dword ptr [eax + 0xc] */
    fp_push(*(float*)&MEM32(ecx + 0x14)); /* 0x1704150E: fld dword ptr [ecx + 0x14] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x17041511: fmul dword ptr [eax + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041514: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x17041516: fld dword ptr [ecx + 4] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x17041519: fmul dword ptr [eax] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704151B: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x24)); /* 0x1704151D: fld dword ptr [ecx + 0x24] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x17041520: fmul dword ptr [eax + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041523: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x17041525: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ecx + 0x38)); /* 0x17041528: fld dword ptr [ecx + 0x38] */
    _st[0] *= (double)*(float*)ADDR(eax + 0xC); /* 0x1704152B: fmul dword ptr [eax + 0xc] */
    fp_push(*(float*)&MEM32(ecx + 0x18)); /* 0x1704152E: fld dword ptr [ecx + 0x18] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x17041531: fmul dword ptr [eax + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041534: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x17041536: fld dword ptr [ecx + 8] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x17041539: fmul dword ptr [eax] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704153B: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x28)); /* 0x1704153D: fld dword ptr [ecx + 0x28] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x17041540: fmul dword ptr [eax + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041543: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x17041545: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ecx + 0x3C)); /* 0x17041548: fld dword ptr [ecx + 0x3c] */
    _st[0] *= (double)*(float*)ADDR(eax + 0xC); /* 0x1704154B: fmul dword ptr [eax + 0xc] */
    fp_push(*(float*)&MEM32(ecx + 0x1C)); /* 0x1704154E: fld dword ptr [ecx + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x17041551: fmul dword ptr [eax + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041554: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0xC)); /* 0x17041556: fld dword ptr [ecx + 0xc] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x17041559: fmul dword ptr [eax] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704155B: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x2C)); /* 0x1704155D: fld dword ptr [ecx + 0x2c] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x17041560: fmul dword ptr [eax + 8] */
    eax = MEM32(ebp + 0x8); /* 0x17041563: mov eax, dword ptr [ebp + 8] */
    edi = eax; /* 0x17041566: mov edi, eax */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041568: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x1704156A: fstp dword ptr [ebp - 4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704156D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704156E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704156F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17041570: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x17041571: pop edi */
    esi = POP32_VAL(esp); /* 0x17041572: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17041573: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17041574: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1704157C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704157Cu);

L_1704157C:
    edi = edi; /* 0x1704157C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704157E: push ebp */
    ebp = esp; /* 0x1704157F: mov ebp, esp */
    PUSH32(esp, 1); /* 0x17041581: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x17041583: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17041588: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x17224150)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17041594(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17041594u);

L_17041594:
    { _itail_tgt = (uint32_t)(MEM32(0x17224150)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1704159F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704159Fu);

L_1704159F:
    edi = edi; /* 0x1704159F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170415A1: push ebp */
    ebp = esp; /* 0x170415A2: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x170415A4: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x1C); /* 0x170415A7: mov eax, dword ptr [ebp + 0x1c] */
    /* test eax, eax */ /* 0x170415AA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x170415AC: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x170415AD: mov ebx, dword ptr [ebp + 8] */
    MEM32(ebp + 0x8) = ebx; /* 0x170415B0: mov dword ptr [ebp + 8], ebx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17041658; /* 0x170415B3: jbe 0x17041658 */
L_170415B9:
    edx = MEM32(ebp + 0x18); /* 0x170415B9: mov edx, dword ptr [ebp + 0x18] */
    ecx = MEM32(ebp + 0x10); /* 0x170415BC: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x170415BF: push esi */
    PUSH32(esp, edi); /* 0x170415C0: push edi */
L_170415C1:
    fp_push(*(float*)&MEM32(edx + 0x10)); /* 0x170415C1: fld dword ptr [edx + 0x10] */
    edi = ebx; /* 0x170415C4: mov edi, ebx */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x170415C6: fmul dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + 0xC); /* 0x170415C9: add ebx, dword ptr [ebp + 0xc] */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(edx + 0x20)); /* 0x170415CC: fld dword ptr [edx + 0x20] */
    esi = ebp + (-0x10); /* 0x170415CF: lea esi, [ebp - 0x10] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x170415D2: fmul dword ptr [ecx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170415D5: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0xC)); /* 0x170415D7: fld dword ptr [ecx + 0xc] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x30); /* 0x170415DA: fmul dword ptr [edx + 0x30] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170415DD: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx)); /* 0x170415DF: fld dword ptr [ecx] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x170415E1: fmul dword ptr [edx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170415E3: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x170415E5: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(edx + 0x14)); /* 0x170415E8: fld dword ptr [edx + 0x14] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x170415EB: fmul dword ptr [ecx + 4] */
    fp_push(*(float*)&MEM32(edx + 0x34)); /* 0x170415EE: fld dword ptr [edx + 0x34] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0xC); /* 0x170415F1: fmul dword ptr [ecx + 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170415F4: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x24)); /* 0x170415F6: fld dword ptr [edx + 0x24] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x170415F9: fmul dword ptr [ecx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170415FC: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx)); /* 0x170415FE: fld dword ptr [ecx] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x17041600: fmul dword ptr [edx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041603: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x17041605: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(edx + 0x8)); /* 0x17041608: fld dword ptr [edx + 8] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x1704160B: fmul dword ptr [ecx] */
    fp_push(*(float*)&MEM32(edx + 0x18)); /* 0x1704160D: fld dword ptr [edx + 0x18] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x17041610: fmul dword ptr [ecx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041613: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x28)); /* 0x17041615: fld dword ptr [edx + 0x28] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x17041618: fmul dword ptr [ecx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704161B: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0xC)); /* 0x1704161D: fld dword ptr [ecx + 0xc] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x38); /* 0x17041620: fmul dword ptr [edx + 0x38] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041623: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x17041625: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ecx + 0xC)); /* 0x17041628: fld dword ptr [ecx + 0xc] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x3C); /* 0x1704162B: fmul dword ptr [edx + 0x3c] */
    fp_push(*(float*)&MEM32(edx + 0xC)); /* 0x1704162E: fld dword ptr [edx + 0xc] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x17041631: fmul dword ptr [ecx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041633: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x1C)); /* 0x17041635: fld dword ptr [edx + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x17041638: fmul dword ptr [ecx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704163B: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x2C)); /* 0x1704163D: fld dword ptr [edx + 0x2c] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x17041640: fmul dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + 0x14); /* 0x17041643: add ecx, dword ptr [ebp + 0x14] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x17041646: dec eax */
    _flag_k = FK_DEC;
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041647: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17041649: fstp dword ptr [ebp - 4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704164C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704164D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704164E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704164F: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_170415C1; /* 0x17041650: jne 0x170415c1 */
L_17041656:
    edi = POP32_VAL(esp); /* 0x17041656: pop edi */
    esi = POP32_VAL(esp); /* 0x17041657: pop esi */
L_17041658:
    eax = MEM32(ebp + 0x8); /* 0x17041658: mov eax, dword ptr [ebp + 8] */
    ebx = POP32_VAL(esp); /* 0x1704165B: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704165C: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x1704165D: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_17041665(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17041665u);

L_17041665:
    edi = edi; /* 0x17041665: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17041667: push ebp */
    ebp = esp; /* 0x17041668: mov ebp, esp */
    PUSH32(esp, 1); /* 0x1704166A: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x1704166C: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17041671: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x17224074)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1704167D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704167Du);

L_1704167D:
    { _itail_tgt = (uint32_t)(MEM32(0x17224074)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17041688(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17041688u);

L_17041688:
    edi = edi; /* 0x17041688: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704168A: push ebp */
    ebp = esp; /* 0x1704168B: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1704168D: mov eax, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(eax + 0x28)); /* 0x17041690: fld dword ptr [eax + 0x28] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x3C); /* 0x17041693: fmul dword ptr [eax + 0x3c] */
    fp_push(*(float*)&MEM32(eax + 0x38)); /* 0x17041696: fld dword ptr [eax + 0x38] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x2C); /* 0x17041699: fmul dword ptr [eax + 0x2c] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1704169C: fsubp st(1) */
    fp_push(*(float*)&MEM32(eax + 0x3C)); /* 0x1704169E: fld dword ptr [eax + 0x3c] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x24); /* 0x170416A1: fmul dword ptr [eax + 0x24] */
    fp_push(*(float*)&MEM32(eax + 0x34)); /* 0x170416A4: fld dword ptr [eax + 0x34] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x2C); /* 0x170416A7: fmul dword ptr [eax + 0x2c] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170416AA: fsubp st(1) */
    fp_push(*(float*)&MEM32(eax + 0x38)); /* 0x170416AC: fld dword ptr [eax + 0x38] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x24); /* 0x170416AF: fmul dword ptr [eax + 0x24] */
    fp_push(*(float*)&MEM32(eax + 0x28)); /* 0x170416B2: fld dword ptr [eax + 0x28] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x34); /* 0x170416B5: fmul dword ptr [eax + 0x34] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170416B8: fsubp st(1) */
    fp_push(*(float*)&MEM32(eax + 0x20)); /* 0x170416BA: fld dword ptr [eax + 0x20] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x3C); /* 0x170416BD: fmul dword ptr [eax + 0x3c] */
    fp_push(*(float*)&MEM32(eax + 0x30)); /* 0x170416C0: fld dword ptr [eax + 0x30] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x2C); /* 0x170416C3: fmul dword ptr [eax + 0x2c] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170416C6: fsubp st(1) */
    fp_push(*(float*)&MEM32(eax + 0x38)); /* 0x170416C8: fld dword ptr [eax + 0x38] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x20); /* 0x170416CB: fmul dword ptr [eax + 0x20] */
    fp_push(*(float*)&MEM32(eax + 0x30)); /* 0x170416CE: fld dword ptr [eax + 0x30] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x28); /* 0x170416D1: fmul dword ptr [eax + 0x28] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170416D4: fsubp st(1) */
    fp_push(*(float*)&MEM32(eax + 0x20)); /* 0x170416D6: fld dword ptr [eax + 0x20] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x34); /* 0x170416D9: fmul dword ptr [eax + 0x34] */
    fp_push(*(float*)&MEM32(eax + 0x30)); /* 0x170416DC: fld dword ptr [eax + 0x30] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x24); /* 0x170416DF: fmul dword ptr [eax + 0x24] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170416E2: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x170416E4: fstp dword ptr [ebp + 8] */
    fp_push(_st[4]); /* 0x170416E7: fld st(4) */
    _st[0] *= (double)*(float*)ADDR(eax + 0x14); /* 0x170416E9: fmul dword ptr [eax + 0x14] */
    fp_push(_st[4]); /* 0x170416EC: fld st(4) */
    _st[0] *= (double)*(float*)ADDR(eax + 0x18); /* 0x170416EE: fmul dword ptr [eax + 0x18] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170416F1: fsubp st(1) */
    fp_push(_st[3]); /* 0x170416F3: fld st(3) */
    _st[0] *= (double)*(float*)ADDR(eax + 0x1C); /* 0x170416F5: fmul dword ptr [eax + 0x1c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170416F8: faddp st(1) */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x170416FA: fmul dword ptr [eax] */
    fp_push(_st[5]); /* 0x170416FC: fld st(5) */
    _st[0] *= (double)*(float*)ADDR(eax + 0x10); /* 0x170416FE: fmul dword ptr [eax + 0x10] */
    fp_push(_st[3]); /* 0x17041701: fld st(3) */
    _st[0] *= (double)*(float*)ADDR(eax + 0x18); /* 0x17041703: fmul dword ptr [eax + 0x18] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17041706: fsubp st(1) */
    fp_push(_st[2]); /* 0x17041708: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(eax + 0x1C); /* 0x1704170A: fmul dword ptr [eax + 0x1c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704170D: faddp st(1) */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x1704170F: fmul dword ptr [eax + 4] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17041712: fsubp st(1) */
    fp_push(_st[4]); /* 0x17041714: fld st(4) */
    _st[0] *= (double)*(float*)ADDR(eax + 0x10); /* 0x17041716: fmul dword ptr [eax + 0x10] */
    fp_push(_st[3]); /* 0x17041719: fld st(3) */
    _st[0] *= (double)*(float*)ADDR(eax + 0x14); /* 0x1704171B: fmul dword ptr [eax + 0x14] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1704171E: fsubp st(1) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x17041720: fld dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x1C); /* 0x17041723: fmul dword ptr [eax + 0x1c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041726: faddp st(1) */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x17041728: fmul dword ptr [eax + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704172B: faddp st(1) */
    fp_push(_st[3]); /* 0x1704172D: fld st(3) */
    _st[0] *= (double)*(float*)ADDR(eax + 0x10); /* 0x1704172F: fmul dword ptr [eax + 0x10] */
    fp_push(_st[2]); /* 0x17041732: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(eax + 0x14); /* 0x17041734: fmul dword ptr [eax + 0x14] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17041737: fsubp st(1) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x17041739: fld dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x18); /* 0x1704173C: fmul dword ptr [eax + 0x18] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704173F: faddp st(1) */
    _st[0] *= (double)*(float*)ADDR(eax + 0xC); /* 0x17041741: fmul dword ptr [eax + 0xc] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17041744: fsubp st(1) */
    { _st[5] = _st[0]; g_st_i64[5] = g_st_i64[0]; fp_pop(); } /* 0x17041746: fstp st(5) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17041748: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704174A: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704174C: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704174E: fstp st(0) */
    ebp = POP32_VAL(esp); /* 0x17041750: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x17041751: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_17041759(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17041759u);

L_17041759:
    edi = edi; /* 0x17041759: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704175B: push ebp */
    ebp = esp; /* 0x1704175C: mov ebp, esp */
    PUSH32(esp, 1); /* 0x1704175E: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x17041760: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17041765: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x17224078)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17041771(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17041771u);

L_17041771:
    { _itail_tgt = (uint32_t)(MEM32(0x17224078)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1704177C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704177Cu);

L_1704177C:
    edi = edi; /* 0x1704177C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704177E: push ebp */
    ebp = esp; /* 0x1704177F: mov ebp, esp */
    PUSH32(esp, 1); /* 0x17041781: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x17041783: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17041788: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x17224054)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17041794(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17041794u);

L_17041794:
    { _itail_tgt = (uint32_t)(MEM32(0x17224054)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1704179F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704179Fu);

L_1704179F:
    edi = edi; /* 0x1704179F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170417A1: push ebp */
    ebp = esp; /* 0x170417A2: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40u; /* 0x170417A4: sub esp, 0x40 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x170417A7: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0xC); /* 0x170417AA: mov edx, dword ptr [ebp + 0xc] */
    /* cmp eax, edx */ /* 0x170417AD: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x10); /* 0x170417AF: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x170417B2: push esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170417BB; /* 0x170417B3: je 0x170417bb */
L_170417B5:
    /* cmp eax, ecx */ /* 0x170417B5: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = eax; /* 0x170417B7: mov esi, eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_170417BE; /* 0x170417B9: jne 0x170417be */
L_170417BB:
    esi = ebp + (-0x40); /* 0x170417BB: lea esi, [ebp - 0x40] */
L_170417BE:
    fp_push(*(float*)&MEM32(edx + 0xC)); /* 0x170417BE: fld dword ptr [edx + 0xc] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x30); /* 0x170417C1: fmul dword ptr [ecx + 0x30] */
    fp_push(*(float*)&MEM32(edx)); /* 0x170417C4: fld dword ptr [edx] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x170417C6: fmul dword ptr [ecx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170417C8: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x8)); /* 0x170417CA: fld dword ptr [edx + 8] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x20); /* 0x170417CD: fmul dword ptr [ecx + 0x20] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170417D0: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x10)); /* 0x170417D2: fld dword ptr [ecx + 0x10] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x170417D5: fmul dword ptr [edx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170417D8: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x170417DA: fstp dword ptr [esi] */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x170417DC: fld dword ptr [edx + 4] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x14); /* 0x170417DF: fmul dword ptr [ecx + 0x14] */
    fp_push(*(float*)&MEM32(edx + 0xC)); /* 0x170417E2: fld dword ptr [edx + 0xc] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x34); /* 0x170417E5: fmul dword ptr [ecx + 0x34] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170417E8: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x8)); /* 0x170417EA: fld dword ptr [edx + 8] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x24); /* 0x170417ED: fmul dword ptr [ecx + 0x24] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170417F0: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x170417F2: fld dword ptr [ecx + 4] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x170417F5: fmul dword ptr [edx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170417F7: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x170417F9: fstp dword ptr [esi + 4] */
    fp_push(*(float*)&MEM32(edx + 0xC)); /* 0x170417FC: fld dword ptr [edx + 0xc] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x38); /* 0x170417FF: fmul dword ptr [ecx + 0x38] */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x17041802: fld dword ptr [ecx + 8] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x17041805: fmul dword ptr [edx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041807: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x8)); /* 0x17041809: fld dword ptr [edx + 8] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x28); /* 0x1704180C: fmul dword ptr [ecx + 0x28] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704180F: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x18)); /* 0x17041811: fld dword ptr [ecx + 0x18] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x17041814: fmul dword ptr [edx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041817: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x8) = _v; } /* 0x17041819: fstp dword ptr [esi + 8] */
    fp_push(*(float*)&MEM32(edx + 0xC)); /* 0x1704181C: fld dword ptr [edx + 0xc] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x3C); /* 0x1704181F: fmul dword ptr [ecx + 0x3c] */
    fp_push(*(float*)&MEM32(ecx + 0x2C)); /* 0x17041822: fld dword ptr [ecx + 0x2c] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x17041825: fmul dword ptr [edx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041828: faddp st(1) */
    fp_push(*(float*)&MEM32(edx)); /* 0x1704182A: fld dword ptr [edx] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0xC); /* 0x1704182C: fmul dword ptr [ecx + 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704182F: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x1C)); /* 0x17041831: fld dword ptr [ecx + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x17041834: fmul dword ptr [edx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041837: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0xC) = _v; } /* 0x17041839: fstp dword ptr [esi + 0xc] */
    fp_push(*(float*)&MEM32(edx + 0x1C)); /* 0x1704183C: fld dword ptr [edx + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x30); /* 0x1704183F: fmul dword ptr [ecx + 0x30] */
    fp_push(*(float*)&MEM32(edx + 0x10)); /* 0x17041842: fld dword ptr [edx + 0x10] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x17041845: fmul dword ptr [ecx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041847: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x10)); /* 0x17041849: fld dword ptr [ecx + 0x10] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x14); /* 0x1704184C: fmul dword ptr [edx + 0x14] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704184F: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x18)); /* 0x17041851: fld dword ptr [edx + 0x18] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x20); /* 0x17041854: fmul dword ptr [ecx + 0x20] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041857: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x10) = _v; } /* 0x17041859: fstp dword ptr [esi + 0x10] */
    fp_push(*(float*)&MEM32(edx + 0x18)); /* 0x1704185C: fld dword ptr [edx + 0x18] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x24); /* 0x1704185F: fmul dword ptr [ecx + 0x24] */
    fp_push(*(float*)&MEM32(edx + 0x1C)); /* 0x17041862: fld dword ptr [edx + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x34); /* 0x17041865: fmul dword ptr [ecx + 0x34] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041868: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x14)); /* 0x1704186A: fld dword ptr [ecx + 0x14] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x14); /* 0x1704186D: fmul dword ptr [edx + 0x14] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041870: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x17041872: fld dword ptr [ecx + 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x10); /* 0x17041875: fmul dword ptr [edx + 0x10] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041878: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x14) = _v; } /* 0x1704187A: fstp dword ptr [esi + 0x14] */
    fp_push(*(float*)&MEM32(ecx + 0x18)); /* 0x1704187D: fld dword ptr [ecx + 0x18] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x14); /* 0x17041880: fmul dword ptr [edx + 0x14] */
    fp_push(*(float*)&MEM32(edx + 0x1C)); /* 0x17041883: fld dword ptr [edx + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x38); /* 0x17041886: fmul dword ptr [ecx + 0x38] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041889: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x1704188B: fld dword ptr [ecx + 8] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x10); /* 0x1704188E: fmul dword ptr [edx + 0x10] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041891: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x18)); /* 0x17041893: fld dword ptr [edx + 0x18] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x28); /* 0x17041896: fmul dword ptr [ecx + 0x28] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041899: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x18) = _v; } /* 0x1704189B: fstp dword ptr [esi + 0x18] */
    fp_push(*(float*)&MEM32(ecx + 0x1C)); /* 0x1704189E: fld dword ptr [ecx + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x14); /* 0x170418A1: fmul dword ptr [edx + 0x14] */
    fp_push(*(float*)&MEM32(edx + 0x1C)); /* 0x170418A4: fld dword ptr [edx + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x3C); /* 0x170418A7: fmul dword ptr [ecx + 0x3c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170418AA: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x18)); /* 0x170418AC: fld dword ptr [edx + 0x18] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x2C); /* 0x170418AF: fmul dword ptr [ecx + 0x2c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170418B2: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x10)); /* 0x170418B4: fld dword ptr [edx + 0x10] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0xC); /* 0x170418B7: fmul dword ptr [ecx + 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170418BA: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x1C) = _v; } /* 0x170418BC: fstp dword ptr [esi + 0x1c] */
    fp_push(*(float*)&MEM32(edx + 0x2C)); /* 0x170418BF: fld dword ptr [edx + 0x2c] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x30); /* 0x170418C2: fmul dword ptr [ecx + 0x30] */
    fp_push(*(float*)&MEM32(edx + 0x20)); /* 0x170418C5: fld dword ptr [edx + 0x20] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x170418C8: fmul dword ptr [ecx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170418CA: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x10)); /* 0x170418CC: fld dword ptr [ecx + 0x10] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x24); /* 0x170418CF: fmul dword ptr [edx + 0x24] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170418D2: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x28)); /* 0x170418D4: fld dword ptr [edx + 0x28] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x20); /* 0x170418D7: fmul dword ptr [ecx + 0x20] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170418DA: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x20) = _v; } /* 0x170418DC: fstp dword ptr [esi + 0x20] */
    fp_push(*(float*)&MEM32(edx + 0x2C)); /* 0x170418DF: fld dword ptr [edx + 0x2c] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x34); /* 0x170418E2: fmul dword ptr [ecx + 0x34] */
    fp_push(*(float*)&MEM32(edx + 0x28)); /* 0x170418E5: fld dword ptr [edx + 0x28] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x24); /* 0x170418E8: fmul dword ptr [ecx + 0x24] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170418EB: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x14)); /* 0x170418ED: fld dword ptr [ecx + 0x14] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x24); /* 0x170418F0: fmul dword ptr [edx + 0x24] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170418F3: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x170418F5: fld dword ptr [ecx + 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x20); /* 0x170418F8: fmul dword ptr [edx + 0x20] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170418FB: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x24) = _v; } /* 0x170418FD: fstp dword ptr [esi + 0x24] */
    fp_push(*(float*)&MEM32(ecx + 0x18)); /* 0x17041900: fld dword ptr [ecx + 0x18] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x24); /* 0x17041903: fmul dword ptr [edx + 0x24] */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x17041906: fld dword ptr [ecx + 8] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x20); /* 0x17041909: fmul dword ptr [edx + 0x20] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704190C: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x2C)); /* 0x1704190E: fld dword ptr [edx + 0x2c] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x38); /* 0x17041911: fmul dword ptr [ecx + 0x38] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041914: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x28)); /* 0x17041916: fld dword ptr [edx + 0x28] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x28); /* 0x17041919: fmul dword ptr [ecx + 0x28] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704191C: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x28) = _v; } /* 0x1704191E: fstp dword ptr [esi + 0x28] */
    fp_push(*(float*)&MEM32(edx + 0x2C)); /* 0x17041921: fld dword ptr [edx + 0x2c] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x3C); /* 0x17041924: fmul dword ptr [ecx + 0x3c] */
    fp_push(*(float*)&MEM32(edx + 0x28)); /* 0x17041927: fld dword ptr [edx + 0x28] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x2C); /* 0x1704192A: fmul dword ptr [ecx + 0x2c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704192D: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x1C)); /* 0x1704192F: fld dword ptr [ecx + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x24); /* 0x17041932: fmul dword ptr [edx + 0x24] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041935: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x20)); /* 0x17041937: fld dword ptr [edx + 0x20] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0xC); /* 0x1704193A: fmul dword ptr [ecx + 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704193D: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x2C) = _v; } /* 0x1704193F: fstp dword ptr [esi + 0x2c] */
    fp_push(*(float*)&MEM32(edx + 0x3C)); /* 0x17041942: fld dword ptr [edx + 0x3c] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x30); /* 0x17041945: fmul dword ptr [ecx + 0x30] */
    fp_push(*(float*)&MEM32(edx + 0x38)); /* 0x17041948: fld dword ptr [edx + 0x38] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x20); /* 0x1704194B: fmul dword ptr [ecx + 0x20] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704194E: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x30)); /* 0x17041950: fld dword ptr [edx + 0x30] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x17041953: fmul dword ptr [ecx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041955: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x10)); /* 0x17041957: fld dword ptr [ecx + 0x10] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x34); /* 0x1704195A: fmul dword ptr [edx + 0x34] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704195D: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x30) = _v; } /* 0x1704195F: fstp dword ptr [esi + 0x30] */
    fp_push(*(float*)&MEM32(edx + 0x3C)); /* 0x17041962: fld dword ptr [edx + 0x3c] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x34); /* 0x17041965: fmul dword ptr [ecx + 0x34] */
    fp_push(*(float*)&MEM32(ecx + 0x14)); /* 0x17041968: fld dword ptr [ecx + 0x14] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x34); /* 0x1704196B: fmul dword ptr [edx + 0x34] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1704196E: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x38)); /* 0x17041970: fld dword ptr [edx + 0x38] */
    /* cmp esi, eax */ /* 0x17041973: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _st[0] *= (double)*(float*)ADDR(ecx + 0x24); /* 0x17041975: fmul dword ptr [ecx + 0x24] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041978: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x1704197A: fld dword ptr [ecx + 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x30); /* 0x1704197D: fmul dword ptr [edx + 0x30] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041980: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x34) = _v; } /* 0x17041982: fstp dword ptr [esi + 0x34] */
    fp_push(*(float*)&MEM32(edx + 0x38)); /* 0x17041985: fld dword ptr [edx + 0x38] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x28); /* 0x17041988: fmul dword ptr [ecx + 0x28] */
    fp_push(*(float*)&MEM32(ecx + 0x18)); /* 0x1704198B: fld dword ptr [ecx + 0x18] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x34); /* 0x1704198E: fmul dword ptr [edx + 0x34] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041991: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x17041993: fld dword ptr [ecx + 8] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x30); /* 0x17041996: fmul dword ptr [edx + 0x30] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041999: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x3C)); /* 0x1704199B: fld dword ptr [edx + 0x3c] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x38); /* 0x1704199E: fmul dword ptr [ecx + 0x38] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170419A1: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x38) = _v; } /* 0x170419A3: fstp dword ptr [esi + 0x38] */
    fp_push(*(float*)&MEM32(edx + 0x3C)); /* 0x170419A6: fld dword ptr [edx + 0x3c] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x3C); /* 0x170419A9: fmul dword ptr [ecx + 0x3c] */
    fp_push(*(float*)&MEM32(ecx + 0x1C)); /* 0x170419AC: fld dword ptr [ecx + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x34); /* 0x170419AF: fmul dword ptr [edx + 0x34] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170419B2: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x30)); /* 0x170419B4: fld dword ptr [edx + 0x30] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0xC); /* 0x170419B7: fmul dword ptr [ecx + 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170419BA: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x2C)); /* 0x170419BC: fld dword ptr [ecx + 0x2c] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x38); /* 0x170419BF: fmul dword ptr [edx + 0x38] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x170419C2: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x3C) = _v; } /* 0x170419C4: fstp dword ptr [esi + 0x3c] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170419D2; /* 0x170419C7: je 0x170419d2 */
L_170419C9:
    PUSH32(esp, edi); /* 0x170419C9: push edi */
    PUSH32(esp, 0x10u); /* 0x170419CA: push 0x10 */
    ecx = POP32_VAL(esp); /* 0x170419CC: pop ecx */
    edi = eax; /* 0x170419CD: mov edi, eax */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x170419CF: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x170419D1: pop edi */
L_170419D2:
    esi = POP32_VAL(esp); /* 0x170419D2: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170419D3: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x170419D4: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170419DC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170419DCu);

L_170419DC:
    edi = edi; /* 0x170419DC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170419DE: push ebp */
    ebp = esp; /* 0x170419DF: mov ebp, esp */
    PUSH32(esp, 1); /* 0x170419E1: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x170419E3: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x170419E8: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x172240E0)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_170419F4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170419F4u);

L_170419F4:
    { _itail_tgt = (uint32_t)(MEM32(0x172240E0)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_170419FF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170419FFu);

L_170419FF:
    edi = edi; /* 0x170419FF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17041A01: push ebp */
    ebp = esp; /* 0x17041A02: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x17041A04: mov ecx, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x17041A07: fld dword ptr [ecx + 4] */
    eax = MEM32(ebp + 0x8); /* 0x17041A0A: mov eax, dword ptr [ebp + 8] */
    /* cmp eax, ecx */ /* 0x17041A0D: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(ecx + 0x10)); /* 0x17041A0F: fld dword ptr [ecx + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x17041A12: fstp dword ptr [eax + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x10) = _v; } /* 0x17041A15: fstp dword ptr [eax + 0x10] */
    edx = MEM32(ecx + 0x20); /* 0x17041A18: mov edx, dword ptr [ecx + 0x20] */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x17041A1B: fld dword ptr [ecx + 8] */
    MEM32(eax + 0x8) = edx; /* 0x17041A1E: mov dword ptr [eax + 8], edx */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x20) = _v; } /* 0x17041A21: fstp dword ptr [eax + 0x20] */
    edx = MEM32(ecx + 0x30); /* 0x17041A24: mov edx, dword ptr [ecx + 0x30] */
    fp_push(*(float*)&MEM32(ecx + 0xC)); /* 0x17041A27: fld dword ptr [ecx + 0xc] */
    MEM32(eax + 0xC) = edx; /* 0x17041A2A: mov dword ptr [eax + 0xc], edx */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x30) = _v; } /* 0x17041A2D: fstp dword ptr [eax + 0x30] */
    edx = MEM32(ecx + 0x24); /* 0x17041A30: mov edx, dword ptr [ecx + 0x24] */
    fp_push(*(float*)&MEM32(ecx + 0x18)); /* 0x17041A33: fld dword ptr [ecx + 0x18] */
    MEM32(eax + 0x18) = edx; /* 0x17041A36: mov dword ptr [eax + 0x18], edx */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x24) = _v; } /* 0x17041A39: fstp dword ptr [eax + 0x24] */
    edx = MEM32(ecx + 0x34); /* 0x17041A3C: mov edx, dword ptr [ecx + 0x34] */
    fp_push(*(float*)&MEM32(ecx + 0x1C)); /* 0x17041A3F: fld dword ptr [ecx + 0x1c] */
    MEM32(eax + 0x1C) = edx; /* 0x17041A42: mov dword ptr [eax + 0x1c], edx */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x34) = _v; } /* 0x17041A45: fstp dword ptr [eax + 0x34] */
    edx = MEM32(ecx + 0x38); /* 0x17041A48: mov edx, dword ptr [ecx + 0x38] */
    fp_push(*(float*)&MEM32(ecx + 0x2C)); /* 0x17041A4B: fld dword ptr [ecx + 0x2c] */
    MEM32(eax + 0x2C) = edx; /* 0x17041A4E: mov dword ptr [eax + 0x2c], edx */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x38) = _v; } /* 0x17041A51: fstp dword ptr [eax + 0x38] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17041A6C; /* 0x17041A54: je 0x17041a6c */
L_17041A56:
    edx = MEM32(ecx); /* 0x17041A56: mov edx, dword ptr [ecx] */
    MEM32(eax) = edx; /* 0x17041A58: mov dword ptr [eax], edx */
    edx = MEM32(ecx + 0x14); /* 0x17041A5A: mov edx, dword ptr [ecx + 0x14] */
    MEM32(eax + 0x14) = edx; /* 0x17041A5D: mov dword ptr [eax + 0x14], edx */
    edx = MEM32(ecx + 0x28); /* 0x17041A60: mov edx, dword ptr [ecx + 0x28] */
    MEM32(eax + 0x28) = edx; /* 0x17041A63: mov dword ptr [eax + 0x28], edx */
    ecx = MEM32(ecx + 0x3C); /* 0x17041A66: mov ecx, dword ptr [ecx + 0x3c] */
    MEM32(eax + 0x3C) = ecx; /* 0x17041A69: mov dword ptr [eax + 0x3c], ecx */
L_17041A6C:
    ebp = POP32_VAL(esp); /* 0x17041A6C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17041A6D: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17041A75(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17041A75u);

L_17041A75:
    edi = edi; /* 0x17041A75: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17041A77: push ebp */
    ebp = esp; /* 0x17041A78: mov ebp, esp */
    PUSH32(esp, 1); /* 0x17041A7A: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x17041A7C: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17041A81: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x17224058)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17041A8D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17041A8Du);

L_17041A8D:
    { _itail_tgt = (uint32_t)(MEM32(0x17224058)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17041A98(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17041A98u);

L_17041A98:
    edi = edi; /* 0x17041A98: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17041A9A: push ebp */
    ebp = esp; /* 0x17041A9B: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40u; /* 0x17041A9D: sub esp, 0x40 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x17041AA0: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0xC); /* 0x17041AA3: mov edx, dword ptr [ebp + 0xc] */
    /* cmp eax, edx */ /* 0x17041AA6: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x10); /* 0x17041AA8: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x17041AAB: push esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17041AB4; /* 0x17041AAC: je 0x17041ab4 */
L_17041AAE:
    /* cmp eax, ecx */ /* 0x17041AAE: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = eax; /* 0x17041AB0: mov esi, eax */
    if (CMP_NE(_flag_a, _flag_b)) goto L_17041AB7; /* 0x17041AB2: jne 0x17041ab7 */
L_17041AB4:
    esi = ebp + (-0x40); /* 0x17041AB4: lea esi, [ebp - 0x40] */
L_17041AB7:
    fp_push(*(float*)&MEM32(edx + 0xC)); /* 0x17041AB7: fld dword ptr [edx + 0xc] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x30); /* 0x17041ABA: fmul dword ptr [ecx + 0x30] */
    fp_push(*(float*)&MEM32(edx)); /* 0x17041ABD: fld dword ptr [edx] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x17041ABF: fmul dword ptr [ecx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041AC1: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x8)); /* 0x17041AC3: fld dword ptr [edx + 8] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x20); /* 0x17041AC6: fmul dword ptr [ecx + 0x20] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041AC9: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x10)); /* 0x17041ACB: fld dword ptr [ecx + 0x10] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x17041ACE: fmul dword ptr [edx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041AD1: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x17041AD3: fstp dword ptr [esi] */
    fp_push(*(float*)&MEM32(edx + 0x10)); /* 0x17041AD5: fld dword ptr [edx + 0x10] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x17041AD8: fmul dword ptr [ecx] */
    fp_push(*(float*)&MEM32(ecx + 0x30)); /* 0x17041ADA: fld dword ptr [ecx + 0x30] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x1C); /* 0x17041ADD: fmul dword ptr [edx + 0x1c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041AE0: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x20)); /* 0x17041AE2: fld dword ptr [ecx + 0x20] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x18); /* 0x17041AE5: fmul dword ptr [edx + 0x18] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041AE8: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x10)); /* 0x17041AEA: fld dword ptr [ecx + 0x10] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x14); /* 0x17041AED: fmul dword ptr [edx + 0x14] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041AF0: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x17041AF2: fstp dword ptr [esi + 4] */
    fp_push(*(float*)&MEM32(edx + 0x28)); /* 0x17041AF5: fld dword ptr [edx + 0x28] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x20); /* 0x17041AF8: fmul dword ptr [ecx + 0x20] */
    fp_push(*(float*)&MEM32(edx + 0x24)); /* 0x17041AFB: fld dword ptr [edx + 0x24] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x10); /* 0x17041AFE: fmul dword ptr [ecx + 0x10] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041B01: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x30)); /* 0x17041B03: fld dword ptr [ecx + 0x30] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x2C); /* 0x17041B06: fmul dword ptr [edx + 0x2c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041B09: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x20)); /* 0x17041B0B: fld dword ptr [edx + 0x20] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x17041B0E: fmul dword ptr [ecx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041B10: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x8) = _v; } /* 0x17041B12: fstp dword ptr [esi + 8] */
    fp_push(*(float*)&MEM32(edx + 0x34)); /* 0x17041B15: fld dword ptr [edx + 0x34] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x10); /* 0x17041B18: fmul dword ptr [ecx + 0x10] */
    fp_push(*(float*)&MEM32(edx + 0x3C)); /* 0x17041B1B: fld dword ptr [edx + 0x3c] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x30); /* 0x17041B1E: fmul dword ptr [ecx + 0x30] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041B21: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx)); /* 0x17041B23: fld dword ptr [ecx] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x30); /* 0x17041B25: fmul dword ptr [edx + 0x30] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041B28: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x38)); /* 0x17041B2A: fld dword ptr [edx + 0x38] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x20); /* 0x17041B2D: fmul dword ptr [ecx + 0x20] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041B30: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0xC) = _v; } /* 0x17041B32: fstp dword ptr [esi + 0xc] */
    fp_push(*(float*)&MEM32(ecx + 0x24)); /* 0x17041B35: fld dword ptr [ecx + 0x24] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x17041B38: fmul dword ptr [edx + 8] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x17041B3B: fld dword ptr [ecx + 4] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x17041B3E: fmul dword ptr [edx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041B40: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x34)); /* 0x17041B42: fld dword ptr [ecx + 0x34] */
    _st[0] *= (double)*(float*)ADDR(edx + 0xC); /* 0x17041B45: fmul dword ptr [edx + 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041B48: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x17041B4A: fld dword ptr [edx + 4] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x14); /* 0x17041B4D: fmul dword ptr [ecx + 0x14] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041B50: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x10) = _v; } /* 0x17041B52: fstp dword ptr [esi + 0x10] */
    fp_push(*(float*)&MEM32(ecx + 0x34)); /* 0x17041B55: fld dword ptr [ecx + 0x34] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x1C); /* 0x17041B58: fmul dword ptr [edx + 0x1c] */
    fp_push(*(float*)&MEM32(ecx + 0x24)); /* 0x17041B5B: fld dword ptr [ecx + 0x24] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x18); /* 0x17041B5E: fmul dword ptr [edx + 0x18] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041B61: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x14)); /* 0x17041B63: fld dword ptr [edx + 0x14] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x14); /* 0x17041B66: fmul dword ptr [ecx + 0x14] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041B69: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x10)); /* 0x17041B6B: fld dword ptr [edx + 0x10] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x17041B6E: fmul dword ptr [ecx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041B71: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x14) = _v; } /* 0x17041B73: fstp dword ptr [esi + 0x14] */
    fp_push(*(float*)&MEM32(edx + 0x24)); /* 0x17041B76: fld dword ptr [edx + 0x24] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x14); /* 0x17041B79: fmul dword ptr [ecx + 0x14] */
    fp_push(*(float*)&MEM32(ecx + 0x34)); /* 0x17041B7C: fld dword ptr [ecx + 0x34] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x2C); /* 0x17041B7F: fmul dword ptr [edx + 0x2c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041B82: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x24)); /* 0x17041B84: fld dword ptr [ecx + 0x24] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x28); /* 0x17041B87: fmul dword ptr [edx + 0x28] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041B8A: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x20)); /* 0x17041B8C: fld dword ptr [edx + 0x20] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x17041B8F: fmul dword ptr [ecx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041B92: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x18) = _v; } /* 0x17041B94: fstp dword ptr [esi + 0x18] */
    fp_push(*(float*)&MEM32(edx + 0x34)); /* 0x17041B97: fld dword ptr [edx + 0x34] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x14); /* 0x17041B9A: fmul dword ptr [ecx + 0x14] */
    fp_push(*(float*)&MEM32(ecx + 0x34)); /* 0x17041B9D: fld dword ptr [ecx + 0x34] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x3C); /* 0x17041BA0: fmul dword ptr [edx + 0x3c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041BA3: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x24)); /* 0x17041BA5: fld dword ptr [ecx + 0x24] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x38); /* 0x17041BA8: fmul dword ptr [edx + 0x38] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041BAB: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x17041BAD: fld dword ptr [ecx + 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x30); /* 0x17041BB0: fmul dword ptr [edx + 0x30] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041BB3: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x1C) = _v; } /* 0x17041BB5: fstp dword ptr [esi + 0x1c] */
    fp_push(*(float*)&MEM32(ecx + 0x28)); /* 0x17041BB8: fld dword ptr [ecx + 0x28] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x17041BBB: fmul dword ptr [edx + 8] */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x17041BBE: fld dword ptr [ecx + 8] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x17041BC1: fmul dword ptr [edx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041BC3: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x17041BC5: fld dword ptr [edx + 4] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x18); /* 0x17041BC8: fmul dword ptr [ecx + 0x18] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041BCB: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x38)); /* 0x17041BCD: fld dword ptr [ecx + 0x38] */
    _st[0] *= (double)*(float*)ADDR(edx + 0xC); /* 0x17041BD0: fmul dword ptr [edx + 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041BD3: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x20) = _v; } /* 0x17041BD5: fstp dword ptr [esi + 0x20] */
    fp_push(*(float*)&MEM32(ecx + 0x38)); /* 0x17041BD8: fld dword ptr [ecx + 0x38] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x1C); /* 0x17041BDB: fmul dword ptr [edx + 0x1c] */
    fp_push(*(float*)&MEM32(ecx + 0x28)); /* 0x17041BDE: fld dword ptr [ecx + 0x28] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x18); /* 0x17041BE1: fmul dword ptr [edx + 0x18] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041BE4: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x14)); /* 0x17041BE6: fld dword ptr [edx + 0x14] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x18); /* 0x17041BE9: fmul dword ptr [ecx + 0x18] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041BEC: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x10)); /* 0x17041BEE: fld dword ptr [edx + 0x10] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x17041BF1: fmul dword ptr [ecx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041BF4: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x24) = _v; } /* 0x17041BF6: fstp dword ptr [esi + 0x24] */
    fp_push(*(float*)&MEM32(edx + 0x24)); /* 0x17041BF9: fld dword ptr [edx + 0x24] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x18); /* 0x17041BFC: fmul dword ptr [ecx + 0x18] */
    fp_push(*(float*)&MEM32(ecx + 0x38)); /* 0x17041BFF: fld dword ptr [ecx + 0x38] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x2C); /* 0x17041C02: fmul dword ptr [edx + 0x2c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041C05: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x28)); /* 0x17041C07: fld dword ptr [ecx + 0x28] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x28); /* 0x17041C0A: fmul dword ptr [edx + 0x28] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041C0D: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x20)); /* 0x17041C0F: fld dword ptr [edx + 0x20] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x17041C12: fmul dword ptr [ecx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041C15: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x28) = _v; } /* 0x17041C17: fstp dword ptr [esi + 0x28] */
    fp_push(*(float*)&MEM32(edx + 0x34)); /* 0x17041C1A: fld dword ptr [edx + 0x34] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x18); /* 0x17041C1D: fmul dword ptr [ecx + 0x18] */
    fp_push(*(float*)&MEM32(ecx + 0x38)); /* 0x17041C20: fld dword ptr [ecx + 0x38] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x3C); /* 0x17041C23: fmul dword ptr [edx + 0x3c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041C26: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x28)); /* 0x17041C28: fld dword ptr [ecx + 0x28] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x38); /* 0x17041C2B: fmul dword ptr [edx + 0x38] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041C2E: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x17041C30: fld dword ptr [ecx + 8] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x30); /* 0x17041C33: fmul dword ptr [edx + 0x30] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041C36: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x2C) = _v; } /* 0x17041C38: fstp dword ptr [esi + 0x2c] */
    fp_push(*(float*)&MEM32(ecx + 0xC)); /* 0x17041C3B: fld dword ptr [ecx + 0xc] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x17041C3E: fmul dword ptr [edx] */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x17041C40: fld dword ptr [edx + 4] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x1C); /* 0x17041C43: fmul dword ptr [ecx + 0x1c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041C46: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x3C)); /* 0x17041C48: fld dword ptr [ecx + 0x3c] */
    _st[0] *= (double)*(float*)ADDR(edx + 0xC); /* 0x17041C4B: fmul dword ptr [edx + 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041C4E: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x8)); /* 0x17041C50: fld dword ptr [edx + 8] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x2C); /* 0x17041C53: fmul dword ptr [ecx + 0x2c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041C56: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x30) = _v; } /* 0x17041C58: fstp dword ptr [esi + 0x30] */
    fp_push(*(float*)&MEM32(ecx + 0x3C)); /* 0x17041C5B: fld dword ptr [ecx + 0x3c] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x1C); /* 0x17041C5E: fmul dword ptr [edx + 0x1c] */
    fp_push(*(float*)&MEM32(ecx + 0x2C)); /* 0x17041C61: fld dword ptr [ecx + 0x2c] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x18); /* 0x17041C64: fmul dword ptr [edx + 0x18] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041C67: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x14)); /* 0x17041C69: fld dword ptr [edx + 0x14] */
    /* cmp esi, eax */ /* 0x17041C6C: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    _st[0] *= (double)*(float*)ADDR(ecx + 0x1C); /* 0x17041C6E: fmul dword ptr [ecx + 0x1c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041C71: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x10)); /* 0x17041C73: fld dword ptr [edx + 0x10] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0xC); /* 0x17041C76: fmul dword ptr [ecx + 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041C79: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x34) = _v; } /* 0x17041C7B: fstp dword ptr [esi + 0x34] */
    fp_push(*(float*)&MEM32(edx + 0x28)); /* 0x17041C7E: fld dword ptr [edx + 0x28] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x2C); /* 0x17041C81: fmul dword ptr [ecx + 0x2c] */
    fp_push(*(float*)&MEM32(edx + 0x24)); /* 0x17041C84: fld dword ptr [edx + 0x24] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x1C); /* 0x17041C87: fmul dword ptr [ecx + 0x1c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041C8A: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x3C)); /* 0x17041C8C: fld dword ptr [ecx + 0x3c] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x2C); /* 0x17041C8F: fmul dword ptr [edx + 0x2c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041C92: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x20)); /* 0x17041C94: fld dword ptr [edx + 0x20] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0xC); /* 0x17041C97: fmul dword ptr [ecx + 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041C9A: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x38) = _v; } /* 0x17041C9C: fstp dword ptr [esi + 0x38] */
    fp_push(*(float*)&MEM32(edx + 0x34)); /* 0x17041C9F: fld dword ptr [edx + 0x34] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x1C); /* 0x17041CA2: fmul dword ptr [ecx + 0x1c] */
    fp_push(*(float*)&MEM32(ecx + 0x3C)); /* 0x17041CA5: fld dword ptr [ecx + 0x3c] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x3C); /* 0x17041CA8: fmul dword ptr [edx + 0x3c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041CAB: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0xC)); /* 0x17041CAD: fld dword ptr [ecx + 0xc] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x30); /* 0x17041CB0: fmul dword ptr [edx + 0x30] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041CB3: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x38)); /* 0x17041CB5: fld dword ptr [edx + 0x38] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x2C); /* 0x17041CB8: fmul dword ptr [ecx + 0x2c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041CBB: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x3C) = _v; } /* 0x17041CBD: fstp dword ptr [esi + 0x3c] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_17041CCB; /* 0x17041CC0: je 0x17041ccb */
L_17041CC2:
    PUSH32(esp, edi); /* 0x17041CC2: push edi */
    PUSH32(esp, 0x10u); /* 0x17041CC3: push 0x10 */
    ecx = POP32_VAL(esp); /* 0x17041CC5: pop ecx */
    edi = eax; /* 0x17041CC6: mov edi, eax */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x17041CC8: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x17041CCA: pop edi */
L_17041CCB:
    esi = POP32_VAL(esp); /* 0x17041CCB: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17041CCC: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17041CCD: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17041CD5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17041CD5u);

L_17041CD5:
    edi = edi; /* 0x17041CD5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17041CD7: push ebp */
    ebp = esp; /* 0x17041CD8: mov ebp, esp */
    PUSH32(esp, 1); /* 0x17041CDA: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x17041CDC: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17041CE1: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x17224094)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17041CED(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17041CEDu);

L_17041CED:
    { _itail_tgt = (uint32_t)(MEM32(0x17224094)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17041CF8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17041CF8u);

L_17041CF8:
    edi = edi; /* 0x17041CF8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17041CFA: push ebp */
    ebp = esp; /* 0x17041CFB: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x54u; /* 0x17041CFD: sub esp, 0x54 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x10); /* 0x17041D00: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(eax + 0x10); /* 0x17041D03: mov ecx, dword ptr [eax + 0x10] */
    fp_push(*(float*)&MEM32(eax)); /* 0x17041D06: fld dword ptr [eax] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x17041D08: fld dword ptr [eax + 4] */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x17041D0B: mov dword ptr [ebp - 0x1c], ecx */
    ecx = MEM32(eax + 0x14); /* 0x17041D0E: mov ecx, dword ptr [eax + 0x14] */
    MEM32(ebp + (-0x20)) = ecx; /* 0x17041D11: mov dword ptr [ebp - 0x20], ecx */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x17041D14: fld dword ptr [ebp - 0x20] */
    ecx = MEM32(eax + 0x20); /* 0x17041D17: mov ecx, dword ptr [eax + 0x20] */
    _st[0] *= _st[2]; /* 0x17041D1A: fmul st(2) */
    MEM32(ebp + (-0x18)) = ecx; /* 0x17041D1C: mov dword ptr [ebp - 0x18], ecx */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x17041D1F: fld dword ptr [ebp - 0x1c] */
    ecx = MEM32(eax + 0x24); /* 0x17041D22: mov ecx, dword ptr [eax + 0x24] */
    _st[0] *= _st[2]; /* 0x17041D25: fmul st(2) */
    MEM32(ebp + (-0x4)) = ecx; /* 0x17041D27: mov dword ptr [ebp - 4], ecx */
    ecx = MEM32(eax + 0x30); /* 0x17041D2A: mov ecx, dword ptr [eax + 0x30] */
    MEM32(ebp + (-0x14)) = ecx; /* 0x17041D2D: mov dword ptr [ebp - 0x14], ecx */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17041D30: fsubp st(1) */
    ecx = MEM32(eax + 0x34); /* 0x17041D32: mov ecx, dword ptr [eax + 0x34] */
    MEM32(ebp + 0x10) = ecx; /* 0x17041D35: mov dword ptr [ebp + 0x10], ecx */
    ecx = MEM32(eax + 0x38); /* 0x17041D38: mov ecx, dword ptr [eax + 0x38] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x17041D3B: fstp dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x17041D3E: mov dword ptr [ebp - 0x10], ecx */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17041D41: fld dword ptr [ebp - 4] */
    ecx = MEM32(eax + 0x3C); /* 0x17041D44: mov ecx, dword ptr [eax + 0x3c] */
    _st[0] *= _st[2]; /* 0x17041D47: fmul st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x17041D49: fld dword ptr [ebp - 0x18] */
    _st[0] *= _st[2]; /* 0x17041D4C: fmul st(2) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17041D4E: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x17041D50: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17041D53: fld dword ptr [ebp + 0x10] */
    _st[0] *= _st[2]; /* 0x17041D56: fmul st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x17041D58: fld dword ptr [ebp - 0x14] */
    _st[0] *= _st[2]; /* 0x17041D5B: fmul st(2) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17041D5D: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x17041D5F: fstp dword ptr [ebp - 0x2c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17041D62: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17041D64: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17041D66: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x1C)); /* 0x17041D69: fmul dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x17041D6C: fld dword ptr [ebp - 0x18] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x20)); /* 0x17041D6F: fmul dword ptr [ebp - 0x20] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17041D72: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x17041D74: fstp dword ptr [ebp - 0x38] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17041D77: fld dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x1C)); /* 0x17041D7A: fmul dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x17041D7D: fld dword ptr [ebp - 0x14] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x20)); /* 0x17041D80: fmul dword ptr [ebp - 0x20] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17041D83: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x17041D85: fstp dword ptr [ebp - 0x34] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17041D88: fld dword ptr [ebp + 0x10] */
    MEM32(ebp + 0x10) = ecx; /* 0x17041D8B: mov dword ptr [ebp + 0x10], ecx */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x18)); /* 0x17041D8E: fmul dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x17041D91: fld dword ptr [ebp - 0x14] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x17041D94: fmul dword ptr [ebp - 4] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17041D97: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x17041D99: fstp dword ptr [ebp - 0x30] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x17041D9C: fld dword ptr [eax + 8] */
    fp_push(*(float*)&MEM32(eax + 0xC)); /* 0x17041D9F: fld dword ptr [eax + 0xc] */
    fp_push(*(float*)&MEM32(eax + 0x18)); /* 0x17041DA2: fld dword ptr [eax + 0x18] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x17041DA5: fst dword ptr [ebp - 0x28] */
    fp_push(*(float*)&MEM32(eax + 0x1C)); /* 0x17041DA8: fld dword ptr [eax + 0x1c] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x17041DAB: fst dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(eax + 0x28)); /* 0x17041DAE: fld dword ptr [eax + 0x28] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x17041DB1: fst dword ptr [ebp - 0x24] */
    fp_push(*(float*)&MEM32(eax + 0x2C)); /* 0x17041DB4: fld dword ptr [eax + 0x2c] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17041DB7: fst dword ptr [ebp - 4] */
    fp_push(_st[5]); /* 0x17041DBA: fld st(5) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x38)); /* 0x17041DBC: fmul dword ptr [ebp - 0x38] */
    fp_push(_st[4]); /* 0x17041DBF: fld st(4) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x17041DC1: fmul dword ptr [ebp - 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17041DC4: fsubp st(1) */
    fp_push(_st[2]); /* 0x17041DC6: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x17041DC8: fmul dword ptr [ebp - 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041DCB: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x54)) = _v; } /* 0x17041DCD: fstp dword ptr [ebp - 0x54] */
    fp_push(_st[3]); /* 0x17041DD0: fld st(3) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x2C)); /* 0x17041DD2: fmul dword ptr [ebp - 0x2c] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x17041DD5: fld dword ptr [ebp - 0x10] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x17041DD8: fmul dword ptr [ebp - 0xc] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17041DDB: fsubp st(1) */
    fp_push(_st[6]); /* 0x17041DDD: fld st(6) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x34)); /* 0x17041DDF: fmul dword ptr [ebp - 0x34] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17041DE2: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x17041DE4: fstp dword ptr [ebp - 0x50] */
    fp_push(_st[5]); /* 0x17041DE7: fld st(5) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x30)); /* 0x17041DE9: fmul dword ptr [ebp - 0x30] */
    fp_push(_st[2]); /* 0x17041DEC: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x2C)); /* 0x17041DEE: fmul dword ptr [ebp - 0x2c] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17041DF1: fsubp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x17041DF3: fld dword ptr [ebp - 0x10] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x17041DF6: fmul dword ptr [ebp - 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041DF9: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4C)) = _v; } /* 0x17041DFB: fstp dword ptr [ebp - 0x4c] */
    fp_push(_st[1]); /* 0x17041DFE: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x34)); /* 0x17041E00: fmul dword ptr [ebp - 0x34] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x17041E03: fld dword ptr [ebp - 0x10] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x38)); /* 0x17041E06: fmul dword ptr [ebp - 0x38] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17041E09: fsubp st(1) */
    fp_push(_st[4]); /* 0x17041E0B: fld st(4) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x30)); /* 0x17041E0D: fmul dword ptr [ebp - 0x30] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17041E10: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x48)) = _v; } /* 0x17041E12: fstp dword ptr [ebp - 0x48] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17041E15: fld dword ptr [ebp - 8] */
    _st[0] *= _st[3]; /* 0x17041E18: fmul st(3) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x17041E1A: fld dword ptr [ebp - 0xc] */
    _st[0] *= _st[2]; /* 0x17041E1D: fmul st(2) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17041E1F: fsubp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x38))); /* 0x17041E21: fld dword ptr [ebp - 0x38] */
    _st[0] *= _st[6]; /* 0x17041E24: fmul st(6) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17041E26: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x17041E28: fstp dword ptr [ebp - 0x44] */
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x17041E2B: fld dword ptr [ebp - 0x34] */
    _st[0] *= _st[5]; /* 0x17041E2E: fmul st(5) */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x17041E30: fld dword ptr [ebp - 0x2c] */
    _st[0] *= _st[4]; /* 0x17041E33: fmul st(4) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17041E35: fsubp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x17041E37: fld dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x10); /* 0x17041E3A: fmul dword ptr [ebp + 0x10] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041E3D: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x17041E3F: fstp dword ptr [ebp - 0x40] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x17041E42: fld dword ptr [ebp - 0x2c] */
    _st[0] *= _st[1]; /* 0x17041E45: fmul st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17041E47: fld dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x10); /* 0x17041E4A: fmul dword ptr [ebp + 0x10] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17041E4D: fsubp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x17041E4F: fld dword ptr [ebp - 0x30] */
    _st[0] *= _st[6]; /* 0x17041E52: fmul st(6) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17041E54: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x17041E56: fstp dword ptr [ebp - 0x3c] */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x17041E59: fld dword ptr [ebp - 0x30] */
    _st[0] *= _st[3]; /* 0x17041E5C: fmul st(3) */
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x17041E5E: fld dword ptr [ebp - 0x34] */
    _st[0] *= _st[2]; /* 0x17041E61: fmul st(2) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17041E63: fsubp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x38))); /* 0x17041E65: fld dword ptr [ebp - 0x38] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x10); /* 0x17041E68: fmul dword ptr [ebp + 0x10] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041E6B: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x17041E6D: fstp dword ptr [ebp - 0x2c] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17041E70: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17041E72: fstp st(0) */
    fp_push(_st[3]); /* 0x17041E74: fld st(3) */
    _st[0] *= _st[1]; /* 0x17041E76: fmul st(1) */
    fp_push(_st[2]); /* 0x17041E78: fld st(2) */
    _st[0] *= _st[4]; /* 0x17041E7A: fmul st(4) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17041E7C: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x17041E7E: fstp dword ptr [ebp - 0xc] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17041E81: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17041E83: fstp st(0) */
    fp_push(_st[1]); /* 0x17041E85: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x17041E87: fmul dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x17041E8A: fld dword ptr [ebp - 0x24] */
    _st[0] *= _st[2]; /* 0x17041E8D: fmul st(2) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17041E8F: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x17041E91: fstp dword ptr [ebp - 8] */
    fp_push(_st[1]); /* 0x17041E94: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x10); /* 0x17041E96: fmul dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x17041E99: fld dword ptr [ebp - 0x10] */
    _st[0] *= _st[2]; /* 0x17041E9C: fmul st(2) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17041E9E: fsubp st(1) */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x17041EA0: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17041EA2: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x17041EA4: fld dword ptr [ebp - 0x28] */
    ecx = MEM32(eax); /* 0x17041EA7: mov ecx, dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x17041EA9: fmul dword ptr [ebp - 4] */
    MEM32(ebp + (-0x38)) = ecx; /* 0x17041EAC: mov dword ptr [ebp - 0x38], ecx */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x17041EAF: fld dword ptr [ebp - 0x24] */
    ecx = MEM32(eax + 0x10); /* 0x17041EB2: mov ecx, dword ptr [eax + 0x10] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x20)); /* 0x17041EB5: fmul dword ptr [ebp - 0x20] */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x17041EB8: mov dword ptr [ebp - 0x1c], ecx */
    ecx = MEM32(eax + 0x20); /* 0x17041EBB: mov ecx, dword ptr [eax + 0x20] */
    MEM32(ebp + (-0x18)) = ecx; /* 0x17041EBE: mov dword ptr [ebp - 0x18], ecx */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17041EC1: fsubp st(1) */
    ecx = MEM32(eax + 0x24); /* 0x17041EC3: mov ecx, dword ptr [eax + 0x24] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x17041EC6: fld dword ptr [ebp - 0x28] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x10); /* 0x17041EC9: fmul dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x17041ECC: fld dword ptr [ebp - 0x10] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x20)); /* 0x17041ECF: fmul dword ptr [ebp - 0x20] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17041ED2: fsubp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x17041ED4: fld dword ptr [ebp - 0x24] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x10); /* 0x17041ED7: fmul dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x17041EDA: fld dword ptr [ebp - 0x10] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x17041EDD: fmul dword ptr [ebp - 4] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x17041EE0: mov dword ptr [ebp - 4], ecx */
    ecx = MEM32(eax + 0x30); /* 0x17041EE3: mov ecx, dword ptr [eax + 0x30] */
    MEM32(ebp + (-0x14)) = ecx; /* 0x17041EE6: mov dword ptr [ebp - 0x14], ecx */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17041EE9: fsubp st(1) */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x17041EEB: fld dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(eax + 0x14)); /* 0x17041EEE: fld dword ptr [eax + 0x14] */
    eax = MEM32(eax + 0x34); /* 0x17041EF1: mov eax, dword ptr [eax + 0x34] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17041EF4: fld dword ptr [ebp - 8] */
    MEM32(ebp + 0x10) = eax; /* 0x17041EF7: mov dword ptr [ebp + 0x10], eax */
    _st[0] *= _st[1]; /* 0x17041EFA: fmul st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x17041EFC: fld dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x17041EFF: fmul dword ptr [ebp - 4] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17041F02: fsubp st(1) */
    fp_push(_st[5]); /* 0x17041F04: fld st(5) */
    _st[0] *= _st[3]; /* 0x17041F06: fmul st(3) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17041F08: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x17041F0A: fstp dword ptr [ebp - 0x10] */
    fp_push(_st[3]); /* 0x17041F0D: fld st(3) */
    _st[0] *= _st[2]; /* 0x17041F0F: fmul st(2) */
    fp_push(_st[6]); /* 0x17041F11: fld st(6) */
    _st[0] *= _st[2]; /* 0x17041F13: fmul st(2) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17041F15: fsubp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x17041F17: fld dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x10); /* 0x17041F1A: fmul dword ptr [ebp + 0x10] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041F1D: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x17041F1F: fstp dword ptr [ebp - 0x24] */
    fp_push(_st[5]); /* 0x17041F22: fld st(5) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x17041F24: fmul dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17041F27: fld dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x10); /* 0x17041F2A: fmul dword ptr [ebp + 0x10] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17041F2D: fsubp st(1) */
    fp_push(_st[3]); /* 0x17041F2F: fld st(3) */
    _st[0] *= _st[3]; /* 0x17041F31: fmul st(3) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17041F33: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x17041F35: fstp dword ptr [ebp - 0x28] */
    fp_push(_st[2]); /* 0x17041F38: fld st(2) */
    _st[0] *= _st[1]; /* 0x17041F3A: fmul st(1) */
    fp_push(_st[4]); /* 0x17041F3C: fld st(4) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x17041F3E: fmul dword ptr [ebp - 4] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17041F41: fsubp st(1) */
    fp_push(_st[5]); /* 0x17041F43: fld st(5) */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x10); /* 0x17041F45: fmul dword ptr [ebp + 0x10] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041F48: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x17041F4A: fstp dword ptr [ebp - 0x34] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17041F4D: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17041F4F: fstp st(0) */
    fp_push(_st[2]); /* 0x17041F51: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x38)); /* 0x17041F53: fmul dword ptr [ebp - 0x38] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17041F56: fld dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x1C)); /* 0x17041F59: fmul dword ptr [ebp - 0x1c] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17041F5C: fsubp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x17041F5E: fld dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x18)); /* 0x17041F61: fmul dword ptr [ebp - 0x18] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041F64: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x17041F66: fstp dword ptr [ebp + 0x10] */
    fp_push(_st[3]); /* 0x17041F69: fld st(3) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x1C)); /* 0x17041F6B: fmul dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x17041F6E: fld dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x14)); /* 0x17041F71: fmul dword ptr [ebp - 0x14] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17041F74: fsubp st(1) */
    fp_push(_st[2]); /* 0x17041F76: fld st(2) */
    eax = MEM32(ebp + 0xC); /* 0x17041F78: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x17041F7B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x38)); /* 0x17041F7D: fmul dword ptr [ebp - 0x38] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17041F80: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17041F82: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x38))); /* 0x17041F85: fld dword ptr [ebp - 0x38] */
    _st[0] *= _st[1]; /* 0x17041F88: fmul st(1) */
    fp_push(_st[4]); /* 0x17041F8A: fld st(4) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x18)); /* 0x17041F8C: fmul dword ptr [ebp - 0x18] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17041F8F: fsubp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17041F91: fld dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x14)); /* 0x17041F94: fmul dword ptr [ebp - 0x14] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041F97: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x17041F99: fstp dword ptr [ebp - 0x20] */
    fp_push(_st[1]); /* 0x17041F9C: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x18)); /* 0x17041F9E: fmul dword ptr [ebp - 0x18] */
    fp_push(_st[3]); /* 0x17041FA1: fld st(3) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x14)); /* 0x17041FA3: fmul dword ptr [ebp - 0x14] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17041FA6: fsubp st(1) */
    fp_push(_st[1]); /* 0x17041FA8: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x1C)); /* 0x17041FAA: fmul dword ptr [ebp - 0x1c] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17041FAD: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x17041FAF: fstp dword ptr [ebp - 0x30] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17041FB2: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17041FB4: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17041FB6: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17041FB8: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x17041FBA: fld dword ptr [ebp - 0x10] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x14)); /* 0x17041FBD: fmul dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x17041FC0: fld dword ptr [ebp - 0x24] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x18)); /* 0x17041FC3: fmul dword ptr [ebp - 0x18] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041FC6: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x17041FC8: fld dword ptr [ebp - 0x28] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x1C)); /* 0x17041FCB: fmul dword ptr [ebp - 0x1c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041FCE: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x17041FD0: fld dword ptr [ebp - 0x34] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x38)); /* 0x17041FD3: fmul dword ptr [ebp - 0x38] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17041FD6: faddp st(1) */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17041FDC; /* 0x17041FD8: je 0x17041fdc */
L_17041FDA:
    { float _v = (float)_st[0]; *(float*)ADDR(eax) = _v; } /* 0x17041FDA: fst dword ptr [eax] */
L_17041FDC:
    fp_push(_st[0]); /* 0x17041FDC: fld st(0) */
    fp_push(*(float*)&MEM32(0x17001430)); /* 0x17041FDE: fld dword ptr [0x17001430] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x17041FE4: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x17041FE6: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x17041FE8: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_17041FF4; /* 0x17041FEB: jp 0x17041ff4 */
L_17041FED:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x17041FED: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_17042099; /* 0x17041FEF: jmp 0x17042099 */
L_17041FF4:
    fp_push(1.0); /* 0x17041FF4: fld1  */
    PUSH32(esp, ecx); /* 0x17041FF6: push ecx */
    _st[0] /= _st[1]; /* 0x17041FF7: fdiv st(1) */
    PUSH32(esp, ecx); /* 0x17041FF9: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x17041FFA: fstp dword ptr [ebp - 8] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17041FFD: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17041FFF: fld dword ptr [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x17042002: fstp qword ptr [esp] */
    RECOMP_CALL(sub_1721B14E); /* 0x17042005: call 0x1721b14e */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x1704200A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x1704200C: pop ecx */
    ecx = POP32_VAL(esp); /* 0x1704200D: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704209B; /* 0x1704200E: je 0x1704209b */
L_17042014:
    eax = MEM32(ebp + 0x8); /* 0x17042014: mov eax, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17042017: fld dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x1704201A: fld dword ptr [ebp - 0x34] */
    _st[0] *= _st[1]; /* 0x1704201D: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1704201F: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x17042021: fld dword ptr [ebp - 0x28] */
    _st[0] *= _st[1]; /* 0x17042024: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x17042026: fstp dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x17042029: fld dword ptr [ebp - 0x24] */
    _st[0] *= _st[1]; /* 0x1704202C: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x1704202E: fstp dword ptr [eax + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x17042031: fld dword ptr [ebp - 0x10] */
    _st[0] *= _st[1]; /* 0x17042034: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x17042036: fstp dword ptr [eax + 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x17042039: fld dword ptr [ebp - 0x30] */
    _st[0] *= _st[1]; /* 0x1704203C: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x10) = _v; } /* 0x1704203E: fstp dword ptr [eax + 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x17042041: fld dword ptr [ebp - 0x20] */
    _st[0] *= _st[1]; /* 0x17042044: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x14) = _v; } /* 0x17042046: fstp dword ptr [eax + 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17042049: fld dword ptr [ebp - 4] */
    _st[0] *= _st[1]; /* 0x1704204C: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x18) = _v; } /* 0x1704204E: fstp dword ptr [eax + 0x18] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17042051: fld dword ptr [ebp + 0x10] */
    _st[0] *= _st[1]; /* 0x17042054: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x1C) = _v; } /* 0x17042056: fstp dword ptr [eax + 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x17042059: fld dword ptr [ebp - 0x2c] */
    _st[0] *= _st[1]; /* 0x1704205C: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x20) = _v; } /* 0x1704205E: fstp dword ptr [eax + 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x3C))); /* 0x17042061: fld dword ptr [ebp - 0x3c] */
    _st[0] *= _st[1]; /* 0x17042064: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x24) = _v; } /* 0x17042066: fstp dword ptr [eax + 0x24] */
    fp_push(*(float*)&MEM32(ebp + (-0x40))); /* 0x17042069: fld dword ptr [ebp - 0x40] */
    _st[0] *= _st[1]; /* 0x1704206C: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x28) = _v; } /* 0x1704206E: fstp dword ptr [eax + 0x28] */
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x17042071: fld dword ptr [ebp - 0x44] */
    _st[0] *= _st[1]; /* 0x17042074: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x2C) = _v; } /* 0x17042076: fstp dword ptr [eax + 0x2c] */
    fp_push(*(float*)&MEM32(ebp + (-0x48))); /* 0x17042079: fld dword ptr [ebp - 0x48] */
    _st[0] *= _st[1]; /* 0x1704207C: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x30) = _v; } /* 0x1704207E: fstp dword ptr [eax + 0x30] */
    fp_push(*(float*)&MEM32(ebp + (-0x4C))); /* 0x17042081: fld dword ptr [ebp - 0x4c] */
    _st[0] *= _st[1]; /* 0x17042084: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x34) = _v; } /* 0x17042086: fstp dword ptr [eax + 0x34] */
    fp_push(*(float*)&MEM32(ebp + (-0x50))); /* 0x17042089: fld dword ptr [ebp - 0x50] */
    _st[0] *= _st[1]; /* 0x1704208C: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x38) = _v; } /* 0x1704208E: fstp dword ptr [eax + 0x38] */
    fp_push(*(float*)&MEM32(ebp + (-0x54))); /* 0x17042091: fld dword ptr [ebp - 0x54] */
    _st[0] *= _st[1]; /* 0x17042094: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x3C) = _v; } /* 0x17042096: fstp dword ptr [eax + 0x3c] */
L_17042099:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17042099: fstp st(0) */
L_1704209B:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704209B: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1704209C: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_170420A4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170420A4u);

L_170420A4:
    edi = edi; /* 0x170420A4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170420A6: push ebp */
    ebp = esp; /* 0x170420A7: mov ebp, esp */
    PUSH32(esp, 1); /* 0x170420A9: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x170420AB: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x170420B0: fld dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x170420B3: sub esp, 0xc */
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x8) = _v; } /* 0x170420B6: fstp dword ptr [esp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x170420BA: fld dword ptr [ebp + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x170420BD: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x170420C1: fld dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x170420C4: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170420C7: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x172240D0)); /* 0x170420CA: call dword ptr [0x172240d0] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x170420D0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x170420D1: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_170420D9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170420D9u);

L_170420D9:
    { _itail_tgt = (uint32_t)(MEM32(0x172240D0)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_170420E4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170420E4u);

L_170420E4:
    edi = edi; /* 0x170420E4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170420E6: push ebp */
    ebp = esp; /* 0x170420E7: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x170420E9: mov eax, dword ptr [ebp + 8] */
    fp_push(0.0); /* 0x170420EC: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x38) = _v; } /* 0x170420EE: fstp dword ptr [eax + 0x38] */
    ecx = MEM32(ebp + 0xC); /* 0x170420F1: mov ecx, dword ptr [ebp + 0xc] */
    fp_push(0.0); /* 0x170420F4: fldz  */
    MEM32(eax) = ecx; /* 0x170420F6: mov dword ptr [eax], ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x34) = _v; } /* 0x170420F8: fstp dword ptr [eax + 0x34] */
    ecx = MEM32(ebp + 0x10); /* 0x170420FB: mov ecx, dword ptr [ebp + 0x10] */
    fp_push(0.0); /* 0x170420FE: fldz  */
    MEM32(eax + 0x14) = ecx; /* 0x17042100: mov dword ptr [eax + 0x14], ecx */
    ecx = MEM32(ebp + 0x14); /* 0x17042103: mov ecx, dword ptr [ebp + 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x30) = _v; } /* 0x17042106: fstp dword ptr [eax + 0x30] */
    MEM32(eax + 0x28) = ecx; /* 0x17042109: mov dword ptr [eax + 0x28], ecx */
    fp_push(0.0); /* 0x1704210C: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x2C) = _v; } /* 0x1704210E: fstp dword ptr [eax + 0x2c] */
    fp_push(0.0); /* 0x17042111: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x24) = _v; } /* 0x17042113: fstp dword ptr [eax + 0x24] */
    fp_push(0.0); /* 0x17042116: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x20) = _v; } /* 0x17042118: fstp dword ptr [eax + 0x20] */
    fp_push(0.0); /* 0x1704211B: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x1C) = _v; } /* 0x1704211D: fstp dword ptr [eax + 0x1c] */
    fp_push(0.0); /* 0x17042120: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x18) = _v; } /* 0x17042122: fstp dword ptr [eax + 0x18] */
    fp_push(0.0); /* 0x17042125: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x10) = _v; } /* 0x17042127: fstp dword ptr [eax + 0x10] */
    fp_push(0.0); /* 0x1704212A: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x1704212C: fstp dword ptr [eax + 0xc] */
    fp_push(0.0); /* 0x1704212F: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x17042131: fstp dword ptr [eax + 8] */
    fp_push(0.0); /* 0x17042134: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x17042136: fstp dword ptr [eax + 4] */
    fp_push(1.0); /* 0x17042139: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x3C) = _v; } /* 0x1704213B: fstp dword ptr [eax + 0x3c] */
    ebp = POP32_VAL(esp); /* 0x1704213E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1704213F: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_17042147(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17042147u);

L_17042147:
    edi = edi; /* 0x17042147: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17042149: push ebp */
    ebp = esp; /* 0x1704214A: mov ebp, esp */
    PUSH32(esp, 1); /* 0x1704214C: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x1704214E: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x17042153: fld dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x17042156: sub esp, 0xc */
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x8) = _v; } /* 0x17042159: fstp dword ptr [esp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x1704215D: fld dword ptr [ebp + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x17042160: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x17042164: fld dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17042167: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1704216A: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x172240B4)); /* 0x1704216D: call dword ptr [0x172240b4] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17042173: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17042174: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1704217C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704217Cu);

L_1704217C:
    { _itail_tgt = (uint32_t)(MEM32(0x172240B4)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17042187(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17042187u);

L_17042187:
    edi = edi; /* 0x17042187: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17042189: push ebp */
    ebp = esp; /* 0x1704218A: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x1704218C: mov eax, dword ptr [ebp + 8] */
    fp_push(0.0); /* 0x1704218F: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x2C) = _v; } /* 0x17042191: fstp dword ptr [eax + 0x2c] */
    ecx = MEM32(ebp + 0xC); /* 0x17042194: mov ecx, dword ptr [ebp + 0xc] */
    fp_push(0.0); /* 0x17042197: fldz  */
    MEM32(eax + 0x30) = ecx; /* 0x17042199: mov dword ptr [eax + 0x30], ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x24) = _v; } /* 0x1704219C: fstp dword ptr [eax + 0x24] */
    ecx = MEM32(ebp + 0x10); /* 0x1704219F: mov ecx, dword ptr [ebp + 0x10] */
    fp_push(0.0); /* 0x170421A2: fldz  */
    MEM32(eax + 0x34) = ecx; /* 0x170421A4: mov dword ptr [eax + 0x34], ecx */
    ecx = MEM32(ebp + 0x14); /* 0x170421A7: mov ecx, dword ptr [ebp + 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x20) = _v; } /* 0x170421AA: fstp dword ptr [eax + 0x20] */
    MEM32(eax + 0x38) = ecx; /* 0x170421AD: mov dword ptr [eax + 0x38], ecx */
    fp_push(0.0); /* 0x170421B0: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x1C) = _v; } /* 0x170421B2: fstp dword ptr [eax + 0x1c] */
    fp_push(0.0); /* 0x170421B5: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x18) = _v; } /* 0x170421B7: fstp dword ptr [eax + 0x18] */
    fp_push(0.0); /* 0x170421BA: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x10) = _v; } /* 0x170421BC: fstp dword ptr [eax + 0x10] */
    fp_push(0.0); /* 0x170421BF: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x170421C1: fstp dword ptr [eax + 0xc] */
    fp_push(0.0); /* 0x170421C4: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x170421C6: fstp dword ptr [eax + 8] */
    fp_push(0.0); /* 0x170421C9: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x170421CB: fstp dword ptr [eax + 4] */
    fp_push(1.0); /* 0x170421CE: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x3C) = _v; } /* 0x170421D0: fstp dword ptr [eax + 0x3c] */
    fp_push(1.0); /* 0x170421D3: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x28) = _v; } /* 0x170421D5: fstp dword ptr [eax + 0x28] */
    fp_push(1.0); /* 0x170421D8: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x14) = _v; } /* 0x170421DA: fstp dword ptr [eax + 0x14] */
    fp_push(1.0); /* 0x170421DD: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x170421DF: fstp dword ptr [eax] */
    ebp = POP32_VAL(esp); /* 0x170421E1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x170421E2: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_170421EA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170421EAu);

L_170421EA:
    edi = edi; /* 0x170421EA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170421EC: push ebp */
    ebp = esp; /* 0x170421ED: mov ebp, esp */
    PUSH32(esp, 1); /* 0x170421EF: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x170421F1: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x170421F6: fld dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x170421F9: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x170421FA: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170421FD: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x172240C4)); /* 0x17042200: call dword ptr [0x172240c4] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17042206: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17042207: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1704220F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704220Fu);

L_1704220F:
    { _itail_tgt = (uint32_t)(MEM32(0x172240C4)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1704221A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704221Au);

L_1704221A:
    edi = edi; /* 0x1704221A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704221C: push ebp */
    ebp = esp; /* 0x1704221D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1704221F: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = ebp + (-0x8); /* 0x17042222: lea eax, [ebp - 8] */
    MEM32(ebp + (-0xC)) = eax; /* 0x17042225: mov dword ptr [ebp - 0xc], eax */
    eax = ebp + (-0x4); /* 0x17042228: lea eax, [ebp - 4] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1704222B: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ebp + (-0x10)); /* 0x1704222E: mov eax, dword ptr [ebp - 0x10] */
    edx = MEM32(ebp + (-0xC)); /* 0x17042231: mov edx, dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x17042234: fld dword ptr [ebp + 0xc] */
    { double _a = _st[0]; _st[0] = sin(_a); fp_push(cos(_a)); } _fpu_cmp = 1; /* 0x17042237: fsincos  */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x17042239: fstp dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1704223B: fstp dword ptr [eax] */
    fp_push(1.0); /* 0x1704223D: fld1  */
    eax = MEM32(ebp + 0x8); /* 0x1704223F: mov eax, dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17042242: fstp dword ptr [eax] */
    fp_push(0.0); /* 0x17042244: fldz  */
    ecx = MEM32(ebp + (-0x4)); /* 0x17042246: mov ecx, dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x17042249: fstp dword ptr [eax + 4] */
    MEM32(eax + 0x18) = ecx; /* 0x1704224C: mov dword ptr [eax + 0x18], ecx */
    fp_push(0.0); /* 0x1704224F: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x17042251: fstp dword ptr [eax + 8] */
    fp_push(0.0); /* 0x17042254: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x17042256: fstp dword ptr [eax + 0xc] */
    fp_push(0.0); /* 0x17042259: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x10) = _v; } /* 0x1704225B: fstp dword ptr [eax + 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x1704225E: fld dword ptr [ebp - 8] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x14) = _v; } /* 0x17042261: fst dword ptr [eax + 0x14] */
    fp_push(0.0); /* 0x17042264: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x1C) = _v; } /* 0x17042266: fstp dword ptr [eax + 0x1c] */
    fp_push(0.0); /* 0x17042269: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x20) = _v; } /* 0x1704226B: fstp dword ptr [eax + 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x1704226E: fld dword ptr [ebp - 4] */
    _st[0] = -_st[0]; /* 0x17042271: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x24) = _v; } /* 0x17042273: fstp dword ptr [eax + 0x24] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x28) = _v; } /* 0x17042276: fstp dword ptr [eax + 0x28] */
    fp_push(0.0); /* 0x17042279: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x2C) = _v; } /* 0x1704227B: fstp dword ptr [eax + 0x2c] */
    fp_push(0.0); /* 0x1704227E: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x30) = _v; } /* 0x17042280: fstp dword ptr [eax + 0x30] */
    fp_push(0.0); /* 0x17042283: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x34) = _v; } /* 0x17042285: fstp dword ptr [eax + 0x34] */
    fp_push(0.0); /* 0x17042288: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x38) = _v; } /* 0x1704228A: fstp dword ptr [eax + 0x38] */
    fp_push(1.0); /* 0x1704228D: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x3C) = _v; } /* 0x1704228F: fstp dword ptr [eax + 0x3c] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17042292: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17042293: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1704229B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704229Bu);

L_1704229B:
    edi = edi; /* 0x1704229B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704229D: push ebp */
    ebp = esp; /* 0x1704229E: mov ebp, esp */
    PUSH32(esp, 1); /* 0x170422A0: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x170422A2: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x170422A7: fld dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x170422AA: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x170422AB: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170422AE: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x172240C8)); /* 0x170422B1: call dword ptr [0x172240c8] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x170422B7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x170422B8: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_170422C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170422C0u);

L_170422C0:
    { _itail_tgt = (uint32_t)(MEM32(0x172240C8)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_170422CB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170422CBu);

L_170422CB:
    edi = edi; /* 0x170422CB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170422CD: push ebp */
    ebp = esp; /* 0x170422CE: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x170422D0: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = ebp + (-0x4); /* 0x170422D3: lea eax, [ebp - 4] */
    MEM32(ebp + (-0xC)) = eax; /* 0x170422D6: mov dword ptr [ebp - 0xc], eax */
    eax = ebp + (-0x8); /* 0x170422D9: lea eax, [ebp - 8] */
    MEM32(ebp + (-0x10)) = eax; /* 0x170422DC: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ebp + (-0x10)); /* 0x170422DF: mov eax, dword ptr [ebp - 0x10] */
    edx = MEM32(ebp + (-0xC)); /* 0x170422E2: mov edx, dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x170422E5: fld dword ptr [ebp + 0xc] */
    { double _a = _st[0]; _st[0] = sin(_a); fp_push(cos(_a)); } _fpu_cmp = 1; /* 0x170422E8: fsincos  */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x170422EA: fstp dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x170422EC: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x170422EE: fld dword ptr [ebp - 4] */
    eax = MEM32(ebp + 0x8); /* 0x170422F1: mov eax, dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x170422F4: fld st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x170422F6: fstp dword ptr [eax] */
    fp_push(0.0); /* 0x170422F8: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x170422FA: fstp dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x170422FD: fld dword ptr [ebp - 8] */
    fp_push(_st[0]); /* 0x17042300: fld st(0) */
    _st[0] = -_st[0]; /* 0x17042302: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x17042304: fstp dword ptr [eax + 8] */
    fp_push(0.0); /* 0x17042307: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x17042309: fstp dword ptr [eax + 0xc] */
    fp_push(0.0); /* 0x1704230C: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x10) = _v; } /* 0x1704230E: fstp dword ptr [eax + 0x10] */
    fp_push(1.0); /* 0x17042311: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x14) = _v; } /* 0x17042313: fstp dword ptr [eax + 0x14] */
    fp_push(0.0); /* 0x17042316: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x18) = _v; } /* 0x17042318: fstp dword ptr [eax + 0x18] */
    fp_push(0.0); /* 0x1704231B: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x1C) = _v; } /* 0x1704231D: fstp dword ptr [eax + 0x1c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x20) = _v; } /* 0x17042320: fstp dword ptr [eax + 0x20] */
    fp_push(0.0); /* 0x17042323: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x24) = _v; } /* 0x17042325: fstp dword ptr [eax + 0x24] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x28) = _v; } /* 0x17042328: fstp dword ptr [eax + 0x28] */
    fp_push(0.0); /* 0x1704232B: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x2C) = _v; } /* 0x1704232D: fstp dword ptr [eax + 0x2c] */
    fp_push(0.0); /* 0x17042330: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x30) = _v; } /* 0x17042332: fstp dword ptr [eax + 0x30] */
    fp_push(0.0); /* 0x17042335: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x34) = _v; } /* 0x17042337: fstp dword ptr [eax + 0x34] */
    fp_push(0.0); /* 0x1704233A: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x38) = _v; } /* 0x1704233C: fstp dword ptr [eax + 0x38] */
    fp_push(1.0); /* 0x1704233F: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x3C) = _v; } /* 0x17042341: fstp dword ptr [eax + 0x3c] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17042344: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x17042345: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1704234D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704234Du);

L_1704234D:
    edi = edi; /* 0x1704234D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704234F: push ebp */
    ebp = esp; /* 0x17042350: mov ebp, esp */
    PUSH32(esp, 1); /* 0x17042352: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x17042354: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x17042359: fld dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x1704235C: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x1704235D: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17042360: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x172240CC)); /* 0x17042363: call dword ptr [0x172240cc] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17042369: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1704236A: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17042372(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17042372u);

L_17042372:
    { _itail_tgt = (uint32_t)(MEM32(0x172240CC)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1704237D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704237Du);

L_1704237D:
    edi = edi; /* 0x1704237D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704237F: push ebp */
    ebp = esp; /* 0x17042380: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x17042382: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = ebp + (-0x8); /* 0x17042385: lea eax, [ebp - 8] */
    MEM32(ebp + (-0xC)) = eax; /* 0x17042388: mov dword ptr [ebp - 0xc], eax */
    eax = ebp + (-0x4); /* 0x1704238B: lea eax, [ebp - 4] */
    MEM32(ebp + (-0x10)) = eax; /* 0x1704238E: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ebp + (-0x10)); /* 0x17042391: mov eax, dword ptr [ebp - 0x10] */
    edx = MEM32(ebp + (-0xC)); /* 0x17042394: mov edx, dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x17042397: fld dword ptr [ebp + 0xc] */
    { double _a = _st[0]; _st[0] = sin(_a); fp_push(cos(_a)); } _fpu_cmp = 1; /* 0x1704239A: fsincos  */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x1704239C: fstp dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1704239E: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x170423A0: fld dword ptr [ebp - 8] */
    eax = MEM32(ebp + 0x8); /* 0x170423A3: mov eax, dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x170423A6: fld st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x170423A8: fstp dword ptr [eax] */
    ecx = MEM32(ebp + (-0x4)); /* 0x170423AA: mov ecx, dword ptr [ebp - 4] */
    fp_push(0.0); /* 0x170423AD: fldz  */
    MEM32(eax + 0x4) = ecx; /* 0x170423AF: mov dword ptr [eax + 4], ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x170423B2: fstp dword ptr [eax + 8] */
    fp_push(0.0); /* 0x170423B5: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x170423B7: fstp dword ptr [eax + 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x170423BA: fld dword ptr [ebp - 4] */
    _st[0] = -_st[0]; /* 0x170423BD: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x10) = _v; } /* 0x170423BF: fstp dword ptr [eax + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x14) = _v; } /* 0x170423C2: fstp dword ptr [eax + 0x14] */
    fp_push(0.0); /* 0x170423C5: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x18) = _v; } /* 0x170423C7: fstp dword ptr [eax + 0x18] */
    fp_push(0.0); /* 0x170423CA: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x1C) = _v; } /* 0x170423CC: fstp dword ptr [eax + 0x1c] */
    fp_push(0.0); /* 0x170423CF: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x20) = _v; } /* 0x170423D1: fstp dword ptr [eax + 0x20] */
    fp_push(0.0); /* 0x170423D4: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x24) = _v; } /* 0x170423D6: fstp dword ptr [eax + 0x24] */
    fp_push(1.0); /* 0x170423D9: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x28) = _v; } /* 0x170423DB: fstp dword ptr [eax + 0x28] */
    fp_push(0.0); /* 0x170423DE: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x2C) = _v; } /* 0x170423E0: fstp dword ptr [eax + 0x2c] */
    fp_push(0.0); /* 0x170423E3: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x30) = _v; } /* 0x170423E5: fstp dword ptr [eax + 0x30] */
    fp_push(0.0); /* 0x170423E8: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x34) = _v; } /* 0x170423EA: fstp dword ptr [eax + 0x34] */
    fp_push(0.0); /* 0x170423ED: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x38) = _v; } /* 0x170423EF: fstp dword ptr [eax + 0x38] */
    fp_push(1.0); /* 0x170423F2: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x3C) = _v; } /* 0x170423F4: fstp dword ptr [eax + 0x3c] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x170423F7: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x170423F8: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17042400(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17042400u);

L_17042400:
    edi = edi; /* 0x17042400: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17042402: push ebp */
    ebp = esp; /* 0x17042403: mov ebp, esp */
    PUSH32(esp, 1); /* 0x17042405: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x17042407: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x1704240C: fld dword ptr [ebp + 0x10] */
    PUSH32(esp, ecx); /* 0x1704240F: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17042410: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x17042413: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17042416: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x172240F4)); /* 0x17042419: call dword ptr [0x172240f4] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1704241F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17042420: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17042428(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17042428u);

L_17042428:
    { _itail_tgt = (uint32_t)(MEM32(0x172240F4)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17042433(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17042433u);

L_17042433:
    edi = edi; /* 0x17042433: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17042435: push ebp */
    ebp = esp; /* 0x17042436: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x17042438: sub esp, 0x1c */
    _flag_k = FK_CMP;
    eax = ebp + (-0x4); /* 0x1704243B: lea eax, [ebp - 4] */
    MEM32(ebp + (-0xC)) = eax; /* 0x1704243E: mov dword ptr [ebp - 0xc], eax */
    PUSH32(esp, esi); /* 0x17042441: push esi */
    eax = ebp + (-0x8); /* 0x17042442: lea eax, [ebp - 8] */
    PUSH32(esp, edi); /* 0x17042445: push edi */
    MEM32(ebp + (-0x10)) = eax; /* 0x17042446: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ebp + (-0x10)); /* 0x17042449: mov eax, dword ptr [ebp - 0x10] */
    edx = MEM32(ebp + (-0xC)); /* 0x1704244C: mov edx, dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x1704244F: fld dword ptr [ebp + 0x10] */
    { double _a = _st[0]; _st[0] = sin(_a); fp_push(cos(_a)); } _fpu_cmp = 1; /* 0x17042452: fsincos  */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x17042454: fstp dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17042456: fstp dword ptr [eax] */
    fp_push(1.0); /* 0x17042458: fld1  */
    esi = MEM32(ebp + 0xC); /* 0x1704245A: mov esi, dword ptr [ebp + 0xc] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x1704245D: fsub dword ptr [ebp - 4] */
    edi = ebp + (-0x1C); /* 0x17042460: lea edi, [ebp - 0x1c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17042463: movsd dword ptr es:[edi], dword ptr [esi] */
    eax = ebp + (-0x1C); /* 0x17042464: lea eax, [ebp - 0x1c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x17042467: fstp dword ptr [ebp + 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704246A: movsd dword ptr es:[edi], dword ptr [esi] */
    PUSH32(esp, eax); /* 0x1704246B: push eax */
    PUSH32(esp, eax); /* 0x1704246C: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1704246D: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_17040B68); /* 0x1704246E: call 0x17040b68 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x17042473: mov eax, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17042476: fld dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x17042479: fld dword ptr [ebp - 0x18] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x1C)); /* 0x1704247C: fmul dword ptr [ebp - 0x1c] */
    _st[0] *= _st[1]; /* 0x1704247F: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x17042481: fstp dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x17042484: fld dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x17042487: fld dword ptr [ebp - 0x18] */
    _st[0] *= _st[1]; /* 0x1704248A: fmul st(1) */
    _st[0] *= _st[2]; /* 0x1704248C: fmul st(2) */
    fp_push(_st[1]); /* 0x1704248E: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x1C)); /* 0x17042490: fmul dword ptr [ebp - 0x1c] */
    _st[0] *= _st[3]; /* 0x17042493: fmul st(3) */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x17042495: fld dword ptr [ebp - 0x1c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x1C)); /* 0x17042498: fmul dword ptr [ebp - 0x1c] */
    _st[0] *= _st[4]; /* 0x1704249B: fmul st(4) */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x4)); /* 0x1704249D: fadd dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x170424A0: fstp dword ptr [eax] */
    fp_push(_st[2]); /* 0x170424A2: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x170424A4: fmul dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x170424A7: fld dword ptr [ebp + 0x10] */
    _st[0] += _st[1]; /* 0x170424AA: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x170424AC: fstp dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x170424AF: fld dword ptr [ebp - 0x18] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x170424B2: fmul dword ptr [ebp - 8] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + 0xC) = _v; } /* 0x170424B5: fst dword ptr [ebp + 0xc] */
    fp_push(_st[2]); /* 0x170424B8: fld st(2) */
    _st[0] -= _st[1]; /* 0x170424BA: fsub st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x170424BC: fstp dword ptr [eax + 8] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170424BF: fstp st(0) */
    fp_push(0.0); /* 0x170424C1: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x170424C3: fstp dword ptr [eax + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x170424C6: fld dword ptr [ebp + 0x10] */
    _st[0] -= _st[1]; /* 0x170424C9: fsub st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x10) = _v; } /* 0x170424CB: fstp dword ptr [eax + 0x10] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170424CE: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x170424D0: fld dword ptr [ebp - 0x18] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x18)); /* 0x170424D3: fmul dword ptr [ebp - 0x18] */
    _st[0] *= _st[4]; /* 0x170424D6: fmul st(4) */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x4)); /* 0x170424D8: fadd dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x14) = _v; } /* 0x170424DB: fstp dword ptr [eax + 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x170424DE: fld dword ptr [ebp - 0x1c] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x170424E1: fmul dword ptr [ebp - 8] */
    fp_push(_st[0]); /* 0x170424E4: fld st(0) */
    _st[0] += _st[3]; /* 0x170424E6: fadd st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x18) = _v; } /* 0x170424E8: fstp dword ptr [eax + 0x18] */
    fp_push(0.0); /* 0x170424EB: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x1C) = _v; } /* 0x170424ED: fstp dword ptr [eax + 0x1c] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x170424F0: fld dword ptr [ebp + 0xc] */
    _st[0] += _st[2]; /* 0x170424F3: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x20) = _v; } /* 0x170424F5: fstp dword ptr [eax + 0x20] */
    fp_push(_st[2]); /* 0x170424F8: fld st(2) */
    _st[0] -= _st[1]; /* 0x170424FA: fsub st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x24) = _v; } /* 0x170424FC: fstp dword ptr [eax + 0x24] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170424FF: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17042501: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17042503: fstp st(0) */
    fp_push(_st[0]); /* 0x17042505: fld st(0) */
    _st[0] *= _st[1]; /* 0x17042507: fmul st(1) */
    _st[0] *= _st[2]; /* 0x17042509: fmul st(2) */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x4)); /* 0x1704250B: fadd dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x28) = _v; } /* 0x1704250E: fstp dword ptr [eax + 0x28] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17042511: fstp st(0) */
    edi = POP32_VAL(esp); /* 0x17042513: pop edi */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17042514: fstp st(0) */
    esi = POP32_VAL(esp); /* 0x17042516: pop esi */
    fp_push(0.0); /* 0x17042517: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x2C) = _v; } /* 0x17042519: fstp dword ptr [eax + 0x2c] */
    fp_push(0.0); /* 0x1704251C: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x30) = _v; } /* 0x1704251E: fstp dword ptr [eax + 0x30] */
    fp_push(0.0); /* 0x17042521: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x34) = _v; } /* 0x17042523: fstp dword ptr [eax + 0x34] */
    fp_push(0.0); /* 0x17042526: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x38) = _v; } /* 0x17042528: fstp dword ptr [eax + 0x38] */
    fp_push(1.0); /* 0x1704252B: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x3C) = _v; } /* 0x1704252D: fstp dword ptr [eax + 0x3c] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17042530: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x17042531: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_17042539(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17042539u);

L_17042539:
    edi = edi; /* 0x17042539: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704253B: push ebp */
    ebp = esp; /* 0x1704253C: mov ebp, esp */
    PUSH32(esp, 1); /* 0x1704253E: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x17042540: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17042545: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x172240E4)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17042551(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17042551u);

L_17042551:
    { _itail_tgt = (uint32_t)(MEM32(0x172240E4)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1704255C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704255Cu);

L_1704255C:
    edi = edi; /* 0x1704255C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1704255E: push ebp */
    ebp = esp; /* 0x1704255F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x17042561: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0xC); /* 0x17042564: mov eax, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(0x170018CC)); /* 0x17042567: fld dword ptr [0x170018cc] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1704256D: fld dword ptr [eax] */
    _st[0] *= _st[1]; /* 0x1704256F: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17042571: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x17042574: fld dword ptr [eax + 4] */
    _st[0] *= _st[1]; /* 0x17042577: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x17042579: fstp dword ptr [ebp + 0xc] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x1704257C: fmul dword ptr [eax + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x1704257F: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(eax + 0xC); /* 0x17042582: fmul dword ptr [eax + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x17042585: fld dword ptr [ebp + 0xc] */
    _st[0] *= (double)*(float*)ADDR(eax + 0xC); /* 0x17042588: fmul dword ptr [eax + 0xc] */
    fp_push(_st[2]); /* 0x1704258B: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(eax + 0xC); /* 0x1704258D: fmul dword ptr [eax + 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17042590: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x17042593: fmul dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x17042595: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x17042598: fld dword ptr [ebp + 0xc] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x1704259B: fmul dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x1704259D: fstp dword ptr [ebp - 4] */
    fp_push(_st[3]); /* 0x170425A0: fld st(3) */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x170425A2: fmul dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x170425A4: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x170425A7: fld dword ptr [ebp + 0xc] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x170425AA: fmul dword ptr [eax + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x170425AD: fstp dword ptr [ebp - 0xc] */
    fp_push(_st[3]); /* 0x170425B0: fld st(3) */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x170425B2: fmul dword ptr [eax + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x170425B5: fstp dword ptr [ebp + 0xc] */
    fp_push(_st[3]); /* 0x170425B8: fld st(3) */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x170425BA: fmul dword ptr [eax + 8] */
    eax = MEM32(ebp + 0x8); /* 0x170425BD: mov eax, dword ptr [ebp + 8] */
    fp_push(1.0); /* 0x170425C0: fld1  */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x170425C2: fsub dword ptr [ebp - 0xc] */
    _st[0] -= _st[1]; /* 0x170425C5: fsub st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x170425C7: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x170425C9: fld dword ptr [ebp - 4] */
    _st[0] += _st[2]; /* 0x170425CC: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x170425CE: fstp dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x170425D1: fld dword ptr [ebp - 8] */
    _st[0] -= _st[3]; /* 0x170425D4: fsub st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x170425D6: fstp dword ptr [eax + 8] */
    fp_push(0.0); /* 0x170425D9: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x170425DB: fstp dword ptr [eax + 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x170425DE: fld dword ptr [ebp - 4] */
    _st[0] -= _st[2]; /* 0x170425E1: fsub st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x10) = _v; } /* 0x170425E3: fstp dword ptr [eax + 0x10] */
    fp_push(1.0); /* 0x170425E6: fld1  */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x10)); /* 0x170425E8: fsub dword ptr [ebp - 0x10] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + 0x8) = _v; } /* 0x170425EB: fst dword ptr [ebp + 8] */
    _st[0] -= _st[1]; /* 0x170425EE: fsub st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x14) = _v; } /* 0x170425F0: fstp dword ptr [eax + 0x14] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170425F3: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x170425F5: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x170425F7: fld dword ptr [ebp + 0xc] */
    _st[0] += _st[2]; /* 0x170425FA: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x18) = _v; } /* 0x170425FC: fstp dword ptr [eax + 0x18] */
    fp_push(0.0); /* 0x170425FF: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x1C) = _v; } /* 0x17042601: fstp dword ptr [eax + 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17042604: fld dword ptr [ebp - 8] */
    _st[0] += _st[1]; /* 0x17042607: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x20) = _v; } /* 0x17042609: fstp dword ptr [eax + 0x20] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1704260C: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1704260E: fld dword ptr [ebp + 0xc] */
    _st[0] -= _st[1]; /* 0x17042611: fsub st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x24) = _v; } /* 0x17042613: fstp dword ptr [eax + 0x24] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17042616: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x17042618: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x1704261A: fld dword ptr [ebp + 8] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x1704261D: fsub dword ptr [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x28) = _v; } /* 0x17042620: fstp dword ptr [eax + 0x28] */
    fp_push(0.0); /* 0x17042623: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x2C) = _v; } /* 0x17042625: fstp dword ptr [eax + 0x2c] */
    fp_push(0.0); /* 0x17042628: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x30) = _v; } /* 0x1704262A: fstp dword ptr [eax + 0x30] */
    fp_push(0.0); /* 0x1704262D: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x34) = _v; } /* 0x1704262F: fstp dword ptr [eax + 0x34] */
    fp_push(0.0); /* 0x17042632: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x38) = _v; } /* 0x17042634: fstp dword ptr [eax + 0x38] */
    fp_push(1.0); /* 0x17042637: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x3C) = _v; } /* 0x17042639: fstp dword ptr [eax + 0x3c] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1704263C: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1704263D: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_17042645(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17042645u);

L_17042645:
    edi = edi; /* 0x17042645: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17042647: push ebp */
    ebp = esp; /* 0x17042648: mov ebp, esp */
    PUSH32(esp, 1); /* 0x1704264A: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x1704264C: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x17042651: fld dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x17042654: sub esp, 0xc */
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x8) = _v; } /* 0x17042657: fstp dword ptr [esp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x1704265B: fld dword ptr [ebp + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x1704265E: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x17042662: fld dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17042665: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17042668: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x172240EC)); /* 0x1704266B: call dword ptr [0x172240ec] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17042671: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17042672: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1704267A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704267Au);

L_1704267A:
    { _itail_tgt = (uint32_t)(MEM32(0x172240EC)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17042685(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17042685u);

L_17042685:
    edi = edi; /* 0x17042685: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17042687: push ebp */
    ebp = esp; /* 0x17042688: mov ebp, esp */
    PUSH32(esp, 1); /* 0x1704268A: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x1704268C: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17042691: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x172240E8)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1704269D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704269Du);

L_1704269D:
    { _itail_tgt = (uint32_t)(MEM32(0x172240E8)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_170426A8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170426A8u);

L_170426A8:
    edi = edi; /* 0x170426A8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170426AA: push ebp */
    ebp = esp; /* 0x170426AB: mov ebp, esp */
    PUSH32(esp, 1); /* 0x170426AD: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x170426AF: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x170426B4: fld dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x170426B7: push dword ptr [ebp + 0x20] */
    PUSH32(esp, ecx); /* 0x170426BA: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x170426BB: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x170426BE: push dword ptr [ebp + 0x18] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x170426C1: fld dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x170426C4: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x170426C7: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x170426C8: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x170426CB: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x170426CE: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x17224168)); /* 0x170426D1: call dword ptr [0x17224168] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x170426D7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x170426D8: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_170426E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170426E0u);

L_170426E0:
    { _itail_tgt = (uint32_t)(MEM32(0x17224168)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_170426EB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x170426EBu);

L_170426EB:
    edi = edi; /* 0x170426EB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x170426ED: push ebp */
    ebp = esp; /* 0x170426EE: mov ebp, esp */
    PUSH32(esp, 1); /* 0x170426F0: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x170426F2: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x170426F7: fld dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x170426FA: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x170426FD: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17042700: push dword ptr [ebp + 0x10] */
    PUSH32(esp, ecx); /* 0x17042703: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17042704: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17042707: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x172240F0)); /* 0x1704270A: call dword ptr [0x172240f0] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x17042710: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x17042711: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_17042719(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17042719u);

L_17042719:
    { _itail_tgt = (uint32_t)(MEM32(0x172240F0)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_17042724(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17042724u);

L_17042724:
    edi = edi; /* 0x17042724: mov edi, edi */
    PUSH32(esp, ebx); /* 0x17042726: push ebx */
    ebx = esp; /* 0x17042727: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x17042729: push ecx */
    PUSH32(esp, ecx); /* 0x1704272A: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x1704272B: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x1704272E: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x17042731: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x17042732: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x17042735: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x17042739: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x48u; /* 0x1704273B: sub esp, 0x48 */
    _flag_k = FK_CMP;
    fp_push(0.0); /* 0x1704273E: fldz  */
    /* cmp MEM32(ebx + 0x14), 0 */ /* 0x17042740: cmp dword ptr [ebx + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x17042744: push esi */
    esi = MEM32(ebx + 0x8); /* 0x17042745: mov esi, dword ptr [ebx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x38) = _v; } /* 0x17042748: fstp dword ptr [esi + 0x38] */
    PUSH32(esp, edi); /* 0x1704274B: push edi */
    fp_push(0.0); /* 0x1704274C: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x34) = _v; } /* 0x1704274E: fstp dword ptr [esi + 0x34] */
    fp_push(0.0); /* 0x17042751: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x30) = _v; } /* 0x17042753: fstp dword ptr [esi + 0x30] */
    fp_push(0.0); /* 0x17042756: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x2C) = _v; } /* 0x17042758: fstp dword ptr [esi + 0x2c] */
    fp_push(0.0); /* 0x1704275B: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x24) = _v; } /* 0x1704275D: fstp dword ptr [esi + 0x24] */
    fp_push(0.0); /* 0x17042760: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x20) = _v; } /* 0x17042762: fstp dword ptr [esi + 0x20] */
    fp_push(0.0); /* 0x17042765: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x1C) = _v; } /* 0x17042767: fstp dword ptr [esi + 0x1c] */
    fp_push(0.0); /* 0x1704276A: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x18) = _v; } /* 0x1704276C: fstp dword ptr [esi + 0x18] */
    fp_push(0.0); /* 0x1704276F: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x10) = _v; } /* 0x17042771: fstp dword ptr [esi + 0x10] */
    fp_push(0.0); /* 0x17042774: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0xC) = _v; } /* 0x17042776: fstp dword ptr [esi + 0xc] */
    fp_push(0.0); /* 0x17042779: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x8) = _v; } /* 0x1704277B: fstp dword ptr [esi + 8] */
    fp_push(0.0); /* 0x1704277E: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x17042780: fstp dword ptr [esi + 4] */
    fp_push(*(float*)&MEM32(ebx + 0xC)); /* 0x17042783: fld dword ptr [ebx + 0xc] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi) = _v; } /* 0x17042786: fst dword ptr [esi] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x14) = _v; } /* 0x17042788: fst dword ptr [esi + 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x28) = _v; } /* 0x1704278B: fstp dword ptr [esi + 0x28] */
    fp_push(1.0); /* 0x1704278E: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x3C) = _v; } /* 0x17042790: fstp dword ptr [esi + 0x3c] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_170427EE; /* 0x17042793: je 0x170427ee */
L_17042795:
    PUSH32(esp, MEM32(ebx + 0x14)); /* 0x17042795: push dword ptr [ebx + 0x14] */
    eax = ebp + (-0x40); /* 0x17042798: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x1704279B: push eax */
    RECOMP_CALL(sub_17042551); /* 0x1704279C: call 0x17042551 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebx + 0x10); /* 0x170427A1: mov edi, dword ptr [ebx + 0x10] */
    /* test edi, edi */ /* 0x170427A4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x40); /* 0x170427A6: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x170427A9: push eax */
    PUSH32(esp, esi); /* 0x170427AA: push esi */
    PUSH32(esp, esi); /* 0x170427AB: push esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_170427E9; /* 0x170427AC: je 0x170427e9 */
L_170427AE:
    fp_push(*(float*)&MEM32(esi + 0x30)); /* 0x170427AE: fld dword ptr [esi + 0x30] */
    _st[0] -= (double)*(float*)ADDR(edi); /* 0x170427B1: fsub dword ptr [edi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x30) = _v; } /* 0x170427B3: fstp dword ptr [esi + 0x30] */
    fp_push(*(float*)&MEM32(esi + 0x34)); /* 0x170427B6: fld dword ptr [esi + 0x34] */
    _st[0] -= (double)*(float*)ADDR(edi + 0x4); /* 0x170427B9: fsub dword ptr [edi + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x34) = _v; } /* 0x170427BC: fstp dword ptr [esi + 0x34] */
    fp_push(*(float*)&MEM32(esi + 0x38)); /* 0x170427BF: fld dword ptr [esi + 0x38] */
    _st[0] -= (double)*(float*)ADDR(edi + 0x8); /* 0x170427C2: fsub dword ptr [edi + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x38) = _v; } /* 0x170427C5: fstp dword ptr [esi + 0x38] */
    RECOMP_CALL(sub_17041794); /* 0x170427C8: call 0x17041794 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(edi)); /* 0x170427CD: fld dword ptr [edi] */
    _st[0] += (double)*(float*)ADDR(esi + 0x30); /* 0x170427CF: fadd dword ptr [esi + 0x30] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x30) = _v; } /* 0x170427D2: fstp dword ptr [esi + 0x30] */
    fp_push(*(float*)&MEM32(esi + 0x34)); /* 0x170427D5: fld dword ptr [esi + 0x34] */
    _st[0] += (double)*(float*)ADDR(edi + 0x4); /* 0x170427D8: fadd dword ptr [edi + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x34) = _v; } /* 0x170427DB: fstp dword ptr [esi + 0x34] */
    fp_push(*(float*)&MEM32(edi + 0x8)); /* 0x170427DE: fld dword ptr [edi + 8] */
    _st[0] += (double)*(float*)ADDR(esi + 0x38); /* 0x170427E1: fadd dword ptr [esi + 0x38] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x38) = _v; } /* 0x170427E4: fstp dword ptr [esi + 0x38] */
    goto L_170427EE; /* 0x170427E7: jmp 0x170427ee */
L_170427E9:
    RECOMP_CALL(sub_17041794); /* 0x170427E9: call 0x17041794 */
    RECOMP_FLAGS_IN();
L_170427EE:
    eax = MEM32(ebx + 0x18); /* 0x170427EE: mov eax, dword ptr [ebx + 0x18] */
    /* test eax, eax */ /* 0x170427F1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1704280F; /* 0x170427F3: je 0x1704280f */
L_170427F5:
    fp_push(*(float*)&MEM32(eax)); /* 0x170427F5: fld dword ptr [eax] */
    _st[0] += (double)*(float*)ADDR(esi + 0x30); /* 0x170427F7: fadd dword ptr [esi + 0x30] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x30) = _v; } /* 0x170427FA: fstp dword ptr [esi + 0x30] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x170427FD: fld dword ptr [eax + 4] */
    _st[0] += (double)*(float*)ADDR(esi + 0x34); /* 0x17042800: fadd dword ptr [esi + 0x34] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x34) = _v; } /* 0x17042803: fstp dword ptr [esi + 0x34] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x17042806: fld dword ptr [eax + 8] */
    _st[0] += (double)*(float*)ADDR(esi + 0x38); /* 0x17042809: fadd dword ptr [esi + 0x38] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x38) = _v; } /* 0x1704280C: fstp dword ptr [esi + 0x38] */
L_1704280F:
    edi = POP32_VAL(esp); /* 0x1704280F: pop edi */
    eax = esi; /* 0x17042810: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x17042812: pop esi */
    esp = ebp; /* 0x17042813: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x17042815: pop ebp */
    esp = ebx; /* 0x17042816: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x17042818: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x17042819: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_17042821(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17042821u);

L_17042821:
    edi = edi; /* 0x17042821: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17042823: push ebp */
    ebp = esp; /* 0x17042824: mov ebp, esp */
    PUSH32(esp, 1); /* 0x17042826: push 1 */
    RECOMP_CALL(sub_1704A5B1); /* 0x17042828: call 0x1704a5b1 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x1704282D: fld dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x17042830: push dword ptr [ebp + 0x18] */
    PUSH32(esp, ecx); /* 0x17042833: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x17042834: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x17042837: push dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1704283A: fld dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x1704283D: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x1704283E: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x17042841: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x1722416C)); /* 0x17042844: call dword ptr [0x1722416c] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1704284A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1704284B: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_17042853(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17042853u);

L_17042853:
    { _itail_tgt = (uint32_t)(MEM32(0x1722416C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1704285E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1704285Eu);

L_1704285E:
    edi = edi; /* 0x1704285E: mov edi, edi */
    PUSH32(esp, ebx); /* 0x17042860: push ebx */
    ebx = esp; /* 0x17042861: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x17042863: push ecx */
    PUSH32(esp, ecx); /* 0x17042864: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x17042865: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x17042868: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x1704286B: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x1704286C: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x1704286F: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x17042873: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x48u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x48u; /* 0x17042875: sub esp, 0x48 */
    _flag_k = FK_CMP;
    fp_push(0.0); /* 0x17042878: fldz  */
    PUSH32(esp, esi); /* 0x1704287A: push esi */
    esi = MEM32(ebx + 0x8); /* 0x1704287B: mov esi, dword ptr [ebx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x38) = _v; } /* 0x1704287E: fstp dword ptr [esi + 0x38] */
    PUSH32(esp, edi); /* 0x17042881: push edi */
    fp_push(0.0); /* 0x17042882: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x34) = _v; } /* 0x17042884: fstp dword ptr [esi + 0x34] */
    fp_push(0.0); /* 0x17042887: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x30) = _v; } /* 0x17042889: fstp dword ptr [esi + 0x30] */
    fp_push(0.0); /* 0x1704288C: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x2C) = _v; } /* 0x1704288E: fstp dword ptr [esi + 0x2c] */
    fp_push(0.0); /* 0x17042891: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x24) = _v; } /* 0x17042893: fstp dword ptr [esi + 0x24] */
    fp_push(0.0); /* 0x17042896: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x20) = _v; } /* 0x17042898: fstp dword ptr [esi + 0x20] */
    fp_push(0.0); /* 0x1704289B: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x1C) = _v; } /* 0x1704289D: fstp dword ptr [esi + 0x1c] */
    fp_push(0.0); /* 0x170428A0: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x18) = _v; } /* 0x170428A2: fstp dword ptr [esi + 0x18] */
    fp_push(0.0); /* 0x170428A5: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x10) = _v; } /* 0x170428A7: fstp dword ptr [esi + 0x10] */
    fp_push(0.0); /* 0x170428AA: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0xC) = _v; } /* 0x170428AC: fstp dword ptr [esi + 0xc] */
    fp_push(0.0); /* 0x170428AF: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x8) = _v; } /* 0x170428B1: fstp dword ptr [esi + 8] */
    fp_push(0.0); /* 0x170428B4: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x170428B6: fstp dword ptr [esi + 4] */
    fp_push(*(float*)&MEM32(ebx + 0xC)); /* 0x170428B9: fld dword ptr [ebx + 0xc] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi) = _v; } /* 0x170428BC: fst dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x14) = _v; } /* 0x170428BE: fstp dword ptr [esi + 0x14] */
    fp_push(1.0); /* 0x170428C1: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x28) = _v; } /* 0x170428C3: fstp dword ptr [esi + 0x28] */
    fp_push(1.0); /* 0x170428C6: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x3C) = _v; } /* 0x170428C8: fstp dword ptr [esi + 0x3c] */
    fp_push(*(float*)&MEM32(ebx + 0x14)); /* 0x170428CB: fld dword ptr [ebx + 0x14] */
    fp_push(*(float*)&MEM32(0x17001430)); /* 0x170428CE: fld dword ptr [0x17001430] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x170428D4: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x170428D6: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x170428D8: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_17042928; /* 0x170428DB: jnp 0x17042928 */
L_170428DD:
    fp_push(*(float*)&MEM32(ebx + 0x14)); /* 0x170428DD: fld dword ptr [ebx + 0x14] */
    PUSH32(esp, ecx); /* 0x170428E0: push ecx */
    eax = ebp + (-0x40); /* 0x170428E1: lea eax, [ebp - 0x40] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x170428E4: fstp dword ptr [esp] */
    PUSH32(esp, eax); /* 0x170428E7: push eax */
    RECOMP_CALL(sub_17042372); /* 0x170428E8: call 0x17042372 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebx + 0x10); /* 0x170428ED: mov edi, dword ptr [ebx + 0x10] */
    /* test edi, edi */ /* 0x170428F0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x40); /* 0x170428F2: lea eax, [ebp - 0x40] */
    PUSH32(esp, eax); /* 0x170428F5: push eax */
    PUSH32(esp, esi); /* 0x170428F6: push esi */
    PUSH32(esp, esi); /* 0x170428F7: push esi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_17042923; /* 0x170428F8: je 0x17042923 */
L_170428FA:
    fp_push(*(float*)&MEM32(esi + 0x30)); /* 0x170428FA: fld dword ptr [esi + 0x30] */
    _st[0] -= (double)*(float*)ADDR(edi); /* 0x170428FD: fsub dword ptr [edi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x30) = _v; } /* 0x170428FF: fstp dword ptr [esi + 0x30] */
    fp_push(*(float*)&MEM32(esi + 0x34)); /* 0x17042902: fld dword ptr [esi + 0x34] */
    _st[0] -= (double)*(float*)ADDR(edi + 0x4); /* 0x17042905: fsub dword ptr [edi + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x34) = _v; } /* 0x17042908: fstp dword ptr [esi + 0x34] */
    RECOMP_CALL(sub_17041794); /* 0x1704290B: call 0x17041794 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(edi)); /* 0x17042910: fld dword ptr [edi] */
    _st[0] += (double)*(float*)ADDR(esi + 0x30); /* 0x17042912: fadd dword ptr [esi + 0x30] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x30) = _v; } /* 0x17042915: fstp dword ptr [esi + 0x30] */
    fp_push(*(float*)&MEM32(esi + 0x34)); /* 0x17042918: fld dword ptr [esi + 0x34] */
    _st[0] += (double)*(float*)ADDR(edi + 0x4); /* 0x1704291B: fadd dword ptr [edi + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x34) = _v; } /* 0x1704291E: fstp dword ptr [esi + 0x34] */
    goto L_17042928; /* 0x17042921: jmp 0x17042928 */
L_17042923:
    RECOMP_CALL(sub_17041794); /* 0x17042923: call 0x17041794 */
    RECOMP_FLAGS_IN();
L_17042928:
    eax = MEM32(ebx + 0x18); /* 0x17042928: mov eax, dword ptr [ebx + 0x18] */
    /* test eax, eax */ /* 0x1704292B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_17042940; /* 0x1704292D: je 0x17042940 */
L_1704292F:
    fp_push(*(float*)&MEM32(eax)); /* 0x1704292F: fld dword ptr [eax] */
    _st[0] += (double)*(float*)ADDR(esi + 0x30); /* 0x17042931: fadd dword ptr [esi + 0x30] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x30) = _v; } /* 0x17042934: fstp dword ptr [esi + 0x30] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x17042937: fld dword ptr [eax + 4] */
    _st[0] += (double)*(float*)ADDR(esi + 0x34); /* 0x1704293A: fadd dword ptr [esi + 0x34] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x34) = _v; } /* 0x1704293D: fstp dword ptr [esi + 0x34] */
L_17042940:
    edi = POP32_VAL(esp); /* 0x17042940: pop edi */
    eax = esi; /* 0x17042941: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x17042943: pop esi */
    esp = ebp; /* 0x17042944: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x17042946: pop ebp */
    esp = ebx; /* 0x17042947: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x17042949: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1704294A: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_17042952(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17042952u);

L_17042952:
    edi = edi; /* 0x17042952: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17042954: push ebp */
    ebp = esp; /* 0x17042955: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x17042957: sub esp, 0x30 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x10); /* 0x1704295A: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x1704295D: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1704295E: mov ebx, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebx)); /* 0x17042961: fld dword ptr [ebx] */
    PUSH32(esp, esi); /* 0x17042963: push esi */
    _st[0] -= (double)*(float*)ADDR(eax); /* 0x17042964: fsub dword ptr [eax] */
    PUSH32(esp, edi); /* 0x17042966: push edi */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x17042967: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebx + 0x4)); /* 0x1704296A: fld dword ptr [ebx + 4] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x4); /* 0x1704296D: fsub dword ptr [eax + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x17042970: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebx + 0x8)); /* 0x17042973: fld dword ptr [ebx + 8] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x8); /* 0x17042976: fsub dword ptr [eax + 8] */
    eax = ebp + (-0xC); /* 0x17042979: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1704297C: push eax */
    PUSH32(esp, eax); /* 0x1704297D: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x1704297E: fstp dword ptr [ebp - 4] */
    RECOMP_CALL(sub_17040B68); /* 0x17042981: call 0x17040b68 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x14); /* 0x17042986: mov eax, dword ptr [ebp + 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17042989: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x1704298C: fmul dword ptr [eax + 4] */
    esi = ebp + (-0x24); /* 0x1704298F: lea esi, [ebp - 0x24] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17042992: fld dword ptr [ebp - 8] */
    edi = ebp + (-0x18); /* 0x17042995: lea edi, [ebp - 0x18] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x17042998: fmul dword ptr [eax + 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1704299B: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x1704299D: fstp dword ptr [ebp - 0x24] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x170429A0: fld dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x170429A3: fmul dword ptr [eax + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x170429A6: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x170429A9: fmul dword ptr [eax] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170429AB: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x170429AD: fstp dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x170429B0: fld dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x170429B3: fmul dword ptr [eax] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x170429B5: fld dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x170429B8: fmul dword ptr [eax + 4] */
    eax = ebp + (-0x18); /* 0x170429BB: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x170429BE: push eax */
    PUSH32(esp, eax); /* 0x170429BF: push eax */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170429C0: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x170429C2: fstp dword ptr [ebp - 0x1c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170429C5: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170429C6: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x170429C7: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_17040B68); /* 0x170429C8: call 0x17040b68 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x170429CD: mov eax, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x170429D0: fld dword ptr [ebp - 8] */
    ecx = MEM32(ebp + (-0x14)); /* 0x170429D3: mov ecx, dword ptr [ebp - 0x14] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x10)); /* 0x170429D6: fmul dword ptr [ebp - 0x10] */
    MEM32(eax + 0x10) = ecx; /* 0x170429D9: mov dword ptr [eax + 0x10], ecx */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x170429DC: fld dword ptr [ebp - 4] */
    ecx = MEM32(ebp + (-0x10)); /* 0x170429DF: mov ecx, dword ptr [ebp - 0x10] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x14)); /* 0x170429E2: fmul dword ptr [ebp - 0x14] */
    esi = ebp + (-0x30); /* 0x170429E5: lea esi, [ebp - 0x30] */
    edi = ebp + (-0x24); /* 0x170429E8: lea edi, [ebp - 0x24] */
    MEM32(eax + 0x20) = ecx; /* 0x170429EB: mov dword ptr [eax + 0x20], ecx */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170429EE: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x170429F0: fstp dword ptr [ebp - 0x30] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x170429F3: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x18)); /* 0x170429F6: fmul dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x170429F9: fld dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x10)); /* 0x170429FC: fmul dword ptr [ebp - 0x10] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x170429FF: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x17042A01: fstp dword ptr [ebp - 0x2c] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x17042A04: fld dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x14)); /* 0x17042A07: fmul dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17042A0A: fld dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x18)); /* 0x17042A0D: fmul dword ptr [ebp - 0x18] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17042A10: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x17042A12: fstp dword ptr [ebp - 0x28] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17042A15: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x17042A16: fld dword ptr [ebp - 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17042A19: fstp dword ptr [eax] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17042A1B: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x17042A1C: fld dword ptr [ebp - 0x18] */
    _st[0] *= (double)*(float*)ADDR(ebx); /* 0x17042A1F: fmul dword ptr [ebx] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x17042A21: fld dword ptr [ebp - 0x14] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x4); /* 0x17042A24: fmul dword ptr [ebx + 4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17042A27: movsd dword ptr es:[edi], dword ptr [esi] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17042A28: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x17042A2A: fld dword ptr [ebp - 0x10] */
    ecx = MEM32(ebp + (-0x24)); /* 0x17042A2D: mov ecx, dword ptr [ebp - 0x24] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x8); /* 0x17042A30: fmul dword ptr [ebx + 8] */
    MEM32(eax + 0x4) = ecx; /* 0x17042A33: mov dword ptr [eax + 4], ecx */
    ecx = MEM32(ebp + (-0x20)); /* 0x17042A36: mov ecx, dword ptr [ebp - 0x20] */
    MEM32(eax + 0x14) = ecx; /* 0x17042A39: mov dword ptr [eax + 0x14], ecx */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17042A3C: faddp st(1) */
    ecx = MEM32(ebp + (-0x1C)); /* 0x17042A3E: mov ecx, dword ptr [ebp - 0x1c] */
    MEM32(eax + 0x24) = ecx; /* 0x17042A41: mov dword ptr [eax + 0x24], ecx */
    ecx = MEM32(ebp + (-0xC)); /* 0x17042A44: mov ecx, dword ptr [ebp - 0xc] */
    _st[0] = -_st[0]; /* 0x17042A47: fchs  */
    edi = POP32_VAL(esp); /* 0x17042A49: pop edi */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x30) = _v; } /* 0x17042A4A: fstp dword ptr [eax + 0x30] */
    esi = POP32_VAL(esp); /* 0x17042A4D: pop esi */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x17042A4E: fld dword ptr [ebp - 0x24] */
    _st[0] *= (double)*(float*)ADDR(ebx); /* 0x17042A51: fmul dword ptr [ebx] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x17042A53: fld dword ptr [ebp - 0x20] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x4); /* 0x17042A56: fmul dword ptr [ebx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17042A59: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x17042A5B: fld dword ptr [ebp - 0x1c] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x8); /* 0x17042A5E: fmul dword ptr [ebx + 8] */
    MEM32(eax + 0x8) = ecx; /* 0x17042A61: mov dword ptr [eax + 8], ecx */
    ecx = MEM32(ebp + (-0x8)); /* 0x17042A64: mov ecx, dword ptr [ebp - 8] */
    MEM32(eax + 0x18) = ecx; /* 0x17042A67: mov dword ptr [eax + 0x18], ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x17042A6A: mov ecx, dword ptr [ebp - 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17042A6D: faddp st(1) */
    MEM32(eax + 0x28) = ecx; /* 0x17042A6F: mov dword ptr [eax + 0x28], ecx */
    _st[0] = -_st[0]; /* 0x17042A72: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x34) = _v; } /* 0x17042A74: fstp dword ptr [eax + 0x34] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x17042A77: fld dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebx); /* 0x17042A7A: fmul dword ptr [ebx] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17042A7C: fld dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x4); /* 0x17042A7F: fmul dword ptr [ebx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17042A82: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17042A84: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x8); /* 0x17042A87: fmul dword ptr [ebx + 8] */
    ebx = POP32_VAL(esp); /* 0x17042A8A: pop ebx */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17042A8B: faddp st(1) */
    _st[0] = -_st[0]; /* 0x17042A8D: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x38) = _v; } /* 0x17042A8F: fstp dword ptr [eax + 0x38] */
    fp_push(0.0); /* 0x17042A92: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x17042A94: fstp dword ptr [eax + 0xc] */
    fp_push(0.0); /* 0x17042A97: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x1C) = _v; } /* 0x17042A99: fstp dword ptr [eax + 0x1c] */
    fp_push(0.0); /* 0x17042A9C: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x2C) = _v; } /* 0x17042A9E: fstp dword ptr [eax + 0x2c] */
    fp_push(1.0); /* 0x17042AA1: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x3C) = _v; } /* 0x17042AA3: fstp dword ptr [eax + 0x3c] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17042AA6: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17042AA7: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_17042AAF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17042AAFu);

L_17042AAF:
    edi = edi; /* 0x17042AAF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17042AB1: push ebp */
    ebp = esp; /* 0x17042AB2: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x30u; /* 0x17042AB4: sub esp, 0x30 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x10); /* 0x17042AB7: mov eax, dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(eax)); /* 0x17042ABA: fld dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x17042ABC: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x17042ABD: mov ebx, dword ptr [ebp + 0xc] */
    _st[0] -= (double)*(float*)ADDR(ebx); /* 0x17042AC0: fsub dword ptr [ebx] */
    PUSH32(esp, esi); /* 0x17042AC2: push esi */
    PUSH32(esp, edi); /* 0x17042AC3: push edi */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x17042AC4: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x17042AC7: fld dword ptr [eax + 4] */
    _st[0] -= (double)*(float*)ADDR(ebx + 0x4); /* 0x17042ACA: fsub dword ptr [ebx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x17042ACD: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x17042AD0: fld dword ptr [eax + 8] */
    eax = ebp + (-0xC); /* 0x17042AD3: lea eax, [ebp - 0xc] */
    _st[0] -= (double)*(float*)ADDR(ebx + 0x8); /* 0x17042AD6: fsub dword ptr [ebx + 8] */
    PUSH32(esp, eax); /* 0x17042AD9: push eax */
    PUSH32(esp, eax); /* 0x17042ADA: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x17042ADB: fstp dword ptr [ebp - 4] */
    RECOMP_CALL(sub_17040B68); /* 0x17042ADE: call 0x17040b68 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x14); /* 0x17042AE3: mov eax, dword ptr [ebp + 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17042AE6: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x17042AE9: fmul dword ptr [eax + 4] */
    esi = ebp + (-0x24); /* 0x17042AEC: lea esi, [ebp - 0x24] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17042AEF: fld dword ptr [ebp - 8] */
    edi = ebp + (-0x18); /* 0x17042AF2: lea edi, [ebp - 0x18] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x17042AF5: fmul dword ptr [eax + 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17042AF8: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x17042AFA: fstp dword ptr [ebp - 0x24] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x17042AFD: fld dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x17042B00: fmul dword ptr [eax + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17042B03: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x17042B06: fmul dword ptr [eax] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17042B08: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x17042B0A: fstp dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17042B0D: fld dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x17042B10: fmul dword ptr [eax] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x17042B12: fld dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x17042B15: fmul dword ptr [eax + 4] */
    eax = ebp + (-0x18); /* 0x17042B18: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x17042B1B: push eax */
    PUSH32(esp, eax); /* 0x17042B1C: push eax */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17042B1D: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x17042B1F: fstp dword ptr [ebp - 0x1c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17042B22: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17042B23: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17042B24: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_17040B68); /* 0x17042B25: call 0x17040b68 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x17042B2A: mov eax, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17042B2D: fld dword ptr [ebp - 8] */
    ecx = MEM32(ebp + (-0x14)); /* 0x17042B30: mov ecx, dword ptr [ebp - 0x14] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x10)); /* 0x17042B33: fmul dword ptr [ebp - 0x10] */
    MEM32(eax + 0x10) = ecx; /* 0x17042B36: mov dword ptr [eax + 0x10], ecx */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17042B39: fld dword ptr [ebp - 4] */
    ecx = MEM32(ebp + (-0x10)); /* 0x17042B3C: mov ecx, dword ptr [ebp - 0x10] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x14)); /* 0x17042B3F: fmul dword ptr [ebp - 0x14] */
    esi = ebp + (-0x30); /* 0x17042B42: lea esi, [ebp - 0x30] */
    edi = ebp + (-0x24); /* 0x17042B45: lea edi, [ebp - 0x24] */
    MEM32(eax + 0x20) = ecx; /* 0x17042B48: mov dword ptr [eax + 0x20], ecx */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17042B4B: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x17042B4D: fstp dword ptr [ebp - 0x30] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17042B50: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x18)); /* 0x17042B53: fmul dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x17042B56: fld dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x10)); /* 0x17042B59: fmul dword ptr [ebp - 0x10] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17042B5C: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x17042B5E: fstp dword ptr [ebp - 0x2c] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x17042B61: fld dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x14)); /* 0x17042B64: fmul dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17042B67: fld dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x18)); /* 0x17042B6A: fmul dword ptr [ebp - 0x18] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x17042B6D: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x17042B6F: fstp dword ptr [ebp - 0x28] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17042B72: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x17042B73: fld dword ptr [ebp - 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17042B76: fstp dword ptr [eax] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17042B78: movsd dword ptr es:[edi], dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x17042B79: fld dword ptr [ebp - 0x14] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x4); /* 0x17042B7C: fmul dword ptr [ebx + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x17042B7F: fld dword ptr [ebp - 0x18] */
    _st[0] *= (double)*(float*)ADDR(ebx); /* 0x17042B82: fmul dword ptr [ebx] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x17042B84: movsd dword ptr es:[edi], dword ptr [esi] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17042B85: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x17042B87: fld dword ptr [ebp - 0x10] */
    ecx = MEM32(ebp + (-0x24)); /* 0x17042B8A: mov ecx, dword ptr [ebp - 0x24] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x8); /* 0x17042B8D: fmul dword ptr [ebx + 8] */
    MEM32(eax + 0x4) = ecx; /* 0x17042B90: mov dword ptr [eax + 4], ecx */
    ecx = MEM32(ebp + (-0x20)); /* 0x17042B93: mov ecx, dword ptr [ebp - 0x20] */
    MEM32(eax + 0x14) = ecx; /* 0x17042B96: mov dword ptr [eax + 0x14], ecx */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17042B99: faddp st(1) */
    ecx = MEM32(ebp + (-0x1C)); /* 0x17042B9B: mov ecx, dword ptr [ebp - 0x1c] */
    MEM32(eax + 0x24) = ecx; /* 0x17042B9E: mov dword ptr [eax + 0x24], ecx */
    ecx = MEM32(ebp + (-0xC)); /* 0x17042BA1: mov ecx, dword ptr [ebp - 0xc] */
    _st[0] = -_st[0]; /* 0x17042BA4: fchs  */
    edi = POP32_VAL(esp); /* 0x17042BA6: pop edi */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x30) = _v; } /* 0x17042BA7: fstp dword ptr [eax + 0x30] */
    esi = POP32_VAL(esp); /* 0x17042BAA: pop esi */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x17042BAB: fld dword ptr [ebp - 0x20] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x4); /* 0x17042BAE: fmul dword ptr [ebx + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x17042BB1: fld dword ptr [ebp - 0x24] */
    _st[0] *= (double)*(float*)ADDR(ebx); /* 0x17042BB4: fmul dword ptr [ebx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17042BB6: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x17042BB8: fld dword ptr [ebp - 0x1c] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x8); /* 0x17042BBB: fmul dword ptr [ebx + 8] */
    MEM32(eax + 0x8) = ecx; /* 0x17042BBE: mov dword ptr [eax + 8], ecx */
    ecx = MEM32(ebp + (-0x8)); /* 0x17042BC1: mov ecx, dword ptr [ebp - 8] */
    MEM32(eax + 0x18) = ecx; /* 0x17042BC4: mov dword ptr [eax + 0x18], ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x17042BC7: mov ecx, dword ptr [ebp - 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17042BCA: faddp st(1) */
    MEM32(eax + 0x28) = ecx; /* 0x17042BCC: mov dword ptr [eax + 0x28], ecx */
    _st[0] = -_st[0]; /* 0x17042BCF: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x34) = _v; } /* 0x17042BD1: fstp dword ptr [eax + 0x34] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17042BD4: fld dword ptr [ebp - 8] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x4); /* 0x17042BD7: fmul dword ptr [ebx + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x17042BDA: fld dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(ebx); /* 0x17042BDD: fmul dword ptr [ebx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17042BDF: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x17042BE1: fld dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x8); /* 0x17042BE4: fmul dword ptr [ebx + 8] */
    ebx = POP32_VAL(esp); /* 0x17042BE7: pop ebx */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x17042BE8: faddp st(1) */
    _st[0] = -_st[0]; /* 0x17042BEA: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x38) = _v; } /* 0x17042BEC: fstp dword ptr [eax + 0x38] */
    fp_push(0.0); /* 0x17042BEF: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x17042BF1: fstp dword ptr [eax + 0xc] */
    fp_push(0.0); /* 0x17042BF4: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x1C) = _v; } /* 0x17042BF6: fstp dword ptr [eax + 0x1c] */
    fp_push(0.0); /* 0x17042BF9: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x2C) = _v; } /* 0x17042BFB: fstp dword ptr [eax + 0x2c] */
    fp_push(1.0); /* 0x17042BFE: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x3C) = _v; } /* 0x17042C00: fstp dword ptr [eax + 0x3c] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17042C03: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x17042C04: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_17042C0C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17042C0Cu);

L_17042C0C:
    edi = edi; /* 0x17042C0C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17042C0E: push ebp */
    ebp = esp; /* 0x17042C0F: mov ebp, esp */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x17042C11: fld dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0x8); /* 0x17042C14: mov eax, dword ptr [ebp + 8] */
    _st[0] += _st[0]; /* 0x17042C17: fadd st(0), st(0) */
    MEM32(eax + 0x2C) = 0xBF800000u; /* 0x17042C19: mov dword ptr [eax + 0x2c], 0xbf800000 */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x17042C20: fld dword ptr [ebp + 0xc] */
    _st[0] = _st[1] / _st[0]; /* 0x17042C23: fdivr st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17042C25: fstp dword ptr [eax] */
    fp_push(0.0); /* 0x17042C27: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x17042C29: fstp dword ptr [eax + 4] */
    fp_push(0.0); /* 0x17042C2C: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x17042C2E: fstp dword ptr [eax + 8] */
    fp_push(0.0); /* 0x17042C31: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x17042C33: fstp dword ptr [eax + 0xc] */
    fp_push(0.0); /* 0x17042C36: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x10) = _v; } /* 0x17042C38: fstp dword ptr [eax + 0x10] */
    _st[0] /= (double)*(float*)ADDR(ebp + 0x10); /* 0x17042C3B: fdiv dword ptr [ebp + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x14) = _v; } /* 0x17042C3E: fstp dword ptr [eax + 0x14] */
    fp_push(0.0); /* 0x17042C41: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x18) = _v; } /* 0x17042C43: fstp dword ptr [eax + 0x18] */
    fp_push(0.0); /* 0x17042C46: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x1C) = _v; } /* 0x17042C48: fstp dword ptr [eax + 0x1c] */
    fp_push(0.0); /* 0x17042C4B: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x20) = _v; } /* 0x17042C4D: fstp dword ptr [eax + 0x20] */
    fp_push(0.0); /* 0x17042C50: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x24) = _v; } /* 0x17042C52: fstp dword ptr [eax + 0x24] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x17042C55: fld dword ptr [ebp + 0x14] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x18); /* 0x17042C58: fsub dword ptr [ebp + 0x18] */
    _st[0] = (double)*(float*)ADDR(ebp + 0x18) / _st[0]; /* 0x17042C5B: fdivr dword ptr [ebp + 0x18] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x28) = _v; } /* 0x17042C5E: fst dword ptr [eax + 0x28] */
    fp_push(0.0); /* 0x17042C61: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x30) = _v; } /* 0x17042C63: fstp dword ptr [eax + 0x30] */
    fp_push(0.0); /* 0x17042C66: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x34) = _v; } /* 0x17042C68: fstp dword ptr [eax + 0x34] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x14); /* 0x17042C6B: fmul dword ptr [ebp + 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x38) = _v; } /* 0x17042C6E: fstp dword ptr [eax + 0x38] */
    fp_push(0.0); /* 0x17042C71: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x3C) = _v; } /* 0x17042C73: fstp dword ptr [eax + 0x3c] */
    ebp = POP32_VAL(esp); /* 0x17042C76: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x17042C77: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_17042C7F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17042C7Fu);

L_17042C7F:
    edi = edi; /* 0x17042C7F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17042C81: push ebp */
    ebp = esp; /* 0x17042C82: mov ebp, esp */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x17042C84: fld dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0x8); /* 0x17042C87: mov eax, dword ptr [ebp + 8] */
    _st[0] += _st[0]; /* 0x17042C8A: fadd st(0), st(0) */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x17042C8C: fld dword ptr [ebp + 0xc] */
    _st[0] = _st[1] / _st[0]; /* 0x17042C8F: fdivr st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17042C91: fstp dword ptr [eax] */
    fp_push(0.0); /* 0x17042C93: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x17042C95: fstp dword ptr [eax + 4] */
    fp_push(0.0); /* 0x17042C98: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x17042C9A: fstp dword ptr [eax + 8] */
    fp_push(0.0); /* 0x17042C9D: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x17042C9F: fstp dword ptr [eax + 0xc] */
    fp_push(0.0); /* 0x17042CA2: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x10) = _v; } /* 0x17042CA4: fstp dword ptr [eax + 0x10] */
    _st[0] /= (double)*(float*)ADDR(ebp + 0x10); /* 0x17042CA7: fdiv dword ptr [ebp + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x14) = _v; } /* 0x17042CAA: fstp dword ptr [eax + 0x14] */
    fp_push(0.0); /* 0x17042CAD: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x18) = _v; } /* 0x17042CAF: fstp dword ptr [eax + 0x18] */
    fp_push(0.0); /* 0x17042CB2: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x1C) = _v; } /* 0x17042CB4: fstp dword ptr [eax + 0x1c] */
    fp_push(0.0); /* 0x17042CB7: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x20) = _v; } /* 0x17042CB9: fstp dword ptr [eax + 0x20] */
    fp_push(0.0); /* 0x17042CBC: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x24) = _v; } /* 0x17042CBE: fstp dword ptr [eax + 0x24] */
    fp_push(*(float*)&MEM32(ebp + 0x18)); /* 0x17042CC1: fld dword ptr [ebp + 0x18] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x14); /* 0x17042CC4: fsub dword ptr [ebp + 0x14] */
    _st[0] = (double)*(float*)ADDR(ebp + 0x18) / _st[0]; /* 0x17042CC7: fdivr dword ptr [ebp + 0x18] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x28) = _v; } /* 0x17042CCA: fst dword ptr [eax + 0x28] */
    fp_push(1.0); /* 0x17042CCD: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x2C) = _v; } /* 0x17042CCF: fstp dword ptr [eax + 0x2c] */
    fp_push(0.0); /* 0x17042CD2: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x30) = _v; } /* 0x17042CD4: fstp dword ptr [eax + 0x30] */
    fp_push(0.0); /* 0x17042CD7: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x34) = _v; } /* 0x17042CD9: fstp dword ptr [eax + 0x34] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x14); /* 0x17042CDC: fmul dword ptr [ebp + 0x14] */
    _st[0] = -_st[0]; /* 0x17042CDF: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x38) = _v; } /* 0x17042CE1: fstp dword ptr [eax + 0x38] */
    fp_push(0.0); /* 0x17042CE4: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x3C) = _v; } /* 0x17042CE6: fstp dword ptr [eax + 0x3c] */
    ebp = POP32_VAL(esp); /* 0x17042CE9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x17042CEA: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_17042CF2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17042CF2u);

L_17042CF2:
    edi = edi; /* 0x17042CF2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17042CF4: push ebp */
    ebp = esp; /* 0x17042CF5: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x17042CF7: sub esp, 0x10 */
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x17042CFA: fld dword ptr [ebp + 0xc] */
    eax = ebp + 0xC; /* 0x17042CFD: lea eax, [ebp + 0xc] */
    _st[0] *= (double)*(float*)ADDR(0x1700141C); /* 0x17042D00: fmul dword ptr [0x1700141c] */
    MEM32(ebp + (-0xC)) = eax; /* 0x17042D06: mov dword ptr [ebp - 0xc], eax */
    eax = ebp + (-0x4); /* 0x17042D09: lea eax, [ebp - 4] */
    MEM32(ebp + (-0x10)) = eax; /* 0x17042D0C: mov dword ptr [ebp - 0x10], eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x17042D0F: fstp dword ptr [ebp - 8] */
    eax = MEM32(ebp + (-0x10)); /* 0x17042D12: mov eax, dword ptr [ebp - 0x10] */
    edx = MEM32(ebp + (-0xC)); /* 0x17042D15: mov edx, dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17042D18: fld dword ptr [ebp - 8] */
    { double _a = _st[0]; _st[0] = sin(_a); fp_push(cos(_a)); } _fpu_cmp = 1; /* 0x17042D1B: fsincos  */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x17042D1D: fstp dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17042D1F: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x17042D21: fld dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x17042D24: mov eax, dword ptr [ebp + 8] */
    _st[0] /= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x17042D27: fdiv dword ptr [ebp - 4] */
    MEM32(eax + 0x2C) = 0xBF800000u; /* 0x17042D2A: mov dword ptr [eax + 0x2c], 0xbf800000 */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17042D31: fld dword ptr [ebp + 0x10] */
    _st[0] = _st[1] / _st[0]; /* 0x17042D34: fdivr st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17042D36: fstp dword ptr [eax] */
    fp_push(0.0); /* 0x17042D38: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x17042D3A: fstp dword ptr [eax + 4] */
    fp_push(0.0); /* 0x17042D3D: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x17042D3F: fstp dword ptr [eax + 8] */
    fp_push(0.0); /* 0x17042D42: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x17042D44: fstp dword ptr [eax + 0xc] */
    fp_push(0.0); /* 0x17042D47: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x10) = _v; } /* 0x17042D49: fstp dword ptr [eax + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x14) = _v; } /* 0x17042D4C: fstp dword ptr [eax + 0x14] */
    fp_push(0.0); /* 0x17042D4F: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x18) = _v; } /* 0x17042D51: fstp dword ptr [eax + 0x18] */
    fp_push(0.0); /* 0x17042D54: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x1C) = _v; } /* 0x17042D56: fstp dword ptr [eax + 0x1c] */
    fp_push(0.0); /* 0x17042D59: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x20) = _v; } /* 0x17042D5B: fstp dword ptr [eax + 0x20] */
    fp_push(0.0); /* 0x17042D5E: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x24) = _v; } /* 0x17042D60: fstp dword ptr [eax + 0x24] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x17042D63: fld dword ptr [ebp + 0x14] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x18); /* 0x17042D66: fsub dword ptr [ebp + 0x18] */
    _st[0] = (double)*(float*)ADDR(ebp + 0x18) / _st[0]; /* 0x17042D69: fdivr dword ptr [ebp + 0x18] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x28) = _v; } /* 0x17042D6C: fst dword ptr [eax + 0x28] */
    fp_push(0.0); /* 0x17042D6F: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x30) = _v; } /* 0x17042D71: fstp dword ptr [eax + 0x30] */
    fp_push(0.0); /* 0x17042D74: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x34) = _v; } /* 0x17042D76: fstp dword ptr [eax + 0x34] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x14); /* 0x17042D79: fmul dword ptr [ebp + 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x38) = _v; } /* 0x17042D7C: fstp dword ptr [eax + 0x38] */
    fp_push(0.0); /* 0x17042D7F: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x3C) = _v; } /* 0x17042D81: fstp dword ptr [eax + 0x3c] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17042D84: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x17042D85: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_17042D8D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x17042D8Du);

L_17042D8D:
    edi = edi; /* 0x17042D8D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x17042D8F: push ebp */
    ebp = esp; /* 0x17042D90: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x17042D92: sub esp, 0x10 */
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x17042D95: fld dword ptr [ebp + 0xc] */
    eax = ebp + 0xC; /* 0x17042D98: lea eax, [ebp + 0xc] */
    _st[0] *= (double)*(float*)ADDR(0x1700141C); /* 0x17042D9B: fmul dword ptr [0x1700141c] */
    MEM32(ebp + (-0xC)) = eax; /* 0x17042DA1: mov dword ptr [ebp - 0xc], eax */
    eax = ebp + (-0x4); /* 0x17042DA4: lea eax, [ebp - 4] */
    MEM32(ebp + (-0x10)) = eax; /* 0x17042DA7: mov dword ptr [ebp - 0x10], eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x17042DAA: fstp dword ptr [ebp - 8] */
    eax = MEM32(ebp + (-0x10)); /* 0x17042DAD: mov eax, dword ptr [ebp - 0x10] */
    edx = MEM32(ebp + (-0xC)); /* 0x17042DB0: mov edx, dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x17042DB3: fld dword ptr [ebp - 8] */
    { double _a = _st[0]; _st[0] = sin(_a); fp_push(cos(_a)); } _fpu_cmp = 1; /* 0x17042DB6: fsincos  */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x17042DB8: fstp dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17042DBA: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x17042DBC: fld dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x17042DBF: mov eax, dword ptr [ebp + 8] */
    _st[0] /= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x17042DC2: fdiv dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x17042DC5: fld dword ptr [ebp + 0x10] */
    _st[0] = _st[1] / _st[0]; /* 0x17042DC8: fdivr st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x17042DCA: fstp dword ptr [eax] */
    fp_push(0.0); /* 0x17042DCC: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x17042DCE: fstp dword ptr [eax + 4] */
    fp_push(0.0); /* 0x17042DD1: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x17042DD3: fstp dword ptr [eax + 8] */
    fp_push(0.0); /* 0x17042DD6: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x17042DD8: fstp dword ptr [eax + 0xc] */
    fp_push(0.0); /* 0x17042DDB: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x10) = _v; } /* 0x17042DDD: fstp dword ptr [eax + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x14) = _v; } /* 0x17042DE0: fstp dword ptr [eax + 0x14] */
    fp_push(0.0); /* 0x17042DE3: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x18) = _v; } /* 0x17042DE5: fstp dword ptr [eax + 0x18] */
    fp_push(0.0); /* 0x17042DE8: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x1C) = _v; } /* 0x17042DEA: fstp dword ptr [eax + 0x1c] */
    fp_push(0.0); /* 0x17042DED: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x20) = _v; } /* 0x17042DEF: fstp dword ptr [eax + 0x20] */
    fp_push(0.0); /* 0x17042DF2: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x24) = _v; } /* 0x17042DF4: fstp dword ptr [eax + 0x24] */
    fp_push(*(float*)&MEM32(ebp + 0x18)); /* 0x17042DF7: fld dword ptr [ebp + 0x18] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x14); /* 0x17042DFA: fsub dword ptr [ebp + 0x14] */
    _st[0] = (double)*(float*)ADDR(ebp + 0x18) / _st[0]; /* 0x17042DFD: fdivr dword ptr [ebp + 0x18] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x28) = _v; } /* 0x17042E00: fst dword ptr [eax + 0x28] */
    fp_push(1.0); /* 0x17042E03: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x2C) = _v; } /* 0x17042E05: fstp dword ptr [eax + 0x2c] */
    fp_push(0.0); /* 0x17042E08: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x30) = _v; } /* 0x17042E0A: fstp dword ptr [eax + 0x30] */
    fp_push(0.0); /* 0x17042E0D: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x34) = _v; } /* 0x17042E0F: fstp dword ptr [eax + 0x34] */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x14); /* 0x17042E12: fmul dword ptr [ebp + 0x14] */
    _st[0] = -_st[0]; /* 0x17042E15: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x38) = _v; } /* 0x17042E17: fstp dword ptr [eax + 0x38] */
    fp_push(0.0); /* 0x17042E1A: fldz  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x3C) = _v; } /* 0x17042E1C: fstp dword ptr [eax + 0x3c] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x17042E1F: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x17042E20: ret 0x14 */
    RECOMP_REGS_OUT();
}
