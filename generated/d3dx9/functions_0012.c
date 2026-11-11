#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_120305A7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120305A7u);

L_120305A7:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA080)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_120305B2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120305B2u);

L_120305B2:
    edi = edi; /* 0x120305B2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120305B4: push ebp */
    ebp = esp; /* 0x120305B5: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x120305B7: sub esp, 0xc */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x10); /* 0x120305BA: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0xC); /* 0x120305BD: mov ecx, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(eax + 0x10)); /* 0x120305C0: fld dword ptr [eax + 0x10] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x120305C3: fmul dword ptr [ecx + 4] */
    PUSH32(esp, esi); /* 0x120305C6: push esi */
    fp_push(*(float*)&MEM32(ecx)); /* 0x120305C7: fld dword ptr [ecx] */
    PUSH32(esp, edi); /* 0x120305C9: push edi */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x120305CA: fmul dword ptr [eax] */
    esi = ebp + (-0xC); /* 0x120305CC: lea esi, [ebp - 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120305CF: faddp st(1) */
    fp_push(*(float*)&MEM32(eax + 0x20)); /* 0x120305D1: fld dword ptr [eax + 0x20] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x120305D4: fmul dword ptr [ecx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120305D7: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x120305D9: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x120305DC: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x120305DF: fmul dword ptr [ecx] */
    fp_push(*(float*)&MEM32(eax + 0x14)); /* 0x120305E1: fld dword ptr [eax + 0x14] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x120305E4: fmul dword ptr [ecx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120305E7: faddp st(1) */
    fp_push(*(float*)&MEM32(eax + 0x24)); /* 0x120305E9: fld dword ptr [eax + 0x24] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x120305EC: fmul dword ptr [ecx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120305EF: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x120305F1: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x120305F4: fld dword ptr [eax + 8] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x120305F7: fmul dword ptr [ecx] */
    fp_push(*(float*)&MEM32(eax + 0x18)); /* 0x120305F9: fld dword ptr [eax + 0x18] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x120305FC: fmul dword ptr [ecx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120305FF: faddp st(1) */
    fp_push(*(float*)&MEM32(eax + 0x28)); /* 0x12030601: fld dword ptr [eax + 0x28] */
    eax = MEM32(ebp + 0x8); /* 0x12030604: mov eax, dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x12030607: fmul dword ptr [ecx + 8] */
    edi = eax; /* 0x1203060A: mov edi, eax */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1203060C: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x1203060E: fstp dword ptr [ebp - 4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12030611: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12030612: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12030613: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x12030614: pop edi */
    esi = POP32_VAL(esp); /* 0x12030615: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12030616: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12030617: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1203061F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1203061Fu);

L_1203061F:
    edi = edi; /* 0x1203061F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12030621: push ebp */
    ebp = esp; /* 0x12030622: mov ebp, esp */
    PUSH32(esp, 1); /* 0x12030624: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x12030626: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1203062B: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x121CA16C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12030637(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12030637u);

L_12030637:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA16C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12030642(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12030642u);

L_12030642:
    edi = edi; /* 0x12030642: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12030644: push ebp */
    ebp = esp; /* 0x12030645: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x12030647: sub esp, 0xc */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x8); /* 0x1203064A: mov ecx, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0x1C); /* 0x1203064D: mov edx, dword ptr [ebp + 0x1c] */
    PUSH32(esp, ebx); /* 0x12030650: push ebx */
    ebx = ecx; /* 0x12030651: mov ebx, ecx */
    MEM32(ebp + 0x8) = ebx; /* 0x12030653: mov dword ptr [ebp + 8], ebx */
    /* test edx, edx */ /* 0x12030656: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120306C2; /* 0x12030658: je 0x120306c2 */
L_1203065A:
    eax = MEM32(ebp + 0x10); /* 0x1203065A: mov eax, dword ptr [ebp + 0x10] */
    ebx = MEM32(ebp + 0x18); /* 0x1203065D: mov ebx, dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x12030660: push esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x12030661: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x12030664: push edi */
L_12030665:
    fp_push(*(float*)&MEM32(ebx)); /* 0x12030665: fld dword ptr [ebx] */
    edi = ecx; /* 0x12030667: mov edi, ecx */
    _st[0] *= (double)*(float*)ADDR(eax + (-0x8)); /* 0x12030669: fmul dword ptr [eax - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + 0xC); /* 0x1203066C: add ecx, dword ptr [ebp + 0xc] */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(ebx + 0x10)); /* 0x1203066F: fld dword ptr [ebx + 0x10] */
    esi = ebp + (-0xC); /* 0x12030672: lea esi, [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(eax + (-0x4)); /* 0x12030675: fmul dword ptr [eax - 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030678: faddp st(1) */
    fp_push(*(float*)&MEM32(ebx + 0x20)); /* 0x1203067A: fld dword ptr [ebx + 0x20] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x1203067D: fmul dword ptr [eax] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1203067F: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x12030681: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebx + 0x4)); /* 0x12030684: fld dword ptr [ebx + 4] */
    _st[0] *= (double)*(float*)ADDR(eax + (-0x8)); /* 0x12030687: fmul dword ptr [eax - 8] */
    fp_push(*(float*)&MEM32(ebx + 0x14)); /* 0x1203068A: fld dword ptr [ebx + 0x14] */
    _st[0] *= (double)*(float*)ADDR(eax + (-0x4)); /* 0x1203068D: fmul dword ptr [eax - 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030690: faddp st(1) */
    fp_push(*(float*)&MEM32(eax)); /* 0x12030692: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x24); /* 0x12030694: fmul dword ptr [ebx + 0x24] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030697: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x12030699: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebx + 0x18)); /* 0x1203069C: fld dword ptr [ebx + 0x18] */
    _st[0] *= (double)*(float*)ADDR(eax + (-0x4)); /* 0x1203069F: fmul dword ptr [eax - 4] */
    fp_push(*(float*)&MEM32(ebx + 0x8)); /* 0x120306A2: fld dword ptr [ebx + 8] */
    _st[0] *= (double)*(float*)ADDR(eax + (-0x8)); /* 0x120306A5: fmul dword ptr [eax - 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120306A8: faddp st(1) */
    fp_push(*(float*)&MEM32(ebx + 0x28)); /* 0x120306AA: fld dword ptr [ebx + 0x28] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x120306AD: fmul dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x14); /* 0x120306AF: add eax, dword ptr [ebp + 0x14] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x120306B2: dec edx */
    _flag_k = FK_DEC;
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120306B3: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x120306B5: fstp dword ptr [ebp - 4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120306B8: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120306B9: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120306BA: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12030665; /* 0x120306BB: jne 0x12030665 */
L_120306BD:
    ebx = MEM32(ebp + 0x8); /* 0x120306BD: mov ebx, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x120306C0: pop edi */
    esi = POP32_VAL(esp); /* 0x120306C1: pop esi */
L_120306C2:
    eax = ebx; /* 0x120306C2: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x120306C4: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120306C5: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x120306C6: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_120306CE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120306CEu);

L_120306CE:
    edi = edi; /* 0x120306CE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120306D0: push ebp */
    ebp = esp; /* 0x120306D1: mov ebp, esp */
    PUSH32(esp, 1); /* 0x120306D3: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x120306D5: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120306DA: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x121CA0A4)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_120306E6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120306E6u);

L_120306E6:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA0A4)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_120306F1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120306F1u);

L_120306F1:
    edi = edi; /* 0x120306F1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120306F3: push ebp */
    ebp = esp; /* 0x120306F4: mov ebp, esp */
    PUSH32(esp, 1); /* 0x120306F6: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x120306F8: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120306FD: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x121CA174)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12030709(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12030709u);

L_12030709:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA174)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12030714(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12030714u);

L_12030714:
    edi = edi; /* 0x12030714: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12030716: push ebp */
    ebp = esp; /* 0x12030717: mov ebp, esp */
    PUSH32(esp, 1); /* 0x12030719: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x1203071B: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12030720: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x121CA0A8)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1203072C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1203072Cu);

L_1203072C:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA0A8)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12030737(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12030737u);

L_12030737:
    edi = edi; /* 0x12030737: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12030739: push ebp */
    ebp = esp; /* 0x1203073A: mov ebp, esp */
    PUSH32(esp, 1); /* 0x1203073C: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x1203073E: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12030743: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x121CA178)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1203074F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1203074Fu);

L_1203074F:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA178)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1203075A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1203075Au);

L_1203075A:
    edi = edi; /* 0x1203075A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1203075C: push ebp */
    ebp = esp; /* 0x1203075D: mov ebp, esp */
    PUSH32(esp, 1); /* 0x1203075F: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x12030761: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12030766: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x121CA0AC)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12030772(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12030772u);

L_12030772:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA0AC)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1203077D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1203077Du);

L_1203077D:
    edi = edi; /* 0x1203077D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1203077F: push ebp */
    ebp = esp; /* 0x12030780: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x12030782: sub esp, 0x28 */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x10); /* 0x12030785: mov ecx, dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x14); /* 0x12030788: mov eax, dword ptr [ebp + 0x14] */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x1203078B: fld dword ptr [ecx + 8] */
    _st[0] *= (double)*(float*)ADDR(eax + 0xC); /* 0x1203078E: fmul dword ptr [eax + 0xc] */
    edx = MEM32(ebp + 0xC); /* 0x12030791: mov edx, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ecx + 0xC)); /* 0x12030794: fld dword ptr [ecx + 0xc] */
    PUSH32(esp, esi); /* 0x12030797: push esi */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x12030798: fmul dword ptr [eax + 8] */
    PUSH32(esp, edi); /* 0x1203079B: push edi */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x1203079C: fld dword ptr [ecx + 4] */
    _st[0] *= (double)*(float*)ADDR(eax + 0xC); /* 0x1203079F: fmul dword ptr [eax + 0xc] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x120307A2: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0xC); /* 0x120307A5: fmul dword ptr [ecx + 0xc] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x120307A8: fsubp st(1) */
    *(double*)ADDR(ebp + (-0x8)) = _st[0]; /* 0x120307AA: fst qword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x120307AD: fld dword ptr [ecx + 4] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x120307B0: fmul dword ptr [eax + 8] */
    *(double*)ADDR(ebp + (-0x18)) = _st[0]; /* 0x120307B3: fst qword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x120307B6: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x120307B9: fmul dword ptr [ecx + 8] */
    *(double*)ADDR(ebp + (-0x10)) = _st[0]; /* 0x120307BC: fst qword ptr [ebp - 0x10] */
    fp_push(_st[4]); /* 0x120307BF: fld st(4) */
    _st[0] -= _st[4]; /* 0x120307C1: fsub st(4) */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x120307C3: fmul dword ptr [edx + 4] */
    fp_push(*(float*)&MEM32(edx + 0x8)); /* 0x120307C6: fld dword ptr [edx + 8] */
    { double _v = fp_pop(); _st[3] *= _v; } /* 0x120307C9: fmulp st(4) */
    { double _v = fp_pop(); _st[2] = _v - _st[2]; } /* 0x120307CB: fsubrp st(3) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x120307CD: fsubp st(1) */
    _st[0] *= (double)*(float*)ADDR(edx + 0xC); /* 0x120307CF: fmul dword ptr [edx + 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120307D2: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x120307D4: fstp dword ptr [ebp - 0x28] */
    fp_push(*(float*)&MEM32(ecx + 0xC)); /* 0x120307D7: fld dword ptr [ecx + 0xc] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x120307DA: fmul dword ptr [eax] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x120307DC: fld dword ptr [ecx] */
    _st[0] *= (double)*(float*)ADDR(eax + 0xC); /* 0x120307DE: fmul dword ptr [eax + 0xc] */
    fp_push(*(float*)&MEM32(eax)); /* 0x120307E1: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x120307E3: fmul dword ptr [ecx + 8] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x120307E6: fld dword ptr [eax + 8] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x120307E9: fmul dword ptr [ecx] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x120307EB: fsubp st(1) */
    fp_xch(3); /* 0x120307ED: fxch st(3) */
    { double _v = fp_pop(); _st[3] = _v - _st[3]; } /* 0x120307EF: fsubrp st(4) */
    fp_push(*(float*)&MEM32(edx)); /* 0x120307F1: fld dword ptr [edx] */
    { double _v = fp_pop(); _st[3] *= _v; } /* 0x120307F3: fmulp st(4) */
    fp_push(_st[1]); /* 0x120307F5: fld st(1) */
    _st[0] -= _st[1]; /* 0x120307F7: fsub st(1) */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x120307F9: fmul dword ptr [edx + 8] */
    { double _v = fp_pop(); _st[3] -= _v; } /* 0x120307FC: fsubp st(4) */
    fp_push(*(float*)&MEM32(edx + 0xC)); /* 0x120307FE: fld dword ptr [edx + 0xc] */
    _st[0] *= _st[3]; /* 0x12030801: fmul st(3) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x12030803: faddp st(4) */
    fp_xch(3); /* 0x12030805: fxch st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x12030807: fstp dword ptr [ebp - 0x24] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1203080A: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x1203080D: fmul dword ptr [ecx] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x1203080F: fld dword ptr [ecx + 4] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x12030812: fmul dword ptr [eax] */
    fp_push(*(float*)&MEM32(edx)); /* 0x12030814: fld dword ptr [edx] */
    _st[0] *= *(double*)ADDR(ebp + (-0x8)); /* 0x12030816: fmul qword ptr [ebp - 8] */
    fp_xch(5); /* 0x12030819: fxch st(5) */
    { double _v = fp_pop(); _st[2] = _v - _st[2]; } /* 0x1203081B: fsubrp st(3) */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x1203081D: fld dword ptr [edx + 4] */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x12030820: fmulp st(3) */
    fp_xch(4); /* 0x12030822: fxch st(4) */
    { double _v = fp_pop(); _st[1] = _v - _st[1]; } /* 0x12030824: fsubrp st(2) */
    fp_push(_st[0]); /* 0x12030826: fld st(0) */
    _st[0] -= _st[4]; /* 0x12030828: fsub st(4) */
    _st[0] *= (double)*(float*)ADDR(edx + 0xC); /* 0x1203082A: fmul dword ptr [edx + 0xc] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x1203082D: faddp st(2) */
    fp_xch(1); /* 0x1203082F: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x12030831: fstp dword ptr [ebp - 0x20] */
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x12030834: fld qword ptr [ebp - 0x10] */
    _st[0] -= *(double*)ADDR(ebp + (-0x18)); /* 0x12030837: fsub qword ptr [ebp - 0x18] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x1203083A: fmul dword ptr [edx] */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x1203083C: fld dword ptr [edx + 4] */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x1203083F: fmulp st(3) */
    { double _v = fp_pop(); _st[1] = _v - _st[1]; } /* 0x12030841: fsubrp st(2) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x12030843: fsubp st(2) */
    fp_push(*(float*)&MEM32(edx + 0x8)); /* 0x12030845: fld dword ptr [edx + 8] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12030848: fmulp st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1203084A: faddp st(1) */
    eax = MEM32(ebp + 0x8); /* 0x1203084C: mov eax, dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x1203084F: fstp dword ptr [ebp - 0x1c] */
    esi = ebp + (-0x28); /* 0x12030852: lea esi, [ebp - 0x28] */
    edi = eax; /* 0x12030855: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12030857: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12030858: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12030859: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1203085A: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x1203085B: pop edi */
    esi = POP32_VAL(esp); /* 0x1203085C: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1203085D: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1203085E: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_12030866(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12030866u);

L_12030866:
    edi = edi; /* 0x12030866: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12030868: push ebp */
    ebp = esp; /* 0x12030869: mov ebp, esp */
    PUSH32(esp, 1); /* 0x1203086B: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x1203086D: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12030872: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x121CA088)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1203087E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1203087Eu);

L_1203087E:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA088)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12030889(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12030889u);

L_12030889:
    edi = edi; /* 0x12030889: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1203088B: push ebp */
    ebp = esp; /* 0x1203088C: mov ebp, esp */
    PUSH32(esp, 1); /* 0x1203088E: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x12030890: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x12030895: fld dword ptr [ebp + 0x1c] */
    PUSH32(esp, ecx); /* 0x12030898: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x12030899: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x1203089C: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1203089F: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120308A2: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120308A5: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120308A8: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x121CA13C)); /* 0x120308AB: call dword ptr [0x121ca13c] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120308B1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x120308B2: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_120308BA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120308BAu);

L_120308BA:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA13C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_120308C5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120308C5u);

L_120308C5:
    edi = edi; /* 0x120308C5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120308C7: push ebp */
    ebp = esp; /* 0x120308C8: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x120308CA: sub esp, 0xc */
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x120308CD: fld dword ptr [ebp + 0x1c] */
    edx = MEM32(ebp + 0x10); /* 0x120308D0: mov edx, dword ptr [ebp + 0x10] */
    fp_push(_st[0]); /* 0x120308D3: fld st(0) */
    ecx = MEM32(ebp + 0x18); /* 0x120308D5: mov ecx, dword ptr [ebp + 0x18] */
    _st[0] *= _st[1]; /* 0x120308D8: fmul st(1) */
    PUSH32(esp, esi); /* 0x120308DA: push esi */
    esi = MEM32(ebp + 0x14); /* 0x120308DB: mov esi, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x120308DE: push edi */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x1C) = _v; } /* 0x120308DF: fstp dword ptr [ebp + 0x1c] */
    edi = MEM32(ebp + 0xC); /* 0x120308E2: mov edi, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x120308E5: fld dword ptr [ebp + 0x1c] */
    eax = MEM32(ebp + 0x8); /* 0x120308E8: mov eax, dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x120308EB: fld st(0) */
    fp_push(_st[2]); /* 0x120308ED: fld st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120308EF: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x1C) = _v; } /* 0x120308F1: fstp dword ptr [ebp + 0x1c] */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x120308F4: fld dword ptr [ebp + 0x1c] */
    fp_push(_st[0]); /* 0x120308F7: fld st(0) */
    fp_push(*(double*)ADDR(0x12001758)); /* 0x120308F9: fld qword ptr [0x12001758] */
    _st[1] *= _st[0]; /* 0x120308FF: fmul st(1), st(0) */
    fp_push(_st[3]); /* 0x12030901: fld st(3) */
    _st[0] *= *(double*)ADDR(0x12001EA8); /* 0x12030903: fmul qword ptr [0x12001ea8] */
    fp_push(_st[2]); /* 0x12030909: fld st(2) */
    _st[0] -= _st[1]; /* 0x1203090B: fsub st(1) */
    _st[0] += *(double*)ADDR(0x120014E0); /* 0x1203090D: fadd qword ptr [0x120014e0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x1C) = _v; } /* 0x12030913: fstp dword ptr [ebp + 0x1c] */
    fp_push(_st[3]); /* 0x12030916: fld st(3) */
    fp_push(_st[5]); /* 0x12030918: fld st(5) */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x1203091A: fmulp st(3) */
    { double _v = fp_pop(); _st[1] = _v - _st[1]; } /* 0x1203091C: fsubrp st(2) */
    fp_xch(1); /* 0x1203091E: fxch st(1) */
    { double _v = fp_pop(); _st[4] += _v; } /* 0x12030920: faddp st(5) */
    fp_xch(4); /* 0x12030922: fxch st(4) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x12030924: fstp dword ptr [ebp - 4] */
    { double _v = fp_pop(); _st[2] -= _v; } /* 0x12030927: fsubp st(3) */
    fp_xch(2); /* 0x12030929: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1203092B: fstp dword ptr [ebp - 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1203092E: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x12030930: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(edi)); /* 0x12030933: fld dword ptr [edi] */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x12030935: fld dword ptr [ebp + 0x1c] */
    fp_push(_st[0]); /* 0x12030938: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x1203093A: fmulp st(2) */
    fp_push(*(float*)&MEM32(edx)); /* 0x1203093C: fld dword ptr [edx] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x1203093E: fld dword ptr [ebp - 4] */
    fp_push(_st[0]); /* 0x12030941: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12030943: fmulp st(2) */
    fp_xch(3); /* 0x12030945: fxch st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030947: faddp st(1) */
    fp_push(*(float*)&MEM32(esi)); /* 0x12030949: fld dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x1203094B: fld dword ptr [ebp - 8] */
    fp_push(_st[0]); /* 0x1203094E: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12030950: fmulp st(2) */
    fp_xch(2); /* 0x12030952: fxch st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030954: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx)); /* 0x12030956: fld dword ptr [ecx] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x12030958: fld dword ptr [ebp - 0xc] */
    fp_push(_st[0]); /* 0x1203095B: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x1203095D: fmulp st(2) */
    fp_xch(2); /* 0x1203095F: fxch st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030961: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x12030963: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x12030965: fld dword ptr [edx + 4] */
    fp_push(_st[4]); /* 0x12030968: fld st(4) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x1203096A: fmulp st(1) */
    fp_push(*(float*)&MEM32(edi + 0x4)); /* 0x1203096C: fld dword ptr [edi + 4] */
    fp_push(_st[4]); /* 0x1203096F: fld st(4) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12030971: fmulp st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030973: faddp st(1) */
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x12030975: fld dword ptr [esi + 4] */
    fp_push(_st[3]); /* 0x12030978: fld st(3) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x1203097A: fmulp st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1203097C: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x1203097E: fld dword ptr [ecx + 4] */
    fp_push(_st[2]); /* 0x12030981: fld st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12030983: fmulp st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030985: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x12030987: fstp dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(edx + 0x8)); /* 0x1203098A: fld dword ptr [edx + 8] */
    fp_push(_st[4]); /* 0x1203098D: fld st(4) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x1203098F: fmulp st(1) */
    fp_push(*(float*)&MEM32(edi + 0x8)); /* 0x12030991: fld dword ptr [edi + 8] */
    fp_push(_st[4]); /* 0x12030994: fld st(4) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12030996: fmulp st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030998: faddp st(1) */
    fp_push(*(float*)&MEM32(esi + 0x8)); /* 0x1203099A: fld dword ptr [esi + 8] */
    fp_push(_st[3]); /* 0x1203099D: fld st(3) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x1203099F: fmulp st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120309A1: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x120309A3: fld dword ptr [ecx + 8] */
    fp_push(_st[2]); /* 0x120309A6: fld st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120309A8: fmulp st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120309AA: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x120309AC: fstp dword ptr [eax + 8] */
    fp_push(*(float*)&MEM32(edx + 0xC)); /* 0x120309AF: fld dword ptr [edx + 0xc] */
    { double _v = fp_pop(); _st[3] *= _v; } /* 0x120309B2: fmulp st(4) */
    fp_push(*(float*)&MEM32(edi + 0xC)); /* 0x120309B4: fld dword ptr [edi + 0xc] */
    edi = POP32_VAL(esp); /* 0x120309B7: pop edi */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x120309B8: fmulp st(3) */
    fp_xch(3); /* 0x120309BA: fxch st(3) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x120309BC: faddp st(2) */
    _st[0] *= (double)*(float*)ADDR(esi + 0xC); /* 0x120309BE: fmul dword ptr [esi + 0xc] */
    esi = POP32_VAL(esp); /* 0x120309C1: pop esi */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120309C2: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0xC)); /* 0x120309C4: fld dword ptr [ecx + 0xc] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120309C7: fmulp st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120309C9: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x120309CB: fstp dword ptr [eax + 0xc] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120309CE: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x120309CF: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_120309D7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120309D7u);

L_120309D7:
    edi = edi; /* 0x120309D7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120309D9: push ebp */
    ebp = esp; /* 0x120309DA: mov ebp, esp */
    PUSH32(esp, 1); /* 0x120309DC: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x120309DE: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x120309E3: fld dword ptr [ebp + 0x1c] */
    PUSH32(esp, ecx); /* 0x120309E6: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x120309E7: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120309EA: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120309ED: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120309F0: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120309F3: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120309F6: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x121CA140)); /* 0x120309F9: call dword ptr [0x121ca140] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120309FF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x12030A00: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_12030A08(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12030A08u);

L_12030A08:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA140)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12030A13(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12030A13u);

L_12030A13:
    edi = edi; /* 0x12030A13: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12030A15: push ebp */
    ebp = esp; /* 0x12030A16: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x12030A18: sub esp, 0xc */
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x12030A1B: fld dword ptr [ebp + 0x1c] */
    edx = MEM32(ebp + 0x10); /* 0x12030A1E: mov edx, dword ptr [ebp + 0x10] */
    fp_push(_st[0]); /* 0x12030A21: fld st(0) */
    ecx = MEM32(ebp + 0x18); /* 0x12030A23: mov ecx, dword ptr [ebp + 0x18] */
    _st[0] *= _st[1]; /* 0x12030A26: fmul st(1) */
    PUSH32(esp, esi); /* 0x12030A28: push esi */
    esi = MEM32(ebp + 0x14); /* 0x12030A29: mov esi, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x12030A2C: push edi */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x1C) = _v; } /* 0x12030A2D: fstp dword ptr [ebp + 0x1c] */
    edi = MEM32(ebp + 0xC); /* 0x12030A30: mov edi, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x12030A33: fld dword ptr [ebp + 0x1c] */
    eax = MEM32(ebp + 0x8); /* 0x12030A36: mov eax, dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x12030A39: fld st(0) */
    fp_push(_st[2]); /* 0x12030A3B: fld st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12030A3D: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x1C) = _v; } /* 0x12030A3F: fstp dword ptr [ebp + 0x1c] */
    fp_push(_st[0]); /* 0x12030A42: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x12030A44: fld dword ptr [ebp + 0x1c] */
    fp_push(_st[0]); /* 0x12030A47: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x12030A49: fsubp st(2) */
    fp_push(_st[2]); /* 0x12030A4B: fld st(2) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12030A4D: faddp st(2) */
    fp_push(_st[3]); /* 0x12030A4F: fld st(3) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x12030A51: fsubp st(2) */
    fp_xch(1); /* 0x12030A53: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x1C) = _v; } /* 0x12030A55: fstp dword ptr [ebp + 0x1c] */
    fp_push(*(double*)ADDR(0x12001EA8)); /* 0x12030A58: fld qword ptr [0x12001ea8] */
    _st[0] *= _st[1]; /* 0x12030A5E: fmul st(1) */
    fp_push(_st[2]); /* 0x12030A60: fld st(2) */
    _st[0] *= *(double*)ADDR(0x12005420); /* 0x12030A62: fmul qword ptr [0x12005420] */
    fp_push(_st[1]); /* 0x12030A68: fld st(1) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x12030A6A: fsubrp st(1) */
    _st[0] += *(double*)ADDR(0x12001758); /* 0x12030A6C: fadd qword ptr [0x12001758] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x12030A72: fstp dword ptr [ebp - 4] */
    fp_push(_st[2]); /* 0x12030A75: fld st(2) */
    _st[0] *= *(double*)ADDR(0x12005418); /* 0x12030A77: fmul qword ptr [0x12005418] */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x12030A7D: fsubrp st(1) */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x12030A7F: faddp st(3) */
    fp_xch(2); /* 0x12030A81: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x12030A83: fstp dword ptr [ebp - 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x12030A86: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x12030A88: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(edi)); /* 0x12030A8B: fld dword ptr [edi] */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x12030A8D: fld dword ptr [ebp + 0x1c] */
    fp_push(_st[0]); /* 0x12030A90: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12030A92: fmulp st(2) */
    fp_push(*(float*)&MEM32(edx)); /* 0x12030A94: fld dword ptr [edx] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x12030A96: fld dword ptr [ebp - 4] */
    fp_push(_st[0]); /* 0x12030A99: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12030A9B: fmulp st(2) */
    fp_xch(3); /* 0x12030A9D: fxch st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030A9F: faddp st(1) */
    fp_push(*(float*)&MEM32(esi)); /* 0x12030AA1: fld dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x12030AA3: fld dword ptr [ebp - 8] */
    fp_push(_st[0]); /* 0x12030AA6: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12030AA8: fmulp st(2) */
    fp_xch(2); /* 0x12030AAA: fxch st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030AAC: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx)); /* 0x12030AAE: fld dword ptr [ecx] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x12030AB0: fld dword ptr [ebp - 0xc] */
    fp_push(_st[0]); /* 0x12030AB3: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12030AB5: fmulp st(2) */
    fp_xch(2); /* 0x12030AB7: fxch st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030AB9: faddp st(1) */
    fp_push(*(double*)ADDR(0x120014C0)); /* 0x12030ABB: fld qword ptr [0x120014c0] */
    _st[1] *= _st[0]; /* 0x12030AC1: fmul st(1), st(0) */
    fp_xch(1); /* 0x12030AC3: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x12030AC5: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x12030AC7: fld dword ptr [edx + 4] */
    fp_push(_st[5]); /* 0x12030ACA: fld st(5) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12030ACC: fmulp st(1) */
    fp_push(*(float*)&MEM32(edi + 0x4)); /* 0x12030ACE: fld dword ptr [edi + 4] */
    fp_push(_st[5]); /* 0x12030AD1: fld st(5) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12030AD3: fmulp st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030AD5: faddp st(1) */
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x12030AD7: fld dword ptr [esi + 4] */
    fp_push(_st[4]); /* 0x12030ADA: fld st(4) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12030ADC: fmulp st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030ADE: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x12030AE0: fld dword ptr [ecx + 4] */
    fp_push(_st[3]); /* 0x12030AE3: fld st(3) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12030AE5: fmulp st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030AE7: faddp st(1) */
    _st[0] *= _st[1]; /* 0x12030AE9: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x12030AEB: fstp dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(edx + 0x8)); /* 0x12030AEE: fld dword ptr [edx + 8] */
    fp_push(_st[5]); /* 0x12030AF1: fld st(5) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12030AF3: fmulp st(1) */
    fp_push(*(float*)&MEM32(edi + 0x8)); /* 0x12030AF5: fld dword ptr [edi + 8] */
    fp_push(_st[5]); /* 0x12030AF8: fld st(5) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12030AFA: fmulp st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030AFC: faddp st(1) */
    fp_push(*(float*)&MEM32(esi + 0x8)); /* 0x12030AFE: fld dword ptr [esi + 8] */
    fp_push(_st[4]); /* 0x12030B01: fld st(4) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12030B03: fmulp st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030B05: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x12030B07: fld dword ptr [ecx + 8] */
    fp_push(_st[3]); /* 0x12030B0A: fld st(3) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12030B0C: fmulp st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030B0E: faddp st(1) */
    _st[0] *= _st[1]; /* 0x12030B10: fmul st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x12030B12: fstp dword ptr [eax + 8] */
    fp_push(*(float*)&MEM32(edx + 0xC)); /* 0x12030B15: fld dword ptr [edx + 0xc] */
    { double _v = fp_pop(); _st[4] *= _v; } /* 0x12030B18: fmulp st(5) */
    fp_push(*(float*)&MEM32(edi + 0xC)); /* 0x12030B1A: fld dword ptr [edi + 0xc] */
    edi = POP32_VAL(esp); /* 0x12030B1D: pop edi */
    { double _v = fp_pop(); _st[3] *= _v; } /* 0x12030B1E: fmulp st(4) */
    fp_xch(4); /* 0x12030B20: fxch st(4) */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x12030B22: faddp st(3) */
    fp_push(*(float*)&MEM32(esi + 0xC)); /* 0x12030B24: fld dword ptr [esi + 0xc] */
    esi = POP32_VAL(esp); /* 0x12030B27: pop esi */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12030B28: fmulp st(2) */
    fp_xch(2); /* 0x12030B2A: fxch st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030B2C: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0xC)); /* 0x12030B2E: fld dword ptr [ecx + 0xc] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12030B31: fmulp st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030B33: faddp st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12030B35: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x12030B37: fstp dword ptr [eax + 0xc] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12030B3A: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x12030B3B: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_12030B43(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12030B43u);

L_12030B43:
    edi = edi; /* 0x12030B43: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12030B45: push ebp */
    ebp = esp; /* 0x12030B46: mov ebp, esp */
    PUSH32(esp, 1); /* 0x12030B48: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x12030B4A: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x12030B4F: fld dword ptr [ebp + 0x1c] */
    PUSH32(esp, ecx); /* 0x12030B52: push ecx */
    PUSH32(esp, ecx); /* 0x12030B53: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x12030B54: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + 0x18)); /* 0x12030B58: fld dword ptr [ebp + 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x12030B5B: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x12030B5E: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x12030B61: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12030B64: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12030B67: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x121CA144)); /* 0x12030B6A: call dword ptr [0x121ca144] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12030B70: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x12030B71: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_12030B79(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12030B79u);

L_12030B79:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA144)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12030B84(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12030B84u);

L_12030B84:
    edi = edi; /* 0x12030B84: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12030B86: push ebp */
    ebp = esp; /* 0x12030B87: mov ebp, esp */
    edx = MEM32(ebp + 0x10); /* 0x12030B89: mov edx, dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(edx)); /* 0x12030B8C: fld dword ptr [edx] */
    ecx = MEM32(ebp + 0x14); /* 0x12030B8E: mov ecx, dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0x8); /* 0x12030B91: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x12030B94: push esi */
    esi = MEM32(ebp + 0xC); /* 0x12030B95: mov esi, dword ptr [ebp + 0xc] */
    _st[0] -= (double)*(float*)ADDR(esi); /* 0x12030B98: fsub dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + 0x18)); /* 0x12030B9A: fld dword ptr [ebp + 0x18] */
    fp_push(_st[0]); /* 0x12030B9D: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12030B9F: fmulp st(2) */
    fp_push(*(float*)&MEM32(esi)); /* 0x12030BA1: fld dword ptr [esi] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12030BA3: faddp st(2) */
    fp_push(*(float*)&MEM32(ecx)); /* 0x12030BA5: fld dword ptr [ecx] */
    _st[0] -= (double)*(float*)ADDR(esi); /* 0x12030BA7: fsub dword ptr [esi] */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x12030BA9: fld dword ptr [ebp + 0x1c] */
    fp_push(_st[0]); /* 0x12030BAC: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12030BAE: fmulp st(2) */
    fp_xch(3); /* 0x12030BB0: fxch st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030BB2: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x12030BB4: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x12030BB6: fld dword ptr [edx + 4] */
    _st[0] -= (double)*(float*)ADDR(esi + 0x4); /* 0x12030BB9: fsub dword ptr [esi + 4] */
    fp_push(_st[1]); /* 0x12030BBC: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12030BBE: fmulp st(1) */
    _st[0] += (double)*(float*)ADDR(esi + 0x4); /* 0x12030BC0: fadd dword ptr [esi + 4] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x12030BC3: fld dword ptr [ecx + 4] */
    _st[0] -= (double)*(float*)ADDR(esi + 0x4); /* 0x12030BC6: fsub dword ptr [esi + 4] */
    fp_push(_st[3]); /* 0x12030BC9: fld st(3) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12030BCB: fmulp st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030BCD: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x12030BCF: fstp dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(edx + 0x8)); /* 0x12030BD2: fld dword ptr [edx + 8] */
    _st[0] -= (double)*(float*)ADDR(esi + 0x8); /* 0x12030BD5: fsub dword ptr [esi + 8] */
    fp_push(_st[1]); /* 0x12030BD8: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12030BDA: fmulp st(1) */
    _st[0] += (double)*(float*)ADDR(esi + 0x8); /* 0x12030BDC: fadd dword ptr [esi + 8] */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x12030BDF: fld dword ptr [ecx + 8] */
    _st[0] -= (double)*(float*)ADDR(esi + 0x8); /* 0x12030BE2: fsub dword ptr [esi + 8] */
    fp_push(_st[3]); /* 0x12030BE5: fld st(3) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12030BE7: fmulp st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030BE9: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x12030BEB: fstp dword ptr [eax + 8] */
    fp_push(*(float*)&MEM32(edx + 0xC)); /* 0x12030BEE: fld dword ptr [edx + 0xc] */
    _st[0] -= (double)*(float*)ADDR(esi + 0xC); /* 0x12030BF1: fsub dword ptr [esi + 0xc] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12030BF4: fmulp st(1) */
    _st[0] += (double)*(float*)ADDR(esi + 0xC); /* 0x12030BF6: fadd dword ptr [esi + 0xc] */
    fp_push(*(float*)&MEM32(ecx + 0xC)); /* 0x12030BF9: fld dword ptr [ecx + 0xc] */
    _st[0] -= (double)*(float*)ADDR(esi + 0xC); /* 0x12030BFC: fsub dword ptr [esi + 0xc] */
    esi = POP32_VAL(esp); /* 0x12030BFF: pop esi */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12030C00: fmulp st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030C02: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x12030C04: fstp dword ptr [eax + 0xc] */
    ebp = POP32_VAL(esp); /* 0x12030C07: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x12030C08: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_12030C10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12030C10u);

L_12030C10:
    edi = edi; /* 0x12030C10: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12030C12: push ebp */
    ebp = esp; /* 0x12030C13: mov ebp, esp */
    PUSH32(esp, 1); /* 0x12030C15: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x12030C17: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12030C1C: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x121CA070)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12030C28(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12030C28u);

L_12030C28:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA070)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12030C33(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12030C33u);

L_12030C33:
    edi = edi; /* 0x12030C33: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12030C35: push ebp */
    ebp = esp; /* 0x12030C36: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x12030C38: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x10); /* 0x12030C3B: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0xC); /* 0x12030C3E: mov ecx, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(eax + 0x10)); /* 0x12030C41: fld dword ptr [eax + 0x10] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x12030C44: fmul dword ptr [ecx + 4] */
    PUSH32(esp, esi); /* 0x12030C47: push esi */
    fp_push(*(float*)&MEM32(ecx)); /* 0x12030C48: fld dword ptr [ecx] */
    PUSH32(esp, edi); /* 0x12030C4A: push edi */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x12030C4B: fmul dword ptr [eax] */
    esi = ebp + (-0x10); /* 0x12030C4D: lea esi, [ebp - 0x10] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030C50: faddp st(1) */
    fp_push(*(float*)&MEM32(eax + 0x20)); /* 0x12030C52: fld dword ptr [eax + 0x20] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x12030C55: fmul dword ptr [ecx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030C58: faddp st(1) */
    fp_push(*(float*)&MEM32(eax + 0x30)); /* 0x12030C5A: fld dword ptr [eax + 0x30] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0xC); /* 0x12030C5D: fmul dword ptr [ecx + 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030C60: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x12030C62: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x12030C65: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x12030C68: fmul dword ptr [ecx] */
    fp_push(*(float*)&MEM32(eax + 0x14)); /* 0x12030C6A: fld dword ptr [eax + 0x14] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x12030C6D: fmul dword ptr [ecx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030C70: faddp st(1) */
    fp_push(*(float*)&MEM32(eax + 0x24)); /* 0x12030C72: fld dword ptr [eax + 0x24] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x12030C75: fmul dword ptr [ecx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030C78: faddp st(1) */
    fp_push(*(float*)&MEM32(eax + 0x34)); /* 0x12030C7A: fld dword ptr [eax + 0x34] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0xC); /* 0x12030C7D: fmul dword ptr [ecx + 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030C80: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x12030C82: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x12030C85: fld dword ptr [eax + 8] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x12030C88: fmul dword ptr [ecx] */
    fp_push(*(float*)&MEM32(eax + 0x18)); /* 0x12030C8A: fld dword ptr [eax + 0x18] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x12030C8D: fmul dword ptr [ecx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030C90: faddp st(1) */
    fp_push(*(float*)&MEM32(eax + 0x28)); /* 0x12030C92: fld dword ptr [eax + 0x28] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x12030C95: fmul dword ptr [ecx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030C98: faddp st(1) */
    fp_push(*(float*)&MEM32(eax + 0x38)); /* 0x12030C9A: fld dword ptr [eax + 0x38] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0xC); /* 0x12030C9D: fmul dword ptr [ecx + 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030CA0: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x12030CA2: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(eax + 0xC)); /* 0x12030CA5: fld dword ptr [eax + 0xc] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x12030CA8: fmul dword ptr [ecx] */
    fp_push(*(float*)&MEM32(eax + 0x1C)); /* 0x12030CAA: fld dword ptr [eax + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x12030CAD: fmul dword ptr [ecx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030CB0: faddp st(1) */
    fp_push(*(float*)&MEM32(eax + 0x2C)); /* 0x12030CB2: fld dword ptr [eax + 0x2c] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x12030CB5: fmul dword ptr [ecx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030CB8: faddp st(1) */
    fp_push(*(float*)&MEM32(eax + 0x3C)); /* 0x12030CBA: fld dword ptr [eax + 0x3c] */
    eax = MEM32(ebp + 0x8); /* 0x12030CBD: mov eax, dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0xC); /* 0x12030CC0: fmul dword ptr [ecx + 0xc] */
    edi = eax; /* 0x12030CC3: mov edi, eax */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030CC5: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x12030CC7: fstp dword ptr [ebp - 4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12030CCA: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12030CCB: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12030CCC: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12030CCD: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x12030CCE: pop edi */
    esi = POP32_VAL(esp); /* 0x12030CCF: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12030CD0: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12030CD1: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12030CD9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12030CD9u);

L_12030CD9:
    edi = edi; /* 0x12030CD9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12030CDB: push ebp */
    ebp = esp; /* 0x12030CDC: mov ebp, esp */
    PUSH32(esp, 1); /* 0x12030CDE: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x12030CE0: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12030CE5: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x121CA170)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12030CF1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12030CF1u);

L_12030CF1:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA170)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12030CFC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12030CFCu);

L_12030CFC:
    edi = edi; /* 0x12030CFC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12030CFE: push ebp */
    ebp = esp; /* 0x12030CFF: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x12030D01: sub esp, 0x10 */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x8); /* 0x12030D04: mov ecx, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0x1C); /* 0x12030D07: mov edx, dword ptr [ebp + 0x1c] */
    PUSH32(esp, ebx); /* 0x12030D0A: push ebx */
    ebx = ecx; /* 0x12030D0B: mov ebx, ecx */
    MEM32(ebp + 0x8) = ebx; /* 0x12030D0D: mov dword ptr [ebp + 8], ebx */
    /* test edx, edx */ /* 0x12030D10: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12030DBD; /* 0x12030D12: je 0x12030dbd */
L_12030D18:
    eax = MEM32(ebp + 0x10); /* 0x12030D18: mov eax, dword ptr [ebp + 0x10] */
    ebx = MEM32(ebp + 0x18); /* 0x12030D1B: mov ebx, dword ptr [ebp + 0x18] */
    PUSH32(esp, esi); /* 0x12030D1E: push esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x12030D1F: add eax, 8 */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x12030D22: push edi */
L_12030D23:
    fp_push(*(float*)&MEM32(eax + (-0x4))); /* 0x12030D23: fld dword ptr [eax - 4] */
    edi = ecx; /* 0x12030D26: mov edi, ecx */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x10); /* 0x12030D28: fmul dword ptr [ebx + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + 0xC); /* 0x12030D2B: add ecx, dword ptr [ebp + 0xc] */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(eax + (-0x8))); /* 0x12030D2E: fld dword ptr [eax - 8] */
    esi = ebp + (-0x10); /* 0x12030D31: lea esi, [ebp - 0x10] */
    _st[0] *= (double)*(float*)ADDR(ebx); /* 0x12030D34: fmul dword ptr [ebx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030D36: faddp st(1) */
    fp_push(*(float*)&MEM32(eax)); /* 0x12030D38: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x20); /* 0x12030D3A: fmul dword ptr [ebx + 0x20] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030D3D: faddp st(1) */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x12030D3F: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x30); /* 0x12030D42: fmul dword ptr [ebx + 0x30] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030D45: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x12030D47: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebx + 0x14)); /* 0x12030D4A: fld dword ptr [ebx + 0x14] */
    _st[0] *= (double)*(float*)ADDR(eax + (-0x4)); /* 0x12030D4D: fmul dword ptr [eax - 4] */
    fp_push(*(float*)&MEM32(eax + (-0x8))); /* 0x12030D50: fld dword ptr [eax - 8] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x4); /* 0x12030D53: fmul dword ptr [ebx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030D56: faddp st(1) */
    fp_push(*(float*)&MEM32(eax)); /* 0x12030D58: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x24); /* 0x12030D5A: fmul dword ptr [ebx + 0x24] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030D5D: faddp st(1) */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x12030D5F: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x34); /* 0x12030D62: fmul dword ptr [ebx + 0x34] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030D65: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x12030D67: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebx + 0x18)); /* 0x12030D6A: fld dword ptr [ebx + 0x18] */
    _st[0] *= (double)*(float*)ADDR(eax + (-0x4)); /* 0x12030D6D: fmul dword ptr [eax - 4] */
    fp_push(*(float*)&MEM32(eax + (-0x8))); /* 0x12030D70: fld dword ptr [eax - 8] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x8); /* 0x12030D73: fmul dword ptr [ebx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030D76: faddp st(1) */
    fp_push(*(float*)&MEM32(eax)); /* 0x12030D78: fld dword ptr [eax] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x28); /* 0x12030D7A: fmul dword ptr [ebx + 0x28] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030D7D: faddp st(1) */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x12030D7F: fld dword ptr [eax + 4] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0x38); /* 0x12030D82: fmul dword ptr [ebx + 0x38] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030D85: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x12030D87: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebx + 0x1C)); /* 0x12030D8A: fld dword ptr [ebx + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(eax + (-0x4)); /* 0x12030D8D: fmul dword ptr [eax - 4] */
    fp_push(*(float*)&MEM32(eax + (-0x8))); /* 0x12030D90: fld dword ptr [eax - 8] */
    _st[0] *= (double)*(float*)ADDR(ebx + 0xC); /* 0x12030D93: fmul dword ptr [ebx + 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030D96: faddp st(1) */
    fp_push(*(float*)&MEM32(ebx + 0x2C)); /* 0x12030D98: fld dword ptr [ebx + 0x2c] */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x12030D9B: fmul dword ptr [eax] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030D9D: faddp st(1) */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x12030D9F: fld dword ptr [eax + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x14); /* 0x12030DA2: add eax, dword ptr [ebp + 0x14] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x12030DA5: dec edx */
    _flag_k = FK_DEC;
    _st[0] *= (double)*(float*)ADDR(ebx + 0x3C); /* 0x12030DA6: fmul dword ptr [ebx + 0x3c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030DA9: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x12030DAB: fstp dword ptr [ebp - 4] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12030DAE: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12030DAF: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12030DB0: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12030DB1: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12030D23; /* 0x12030DB2: jne 0x12030d23 */
L_12030DB8:
    ebx = MEM32(ebp + 0x8); /* 0x12030DB8: mov ebx, dword ptr [ebp + 8] */
    edi = POP32_VAL(esp); /* 0x12030DBB: pop edi */
    esi = POP32_VAL(esp); /* 0x12030DBC: pop esi */
L_12030DBD:
    eax = ebx; /* 0x12030DBD: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x12030DBF: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12030DC0: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x12030DC1: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_12030DC9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12030DC9u);

L_12030DC9:
    edi = edi; /* 0x12030DC9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12030DCB: push ebp */
    ebp = esp; /* 0x12030DCC: mov ebp, esp */
    PUSH32(esp, 1); /* 0x12030DCE: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x12030DD0: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12030DD5: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x121CA094)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12030DE1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12030DE1u);

L_12030DE1:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA094)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12030DEC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12030DECu);

L_12030DEC:
    edi = edi; /* 0x12030DEC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12030DEE: push ebp */
    ebp = esp; /* 0x12030DEF: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12030DF1: push ecx */
    PUSH32(esp, ecx); /* 0x12030DF2: push ecx */
    eax = MEM32(ebp + 0x8); /* 0x12030DF3: mov eax, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(eax + 0x3C)); /* 0x12030DF6: fld dword ptr [eax + 0x3c] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x28); /* 0x12030DF9: fmul dword ptr [eax + 0x28] */
    fp_push(*(float*)&MEM32(eax + 0x38)); /* 0x12030DFC: fld dword ptr [eax + 0x38] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x2C); /* 0x12030DFF: fmul dword ptr [eax + 0x2c] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x12030E02: fsubp st(1) */
    fp_push(*(float*)&MEM32(eax + 0x24)); /* 0x12030E04: fld dword ptr [eax + 0x24] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x3C); /* 0x12030E07: fmul dword ptr [eax + 0x3c] */
    fp_push(*(float*)&MEM32(eax + 0x34)); /* 0x12030E0A: fld dword ptr [eax + 0x34] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x2C); /* 0x12030E0D: fmul dword ptr [eax + 0x2c] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x12030E10: fsubp st(1) */
    fp_push(*(float*)&MEM32(eax + 0x38)); /* 0x12030E12: fld dword ptr [eax + 0x38] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x24); /* 0x12030E15: fmul dword ptr [eax + 0x24] */
    fp_push(*(float*)&MEM32(eax + 0x34)); /* 0x12030E18: fld dword ptr [eax + 0x34] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x28); /* 0x12030E1B: fmul dword ptr [eax + 0x28] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x12030E1E: fsubp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x12030E20: fstp qword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(eax + 0x3C)); /* 0x12030E23: fld dword ptr [eax + 0x3c] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x20); /* 0x12030E26: fmul dword ptr [eax + 0x20] */
    fp_push(*(float*)&MEM32(eax + 0x30)); /* 0x12030E29: fld dword ptr [eax + 0x30] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x2C); /* 0x12030E2C: fmul dword ptr [eax + 0x2c] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x12030E2F: fsubp st(1) */
    fp_push(*(float*)&MEM32(eax + 0x38)); /* 0x12030E31: fld dword ptr [eax + 0x38] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x20); /* 0x12030E34: fmul dword ptr [eax + 0x20] */
    fp_push(*(float*)&MEM32(eax + 0x30)); /* 0x12030E37: fld dword ptr [eax + 0x30] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x28); /* 0x12030E3A: fmul dword ptr [eax + 0x28] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x12030E3D: fsubp st(1) */
    fp_push(*(float*)&MEM32(eax + 0x34)); /* 0x12030E3F: fld dword ptr [eax + 0x34] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x20); /* 0x12030E42: fmul dword ptr [eax + 0x20] */
    fp_push(*(float*)&MEM32(eax + 0x30)); /* 0x12030E45: fld dword ptr [eax + 0x30] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x24); /* 0x12030E48: fmul dword ptr [eax + 0x24] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x12030E4B: fsubp st(1) */
    fp_push(*(float*)&MEM32(eax + 0x14)); /* 0x12030E4D: fld dword ptr [eax + 0x14] */
    _st[0] *= _st[5]; /* 0x12030E50: fmul st(5) */
    fp_push(*(float*)&MEM32(eax + 0x18)); /* 0x12030E52: fld dword ptr [eax + 0x18] */
    _st[0] *= _st[5]; /* 0x12030E55: fmul st(5) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x12030E57: fsubp st(1) */
    fp_push(*(float*)&MEM32(eax + 0x1C)); /* 0x12030E59: fld dword ptr [eax + 0x1c] */
    _st[0] *= *(double*)ADDR(ebp + (-0x8)); /* 0x12030E5C: fmul qword ptr [ebp - 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030E5F: faddp st(1) */
    _st[0] *= (double)*(float*)ADDR(eax); /* 0x12030E61: fmul dword ptr [eax] */
    fp_push(*(float*)&MEM32(eax + 0x10)); /* 0x12030E63: fld dword ptr [eax + 0x10] */
    { double _v = fp_pop(); _st[5] *= _v; } /* 0x12030E66: fmulp st(6) */
    fp_push(*(float*)&MEM32(eax + 0x18)); /* 0x12030E68: fld dword ptr [eax + 0x18] */
    _st[0] *= _st[4]; /* 0x12030E6B: fmul st(4) */
    { double _v = fp_pop(); _st[5] -= _v; } /* 0x12030E6D: fsubp st(6) */
    fp_push(*(float*)&MEM32(eax + 0x1C)); /* 0x12030E6F: fld dword ptr [eax + 0x1c] */
    _st[0] *= _st[3]; /* 0x12030E72: fmul st(3) */
    { double _v = fp_pop(); _st[5] += _v; } /* 0x12030E74: faddp st(6) */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x12030E76: fld dword ptr [eax + 4] */
    { double _v = fp_pop(); _st[5] *= _v; } /* 0x12030E79: fmulp st(6) */
    { double _v = fp_pop(); _st[4] = _v - _st[4]; } /* 0x12030E7B: fsubrp st(5) */
    fp_push(*(float*)&MEM32(eax + 0x10)); /* 0x12030E7D: fld dword ptr [eax + 0x10] */
    { double _v = fp_pop(); _st[3] *= _v; } /* 0x12030E80: fmulp st(4) */
    fp_push(*(float*)&MEM32(eax + 0x14)); /* 0x12030E82: fld dword ptr [eax + 0x14] */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x12030E85: fmulp st(3) */
    fp_xch(3); /* 0x12030E87: fxch st(3) */
    { double _v = fp_pop(); _st[1] = _v - _st[1]; } /* 0x12030E89: fsubrp st(2) */
    fp_push(*(float*)&MEM32(eax + 0x1C)); /* 0x12030E8B: fld dword ptr [eax + 0x1c] */
    _st[0] *= _st[3]; /* 0x12030E8E: fmul st(3) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12030E90: faddp st(2) */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x12030E92: fld dword ptr [eax + 8] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12030E95: fmulp st(2) */
    fp_xch(3); /* 0x12030E97: fxch st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030E99: faddp st(1) */
    fp_push(*(float*)&MEM32(eax + 0x10)); /* 0x12030E9B: fld dword ptr [eax + 0x10] */
    _st[0] *= *(double*)ADDR(ebp + (-0x8)); /* 0x12030E9E: fmul qword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(eax + 0x14)); /* 0x12030EA1: fld dword ptr [eax + 0x14] */
    { double _v = fp_pop(); _st[3] *= _v; } /* 0x12030EA4: fmulp st(4) */
    { double _v = fp_pop(); _st[2] = _v - _st[2]; } /* 0x12030EA6: fsubrp st(3) */
    fp_push(*(float*)&MEM32(eax + 0x18)); /* 0x12030EA8: fld dword ptr [eax + 0x18] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12030EAB: fmulp st(2) */
    fp_xch(2); /* 0x12030EAD: fxch st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030EAF: faddp st(1) */
    _st[0] *= (double)*(float*)ADDR(eax + 0xC); /* 0x12030EB1: fmul dword ptr [eax + 0xc] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x12030EB4: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x12030EB6: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x12030EB9: fld dword ptr [ebp + 8] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12030EBC: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12030EBD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12030EC5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12030EC5u);

L_12030EC5:
    edi = edi; /* 0x12030EC5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12030EC7: push ebp */
    ebp = esp; /* 0x12030EC8: mov ebp, esp */
    PUSH32(esp, 1); /* 0x12030ECA: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x12030ECC: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12030ED1: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x121CA098)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12030EDD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12030EDDu);

L_12030EDD:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA098)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12030EE8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12030EE8u);

L_12030EE8:
    edi = edi; /* 0x12030EE8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12030EEA: push ebp */
    ebp = esp; /* 0x12030EEB: mov ebp, esp */
    PUSH32(esp, 1); /* 0x12030EED: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x12030EEF: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12030EF4: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x121CA074)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12030F00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12030F00u);

L_12030F00:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA074)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12030F0B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12030F0Bu);

L_12030F0B:
    edi = edi; /* 0x12030F0B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12030F0D: push ebp */
    ebp = esp; /* 0x12030F0E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x12030F10: sub esp, 0x44 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x12030F13: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x12030F18: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x12030F1A: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x12030F1D: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0xC); /* 0x12030F20: mov edx, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x10); /* 0x12030F23: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x12030F26: push esi */
    /* cmp eax, edx */ /* 0x12030F27: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12030F31; /* 0x12030F29: je 0x12030f31 */
L_12030F2B:
    esi = eax; /* 0x12030F2B: mov esi, eax */
    /* cmp eax, ecx */ /* 0x12030F2D: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12030F34; /* 0x12030F2F: jne 0x12030f34 */
L_12030F31:
    esi = ebp + (-0x44); /* 0x12030F31: lea esi, [ebp - 0x44] */
L_12030F34:
    fp_push(*(float*)&MEM32(edx)); /* 0x12030F34: fld dword ptr [edx] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x12030F36: fmul dword ptr [ecx] */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x12030F38: fld dword ptr [edx + 4] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x10); /* 0x12030F3B: fmul dword ptr [ecx + 0x10] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030F3E: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x20)); /* 0x12030F40: fld dword ptr [ecx + 0x20] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x12030F43: fmul dword ptr [edx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030F46: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x30)); /* 0x12030F48: fld dword ptr [ecx + 0x30] */
    _st[0] *= (double)*(float*)ADDR(edx + 0xC); /* 0x12030F4B: fmul dword ptr [edx + 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030F4E: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x12030F50: fstp dword ptr [esi] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x12030F52: fld dword ptr [ecx + 4] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x12030F55: fmul dword ptr [edx] */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x12030F57: fld dword ptr [edx + 4] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x14); /* 0x12030F5A: fmul dword ptr [ecx + 0x14] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030F5D: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x8)); /* 0x12030F5F: fld dword ptr [edx + 8] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x24); /* 0x12030F62: fmul dword ptr [ecx + 0x24] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030F65: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x34)); /* 0x12030F67: fld dword ptr [ecx + 0x34] */
    _st[0] *= (double)*(float*)ADDR(edx + 0xC); /* 0x12030F6A: fmul dword ptr [edx + 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030F6D: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x12030F6F: fstp dword ptr [esi + 4] */
    fp_push(*(float*)&MEM32(ecx + 0x18)); /* 0x12030F72: fld dword ptr [ecx + 0x18] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x12030F75: fmul dword ptr [edx + 4] */
    fp_push(*(float*)&MEM32(edx)); /* 0x12030F78: fld dword ptr [edx] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x12030F7A: fmul dword ptr [ecx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030F7D: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x8)); /* 0x12030F7F: fld dword ptr [edx + 8] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x28); /* 0x12030F82: fmul dword ptr [ecx + 0x28] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030F85: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0xC)); /* 0x12030F87: fld dword ptr [edx + 0xc] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x38); /* 0x12030F8A: fmul dword ptr [ecx + 0x38] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030F8D: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x8) = _v; } /* 0x12030F8F: fstp dword ptr [esi + 8] */
    fp_push(*(float*)&MEM32(ecx + 0xC)); /* 0x12030F92: fld dword ptr [ecx + 0xc] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x12030F95: fmul dword ptr [edx] */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x12030F97: fld dword ptr [edx + 4] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x1C); /* 0x12030F9A: fmul dword ptr [ecx + 0x1c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030F9D: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x8)); /* 0x12030F9F: fld dword ptr [edx + 8] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x2C); /* 0x12030FA2: fmul dword ptr [ecx + 0x2c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030FA5: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x3C)); /* 0x12030FA7: fld dword ptr [ecx + 0x3c] */
    _st[0] *= (double)*(float*)ADDR(edx + 0xC); /* 0x12030FAA: fmul dword ptr [edx + 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030FAD: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0xC) = _v; } /* 0x12030FAF: fstp dword ptr [esi + 0xc] */
    fp_push(*(float*)&MEM32(edx + 0x14)); /* 0x12030FB2: fld dword ptr [edx + 0x14] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x10); /* 0x12030FB5: fmul dword ptr [ecx + 0x10] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x12030FB8: fld dword ptr [ecx] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x10); /* 0x12030FBA: fmul dword ptr [edx + 0x10] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030FBD: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x20)); /* 0x12030FBF: fld dword ptr [ecx + 0x20] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x18); /* 0x12030FC2: fmul dword ptr [edx + 0x18] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030FC5: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x30)); /* 0x12030FC7: fld dword ptr [ecx + 0x30] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x1C); /* 0x12030FCA: fmul dword ptr [edx + 0x1c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030FCD: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x10) = _v; } /* 0x12030FCF: fstp dword ptr [esi + 0x10] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x12030FD2: fld dword ptr [ecx + 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x10); /* 0x12030FD5: fmul dword ptr [edx + 0x10] */
    fp_push(*(float*)&MEM32(edx + 0x14)); /* 0x12030FD8: fld dword ptr [edx + 0x14] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x14); /* 0x12030FDB: fmul dword ptr [ecx + 0x14] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030FDE: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x18)); /* 0x12030FE0: fld dword ptr [edx + 0x18] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x24); /* 0x12030FE3: fmul dword ptr [ecx + 0x24] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030FE6: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x34)); /* 0x12030FE8: fld dword ptr [ecx + 0x34] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x1C); /* 0x12030FEB: fmul dword ptr [edx + 0x1c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030FEE: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x14) = _v; } /* 0x12030FF0: fstp dword ptr [esi + 0x14] */
    fp_push(*(float*)&MEM32(edx + 0x14)); /* 0x12030FF3: fld dword ptr [edx + 0x14] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x18); /* 0x12030FF6: fmul dword ptr [ecx + 0x18] */
    fp_push(*(float*)&MEM32(edx + 0x10)); /* 0x12030FF9: fld dword ptr [edx + 0x10] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x12030FFC: fmul dword ptr [ecx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12030FFF: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x18)); /* 0x12031001: fld dword ptr [edx + 0x18] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x28); /* 0x12031004: fmul dword ptr [ecx + 0x28] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12031007: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x38)); /* 0x12031009: fld dword ptr [ecx + 0x38] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x1C); /* 0x1203100C: fmul dword ptr [edx + 0x1c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1203100F: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x18) = _v; } /* 0x12031011: fstp dword ptr [esi + 0x18] */
    fp_push(*(float*)&MEM32(ecx + 0xC)); /* 0x12031014: fld dword ptr [ecx + 0xc] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x10); /* 0x12031017: fmul dword ptr [edx + 0x10] */
    fp_push(*(float*)&MEM32(edx + 0x14)); /* 0x1203101A: fld dword ptr [edx + 0x14] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x1C); /* 0x1203101D: fmul dword ptr [ecx + 0x1c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12031020: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x18)); /* 0x12031022: fld dword ptr [edx + 0x18] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x2C); /* 0x12031025: fmul dword ptr [ecx + 0x2c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12031028: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x3C)); /* 0x1203102A: fld dword ptr [ecx + 0x3c] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x1C); /* 0x1203102D: fmul dword ptr [edx + 0x1c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12031030: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x1C) = _v; } /* 0x12031032: fstp dword ptr [esi + 0x1c] */
    fp_push(*(float*)&MEM32(edx + 0x24)); /* 0x12031035: fld dword ptr [edx + 0x24] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x10); /* 0x12031038: fmul dword ptr [ecx + 0x10] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x1203103B: fld dword ptr [ecx] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x20); /* 0x1203103D: fmul dword ptr [edx + 0x20] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12031040: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x20)); /* 0x12031042: fld dword ptr [ecx + 0x20] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x28); /* 0x12031045: fmul dword ptr [edx + 0x28] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12031048: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x2C)); /* 0x1203104A: fld dword ptr [edx + 0x2c] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x30); /* 0x1203104D: fmul dword ptr [ecx + 0x30] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12031050: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x20) = _v; } /* 0x12031052: fstp dword ptr [esi + 0x20] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x12031055: fld dword ptr [ecx + 4] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x20); /* 0x12031058: fmul dword ptr [edx + 0x20] */
    fp_push(*(float*)&MEM32(edx + 0x24)); /* 0x1203105B: fld dword ptr [edx + 0x24] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x14); /* 0x1203105E: fmul dword ptr [ecx + 0x14] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12031061: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x28)); /* 0x12031063: fld dword ptr [edx + 0x28] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x24); /* 0x12031066: fmul dword ptr [ecx + 0x24] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12031069: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x2C)); /* 0x1203106B: fld dword ptr [edx + 0x2c] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x34); /* 0x1203106E: fmul dword ptr [ecx + 0x34] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12031071: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x24) = _v; } /* 0x12031073: fstp dword ptr [esi + 0x24] */
    fp_push(*(float*)&MEM32(edx + 0x24)); /* 0x12031076: fld dword ptr [edx + 0x24] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x18); /* 0x12031079: fmul dword ptr [ecx + 0x18] */
    fp_push(*(float*)&MEM32(edx + 0x20)); /* 0x1203107C: fld dword ptr [edx + 0x20] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x1203107F: fmul dword ptr [ecx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12031082: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x28)); /* 0x12031084: fld dword ptr [edx + 0x28] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x28); /* 0x12031087: fmul dword ptr [ecx + 0x28] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1203108A: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x2C)); /* 0x1203108C: fld dword ptr [edx + 0x2c] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x38); /* 0x1203108F: fmul dword ptr [ecx + 0x38] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12031092: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x28) = _v; } /* 0x12031094: fstp dword ptr [esi + 0x28] */
    fp_push(*(float*)&MEM32(ecx + 0xC)); /* 0x12031097: fld dword ptr [ecx + 0xc] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x20); /* 0x1203109A: fmul dword ptr [edx + 0x20] */
    fp_push(*(float*)&MEM32(edx + 0x24)); /* 0x1203109D: fld dword ptr [edx + 0x24] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x1C); /* 0x120310A0: fmul dword ptr [ecx + 0x1c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120310A3: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x28)); /* 0x120310A5: fld dword ptr [edx + 0x28] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x2C); /* 0x120310A8: fmul dword ptr [ecx + 0x2c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120310AB: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x2C)); /* 0x120310AD: fld dword ptr [edx + 0x2c] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x3C); /* 0x120310B0: fmul dword ptr [ecx + 0x3c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120310B3: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x2C) = _v; } /* 0x120310B5: fstp dword ptr [esi + 0x2c] */
    fp_push(*(float*)&MEM32(edx + 0x34)); /* 0x120310B8: fld dword ptr [edx + 0x34] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x10); /* 0x120310BB: fmul dword ptr [ecx + 0x10] */
    fp_push(*(float*)&MEM32(edx + 0x30)); /* 0x120310BE: fld dword ptr [edx + 0x30] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x120310C1: fmul dword ptr [ecx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120310C3: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x20)); /* 0x120310C5: fld dword ptr [ecx + 0x20] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x38); /* 0x120310C8: fmul dword ptr [edx + 0x38] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120310CB: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x3C)); /* 0x120310CD: fld dword ptr [edx + 0x3c] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x30); /* 0x120310D0: fmul dword ptr [ecx + 0x30] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120310D3: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x30) = _v; } /* 0x120310D5: fstp dword ptr [esi + 0x30] */
    fp_push(*(float*)&MEM32(edx + 0x30)); /* 0x120310D8: fld dword ptr [edx + 0x30] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x120310DB: fmul dword ptr [ecx + 4] */
    fp_push(*(float*)&MEM32(edx + 0x34)); /* 0x120310DE: fld dword ptr [edx + 0x34] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x14); /* 0x120310E1: fmul dword ptr [ecx + 0x14] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120310E4: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x38)); /* 0x120310E6: fld dword ptr [edx + 0x38] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x24); /* 0x120310E9: fmul dword ptr [ecx + 0x24] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120310EC: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x3C)); /* 0x120310EE: fld dword ptr [edx + 0x3c] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x34); /* 0x120310F1: fmul dword ptr [ecx + 0x34] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120310F4: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x34) = _v; } /* 0x120310F6: fstp dword ptr [esi + 0x34] */
    fp_push(*(float*)&MEM32(ecx + 0x18)); /* 0x120310F9: fld dword ptr [ecx + 0x18] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x34); /* 0x120310FC: fmul dword ptr [edx + 0x34] */
    fp_push(*(float*)&MEM32(edx + 0x30)); /* 0x120310FF: fld dword ptr [edx + 0x30] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x12031102: fmul dword ptr [ecx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12031105: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x28)); /* 0x12031107: fld dword ptr [ecx + 0x28] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x38); /* 0x1203110A: fmul dword ptr [edx + 0x38] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1203110D: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x3C)); /* 0x1203110F: fld dword ptr [edx + 0x3c] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x38); /* 0x12031112: fmul dword ptr [ecx + 0x38] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12031115: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x38) = _v; } /* 0x12031117: fstp dword ptr [esi + 0x38] */
    fp_push(*(float*)&MEM32(edx + 0x30)); /* 0x1203111A: fld dword ptr [edx + 0x30] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0xC); /* 0x1203111D: fmul dword ptr [ecx + 0xc] */
    fp_push(*(float*)&MEM32(edx + 0x34)); /* 0x12031120: fld dword ptr [edx + 0x34] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x1C); /* 0x12031123: fmul dword ptr [ecx + 0x1c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12031126: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x38)); /* 0x12031128: fld dword ptr [edx + 0x38] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x2C); /* 0x1203112B: fmul dword ptr [ecx + 0x2c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1203112E: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x3C)); /* 0x12031130: fld dword ptr [edx + 0x3c] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x3C); /* 0x12031133: fmul dword ptr [ecx + 0x3c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12031136: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x3C) = _v; } /* 0x12031138: fstp dword ptr [esi + 0x3c] */
    /* cmp esi, eax */ /* 0x1203113B: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12031148; /* 0x1203113D: je 0x12031148 */
L_1203113F:
    PUSH32(esp, edi); /* 0x1203113F: push edi */
    PUSH32(esp, 0x10u); /* 0x12031140: push 0x10 */
    ecx = POP32_VAL(esp); /* 0x12031142: pop ecx */
    edi = eax; /* 0x12031143: mov edi, eax */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x12031145: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x12031147: pop edi */
L_12031148:
    ecx = MEM32(ebp + (-0x4)); /* 0x12031148: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1203114B: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1203114D: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x1203114E: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12031153: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12031154: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1203115C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1203115Cu);

L_1203115C:
    edi = edi; /* 0x1203115C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1203115E: push ebp */
    ebp = esp; /* 0x1203115F: mov ebp, esp */
    PUSH32(esp, 1); /* 0x12031161: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x12031163: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12031168: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x121CA100)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12031174(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12031174u);

L_12031174:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA100)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1203117F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1203117Fu);

L_1203117F:
    edi = edi; /* 0x1203117F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12031181: push ebp */
    ebp = esp; /* 0x12031182: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x12031184: mov ecx, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x12031187: fld dword ptr [ecx + 4] */
    eax = MEM32(ebp + 0x8); /* 0x1203118A: mov eax, dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x1203118D: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ecx + 0x10)); /* 0x12031190: fld dword ptr [ecx + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x12031193: fstp dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12031196: fld dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x10) = _v; } /* 0x12031199: fstp dword ptr [eax + 0x10] */
    fp_push(*(float*)&MEM32(ecx + 0x8)); /* 0x1203119C: fld dword ptr [ecx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x1203119F: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ecx + 0x20)); /* 0x120311A2: fld dword ptr [ecx + 0x20] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x120311A5: fstp dword ptr [eax + 8] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x120311A8: fld dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x20) = _v; } /* 0x120311AB: fstp dword ptr [eax + 0x20] */
    fp_push(*(float*)&MEM32(ecx + 0xC)); /* 0x120311AE: fld dword ptr [ecx + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x120311B1: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ecx + 0x30)); /* 0x120311B4: fld dword ptr [ecx + 0x30] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x120311B7: fstp dword ptr [eax + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x120311BA: fld dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x30) = _v; } /* 0x120311BD: fstp dword ptr [eax + 0x30] */
    fp_push(*(float*)&MEM32(ecx + 0x18)); /* 0x120311C0: fld dword ptr [ecx + 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x120311C3: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ecx + 0x24)); /* 0x120311C6: fld dword ptr [ecx + 0x24] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x18) = _v; } /* 0x120311C9: fstp dword ptr [eax + 0x18] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x120311CC: fld dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x24) = _v; } /* 0x120311CF: fstp dword ptr [eax + 0x24] */
    fp_push(*(float*)&MEM32(ecx + 0x1C)); /* 0x120311D2: fld dword ptr [ecx + 0x1c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x120311D5: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ecx + 0x34)); /* 0x120311D8: fld dword ptr [ecx + 0x34] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x1C) = _v; } /* 0x120311DB: fstp dword ptr [eax + 0x1c] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x120311DE: fld dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x34) = _v; } /* 0x120311E1: fstp dword ptr [eax + 0x34] */
    fp_push(*(float*)&MEM32(ecx + 0x2C)); /* 0x120311E4: fld dword ptr [ecx + 0x2c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x120311E7: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ecx + 0x38)); /* 0x120311EA: fld dword ptr [ecx + 0x38] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x2C) = _v; } /* 0x120311ED: fstp dword ptr [eax + 0x2c] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x120311F0: fld dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x38) = _v; } /* 0x120311F3: fstp dword ptr [eax + 0x38] */
    /* cmp eax, ecx */ /* 0x120311F6: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12031210; /* 0x120311F8: je 0x12031210 */
L_120311FA:
    fp_push(*(float*)&MEM32(ecx)); /* 0x120311FA: fld dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x120311FC: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(ecx + 0x14)); /* 0x120311FE: fld dword ptr [ecx + 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x14) = _v; } /* 0x12031201: fstp dword ptr [eax + 0x14] */
    fp_push(*(float*)&MEM32(ecx + 0x28)); /* 0x12031204: fld dword ptr [ecx + 0x28] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x28) = _v; } /* 0x12031207: fstp dword ptr [eax + 0x28] */
    fp_push(*(float*)&MEM32(ecx + 0x3C)); /* 0x1203120A: fld dword ptr [ecx + 0x3c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x3C) = _v; } /* 0x1203120D: fstp dword ptr [eax + 0x3c] */
L_12031210:
    ebp = POP32_VAL(esp); /* 0x12031210: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12031211: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12031219(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12031219u);

L_12031219:
    edi = edi; /* 0x12031219: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1203121B: push ebp */
    ebp = esp; /* 0x1203121C: mov ebp, esp */
    PUSH32(esp, 1); /* 0x1203121E: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x12031220: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12031225: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x121CA078)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12031231(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12031231u);

L_12031231:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA078)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1203123C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1203123Cu);

L_1203123C:
    edi = edi; /* 0x1203123C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1203123E: push ebp */
    ebp = esp; /* 0x1203123F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x12031241: sub esp, 0x44 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x12031244: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x12031249: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1203124B: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1203124E: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0xC); /* 0x12031251: mov edx, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x10); /* 0x12031254: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x12031257: push esi */
    /* cmp eax, edx */ /* 0x12031258: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12031262; /* 0x1203125A: je 0x12031262 */
L_1203125C:
    esi = eax; /* 0x1203125C: mov esi, eax */
    /* cmp eax, ecx */ /* 0x1203125E: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12031265; /* 0x12031260: jne 0x12031265 */
L_12031262:
    esi = ebp + (-0x44); /* 0x12031262: lea esi, [ebp - 0x44] */
L_12031265:
    fp_push(*(float*)&MEM32(edx)); /* 0x12031265: fld dword ptr [edx] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x12031267: fmul dword ptr [ecx] */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x12031269: fld dword ptr [edx + 4] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x10); /* 0x1203126C: fmul dword ptr [ecx + 0x10] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1203126F: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x20)); /* 0x12031271: fld dword ptr [ecx + 0x20] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x8); /* 0x12031274: fmul dword ptr [edx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12031277: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x30)); /* 0x12031279: fld dword ptr [ecx + 0x30] */
    _st[0] *= (double)*(float*)ADDR(edx + 0xC); /* 0x1203127C: fmul dword ptr [edx + 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1203127F: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x12031281: fstp dword ptr [esi] */
    fp_push(*(float*)&MEM32(ecx + 0x10)); /* 0x12031283: fld dword ptr [ecx + 0x10] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x14); /* 0x12031286: fmul dword ptr [edx + 0x14] */
    fp_push(*(float*)&MEM32(edx + 0x10)); /* 0x12031289: fld dword ptr [edx + 0x10] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x1203128C: fmul dword ptr [ecx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1203128E: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x20)); /* 0x12031290: fld dword ptr [ecx + 0x20] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x18); /* 0x12031293: fmul dword ptr [edx + 0x18] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12031296: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x1C)); /* 0x12031298: fld dword ptr [edx + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x30); /* 0x1203129B: fmul dword ptr [ecx + 0x30] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1203129E: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x120312A0: fstp dword ptr [esi + 4] */
    fp_push(*(float*)&MEM32(edx + 0x24)); /* 0x120312A3: fld dword ptr [edx + 0x24] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x10); /* 0x120312A6: fmul dword ptr [ecx + 0x10] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x120312A9: fld dword ptr [ecx] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x20); /* 0x120312AB: fmul dword ptr [edx + 0x20] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120312AE: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x20)); /* 0x120312B0: fld dword ptr [ecx + 0x20] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x28); /* 0x120312B3: fmul dword ptr [edx + 0x28] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120312B6: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x30)); /* 0x120312B8: fld dword ptr [ecx + 0x30] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x2C); /* 0x120312BB: fmul dword ptr [edx + 0x2c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120312BE: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x8) = _v; } /* 0x120312C0: fstp dword ptr [esi + 8] */
    fp_push(*(float*)&MEM32(ecx + 0x10)); /* 0x120312C3: fld dword ptr [ecx + 0x10] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x34); /* 0x120312C6: fmul dword ptr [edx + 0x34] */
    fp_push(*(float*)&MEM32(edx + 0x30)); /* 0x120312C9: fld dword ptr [edx + 0x30] */
    _st[0] *= (double)*(float*)ADDR(ecx); /* 0x120312CC: fmul dword ptr [ecx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120312CE: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x20)); /* 0x120312D0: fld dword ptr [ecx + 0x20] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x38); /* 0x120312D3: fmul dword ptr [edx + 0x38] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120312D6: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x3C)); /* 0x120312D8: fld dword ptr [edx + 0x3c] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x30); /* 0x120312DB: fmul dword ptr [ecx + 0x30] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120312DE: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0xC) = _v; } /* 0x120312E0: fstp dword ptr [esi + 0xc] */
    fp_push(*(float*)&MEM32(ecx + 0x14)); /* 0x120312E3: fld dword ptr [ecx + 0x14] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x120312E6: fmul dword ptr [edx + 4] */
    fp_push(*(float*)&MEM32(edx)); /* 0x120312E9: fld dword ptr [edx] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x120312EB: fmul dword ptr [ecx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120312EE: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x8)); /* 0x120312F0: fld dword ptr [edx + 8] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x24); /* 0x120312F3: fmul dword ptr [ecx + 0x24] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120312F6: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0xC)); /* 0x120312F8: fld dword ptr [edx + 0xc] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x34); /* 0x120312FB: fmul dword ptr [ecx + 0x34] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120312FE: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x10) = _v; } /* 0x12031300: fstp dword ptr [esi + 0x10] */
    fp_push(*(float*)&MEM32(edx + 0x10)); /* 0x12031303: fld dword ptr [edx + 0x10] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x12031306: fmul dword ptr [ecx + 4] */
    fp_push(*(float*)&MEM32(ecx + 0x14)); /* 0x12031309: fld dword ptr [ecx + 0x14] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x14); /* 0x1203130C: fmul dword ptr [edx + 0x14] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1203130F: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x24)); /* 0x12031311: fld dword ptr [ecx + 0x24] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x18); /* 0x12031314: fmul dword ptr [edx + 0x18] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12031317: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x1C)); /* 0x12031319: fld dword ptr [edx + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x34); /* 0x1203131C: fmul dword ptr [ecx + 0x34] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1203131F: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x14) = _v; } /* 0x12031321: fstp dword ptr [esi + 0x14] */
    fp_push(*(float*)&MEM32(edx + 0x24)); /* 0x12031324: fld dword ptr [edx + 0x24] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x14); /* 0x12031327: fmul dword ptr [ecx + 0x14] */
    fp_push(*(float*)&MEM32(edx + 0x20)); /* 0x1203132A: fld dword ptr [edx + 0x20] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x1203132D: fmul dword ptr [ecx + 4] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12031330: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x28)); /* 0x12031332: fld dword ptr [edx + 0x28] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x24); /* 0x12031335: fmul dword ptr [ecx + 0x24] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12031338: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x2C)); /* 0x1203133A: fld dword ptr [edx + 0x2c] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x34); /* 0x1203133D: fmul dword ptr [ecx + 0x34] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12031340: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x18) = _v; } /* 0x12031342: fstp dword ptr [esi + 0x18] */
    fp_push(*(float*)&MEM32(edx + 0x30)); /* 0x12031345: fld dword ptr [edx + 0x30] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x12031348: fmul dword ptr [ecx + 4] */
    fp_push(*(float*)&MEM32(ecx + 0x14)); /* 0x1203134B: fld dword ptr [ecx + 0x14] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x34); /* 0x1203134E: fmul dword ptr [edx + 0x34] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12031351: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x24)); /* 0x12031353: fld dword ptr [ecx + 0x24] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x38); /* 0x12031356: fmul dword ptr [edx + 0x38] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12031359: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x3C)); /* 0x1203135B: fld dword ptr [edx + 0x3c] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x34); /* 0x1203135E: fmul dword ptr [ecx + 0x34] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12031361: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x1C) = _v; } /* 0x12031363: fstp dword ptr [esi + 0x1c] */
    fp_push(*(float*)&MEM32(ecx + 0x18)); /* 0x12031366: fld dword ptr [ecx + 0x18] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x12031369: fmul dword ptr [edx + 4] */
    fp_push(*(float*)&MEM32(edx)); /* 0x1203136C: fld dword ptr [edx] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x1203136E: fmul dword ptr [ecx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12031371: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x8)); /* 0x12031373: fld dword ptr [edx + 8] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x28); /* 0x12031376: fmul dword ptr [ecx + 0x28] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12031379: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0xC)); /* 0x1203137B: fld dword ptr [edx + 0xc] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x38); /* 0x1203137E: fmul dword ptr [ecx + 0x38] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12031381: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x20) = _v; } /* 0x12031383: fstp dword ptr [esi + 0x20] */
    fp_push(*(float*)&MEM32(edx + 0x10)); /* 0x12031386: fld dword ptr [edx + 0x10] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x12031389: fmul dword ptr [ecx + 8] */
    fp_push(*(float*)&MEM32(ecx + 0x18)); /* 0x1203138C: fld dword ptr [ecx + 0x18] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x14); /* 0x1203138F: fmul dword ptr [edx + 0x14] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12031392: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x28)); /* 0x12031394: fld dword ptr [ecx + 0x28] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x18); /* 0x12031397: fmul dword ptr [edx + 0x18] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1203139A: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x1C)); /* 0x1203139C: fld dword ptr [edx + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x38); /* 0x1203139F: fmul dword ptr [ecx + 0x38] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120313A2: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x24) = _v; } /* 0x120313A4: fstp dword ptr [esi + 0x24] */
    fp_push(*(float*)&MEM32(edx + 0x24)); /* 0x120313A7: fld dword ptr [edx + 0x24] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x18); /* 0x120313AA: fmul dword ptr [ecx + 0x18] */
    fp_push(*(float*)&MEM32(edx + 0x20)); /* 0x120313AD: fld dword ptr [edx + 0x20] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x120313B0: fmul dword ptr [ecx + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120313B3: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x28)); /* 0x120313B5: fld dword ptr [edx + 0x28] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x28); /* 0x120313B8: fmul dword ptr [ecx + 0x28] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120313BB: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x2C)); /* 0x120313BD: fld dword ptr [edx + 0x2c] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x38); /* 0x120313C0: fmul dword ptr [ecx + 0x38] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120313C3: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x28) = _v; } /* 0x120313C5: fstp dword ptr [esi + 0x28] */
    fp_push(*(float*)&MEM32(edx + 0x30)); /* 0x120313C8: fld dword ptr [edx + 0x30] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x120313CB: fmul dword ptr [ecx + 8] */
    fp_push(*(float*)&MEM32(ecx + 0x18)); /* 0x120313CE: fld dword ptr [ecx + 0x18] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x34); /* 0x120313D1: fmul dword ptr [edx + 0x34] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120313D4: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x28)); /* 0x120313D6: fld dword ptr [ecx + 0x28] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x38); /* 0x120313D9: fmul dword ptr [edx + 0x38] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120313DC: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x3C)); /* 0x120313DE: fld dword ptr [edx + 0x3c] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x38); /* 0x120313E1: fmul dword ptr [ecx + 0x38] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120313E4: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x2C) = _v; } /* 0x120313E6: fstp dword ptr [esi + 0x2c] */
    fp_push(*(float*)&MEM32(ecx + 0x1C)); /* 0x120313E9: fld dword ptr [ecx + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x4); /* 0x120313EC: fmul dword ptr [edx + 4] */
    fp_push(*(float*)&MEM32(ecx + 0xC)); /* 0x120313EF: fld dword ptr [ecx + 0xc] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x120313F2: fmul dword ptr [edx] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120313F4: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x8)); /* 0x120313F6: fld dword ptr [edx + 8] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x2C); /* 0x120313F9: fmul dword ptr [ecx + 0x2c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120313FC: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x3C)); /* 0x120313FE: fld dword ptr [ecx + 0x3c] */
    _st[0] *= (double)*(float*)ADDR(edx + 0xC); /* 0x12031401: fmul dword ptr [edx + 0xc] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12031404: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x30) = _v; } /* 0x12031406: fstp dword ptr [esi + 0x30] */
    fp_push(*(float*)&MEM32(ecx + 0xC)); /* 0x12031409: fld dword ptr [ecx + 0xc] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x10); /* 0x1203140C: fmul dword ptr [edx + 0x10] */
    fp_push(*(float*)&MEM32(ecx + 0x1C)); /* 0x1203140F: fld dword ptr [ecx + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x14); /* 0x12031412: fmul dword ptr [edx + 0x14] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12031415: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x2C)); /* 0x12031417: fld dword ptr [ecx + 0x2c] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x18); /* 0x1203141A: fmul dword ptr [edx + 0x18] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1203141D: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x3C)); /* 0x1203141F: fld dword ptr [ecx + 0x3c] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x1C); /* 0x12031422: fmul dword ptr [edx + 0x1c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12031425: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x34) = _v; } /* 0x12031427: fstp dword ptr [esi + 0x34] */
    fp_push(*(float*)&MEM32(ecx + 0xC)); /* 0x1203142A: fld dword ptr [ecx + 0xc] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x20); /* 0x1203142D: fmul dword ptr [edx + 0x20] */
    fp_push(*(float*)&MEM32(edx + 0x24)); /* 0x12031430: fld dword ptr [edx + 0x24] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x1C); /* 0x12031433: fmul dword ptr [ecx + 0x1c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12031436: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x28)); /* 0x12031438: fld dword ptr [edx + 0x28] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x2C); /* 0x1203143B: fmul dword ptr [ecx + 0x2c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1203143E: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x3C)); /* 0x12031440: fld dword ptr [ecx + 0x3c] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x2C); /* 0x12031443: fmul dword ptr [edx + 0x2c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12031446: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x38) = _v; } /* 0x12031448: fstp dword ptr [esi + 0x38] */
    fp_push(*(float*)&MEM32(ecx + 0xC)); /* 0x1203144B: fld dword ptr [ecx + 0xc] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x30); /* 0x1203144E: fmul dword ptr [edx + 0x30] */
    fp_push(*(float*)&MEM32(ecx + 0x1C)); /* 0x12031451: fld dword ptr [ecx + 0x1c] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x34); /* 0x12031454: fmul dword ptr [edx + 0x34] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12031457: faddp st(1) */
    fp_push(*(float*)&MEM32(ecx + 0x2C)); /* 0x12031459: fld dword ptr [ecx + 0x2c] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x38); /* 0x1203145C: fmul dword ptr [edx + 0x38] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1203145F: faddp st(1) */
    fp_push(*(float*)&MEM32(edx + 0x3C)); /* 0x12031461: fld dword ptr [edx + 0x3c] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x3C); /* 0x12031464: fmul dword ptr [ecx + 0x3c] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12031467: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x3C) = _v; } /* 0x12031469: fstp dword ptr [esi + 0x3c] */
    /* cmp esi, eax */ /* 0x1203146C: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12031479; /* 0x1203146E: je 0x12031479 */
L_12031470:
    PUSH32(esp, edi); /* 0x12031470: push edi */
    PUSH32(esp, 0x10u); /* 0x12031471: push 0x10 */
    ecx = POP32_VAL(esp); /* 0x12031473: pop ecx */
    edi = eax; /* 0x12031474: mov edi, eax */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x12031476: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x12031478: pop edi */
L_12031479:
    ecx = MEM32(ebp + (-0x4)); /* 0x12031479: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1203147C: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x1203147E: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x1203147F: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12031484: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12031485: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1203148D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1203148Du);

L_1203148D:
    edi = edi; /* 0x1203148D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1203148F: push ebp */
    ebp = esp; /* 0x12031490: mov ebp, esp */
    PUSH32(esp, 1); /* 0x12031492: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x12031494: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12031499: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x121CA0B4)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_120314A5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120314A5u);

L_120314A5:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA0B4)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_120314B0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120314B0u);

L_120314B0:
    edi = edi; /* 0x120314B0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120314B2: push ebp */
    ebp = esp; /* 0x120314B3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x64u; /* 0x120314B5: sub esp, 0x64 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x10); /* 0x120314B8: mov eax, dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(eax)); /* 0x120314BB: fld dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x120314BD: fstp dword ptr [ebp - 0x28] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x120314C0: fld dword ptr [eax + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x120314C3: fstp dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(eax + 0x10)); /* 0x120314C6: fld dword ptr [eax + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x120314C9: fstp dword ptr [ebp - 0x3c] */
    fp_push(*(float*)&MEM32(eax + 0x14)); /* 0x120314CC: fld dword ptr [eax + 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x120314CF: fstp dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(eax + 0x20)); /* 0x120314D2: fld dword ptr [eax + 0x20] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x120314D5: fstp dword ptr [ebp - 0x40] */
    fp_push(*(float*)&MEM32(eax + 0x24)); /* 0x120314D8: fld dword ptr [eax + 0x24] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x120314DB: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(eax + 0x30)); /* 0x120314DE: fld dword ptr [eax + 0x30] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x120314E1: fstp dword ptr [ebp - 0x44] */
    fp_push(*(float*)&MEM32(eax + 0x34)); /* 0x120314E4: fld dword ptr [eax + 0x34] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x120314E7: fstp dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x120314EA: fld dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x120314ED: fld dword ptr [ebp - 0x28] */
    fp_push(_st[0]); /* 0x120314F0: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120314F2: fmulp st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0x3C))); /* 0x120314F4: fld dword ptr [ebp - 0x3c] */
    fp_push(_st[0]); /* 0x120314F7: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x120314F9: fld dword ptr [ebp - 0x1c] */
    fp_push(_st[0]); /* 0x120314FC: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120314FE: fmulp st(2) */
    fp_xch(4); /* 0x12031500: fxch st(4) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x12031502: fsubrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x12031504: fstp dword ptr [ebp - 0x2c] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x12031507: fld dword ptr [ebp - 0xc] */
    fp_push(_st[2]); /* 0x1203150A: fld st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x1203150C: fmulp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x40))); /* 0x1203150E: fld dword ptr [ebp - 0x40] */
    fp_push(_st[0]); /* 0x12031511: fld st(0) */
    fp_push(_st[5]); /* 0x12031513: fld st(5) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12031515: fmulp st(1) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x12031517: fsubp st(2) */
    fp_xch(1); /* 0x12031519: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x1203151B: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x1203151E: fld dword ptr [ebp - 0x20] */
    fp_push(_st[0]); /* 0x12031521: fld st(0) */
    { double _v = fp_pop(); _st[3] *= _v; } /* 0x12031523: fmulp st(4) */
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x12031525: fld dword ptr [ebp - 0x44] */
    fp_push(_st[0]); /* 0x12031528: fld st(0) */
    { double _v = fp_pop(); _st[5] *= _v; } /* 0x1203152A: fmulp st(6) */
    fp_xch(4); /* 0x1203152C: fxch st(4) */
    { double _v = fp_pop(); _st[4] = _v - _st[4]; } /* 0x1203152E: fsubrp st(5) */
    fp_xch(4); /* 0x12031530: fxch st(4) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x12031532: fstp dword ptr [ebp - 0x34] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x12031535: fld dword ptr [ebp - 0xc] */
    fp_push(_st[0]); /* 0x12031538: fld st(0) */
    fp_push(_st[3]); /* 0x1203153A: fld st(3) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x1203153C: fmulp st(1) */
    fp_push(_st[2]); /* 0x1203153E: fld st(2) */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x10); /* 0x12031540: fmul dword ptr [ebp + 0x10] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x12031543: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x12031545: fstp dword ptr [ebp - 0x10] */
    fp_push(_st[4]); /* 0x12031548: fld st(4) */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x1203154A: fmulp st(3) */
    fp_push(_st[3]); /* 0x1203154C: fld st(3) */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x10); /* 0x1203154E: fmul dword ptr [ebp + 0x10] */
    { double _v = fp_pop(); _st[2] -= _v; } /* 0x12031551: fsubp st(3) */
    fp_xch(2); /* 0x12031553: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x12031555: fstp dword ptr [ebp - 0x24] */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x12031558: fmulp st(3) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x1203155A: fmulp st(1) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1203155C: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x1203155E: fstp dword ptr [ebp - 0x38] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x12031561: fld dword ptr [eax + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x12031564: fstp dword ptr [ebp - 0x30] */
    fp_push(*(float*)&MEM32(eax + 0xC)); /* 0x12031567: fld dword ptr [eax + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x1203156A: fstp dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(eax + 0x18)); /* 0x1203156D: fld dword ptr [eax + 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x12031570: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(eax + 0x1C)); /* 0x12031573: fld dword ptr [eax + 0x1c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x12031576: fstp dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(eax + 0x28)); /* 0x12031579: fld dword ptr [eax + 0x28] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1203157C: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(eax + 0x2C)); /* 0x1203157F: fld dword ptr [eax + 0x2c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x12031582: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(eax + 0x38)); /* 0x12031585: fld dword ptr [eax + 0x38] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x12031588: fstp dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(eax + 0x3C)); /* 0x1203158B: fld dword ptr [eax + 0x3c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x1203158E: fstp dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x12031591: fld dword ptr [ebp - 0x30] */
    fp_push(_st[0]); /* 0x12031594: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x10)); /* 0x12031596: fmul dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x12031599: fld dword ptr [ebp - 0x14] */
    fp_push(_st[0]); /* 0x1203159C: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x1203159E: fld dword ptr [ebp - 4] */
    fp_push(_st[0]); /* 0x120315A1: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120315A3: fmulp st(2) */
    fp_xch(3); /* 0x120315A5: fxch st(3) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x120315A7: fsubrp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x120315A9: fld dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x120315AC: fld dword ptr [ebp - 0x2c] */
    fp_push(_st[0]); /* 0x120315AF: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120315B1: fmulp st(2) */
    fp_xch(2); /* 0x120315B3: fxch st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120315B5: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x64)) = _v; } /* 0x120315B7: fstp dword ptr [ebp - 0x64] */
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x120315BA: fld dword ptr [ebp - 0x34] */
    fp_push(_st[0]); /* 0x120315BD: fld st(0) */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x120315BF: fmulp st(3) */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x120315C1: fld dword ptr [ebp - 0x18] */
    fp_push(_st[2]); /* 0x120315C4: fld st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120315C6: fmulp st(1) */
    { double _v = fp_pop(); _st[2] -= _v; } /* 0x120315C8: fsubp st(3) */
    fp_push(_st[4]); /* 0x120315CA: fld st(4) */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x120315CC: fld dword ptr [ebp - 0x24] */
    fp_push(_st[0]); /* 0x120315CF: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120315D1: fmulp st(2) */
    fp_xch(4); /* 0x120315D3: fxch st(4) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x120315D5: fsubrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x60)) = _v; } /* 0x120315D7: fstp dword ptr [ebp - 0x60] */
    fp_push(*(float*)&MEM32(ebp + (-0x38))); /* 0x120315DA: fld dword ptr [ebp - 0x38] */
    fp_push(_st[0]); /* 0x120315DD: fld st(0) */
    { double _v = fp_pop(); _st[5] *= _v; } /* 0x120315DF: fmulp st(6) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x120315E1: fld dword ptr [ebp - 8] */
    fp_push(_st[2]); /* 0x120315E4: fld st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120315E6: fmulp st(1) */
    { double _v = fp_pop(); _st[5] -= _v; } /* 0x120315E8: fsubp st(6) */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x120315EA: fld dword ptr [ebp - 0x18] */
    fp_push(_st[5]); /* 0x120315ED: fld st(5) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120315EF: fmulp st(1) */
    { double _v = fp_pop(); _st[5] += _v; } /* 0x120315F1: faddp st(6) */
    fp_xch(5); /* 0x120315F3: fxch st(5) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x5C)) = _v; } /* 0x120315F5: fstp dword ptr [ebp - 0x5c] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x120315F8: fld dword ptr [ebp - 8] */
    fp_push(_st[3]); /* 0x120315FB: fld st(3) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120315FD: fmulp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x120315FF: fld dword ptr [ebp - 0x18] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x10)); /* 0x12031602: fmul dword ptr [ebp - 0x10] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x12031605: fsubp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x12031607: fld dword ptr [ebp - 0x14] */
    fp_push(_st[6]); /* 0x1203160A: fld st(6) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x1203160C: fmulp st(1) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1203160E: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x58)) = _v; } /* 0x12031610: fstp dword ptr [ebp - 0x58] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x12031613: fld dword ptr [ebp + 0x10] */
    { double _v = fp_pop(); _st[3] *= _v; } /* 0x12031616: fmulp st(4) */
    fp_push(_st[1]); /* 0x12031618: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x1203161A: fmul dword ptr [ebp - 0xc] */
    { double _v = fp_pop(); _st[3] -= _v; } /* 0x1203161D: fsubp st(4) */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x1203161F: fld dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x12031622: fld dword ptr [ebp - 0x1c] */
    fp_push(_st[0]); /* 0x12031625: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12031627: fmulp st(2) */
    fp_xch(5); /* 0x12031629: fxch st(5) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x1203162B: fsubrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x54)) = _v; } /* 0x1203162D: fstp dword ptr [ebp - 0x54] */
    fp_push(_st[2]); /* 0x12031630: fld st(2) */
    fp_push(_st[4]); /* 0x12031632: fld st(4) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12031634: fmulp st(1) */
    fp_push(_st[1]); /* 0x12031636: fld st(1) */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x10); /* 0x12031638: fmul dword ptr [ebp + 0x10] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1203163B: fsubp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x1203163D: fld dword ptr [ebp - 0x20] */
    fp_push(_st[0]); /* 0x12031640: fld st(0) */
    { double _v = fp_pop(); _st[3] *= _v; } /* 0x12031642: fmulp st(4) */
    fp_xch(1); /* 0x12031644: fxch st(1) */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x12031646: faddp st(3) */
    fp_xch(2); /* 0x12031648: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x1203164A: fstp dword ptr [ebp - 0x50] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x1203164D: fld dword ptr [ebp - 0xc] */
    fp_push(_st[0]); /* 0x12031650: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12031652: fmulp st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x12031654: fld dword ptr [ebp - 4] */
    fp_push(_st[3]); /* 0x12031657: fld st(3) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12031659: fmulp st(1) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x1203165B: fsubp st(2) */
    fp_push(_st[5]); /* 0x1203165D: fld st(5) */
    fp_push(_st[5]); /* 0x1203165F: fld st(5) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12031661: fmulp st(1) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x12031663: fsubp st(2) */
    fp_xch(1); /* 0x12031665: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4C)) = _v; } /* 0x12031667: fstp dword ptr [ebp - 0x4c] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x1203166A: fld dword ptr [ebp + 0x10] */
    fp_push(_st[0]); /* 0x1203166D: fld st(0) */
    { double _v = fp_pop(); _st[5] *= _v; } /* 0x1203166F: fmulp st(6) */
    fp_push(_st[1]); /* 0x12031671: fld st(1) */
    { double _v = fp_pop(); _st[3] *= _v; } /* 0x12031673: fmulp st(4) */
    fp_xch(5); /* 0x12031675: fxch st(5) */
    { double _v = fp_pop(); _st[2] = _v - _st[2]; } /* 0x12031677: fsubrp st(3) */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x12031679: fld dword ptr [ebp - 0x10] */
    fp_push(_st[2]); /* 0x1203167C: fld st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x1203167E: fmulp st(1) */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x12031680: faddp st(3) */
    fp_xch(2); /* 0x12031682: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x48)) = _v; } /* 0x12031684: fstp dword ptr [ebp - 0x48] */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x12031687: fld dword ptr [ebp - 0x30] */
    fp_push(_st[0]); /* 0x1203168A: fld st(0) */
    fp_push(_st[5]); /* 0x1203168C: fld st(5) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x1203168E: fmulp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x12031690: fld dword ptr [ebp - 0x14] */
    fp_push(_st[5]); /* 0x12031693: fld st(5) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12031695: fmulp st(1) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x12031697: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x12031699: fstp dword ptr [ebp - 0x2c] */
    fp_push(_st[0]); /* 0x1203169C: fld st(0) */
    fp_push(_st[3]); /* 0x1203169E: fld st(3) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120316A0: fmulp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x120316A2: fld dword ptr [ebp - 8] */
    fp_push(_st[5]); /* 0x120316A5: fld st(5) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120316A7: fmulp st(1) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x120316A9: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x120316AB: fstp dword ptr [ebp - 4] */
    fp_push(_st[1]); /* 0x120316AE: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120316B0: fmulp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x120316B2: fld dword ptr [ebp - 0x18] */
    fp_push(_st[0]); /* 0x120316B5: fld st(0) */
    { double _v = fp_pop(); _st[4] *= _v; } /* 0x120316B7: fmulp st(5) */
    fp_xch(1); /* 0x120316B9: fxch st(1) */
    { double _v = fp_pop(); _st[3] = _v - _st[3]; } /* 0x120316BB: fsubrp st(4) */
    fp_xch(3); /* 0x120316BD: fxch st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x120316BF: fstp dword ptr [ebp - 0x34] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x120316C2: fld dword ptr [ebp - 0x14] */
    fp_push(_st[0]); /* 0x120316C5: fld st(0) */
    fp_push(_st[3]); /* 0x120316C7: fld st(3) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120316C9: fmulp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x120316CB: fld dword ptr [ebp - 8] */
    fp_push(_st[6]); /* 0x120316CE: fld st(6) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120316D0: fmulp st(1) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x120316D2: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x120316D4: fstp dword ptr [ebp - 0x10] */
    fp_push(_st[1]); /* 0x120316D7: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120316D9: fmulp st(1) */
    fp_push(_st[3]); /* 0x120316DB: fld st(3) */
    { double _v = fp_pop(); _st[4] *= _v; } /* 0x120316DD: fmulp st(5) */
    { double _v = fp_pop(); _st[3] = _v - _st[3]; } /* 0x120316DF: fsubrp st(4) */
    fp_xch(3); /* 0x120316E1: fxch st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x120316E3: fstp dword ptr [ebp - 0x24] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x120316E6: fld dword ptr [ebp - 8] */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x120316E9: fmulp st(3) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120316EB: fmulp st(1) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x120316ED: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x120316EF: fstp dword ptr [ebp - 0x38] */
    fp_push(*(float*)&MEM32(eax)); /* 0x120316F2: fld dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x120316F4: fstp dword ptr [ebp - 0x28] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x120316F7: fld dword ptr [eax + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x120316FA: fstp dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(eax + 0x10)); /* 0x120316FD: fld dword ptr [eax + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x12031700: fstp dword ptr [ebp - 0x3c] */
    fp_push(*(float*)&MEM32(eax + 0x14)); /* 0x12031703: fld dword ptr [eax + 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x12031706: fstp dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(eax + 0x20)); /* 0x12031709: fld dword ptr [eax + 0x20] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x1203170C: fstp dword ptr [ebp - 0x40] */
    fp_push(*(float*)&MEM32(eax + 0x24)); /* 0x1203170F: fld dword ptr [eax + 0x24] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x12031712: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(eax + 0x30)); /* 0x12031715: fld dword ptr [eax + 0x30] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x12031718: fstp dword ptr [ebp - 0x44] */
    fp_push(*(float*)&MEM32(eax + 0x34)); /* 0x1203171B: fld dword ptr [eax + 0x34] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x1203171E: fstp dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x12031721: fld dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x12031724: fld dword ptr [ebp + 0x10] */
    fp_push(_st[0]); /* 0x12031727: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12031729: fmulp st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x1203172B: fld dword ptr [ebp - 0x2c] */
    fp_push(_st[0]); /* 0x1203172E: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x12031730: fld dword ptr [ebp - 0xc] */
    fp_push(_st[0]); /* 0x12031733: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12031735: fmulp st(2) */
    fp_xch(4); /* 0x12031737: fxch st(4) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x12031739: fsubrp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x1203173B: fld dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x1203173E: fld dword ptr [ebp - 0x1c] */
    fp_push(_st[0]); /* 0x12031741: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12031743: fmulp st(2) */
    fp_xch(2); /* 0x12031745: fxch st(2) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x12031747: fsubrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x12031749: fstp dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x1203174C: fld dword ptr [ebp - 0x24] */
    fp_push(_st[1]); /* 0x1203174F: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12031751: fmulp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x12031753: fld dword ptr [ebp - 0x34] */
    fp_push(_st[0]); /* 0x12031756: fld st(0) */
    fp_push(_st[5]); /* 0x12031758: fld st(5) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x1203175A: fmulp st(1) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x1203175C: fsubp st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x1203175E: fld dword ptr [ebp - 0x20] */
    fp_push(_st[0]); /* 0x12031761: fld st(0) */
    { double _v = fp_pop(); _st[4] *= _v; } /* 0x12031763: fmulp st(5) */
    fp_xch(2); /* 0x12031765: fxch st(2) */
    { double _v = fp_pop(); _st[3] += _v; } /* 0x12031767: faddp st(4) */
    fp_xch(3); /* 0x12031769: fxch st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x1203176B: fstp dword ptr [ebp - 8] */
    fp_push(_st[4]); /* 0x1203176E: fld st(4) */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x12031770: fmulp st(3) */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x12031772: fld dword ptr [ebp - 4] */
    fp_push(_st[1]); /* 0x12031775: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12031777: fmulp st(1) */
    { double _v = fp_pop(); _st[2] -= _v; } /* 0x12031779: fsubp st(3) */
    fp_push(*(float*)&MEM32(ebp + (-0x38))); /* 0x1203177B: fld dword ptr [ebp - 0x38] */
    fp_push(_st[0]); /* 0x1203177E: fld st(0) */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x12031780: fmulp st(3) */
    fp_xch(3); /* 0x12031782: fxch st(3) */
    { double _v = fp_pop(); _st[1] = _v - _st[1]; } /* 0x12031784: fsubrp st(2) */
    fp_xch(1); /* 0x12031786: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x12031788: fstp dword ptr [ebp - 0x14] */
    fp_push(_st[1]); /* 0x1203178B: fld st(1) */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x1203178D: fmulp st(3) */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x1203178F: fld dword ptr [ebp - 0x24] */
    { double _v = fp_pop(); _st[3] *= _v; } /* 0x12031792: fmulp st(4) */
    fp_xch(2); /* 0x12031794: fxch st(2) */
    { double _v = fp_pop(); _st[2] = _v - _st[2]; } /* 0x12031796: fsubrp st(3) */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x12031798: fld dword ptr [ebp - 0x10] */
    fp_push(_st[0]); /* 0x1203179B: fld st(0) */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x1203179D: fmulp st(3) */
    fp_xch(3); /* 0x1203179F: fxch st(3) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x120317A1: faddp st(2) */
    fp_xch(1); /* 0x120317A3: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x120317A5: fstp dword ptr [ebp - 0x30] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x120317A8: fld dword ptr [ebp - 0x28] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120317AB: fmulp st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x120317AD: fld dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x3C))); /* 0x120317B0: fld dword ptr [ebp - 0x3c] */
    fp_push(_st[0]); /* 0x120317B3: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120317B5: fmulp st(2) */
    fp_xch(3); /* 0x120317B7: fxch st(3) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x120317B9: fsubrp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x120317BB: fld dword ptr [ebp - 0x2c] */
    fp_push(_st[0]); /* 0x120317BE: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x40))); /* 0x120317C0: fld dword ptr [ebp - 0x40] */
    fp_push(_st[0]); /* 0x120317C3: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120317C5: fmulp st(2) */
    eax = MEM32(ebp + 0xC); /* 0x120317C7: mov eax, dword ptr [ebp + 0xc] */
    fp_xch(3); /* 0x120317CA: fxch st(3) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120317CC: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x120317CE: fstp dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x34))); /* 0x120317D1: fld dword ptr [ebp - 0x34] */
    fp_push(_st[0]); /* 0x120317D4: fld st(0) */
    fp_push(_st[5]); /* 0x120317D6: fld st(5) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120317D8: fmulp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x44))); /* 0x120317DA: fld dword ptr [ebp - 0x44] */
    fp_push(_st[0]); /* 0x120317DD: fld st(0) */
    { double _v = fp_pop(); _st[3] *= _v; } /* 0x120317DF: fmulp st(4) */
    fp_xch(1); /* 0x120317E1: fxch st(1) */
    { double _v = fp_pop(); _st[2] = _v - _st[2]; } /* 0x120317E3: fsubrp st(3) */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x120317E5: fld dword ptr [ebp - 0x24] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x28)); /* 0x120317E8: fmul dword ptr [ebp - 0x28] */
    { double _v = fp_pop(); _st[2] -= _v; } /* 0x120317EB: fsubp st(3) */
    fp_xch(2); /* 0x120317ED: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x120317EF: fstp dword ptr [ebp - 0xc] */
    fp_push(_st[3]); /* 0x120317F2: fld st(3) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x28)); /* 0x120317F4: fmul dword ptr [ebp - 0x28] */
    fp_push(_st[3]); /* 0x120317F7: fld st(3) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120317F9: fmulp st(2) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x120317FB: fsubrp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x120317FD: fld dword ptr [ebp - 4] */
    fp_push(_st[2]); /* 0x12031800: fld st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12031802: fmulp st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12031804: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x12031806: fstp dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x12031809: fld dword ptr [ebp - 0x24] */
    fp_push(_st[2]); /* 0x1203180C: fld st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x1203180E: fmulp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x12031810: fld dword ptr [ebp - 0x10] */
    fp_push(_st[2]); /* 0x12031813: fld st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12031815: fmulp st(1) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x12031817: fsubp st(1) */
    fp_push(_st[4]); /* 0x12031819: fld st(4) */
    { double _v = fp_pop(); _st[3] *= _v; } /* 0x1203181B: fmulp st(4) */
    { double _v = fp_pop(); _st[2] = _v - _st[2]; } /* 0x1203181D: fsubrp st(3) */
    fp_xch(2); /* 0x1203181F: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x12031821: fstp dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x12031824: fld dword ptr [ebp - 0x18] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12031827: fmulp st(2) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x12031829: fmul dword ptr [ebp - 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1203182C: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x1203182E: fld dword ptr [ebp - 0x14] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12031831: fmulp st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12031833: faddp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x12031835: fld dword ptr [ebp - 0x30] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x28)); /* 0x12031838: fmul dword ptr [ebp - 0x28] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1203183B: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x1203183D: fstp dword ptr [ebp - 0x2c] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x12031840: fld dword ptr [ebp - 0x2c] */
    /* test eax, eax */ /* 0x12031843: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12031849; /* 0x12031845: je 0x12031849 */
L_12031847:
    { float _v = (float)_st[0]; *(float*)ADDR(eax) = _v; } /* 0x12031847: fst dword ptr [eax] */
L_12031849:
    fp_push(_st[0]); /* 0x12031849: fld st(0) */
    fp_push(0.0); /* 0x1203184B: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1203184D: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1203184F: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x12031851: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1203185F; /* 0x12031854: jp 0x1203185f */
L_12031856:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12031856: fstp st(0) */
L_12031858:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12031858: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_12031914; /* 0x1203185A: jmp 0x12031914 */
L_1203185F:
    fp_push(1.0); /* 0x1203185F: fld1  */
    PUSH32(esp, ecx); /* 0x12031861: push ecx */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x12031862: fdivrp st(1) */
    PUSH32(esp, ecx); /* 0x12031864: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x12031865: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x12031868: fld dword ptr [ebp - 4] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1203186B: fstp qword ptr [esp] */
    RECOMP_CALL(sub_121BF4F4); /* 0x1203186E: call 0x121bf4f4 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12031873: pop ecx */
    ecx = POP32_VAL(esp); /* 0x12031874: pop ecx */
    /* test eax, eax */ /* 0x12031875: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_12031858; /* 0x12031877: je 0x12031858 */
L_12031879:
    eax = MEM32(ebp + 0x8); /* 0x12031879: mov eax, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x30))); /* 0x1203187C: fld dword ptr [ebp - 0x30] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x1203187F: fld dword ptr [ebp - 4] */
    fp_push(_st[0]); /* 0x12031882: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12031884: fmulp st(2) */
    fp_xch(1); /* 0x12031886: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x12031888: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x1203188A: fld dword ptr [ebp - 0x14] */
    fp_push(_st[1]); /* 0x1203188D: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x1203188F: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x12031891: fstp dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x12031894: fld dword ptr [ebp - 8] */
    fp_push(_st[1]); /* 0x12031897: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12031899: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x1203189B: fstp dword ptr [eax + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x1203189E: fld dword ptr [ebp - 0x18] */
    fp_push(_st[1]); /* 0x120318A1: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120318A3: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x120318A5: fstp dword ptr [eax + 0xc] */
    fp_push(_st[0]); /* 0x120318A8: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x1C)); /* 0x120318AA: fmul dword ptr [ebp - 0x1c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x10) = _v; } /* 0x120318AD: fstp dword ptr [eax + 0x10] */
    fp_push(_st[0]); /* 0x120318B0: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ebp + 0x10); /* 0x120318B2: fmul dword ptr [ebp + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x14) = _v; } /* 0x120318B5: fstp dword ptr [eax + 0x14] */
    fp_push(_st[0]); /* 0x120318B8: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0xC)); /* 0x120318BA: fmul dword ptr [ebp - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x18) = _v; } /* 0x120318BD: fstp dword ptr [eax + 0x18] */
    fp_push(_st[0]); /* 0x120318C0: fld st(0) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x20)); /* 0x120318C2: fmul dword ptr [ebp - 0x20] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x1C) = _v; } /* 0x120318C5: fstp dword ptr [eax + 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0x48))); /* 0x120318C8: fld dword ptr [ebp - 0x48] */
    fp_push(_st[1]); /* 0x120318CB: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120318CD: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x20) = _v; } /* 0x120318CF: fstp dword ptr [eax + 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x4C))); /* 0x120318D2: fld dword ptr [ebp - 0x4c] */
    fp_push(_st[1]); /* 0x120318D5: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120318D7: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x24) = _v; } /* 0x120318D9: fstp dword ptr [eax + 0x24] */
    fp_push(*(float*)&MEM32(ebp + (-0x50))); /* 0x120318DC: fld dword ptr [ebp - 0x50] */
    fp_push(_st[1]); /* 0x120318DF: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120318E1: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x28) = _v; } /* 0x120318E3: fstp dword ptr [eax + 0x28] */
    fp_push(*(float*)&MEM32(ebp + (-0x54))); /* 0x120318E6: fld dword ptr [ebp - 0x54] */
    fp_push(_st[1]); /* 0x120318E9: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120318EB: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x2C) = _v; } /* 0x120318ED: fstp dword ptr [eax + 0x2c] */
    fp_push(*(float*)&MEM32(ebp + (-0x58))); /* 0x120318F0: fld dword ptr [ebp - 0x58] */
    fp_push(_st[1]); /* 0x120318F3: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120318F5: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x30) = _v; } /* 0x120318F7: fstp dword ptr [eax + 0x30] */
    fp_push(*(float*)&MEM32(ebp + (-0x5C))); /* 0x120318FA: fld dword ptr [ebp - 0x5c] */
    fp_push(_st[1]); /* 0x120318FD: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120318FF: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x34) = _v; } /* 0x12031901: fstp dword ptr [eax + 0x34] */
    fp_push(*(float*)&MEM32(ebp + (-0x60))); /* 0x12031904: fld dword ptr [ebp - 0x60] */
    fp_push(_st[1]); /* 0x12031907: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12031909: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x38) = _v; } /* 0x1203190B: fstp dword ptr [eax + 0x38] */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x64)); /* 0x1203190E: fmul dword ptr [ebp - 0x64] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x3C) = _v; } /* 0x12031911: fstp dword ptr [eax + 0x3c] */
L_12031914:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12031914: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12031915: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1203191D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1203191Du);

L_1203191D:
    edi = edi; /* 0x1203191D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1203191F: push ebp */
    ebp = esp; /* 0x12031920: mov ebp, esp */
    PUSH32(esp, 1); /* 0x12031922: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x12031924: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x12031929: fld dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1203192C: sub esp, 0xc */
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x8) = _v; } /* 0x1203192F: fstp dword ptr [esp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x12031933: fld dword ptr [ebp + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x12031936: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1203193A: fld dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x1203193D: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12031940: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x121CA0F0)); /* 0x12031943: call dword ptr [0x121ca0f0] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12031949: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1203194A: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_12031952(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12031952u);

L_12031952:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA0F0)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1203195D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1203195Du);

L_1203195D:
    edi = edi; /* 0x1203195D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1203195F: push ebp */
    ebp = esp; /* 0x12031960: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x12031962: mov eax, dword ptr [ebp + 8] */
    fp_push(0.0); /* 0x12031965: fldz  */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x38) = _v; } /* 0x12031967: fst dword ptr [eax + 0x38] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x34) = _v; } /* 0x1203196A: fst dword ptr [eax + 0x34] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x30) = _v; } /* 0x1203196D: fst dword ptr [eax + 0x30] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x2C) = _v; } /* 0x12031970: fst dword ptr [eax + 0x2c] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x24) = _v; } /* 0x12031973: fst dword ptr [eax + 0x24] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x20) = _v; } /* 0x12031976: fst dword ptr [eax + 0x20] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x1C) = _v; } /* 0x12031979: fst dword ptr [eax + 0x1c] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x18) = _v; } /* 0x1203197C: fst dword ptr [eax + 0x18] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x10) = _v; } /* 0x1203197F: fst dword ptr [eax + 0x10] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0xC) = _v; } /* 0x12031982: fst dword ptr [eax + 0xc] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x8) = _v; } /* 0x12031985: fst dword ptr [eax + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x12031988: fstp dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x1203198B: fld dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x1203198E: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x12031990: fld dword ptr [ebp + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x14) = _v; } /* 0x12031993: fstp dword ptr [eax + 0x14] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x12031996: fld dword ptr [ebp + 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x28) = _v; } /* 0x12031999: fstp dword ptr [eax + 0x28] */
    fp_push(1.0); /* 0x1203199C: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x3C) = _v; } /* 0x1203199E: fstp dword ptr [eax + 0x3c] */
    ebp = POP32_VAL(esp); /* 0x120319A1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120319A2: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120319AA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120319AAu);

L_120319AA:
    edi = edi; /* 0x120319AA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120319AC: push ebp */
    ebp = esp; /* 0x120319AD: mov ebp, esp */
    PUSH32(esp, 1); /* 0x120319AF: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x120319B1: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x120319B6: fld dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x120319B9: sub esp, 0xc */
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x8) = _v; } /* 0x120319BC: fstp dword ptr [esp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x120319C0: fld dword ptr [ebp + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x120319C3: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x120319C7: fld dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x120319CA: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120319CD: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x121CA0D4)); /* 0x120319D0: call dword ptr [0x121ca0d4] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120319D6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120319D7: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120319DF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120319DFu);

L_120319DF:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA0D4)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_120319EA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120319EAu);

L_120319EA:
    edi = edi; /* 0x120319EA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120319EC: push ebp */
    ebp = esp; /* 0x120319ED: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x120319EF: mov eax, dword ptr [ebp + 8] */
    fp_push(0.0); /* 0x120319F2: fldz  */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x2C) = _v; } /* 0x120319F4: fst dword ptr [eax + 0x2c] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x24) = _v; } /* 0x120319F7: fst dword ptr [eax + 0x24] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x20) = _v; } /* 0x120319FA: fst dword ptr [eax + 0x20] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x1C) = _v; } /* 0x120319FD: fst dword ptr [eax + 0x1c] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x18) = _v; } /* 0x12031A00: fst dword ptr [eax + 0x18] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x10) = _v; } /* 0x12031A03: fst dword ptr [eax + 0x10] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0xC) = _v; } /* 0x12031A06: fst dword ptr [eax + 0xc] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x8) = _v; } /* 0x12031A09: fst dword ptr [eax + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x12031A0C: fstp dword ptr [eax + 4] */
    fp_push(1.0); /* 0x12031A0F: fld1  */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x3C) = _v; } /* 0x12031A11: fst dword ptr [eax + 0x3c] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x28) = _v; } /* 0x12031A14: fst dword ptr [eax + 0x28] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x14) = _v; } /* 0x12031A17: fst dword ptr [eax + 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x12031A1A: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12031A1C: fld dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x30) = _v; } /* 0x12031A1F: fstp dword ptr [eax + 0x30] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x12031A22: fld dword ptr [ebp + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x34) = _v; } /* 0x12031A25: fstp dword ptr [eax + 0x34] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x12031A28: fld dword ptr [ebp + 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x38) = _v; } /* 0x12031A2B: fstp dword ptr [eax + 0x38] */
    ebp = POP32_VAL(esp); /* 0x12031A2E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x12031A2F: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_12031A37(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12031A37u);

L_12031A37:
    edi = edi; /* 0x12031A37: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12031A39: push ebp */
    ebp = esp; /* 0x12031A3A: mov ebp, esp */
    PUSH32(esp, 1); /* 0x12031A3C: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x12031A3E: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12031A43: fld dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x12031A46: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x12031A47: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12031A4A: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x121CA0E4)); /* 0x12031A4D: call dword ptr [0x121ca0e4] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12031A53: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12031A54: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12031A5C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12031A5Cu);

L_12031A5C:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA0E4)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12031A67(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12031A67u);

L_12031A67:
    edi = edi; /* 0x12031A67: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12031A69: push ebp */
    ebp = esp; /* 0x12031A6A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x12031A6C: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = ebp + (-0x4); /* 0x12031A6F: lea eax, [ebp - 4] */
    MEM32(ebp + (-0xC)) = eax; /* 0x12031A72: mov dword ptr [ebp - 0xc], eax */
    eax = ebp + (-0x8); /* 0x12031A75: lea eax, [ebp - 8] */
    MEM32(ebp + (-0x10)) = eax; /* 0x12031A78: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ebp + (-0x10)); /* 0x12031A7B: mov eax, dword ptr [ebp - 0x10] */
    edx = MEM32(ebp + (-0xC)); /* 0x12031A7E: mov edx, dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12031A81: fld dword ptr [ebp + 0xc] */
    { double _a = _st[0]; _st[0] = sin(_a); fp_push(cos(_a)); } _fpu_cmp = 1; /* 0x12031A84: fsincos  */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x12031A86: fstp dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x12031A88: fstp dword ptr [eax] */
    fp_push(1.0); /* 0x12031A8A: fld1  */
    eax = MEM32(ebp + 0x8); /* 0x12031A8C: mov eax, dword ptr [ebp + 8] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax) = _v; } /* 0x12031A8F: fst dword ptr [eax] */
    fp_push(0.0); /* 0x12031A91: fldz  */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x4) = _v; } /* 0x12031A93: fst dword ptr [eax + 4] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x8) = _v; } /* 0x12031A96: fst dword ptr [eax + 8] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0xC) = _v; } /* 0x12031A99: fst dword ptr [eax + 0xc] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x10) = _v; } /* 0x12031A9C: fst dword ptr [eax + 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x12031A9F: fld dword ptr [ebp - 4] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x14) = _v; } /* 0x12031AA2: fst dword ptr [eax + 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x12031AA5: fld dword ptr [ebp - 8] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x18) = _v; } /* 0x12031AA8: fst dword ptr [eax + 0x18] */
    fp_xch(2); /* 0x12031AAB: fxch st(2) */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x1C) = _v; } /* 0x12031AAD: fst dword ptr [eax + 0x1c] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x20) = _v; } /* 0x12031AB0: fst dword ptr [eax + 0x20] */
    fp_xch(2); /* 0x12031AB3: fxch st(2) */
    _st[0] = -_st[0]; /* 0x12031AB5: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x24) = _v; } /* 0x12031AB7: fstp dword ptr [eax + 0x24] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x28) = _v; } /* 0x12031ABA: fstp dword ptr [eax + 0x28] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x2C) = _v; } /* 0x12031ABD: fst dword ptr [eax + 0x2c] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x30) = _v; } /* 0x12031AC0: fst dword ptr [eax + 0x30] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x34) = _v; } /* 0x12031AC3: fst dword ptr [eax + 0x34] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x38) = _v; } /* 0x12031AC6: fstp dword ptr [eax + 0x38] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x3C) = _v; } /* 0x12031AC9: fstp dword ptr [eax + 0x3c] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12031ACC: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12031ACD: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12031AD5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12031AD5u);

L_12031AD5:
    edi = edi; /* 0x12031AD5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12031AD7: push ebp */
    ebp = esp; /* 0x12031AD8: mov ebp, esp */
    PUSH32(esp, 1); /* 0x12031ADA: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x12031ADC: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12031AE1: fld dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x12031AE4: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x12031AE5: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12031AE8: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x121CA0E8)); /* 0x12031AEB: call dword ptr [0x121ca0e8] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12031AF1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12031AF2: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12031AFA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12031AFAu);

L_12031AFA:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA0E8)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12031B05(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12031B05u);

L_12031B05:
    edi = edi; /* 0x12031B05: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12031B07: push ebp */
    ebp = esp; /* 0x12031B08: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x12031B0A: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = ebp + (-0x4); /* 0x12031B0D: lea eax, [ebp - 4] */
    MEM32(ebp + (-0xC)) = eax; /* 0x12031B10: mov dword ptr [ebp - 0xc], eax */
    eax = ebp + (-0x8); /* 0x12031B13: lea eax, [ebp - 8] */
    MEM32(ebp + (-0x10)) = eax; /* 0x12031B16: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ebp + (-0x10)); /* 0x12031B19: mov eax, dword ptr [ebp - 0x10] */
    edx = MEM32(ebp + (-0xC)); /* 0x12031B1C: mov edx, dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12031B1F: fld dword ptr [ebp + 0xc] */
    { double _a = _st[0]; _st[0] = sin(_a); fp_push(cos(_a)); } _fpu_cmp = 1; /* 0x12031B22: fsincos  */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x12031B24: fstp dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x12031B26: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x12031B28: fld dword ptr [ebp - 4] */
    eax = MEM32(ebp + 0x8); /* 0x12031B2B: mov eax, dword ptr [ebp + 8] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax) = _v; } /* 0x12031B2E: fst dword ptr [eax] */
    fp_push(0.0); /* 0x12031B30: fldz  */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x4) = _v; } /* 0x12031B32: fst dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x12031B35: fld dword ptr [ebp - 8] */
    fp_push(_st[0]); /* 0x12031B38: fld st(0) */
    _st[0] = -_st[0]; /* 0x12031B3A: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x12031B3C: fstp dword ptr [eax + 8] */
    fp_xch(1); /* 0x12031B3F: fxch st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0xC) = _v; } /* 0x12031B41: fst dword ptr [eax + 0xc] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x10) = _v; } /* 0x12031B44: fst dword ptr [eax + 0x10] */
    fp_push(1.0); /* 0x12031B47: fld1  */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x14) = _v; } /* 0x12031B49: fst dword ptr [eax + 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x3C) = _v; } /* 0x12031B4C: fstp dword ptr [eax + 0x3c] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x18) = _v; } /* 0x12031B4F: fst dword ptr [eax + 0x18] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x1C) = _v; } /* 0x12031B52: fst dword ptr [eax + 0x1c] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x24) = _v; } /* 0x12031B55: fst dword ptr [eax + 0x24] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x2C) = _v; } /* 0x12031B58: fst dword ptr [eax + 0x2c] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x30) = _v; } /* 0x12031B5B: fst dword ptr [eax + 0x30] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x34) = _v; } /* 0x12031B5E: fst dword ptr [eax + 0x34] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x38) = _v; } /* 0x12031B61: fstp dword ptr [eax + 0x38] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x20) = _v; } /* 0x12031B64: fstp dword ptr [eax + 0x20] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x28) = _v; } /* 0x12031B67: fstp dword ptr [eax + 0x28] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12031B6A: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12031B6B: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12031B73(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12031B73u);

L_12031B73:
    edi = edi; /* 0x12031B73: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12031B75: push ebp */
    ebp = esp; /* 0x12031B76: mov ebp, esp */
    PUSH32(esp, 1); /* 0x12031B78: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x12031B7A: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12031B7F: fld dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x12031B82: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x12031B83: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12031B86: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x121CA0EC)); /* 0x12031B89: call dword ptr [0x121ca0ec] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12031B8F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12031B90: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12031B98(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12031B98u);

L_12031B98:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA0EC)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12031BA3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12031BA3u);

L_12031BA3:
    edi = edi; /* 0x12031BA3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12031BA5: push ebp */
    ebp = esp; /* 0x12031BA6: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x12031BA8: sub esp, 0x10 */
    _flag_k = FK_CMP;
    eax = ebp + (-0x4); /* 0x12031BAB: lea eax, [ebp - 4] */
    MEM32(ebp + (-0xC)) = eax; /* 0x12031BAE: mov dword ptr [ebp - 0xc], eax */
    eax = ebp + (-0x8); /* 0x12031BB1: lea eax, [ebp - 8] */
    MEM32(ebp + (-0x10)) = eax; /* 0x12031BB4: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ebp + (-0x10)); /* 0x12031BB7: mov eax, dword ptr [ebp - 0x10] */
    edx = MEM32(ebp + (-0xC)); /* 0x12031BBA: mov edx, dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12031BBD: fld dword ptr [ebp + 0xc] */
    { double _a = _st[0]; _st[0] = sin(_a); fp_push(cos(_a)); } _fpu_cmp = 1; /* 0x12031BC0: fsincos  */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x12031BC2: fstp dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x12031BC4: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x12031BC6: fld dword ptr [ebp - 4] */
    eax = MEM32(ebp + 0x8); /* 0x12031BC9: mov eax, dword ptr [ebp + 8] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax) = _v; } /* 0x12031BCC: fst dword ptr [eax] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x12031BCE: fld dword ptr [ebp - 8] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x4) = _v; } /* 0x12031BD1: fst dword ptr [eax + 4] */
    fp_push(0.0); /* 0x12031BD4: fldz  */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x8) = _v; } /* 0x12031BD6: fst dword ptr [eax + 8] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0xC) = _v; } /* 0x12031BD9: fst dword ptr [eax + 0xc] */
    fp_xch(1); /* 0x12031BDC: fxch st(1) */
    _st[0] = -_st[0]; /* 0x12031BDE: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x10) = _v; } /* 0x12031BE0: fstp dword ptr [eax + 0x10] */
    fp_xch(1); /* 0x12031BE3: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x14) = _v; } /* 0x12031BE5: fstp dword ptr [eax + 0x14] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x18) = _v; } /* 0x12031BE8: fst dword ptr [eax + 0x18] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x1C) = _v; } /* 0x12031BEB: fst dword ptr [eax + 0x1c] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x20) = _v; } /* 0x12031BEE: fst dword ptr [eax + 0x20] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x24) = _v; } /* 0x12031BF1: fst dword ptr [eax + 0x24] */
    fp_push(1.0); /* 0x12031BF4: fld1  */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x28) = _v; } /* 0x12031BF6: fst dword ptr [eax + 0x28] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x3C) = _v; } /* 0x12031BF9: fstp dword ptr [eax + 0x3c] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x2C) = _v; } /* 0x12031BFC: fst dword ptr [eax + 0x2c] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x30) = _v; } /* 0x12031BFF: fst dword ptr [eax + 0x30] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x34) = _v; } /* 0x12031C02: fst dword ptr [eax + 0x34] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x38) = _v; } /* 0x12031C05: fstp dword ptr [eax + 0x38] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12031C08: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12031C09: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12031C11(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12031C11u);

L_12031C11:
    edi = edi; /* 0x12031C11: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12031C13: push ebp */
    ebp = esp; /* 0x12031C14: mov ebp, esp */
    PUSH32(esp, 1); /* 0x12031C16: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x12031C18: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x12031C1D: fld dword ptr [ebp + 0x10] */
    PUSH32(esp, ecx); /* 0x12031C20: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x12031C21: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12031C24: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12031C27: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x121CA114)); /* 0x12031C2A: call dword ptr [0x121ca114] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12031C30: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12031C31: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12031C39(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12031C39u);

L_12031C39:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA114)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12031C44(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12031C44u);

L_12031C44:
    edi = edi; /* 0x12031C44: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12031C46: push ebp */
    ebp = esp; /* 0x12031C47: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x12031C49: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x12031C4C: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x12031C51: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x12031C53: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x12031C56: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x12031C57: mov ebx, dword ptr [ebp + 8] */
    eax = ebp + (-0x18); /* 0x12031C5A: lea eax, [ebp - 0x18] */
    PUSH32(esp, esi); /* 0x12031C5D: push esi */
    esi = MEM32(ebp + 0xC); /* 0x12031C5E: mov esi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x14)) = eax; /* 0x12031C61: mov dword ptr [ebp - 0x14], eax */
    eax = ebp + (-0x20); /* 0x12031C64: lea eax, [ebp - 0x20] */
    PUSH32(esp, edi); /* 0x12031C67: push edi */
    MEM32(ebp + (-0x1C)) = eax; /* 0x12031C68: mov dword ptr [ebp - 0x1c], eax */
    eax = MEM32(ebp + (-0x1C)); /* 0x12031C6B: mov eax, dword ptr [ebp - 0x1c] */
    edx = MEM32(ebp + (-0x14)); /* 0x12031C6E: mov edx, dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x12031C71: fld dword ptr [ebp + 0x10] */
    { double _a = _st[0]; _st[0] = sin(_a); fp_push(cos(_a)); } _fpu_cmp = 1; /* 0x12031C74: fsincos  */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x12031C76: fstp dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x12031C78: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x12031C7A: fld dword ptr [ebp - 0x18] */
    fp_push(1.0); /* 0x12031C7D: fld1  */
    edi = ebp + (-0x10); /* 0x12031C7F: lea edi, [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12031C82: movsd dword ptr es:[edi], dword ptr [esi] */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x12031C83: fsubrp st(1) */
    eax = ebp + (-0x10); /* 0x12031C85: lea eax, [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12031C88: movsd dword ptr es:[edi], dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x12031C89: fstp dword ptr [ebp - 0x14] */
    PUSH32(esp, eax); /* 0x12031C8C: push eax */
    PUSH32(esp, eax); /* 0x12031C8D: push eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12031C8E: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_120301D9); /* 0x12031C8F: call 0x120301d9 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x12031C94: fld dword ptr [ebp - 0xc] */
    fp_push(_st[0]); /* 0x12031C97: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x12031C99: fld dword ptr [ebp - 0x10] */
    fp_push(_st[0]); /* 0x12031C9C: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12031C9E: fmulp st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x12031CA0: fld dword ptr [ebp - 0x14] */
    fp_push(_st[0]); /* 0x12031CA3: fld st(0) */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x12031CA5: fmulp st(3) */
    fp_xch(2); /* 0x12031CA7: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x12031CA9: fstp dword ptr [ebp - 0x1c] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x12031CAC: fld dword ptr [ebp - 8] */
    fp_push(_st[0]); /* 0x12031CAF: fld st(0) */
    fp_push(_st[4]); /* 0x12031CB1: fld st(4) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12031CB3: fmulp st(1) */
    fp_push(_st[3]); /* 0x12031CB5: fld st(3) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12031CB7: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x12031CB9: fstp dword ptr [ebp - 0x24] */
    fp_push(_st[0]); /* 0x12031CBC: fld st(0) */
    fp_push(_st[2]); /* 0x12031CBE: fld st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12031CC0: fmulp st(1) */
    fp_push(_st[3]); /* 0x12031CC2: fld st(3) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12031CC4: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x12031CC6: fstp dword ptr [ebp - 0x28] */
    fp_xch(1); /* 0x12031CC9: fxch st(1) */
    _st[0] *= _st[0]; /* 0x12031CCB: fmul st(0), st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12031CCD: fmulp st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x12031CCF: fld dword ptr [ebp - 0x18] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12031CD2: faddp st(2) */
    fp_xch(1); /* 0x12031CD4: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx) = _v; } /* 0x12031CD6: fstp dword ptr [ebx] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x12031CD8: fld dword ptr [ebp - 0x20] */
    fp_push(_st[0]); /* 0x12031CDB: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12031CDD: fmulp st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x12031CDF: fld dword ptr [ebp - 0x1c] */
    fp_push(_st[0]); /* 0x12031CE2: fld st(0) */
    _st[0] += _st[3]; /* 0x12031CE4: fadd st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0x4) = _v; } /* 0x12031CE6: fstp dword ptr [ebx + 4] */
    fp_push(_st[1]); /* 0x12031CE9: fld st(1) */
    { double _v = fp_pop(); _st[3] *= _v; } /* 0x12031CEB: fmulp st(4) */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x12031CED: fld dword ptr [ebp - 0x28] */
    fp_push(_st[0]); /* 0x12031CF0: fld st(0) */
    _st[0] -= _st[5]; /* 0x12031CF2: fsub st(5) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0x8) = _v; } /* 0x12031CF4: fstp dword ptr [ebx + 8] */
    fp_push(0.0); /* 0x12031CF7: fldz  */
    { float _v = (float)_st[0]; *(float*)ADDR(ebx + 0xC) = _v; } /* 0x12031CF9: fst dword ptr [ebx + 0xc] */
    fp_xch(2); /* 0x12031CFC: fxch st(2) */
    { double _v = fp_pop(); _st[3] = _v - _st[3]; } /* 0x12031CFE: fsubrp st(4) */
    fp_xch(3); /* 0x12031D00: fxch st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0x10) = _v; } /* 0x12031D02: fstp dword ptr [ebx + 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x12031D05: fld dword ptr [ebp - 0xc] */
    _st[0] *= _st[0]; /* 0x12031D08: fmul st(0), st(0) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x14)); /* 0x12031D0A: fmul dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x12031D0D: fld dword ptr [ebp - 0x18] */
    fp_push(_st[0]); /* 0x12031D10: fld st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12031D12: faddp st(2) */
    fp_xch(1); /* 0x12031D14: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0x14) = _v; } /* 0x12031D16: fstp dword ptr [ebx + 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x12031D19: fld dword ptr [ebp - 0x10] */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x12031D1C: fmulp st(3) */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x12031D1E: fld dword ptr [ebp - 0x24] */
    ecx = MEM32(ebp + (-0x4)); /* 0x12031D21: mov ecx, dword ptr [ebp - 4] */
    fp_push(_st[0]); /* 0x12031D24: fld st(0) */
    edi = POP32_VAL(esp); /* 0x12031D26: pop edi */
    _st[0] += _st[4]; /* 0x12031D27: fadd st(4) */
    esi = POP32_VAL(esp); /* 0x12031D29: pop esi */
    eax = ebx; /* 0x12031D2A: mov eax, ebx */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x12031D2C: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0x18) = _v; } /* 0x12031D2E: fstp dword ptr [ebx + 0x18] */
    fp_xch(2); /* 0x12031D31: fxch st(2) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebx + 0x1C) = _v; } /* 0x12031D33: fst dword ptr [ebx + 0x1c] */
    fp_xch(4); /* 0x12031D36: fxch st(4) */
    { double _v = fp_pop(); _st[4] += _v; } /* 0x12031D38: faddp st(5) */
    fp_xch(4); /* 0x12031D3A: fxch st(4) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0x20) = _v; } /* 0x12031D3C: fstp dword ptr [ebx + 0x20] */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x12031D3F: fsubrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0x24) = _v; } /* 0x12031D41: fstp dword ptr [ebx + 0x24] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x12031D44: fld dword ptr [ebp - 8] */
    _st[0] *= _st[0]; /* 0x12031D47: fmul st(0), st(0) */
    _st[0] *= (double)*(float*)ADDR(ebp + (-0x14)); /* 0x12031D49: fmul dword ptr [ebp - 0x14] */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12031D4C: faddp st(2) */
    fp_xch(1); /* 0x12031D4E: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0x28) = _v; } /* 0x12031D50: fstp dword ptr [ebx + 0x28] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebx + 0x2C) = _v; } /* 0x12031D53: fst dword ptr [ebx + 0x2c] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebx + 0x30) = _v; } /* 0x12031D56: fst dword ptr [ebx + 0x30] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebx + 0x34) = _v; } /* 0x12031D59: fst dword ptr [ebx + 0x34] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0x38) = _v; } /* 0x12031D5C: fstp dword ptr [ebx + 0x38] */
    fp_push(1.0); /* 0x12031D5F: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0x3C) = _v; } /* 0x12031D61: fstp dword ptr [ebx + 0x3c] */
    ebx = POP32_VAL(esp); /* 0x12031D64: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x12031D65: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12031D6A: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12031D6B: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12031D73(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12031D73u);

L_12031D73:
    edi = edi; /* 0x12031D73: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12031D75: push ebp */
    ebp = esp; /* 0x12031D76: mov ebp, esp */
    PUSH32(esp, 1); /* 0x12031D78: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x12031D7A: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12031D7F: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x121CA104)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12031D8B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12031D8Bu);

L_12031D8B:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA104)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12031D96(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12031D96u);

L_12031D96:
    edi = edi; /* 0x12031D96: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12031D98: push ebp */
    ebp = esp; /* 0x12031D99: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x12031D9B: sub esp, 0x24 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0xC); /* 0x12031D9E: mov eax, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(eax)); /* 0x12031DA1: fld dword ptr [eax] */
    _st[0] += _st[0]; /* 0x12031DA3: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x12031DA5: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x12031DA8: fld dword ptr [eax + 4] */
    _st[0] += _st[0]; /* 0x12031DAB: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x12031DAD: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x12031DB0: fld dword ptr [eax + 8] */
    _st[0] += _st[0]; /* 0x12031DB3: fadd st(0), st(0) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x12031DB5: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(eax + 0xC)); /* 0x12031DB8: fld dword ptr [eax + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12031DBB: fld dword ptr [ebp + 0xc] */
    fp_push(_st[0]); /* 0x12031DBE: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12031DC0: fmulp st(2) */
    fp_xch(1); /* 0x12031DC2: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x12031DC4: fstp dword ptr [ebp - 0x24] */
    fp_push(*(float*)&MEM32(eax + 0xC)); /* 0x12031DC7: fld dword ptr [eax + 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x12031DCA: fld dword ptr [ebp - 4] */
    fp_push(_st[0]); /* 0x12031DCD: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12031DCF: fmulp st(2) */
    fp_xch(1); /* 0x12031DD1: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x12031DD3: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(eax + 0xC)); /* 0x12031DD6: fld dword ptr [eax + 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x12031DD9: fld dword ptr [ebp - 8] */
    fp_push(_st[0]); /* 0x12031DDC: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12031DDE: fmulp st(2) */
    fp_xch(1); /* 0x12031DE0: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x12031DE2: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(eax)); /* 0x12031DE5: fld dword ptr [eax] */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x12031DE7: fmulp st(3) */
    fp_xch(2); /* 0x12031DE9: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x12031DEB: fstp dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(eax)); /* 0x12031DEE: fld dword ptr [eax] */
    fp_push(_st[1]); /* 0x12031DF0: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12031DF2: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x12031DF4: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(eax)); /* 0x12031DF7: fld dword ptr [eax] */
    fp_push(_st[2]); /* 0x12031DF9: fld st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12031DFB: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x12031DFD: fstp dword ptr [ebp - 0x10] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x12031E00: fmul dword ptr [eax + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x12031E03: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x12031E06: fld dword ptr [eax + 4] */
    fp_push(_st[1]); /* 0x12031E09: fld st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12031E0B: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x12031E0D: fstp dword ptr [ebp - 0x20] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x8); /* 0x12031E10: fmul dword ptr [eax + 8] */
    eax = MEM32(ebp + 0x8); /* 0x12031E13: mov eax, dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x12031E16: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12031E19: fld dword ptr [ebp + 0xc] */
    fp_push(1.0); /* 0x12031E1C: fld1  */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x12031E1E: fsubrp st(1) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x12031E20: fld dword ptr [ebp - 8] */
    fp_push(_st[0]); /* 0x12031E23: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x12031E25: fsubp st(2) */
    fp_xch(1); /* 0x12031E27: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x12031E29: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x12031E2B: fld dword ptr [ebp - 4] */
    fp_push(_st[0]); /* 0x12031E2E: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x12031E30: fld dword ptr [ebp - 0xc] */
    fp_push(_st[0]); /* 0x12031E33: fld st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12031E35: faddp st(2) */
    fp_xch(1); /* 0x12031E37: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x12031E39: fstp dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x12031E3C: fld dword ptr [ebp - 0x10] */
    fp_push(_st[0]); /* 0x12031E3F: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x12031E41: fld dword ptr [ebp - 0x14] */
    fp_push(_st[0]); /* 0x12031E44: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x12031E46: fsubp st(2) */
    fp_xch(1); /* 0x12031E48: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x12031E4A: fstp dword ptr [eax + 8] */
    fp_push(0.0); /* 0x12031E4D: fldz  */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0xC) = _v; } /* 0x12031E4F: fst dword ptr [eax + 0xc] */
    fp_xch(4); /* 0x12031E52: fxch st(4) */
    { double _v = fp_pop(); _st[2] = _v - _st[2]; } /* 0x12031E54: fsubrp st(3) */
    fp_xch(2); /* 0x12031E56: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x10) = _v; } /* 0x12031E58: fstp dword ptr [eax + 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x12031E5B: fld dword ptr [ebp - 0x18] */
    fp_push(1.0); /* 0x12031E5E: fld1  */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x12031E60: fsubrp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x1C)) = _v; } /* 0x12031E62: fstp qword ptr [ebp - 0x1c] */
    fp_push(*(double*)ADDR(ebp + (-0x1C))); /* 0x12031E65: fld qword ptr [ebp - 0x1c] */
    fp_push(_st[0]); /* 0x12031E68: fld st(0) */
    { double _v = fp_pop(); _st[4] = _v - _st[4]; } /* 0x12031E6A: fsubrp st(5) */
    fp_xch(4); /* 0x12031E6C: fxch st(4) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x14) = _v; } /* 0x12031E6E: fstp dword ptr [eax + 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x12031E71: fld dword ptr [ebp - 0x20] */
    fp_push(_st[0]); /* 0x12031E74: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x12031E76: fld dword ptr [ebp - 0x24] */
    fp_push(_st[0]); /* 0x12031E79: fld st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12031E7B: faddp st(2) */
    fp_xch(1); /* 0x12031E7D: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x18) = _v; } /* 0x12031E7F: fstp dword ptr [eax + 0x18] */
    fp_xch(4); /* 0x12031E82: fxch st(4) */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x1C) = _v; } /* 0x12031E84: fst dword ptr [eax + 0x1c] */
    fp_xch(2); /* 0x12031E87: fxch st(2) */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x12031E89: faddp st(3) */
    fp_xch(2); /* 0x12031E8B: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x20) = _v; } /* 0x12031E8D: fstp dword ptr [eax + 0x20] */
    fp_xch(1); /* 0x12031E90: fxch st(1) */
    { double _v = fp_pop(); _st[1] = _v - _st[1]; } /* 0x12031E92: fsubrp st(2) */
    fp_xch(1); /* 0x12031E94: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x24) = _v; } /* 0x12031E96: fstp dword ptr [eax + 0x24] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12031E99: fld dword ptr [ebp + 0xc] */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x12031E9C: fsubp st(2) */
    fp_xch(1); /* 0x12031E9E: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x28) = _v; } /* 0x12031EA0: fstp dword ptr [eax + 0x28] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x2C) = _v; } /* 0x12031EA3: fst dword ptr [eax + 0x2c] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x30) = _v; } /* 0x12031EA6: fst dword ptr [eax + 0x30] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x34) = _v; } /* 0x12031EA9: fst dword ptr [eax + 0x34] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x38) = _v; } /* 0x12031EAC: fstp dword ptr [eax + 0x38] */
    fp_push(1.0); /* 0x12031EAF: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x3C) = _v; } /* 0x12031EB1: fstp dword ptr [eax + 0x3c] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12031EB4: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12031EB5: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12031EBD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12031EBDu);

L_12031EBD:
    edi = edi; /* 0x12031EBD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12031EBF: push ebp */
    ebp = esp; /* 0x12031EC0: mov ebp, esp */
    PUSH32(esp, 1); /* 0x12031EC2: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x12031EC4: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x12031EC9: fld dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x12031ECC: sub esp, 0xc */
    _flag_k = FK_CMP;
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x8) = _v; } /* 0x12031ECF: fstp dword ptr [esp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x12031ED3: fld dword ptr [ebp + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp + 0x4) = _v; } /* 0x12031ED6: fstp dword ptr [esp + 4] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12031EDA: fld dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x12031EDD: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12031EE0: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x121CA10C)); /* 0x12031EE3: call dword ptr [0x121ca10c] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12031EE9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x12031EEA: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_12031EF2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12031EF2u);

L_12031EF2:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA10C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12031EFD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12031EFDu);

L_12031EFD:
    edi = edi; /* 0x12031EFD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12031EFF: push ebp */
    ebp = esp; /* 0x12031F00: mov ebp, esp */
    PUSH32(esp, 1); /* 0x12031F02: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x12031F04: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12031F09: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x121CA108)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12031F15(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12031F15u);

L_12031F15:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA108)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12031F20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12031F20u);

L_12031F20:
    edi = edi; /* 0x12031F20: mov edi, edi */
    PUSH32(esp, ebx); /* 0x12031F22: push ebx */
    ebx = esp; /* 0x12031F23: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x12031F25: push ecx */
    PUSH32(esp, ecx); /* 0x12031F26: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x12031F27: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x12031F2A: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x12031F2D: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x12031F2E: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x12031F31: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x12031F35: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xD8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xD8u; /* 0x12031F37: sub esp, 0xd8 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x12031F3D: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x12031F42: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x12031F44: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebx + 0x14); /* 0x12031F47: mov eax, dword ptr [ebx + 0x14] */
    fp_push(0.0); /* 0x12031F4A: fldz  */
    ecx = MEM32(ebx + 0x10); /* 0x12031F4C: mov ecx, dword ptr [ebx + 0x10] */
    PUSH32(esp, esi); /* 0x12031F4F: push esi */
    esi = MEM32(ebx + 0x8); /* 0x12031F50: mov esi, dword ptr [ebx + 8] */
    PUSH32(esp, edi); /* 0x12031F53: push edi */
    edi = MEM32(ebx + 0x1C); /* 0x12031F54: mov edi, dword ptr [ebx + 0x1c] */
    /* test eax, eax */ /* 0x12031F57: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12032121; /* 0x12031F59: je 0x12032121 */
L_12031F5F:
    /* test ecx, ecx */ /* 0x12031F5F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1203208B; /* 0x12031F61: je 0x1203208b */
L_12031F67:
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x12031F67: fst dword ptr [ebp - 0x18] */
    PUSH32(esp, ecx); /* 0x12031F6A: push ecx */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x12031F6B: fst dword ptr [ebp - 0x1c] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x12031F6E: fst dword ptr [ebp - 0x20] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x12031F71: fst dword ptr [ebp - 0x24] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x12031F74: fst dword ptr [ebp - 0x2c] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x12031F77: fst dword ptr [ebp - 0x30] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x12031F7A: fst dword ptr [ebp - 0x34] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x12031F7D: fst dword ptr [ebp - 0x38] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x12031F80: fst dword ptr [ebp - 0x40] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x12031F83: fst dword ptr [ebp - 0x44] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x48)) = _v; } /* 0x12031F86: fst dword ptr [ebp - 0x48] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4C)) = _v; } /* 0x12031F89: fstp dword ptr [ebp - 0x4c] */
    fp_push(*(float*)&MEM32(eax)); /* 0x12031F8C: fld dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x12031F8E: fstp dword ptr [ebp - 0x50] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x12031F91: fld dword ptr [eax + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x12031F94: fstp dword ptr [ebp - 0x3c] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x12031F97: fld dword ptr [eax + 8] */
    eax = ebp + (-0x90); /* 0x12031F9A: lea eax, [ebp - 0x90] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x12031FA0: fstp dword ptr [ebp - 0x28] */
    PUSH32(esp, eax); /* 0x12031FA3: push eax */
    fp_push(1.0); /* 0x12031FA4: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x12031FA6: fstp dword ptr [ebp - 0x14] */
    RECOMP_CALL(sub_12031D8B); /* 0x12031FA9: call 0x12031d8b */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebx + 0xC), 0 */ /* 0x12031FAE: cmp dword ptr [ebx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebx + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = ebp + (-0x90); /* 0x12031FB2: lea eax, [ebp - 0x90] */
    PUSH32(esp, eax); /* 0x12031FB8: push eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12032067; /* 0x12031FB9: je 0x12032067 */
L_12031FBF:
    eax = ebp + (-0xD0); /* 0x12031FBF: lea eax, [ebp - 0xd0] */
    PUSH32(esp, eax); /* 0x12031FC5: push eax */
    RECOMP_CALL(sub_12031174); /* 0x12031FC6: call 0x12031174 */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x12031FCB: fldz  */
    eax = MEM32(ebx + 0xC); /* 0x12031FCD: mov eax, dword ptr [ebx + 0xc] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x38) = _v; } /* 0x12031FD0: fst dword ptr [esi + 0x38] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x34) = _v; } /* 0x12031FD3: fst dword ptr [esi + 0x34] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x30) = _v; } /* 0x12031FD6: fst dword ptr [esi + 0x30] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x2C) = _v; } /* 0x12031FD9: fst dword ptr [esi + 0x2c] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x24) = _v; } /* 0x12031FDC: fst dword ptr [esi + 0x24] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x20) = _v; } /* 0x12031FDF: fst dword ptr [esi + 0x20] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x1C) = _v; } /* 0x12031FE2: fst dword ptr [esi + 0x1c] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x18) = _v; } /* 0x12031FE5: fst dword ptr [esi + 0x18] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x10) = _v; } /* 0x12031FE8: fst dword ptr [esi + 0x10] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0xC) = _v; } /* 0x12031FEB: fst dword ptr [esi + 0xc] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x8) = _v; } /* 0x12031FEE: fst dword ptr [esi + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x12031FF1: fstp dword ptr [esi + 4] */
    fp_push(1.0); /* 0x12031FF4: fld1  */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x3C) = _v; } /* 0x12031FF6: fst dword ptr [esi + 0x3c] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x28) = _v; } /* 0x12031FF9: fst dword ptr [esi + 0x28] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x14) = _v; } /* 0x12031FFC: fst dword ptr [esi + 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x12031FFF: fstp dword ptr [esi] */
    fp_push(*(float*)&MEM32(eax)); /* 0x12032001: fld dword ptr [eax] */
    fp_push(0.0); /* 0x12032003: fldz  */
    fp_push(_st[0]); /* 0x12032005: fld st(0) */
    { double _v = fp_pop(); _st[1] = _v - _st[1]; } /* 0x12032007: fsubrp st(2) */
    fp_xch(1); /* 0x12032009: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x30) = _v; } /* 0x1203200B: fstp dword ptr [esi + 0x30] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1203200E: fld dword ptr [eax + 4] */
    fp_push(_st[1]); /* 0x12032011: fld st(1) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x12032013: fsubrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x34) = _v; } /* 0x12032015: fstp dword ptr [esi + 0x34] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x8); /* 0x12032018: fsub dword ptr [eax + 8] */
    eax = ebp + (-0xD0); /* 0x1203201B: lea eax, [ebp - 0xd0] */
    PUSH32(esp, eax); /* 0x12032021: push eax */
    PUSH32(esp, esi); /* 0x12032022: push esi */
    PUSH32(esp, esi); /* 0x12032023: push esi */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x38) = _v; } /* 0x12032024: fstp dword ptr [esi + 0x38] */
    RECOMP_CALL(sub_12030F00); /* 0x12032027: call 0x12030f00 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x50); /* 0x1203202C: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x1203202F: push eax */
    PUSH32(esp, esi); /* 0x12032030: push esi */
    PUSH32(esp, esi); /* 0x12032031: push esi */
    RECOMP_CALL(sub_12030F00); /* 0x12032032: call 0x12030f00 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x90); /* 0x12032037: lea eax, [ebp - 0x90] */
    PUSH32(esp, eax); /* 0x1203203D: push eax */
    PUSH32(esp, esi); /* 0x1203203E: push esi */
    PUSH32(esp, esi); /* 0x1203203F: push esi */
    RECOMP_CALL(sub_12030F00); /* 0x12032040: call 0x12030f00 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0xC); /* 0x12032045: mov eax, dword ptr [ebx + 0xc] */
    fp_push(*(float*)&MEM32(eax)); /* 0x12032048: fld dword ptr [eax] */
    _st[0] += (double)*(float*)ADDR(esi + 0x30); /* 0x1203204A: fadd dword ptr [esi + 0x30] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x30) = _v; } /* 0x1203204D: fstp dword ptr [esi + 0x30] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x12032050: fld dword ptr [eax + 4] */
    _st[0] += (double)*(float*)ADDR(esi + 0x34); /* 0x12032053: fadd dword ptr [esi + 0x34] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x34) = _v; } /* 0x12032056: fstp dword ptr [esi + 0x34] */
    fp_push(*(float*)&MEM32(esi + 0x38)); /* 0x12032059: fld dword ptr [esi + 0x38] */
    _st[0] += (double)*(float*)ADDR(eax + 0x8); /* 0x1203205C: fadd dword ptr [eax + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x38) = _v; } /* 0x1203205F: fstp dword ptr [esi + 0x38] */
    goto L_12032152; /* 0x12032062: jmp 0x12032152 */
L_12032067:
    PUSH32(esp, esi); /* 0x12032067: push esi */
    RECOMP_CALL(sub_12031174); /* 0x12032068: call 0x12031174 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x50); /* 0x1203206D: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x12032070: push eax */
    PUSH32(esp, esi); /* 0x12032071: push esi */
    PUSH32(esp, esi); /* 0x12032072: push esi */
    RECOMP_CALL(sub_12030F00); /* 0x12032073: call 0x12030f00 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x90); /* 0x12032078: lea eax, [ebp - 0x90] */
    PUSH32(esp, eax); /* 0x1203207E: push eax */
    PUSH32(esp, esi); /* 0x1203207F: push esi */
    PUSH32(esp, esi); /* 0x12032080: push esi */
    RECOMP_CALL(sub_12030F00); /* 0x12032081: call 0x12030f00 */
    RECOMP_FLAGS_IN();
    goto L_12032152; /* 0x12032086: jmp 0x12032152 */
L_1203208B:
    ecx = MEM32(ebx + 0xC); /* 0x1203208B: mov ecx, dword ptr [ebx + 0xc] */
    /* test ecx, ecx */ /* 0x1203208E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120320E6; /* 0x12032090: je 0x120320e6 */
L_12032092:
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x2C) = _v; } /* 0x12032092: fst dword ptr [esi + 0x2c] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x24) = _v; } /* 0x12032095: fst dword ptr [esi + 0x24] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x20) = _v; } /* 0x12032098: fst dword ptr [esi + 0x20] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x1C) = _v; } /* 0x1203209B: fst dword ptr [esi + 0x1c] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x18) = _v; } /* 0x1203209E: fst dword ptr [esi + 0x18] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x10) = _v; } /* 0x120320A1: fst dword ptr [esi + 0x10] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0xC) = _v; } /* 0x120320A4: fst dword ptr [esi + 0xc] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x8) = _v; } /* 0x120320A7: fst dword ptr [esi + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x120320AA: fstp dword ptr [esi + 4] */
    fp_push(*(float*)&MEM32(eax)); /* 0x120320AD: fld dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x120320AF: fstp dword ptr [esi] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x120320B1: fld dword ptr [eax + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x14) = _v; } /* 0x120320B4: fstp dword ptr [esi + 0x14] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x120320B7: fld dword ptr [eax + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x28) = _v; } /* 0x120320BA: fstp dword ptr [esi + 0x28] */
    fp_push(*(float*)&MEM32(eax)); /* 0x120320BD: fld dword ptr [eax] */
    fp_push(1.0); /* 0x120320BF: fld1  */
    fp_push(_st[0]); /* 0x120320C1: fld st(0) */
    { double _v = fp_pop(); _st[1] = _v - _st[1]; } /* 0x120320C3: fsubrp st(2) */
    fp_push(*(float*)&MEM32(ecx)); /* 0x120320C5: fld dword ptr [ecx] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120320C7: fmulp st(2) */
    fp_xch(1); /* 0x120320C9: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x30) = _v; } /* 0x120320CB: fstp dword ptr [esi + 0x30] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x120320CE: fld dword ptr [eax + 4] */
    fp_push(_st[1]); /* 0x120320D1: fld st(1) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x120320D3: fsubrp st(1) */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x4); /* 0x120320D5: fmul dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x34) = _v; } /* 0x120320D8: fstp dword ptr [esi + 0x34] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x8); /* 0x120320DB: fsub dword ptr [eax + 8] */
    _st[0] *= (double)*(float*)ADDR(ecx + 0x8); /* 0x120320DE: fmul dword ptr [ecx + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x38) = _v; } /* 0x120320E1: fstp dword ptr [esi + 0x38] */
    goto L_1203211A; /* 0x120320E4: jmp 0x1203211a */
L_120320E6:
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x38) = _v; } /* 0x120320E6: fst dword ptr [esi + 0x38] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x34) = _v; } /* 0x120320E9: fst dword ptr [esi + 0x34] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x30) = _v; } /* 0x120320EC: fst dword ptr [esi + 0x30] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x2C) = _v; } /* 0x120320EF: fst dword ptr [esi + 0x2c] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x24) = _v; } /* 0x120320F2: fst dword ptr [esi + 0x24] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x20) = _v; } /* 0x120320F5: fst dword ptr [esi + 0x20] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x1C) = _v; } /* 0x120320F8: fst dword ptr [esi + 0x1c] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x18) = _v; } /* 0x120320FB: fst dword ptr [esi + 0x18] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x10) = _v; } /* 0x120320FE: fst dword ptr [esi + 0x10] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0xC) = _v; } /* 0x12032101: fst dword ptr [esi + 0xc] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x8) = _v; } /* 0x12032104: fst dword ptr [esi + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x12032107: fstp dword ptr [esi + 4] */
    fp_push(*(float*)&MEM32(eax)); /* 0x1203210A: fld dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x1203210C: fstp dword ptr [esi] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x1203210E: fld dword ptr [eax + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x14) = _v; } /* 0x12032111: fstp dword ptr [esi + 0x14] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x12032114: fld dword ptr [eax + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x28) = _v; } /* 0x12032117: fstp dword ptr [esi + 0x28] */
L_1203211A:
    fp_push(1.0); /* 0x1203211A: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x3C) = _v; } /* 0x1203211C: fstp dword ptr [esi + 0x3c] */
    goto L_12032152; /* 0x1203211F: jmp 0x12032152 */
L_12032121:
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x38) = _v; } /* 0x12032121: fst dword ptr [esi + 0x38] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x34) = _v; } /* 0x12032124: fst dword ptr [esi + 0x34] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x30) = _v; } /* 0x12032127: fst dword ptr [esi + 0x30] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x2C) = _v; } /* 0x1203212A: fst dword ptr [esi + 0x2c] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x24) = _v; } /* 0x1203212D: fst dword ptr [esi + 0x24] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x20) = _v; } /* 0x12032130: fst dword ptr [esi + 0x20] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x1C) = _v; } /* 0x12032133: fst dword ptr [esi + 0x1c] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x18) = _v; } /* 0x12032136: fst dword ptr [esi + 0x18] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x10) = _v; } /* 0x12032139: fst dword ptr [esi + 0x10] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0xC) = _v; } /* 0x1203213C: fst dword ptr [esi + 0xc] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x8) = _v; } /* 0x1203213F: fst dword ptr [esi + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x12032142: fstp dword ptr [esi + 4] */
    fp_push(1.0); /* 0x12032145: fld1  */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x3C) = _v; } /* 0x12032147: fst dword ptr [esi + 0x3c] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x28) = _v; } /* 0x1203214A: fst dword ptr [esi + 0x28] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x14) = _v; } /* 0x1203214D: fst dword ptr [esi + 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x12032150: fstp dword ptr [esi] */
L_12032152:
    /* test edi, edi */ /* 0x12032152: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120321B3; /* 0x12032154: je 0x120321b3 */
L_12032156:
    PUSH32(esp, edi); /* 0x12032156: push edi */
    eax = ebp + (-0x90); /* 0x12032157: lea eax, [ebp - 0x90] */
    PUSH32(esp, eax); /* 0x1203215D: push eax */
    RECOMP_CALL(sub_12031D8B); /* 0x1203215E: call 0x12031d8b */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebx + 0x18); /* 0x12032163: mov edi, dword ptr [ebx + 0x18] */
    eax = ebp + (-0x90); /* 0x12032166: lea eax, [ebp - 0x90] */
    PUSH32(esp, eax); /* 0x1203216C: push eax */
    PUSH32(esp, esi); /* 0x1203216D: push esi */
    PUSH32(esp, esi); /* 0x1203216E: push esi */
    /* test edi, edi */ /* 0x1203216F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120321AE; /* 0x12032171: je 0x120321ae */
L_12032173:
    fp_push(*(float*)&MEM32(esi + 0x30)); /* 0x12032173: fld dword ptr [esi + 0x30] */
    _st[0] -= (double)*(float*)ADDR(edi); /* 0x12032176: fsub dword ptr [edi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x30) = _v; } /* 0x12032178: fstp dword ptr [esi + 0x30] */
    fp_push(*(float*)&MEM32(esi + 0x34)); /* 0x1203217B: fld dword ptr [esi + 0x34] */
    _st[0] -= (double)*(float*)ADDR(edi + 0x4); /* 0x1203217E: fsub dword ptr [edi + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x34) = _v; } /* 0x12032181: fstp dword ptr [esi + 0x34] */
    fp_push(*(float*)&MEM32(esi + 0x38)); /* 0x12032184: fld dword ptr [esi + 0x38] */
    _st[0] -= (double)*(float*)ADDR(edi + 0x8); /* 0x12032187: fsub dword ptr [edi + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x38) = _v; } /* 0x1203218A: fstp dword ptr [esi + 0x38] */
    RECOMP_CALL(sub_12030F00); /* 0x1203218D: call 0x12030f00 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(esi + 0x30)); /* 0x12032192: fld dword ptr [esi + 0x30] */
    _st[0] += (double)*(float*)ADDR(edi); /* 0x12032195: fadd dword ptr [edi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x30) = _v; } /* 0x12032197: fstp dword ptr [esi + 0x30] */
    fp_push(*(float*)&MEM32(esi + 0x34)); /* 0x1203219A: fld dword ptr [esi + 0x34] */
    _st[0] += (double)*(float*)ADDR(edi + 0x4); /* 0x1203219D: fadd dword ptr [edi + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x34) = _v; } /* 0x120321A0: fstp dword ptr [esi + 0x34] */
    fp_push(*(float*)&MEM32(esi + 0x38)); /* 0x120321A3: fld dword ptr [esi + 0x38] */
    _st[0] += (double)*(float*)ADDR(edi + 0x8); /* 0x120321A6: fadd dword ptr [edi + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x38) = _v; } /* 0x120321A9: fstp dword ptr [esi + 0x38] */
    goto L_120321B3; /* 0x120321AC: jmp 0x120321b3 */
L_120321AE:
    RECOMP_CALL(sub_12030F00); /* 0x120321AE: call 0x12030f00 */
    RECOMP_FLAGS_IN();
L_120321B3:
    eax = MEM32(ebx + 0x20); /* 0x120321B3: mov eax, dword ptr [ebx + 0x20] */
    /* test eax, eax */ /* 0x120321B6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120321D4; /* 0x120321B8: je 0x120321d4 */
L_120321BA:
    fp_push(*(float*)&MEM32(esi + 0x30)); /* 0x120321BA: fld dword ptr [esi + 0x30] */
    _st[0] += (double)*(float*)ADDR(eax); /* 0x120321BD: fadd dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x30) = _v; } /* 0x120321BF: fstp dword ptr [esi + 0x30] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x120321C2: fld dword ptr [eax + 4] */
    _st[0] += (double)*(float*)ADDR(esi + 0x34); /* 0x120321C5: fadd dword ptr [esi + 0x34] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x34) = _v; } /* 0x120321C8: fstp dword ptr [esi + 0x34] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x120321CB: fld dword ptr [eax + 8] */
    _st[0] += (double)*(float*)ADDR(esi + 0x38); /* 0x120321CE: fadd dword ptr [esi + 0x38] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x38) = _v; } /* 0x120321D1: fstp dword ptr [esi + 0x38] */
L_120321D4:
    ecx = MEM32(ebp + (-0x4)); /* 0x120321D4: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x120321D7: pop edi */
    eax = esi; /* 0x120321D8: mov eax, esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120321DA: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x120321DC: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x120321DD: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x120321E2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x120321E4: pop ebp */
    esp = ebx; /* 0x120321E5: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x120321E7: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x120321E8: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_120321F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120321F0u);

L_120321F0:
    edi = edi; /* 0x120321F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120321F2: push ebp */
    ebp = esp; /* 0x120321F3: mov ebp, esp */
    PUSH32(esp, 1); /* 0x120321F5: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x120321F7: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x120321FC: fld dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x120321FF: push dword ptr [ebp + 0x20] */
    PUSH32(esp, ecx); /* 0x12032202: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x12032203: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x12032206: push dword ptr [ebp + 0x18] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x12032209: fld dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x1203220C: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x1203220F: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x12032210: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12032213: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12032216: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x121CA188)); /* 0x12032219: call dword ptr [0x121ca188] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1203221F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x12032220: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_12032228(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12032228u);

L_12032228:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA188)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12032233(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12032233u);

L_12032233:
    edi = edi; /* 0x12032233: mov edi, edi */
    PUSH32(esp, ebx); /* 0x12032235: push ebx */
    ebx = esp; /* 0x12032236: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x12032238: push ecx */
    PUSH32(esp, ecx); /* 0x12032239: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x1203223A: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x1203223D: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x12032240: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x12032241: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x12032244: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x12032248: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xD8u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xD8u; /* 0x1203224A: sub esp, 0xd8 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x12032250: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x12032255: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x12032257: mov dword ptr [ebp - 4], eax */
    ecx = MEM32(ebx + 0x14); /* 0x1203225A: mov ecx, dword ptr [ebx + 0x14] */
    fp_push(0.0); /* 0x1203225D: fldz  */
    PUSH32(esp, esi); /* 0x1203225F: push esi */
    esi = MEM32(ebx + 0x8); /* 0x12032260: mov esi, dword ptr [ebx + 8] */
    PUSH32(esp, edi); /* 0x12032263: push edi */
    /* test ecx, ecx */ /* 0x12032264: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1203241C; /* 0x12032266: je 0x1203241c */
L_1203226C:
    fp_push(*(float*)&MEM32(ebx + 0x10)); /* 0x1203226C: fld dword ptr [ebx + 0x10] */
    fp_push(_st[0]); /* 0x1203226F: fld st(0) */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x12032271: fucomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12032273: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x12032275: fstp st(1) */
    /* test HI8(eax), 0x44u */ /* 0x12032277: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1203238E; /* 0x1203227A: jnp 0x1203238e */
L_12032280:
    fp_push(0.0); /* 0x12032280: fldz  */
    PUSH32(esp, ecx); /* 0x12032282: push ecx */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x12032283: fst dword ptr [ebp - 0x18] */
    eax = ebp + (-0x90); /* 0x12032286: lea eax, [ebp - 0x90] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x1203228C: fst dword ptr [ebp - 0x1c] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x1203228F: fst dword ptr [ebp - 0x20] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x12032292: fst dword ptr [ebp - 0x24] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x12032295: fst dword ptr [ebp - 0x2c] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x30)) = _v; } /* 0x12032298: fst dword ptr [ebp - 0x30] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x34)) = _v; } /* 0x1203229B: fst dword ptr [ebp - 0x34] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x38)) = _v; } /* 0x1203229E: fst dword ptr [ebp - 0x38] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x40)) = _v; } /* 0x120322A1: fst dword ptr [ebp - 0x40] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x44)) = _v; } /* 0x120322A4: fst dword ptr [ebp - 0x44] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x48)) = _v; } /* 0x120322A7: fst dword ptr [ebp - 0x48] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4C)) = _v; } /* 0x120322AA: fstp dword ptr [ebp - 0x4c] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x120322AD: fld dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x50)) = _v; } /* 0x120322AF: fstp dword ptr [ebp - 0x50] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x120322B2: fld dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x3C)) = _v; } /* 0x120322B5: fstp dword ptr [ebp - 0x3c] */
    fp_push(1.0); /* 0x120322B8: fld1  */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x120322BA: fst dword ptr [ebp - 0x28] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x120322BD: fstp dword ptr [ebp - 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x120322C0: fstp dword ptr [esp] */
    PUSH32(esp, eax); /* 0x120322C3: push eax */
    RECOMP_CALL(sub_12031B98); /* 0x120322C4: call 0x12031b98 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebx + 0xC); /* 0x120322C9: mov edi, dword ptr [ebx + 0xc] */
    eax = ebp + (-0x90); /* 0x120322CC: lea eax, [ebp - 0x90] */
    PUSH32(esp, eax); /* 0x120322D2: push eax */
    /* test edi, edi */ /* 0x120322D3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1203236A; /* 0x120322D5: je 0x1203236a */
L_120322DB:
    eax = ebp + (-0xD0); /* 0x120322DB: lea eax, [ebp - 0xd0] */
    PUSH32(esp, eax); /* 0x120322E1: push eax */
    RECOMP_CALL(sub_12031174); /* 0x120322E2: call 0x12031174 */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x120322E7: fldz  */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x38) = _v; } /* 0x120322E9: fst dword ptr [esi + 0x38] */
    eax = ebp + (-0xD0); /* 0x120322EC: lea eax, [ebp - 0xd0] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x34) = _v; } /* 0x120322F2: fst dword ptr [esi + 0x34] */
    PUSH32(esp, eax); /* 0x120322F5: push eax */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x30) = _v; } /* 0x120322F6: fst dword ptr [esi + 0x30] */
    PUSH32(esp, esi); /* 0x120322F9: push esi */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x2C) = _v; } /* 0x120322FA: fst dword ptr [esi + 0x2c] */
    PUSH32(esp, esi); /* 0x120322FD: push esi */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x24) = _v; } /* 0x120322FE: fst dword ptr [esi + 0x24] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x20) = _v; } /* 0x12032301: fst dword ptr [esi + 0x20] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x1C) = _v; } /* 0x12032304: fst dword ptr [esi + 0x1c] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x18) = _v; } /* 0x12032307: fst dword ptr [esi + 0x18] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x10) = _v; } /* 0x1203230A: fst dword ptr [esi + 0x10] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0xC) = _v; } /* 0x1203230D: fst dword ptr [esi + 0xc] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x8) = _v; } /* 0x12032310: fst dword ptr [esi + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x12032313: fstp dword ptr [esi + 4] */
    fp_push(1.0); /* 0x12032316: fld1  */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x3C) = _v; } /* 0x12032318: fst dword ptr [esi + 0x3c] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x28) = _v; } /* 0x1203231B: fst dword ptr [esi + 0x28] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x14) = _v; } /* 0x1203231E: fst dword ptr [esi + 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x12032321: fstp dword ptr [esi] */
    fp_push(*(float*)&MEM32(edi)); /* 0x12032323: fld dword ptr [edi] */
    fp_push(0.0); /* 0x12032325: fldz  */
    fp_push(_st[0]); /* 0x12032327: fld st(0) */
    { double _v = fp_pop(); _st[1] = _v - _st[1]; } /* 0x12032329: fsubrp st(2) */
    fp_xch(1); /* 0x1203232B: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x30) = _v; } /* 0x1203232D: fstp dword ptr [esi + 0x30] */
    _st[0] -= (double)*(float*)ADDR(edi + 0x4); /* 0x12032330: fsub dword ptr [edi + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x34) = _v; } /* 0x12032333: fstp dword ptr [esi + 0x34] */
    RECOMP_CALL(sub_12030F00); /* 0x12032336: call 0x12030f00 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x50); /* 0x1203233B: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x1203233E: push eax */
    PUSH32(esp, esi); /* 0x1203233F: push esi */
    PUSH32(esp, esi); /* 0x12032340: push esi */
    RECOMP_CALL(sub_12030F00); /* 0x12032341: call 0x12030f00 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x90); /* 0x12032346: lea eax, [ebp - 0x90] */
    PUSH32(esp, eax); /* 0x1203234C: push eax */
    PUSH32(esp, esi); /* 0x1203234D: push esi */
    PUSH32(esp, esi); /* 0x1203234E: push esi */
    RECOMP_CALL(sub_12030F00); /* 0x1203234F: call 0x12030f00 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(edi)); /* 0x12032354: fld dword ptr [edi] */
    _st[0] += (double)*(float*)ADDR(esi + 0x30); /* 0x12032356: fadd dword ptr [esi + 0x30] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x30) = _v; } /* 0x12032359: fstp dword ptr [esi + 0x30] */
    fp_push(*(float*)&MEM32(esi + 0x34)); /* 0x1203235C: fld dword ptr [esi + 0x34] */
    _st[0] += (double)*(float*)ADDR(edi + 0x4); /* 0x1203235F: fadd dword ptr [edi + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x34) = _v; } /* 0x12032362: fstp dword ptr [esi + 0x34] */
    goto L_12032451; /* 0x12032365: jmp 0x12032451 */
L_1203236A:
    PUSH32(esp, esi); /* 0x1203236A: push esi */
    RECOMP_CALL(sub_12031174); /* 0x1203236B: call 0x12031174 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x50); /* 0x12032370: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x12032373: push eax */
    PUSH32(esp, esi); /* 0x12032374: push esi */
    PUSH32(esp, esi); /* 0x12032375: push esi */
    RECOMP_CALL(sub_12030F00); /* 0x12032376: call 0x12030f00 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x90); /* 0x1203237B: lea eax, [ebp - 0x90] */
    PUSH32(esp, eax); /* 0x12032381: push eax */
    PUSH32(esp, esi); /* 0x12032382: push esi */
    PUSH32(esp, esi); /* 0x12032383: push esi */
    RECOMP_CALL(sub_12030F00); /* 0x12032384: call 0x12030f00 */
    RECOMP_FLAGS_IN();
    goto L_12032451; /* 0x12032389: jmp 0x12032451 */
L_1203238E:
    eax = MEM32(ebx + 0xC); /* 0x1203238E: mov eax, dword ptr [ebx + 0xc] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12032391: fstp st(0) */
    fp_push(0.0); /* 0x12032393: fldz  */
    /* test eax, eax */ /* 0x12032395: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120323E4; /* 0x12032397: je 0x120323e4 */
L_12032399:
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x2C) = _v; } /* 0x12032399: fst dword ptr [esi + 0x2c] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x24) = _v; } /* 0x1203239C: fst dword ptr [esi + 0x24] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x20) = _v; } /* 0x1203239F: fst dword ptr [esi + 0x20] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x1C) = _v; } /* 0x120323A2: fst dword ptr [esi + 0x1c] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x18) = _v; } /* 0x120323A5: fst dword ptr [esi + 0x18] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x10) = _v; } /* 0x120323A8: fst dword ptr [esi + 0x10] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0xC) = _v; } /* 0x120323AB: fst dword ptr [esi + 0xc] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x8) = _v; } /* 0x120323AE: fst dword ptr [esi + 8] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x4) = _v; } /* 0x120323B1: fst dword ptr [esi + 4] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x120323B4: fld dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x120323B6: fstp dword ptr [esi] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x120323B8: fld dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x14) = _v; } /* 0x120323BB: fstp dword ptr [esi + 0x14] */
    fp_push(1.0); /* 0x120323BE: fld1  */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x28) = _v; } /* 0x120323C0: fst dword ptr [esi + 0x28] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x120323C3: fld dword ptr [ecx] */
    fp_push(1.0); /* 0x120323C5: fld1  */
    fp_push(_st[0]); /* 0x120323C7: fld st(0) */
    { double _v = fp_pop(); _st[1] = _v - _st[1]; } /* 0x120323C9: fsubrp st(2) */
    fp_push(*(float*)&MEM32(eax)); /* 0x120323CB: fld dword ptr [eax] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120323CD: fmulp st(2) */
    fp_xch(1); /* 0x120323CF: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x30) = _v; } /* 0x120323D1: fstp dword ptr [esi + 0x30] */
    _st[0] -= (double)*(float*)ADDR(ecx + 0x4); /* 0x120323D4: fsub dword ptr [ecx + 4] */
    _st[0] *= (double)*(float*)ADDR(eax + 0x4); /* 0x120323D7: fmul dword ptr [eax + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x34) = _v; } /* 0x120323DA: fstp dword ptr [esi + 0x34] */
    fp_xch(1); /* 0x120323DD: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x38) = _v; } /* 0x120323DF: fstp dword ptr [esi + 0x38] */
    goto L_12032417; /* 0x120323E2: jmp 0x12032417 */
L_120323E4:
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x38) = _v; } /* 0x120323E4: fst dword ptr [esi + 0x38] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x34) = _v; } /* 0x120323E7: fst dword ptr [esi + 0x34] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x30) = _v; } /* 0x120323EA: fst dword ptr [esi + 0x30] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x2C) = _v; } /* 0x120323ED: fst dword ptr [esi + 0x2c] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x24) = _v; } /* 0x120323F0: fst dword ptr [esi + 0x24] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x20) = _v; } /* 0x120323F3: fst dword ptr [esi + 0x20] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x1C) = _v; } /* 0x120323F6: fst dword ptr [esi + 0x1c] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x18) = _v; } /* 0x120323F9: fst dword ptr [esi + 0x18] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x10) = _v; } /* 0x120323FC: fst dword ptr [esi + 0x10] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0xC) = _v; } /* 0x120323FF: fst dword ptr [esi + 0xc] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x8) = _v; } /* 0x12032402: fst dword ptr [esi + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x12032405: fstp dword ptr [esi + 4] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x12032408: fld dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x1203240A: fstp dword ptr [esi] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x1203240C: fld dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x14) = _v; } /* 0x1203240F: fstp dword ptr [esi + 0x14] */
    fp_push(1.0); /* 0x12032412: fld1  */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x28) = _v; } /* 0x12032414: fst dword ptr [esi + 0x28] */
L_12032417:
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x3C) = _v; } /* 0x12032417: fstp dword ptr [esi + 0x3c] */
    goto L_12032451; /* 0x1203241A: jmp 0x12032451 */
L_1203241C:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1203241C: fstp st(0) */
    fp_push(0.0); /* 0x1203241E: fldz  */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x38) = _v; } /* 0x12032420: fst dword ptr [esi + 0x38] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x34) = _v; } /* 0x12032423: fst dword ptr [esi + 0x34] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x30) = _v; } /* 0x12032426: fst dword ptr [esi + 0x30] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x2C) = _v; } /* 0x12032429: fst dword ptr [esi + 0x2c] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x24) = _v; } /* 0x1203242C: fst dword ptr [esi + 0x24] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x20) = _v; } /* 0x1203242F: fst dword ptr [esi + 0x20] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x1C) = _v; } /* 0x12032432: fst dword ptr [esi + 0x1c] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x18) = _v; } /* 0x12032435: fst dword ptr [esi + 0x18] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x10) = _v; } /* 0x12032438: fst dword ptr [esi + 0x10] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0xC) = _v; } /* 0x1203243B: fst dword ptr [esi + 0xc] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x8) = _v; } /* 0x1203243E: fst dword ptr [esi + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x12032441: fstp dword ptr [esi + 4] */
    fp_push(1.0); /* 0x12032444: fld1  */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x3C) = _v; } /* 0x12032446: fst dword ptr [esi + 0x3c] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x28) = _v; } /* 0x12032449: fst dword ptr [esi + 0x28] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x14) = _v; } /* 0x1203244C: fst dword ptr [esi + 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x1203244F: fstp dword ptr [esi] */
L_12032451:
    fp_push(*(float*)&MEM32(ebx + 0x1C)); /* 0x12032451: fld dword ptr [ebx + 0x1c] */
    fp_push(_st[0]); /* 0x12032454: fld st(0) */
    fp_push(0.0); /* 0x12032456: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12032458: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1203245A: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1203245C: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_120324B1; /* 0x1203245F: jnp 0x120324b1 */
L_12032461:
    PUSH32(esp, ecx); /* 0x12032461: push ecx */
    eax = ebp + (-0x90); /* 0x12032462: lea eax, [ebp - 0x90] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x12032468: fstp dword ptr [esp] */
    PUSH32(esp, eax); /* 0x1203246B: push eax */
    RECOMP_CALL(sub_12031B98); /* 0x1203246C: call 0x12031b98 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebx + 0x18); /* 0x12032471: mov edi, dword ptr [ebx + 0x18] */
    eax = ebp + (-0x90); /* 0x12032474: lea eax, [ebp - 0x90] */
    PUSH32(esp, eax); /* 0x1203247A: push eax */
    PUSH32(esp, esi); /* 0x1203247B: push esi */
    PUSH32(esp, esi); /* 0x1203247C: push esi */
    /* test edi, edi */ /* 0x1203247D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120324AA; /* 0x1203247F: je 0x120324aa */
L_12032481:
    fp_push(*(float*)&MEM32(esi + 0x30)); /* 0x12032481: fld dword ptr [esi + 0x30] */
    _st[0] -= (double)*(float*)ADDR(edi); /* 0x12032484: fsub dword ptr [edi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x30) = _v; } /* 0x12032486: fstp dword ptr [esi + 0x30] */
    fp_push(*(float*)&MEM32(esi + 0x34)); /* 0x12032489: fld dword ptr [esi + 0x34] */
    _st[0] -= (double)*(float*)ADDR(edi + 0x4); /* 0x1203248C: fsub dword ptr [edi + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x34) = _v; } /* 0x1203248F: fstp dword ptr [esi + 0x34] */
    RECOMP_CALL(sub_12030F00); /* 0x12032492: call 0x12030f00 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(edi)); /* 0x12032497: fld dword ptr [edi] */
    _st[0] += (double)*(float*)ADDR(esi + 0x30); /* 0x12032499: fadd dword ptr [esi + 0x30] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x30) = _v; } /* 0x1203249C: fstp dword ptr [esi + 0x30] */
    fp_push(*(float*)&MEM32(esi + 0x34)); /* 0x1203249F: fld dword ptr [esi + 0x34] */
    _st[0] += (double)*(float*)ADDR(edi + 0x4); /* 0x120324A2: fadd dword ptr [edi + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x34) = _v; } /* 0x120324A5: fstp dword ptr [esi + 0x34] */
    goto L_120324B3; /* 0x120324A8: jmp 0x120324b3 */
L_120324AA:
    RECOMP_CALL(sub_12030F00); /* 0x120324AA: call 0x12030f00 */
    RECOMP_FLAGS_IN();
    goto L_120324B3; /* 0x120324AF: jmp 0x120324b3 */
L_120324B1:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120324B1: fstp st(0) */
L_120324B3:
    eax = MEM32(ebx + 0x20); /* 0x120324B3: mov eax, dword ptr [ebx + 0x20] */
    /* test eax, eax */ /* 0x120324B6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120324CB; /* 0x120324B8: je 0x120324cb */
L_120324BA:
    fp_push(*(float*)&MEM32(esi + 0x30)); /* 0x120324BA: fld dword ptr [esi + 0x30] */
    _st[0] += (double)*(float*)ADDR(eax); /* 0x120324BD: fadd dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x30) = _v; } /* 0x120324BF: fstp dword ptr [esi + 0x30] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x120324C2: fld dword ptr [eax + 4] */
    _st[0] += (double)*(float*)ADDR(esi + 0x34); /* 0x120324C5: fadd dword ptr [esi + 0x34] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x34) = _v; } /* 0x120324C8: fstp dword ptr [esi + 0x34] */
L_120324CB:
    ecx = MEM32(ebp + (-0x4)); /* 0x120324CB: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x120324CE: pop edi */
    eax = esi; /* 0x120324CF: mov eax, esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120324D1: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x120324D3: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x120324D4: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x120324D9: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x120324DB: pop ebp */
    esp = ebx; /* 0x120324DC: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x120324DE: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x120324DF: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_120324E7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120324E7u);

L_120324E7:
    edi = edi; /* 0x120324E7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120324E9: push ebp */
    ebp = esp; /* 0x120324EA: mov ebp, esp */
    PUSH32(esp, 1); /* 0x120324EC: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x120324EE: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x120324F3: fld dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120324F6: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120324F9: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120324FC: push dword ptr [ebp + 0x10] */
    PUSH32(esp, ecx); /* 0x120324FF: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x12032500: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12032503: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x121CA110)); /* 0x12032506: call dword ptr [0x121ca110] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x1203250C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1203250D: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_12032515(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12032515u);

L_12032515:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA110)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12032520(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12032520u);

L_12032520:
    edi = edi; /* 0x12032520: mov edi, edi */
    PUSH32(esp, ebx); /* 0x12032522: push ebx */
    ebx = esp; /* 0x12032523: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x12032525: push ecx */
    PUSH32(esp, ecx); /* 0x12032526: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x12032527: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x1203252A: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x1203252D: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x1203252E: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x12032531: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x12032535: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x58u; /* 0x12032537: sub esp, 0x58 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x1203253A: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1203253F: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x12032541: mov dword ptr [ebp - 4], eax */
    fp_push(0.0); /* 0x12032544: fldz  */
    eax = MEM32(ebx + 0x14); /* 0x12032546: mov eax, dword ptr [ebx + 0x14] */
    PUSH32(esp, esi); /* 0x12032549: push esi */
    esi = MEM32(ebx + 0x8); /* 0x1203254A: mov esi, dword ptr [ebx + 8] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x38) = _v; } /* 0x1203254D: fst dword ptr [esi + 0x38] */
    PUSH32(esp, edi); /* 0x12032550: push edi */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x34) = _v; } /* 0x12032551: fst dword ptr [esi + 0x34] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x30) = _v; } /* 0x12032554: fst dword ptr [esi + 0x30] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x2C) = _v; } /* 0x12032557: fst dword ptr [esi + 0x2c] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x24) = _v; } /* 0x1203255A: fst dword ptr [esi + 0x24] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x20) = _v; } /* 0x1203255D: fst dword ptr [esi + 0x20] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x1C) = _v; } /* 0x12032560: fst dword ptr [esi + 0x1c] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x18) = _v; } /* 0x12032563: fst dword ptr [esi + 0x18] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x10) = _v; } /* 0x12032566: fst dword ptr [esi + 0x10] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0xC) = _v; } /* 0x12032569: fst dword ptr [esi + 0xc] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x8) = _v; } /* 0x1203256C: fst dword ptr [esi + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x1203256F: fstp dword ptr [esi + 4] */
    fp_push(*(float*)&MEM32(ebx + 0xC)); /* 0x12032572: fld dword ptr [ebx + 0xc] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi) = _v; } /* 0x12032575: fst dword ptr [esi] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x14) = _v; } /* 0x12032577: fst dword ptr [esi + 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x28) = _v; } /* 0x1203257A: fstp dword ptr [esi + 0x28] */
    fp_push(1.0); /* 0x1203257D: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x3C) = _v; } /* 0x1203257F: fstp dword ptr [esi + 0x3c] */
    /* test eax, eax */ /* 0x12032582: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120325DD; /* 0x12032584: je 0x120325dd */
L_12032586:
    PUSH32(esp, eax); /* 0x12032586: push eax */
    eax = ebp + (-0x50); /* 0x12032587: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x1203258A: push eax */
    RECOMP_CALL(sub_12031D8B); /* 0x1203258B: call 0x12031d8b */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebx + 0x10); /* 0x12032590: mov edi, dword ptr [ebx + 0x10] */
    eax = ebp + (-0x50); /* 0x12032593: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x12032596: push eax */
    PUSH32(esp, esi); /* 0x12032597: push esi */
    PUSH32(esp, esi); /* 0x12032598: push esi */
    /* test edi, edi */ /* 0x12032599: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120325D8; /* 0x1203259B: je 0x120325d8 */
L_1203259D:
    fp_push(*(float*)&MEM32(esi + 0x30)); /* 0x1203259D: fld dword ptr [esi + 0x30] */
    _st[0] -= (double)*(float*)ADDR(edi); /* 0x120325A0: fsub dword ptr [edi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x30) = _v; } /* 0x120325A2: fstp dword ptr [esi + 0x30] */
    fp_push(*(float*)&MEM32(esi + 0x34)); /* 0x120325A5: fld dword ptr [esi + 0x34] */
    _st[0] -= (double)*(float*)ADDR(edi + 0x4); /* 0x120325A8: fsub dword ptr [edi + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x34) = _v; } /* 0x120325AB: fstp dword ptr [esi + 0x34] */
    fp_push(*(float*)&MEM32(esi + 0x38)); /* 0x120325AE: fld dword ptr [esi + 0x38] */
    _st[0] -= (double)*(float*)ADDR(edi + 0x8); /* 0x120325B1: fsub dword ptr [edi + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x38) = _v; } /* 0x120325B4: fstp dword ptr [esi + 0x38] */
    RECOMP_CALL(sub_12030F00); /* 0x120325B7: call 0x12030f00 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(edi)); /* 0x120325BC: fld dword ptr [edi] */
    _st[0] += (double)*(float*)ADDR(esi + 0x30); /* 0x120325BE: fadd dword ptr [esi + 0x30] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x30) = _v; } /* 0x120325C1: fstp dword ptr [esi + 0x30] */
    fp_push(*(float*)&MEM32(esi + 0x34)); /* 0x120325C4: fld dword ptr [esi + 0x34] */
    _st[0] += (double)*(float*)ADDR(edi + 0x4); /* 0x120325C7: fadd dword ptr [edi + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x34) = _v; } /* 0x120325CA: fstp dword ptr [esi + 0x34] */
    fp_push(*(float*)&MEM32(edi + 0x8)); /* 0x120325CD: fld dword ptr [edi + 8] */
    _st[0] += (double)*(float*)ADDR(esi + 0x38); /* 0x120325D0: fadd dword ptr [esi + 0x38] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x38) = _v; } /* 0x120325D3: fstp dword ptr [esi + 0x38] */
    goto L_120325DD; /* 0x120325D6: jmp 0x120325dd */
L_120325D8:
    RECOMP_CALL(sub_12030F00); /* 0x120325D8: call 0x12030f00 */
    RECOMP_FLAGS_IN();
L_120325DD:
    eax = MEM32(ebx + 0x18); /* 0x120325DD: mov eax, dword ptr [ebx + 0x18] */
    /* test eax, eax */ /* 0x120325E0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120325FE; /* 0x120325E2: je 0x120325fe */
L_120325E4:
    fp_push(*(float*)&MEM32(eax)); /* 0x120325E4: fld dword ptr [eax] */
    _st[0] += (double)*(float*)ADDR(esi + 0x30); /* 0x120325E6: fadd dword ptr [esi + 0x30] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x30) = _v; } /* 0x120325E9: fstp dword ptr [esi + 0x30] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x120325EC: fld dword ptr [eax + 4] */
    _st[0] += (double)*(float*)ADDR(esi + 0x34); /* 0x120325EF: fadd dword ptr [esi + 0x34] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x34) = _v; } /* 0x120325F2: fstp dword ptr [esi + 0x34] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x120325F5: fld dword ptr [eax + 8] */
    _st[0] += (double)*(float*)ADDR(esi + 0x38); /* 0x120325F8: fadd dword ptr [esi + 0x38] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x38) = _v; } /* 0x120325FB: fstp dword ptr [esi + 0x38] */
L_120325FE:
    ecx = MEM32(ebp + (-0x4)); /* 0x120325FE: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x12032601: pop edi */
    eax = esi; /* 0x12032602: mov eax, esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x12032604: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x12032606: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x12032607: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x1203260C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1203260E: pop ebp */
    esp = ebx; /* 0x1203260F: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x12032611: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x12032612: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_1203261A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1203261Au);

L_1203261A:
    edi = edi; /* 0x1203261A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1203261C: push ebp */
    ebp = esp; /* 0x1203261D: mov ebp, esp */
    PUSH32(esp, 1); /* 0x1203261F: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x12032621: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x12032626: fld dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x12032629: push dword ptr [ebp + 0x18] */
    PUSH32(esp, ecx); /* 0x1203262C: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x1203262D: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x12032630: push dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12032633: fld dword ptr [ebp + 0xc] */
    PUSH32(esp, ecx); /* 0x12032636: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x12032637: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1203263A: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(0x121CA18C)); /* 0x1203263D: call dword ptr [0x121ca18c] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12032643: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x12032644: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_1203264C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1203264Cu);

L_1203264C:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA18C)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12032657(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12032657u);

L_12032657:
    edi = edi; /* 0x12032657: mov edi, edi */
    PUSH32(esp, ebx); /* 0x12032659: push ebx */
    ebx = esp; /* 0x1203265A: mov ebx, esp */
    PUSH32(esp, ecx); /* 0x1203265C: push ecx */
    PUSH32(esp, ecx); /* 0x1203265D: push ecx */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFFFFFFF0u);
    esp = esp & 0xFFFFFFF0u; /* 0x1203265E: and esp, 0xfffffff0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 4; /* 0x12032661: add esp, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebp); /* 0x12032664: push ebp */
    ebp = MEM32(ebx + 0x4); /* 0x12032665: mov ebp, dword ptr [ebx + 4] */
    MEM32(esp + 0x4) = ebp; /* 0x12032668: mov dword ptr [esp + 4], ebp */
    ebp = esp; /* 0x1203266C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x58u; /* 0x1203266E: sub esp, 0x58 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x12032671: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x12032676: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x12032678: mov dword ptr [ebp - 4], eax */
    fp_push(0.0); /* 0x1203267B: fldz  */
    PUSH32(esp, esi); /* 0x1203267D: push esi */
    esi = MEM32(ebx + 0x8); /* 0x1203267E: mov esi, dword ptr [ebx + 8] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x38) = _v; } /* 0x12032681: fst dword ptr [esi + 0x38] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x34) = _v; } /* 0x12032684: fst dword ptr [esi + 0x34] */
    PUSH32(esp, edi); /* 0x12032687: push edi */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x30) = _v; } /* 0x12032688: fst dword ptr [esi + 0x30] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x2C) = _v; } /* 0x1203268B: fst dword ptr [esi + 0x2c] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x24) = _v; } /* 0x1203268E: fst dword ptr [esi + 0x24] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x20) = _v; } /* 0x12032691: fst dword ptr [esi + 0x20] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x1C) = _v; } /* 0x12032694: fst dword ptr [esi + 0x1c] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x18) = _v; } /* 0x12032697: fst dword ptr [esi + 0x18] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x10) = _v; } /* 0x1203269A: fst dword ptr [esi + 0x10] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0xC) = _v; } /* 0x1203269D: fst dword ptr [esi + 0xc] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x8) = _v; } /* 0x120326A0: fst dword ptr [esi + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x4) = _v; } /* 0x120326A3: fstp dword ptr [esi + 4] */
    fp_push(*(float*)&MEM32(ebx + 0xC)); /* 0x120326A6: fld dword ptr [ebx + 0xc] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi) = _v; } /* 0x120326A9: fst dword ptr [esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x14) = _v; } /* 0x120326AB: fstp dword ptr [esi + 0x14] */
    fp_push(1.0); /* 0x120326AE: fld1  */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x28) = _v; } /* 0x120326B0: fst dword ptr [esi + 0x28] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x3C) = _v; } /* 0x120326B3: fstp dword ptr [esi + 0x3c] */
    fp_push(*(float*)&MEM32(ebx + 0x14)); /* 0x120326B6: fld dword ptr [ebx + 0x14] */
    fp_push(_st[0]); /* 0x120326B9: fld st(0) */
    fp_push(0.0); /* 0x120326BB: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120326BD: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120326BF: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x120326C1: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_12032710; /* 0x120326C4: jnp 0x12032710 */
L_120326C6:
    PUSH32(esp, ecx); /* 0x120326C6: push ecx */
    eax = ebp + (-0x50); /* 0x120326C7: lea eax, [ebp - 0x50] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x120326CA: fstp dword ptr [esp] */
    PUSH32(esp, eax); /* 0x120326CD: push eax */
    RECOMP_CALL(sub_12031B98); /* 0x120326CE: call 0x12031b98 */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebx + 0x10); /* 0x120326D3: mov edi, dword ptr [ebx + 0x10] */
    eax = ebp + (-0x50); /* 0x120326D6: lea eax, [ebp - 0x50] */
    PUSH32(esp, eax); /* 0x120326D9: push eax */
    PUSH32(esp, esi); /* 0x120326DA: push esi */
    PUSH32(esp, esi); /* 0x120326DB: push esi */
    /* test edi, edi */ /* 0x120326DC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12032709; /* 0x120326DE: je 0x12032709 */
L_120326E0:
    fp_push(*(float*)&MEM32(esi + 0x30)); /* 0x120326E0: fld dword ptr [esi + 0x30] */
    _st[0] -= (double)*(float*)ADDR(edi); /* 0x120326E3: fsub dword ptr [edi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x30) = _v; } /* 0x120326E5: fstp dword ptr [esi + 0x30] */
    fp_push(*(float*)&MEM32(esi + 0x34)); /* 0x120326E8: fld dword ptr [esi + 0x34] */
    _st[0] -= (double)*(float*)ADDR(edi + 0x4); /* 0x120326EB: fsub dword ptr [edi + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x34) = _v; } /* 0x120326EE: fstp dword ptr [esi + 0x34] */
    RECOMP_CALL(sub_12030F00); /* 0x120326F1: call 0x12030f00 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(edi)); /* 0x120326F6: fld dword ptr [edi] */
    _st[0] += (double)*(float*)ADDR(esi + 0x30); /* 0x120326F8: fadd dword ptr [esi + 0x30] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x30) = _v; } /* 0x120326FB: fstp dword ptr [esi + 0x30] */
    fp_push(*(float*)&MEM32(edi + 0x4)); /* 0x120326FE: fld dword ptr [edi + 4] */
    _st[0] += (double)*(float*)ADDR(esi + 0x34); /* 0x12032701: fadd dword ptr [esi + 0x34] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x34) = _v; } /* 0x12032704: fstp dword ptr [esi + 0x34] */
    goto L_12032712; /* 0x12032707: jmp 0x12032712 */
L_12032709:
    RECOMP_CALL(sub_12030F00); /* 0x12032709: call 0x12030f00 */
    RECOMP_FLAGS_IN();
    goto L_12032712; /* 0x1203270E: jmp 0x12032712 */
L_12032710:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12032710: fstp st(0) */
L_12032712:
    eax = MEM32(ebx + 0x18); /* 0x12032712: mov eax, dword ptr [ebx + 0x18] */
    /* test eax, eax */ /* 0x12032715: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1203272A; /* 0x12032717: je 0x1203272a */
L_12032719:
    fp_push(*(float*)&MEM32(eax)); /* 0x12032719: fld dword ptr [eax] */
    _st[0] += (double)*(float*)ADDR(esi + 0x30); /* 0x1203271B: fadd dword ptr [esi + 0x30] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x30) = _v; } /* 0x1203271E: fstp dword ptr [esi + 0x30] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x12032721: fld dword ptr [eax + 4] */
    _st[0] += (double)*(float*)ADDR(esi + 0x34); /* 0x12032724: fadd dword ptr [esi + 0x34] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x34) = _v; } /* 0x12032727: fstp dword ptr [esi + 0x34] */
L_1203272A:
    ecx = MEM32(ebp + (-0x4)); /* 0x1203272A: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x1203272D: pop edi */
    eax = esi; /* 0x1203272E: mov eax, esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x12032730: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x12032732: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x12032733: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x12032738: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x1203273A: pop ebp */
    esp = ebx; /* 0x1203273B: mov esp, ebx */
    ebx = POP32_VAL(esp); /* 0x1203273D: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1203273E: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_12032746(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12032746u);

L_12032746:
    edi = edi; /* 0x12032746: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12032748: push ebp */
    ebp = esp; /* 0x12032749: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x1203274B: sub esp, 0x2c */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x1203274E: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x12032753: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x12032755: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x12032758: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x1203275B: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1203275C: mov ebx, dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebx)); /* 0x1203275F: fld dword ptr [ebx] */
    MEM32(ebp + (-0x20)) = eax; /* 0x12032761: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(ebp + 0x10); /* 0x12032764: mov eax, dword ptr [ebp + 0x10] */
    _st[0] -= (double)*(float*)ADDR(eax); /* 0x12032767: fsub dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12032769: push esi */
    esi = MEM32(ebp + 0x14); /* 0x1203276A: mov esi, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x1203276D: push edi */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x1203276E: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(ebx + 0x4)); /* 0x12032771: fld dword ptr [ebx + 4] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x4); /* 0x12032774: fsub dword ptr [eax + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x12032777: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebx + 0x8)); /* 0x1203277A: fld dword ptr [ebx + 8] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x8); /* 0x1203277D: fsub dword ptr [eax + 8] */
    eax = ebp + (-0x10); /* 0x12032780: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x12032783: push eax */
    PUSH32(esp, eax); /* 0x12032784: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x12032785: fstp dword ptr [ebp - 8] */
    RECOMP_CALL(sub_120301D9); /* 0x12032788: call 0x120301d9 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x1203278D: fld dword ptr [ebp - 8] */
    edi = ebp + (-0x1C); /* 0x12032790: lea edi, [ebp - 0x1c] */
    fp_push(_st[0]); /* 0x12032793: fld st(0) */
    eax = ebp + (-0x1C); /* 0x12032795: lea eax, [ebp - 0x1c] */
    _st[0] *= (double)*(float*)ADDR(esi + 0x4); /* 0x12032798: fmul dword ptr [esi + 4] */
    PUSH32(esp, eax); /* 0x1203279B: push eax */
    fp_push(*(float*)&MEM32(esi + 0x8)); /* 0x1203279C: fld dword ptr [esi + 8] */
    PUSH32(esp, eax); /* 0x1203279F: push eax */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x120327A0: fld dword ptr [ebp - 0xc] */
    fp_push(_st[0]); /* 0x120327A3: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120327A5: fmulp st(2) */
    fp_xch(2); /* 0x120327A7: fxch st(2) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x120327A9: fsubrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x120327AB: fstp dword ptr [ebp - 0x2c] */
    fp_push(*(float*)&MEM32(esi + 0x8)); /* 0x120327AE: fld dword ptr [esi + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x120327B1: fld dword ptr [ebp - 0x10] */
    fp_push(_st[0]); /* 0x120327B4: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120327B6: fmulp st(2) */
    fp_push(*(float*)&MEM32(esi)); /* 0x120327B8: fld dword ptr [esi] */
    { double _v = fp_pop(); _st[3] *= _v; } /* 0x120327BA: fmulp st(4) */
    fp_xch(1); /* 0x120327BC: fxch st(1) */
    { double _v = fp_pop(); _st[2] = _v - _st[2]; } /* 0x120327BE: fsubrp st(3) */
    fp_xch(2); /* 0x120327C0: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x120327C2: fstp dword ptr [ebp - 0x28] */
    _st[0] *= (double)*(float*)ADDR(esi); /* 0x120327C5: fmul dword ptr [esi] */
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x120327C7: fld dword ptr [esi + 4] */
    esi = ebp + (-0x2C); /* 0x120327CA: lea esi, [ebp - 0x2c] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120327CD: fmulp st(2) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x120327CF: fsubrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x120327D1: fstp dword ptr [ebp - 0x24] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120327D4: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120327D5: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120327D6: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_120301D9); /* 0x120327D7: call 0x120301d9 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x120327DC: fld dword ptr [ebp - 0xc] */
    fp_push(_st[0]); /* 0x120327DF: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x120327E1: fld dword ptr [ebp - 0x14] */
    fp_push(_st[0]); /* 0x120327E4: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120327E6: fmulp st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x120327E8: fld dword ptr [ebp - 8] */
    fp_push(_st[0]); /* 0x120327EB: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x120327ED: fld dword ptr [ebp - 0x18] */
    fp_push(_st[0]); /* 0x120327F0: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120327F2: fmulp st(2) */
    fp_xch(4); /* 0x120327F4: fxch st(4) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x120327F6: fsubrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x120327F8: fstp dword ptr [ebp - 0x2c] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x120327FB: fld dword ptr [ebp - 0x1c] */
    fp_push(_st[0]); /* 0x120327FE: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12032800: fmulp st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x12032802: fld dword ptr [ebp - 0x10] */
    fp_push(_st[0]); /* 0x12032805: fld st(0) */
    fp_push(_st[4]); /* 0x12032807: fld st(4) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12032809: fmulp st(1) */
    { double _v = fp_pop(); _st[2] -= _v; } /* 0x1203280B: fsubp st(3) */
    fp_xch(2); /* 0x1203280D: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x1203280F: fstp dword ptr [ebp - 0x28] */
    fp_push(_st[1]); /* 0x12032812: fld st(1) */
    fp_push(_st[4]); /* 0x12032814: fld st(4) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12032816: fmulp st(1) */
    eax = MEM32(ebp + (-0x20)); /* 0x12032818: mov eax, dword ptr [ebp - 0x20] */
    fp_push(_st[5]); /* 0x1203281B: fld st(5) */
    fp_push(_st[2]); /* 0x1203281D: fld st(2) */
    ecx = MEM32(ebp + (-0x4)); /* 0x1203281F: mov ecx, dword ptr [ebp - 4] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12032822: fmulp st(1) */
    edi = POP32_VAL(esp); /* 0x12032824: pop edi */
    esi = POP32_VAL(esp); /* 0x12032825: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x12032826: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x12032828: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x1203282A: fstp dword ptr [ebp - 0x24] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax) = _v; } /* 0x1203282D: fst dword ptr [eax] */
    fp_xch(3); /* 0x1203282F: fxch st(3) */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x10) = _v; } /* 0x12032831: fst dword ptr [eax + 0x10] */
    fp_xch(2); /* 0x12032834: fxch st(2) */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x20) = _v; } /* 0x12032836: fst dword ptr [eax + 0x20] */
    fp_push(*(float*)&MEM32(ebx)); /* 0x12032839: fld dword ptr [ebx] */
    { double _v = fp_pop(); _st[3] *= _v; } /* 0x1203283B: fmulp st(4) */
    fp_push(*(float*)&MEM32(ebx + 0x4)); /* 0x1203283D: fld dword ptr [ebx + 4] */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x12032840: fmulp st(3) */
    fp_xch(3); /* 0x12032842: fxch st(3) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12032844: faddp st(2) */
    fp_push(*(float*)&MEM32(ebx + 0x8)); /* 0x12032846: fld dword ptr [ebx + 8] */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x12032849: fmulp st(3) */
    fp_xch(1); /* 0x1203284B: fxch st(1) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x1203284D: faddp st(2) */
    fp_xch(1); /* 0x1203284F: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x12032851: fstp dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x12032854: fld dword ptr [ebp - 0x20] */
    _st[0] = -_st[0]; /* 0x12032857: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x30) = _v; } /* 0x12032859: fstp dword ptr [eax + 0x30] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x1203285C: fld dword ptr [ebp - 0x2c] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x4) = _v; } /* 0x1203285F: fst dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x12032862: fld dword ptr [ebp - 0x28] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x14) = _v; } /* 0x12032865: fst dword ptr [eax + 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x12032868: fld dword ptr [ebp - 0x24] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x24) = _v; } /* 0x1203286B: fst dword ptr [eax + 0x24] */
    fp_push(*(float*)&MEM32(ebx)); /* 0x1203286E: fld dword ptr [ebx] */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x12032870: fmulp st(3) */
    fp_push(*(float*)&MEM32(ebx + 0x4)); /* 0x12032872: fld dword ptr [ebx + 4] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12032875: fmulp st(2) */
    fp_xch(2); /* 0x12032877: fxch st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12032879: faddp st(1) */
    fp_push(*(float*)&MEM32(ebx + 0x8)); /* 0x1203287B: fld dword ptr [ebx + 8] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x1203287E: fmulp st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12032880: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x12032882: fstp dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x12032885: fld dword ptr [ebp - 0x20] */
    _st[0] = -_st[0]; /* 0x12032888: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x34) = _v; } /* 0x1203288A: fstp dword ptr [eax + 0x34] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x8) = _v; } /* 0x1203288D: fst dword ptr [eax + 8] */
    fp_xch(1); /* 0x12032890: fxch st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x18) = _v; } /* 0x12032892: fst dword ptr [eax + 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x12032895: fld dword ptr [ebp - 8] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x28) = _v; } /* 0x12032898: fst dword ptr [eax + 0x28] */
    fp_push(*(float*)&MEM32(ebx)); /* 0x1203289B: fld dword ptr [ebx] */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x1203289D: fmulp st(3) */
    fp_push(*(float*)&MEM32(ebx + 0x4)); /* 0x1203289F: fld dword ptr [ebx + 4] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120328A2: fmulp st(2) */
    fp_xch(2); /* 0x120328A4: fxch st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120328A6: faddp st(1) */
    fp_push(*(float*)&MEM32(ebx + 0x8)); /* 0x120328A8: fld dword ptr [ebx + 8] */
    ebx = POP32_VAL(esp); /* 0x120328AB: pop ebx */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x120328AC: fmulp st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x120328AE: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x120328B0: fstp dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x120328B3: fld dword ptr [ebp - 0x20] */
    _st[0] = -_st[0]; /* 0x120328B6: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x38) = _v; } /* 0x120328B8: fstp dword ptr [eax + 0x38] */
    fp_push(0.0); /* 0x120328BB: fldz  */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0xC) = _v; } /* 0x120328BD: fst dword ptr [eax + 0xc] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x1C) = _v; } /* 0x120328C0: fst dword ptr [eax + 0x1c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x2C) = _v; } /* 0x120328C3: fstp dword ptr [eax + 0x2c] */
    fp_push(1.0); /* 0x120328C6: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x3C) = _v; } /* 0x120328C8: fstp dword ptr [eax + 0x3c] */
    RECOMP_CALL(sub_121BECF5); /* 0x120328CB: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120328D0: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120328D1: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120328D9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120328D9u);

L_120328D9:
    edi = edi; /* 0x120328D9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120328DB: push ebp */
    ebp = esp; /* 0x120328DC: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x120328DE: sub esp, 0x2c */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120328E1: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120328E6: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120328E8: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x120328EB: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x120328EE: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x120328EF: mov ebx, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x20)) = eax; /* 0x120328F2: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(ebp + 0x10); /* 0x120328F5: mov eax, dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(eax)); /* 0x120328F8: fld dword ptr [eax] */
    PUSH32(esp, esi); /* 0x120328FA: push esi */
    _st[0] -= (double)*(float*)ADDR(ebx); /* 0x120328FB: fsub dword ptr [ebx] */
    esi = MEM32(ebp + 0x14); /* 0x120328FD: mov esi, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x12032900: push edi */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x12032901: fstp dword ptr [ebp - 0x10] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x12032904: fld dword ptr [eax + 4] */
    _st[0] -= (double)*(float*)ADDR(ebx + 0x4); /* 0x12032907: fsub dword ptr [ebx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x1203290A: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x1203290D: fld dword ptr [eax + 8] */
    eax = ebp + (-0x10); /* 0x12032910: lea eax, [ebp - 0x10] */
    _st[0] -= (double)*(float*)ADDR(ebx + 0x8); /* 0x12032913: fsub dword ptr [ebx + 8] */
    PUSH32(esp, eax); /* 0x12032916: push eax */
    PUSH32(esp, eax); /* 0x12032917: push eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x12032918: fstp dword ptr [ebp - 8] */
    RECOMP_CALL(sub_120301D9); /* 0x1203291B: call 0x120301d9 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x12032920: fld dword ptr [ebp - 8] */
    edi = ebp + (-0x1C); /* 0x12032923: lea edi, [ebp - 0x1c] */
    fp_push(_st[0]); /* 0x12032926: fld st(0) */
    eax = ebp + (-0x1C); /* 0x12032928: lea eax, [ebp - 0x1c] */
    _st[0] *= (double)*(float*)ADDR(esi + 0x4); /* 0x1203292B: fmul dword ptr [esi + 4] */
    PUSH32(esp, eax); /* 0x1203292E: push eax */
    fp_push(*(float*)&MEM32(esi + 0x8)); /* 0x1203292F: fld dword ptr [esi + 8] */
    PUSH32(esp, eax); /* 0x12032932: push eax */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x12032933: fld dword ptr [ebp - 0xc] */
    fp_push(_st[0]); /* 0x12032936: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12032938: fmulp st(2) */
    fp_xch(2); /* 0x1203293A: fxch st(2) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x1203293C: fsubrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x1203293E: fstp dword ptr [ebp - 0x2c] */
    fp_push(*(float*)&MEM32(esi + 0x8)); /* 0x12032941: fld dword ptr [esi + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x12032944: fld dword ptr [ebp - 0x10] */
    fp_push(_st[0]); /* 0x12032947: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12032949: fmulp st(2) */
    fp_push(*(float*)&MEM32(esi)); /* 0x1203294B: fld dword ptr [esi] */
    { double _v = fp_pop(); _st[3] *= _v; } /* 0x1203294D: fmulp st(4) */
    fp_xch(1); /* 0x1203294F: fxch st(1) */
    { double _v = fp_pop(); _st[2] = _v - _st[2]; } /* 0x12032951: fsubrp st(3) */
    fp_xch(2); /* 0x12032953: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x12032955: fstp dword ptr [ebp - 0x28] */
    _st[0] *= (double)*(float*)ADDR(esi); /* 0x12032958: fmul dword ptr [esi] */
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x1203295A: fld dword ptr [esi + 4] */
    esi = ebp + (-0x2C); /* 0x1203295D: lea esi, [ebp - 0x2c] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12032960: fmulp st(2) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x12032962: fsubrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x12032964: fstp dword ptr [ebp - 0x24] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12032967: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12032968: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12032969: movsd dword ptr es:[edi], dword ptr [esi] */
    RECOMP_CALL(sub_120301D9); /* 0x1203296A: call 0x120301d9 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x1203296F: fld dword ptr [ebp - 0xc] */
    fp_push(_st[0]); /* 0x12032972: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x12032974: fld dword ptr [ebp - 0x14] */
    fp_push(_st[0]); /* 0x12032977: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12032979: fmulp st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x1203297B: fld dword ptr [ebp - 8] */
    fp_push(_st[0]); /* 0x1203297E: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x12032980: fld dword ptr [ebp - 0x18] */
    fp_push(_st[0]); /* 0x12032983: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12032985: fmulp st(2) */
    fp_xch(4); /* 0x12032987: fxch st(4) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x12032989: fsubrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x2C)) = _v; } /* 0x1203298B: fstp dword ptr [ebp - 0x2c] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x1203298E: fld dword ptr [ebp - 0x1c] */
    fp_push(_st[0]); /* 0x12032991: fld st(0) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12032993: fmulp st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x12032995: fld dword ptr [ebp - 0x10] */
    fp_push(_st[0]); /* 0x12032998: fld st(0) */
    fp_push(_st[4]); /* 0x1203299A: fld st(4) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x1203299C: fmulp st(1) */
    { double _v = fp_pop(); _st[2] -= _v; } /* 0x1203299E: fsubp st(3) */
    fp_xch(2); /* 0x120329A0: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x28)) = _v; } /* 0x120329A2: fstp dword ptr [ebp - 0x28] */
    fp_push(_st[1]); /* 0x120329A5: fld st(1) */
    fp_push(_st[4]); /* 0x120329A7: fld st(4) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120329A9: fmulp st(1) */
    eax = MEM32(ebp + (-0x20)); /* 0x120329AB: mov eax, dword ptr [ebp - 0x20] */
    fp_push(_st[5]); /* 0x120329AE: fld st(5) */
    fp_push(_st[2]); /* 0x120329B0: fld st(2) */
    ecx = MEM32(ebp + (-0x4)); /* 0x120329B2: mov ecx, dword ptr [ebp - 4] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x120329B5: fmulp st(1) */
    edi = POP32_VAL(esp); /* 0x120329B7: pop edi */
    esi = POP32_VAL(esp); /* 0x120329B8: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120329B9: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x120329BB: fsubp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x24)) = _v; } /* 0x120329BD: fstp dword ptr [ebp - 0x24] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax) = _v; } /* 0x120329C0: fst dword ptr [eax] */
    fp_xch(3); /* 0x120329C2: fxch st(3) */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x10) = _v; } /* 0x120329C4: fst dword ptr [eax + 0x10] */
    fp_xch(2); /* 0x120329C7: fxch st(2) */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x20) = _v; } /* 0x120329C9: fst dword ptr [eax + 0x20] */
    fp_push(*(float*)&MEM32(ebx)); /* 0x120329CC: fld dword ptr [ebx] */
    { double _v = fp_pop(); _st[3] *= _v; } /* 0x120329CE: fmulp st(4) */
    fp_push(*(float*)&MEM32(ebx + 0x4)); /* 0x120329D0: fld dword ptr [ebx + 4] */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x120329D3: fmulp st(3) */
    fp_xch(3); /* 0x120329D5: fxch st(3) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x120329D7: faddp st(2) */
    fp_push(*(float*)&MEM32(ebx + 0x8)); /* 0x120329D9: fld dword ptr [ebx + 8] */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x120329DC: fmulp st(3) */
    fp_xch(1); /* 0x120329DE: fxch st(1) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x120329E0: faddp st(2) */
    fp_xch(1); /* 0x120329E2: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x120329E4: fstp dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x120329E7: fld dword ptr [ebp - 0x20] */
    _st[0] = -_st[0]; /* 0x120329EA: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x30) = _v; } /* 0x120329EC: fstp dword ptr [eax + 0x30] */
    fp_push(*(float*)&MEM32(ebp + (-0x2C))); /* 0x120329EF: fld dword ptr [ebp - 0x2c] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x4) = _v; } /* 0x120329F2: fst dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x28))); /* 0x120329F5: fld dword ptr [ebp - 0x28] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x14) = _v; } /* 0x120329F8: fst dword ptr [eax + 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x24))); /* 0x120329FB: fld dword ptr [ebp - 0x24] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x24) = _v; } /* 0x120329FE: fst dword ptr [eax + 0x24] */
    fp_push(*(float*)&MEM32(ebx)); /* 0x12032A01: fld dword ptr [ebx] */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x12032A03: fmulp st(3) */
    fp_push(*(float*)&MEM32(ebx + 0x4)); /* 0x12032A05: fld dword ptr [ebx + 4] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12032A08: fmulp st(2) */
    fp_xch(2); /* 0x12032A0A: fxch st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12032A0C: faddp st(1) */
    fp_push(*(float*)&MEM32(ebx + 0x8)); /* 0x12032A0E: fld dword ptr [ebx + 8] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12032A11: fmulp st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12032A13: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x12032A15: fstp dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x12032A18: fld dword ptr [ebp - 0x20] */
    _st[0] = -_st[0]; /* 0x12032A1B: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x34) = _v; } /* 0x12032A1D: fstp dword ptr [eax + 0x34] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x8) = _v; } /* 0x12032A20: fst dword ptr [eax + 8] */
    fp_xch(1); /* 0x12032A23: fxch st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x18) = _v; } /* 0x12032A25: fst dword ptr [eax + 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x12032A28: fld dword ptr [ebp - 8] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x28) = _v; } /* 0x12032A2B: fst dword ptr [eax + 0x28] */
    fp_push(*(float*)&MEM32(ebx)); /* 0x12032A2E: fld dword ptr [ebx] */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x12032A30: fmulp st(3) */
    fp_push(*(float*)&MEM32(ebx + 0x4)); /* 0x12032A32: fld dword ptr [ebx + 4] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12032A35: fmulp st(2) */
    fp_xch(2); /* 0x12032A37: fxch st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12032A39: faddp st(1) */
    fp_push(*(float*)&MEM32(ebx + 0x8)); /* 0x12032A3B: fld dword ptr [ebx + 8] */
    ebx = POP32_VAL(esp); /* 0x12032A3E: pop ebx */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12032A3F: fmulp st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12032A41: faddp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x12032A43: fstp dword ptr [ebp - 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x20))); /* 0x12032A46: fld dword ptr [ebp - 0x20] */
    _st[0] = -_st[0]; /* 0x12032A49: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x38) = _v; } /* 0x12032A4B: fstp dword ptr [eax + 0x38] */
    fp_push(0.0); /* 0x12032A4E: fldz  */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0xC) = _v; } /* 0x12032A50: fst dword ptr [eax + 0xc] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x1C) = _v; } /* 0x12032A53: fst dword ptr [eax + 0x1c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x2C) = _v; } /* 0x12032A56: fstp dword ptr [eax + 0x2c] */
    fp_push(1.0); /* 0x12032A59: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x3C) = _v; } /* 0x12032A5B: fstp dword ptr [eax + 0x3c] */
    RECOMP_CALL(sub_121BECF5); /* 0x12032A5E: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12032A63: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x12032A64: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_12032A6C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12032A6Cu);

L_12032A6C:
    edi = edi; /* 0x12032A6C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12032A6E: push ebp */
    ebp = esp; /* 0x12032A6F: mov ebp, esp */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x12032A71: fld dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0x8); /* 0x12032A74: mov eax, dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x12032A77: fld st(0) */
    _st[0] += _st[1]; /* 0x12032A79: fadd st(1) */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12032A7B: fld dword ptr [ebp + 0xc] */
    fp_push(_st[1]); /* 0x12032A7E: fld st(1) */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x12032A80: fdivrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x12032A82: fstp dword ptr [eax] */
    fp_push(0.0); /* 0x12032A84: fldz  */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x4) = _v; } /* 0x12032A86: fst dword ptr [eax + 4] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x8) = _v; } /* 0x12032A89: fst dword ptr [eax + 8] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0xC) = _v; } /* 0x12032A8C: fst dword ptr [eax + 0xc] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x10) = _v; } /* 0x12032A8F: fst dword ptr [eax + 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x12032A92: fld dword ptr [ebp + 0x10] */
    { double _v = fp_pop(); _st[1] = _v == 0.0 ? _st[1] : _st[1] / _v; } /* 0x12032A95: fdivp st(2) */
    fp_xch(1); /* 0x12032A97: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x14) = _v; } /* 0x12032A99: fstp dword ptr [eax + 0x14] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x18) = _v; } /* 0x12032A9C: fst dword ptr [eax + 0x18] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x1C) = _v; } /* 0x12032A9F: fst dword ptr [eax + 0x1c] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x20) = _v; } /* 0x12032AA2: fst dword ptr [eax + 0x20] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x24) = _v; } /* 0x12032AA5: fst dword ptr [eax + 0x24] */
    fp_push(*(float*)&MEM32(ebp + 0x18)); /* 0x12032AA8: fld dword ptr [ebp + 0x18] */
    fp_push(_st[2]); /* 0x12032AAB: fld st(2) */
    _st[0] -= _st[1]; /* 0x12032AAD: fsub st(1) */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x12032AAF: fdivp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x14) = _v; } /* 0x12032AB1: fstp dword ptr [ebp + 0x14] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x12032AB4: fld dword ptr [ebp + 0x14] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x28) = _v; } /* 0x12032AB7: fst dword ptr [eax + 0x28] */
    fp_push(*(float*)&MEM32(0x12001748)); /* 0x12032ABA: fld dword ptr [0x12001748] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x2C) = _v; } /* 0x12032AC0: fstp dword ptr [eax + 0x2c] */
    fp_xch(1); /* 0x12032AC3: fxch st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x30) = _v; } /* 0x12032AC5: fst dword ptr [eax + 0x30] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x34) = _v; } /* 0x12032AC8: fst dword ptr [eax + 0x34] */
    fp_xch(1); /* 0x12032ACB: fxch st(1) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12032ACD: fmulp st(2) */
    fp_xch(1); /* 0x12032ACF: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x38) = _v; } /* 0x12032AD1: fstp dword ptr [eax + 0x38] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x3C) = _v; } /* 0x12032AD4: fstp dword ptr [eax + 0x3c] */
    ebp = POP32_VAL(esp); /* 0x12032AD7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x12032AD8: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_12032AE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12032AE0u);

L_12032AE0:
    edi = edi; /* 0x12032AE0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12032AE2: push ebp */
    ebp = esp; /* 0x12032AE3: mov ebp, esp */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x12032AE5: fld dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0x8); /* 0x12032AE8: mov eax, dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x12032AEB: fld st(0) */
    _st[0] += _st[1]; /* 0x12032AED: fadd st(1) */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12032AEF: fld dword ptr [ebp + 0xc] */
    fp_push(_st[1]); /* 0x12032AF2: fld st(1) */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x12032AF4: fdivrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x12032AF6: fstp dword ptr [eax] */
    fp_push(0.0); /* 0x12032AF8: fldz  */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x4) = _v; } /* 0x12032AFA: fst dword ptr [eax + 4] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x8) = _v; } /* 0x12032AFD: fst dword ptr [eax + 8] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0xC) = _v; } /* 0x12032B00: fst dword ptr [eax + 0xc] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x10) = _v; } /* 0x12032B03: fst dword ptr [eax + 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x12032B06: fld dword ptr [ebp + 0x10] */
    { double _v = fp_pop(); _st[1] = _v == 0.0 ? _st[1] : _st[1] / _v; } /* 0x12032B09: fdivp st(2) */
    fp_xch(1); /* 0x12032B0B: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x14) = _v; } /* 0x12032B0D: fstp dword ptr [eax + 0x14] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x18) = _v; } /* 0x12032B10: fst dword ptr [eax + 0x18] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x1C) = _v; } /* 0x12032B13: fst dword ptr [eax + 0x1c] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x20) = _v; } /* 0x12032B16: fst dword ptr [eax + 0x20] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x24) = _v; } /* 0x12032B19: fst dword ptr [eax + 0x24] */
    fp_push(*(float*)&MEM32(ebp + 0x18)); /* 0x12032B1C: fld dword ptr [ebp + 0x18] */
    fp_push(_st[2]); /* 0x12032B1F: fld st(2) */
    fp_push(_st[1]); /* 0x12032B21: fld st(1) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x12032B23: fsubrp st(1) */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x12032B25: fdivp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x14) = _v; } /* 0x12032B27: fstp dword ptr [ebp + 0x14] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x12032B2A: fld dword ptr [ebp + 0x14] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x28) = _v; } /* 0x12032B2D: fst dword ptr [eax + 0x28] */
    fp_push(1.0); /* 0x12032B30: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x2C) = _v; } /* 0x12032B32: fstp dword ptr [eax + 0x2c] */
    fp_xch(1); /* 0x12032B35: fxch st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x30) = _v; } /* 0x12032B37: fst dword ptr [eax + 0x30] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x34) = _v; } /* 0x12032B3A: fst dword ptr [eax + 0x34] */
    fp_xch(1); /* 0x12032B3D: fxch st(1) */
    _st[0] = -_st[0]; /* 0x12032B3F: fchs  */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12032B41: fmulp st(2) */
    fp_xch(1); /* 0x12032B43: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x38) = _v; } /* 0x12032B45: fstp dword ptr [eax + 0x38] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x3C) = _v; } /* 0x12032B48: fstp dword ptr [eax + 0x3c] */
    ebp = POP32_VAL(esp); /* 0x12032B4B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x12032B4C: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_12032B54(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12032B54u);

L_12032B54:
    edi = edi; /* 0x12032B54: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12032B56: push ebp */
    ebp = esp; /* 0x12032B57: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x12032B59: sub esp, 0x10 */
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12032B5C: fld dword ptr [ebp + 0xc] */
    eax = ebp + (-0x4); /* 0x12032B5F: lea eax, [ebp - 4] */
    _st[0] *= *(double*)ADDR(0x120014C0); /* 0x12032B62: fmul qword ptr [0x120014c0] */
    MEM32(ebp + (-0xC)) = eax; /* 0x12032B68: mov dword ptr [ebp - 0xc], eax */
    eax = ebp + (-0x8); /* 0x12032B6B: lea eax, [ebp - 8] */
    MEM32(ebp + (-0x10)) = eax; /* 0x12032B6E: mov dword ptr [ebp - 0x10], eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x12032B71: fstp dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + (-0x10)); /* 0x12032B74: mov eax, dword ptr [ebp - 0x10] */
    edx = MEM32(ebp + (-0xC)); /* 0x12032B77: mov edx, dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12032B7A: fld dword ptr [ebp + 0xc] */
    { double _a = _st[0]; _st[0] = sin(_a); fp_push(cos(_a)); } _fpu_cmp = 1; /* 0x12032B7D: fsincos  */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x12032B7F: fstp dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x12032B81: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x12032B83: fld dword ptr [ebp - 4] */
    eax = MEM32(ebp + 0x8); /* 0x12032B86: mov eax, dword ptr [ebp + 8] */
    _st[0] /= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x12032B89: fdiv dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x12032B8C: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12032B8F: fld dword ptr [ebp + 0xc] */
    fp_push(_st[0]); /* 0x12032B92: fld st(0) */
    _st[0] /= (double)*(float*)ADDR(ebp + 0x10); /* 0x12032B94: fdiv dword ptr [ebp + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x12032B97: fstp dword ptr [eax] */
    fp_push(0.0); /* 0x12032B99: fldz  */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x4) = _v; } /* 0x12032B9B: fst dword ptr [eax + 4] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x8) = _v; } /* 0x12032B9E: fst dword ptr [eax + 8] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0xC) = _v; } /* 0x12032BA1: fst dword ptr [eax + 0xc] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x10) = _v; } /* 0x12032BA4: fst dword ptr [eax + 0x10] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x18) = _v; } /* 0x12032BA7: fst dword ptr [eax + 0x18] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x1C) = _v; } /* 0x12032BAA: fst dword ptr [eax + 0x1c] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x20) = _v; } /* 0x12032BAD: fst dword ptr [eax + 0x20] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x24) = _v; } /* 0x12032BB0: fst dword ptr [eax + 0x24] */
    fp_xch(1); /* 0x12032BB3: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x14) = _v; } /* 0x12032BB5: fstp dword ptr [eax + 0x14] */
    fp_push(*(float*)&MEM32(ebp + 0x18)); /* 0x12032BB8: fld dword ptr [ebp + 0x18] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x12032BBB: fld dword ptr [ebp + 0x14] */
    fp_push(_st[0]); /* 0x12032BBE: fld st(0) */
    _st[0] -= _st[2]; /* 0x12032BC0: fsub st(2) */
    { double _v = fp_pop(); _st[1] = _v == 0.0 ? _st[1] : _st[1] / _v; } /* 0x12032BC2: fdivp st(2) */
    fp_xch(1); /* 0x12032BC4: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x12032BC6: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12032BC9: fld dword ptr [ebp + 0xc] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x28) = _v; } /* 0x12032BCC: fst dword ptr [eax + 0x28] */
    fp_push(*(float*)&MEM32(0x12001748)); /* 0x12032BCF: fld dword ptr [0x12001748] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x2C) = _v; } /* 0x12032BD5: fstp dword ptr [eax + 0x2c] */
    fp_xch(2); /* 0x12032BD8: fxch st(2) */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x30) = _v; } /* 0x12032BDA: fst dword ptr [eax + 0x30] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x34) = _v; } /* 0x12032BDD: fst dword ptr [eax + 0x34] */
    fp_xch(2); /* 0x12032BE0: fxch st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12032BE2: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x38) = _v; } /* 0x12032BE4: fstp dword ptr [eax + 0x38] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x3C) = _v; } /* 0x12032BE7: fstp dword ptr [eax + 0x3c] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12032BEA: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x12032BEB: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_12032BF3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12032BF3u);

L_12032BF3:
    edi = edi; /* 0x12032BF3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12032BF5: push ebp */
    ebp = esp; /* 0x12032BF6: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x12032BF8: sub esp, 0x10 */
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12032BFB: fld dword ptr [ebp + 0xc] */
    eax = ebp + (-0x4); /* 0x12032BFE: lea eax, [ebp - 4] */
    _st[0] *= *(double*)ADDR(0x120014C0); /* 0x12032C01: fmul qword ptr [0x120014c0] */
    MEM32(ebp + (-0xC)) = eax; /* 0x12032C07: mov dword ptr [ebp - 0xc], eax */
    eax = ebp + (-0x8); /* 0x12032C0A: lea eax, [ebp - 8] */
    MEM32(ebp + (-0x10)) = eax; /* 0x12032C0D: mov dword ptr [ebp - 0x10], eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x12032C10: fstp dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + (-0x10)); /* 0x12032C13: mov eax, dword ptr [ebp - 0x10] */
    edx = MEM32(ebp + (-0xC)); /* 0x12032C16: mov edx, dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12032C19: fld dword ptr [ebp + 0xc] */
    { double _a = _st[0]; _st[0] = sin(_a); fp_push(cos(_a)); } _fpu_cmp = 1; /* 0x12032C1C: fsincos  */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x12032C1E: fstp dword ptr [edx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x12032C20: fstp dword ptr [eax] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x12032C22: fld dword ptr [ebp - 4] */
    eax = MEM32(ebp + 0x8); /* 0x12032C25: mov eax, dword ptr [ebp + 8] */
    _st[0] /= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x12032C28: fdiv dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x12032C2B: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12032C2E: fld dword ptr [ebp + 0xc] */
    fp_push(_st[0]); /* 0x12032C31: fld st(0) */
    _st[0] /= (double)*(float*)ADDR(ebp + 0x10); /* 0x12032C33: fdiv dword ptr [ebp + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x12032C36: fstp dword ptr [eax] */
    fp_push(0.0); /* 0x12032C38: fldz  */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x4) = _v; } /* 0x12032C3A: fst dword ptr [eax + 4] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x8) = _v; } /* 0x12032C3D: fst dword ptr [eax + 8] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0xC) = _v; } /* 0x12032C40: fst dword ptr [eax + 0xc] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x10) = _v; } /* 0x12032C43: fst dword ptr [eax + 0x10] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x18) = _v; } /* 0x12032C46: fst dword ptr [eax + 0x18] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x1C) = _v; } /* 0x12032C49: fst dword ptr [eax + 0x1c] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x20) = _v; } /* 0x12032C4C: fst dword ptr [eax + 0x20] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x24) = _v; } /* 0x12032C4F: fst dword ptr [eax + 0x24] */
    fp_xch(1); /* 0x12032C52: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x14) = _v; } /* 0x12032C54: fstp dword ptr [eax + 0x14] */
    fp_push(*(float*)&MEM32(ebp + 0x18)); /* 0x12032C57: fld dword ptr [ebp + 0x18] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x12032C5A: fld dword ptr [ebp + 0x14] */
    fp_push(_st[0]); /* 0x12032C5D: fld st(0) */
    fp_push(_st[2]); /* 0x12032C5F: fld st(2) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x12032C61: fsubrp st(1) */
    { double _v = fp_pop(); _st[1] = _v == 0.0 ? _st[1] : _st[1] / _v; } /* 0x12032C63: fdivp st(2) */
    fp_xch(1); /* 0x12032C65: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x12032C67: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12032C6A: fld dword ptr [ebp + 0xc] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x28) = _v; } /* 0x12032C6D: fst dword ptr [eax + 0x28] */
    fp_push(1.0); /* 0x12032C70: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x2C) = _v; } /* 0x12032C72: fstp dword ptr [eax + 0x2c] */
    fp_xch(2); /* 0x12032C75: fxch st(2) */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x30) = _v; } /* 0x12032C77: fst dword ptr [eax + 0x30] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x34) = _v; } /* 0x12032C7A: fst dword ptr [eax + 0x34] */
    fp_xch(2); /* 0x12032C7D: fxch st(2) */
    _st[0] = -_st[0]; /* 0x12032C7F: fchs  */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12032C81: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x38) = _v; } /* 0x12032C83: fstp dword ptr [eax + 0x38] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x3C) = _v; } /* 0x12032C86: fstp dword ptr [eax + 0x3c] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12032C89: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x12032C8A: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_12032C92(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12032C92u);

L_12032C92:
    edi = edi; /* 0x12032C92: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12032C94: push ebp */
    ebp = esp; /* 0x12032C95: mov ebp, esp */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x12032C97: fld dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x12032C9A: mov eax, dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x12032C9D: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12032C9F: fld dword ptr [ebp + 0xc] */
    fp_push(_st[0]); /* 0x12032CA2: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x12032CA4: fsubp st(2) */
    fp_push(1.0); /* 0x12032CA6: fld1  */
    fp_push(_st[0]); /* 0x12032CA8: fld st(0) */
    { double _v = fp_pop(); _st[2] = _st[2] == 0.0 ? _v : _v / _st[2]; } /* 0x12032CAA: fdivrp st(3) */
    fp_xch(2); /* 0x12032CAC: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x12032CAE: fstp dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0x18)); /* 0x12032CB1: fld dword ptr [ebp + 0x18] */
    fp_push(_st[0]); /* 0x12032CB4: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x12032CB6: fld dword ptr [ebp + 0x14] */
    fp_push(_st[0]); /* 0x12032CB9: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x12032CBB: fsubp st(2) */
    fp_xch(4); /* 0x12032CBD: fxch st(4) */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x12032CBF: fdivrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x12032CC1: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x12032CC4: fld dword ptr [ebp + 0x1c] */
    _st[0] += _st[0]; /* 0x12032CC7: fadd st(0), st(0) */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x12032CC9: fld dword ptr [ebp + 0x10] */
    fp_push(_st[0]); /* 0x12032CCC: fld st(0) */
    _st[0] *= _st[2]; /* 0x12032CCE: fmul st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x12032CD0: fstp dword ptr [eax] */
    fp_push(0.0); /* 0x12032CD2: fldz  */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x4) = _v; } /* 0x12032CD4: fst dword ptr [eax + 4] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x8) = _v; } /* 0x12032CD7: fst dword ptr [eax + 8] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0xC) = _v; } /* 0x12032CDA: fst dword ptr [eax + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x10) = _v; } /* 0x12032CDD: fstp dword ptr [eax + 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12032CE0: fld dword ptr [ebp + 0xc] */
    fp_push(_st[0]); /* 0x12032CE3: fld st(0) */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x12032CE5: fmulp st(3) */
    fp_xch(2); /* 0x12032CE7: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x14) = _v; } /* 0x12032CE9: fstp dword ptr [eax + 0x14] */
    fp_push(0.0); /* 0x12032CEC: fldz  */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x18) = _v; } /* 0x12032CEE: fst dword ptr [eax + 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x1C) = _v; } /* 0x12032CF1: fstp dword ptr [eax + 0x1c] */
    fp_xch(3); /* 0x12032CF4: fxch st(3) */
    { double _v = fp_pop(); _st[4] += _v; } /* 0x12032CF6: faddp st(5) */
    fp_xch(4); /* 0x12032CF8: fxch st(4) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12032CFA: fmulp st(2) */
    fp_xch(1); /* 0x12032CFC: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x20) = _v; } /* 0x12032CFE: fstp dword ptr [eax + 0x20] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12032D01: faddp st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12032D03: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x24) = _v; } /* 0x12032D05: fstp dword ptr [eax + 0x24] */
    fp_push(*(float*)&MEM32(ebp + 0x20)); /* 0x12032D08: fld dword ptr [ebp + 0x20] */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x12032D0B: fld dword ptr [ebp + 0x1c] */
    fp_push(_st[0]); /* 0x12032D0E: fld st(0) */
    _st[0] -= _st[2]; /* 0x12032D10: fsub st(2) */
    { double _v = fp_pop(); _st[1] = _v == 0.0 ? _st[1] : _st[1] / _v; } /* 0x12032D12: fdivp st(2) */
    fp_xch(1); /* 0x12032D14: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x1C) = _v; } /* 0x12032D16: fstp dword ptr [ebp + 0x1c] */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x12032D19: fld dword ptr [ebp + 0x1c] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x28) = _v; } /* 0x12032D1C: fst dword ptr [eax + 0x28] */
    fp_push(*(float*)&MEM32(0x12001748)); /* 0x12032D1F: fld dword ptr [0x12001748] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x2C) = _v; } /* 0x12032D25: fstp dword ptr [eax + 0x2c] */
    fp_push(0.0); /* 0x12032D28: fldz  */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x30) = _v; } /* 0x12032D2A: fst dword ptr [eax + 0x30] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x34) = _v; } /* 0x12032D2D: fst dword ptr [eax + 0x34] */
    fp_xch(1); /* 0x12032D30: fxch st(1) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12032D32: fmulp st(2) */
    fp_xch(1); /* 0x12032D34: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x38) = _v; } /* 0x12032D36: fstp dword ptr [eax + 0x38] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x3C) = _v; } /* 0x12032D39: fstp dword ptr [eax + 0x3c] */
    ebp = POP32_VAL(esp); /* 0x12032D3C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x12032D3D: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_12032D45(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12032D45u);

L_12032D45:
    edi = edi; /* 0x12032D45: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12032D47: push ebp */
    ebp = esp; /* 0x12032D48: mov ebp, esp */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x12032D4A: fld dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x12032D4D: mov eax, dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x12032D50: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12032D52: fld dword ptr [ebp + 0xc] */
    fp_push(_st[0]); /* 0x12032D55: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x12032D57: fsubp st(2) */
    fp_push(1.0); /* 0x12032D59: fld1  */
    fp_push(_st[0]); /* 0x12032D5B: fld st(0) */
    { double _v = fp_pop(); _st[2] = _st[2] == 0.0 ? _v : _v / _st[2]; } /* 0x12032D5D: fdivrp st(3) */
    fp_xch(2); /* 0x12032D5F: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x12032D61: fstp dword ptr [ebp + 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0x18)); /* 0x12032D64: fld dword ptr [ebp + 0x18] */
    fp_push(_st[0]); /* 0x12032D67: fld st(0) */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x12032D69: fld dword ptr [ebp + 0x14] */
    fp_push(_st[0]); /* 0x12032D6C: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x12032D6E: fsubp st(2) */
    fp_xch(4); /* 0x12032D70: fxch st(4) */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x12032D72: fdivrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x12032D74: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x12032D77: fld dword ptr [ebp + 0x1c] */
    _st[0] += _st[0]; /* 0x12032D7A: fadd st(0), st(0) */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x12032D7C: fld dword ptr [ebp + 0x10] */
    fp_push(_st[0]); /* 0x12032D7F: fld st(0) */
    _st[0] *= _st[2]; /* 0x12032D81: fmul st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x12032D83: fstp dword ptr [eax] */
    fp_push(0.0); /* 0x12032D85: fldz  */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x4) = _v; } /* 0x12032D87: fst dword ptr [eax + 4] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x8) = _v; } /* 0x12032D8A: fst dword ptr [eax + 8] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0xC) = _v; } /* 0x12032D8D: fst dword ptr [eax + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x10) = _v; } /* 0x12032D90: fstp dword ptr [eax + 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12032D93: fld dword ptr [ebp + 0xc] */
    fp_push(_st[0]); /* 0x12032D96: fld st(0) */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x12032D98: fmulp st(3) */
    fp_xch(2); /* 0x12032D9A: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x14) = _v; } /* 0x12032D9C: fstp dword ptr [eax + 0x14] */
    fp_push(0.0); /* 0x12032D9F: fldz  */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x18) = _v; } /* 0x12032DA1: fst dword ptr [eax + 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x1C) = _v; } /* 0x12032DA4: fstp dword ptr [eax + 0x1c] */
    fp_xch(3); /* 0x12032DA7: fxch st(3) */
    { double _v = fp_pop(); _st[4] += _v; } /* 0x12032DA9: faddp st(5) */
    fp_xch(4); /* 0x12032DAB: fxch st(4) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12032DAD: fmulp st(2) */
    fp_xch(1); /* 0x12032DAF: fxch st(1) */
    _st[0] = -_st[0]; /* 0x12032DB1: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x20) = _v; } /* 0x12032DB3: fstp dword ptr [eax + 0x20] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12032DB6: faddp st(1) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12032DB8: fmulp st(1) */
    _st[0] = -_st[0]; /* 0x12032DBA: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x24) = _v; } /* 0x12032DBC: fstp dword ptr [eax + 0x24] */
    fp_push(*(float*)&MEM32(ebp + 0x20)); /* 0x12032DBF: fld dword ptr [ebp + 0x20] */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x12032DC2: fld dword ptr [ebp + 0x1c] */
    fp_push(_st[0]); /* 0x12032DC5: fld st(0) */
    fp_push(_st[2]); /* 0x12032DC7: fld st(2) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x12032DC9: fsubrp st(1) */
    { double _v = fp_pop(); _st[1] = _v == 0.0 ? _st[1] : _st[1] / _v; } /* 0x12032DCB: fdivp st(2) */
    fp_xch(1); /* 0x12032DCD: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x1C) = _v; } /* 0x12032DCF: fstp dword ptr [ebp + 0x1c] */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x12032DD2: fld dword ptr [ebp + 0x1c] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x28) = _v; } /* 0x12032DD5: fst dword ptr [eax + 0x28] */
    fp_push(1.0); /* 0x12032DD8: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x2C) = _v; } /* 0x12032DDA: fstp dword ptr [eax + 0x2c] */
    fp_push(0.0); /* 0x12032DDD: fldz  */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x30) = _v; } /* 0x12032DDF: fst dword ptr [eax + 0x30] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x34) = _v; } /* 0x12032DE2: fst dword ptr [eax + 0x34] */
    fp_xch(1); /* 0x12032DE5: fxch st(1) */
    _st[0] = -_st[0]; /* 0x12032DE7: fchs  */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12032DE9: fmulp st(2) */
    fp_xch(1); /* 0x12032DEB: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x38) = _v; } /* 0x12032DED: fstp dword ptr [eax + 0x38] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x3C) = _v; } /* 0x12032DF0: fstp dword ptr [eax + 0x3c] */
    ebp = POP32_VAL(esp); /* 0x12032DF3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x12032DF4: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_12032DFC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12032DFCu);

L_12032DFC:
    edi = edi; /* 0x12032DFC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12032DFE: push ebp */
    ebp = esp; /* 0x12032DFF: mov ebp, esp */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12032E01: fld dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x12032E04: mov eax, dword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(0x12001758)); /* 0x12032E07: fld qword ptr [0x12001758] */
    fp_push(_st[0]); /* 0x12032E0D: fld st(0) */
    { double _v = fp_pop(); _st[1] = _st[1] == 0.0 ? _v : _v / _st[1]; } /* 0x12032E0F: fdivrp st(2) */
    fp_xch(1); /* 0x12032E11: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x12032E13: fstp dword ptr [eax] */
    fp_push(0.0); /* 0x12032E15: fldz  */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x4) = _v; } /* 0x12032E17: fst dword ptr [eax + 4] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x8) = _v; } /* 0x12032E1A: fst dword ptr [eax + 8] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0xC) = _v; } /* 0x12032E1D: fst dword ptr [eax + 0xc] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x10) = _v; } /* 0x12032E20: fst dword ptr [eax + 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x12032E23: fld dword ptr [ebp + 0x10] */
    { double _v = fp_pop(); _st[1] = _v == 0.0 ? _st[1] : _st[1] / _v; } /* 0x12032E26: fdivp st(2) */
    fp_xch(1); /* 0x12032E28: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x14) = _v; } /* 0x12032E2A: fstp dword ptr [eax + 0x14] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x18) = _v; } /* 0x12032E2D: fst dword ptr [eax + 0x18] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x1C) = _v; } /* 0x12032E30: fst dword ptr [eax + 0x1c] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x20) = _v; } /* 0x12032E33: fst dword ptr [eax + 0x20] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x24) = _v; } /* 0x12032E36: fst dword ptr [eax + 0x24] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x12032E39: fld dword ptr [ebp + 0x14] */
    fp_push(_st[0]); /* 0x12032E3C: fld st(0) */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x18); /* 0x12032E3E: fsub dword ptr [ebp + 0x18] */
    fp_push(1.0); /* 0x12032E41: fld1  */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x12032E43: fdivrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x12032E45: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12032E48: fld dword ptr [ebp + 0xc] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x28) = _v; } /* 0x12032E4B: fst dword ptr [eax + 0x28] */
    fp_xch(2); /* 0x12032E4E: fxch st(2) */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x2C) = _v; } /* 0x12032E50: fst dword ptr [eax + 0x2c] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x30) = _v; } /* 0x12032E53: fst dword ptr [eax + 0x30] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x34) = _v; } /* 0x12032E56: fstp dword ptr [eax + 0x34] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12032E59: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x38) = _v; } /* 0x12032E5B: fstp dword ptr [eax + 0x38] */
    fp_push(1.0); /* 0x12032E5E: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x3C) = _v; } /* 0x12032E60: fstp dword ptr [eax + 0x3c] */
    ebp = POP32_VAL(esp); /* 0x12032E63: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x12032E64: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_12032E6C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12032E6Cu);

L_12032E6C:
    edi = edi; /* 0x12032E6C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12032E6E: push ebp */
    ebp = esp; /* 0x12032E6F: mov ebp, esp */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12032E71: fld dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x8); /* 0x12032E74: mov eax, dword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(0x12001758)); /* 0x12032E77: fld qword ptr [0x12001758] */
    fp_push(_st[0]); /* 0x12032E7D: fld st(0) */
    { double _v = fp_pop(); _st[1] = _st[1] == 0.0 ? _v : _v / _st[1]; } /* 0x12032E7F: fdivrp st(2) */
    fp_xch(1); /* 0x12032E81: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x12032E83: fstp dword ptr [eax] */
    fp_push(0.0); /* 0x12032E85: fldz  */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x4) = _v; } /* 0x12032E87: fst dword ptr [eax + 4] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x8) = _v; } /* 0x12032E8A: fst dword ptr [eax + 8] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0xC) = _v; } /* 0x12032E8D: fst dword ptr [eax + 0xc] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x10) = _v; } /* 0x12032E90: fst dword ptr [eax + 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x12032E93: fld dword ptr [ebp + 0x10] */
    { double _v = fp_pop(); _st[1] = _v == 0.0 ? _st[1] : _st[1] / _v; } /* 0x12032E96: fdivp st(2) */
    fp_xch(1); /* 0x12032E98: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x14) = _v; } /* 0x12032E9A: fstp dword ptr [eax + 0x14] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x18) = _v; } /* 0x12032E9D: fst dword ptr [eax + 0x18] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x1C) = _v; } /* 0x12032EA0: fst dword ptr [eax + 0x1c] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x20) = _v; } /* 0x12032EA3: fst dword ptr [eax + 0x20] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x24) = _v; } /* 0x12032EA6: fst dword ptr [eax + 0x24] */
    fp_push(*(float*)&MEM32(ebp + 0x18)); /* 0x12032EA9: fld dword ptr [ebp + 0x18] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x12032EAC: fld dword ptr [ebp + 0x14] */
    fp_push(_st[0]); /* 0x12032EAF: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x12032EB1: fsubp st(2) */
    fp_push(1.0); /* 0x12032EB3: fld1  */
    { double _v = fp_pop(); _st[1] = _st[1] == 0.0 ? _v : _v / _st[1]; } /* 0x12032EB5: fdivrp st(2) */
    fp_xch(1); /* 0x12032EB7: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x12032EB9: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12032EBC: fld dword ptr [ebp + 0xc] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x28) = _v; } /* 0x12032EBF: fst dword ptr [eax + 0x28] */
    fp_xch(2); /* 0x12032EC2: fxch st(2) */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x2C) = _v; } /* 0x12032EC4: fst dword ptr [eax + 0x2c] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x30) = _v; } /* 0x12032EC7: fst dword ptr [eax + 0x30] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x34) = _v; } /* 0x12032ECA: fstp dword ptr [eax + 0x34] */
    fp_xch(1); /* 0x12032ECD: fxch st(1) */
    _st[0] = -_st[0]; /* 0x12032ECF: fchs  */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12032ED1: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x38) = _v; } /* 0x12032ED3: fstp dword ptr [eax + 0x38] */
    fp_push(1.0); /* 0x12032ED6: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x3C) = _v; } /* 0x12032ED8: fstp dword ptr [eax + 0x3c] */
    ebp = POP32_VAL(esp); /* 0x12032EDB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x12032EDC: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_12032EE4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12032EE4u);

L_12032EE4:
    edi = edi; /* 0x12032EE4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12032EE6: push ebp */
    ebp = esp; /* 0x12032EE7: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12032EE9: push ecx */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x12032EEA: fld dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x12032EED: mov eax, dword ptr [ebp + 8] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0xC); /* 0x12032EF0: fsub dword ptr [ebp + 0xc] */
    fp_push(1.0); /* 0x12032EF3: fld1  */
    fp_push(_st[0]); /* 0x12032EF5: fld st(0) */
    { double _v = fp_pop(); _st[1] = _st[1] == 0.0 ? _v : _v / _st[1]; } /* 0x12032EF7: fdivrp st(2) */
    fp_xch(1); /* 0x12032EF9: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x12032EFB: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + 0x18)); /* 0x12032EFE: fld dword ptr [ebp + 0x18] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x12032F01: fld dword ptr [ebp + 0x14] */
    fp_push(_st[0]); /* 0x12032F04: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x12032F06: fsubp st(2) */
    fp_push(_st[2]); /* 0x12032F08: fld st(2) */
    { double _v = fp_pop(); _st[1] = _st[1] == 0.0 ? _v : _v / _st[1]; } /* 0x12032F0A: fdivrp st(2) */
    fp_xch(1); /* 0x12032F0C: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x14) = _v; } /* 0x12032F0E: fstp dword ptr [ebp + 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x12032F11: fld dword ptr [ebp - 4] */
    fp_push(_st[0]); /* 0x12032F14: fld st(0) */
    fp_push(*(double*)ADDR(0x12001758)); /* 0x12032F16: fld qword ptr [0x12001758] */
    _st[1] *= _st[0]; /* 0x12032F1C: fmul st(1), st(0) */
    fp_xch(1); /* 0x12032F1E: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x12032F20: fstp dword ptr [eax] */
    fp_push(0.0); /* 0x12032F22: fldz  */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x4) = _v; } /* 0x12032F24: fst dword ptr [eax + 4] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x8) = _v; } /* 0x12032F27: fst dword ptr [eax + 8] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0xC) = _v; } /* 0x12032F2A: fst dword ptr [eax + 0xc] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x10) = _v; } /* 0x12032F2D: fst dword ptr [eax + 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x12032F30: fld dword ptr [ebp + 0x14] */
    fp_push(_st[0]); /* 0x12032F33: fld st(0) */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x12032F35: fmulp st(3) */
    fp_xch(2); /* 0x12032F37: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x14) = _v; } /* 0x12032F39: fstp dword ptr [eax + 0x14] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x18) = _v; } /* 0x12032F3C: fst dword ptr [eax + 0x18] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x1C) = _v; } /* 0x12032F3F: fst dword ptr [eax + 0x1c] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x20) = _v; } /* 0x12032F42: fst dword ptr [eax + 0x20] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x24) = _v; } /* 0x12032F45: fst dword ptr [eax + 0x24] */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x12032F48: fld dword ptr [ebp + 0x1c] */
    fp_push(_st[0]); /* 0x12032F4B: fld st(0) */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x20); /* 0x12032F4D: fsub dword ptr [ebp + 0x20] */
    { double _v = fp_pop(); _st[5] = _v == 0.0 ? _st[5] : _st[5] / _v; } /* 0x12032F50: fdivp st(6) */
    fp_xch(5); /* 0x12032F52: fxch st(5) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x14) = _v; } /* 0x12032F54: fstp dword ptr [ebp + 0x14] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x12032F57: fld dword ptr [ebp + 0x14] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x28) = _v; } /* 0x12032F5A: fst dword ptr [eax + 0x28] */
    fp_xch(1); /* 0x12032F5D: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x2C) = _v; } /* 0x12032F5F: fstp dword ptr [eax + 0x2c] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12032F62: fld dword ptr [ebp + 0xc] */
    _st[0] += (double)*(float*)ADDR(ebp + 0x10); /* 0x12032F65: fadd dword ptr [ebp + 0x10] */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x12032F68: fmulp st(3) */
    fp_xch(2); /* 0x12032F6A: fxch st(2) */
    _st[0] = -_st[0]; /* 0x12032F6C: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x30) = _v; } /* 0x12032F6E: fstp dword ptr [eax + 0x30] */
    fp_push(*(float*)&MEM32(ebp + 0x18)); /* 0x12032F71: fld dword ptr [ebp + 0x18] */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x12032F74: faddp st(3) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12032F76: fmulp st(2) */
    fp_xch(1); /* 0x12032F78: fxch st(1) */
    _st[0] = -_st[0]; /* 0x12032F7A: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x34) = _v; } /* 0x12032F7C: fstp dword ptr [eax + 0x34] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12032F7F: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x38) = _v; } /* 0x12032F81: fstp dword ptr [eax + 0x38] */
    fp_push(1.0); /* 0x12032F84: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x3C) = _v; } /* 0x12032F86: fstp dword ptr [eax + 0x3c] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12032F89: leave  */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x12032F8A: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_12032F92(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12032F92u);

L_12032F92:
    edi = edi; /* 0x12032F92: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12032F94: push ebp */
    ebp = esp; /* 0x12032F95: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12032F97: push ecx */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x12032F98: fld dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x12032F9B: mov eax, dword ptr [ebp + 8] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0xC); /* 0x12032F9E: fsub dword ptr [ebp + 0xc] */
    fp_push(1.0); /* 0x12032FA1: fld1  */
    fp_push(_st[0]); /* 0x12032FA3: fld st(0) */
    { double _v = fp_pop(); _st[1] = _st[1] == 0.0 ? _v : _v / _st[1]; } /* 0x12032FA5: fdivrp st(2) */
    fp_xch(1); /* 0x12032FA7: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x12032FA9: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + 0x18)); /* 0x12032FAC: fld dword ptr [ebp + 0x18] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x12032FAF: fld dword ptr [ebp + 0x14] */
    fp_push(_st[0]); /* 0x12032FB2: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x12032FB4: fsubp st(2) */
    fp_push(_st[2]); /* 0x12032FB6: fld st(2) */
    { double _v = fp_pop(); _st[1] = _st[1] == 0.0 ? _v : _v / _st[1]; } /* 0x12032FB8: fdivrp st(2) */
    fp_xch(1); /* 0x12032FBA: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x14) = _v; } /* 0x12032FBC: fstp dword ptr [ebp + 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x12032FBF: fld dword ptr [ebp - 4] */
    fp_push(_st[0]); /* 0x12032FC2: fld st(0) */
    fp_push(*(double*)ADDR(0x12001758)); /* 0x12032FC4: fld qword ptr [0x12001758] */
    _st[1] *= _st[0]; /* 0x12032FCA: fmul st(1), st(0) */
    fp_xch(1); /* 0x12032FCC: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x12032FCE: fstp dword ptr [eax] */
    fp_push(0.0); /* 0x12032FD0: fldz  */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x4) = _v; } /* 0x12032FD2: fst dword ptr [eax + 4] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x8) = _v; } /* 0x12032FD5: fst dword ptr [eax + 8] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0xC) = _v; } /* 0x12032FD8: fst dword ptr [eax + 0xc] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x10) = _v; } /* 0x12032FDB: fst dword ptr [eax + 0x10] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x12032FDE: fld dword ptr [ebp + 0x14] */
    fp_push(_st[0]); /* 0x12032FE1: fld st(0) */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x12032FE3: fmulp st(3) */
    fp_xch(2); /* 0x12032FE5: fxch st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x14) = _v; } /* 0x12032FE7: fstp dword ptr [eax + 0x14] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x18) = _v; } /* 0x12032FEA: fst dword ptr [eax + 0x18] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x1C) = _v; } /* 0x12032FED: fst dword ptr [eax + 0x1c] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x20) = _v; } /* 0x12032FF0: fst dword ptr [eax + 0x20] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x24) = _v; } /* 0x12032FF3: fst dword ptr [eax + 0x24] */
    fp_push(*(float*)&MEM32(ebp + 0x20)); /* 0x12032FF6: fld dword ptr [ebp + 0x20] */
    fp_push(*(float*)&MEM32(ebp + 0x1C)); /* 0x12032FF9: fld dword ptr [ebp + 0x1c] */
    fp_push(_st[0]); /* 0x12032FFC: fld st(0) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x12032FFE: fsubp st(2) */
    fp_xch(6); /* 0x12033000: fxch st(6) */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x12033002: fdivrp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x14) = _v; } /* 0x12033004: fstp dword ptr [ebp + 0x14] */
    fp_push(*(float*)&MEM32(ebp + 0x14)); /* 0x12033007: fld dword ptr [ebp + 0x14] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x28) = _v; } /* 0x1203300A: fst dword ptr [eax + 0x28] */
    fp_xch(1); /* 0x1203300D: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x2C) = _v; } /* 0x1203300F: fstp dword ptr [eax + 0x2c] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x12033012: fld dword ptr [ebp + 0xc] */
    _st[0] += (double)*(float*)ADDR(ebp + 0x10); /* 0x12033015: fadd dword ptr [ebp + 0x10] */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x12033018: fmulp st(3) */
    fp_xch(2); /* 0x1203301A: fxch st(2) */
    _st[0] = -_st[0]; /* 0x1203301C: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x30) = _v; } /* 0x1203301E: fstp dword ptr [eax + 0x30] */
    fp_push(*(float*)&MEM32(ebp + 0x18)); /* 0x12033021: fld dword ptr [ebp + 0x18] */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x12033024: faddp st(3) */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12033026: fmulp st(2) */
    fp_xch(1); /* 0x12033028: fxch st(1) */
    _st[0] = -_st[0]; /* 0x1203302A: fchs  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x34) = _v; } /* 0x1203302C: fstp dword ptr [eax + 0x34] */
    _st[0] = -_st[0]; /* 0x1203302F: fchs  */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12033031: fmulp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x38) = _v; } /* 0x12033033: fstp dword ptr [eax + 0x38] */
    fp_push(1.0); /* 0x12033036: fld1  */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x3C) = _v; } /* 0x12033038: fstp dword ptr [eax + 0x3c] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1203303B: leave  */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x1203303C: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_12033044(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12033044u);

L_12033044:
    edi = edi; /* 0x12033044: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12033046: push ebp */
    ebp = esp; /* 0x12033047: mov ebp, esp */
    PUSH32(esp, 1); /* 0x12033049: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x1203304B: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12033050: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x121CA0D8)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_1203305C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1203305Cu);

L_1203305C:
    { _itail_tgt = (uint32_t)(MEM32(0x121CA0D8)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_12033067(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12033067u);

L_12033067:
    edi = edi; /* 0x12033067: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12033069: push ebp */
    ebp = esp; /* 0x1203306A: mov ebp, esp */
    PUSH32(esp, 1); /* 0x1203306C: push 1 */
    RECOMP_CALL(sub_120469F2); /* 0x1203306E: call 0x120469f2 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x12033073: pop ebp */
    { _itail_tgt = (uint32_t)(MEM32(0x121CA0DC)); goto _ljump; }
    { RECOMP_REGS_OUT(); return; } /* end of function */
  _ljump:
    switch (_itail_tgt) {
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}
