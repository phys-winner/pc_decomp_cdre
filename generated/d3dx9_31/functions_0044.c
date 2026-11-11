#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_171C0EB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C0EB0u);

L_171C0EB0:
    edi = edi; /* 0x171C0EB0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C0EB2: push ebp */
    ebp = esp; /* 0x171C0EB3: mov ebp, esp */
    edx = MEM32(ebp + 0x10); /* 0x171C0EB5: mov edx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x171C0EB8: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171C0EB9: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x1C); /* 0x171C0EBC: mov eax, dword ptr [esi + 0x1c] */
    ecx = MEM32(esi + 0xF4); /* 0x171C0EBF: mov ecx, dword ptr [esi + 0xf4] */
    PUSH32(esp, edi); /* 0x171C0EC5: push edi */
    edi = MEM32(ebp + 0x14); /* 0x171C0EC6: mov edi, dword ptr [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x171C0EC9: push eax */
    PUSH32(esp, ecx); /* 0x171C0ECA: push ecx */
    PUSH32(esp, 0); /* 0x171C0ECB: push 0 */
    PUSH32(esp, edi); /* 0x171C0ECD: push edi */
    PUSH32(esp, 0); /* 0x171C0ECE: push 0 */
    PUSH32(esp, edx); /* 0x171C0ED0: push edx */
    RECOMP_CALL(sub_171B5D30); /* 0x171C0ED1: call 0x171b5d30 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x171C0ED6: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(eax + 0x1C); /* 0x171C0ED9: mov ecx, dword ptr [eax + 0x1c] */
    edx = MEM32(esi + 0x1C); /* 0x171C0EDC: mov edx, dword ptr [esi + 0x1c] */
    eax = MEM32(esi + 0xF4); /* 0x171C0EDF: mov eax, dword ptr [esi + 0xf4] */
    PUSH32(esp, edx); /* 0x171C0EE5: push edx */
    PUSH32(esp, eax); /* 0x171C0EE6: push eax */
    if (3u) _cf = (((ecx) >> 29) & 1u); /* 0x171C0EE7: shl ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 3u; /* 0x171C0EE7: shl ecx, 3 */
    PUSH32(esp, edi); /* 0x171C0EEA: push edi */
    RECOMP_CALL(sub_171C0C90); /* 0x171C0EEB: call 0x171c0c90 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x171C0EF0: pop edi */
    esi = POP32_VAL(esp); /* 0x171C0EF1: pop esi */
    ebp = POP32_VAL(esp); /* 0x171C0EF2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x171C0EF3: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_171C0F00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C0F00u);

L_171C0F00:
    edi = edi; /* 0x171C0F00: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C0F02: push ebp */
    ebp = esp; /* 0x171C0F03: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x171C0F05: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x171C0F08: push ebx */
    PUSH32(esp, esi); /* 0x171C0F09: push esi */
    PUSH32(esp, edi); /* 0x171C0F0A: push edi */
    ebx = edx; /* 0x171C0F0B: mov ebx, edx */
    edx = MEM32(eax + 0x1C); /* 0x171C0F0D: mov edx, dword ptr [eax + 0x1c] */
    edi = MEM32(ebx + 0x1C); /* 0x171C0F10: mov edi, dword ptr [ebx + 0x1c] */
    eax = MEM32(eax + 0xF4); /* 0x171C0F13: mov eax, dword ptr [eax + 0xf4] */
    PUSH32(esp, edx); /* 0x171C0F19: push edx */
    esi = ecx; /* 0x171C0F1A: mov esi, ecx */
    if (3u) _cf = (((edi) >> 29) & 1u); /* 0x171C0F1C: shl edi, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edi << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 3u; /* 0x171C0F1C: shl edi, 3 */
    PUSH32(esp, eax); /* 0x171C0F1F: push eax */
    ecx = edi + edi; /* 0x171C0F20: lea ecx, [edi + edi] */
    PUSH32(esp, esi); /* 0x171C0F23: push esi */
    MEM32(ebp + (-0x8)) = edi; /* 0x171C0F24: mov dword ptr [ebp - 8], edi */
    RECOMP_CALL(sub_171C0C90); /* 0x171C0F27: call 0x171c0c90 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0xC); /* 0x171C0F2C: mov eax, dword ptr [ebx + 0xc] */
    /* test eax, eax */ /* 0x171C0F2F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171C0F81; /* 0x171C0F31: jle 0x171c0f81 */
L_171C0F33:
    ebx = MEM32(ebp + 0x8); /* 0x171C0F33: mov ebx, dword ptr [ebp + 8] */
    edx = esi; /* 0x171C0F36: mov edx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - esi; /* 0x171C0F38: sub ebx, esi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edx; /* 0x171C0F3A: mov dword ptr [ebp - 4], edx */
    MEM32(ebp + (-0xC)) = ebx; /* 0x171C0F3D: mov dword ptr [ebp - 0xc], ebx */
    MEM32(ebp + 0x8) = eax; /* 0x171C0F40: mov dword ptr [ebp + 8], eax */
L_171C0F43:
    ecx = MEM32(ebx + edx); /* 0x171C0F43: mov ecx, dword ptr [ebx + edx] */
    eax = MEM32(edx); /* 0x171C0F46: mov eax, dword ptr [edx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171C0F48: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x171C0F4A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171C0F72; /* 0x171C0F4C: jbe 0x171c0f72 */
L_171C0F4E:
    edi = edi; /* 0x171C0F4E: mov edi, edi */
L_171C0F50:
    edx = (uint32_t)MEM8(eax + 0x1); /* 0x171C0F50: movzx edx, byte ptr [eax + 1] */
    ebx = (uint32_t)MEM8(eax); /* 0x171C0F54: movzx ebx, byte ptr [eax] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x171C0F57: add edx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edx; /* 0x171C0F59: add ebx, edx */
    _flag_k = FK_ADD;
    if (1u) _cf = (((ebx) >> 0) & 1u); /* 0x171C0F5B: sar ebx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 1u);
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x171C0F5D: mov byte ptr [ecx], bl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171C0F5F: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)((esi ^ 1)); _flag_b = (uint32_t)((esi ^ 1));
    esi = esi ^ 1; /* 0x171C0F60: xor esi, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x171C0F63: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x171C0F66: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171C0F50; /* 0x171C0F67: jne 0x171c0f50 */
L_171C0F69:
    edx = MEM32(ebp + (-0x4)); /* 0x171C0F69: mov edx, dword ptr [ebp - 4] */
    edi = MEM32(ebp + (-0x8)); /* 0x171C0F6C: mov edi, dword ptr [ebp - 8] */
    ebx = MEM32(ebp + (-0xC)); /* 0x171C0F6F: mov ebx, dword ptr [ebp - 0xc] */
L_171C0F72:
    eax = MEM32(ebp + 0x8); /* 0x171C0F72: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x171C0F75: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171C0F78: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x4)) = edx; /* 0x171C0F79: mov dword ptr [ebp - 4], edx */
    MEM32(ebp + 0x8) = eax; /* 0x171C0F7C: mov dword ptr [ebp + 8], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171C0F43; /* 0x171C0F7F: jne 0x171c0f43 */
L_171C0F81:
    edi = POP32_VAL(esp); /* 0x171C0F81: pop edi */
    esi = POP32_VAL(esp); /* 0x171C0F82: pop esi */
    ebx = POP32_VAL(esp); /* 0x171C0F83: pop ebx */
    esp = ebp; /* 0x171C0F84: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171C0F86: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171C0F87: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171C0F90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C0F90u);

L_171C0F90:
    edi = edi; /* 0x171C0F90: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C0F92: push ebp */
    ebp = esp; /* 0x171C0F93: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x171C0F95: sub esp, 8 */
    _flag_k = FK_CMP;
    eax = MEM32(ecx + 0x1C); /* 0x171C0F98: mov eax, dword ptr [ecx + 0x1c] */
    ecx = MEM32(ecx + 0xC); /* 0x171C0F9B: mov ecx, dword ptr [ecx + 0xc] */
    PUSH32(esp, ebx); /* 0x171C0F9E: push ebx */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x171C0F9F: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x171C0F9F: shl eax, 3 */
    PUSH32(esp, esi); /* 0x171C0FA2: push esi */
    PUSH32(esp, edi); /* 0x171C0FA3: push edi */
    MEM32(ebp + (-0x8)) = eax; /* 0x171C0FA4: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0x4)) = ecx; /* 0x171C0FA7: mov dword ptr [ebp - 4], ecx */
    ecx = eax + eax; /* 0x171C0FAA: lea ecx, [eax + eax] */
    eax = MEM32(edx + 0x1C); /* 0x171C0FAD: mov eax, dword ptr [edx + 0x1c] */
    edx = MEM32(edx + 0xF4); /* 0x171C0FB0: mov edx, dword ptr [edx + 0xf4] */
    PUSH32(esp, eax); /* 0x171C0FB6: push eax */
    eax = MEM32(ebp + 0x8); /* 0x171C0FB7: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, edx); /* 0x171C0FBA: push edx */
    PUSH32(esp, eax); /* 0x171C0FBB: push eax */
    RECOMP_CALL(sub_171C0C90); /* 0x171C0FBC: call 0x171c0c90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171C0FC1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _mm[7] = MEM64(0x17025BB0); /* 0x171C0FC3: movq mm7, qword ptr [0x17025bb0] */
    _mm[6] = MEM64(0x17025BA0); /* 0x171C0FCA: movq mm6, qword ptr [0x17025ba0] */
L_171C0FD1:
    _mm[0] = MEM64(0x17025B98); /* 0x171C0FD1: movq mm0, qword ptr [0x17025b98] */
    edx = MEM32(ebp + (-0x8)); /* 0x171C0FD8: mov edx, dword ptr [ebp - 8] */
    ebx = MEM32(ebp + 0xC); /* 0x171C0FDB: mov ebx, dword ptr [ebp + 0xc] */
    esi = MEM32(ebx + eax * 4); /* 0x171C0FDE: mov esi, dword ptr [ebx + eax*4] */
    ebx = MEM32(ebp + 0x8); /* 0x171C0FE1: mov ebx, dword ptr [ebp + 8] */
    edi = MEM32(ebx + eax * 4); /* 0x171C0FE4: mov edi, dword ptr [ebx + eax*4] */
L_171C0FE7:
    _mm[1] = MEM64(edi); /* 0x171C0FE7: movq mm1, qword ptr [edi] */
    _mm[3] = MEM64(edi + 0x8); /* 0x171C0FEA: movq mm3, qword ptr [edi + 8] */
    _mm[2] = _mm[1]; /* 0x171C0FEE: movq mm2, mm1 */
    _mm[1] = mmx_psrlw(_mm[1], 8); /* 0x171C0FF1: psrlw mm1, 8 */
    _mm[4] = _mm[3]; /* 0x171C0FF5: movq mm4, mm3 */
    _mm[3] = mmx_psrlw(_mm[3], 8); /* 0x171C0FF8: psrlw mm3, 8 */
    _mm[2] = (_mm[2] & _mm[7]); /* 0x171C0FFC: pand mm2, mm7 */
    _mm[4] = (_mm[4] & _mm[7]); /* 0x171C0FFF: pand mm4, mm7 */
    _mm[1] = mmx_paddw(_mm[1], _mm[2]); /* 0x171C1002: paddw mm1, mm2 */
    _mm[3] = mmx_paddw(_mm[3], _mm[4]); /* 0x171C1005: paddw mm3, mm4 */
    _mm[1] = mmx_paddw(_mm[1], _mm[0]); /* 0x171C1008: paddw mm1, mm0 */
    _mm[3] = mmx_paddw(_mm[3], _mm[0]); /* 0x171C100B: paddw mm3, mm0 */
    _mm[1] = mmx_psrlw(_mm[1], 1); /* 0x171C100E: psrlw mm1, 1 */
    _mm[3] = mmx_psrlw(_mm[3], 1); /* 0x171C1012: psrlw mm3, 1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 8; /* 0x171C1016: sub edx, 8 */
    _flag_k = FK_CMP;
    _mm[1] = mmx_packuswb(_mm[1], _mm[3]); /* 0x171C1019: packuswb mm1, mm3 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x10u; /* 0x171C101C: add edi, 0x10 */
    _flag_k = FK_ADD;
    MEM64(esi) = _mm[1]; /* 0x171C101F: movq qword ptr [esi], mm1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x171C1022: add esi, 8 */
    _flag_k = FK_ADD;
    /* cmp edx, 8 */ /* 0x171C1025: cmp edx, 8 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_171C0FE7; /* 0x171C1028: jge 0x171c0fe7 */
L_171C102A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171C102A: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(ebp + (-0x4)) */ /* 0x171C102B: cmp eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171C0FD1; /* 0x171C102E: jl 0x171c0fd1 */
L_171C1030:
    /* emms */ /* 0x171C1030: emms  */
    edi = POP32_VAL(esp); /* 0x171C1032: pop edi */
    esi = POP32_VAL(esp); /* 0x171C1033: pop esi */
    ebx = POP32_VAL(esp); /* 0x171C1034: pop ebx */
    esp = ebp; /* 0x171C1035: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171C1037: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171C1038: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171C1040(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C1040u);

L_171C1040:
    edi = edi; /* 0x171C1040: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C1042: push ebp */
    ebp = esp; /* 0x171C1043: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x171C1045: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x171C1048: push ebx */
    PUSH32(esp, esi); /* 0x171C1049: push esi */
    PUSH32(esp, edi); /* 0x171C104A: push edi */
    esi = edx; /* 0x171C104B: mov esi, edx */
    edx = MEM32(eax + 0x1C); /* 0x171C104D: mov edx, dword ptr [eax + 0x1c] */
    edi = MEM32(esi + 0x1C); /* 0x171C1050: mov edi, dword ptr [esi + 0x1c] */
    eax = MEM32(eax + 0xF4); /* 0x171C1053: mov eax, dword ptr [eax + 0xf4] */
    PUSH32(esp, edx); /* 0x171C1059: push edx */
    ebx = ecx; /* 0x171C105A: mov ebx, ecx */
    if (3u) _cf = (((edi) >> 29) & 1u); /* 0x171C105C: shl edi, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edi << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 3u; /* 0x171C105C: shl edi, 3 */
    PUSH32(esp, eax); /* 0x171C105F: push eax */
    ecx = edi + edi; /* 0x171C1060: lea ecx, [edi + edi] */
    PUSH32(esp, ebx); /* 0x171C1063: push ebx */
    MEM32(ebp + (-0x14)) = edi; /* 0x171C1064: mov dword ptr [ebp - 0x14], edi */
    RECOMP_CALL(sub_171C0C90); /* 0x171C1067: call 0x171c0c90 */
    RECOMP_FLAGS_IN();
    esi = MEM32(esi + 0xC); /* 0x171C106C: mov esi, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171C106F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x171C1071: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ecx; /* 0x171C1073: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + (-0x18)) = esi; /* 0x171C1076: mov dword ptr [ebp - 0x18], esi */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171C10F0; /* 0x171C1079: jle 0x171c10f0 */
L_171C107B:
    edx = ebx; /* 0x171C107B: mov edx, ebx */
    MEM32(ebp + (-0xC)) = edx; /* 0x171C107D: mov dword ptr [ebp - 0xc], edx */
L_171C1080:
    /* test edi, edi */ /* 0x171C1080: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ebp + 0x8); /* 0x171C1082: mov eax, dword ptr [ebp + 8] */
    esi = MEM32(eax + ecx * 4); /* 0x171C1085: mov esi, dword ptr [eax + ecx*4] */
    eax = MEM32(edx); /* 0x171C1088: mov eax, dword ptr [edx] */
    MEM32(ebp + (-0x4)) = 1; /* 0x171C108A: mov dword ptr [ebp - 4], 1 */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171C10DF; /* 0x171C1091: jbe 0x171c10df */
L_171C1093:
    ecx = MEM32(edx + 0x4); /* 0x171C1093: mov ecx, dword ptr [edx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x171C1096: sub ecx, eax */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = edi; /* 0x171C1098: mov dword ptr [ebp - 8], edi */
    goto L_171C10A0; /* 0x171C109B: jmp 0x171c10a0 */
L_171C10A0:
    edi = (uint32_t)MEM8(ecx + eax); /* 0x171C10A0: movzx edi, byte ptr [ecx + eax] */
    edx = (uint32_t)MEM8(ecx + eax + 0x1); /* 0x171C10A4: movzx edx, byte ptr [ecx + eax + 1] */
    ebx = MEM32(ebp + (-0x4)); /* 0x171C10A9: mov ebx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x171C10AC: add edx, edi */
    _flag_k = FK_ADD;
    edi = (uint32_t)MEM8(eax + 0x1); /* 0x171C10AE: movzx edi, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ebx; /* 0x171C10B2: add edi, ebx */
    _flag_k = FK_ADD;
    ebx = (uint32_t)MEM8(eax); /* 0x171C10B4: movzx ebx, byte ptr [eax] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x171C10B7: add edi, edx */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + (-0x8)); /* 0x171C10B9: mov edx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edi; /* 0x171C10BC: add ebx, edi */
    _flag_k = FK_ADD;
    if (2u) _cf = (((ebx) >> 1) & 1u); /* 0x171C10BE: sar ebx, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 2u);
    MEM8(esi) = (uint8_t)(LO8(ebx)); /* 0x171C10C1: mov byte ptr [esi], bl */
    ebx = MEM32(ebp + (-0x4)); /* 0x171C10C3: mov ebx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ebx ^ 3)); _flag_b = (uint32_t)((ebx ^ 3));
    ebx = ebx ^ 3; /* 0x171C10C6: xor ebx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171C10C9: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x171C10CA: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x171C10CD: dec edx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x4)) = ebx; /* 0x171C10CE: mov dword ptr [ebp - 4], ebx */
    MEM32(ebp + (-0x8)) = edx; /* 0x171C10D1: mov dword ptr [ebp - 8], edx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171C10A0; /* 0x171C10D4: jne 0x171c10a0 */
L_171C10D6:
    ecx = MEM32(ebp + (-0x10)); /* 0x171C10D6: mov ecx, dword ptr [ebp - 0x10] */
    edi = MEM32(ebp + (-0x14)); /* 0x171C10D9: mov edi, dword ptr [ebp - 0x14] */
    edx = MEM32(ebp + (-0xC)); /* 0x171C10DC: mov edx, dword ptr [ebp - 0xc] */
L_171C10DF:
    eax = MEM32(ebp + (-0x18)); /* 0x171C10DF: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 8; /* 0x171C10E2: add edx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171C10E5: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, eax */ /* 0x171C10E6: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = edx; /* 0x171C10E8: mov dword ptr [ebp - 0xc], edx */
    MEM32(ebp + (-0x10)) = ecx; /* 0x171C10EB: mov dword ptr [ebp - 0x10], ecx */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171C1080; /* 0x171C10EE: jl 0x171c1080 */
L_171C10F0:
    edi = POP32_VAL(esp); /* 0x171C10F0: pop edi */
    esi = POP32_VAL(esp); /* 0x171C10F1: pop esi */
    ebx = POP32_VAL(esp); /* 0x171C10F2: pop ebx */
    esp = ebp; /* 0x171C10F3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171C10F5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171C10F6: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171C1100(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C1100u);

L_171C1100:
    edi = edi; /* 0x171C1100: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C1102: push ebp */
    ebp = esp; /* 0x171C1103: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x171C1105: sub esp, 8 */
    _flag_k = FK_CMP;
    eax = MEM32(ecx + 0x1C); /* 0x171C1108: mov eax, dword ptr [ecx + 0x1c] */
    ecx = MEM32(ecx + 0xC); /* 0x171C110B: mov ecx, dword ptr [ecx + 0xc] */
    PUSH32(esp, ebx); /* 0x171C110E: push ebx */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x171C110F: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x171C110F: shl eax, 3 */
    PUSH32(esp, esi); /* 0x171C1112: push esi */
    PUSH32(esp, edi); /* 0x171C1113: push edi */
    MEM32(ebp + (-0x8)) = eax; /* 0x171C1114: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0x4)) = ecx; /* 0x171C1117: mov dword ptr [ebp - 4], ecx */
    ecx = eax + eax; /* 0x171C111A: lea ecx, [eax + eax] */
    eax = MEM32(edx + 0x1C); /* 0x171C111D: mov eax, dword ptr [edx + 0x1c] */
    edx = MEM32(edx + 0xF4); /* 0x171C1120: mov edx, dword ptr [edx + 0xf4] */
    PUSH32(esp, eax); /* 0x171C1126: push eax */
    eax = MEM32(ebp + 0x8); /* 0x171C1127: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, edx); /* 0x171C112A: push edx */
    PUSH32(esp, eax); /* 0x171C112B: push eax */
    RECOMP_CALL(sub_171C0C90); /* 0x171C112C: call 0x171c0c90 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171C1131: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _mm[7] = MEM64(0x17025BB0); /* 0x171C1133: movq mm7, qword ptr [0x17025bb0] */
L_171C113A:
    edx = MEM32(ebp + (-0x8)); /* 0x171C113A: mov edx, dword ptr [ebp - 8] */
    _mm[0] = MEM64(0x17025BA8); /* 0x171C113D: movq mm0, qword ptr [0x17025ba8] */
    ebx = MEM32(ebp + 0xC); /* 0x171C1144: mov ebx, dword ptr [ebp + 0xc] */
    esi = MEM32(ebx + eax * 4); /* 0x171C1147: mov esi, dword ptr [ebx + eax*4] */
    ebx = MEM32(ebp + 0x8); /* 0x171C114A: mov ebx, dword ptr [ebp + 8] */
    edi = MEM32(ebx + eax * 4); /* 0x171C114D: mov edi, dword ptr [ebx + eax*4] */
    PUSH32(esp, eax); /* 0x171C1150: push eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171C1151: inc eax */
    _flag_k = FK_INC;
    ebx = MEM32(ebx + eax * 4); /* 0x171C1152: mov ebx, dword ptr [ebx + eax*4] */
L_171C1155:
    _mm[1] = MEM64(edi); /* 0x171C1155: movq mm1, qword ptr [edi] */
    _mm[3] = MEM64(ebx); /* 0x171C1158: movq mm3, qword ptr [ebx] */
    _mm[2] = _mm[1]; /* 0x171C115B: movq mm2, mm1 */
    _mm[4] = _mm[3]; /* 0x171C115E: movq mm4, mm3 */
    _mm[1] = mmx_psrlw(_mm[1], 8); /* 0x171C1161: psrlw mm1, 8 */
    _mm[3] = mmx_psrlw(_mm[3], 8); /* 0x171C1165: psrlw mm3, 8 */
    _mm[2] = (_mm[2] & _mm[7]); /* 0x171C1169: pand mm2, mm7 */
    _mm[4] = (_mm[4] & _mm[7]); /* 0x171C116C: pand mm4, mm7 */
    _mm[1] = mmx_paddw(_mm[1], _mm[2]); /* 0x171C116F: paddw mm1, mm2 */
    _mm[5] = MEM64(edi + 0x8); /* 0x171C1172: movq mm5, qword ptr [edi + 8] */
    _mm[4] = mmx_paddw(_mm[4], _mm[3]); /* 0x171C1176: paddw mm4, mm3 */
    _mm[3] = MEM64(ebx + 0x8); /* 0x171C1179: movq mm3, qword ptr [ebx + 8] */
    _mm[1] = mmx_paddw(_mm[1], _mm[4]); /* 0x171C117D: paddw mm1, mm4 */
    _mm[6] = _mm[5]; /* 0x171C1180: movq mm6, mm5 */
    _mm[5] = mmx_psrlw(_mm[5], 8); /* 0x171C1183: psrlw mm5, 8 */
    _mm[4] = _mm[3]; /* 0x171C1187: movq mm4, mm3 */
    _mm[3] = mmx_psrlw(_mm[3], 8); /* 0x171C118A: psrlw mm3, 8 */
    _mm[6] = (_mm[6] & _mm[7]); /* 0x171C118E: pand mm6, mm7 */
    _mm[4] = (_mm[4] & _mm[7]); /* 0x171C1191: pand mm4, mm7 */
    _mm[5] = mmx_paddw(_mm[5], _mm[6]); /* 0x171C1194: paddw mm5, mm6 */
    _mm[3] = mmx_paddw(_mm[3], _mm[4]); /* 0x171C1197: paddw mm3, mm4 */
    _mm[5] = mmx_paddw(_mm[5], _mm[3]); /* 0x171C119A: paddw mm5, mm3 */
    _mm[1] = mmx_paddw(_mm[1], _mm[0]); /* 0x171C119D: paddw mm1, mm0 */
    _mm[1] = mmx_psrlw(_mm[1], 2); /* 0x171C11A0: psrlw mm1, 2 */
    _mm[5] = mmx_paddw(_mm[5], _mm[0]); /* 0x171C11A4: paddw mm5, mm0 */
    _mm[5] = mmx_psrlw(_mm[5], 2); /* 0x171C11A7: psrlw mm5, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x10u; /* 0x171C11AB: add edi, 0x10 */
    _flag_k = FK_ADD;
    _mm[1] = mmx_packuswb(_mm[1], _mm[5]); /* 0x171C11AE: packuswb mm1, mm5 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x10u; /* 0x171C11B1: add ebx, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - 8; /* 0x171C11B4: sub edx, 8 */
    _flag_k = FK_CMP;
    MEM64(esi) = _mm[1]; /* 0x171C11B7: movq qword ptr [esi], mm1 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x171C11BA: add esi, 8 */
    _flag_k = FK_ADD;
    /* cmp edx, 8 */ /* 0x171C11BD: cmp edx, 8 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_171C1155; /* 0x171C11C0: jge 0x171c1155 */
L_171C11C2:
    eax = POP32_VAL(esp); /* 0x171C11C2: pop eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171C11C3: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, MEM32(ebp + (-0x4)) */ /* 0x171C11C4: cmp eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171C113A; /* 0x171C11C7: jl 0x171c113a */
L_171C11CD:
    /* emms */ /* 0x171C11CD: emms  */
    edi = POP32_VAL(esp); /* 0x171C11CF: pop edi */
    esi = POP32_VAL(esp); /* 0x171C11D0: pop esi */
    ebx = POP32_VAL(esp); /* 0x171C11D1: pop ebx */
    esp = ebp; /* 0x171C11D2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171C11D4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171C11D5: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171C11E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C11E0u);

L_171C11E0:
    edi = edi; /* 0x171C11E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C11E2: push ebp */
    ebp = esp; /* 0x171C11E3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x171C11E5: sub esp, 0x2c */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0xC); /* 0x171C11E8: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x171C11EB: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x171C11EC: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x171C11EF: push esi */
    esi = MEM32(eax + 0x1C); /* 0x171C11F0: mov esi, dword ptr [eax + 0x1c] */
    PUSH32(esp, edi); /* 0x171C11F3: push edi */
    edi = MEM32(ebp + 0x8); /* 0x171C11F4: mov edi, dword ptr [ebp + 8] */
    edx = MEM32(edi + 0x1C); /* 0x171C11F7: mov edx, dword ptr [edi + 0x1c] */
    eax = MEM32(edi + 0xF4); /* 0x171C11FA: mov eax, dword ptr [edi + 0xf4] */
    PUSH32(esp, edx); /* 0x171C1200: push edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x171C1201: add eax, 2 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x171C1204: push eax */
    if (3u) _cf = (((esi) >> 29) & 1u); /* 0x171C1205: shl esi, 3 */
    if (3u) { _flag_a = recomp_flags_pack((esi << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 3u; /* 0x171C1205: shl esi, 3 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xFFFFFFFCu; /* 0x171C1208: add ebx, -4 */
    _flag_k = FK_ADD;
    ecx = esi + esi; /* 0x171C120B: lea ecx, [esi + esi] */
    PUSH32(esp, ebx); /* 0x171C120E: push ebx */
    RECOMP_CALL(sub_171C0C90); /* 0x171C120F: call 0x171c0c90 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0xC0); /* 0x171C1214: mov eax, dword ptr [edi + 0xc0] */
    ecx = eax + eax * 4; /* 0x171C121A: lea ecx, [eax + eax*4] */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x171C121D: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x171C121D: shl ecx, 4 */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x171C1220: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x171C1220: shl eax, 4 */
    edx = ecx; /* 0x171C1223: mov edx, ecx */
    ecx = 0x4000u; /* 0x171C1225: mov ecx, 0x4000 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x171C122A: sub ecx, edx */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x10) = eax; /* 0x171C122C: mov dword ptr [ebp + 0x10], eax */
    eax = MEM32(ebp + 0xC); /* 0x171C122F: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax + 0xC); /* 0x171C1232: mov eax, dword ptr [eax + 0xc] */
    MEM32(ebp + 0x8) = ecx; /* 0x171C1235: mov dword ptr [ebp + 8], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171C1238: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x171C123A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x20)) = ecx; /* 0x171C123C: mov dword ptr [ebp - 0x20], ecx */
    MEM32(ebp + (-0x2C)) = eax; /* 0x171C123F: mov dword ptr [ebp - 0x2c], eax */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171C1446; /* 0x171C1242: jle 0x171c1446 */
L_171C1248:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xFFFFFFFEu; /* 0x171C1248: add esi, -2 */
    _flag_k = FK_ADD;
    eax = ebx; /* 0x171C124B: mov eax, ebx */
    MEM32(ebp + (-0x28)) = esi; /* 0x171C124D: mov dword ptr [ebp - 0x28], esi */
    MEM32(ebp + (-0x1C)) = eax; /* 0x171C1250: mov dword ptr [ebp - 0x1c], eax */
L_171C1253:
    edi = MEM32(eax + 0x4); /* 0x171C1253: mov edi, dword ptr [eax + 4] */
    edx = MEM32(ebp + 0x14); /* 0x171C1256: mov edx, dword ptr [ebp + 0x14] */
    esi = MEM32(edx + ecx * 4); /* 0x171C1259: mov esi, dword ptr [edx + ecx*4] */
    ecx = MEM32(eax + 0x8); /* 0x171C125C: mov ecx, dword ptr [eax + 8] */
    edx = MEM32(eax); /* 0x171C125F: mov edx, dword ptr [eax] */
    eax = MEM32(eax + 0xC); /* 0x171C1261: mov eax, dword ptr [eax + 0xc] */
    ebx = ecx + 0x2; /* 0x171C1264: lea ebx, [ecx + 2] */
    MEM32(ebp + (-0x10)) = ebx; /* 0x171C1267: mov dword ptr [ebp - 0x10], ebx */
    ebx = edi + 0x2; /* 0x171C126A: lea ebx, [edi + 2] */
    MEM32(ebp + (-0xC)) = ebx; /* 0x171C126D: mov dword ptr [ebp - 0xc], ebx */
    ebx = (uint32_t)MEM8(eax); /* 0x171C1270: movzx ebx, byte ptr [eax] */
    MEM32(ebp + 0xC) = ebx; /* 0x171C1273: mov dword ptr [ebp + 0xc], ebx */
    ebx = (uint32_t)MEM8(edx); /* 0x171C1276: movzx ebx, byte ptr [edx] */
    MEM32(ebp + (-0x24)) = ebx; /* 0x171C1279: mov dword ptr [ebp - 0x24], ebx */
    ebx = (uint32_t)MEM8(ecx); /* 0x171C127C: movzx ebx, byte ptr [ecx] */
    MEM32(ebp + (-0x8)) = ebx; /* 0x171C127F: mov dword ptr [ebp - 8], ebx */
    ebx = (uint32_t)MEM8(edi); /* 0x171C1282: movzx ebx, byte ptr [edi] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x171C1285: mov dword ptr [ebp - 4], ebx */
    ebx = eax + 0x2; /* 0x171C1288: lea ebx, [eax + 2] */
    eax = (uint32_t)MEM8(eax + 0x1); /* 0x171C128B: movzx eax, byte ptr [eax + 1] */
    MEM32(ebp + (-0x18)) = ebx; /* 0x171C128F: mov dword ptr [ebp - 0x18], ebx */
    ebx = edx + 0x2; /* 0x171C1292: lea ebx, [edx + 2] */
    edx = (uint32_t)MEM8(edx + 0x1); /* 0x171C1295: movzx edx, byte ptr [edx + 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x171C1299: add eax, edx */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + (-0x10)); /* 0x171C129B: mov edx, dword ptr [ebp - 0x10] */
    edx = (uint32_t)MEM8(edx); /* 0x171C129E: movzx edx, byte ptr [edx] */
    MEM32(ebp + (-0x14)) = ebx; /* 0x171C12A1: mov dword ptr [ebp - 0x14], ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x4)); /* 0x171C12A4: add edx, dword ptr [ebp - 4] */
    _flag_k = FK_ADD;
    ebx = MEM32(ebp + (-0xC)); /* 0x171C12A7: mov ebx, dword ptr [ebp - 0xc] */
    ebx = (uint32_t)MEM8(ebx); /* 0x171C12AA: movzx ebx, byte ptr [ebx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x171C12AD: add edx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x8)); /* 0x171C12AF: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edx; /* 0x171C12B2: add ebx, edx */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + 0xC); /* 0x171C12B4: mov edx, dword ptr [ebp + 0xc] */
    ecx = (uint32_t)MEM8(ecx + 0x1); /* 0x171C12B7: movzx ecx, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x171C12BB: add ebx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x24)); /* 0x171C12BD: mov eax, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x171C12C0: add ebx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edx; /* 0x171C12C2: add ebx, edx */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + (-0x14)); /* 0x171C12C4: mov edx, dword ptr [ebp - 0x14] */
    edx = (uint32_t)MEM8(edx); /* 0x171C12C7: movzx edx, byte ptr [edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x171C12CA: add edx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x18)); /* 0x171C12CC: mov eax, dword ptr [ebp - 0x18] */
    eax = (uint32_t)MEM8(eax); /* 0x171C12CF: movzx eax, byte ptr [eax] */
    edx = edx + ebx * 2; /* 0x171C12D2: lea edx, [edx + ebx*2] */
    ebx = MEM32(ebp + 0xC); /* 0x171C12D5: mov ebx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x171C12D8: add eax, edx */
    _flag_k = FK_ADD;
    edx = (uint32_t)MEM8(edi + 0x1); /* 0x171C12DA: movzx edx, byte ptr [edi + 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x4)); /* 0x171C12DE: add ecx, dword ptr [ebp - 4] */
    _flag_k = FK_ADD;
    edi = MEM32(ebp + (-0x8)); /* 0x171C12E1: mov edi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x171C12E4: add edx, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x10)); /* 0x171C12E6: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x171C12E9: add eax, ebx */
    _flag_k = FK_ADD;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x10)); /* 0x171C12EB: imul eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x171C12EF: add edx, edi */
    _flag_k = FK_ADD;
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0x8)); /* 0x171C12F1: imul edx, dword ptr [ebp + 8] */
    edi = MEM32(ebp + (-0x28)); /* 0x171C12F5: mov edi, dword ptr [ebp - 0x28] */
    eax = eax + edx + 0x8000; /* 0x171C12F8: lea eax, [eax + edx + 0x8000] */
    edx = MEM32(ebp + (-0x18)); /* 0x171C12FF: mov edx, dword ptr [ebp - 0x18] */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x171C1302: sar eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 16u);
    MEM8(esi) = (uint8_t)(LO8(eax)); /* 0x171C1305: mov byte ptr [esi], al */
    eax = MEM32(ebp + (-0xC)); /* 0x171C1307: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171C130A: inc esi */
    _flag_k = FK_INC;
    /* test edi, edi */ /* 0x171C130B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = esi; /* 0x171C130D: mov dword ptr [ebp - 4], esi */
    esi = MEM32(ebp + (-0x14)); /* 0x171C1310: mov esi, dword ptr [ebp - 0x14] */
    MEM32(ebp + 0xC) = edx; /* 0x171C1313: mov dword ptr [ebp + 0xc], edx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171C13B3; /* 0x171C1316: jbe 0x171c13b3 */
L_171C131C:
    MEM32(ebp + (-0x18)) = edi; /* 0x171C131C: mov dword ptr [ebp - 0x18], edi */
    /* nop */ /* 0x171C131F: nop  */
L_171C1320:
    edi = (uint32_t)MEM8(edx + 0x1); /* 0x171C1320: movzx edi, byte ptr [edx + 1] */
    ebx = (uint32_t)MEM8(esi + 0x1); /* 0x171C1324: movzx ebx, byte ptr [esi + 1] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ebx; /* 0x171C1328: add edi, ebx */
    _flag_k = FK_ADD;
    ebx = (uint32_t)MEM8(ecx + (-0x1)); /* 0x171C132A: movzx ebx, byte ptr [ecx - 1] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ebx; /* 0x171C132E: add edi, ebx */
    _flag_k = FK_ADD;
    ebx = (uint32_t)MEM8(eax + (-0x1)); /* 0x171C1330: movzx ebx, byte ptr [eax - 1] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ebx; /* 0x171C1334: add edi, ebx */
    _flag_k = FK_ADD;
    ebx = (uint32_t)MEM8(edx); /* 0x171C1336: movzx ebx, byte ptr [edx] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ebx; /* 0x171C1339: add edi, ebx */
    _flag_k = FK_ADD;
    ebx = (uint32_t)MEM8(ecx + 0x2); /* 0x171C133B: movzx ebx, byte ptr [ecx + 2] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ebx; /* 0x171C133F: add edi, ebx */
    _flag_k = FK_ADD;
    ebx = (uint32_t)MEM8(esi); /* 0x171C1341: movzx ebx, byte ptr [esi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ebx; /* 0x171C1344: add edi, ebx */
    _flag_k = FK_ADD;
    ebx = (uint32_t)MEM8(eax + 0x2); /* 0x171C1346: movzx ebx, byte ptr [eax + 2] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ebx; /* 0x171C134A: add edi, ebx */
    _flag_k = FK_ADD;
    ebx = (uint32_t)MEM8(edx + (-0x1)); /* 0x171C134C: movzx ebx, byte ptr [edx - 1] */
    edx = (uint32_t)MEM8(edx + 0x2); /* 0x171C1350: movzx edx, byte ptr [edx + 2] */
    edi = ebx + edi * 2; /* 0x171C1354: lea edi, [ebx + edi*2] */
    ebx = (uint32_t)MEM8(esi + (-0x1)); /* 0x171C1357: movzx ebx, byte ptr [esi - 1] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ebx; /* 0x171C135B: add edi, ebx */
    _flag_k = FK_ADD;
    ebx = (uint32_t)MEM8(esi + 0x2); /* 0x171C135D: movzx ebx, byte ptr [esi + 2] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ebx; /* 0x171C1361: add edi, ebx */
    _flag_k = FK_ADD;
    ebx = (uint32_t)MEM8(eax + 0x1); /* 0x171C1363: movzx ebx, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x171C1367: add edi, edx */
    _flag_k = FK_ADD;
    edx = (uint32_t)MEM8(ecx + 0x1); /* 0x171C1369: movzx edx, byte ptr [ecx + 1] */
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(ebp + 0x10)); /* 0x171C136D: imul edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ebx; /* 0x171C1371: add edx, ebx */
    _flag_k = FK_ADD;
    ebx = (uint32_t)MEM8(ecx); /* 0x171C1373: movzx ebx, byte ptr [ecx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ebx; /* 0x171C1376: add edx, ebx */
    _flag_k = FK_ADD;
    ebx = (uint32_t)MEM8(eax); /* 0x171C1378: movzx ebx, byte ptr [eax] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ebx; /* 0x171C137B: add edx, ebx */
    _flag_k = FK_ADD;
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0x8)); /* 0x171C137D: imul edx, dword ptr [ebp + 8] */
    edx = edi + edx + 0x8000; /* 0x171C1381: lea edx, [edi + edx + 0x8000] */
    edi = MEM32(ebp + (-0x4)); /* 0x171C1388: mov edi, dword ptr [ebp - 4] */
    if (16u) _cf = (((edx) >> 15) & 1u); /* 0x171C138B: sar edx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 16u);
    MEM8(edi) = (uint8_t)(LO8(edx)); /* 0x171C138E: mov byte ptr [edi], dl */
    edx = MEM32(ebp + 0xC); /* 0x171C1390: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171C1393: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = edi; /* 0x171C1394: mov dword ptr [ebp - 4], edi */
    edi = MEM32(ebp + (-0x18)); /* 0x171C1397: mov edi, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x171C139A: add edx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x171C139D: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x171C13A0: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x171C13A3: add esi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x171C13A6: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + 0xC) = edx; /* 0x171C13A7: mov dword ptr [ebp + 0xc], edx */
    MEM32(ebp + (-0x18)) = edi; /* 0x171C13AA: mov dword ptr [ebp - 0x18], edi */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171C1320; /* 0x171C13AD: jne 0x171c1320 */
L_171C13B3:
    edi = (uint32_t)MEM8(edx + 0x1); /* 0x171C13B3: movzx edi, byte ptr [edx + 1] */
    ebx = (uint32_t)MEM8(eax + (-0x1)); /* 0x171C13B7: movzx ebx, byte ptr [eax - 1] */
    edx = (uint32_t)MEM8(edx); /* 0x171C13BB: movzx edx, byte ptr [edx] */
    MEM32(ebp + (-0x18)) = edi; /* 0x171C13BE: mov dword ptr [ebp - 0x18], edi */
    edi = (uint32_t)MEM8(ecx + 0x1); /* 0x171C13C1: movzx edi, byte ptr [ecx + 1] */
    MEM32(ebp + (-0x10)) = edi; /* 0x171C13C5: mov dword ptr [ebp - 0x10], edi */
    edi = (uint32_t)MEM8(eax + 0x1); /* 0x171C13C8: movzx edi, byte ptr [eax + 1] */
    MEM32(ebp + (-0x14)) = edi; /* 0x171C13CC: mov dword ptr [ebp - 0x14], edi */
    edi = (uint32_t)MEM8(ecx + (-0x1)); /* 0x171C13CF: movzx edi, byte ptr [ecx - 1] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ebx; /* 0x171C13D3: add edi, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x14)); /* 0x171C13D5: add edx, dword ptr [ebp - 0x14] */
    _flag_k = FK_ADD;
    ebx = (uint32_t)MEM8(esi); /* 0x171C13D8: movzx ebx, byte ptr [esi] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x171C13DB: add edx, edi */
    _flag_k = FK_ADD;
    edi = MEM32(ebp + (-0x18)); /* 0x171C13DD: mov edi, dword ptr [ebp - 0x18] */
    ecx = (uint32_t)MEM8(ecx); /* 0x171C13E0: movzx ecx, byte ptr [ecx] */
    eax = (uint32_t)MEM8(eax); /* 0x171C13E3: movzx eax, byte ptr [eax] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edx; /* 0x171C13E6: add ebx, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + (-0x10)); /* 0x171C13E8: add ebx, dword ptr [ebp - 0x10] */
    _flag_k = FK_ADD;
    edx = (uint32_t)MEM8(esi + 0x1); /* 0x171C13EB: movzx edx, byte ptr [esi + 1] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edx; /* 0x171C13EF: add ebx, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edi; /* 0x171C13F1: add ebx, edi */
    _flag_k = FK_ADD;
    edi = MEM32(ebp + 0xC); /* 0x171C13F3: mov edi, dword ptr [ebp + 0xc] */
    edi = (uint32_t)MEM8(edi + (-0x1)); /* 0x171C13F6: movzx edi, byte ptr [edi - 1] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x171C13FA: add edi, edx */
    _flag_k = FK_ADD;
    edx = (uint32_t)MEM8(esi + (-0x1)); /* 0x171C13FC: movzx edx, byte ptr [esi - 1] */
    esi = edi + ebx * 2; /* 0x171C1400: lea esi, [edi + ebx*2] */
    ebx = MEM32(ebp + (-0x18)); /* 0x171C1403: mov ebx, dword ptr [ebp - 0x18] */
    edi = MEM32(ebp + (-0x14)); /* 0x171C1406: mov edi, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x171C1409: add edx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x171C140B: add ecx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x171C140D: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ebx; /* 0x171C140F: add edx, ebx */
    _flag_k = FK_ADD;
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0x10)); /* 0x171C1411: imul edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x10)); /* 0x171C1415: add eax, dword ptr [ebp - 0x10] */
    _flag_k = FK_ADD;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x8)); /* 0x171C1418: imul eax, dword ptr [ebp + 8] */
    ecx = edx + eax + 0x8000; /* 0x171C141C: lea ecx, [edx + eax + 0x8000] */
    edx = MEM32(ebp + (-0x4)); /* 0x171C1423: mov edx, dword ptr [ebp - 4] */
    eax = MEM32(ebp + (-0x1C)); /* 0x171C1426: mov eax, dword ptr [ebp - 0x1c] */
    if (16u) _cf = (((ecx) >> 15) & 1u); /* 0x171C1429: sar ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 16u);
    MEM8(edx) = (uint8_t)(LO8(ecx)); /* 0x171C142C: mov byte ptr [edx], cl */
    ecx = MEM32(ebp + (-0x20)); /* 0x171C142E: mov ecx, dword ptr [ebp - 0x20] */
    edx = MEM32(ebp + (-0x2C)); /* 0x171C1431: mov edx, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 8; /* 0x171C1434: add eax, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171C1437: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, edx */ /* 0x171C1438: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x1C)) = eax; /* 0x171C143A: mov dword ptr [ebp - 0x1c], eax */
    MEM32(ebp + (-0x20)) = ecx; /* 0x171C143D: mov dword ptr [ebp - 0x20], ecx */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171C1253; /* 0x171C1440: jl 0x171c1253 */
L_171C1446:
    edi = POP32_VAL(esp); /* 0x171C1446: pop edi */
    esi = POP32_VAL(esp); /* 0x171C1447: pop esi */
    ebx = POP32_VAL(esp); /* 0x171C1448: pop ebx */
    esp = ebp; /* 0x171C1449: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171C144B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x171C144C: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_171C1460(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C1460u);

L_171C1460:
    edi = edi; /* 0x171C1460: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C1462: push ebp */
    ebp = esp; /* 0x171C1463: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x171C1465: sub esp, 0x20 */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x10); /* 0x171C1468: mov edx, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x171C146B: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x171C146C: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x171C146F: push esi */
    esi = MEM32(ebx + 0x1C); /* 0x171C1470: mov esi, dword ptr [ebx + 0x1c] */
    PUSH32(esp, edi); /* 0x171C1473: push edi */
    edi = MEM32(ebp + 0x8); /* 0x171C1474: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0x1C); /* 0x171C1477: mov eax, dword ptr [edi + 0x1c] */
    ecx = MEM32(edi + 0xF4); /* 0x171C147A: mov ecx, dword ptr [edi + 0xf4] */
    PUSH32(esp, eax); /* 0x171C1480: push eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x171C1481: add ecx, 2 */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x171C1484: push ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0xFFFFFFFCu; /* 0x171C1485: add edx, -4 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((esi) >> 29) & 1u); /* 0x171C1488: shl esi, 3 */
    if (3u) { _flag_a = recomp_flags_pack((esi << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 3u; /* 0x171C1488: shl esi, 3 */
    PUSH32(esp, edx); /* 0x171C148B: push edx */
    ecx = esi; /* 0x171C148C: mov ecx, esi */
    RECOMP_CALL(sub_171C0C90); /* 0x171C148E: call 0x171c0c90 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0xC0); /* 0x171C1493: mov eax, dword ptr [edi + 0xc0] */
    ebx = MEM32(ebx + 0xC); /* 0x171C1499: mov ebx, dword ptr [ebx + 0xc] */
    ecx = 0x80u; /* 0x171C149C: mov ecx, 0x80 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x171C14A1: sub ecx, eax */
    _flag_k = FK_CMP;
    if (9u) _cf = (((ecx) >> 23) & 1u); /* 0x171C14A3: shl ecx, 9 */
    if (9u) { _flag_a = recomp_flags_pack((ecx << 9u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 9u; /* 0x171C14A3: shl ecx, 9 */
    MEM32(ebp + (-0x4)) = ecx; /* 0x171C14A6: mov dword ptr [ebp - 4], ecx */
    if (6u) _cf = (((eax) >> 26) & 1u); /* 0x171C14A9: shl eax, 6 */
    if (6u) { _flag_a = recomp_flags_pack((eax << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 6u; /* 0x171C14A9: shl eax, 6 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171C14AC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x171C14AE: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = eax; /* 0x171C14B0: mov dword ptr [ebp + 8], eax */
    MEM32(ebp + (-0x14)) = ecx; /* 0x171C14B3: mov dword ptr [ebp - 0x14], ecx */
    MEM32(ebp + (-0x20)) = ebx; /* 0x171C14B6: mov dword ptr [ebp - 0x20], ebx */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171C15CB; /* 0x171C14B9: jle 0x171c15cb */
L_171C14BF:
    eax = MEM32(ebp + 0x10); /* 0x171C14BF: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xFFFFFFFEu; /* 0x171C14C2: add esi, -2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171C14C5: add eax, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = esi; /* 0x171C14C8: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x18)) = eax; /* 0x171C14CB: mov dword ptr [ebp - 0x18], eax */
    edi = edi; /* 0x171C14CE: mov edi, edi */
L_171C14D0:
    edx = MEM32(ebp + 0x14); /* 0x171C14D0: mov edx, dword ptr [ebp + 0x14] */
    ecx = MEM32(edx + ecx * 4); /* 0x171C14D3: mov ecx, dword ptr [edx + ecx*4] */
    edi = MEM32(eax + (-0x8)); /* 0x171C14D6: mov edi, dword ptr [eax - 8] */
    edx = (uint32_t)MEM8(edi); /* 0x171C14D9: movzx edx, byte ptr [edi] */
    MEM32(ebp + 0xC) = ecx; /* 0x171C14DC: mov dword ptr [ebp + 0xc], ecx */
    ecx = MEM32(eax + (-0x4)); /* 0x171C14DF: mov ecx, dword ptr [eax - 4] */
    eax = MEM32(eax); /* 0x171C14E2: mov eax, dword ptr [eax] */
    esi = (uint32_t)MEM8(ecx); /* 0x171C14E4: movzx esi, byte ptr [ecx] */
    ebx = (uint32_t)MEM8(eax); /* 0x171C14E7: movzx ebx, byte ptr [eax] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + esi; /* 0x171C14EA: add ebx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ebx; /* 0x171C14EC: add edx, ebx */
    _flag_k = FK_ADD;
    ebx = (uint32_t)MEM8(eax + 0x1); /* 0x171C14EE: movzx ebx, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171C14F2: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + 0x10) = edx; /* 0x171C14F3: mov dword ptr [ebp + 0x10], edx */
    edx = (uint32_t)MEM8(ecx + 0x1); /* 0x171C14F6: movzx edx, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edx; /* 0x171C14FA: add ebx, edx */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + 0x10); /* 0x171C14FC: mov edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171C14FF: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171C1500: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edx; /* 0x171C1501: add edx, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x171C1503: sub edx, esi */
    _flag_k = FK_CMP;
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ebp + (-0x4))); /* 0x171C1505: imul esi, dword ptr [ebp - 4] */
    MEM32(ebp + (-0x8)) = eax; /* 0x171C1509: mov dword ptr [ebp - 8], eax */
    eax = (uint32_t)MEM8(edi); /* 0x171C150C: movzx eax, byte ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x171C150F: add eax, ebx */
    _flag_k = FK_ADD;
    ebx = MEM32(ebp + (-0x1C)); /* 0x171C1511: mov ebx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x171C1514: add edx, eax */
    _flag_k = FK_ADD;
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0x8)); /* 0x171C1516: imul edx, dword ptr [ebp + 8] */
    edx = edx + esi + 0x8000; /* 0x171C151A: lea edx, [edx + esi + 0x8000] */
    esi = MEM32(ebp + 0xC); /* 0x171C1521: mov esi, dword ptr [ebp + 0xc] */
    if (16u) _cf = (((edx) >> 15) & 1u); /* 0x171C1524: sar edx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 16u);
    MEM8(esi) = (uint8_t)(LO8(edx)); /* 0x171C1527: mov byte ptr [esi], dl */
    edx = MEM32(ebp + 0x10); /* 0x171C1529: mov edx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171C152C: inc esi */
    _flag_k = FK_INC;
    /* test ebx, ebx */ /* 0x171C152D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = esi; /* 0x171C152F: mov dword ptr [ebp + 0xc], esi */
    MEM32(ebp + (-0xC)) = edx; /* 0x171C1532: mov dword ptr [ebp - 0xc], edx */
    MEM32(ebp + 0x10) = eax; /* 0x171C1535: mov dword ptr [ebp + 0x10], eax */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171C1593; /* 0x171C1538: jbe 0x171c1593 */
L_171C153A:
    MEM32(ebp + (-0x10)) = ebx; /* 0x171C153A: mov dword ptr [ebp - 0x10], ebx */
    ecx = ecx; /* 0x171C153D: lea ecx, [ecx] */
L_171C1540:
    esi = (uint32_t)MEM8(ecx); /* 0x171C1540: movzx esi, byte ptr [ecx] */
    eax = MEM32(ebp + (-0x8)); /* 0x171C1543: mov eax, dword ptr [ebp - 8] */
    ebx = (uint32_t)MEM8(eax + 0x1); /* 0x171C1546: movzx ebx, byte ptr [eax + 1] */
    edx = (uint32_t)MEM8(ecx + 0x1); /* 0x171C154A: movzx edx, byte ptr [ecx + 1] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171C154E: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edx; /* 0x171C154F: add ebx, edx */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + (-0xC)); /* 0x171C1551: mov edx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171C1554: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171C1555: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x171C1556: sub edx, esi */
    _flag_k = FK_CMP;
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ebp + (-0x4))); /* 0x171C1558: imul esi, dword ptr [ebp - 4] */
    MEM32(ebp + (-0x8)) = eax; /* 0x171C155C: mov dword ptr [ebp - 8], eax */
    eax = (uint32_t)MEM8(edi); /* 0x171C155F: movzx eax, byte ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x171C1562: add eax, ebx */
    _flag_k = FK_ADD;
    ebx = MEM32(ebp + 0x10); /* 0x171C1564: mov ebx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x171C1567: add edx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ebx; /* 0x171C1569: add edx, ebx */
    _flag_k = FK_ADD;
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0x8)); /* 0x171C156B: imul edx, dword ptr [ebp + 8] */
    edx = edx + esi + 0x8000; /* 0x171C156F: lea edx, [edx + esi + 0x8000] */
    esi = MEM32(ebp + 0xC); /* 0x171C1576: mov esi, dword ptr [ebp + 0xc] */
    if (16u) _cf = (((edx) >> 15) & 1u); /* 0x171C1579: sar edx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 16u);
    MEM8(esi) = (uint8_t)(LO8(edx)); /* 0x171C157C: mov byte ptr [esi], dl */
    edx = ebx; /* 0x171C157E: mov edx, ebx */
    ebx = MEM32(ebp + (-0x10)); /* 0x171C1580: mov ebx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171C1583: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x171C1584: dec ebx */
    _flag_k = FK_DEC;
    MEM32(ebp + 0xC) = esi; /* 0x171C1585: mov dword ptr [ebp + 0xc], esi */
    MEM32(ebp + (-0xC)) = edx; /* 0x171C1588: mov dword ptr [ebp - 0xc], edx */
    MEM32(ebp + 0x10) = eax; /* 0x171C158B: mov dword ptr [ebp + 0x10], eax */
    MEM32(ebp + (-0x10)) = ebx; /* 0x171C158E: mov dword ptr [ebp - 0x10], ebx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171C1540; /* 0x171C1591: jne 0x171c1540 */
L_171C1593:
    ecx = (uint32_t)MEM8(ecx); /* 0x171C1593: movzx ecx, byte ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x171C1596: add eax, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x171C1598: sub eax, ecx */
    _flag_k = FK_CMP;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(ebp + (-0x4))); /* 0x171C159A: imul ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x171C159E: add eax, edx */
    _flag_k = FK_ADD;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x8)); /* 0x171C15A0: imul eax, dword ptr [ebp + 8] */
    edx = MEM32(ebp + (-0x20)); /* 0x171C15A4: mov edx, dword ptr [ebp - 0x20] */
    ecx = eax + ecx + 0x8000; /* 0x171C15A7: lea ecx, [eax + ecx + 0x8000] */
    eax = MEM32(ebp + (-0x18)); /* 0x171C15AE: mov eax, dword ptr [ebp - 0x18] */
    if (16u) _cf = (((ecx) >> 15) & 1u); /* 0x171C15B1: sar ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 16u);
    MEM8(esi) = (uint8_t)(LO8(ecx)); /* 0x171C15B4: mov byte ptr [esi], cl */
    ecx = MEM32(ebp + (-0x14)); /* 0x171C15B6: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171C15B9: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171C15BA: add eax, 4 */
    _flag_k = FK_ADD;
    /* cmp ecx, edx */ /* 0x171C15BD: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x14)) = ecx; /* 0x171C15BF: mov dword ptr [ebp - 0x14], ecx */
    MEM32(ebp + (-0x18)) = eax; /* 0x171C15C2: mov dword ptr [ebp - 0x18], eax */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171C14D0; /* 0x171C15C5: jl 0x171c14d0 */
L_171C15CB:
    edi = POP32_VAL(esp); /* 0x171C15CB: pop edi */
    esi = POP32_VAL(esp); /* 0x171C15CC: pop esi */
    ebx = POP32_VAL(esp); /* 0x171C15CD: pop ebx */
    esp = ebp; /* 0x171C15CE: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171C15D0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x171C15D1: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_171C15E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C15E0u);

L_171C15E0:
    edi = edi; /* 0x171C15E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C15E2: push ebp */
    ebp = esp; /* 0x171C15E3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171C15E5: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171C15E6: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x171C15E9: push edi */
    edi = MEM32(ebp + 0x10); /* 0x171C15EA: mov edi, dword ptr [ebp + 0x10] */
    /* test MEM8(edi), 7 */ /* 0x171C15ED: test byte ptr [edi], 7 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171C1603; /* 0x171C15F0: je 0x171c1603 */
L_171C15F2:
    eax = MEM32(esi); /* 0x171C15F2: mov eax, dword ptr [esi] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x171C15F4: push -1 */
    PUSH32(esp, esi); /* 0x171C15F6: push esi */
    MEM32(eax + 0x14) = 2; /* 0x171C15F7: mov dword ptr [eax + 0x14], 2 */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171C15FE: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    goto L_171C1613; /* 0x171C1601: jmp 0x171c1613 */
L_171C1603:
    eax = MEM32(esi + 0xC4); /* 0x171C1603: mov eax, dword ptr [esi + 0xc4] */
    /* cmp eax, 5 */ /* 0x171C1609: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C1629; /* 0x171C160C: je 0x171c1629 */
L_171C160E:
    /* cmp eax, 6 */ /* 0x171C160E: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C1629; /* 0x171C1611: je 0x171c1629 */
L_171C1613:
    eax = MEM32(ebp + 0x14); /* 0x171C1613: mov eax, dword ptr [ebp + 0x14] */
    edx = MEM32(ebp + 0xC); /* 0x171C1616: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x171C1619: push eax */
    ecx = edi; /* 0x171C161A: mov ecx, edi */
    eax = esi; /* 0x171C161C: mov eax, esi */
    RECOMP_CALL(sub_171C0F00); /* 0x171C161E: call 0x171c0f00 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x171C1623: pop edi */
    esi = POP32_VAL(esp); /* 0x171C1624: pop esi */
    ebp = POP32_VAL(esp); /* 0x171C1625: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x171C1626: ret 0x10 */
L_171C1629:
    ecx = MEM32(ebp + 0x14); /* 0x171C1629: mov ecx, dword ptr [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x171C162C: push ecx */
    ecx = MEM32(ebp + 0xC); /* 0x171C162D: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x171C1630: push edi */
    edx = esi; /* 0x171C1631: mov edx, esi */
    RECOMP_CALL(sub_171C0F90); /* 0x171C1633: call 0x171c0f90 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x171C1638: pop edi */
    esi = POP32_VAL(esp); /* 0x171C1639: pop esi */
    ebp = POP32_VAL(esp); /* 0x171C163A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x171C163B: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_171C1650(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C1650u);

L_171C1650:
    edi = edi; /* 0x171C1650: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C1652: push ebp */
    ebp = esp; /* 0x171C1653: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171C1655: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171C1656: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x171C1659: push edi */
    edi = MEM32(ebp + 0x10); /* 0x171C165A: mov edi, dword ptr [ebp + 0x10] */
    /* test MEM8(edi), 7 */ /* 0x171C165D: test byte ptr [edi], 7 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171C1673; /* 0x171C1660: je 0x171c1673 */
L_171C1662:
    eax = MEM32(esi); /* 0x171C1662: mov eax, dword ptr [esi] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x171C1664: push -1 */
    PUSH32(esp, esi); /* 0x171C1666: push esi */
    MEM32(eax + 0x14) = 2; /* 0x171C1667: mov dword ptr [eax + 0x14], 2 */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171C166E: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    goto L_171C1683; /* 0x171C1671: jmp 0x171c1683 */
L_171C1673:
    eax = MEM32(esi + 0xC4); /* 0x171C1673: mov eax, dword ptr [esi + 0xc4] */
    /* cmp eax, 5 */ /* 0x171C1679: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C1699; /* 0x171C167C: je 0x171c1699 */
L_171C167E:
    /* cmp eax, 6 */ /* 0x171C167E: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C1699; /* 0x171C1681: je 0x171c1699 */
L_171C1683:
    eax = MEM32(ebp + 0x14); /* 0x171C1683: mov eax, dword ptr [ebp + 0x14] */
    edx = MEM32(ebp + 0xC); /* 0x171C1686: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x171C1689: push eax */
    ecx = edi; /* 0x171C168A: mov ecx, edi */
    eax = esi; /* 0x171C168C: mov eax, esi */
    RECOMP_CALL(sub_171C1040); /* 0x171C168E: call 0x171c1040 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x171C1693: pop edi */
    esi = POP32_VAL(esp); /* 0x171C1694: pop esi */
    ebp = POP32_VAL(esp); /* 0x171C1695: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x171C1696: ret 0x10 */
L_171C1699:
    ecx = MEM32(ebp + 0x14); /* 0x171C1699: mov ecx, dword ptr [ebp + 0x14] */
    PUSH32(esp, ecx); /* 0x171C169C: push ecx */
    ecx = MEM32(ebp + 0xC); /* 0x171C169D: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x171C16A0: push edi */
    edx = esi; /* 0x171C16A1: mov edx, esi */
    RECOMP_CALL(sub_171C1100); /* 0x171C16A3: call 0x171c1100 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x171C16A8: pop edi */
    esi = POP32_VAL(esp); /* 0x171C16A9: pop esi */
    ebp = POP32_VAL(esp); /* 0x171C16AA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x171C16AB: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_171C16C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C16C0u);

L_171C16C0:
    edi = edi; /* 0x171C16C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C16C2: push ebp */
    ebp = esp; /* 0x171C16C3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x171C16C5: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x171C16C8: push ebx */
    PUSH32(esp, esi); /* 0x171C16C9: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171C16CA: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x4); /* 0x171C16CD: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, edi); /* 0x171C16D0: push edi */
    PUSH32(esp, 0x34u); /* 0x171C16D1: push 0x34 */
    PUSH32(esp, 1); /* 0x171C16D3: push 1 */
    PUSH32(esp, esi); /* 0x171C16D5: push esi */
    MEM32(ebp + (-0x4)) = 1; /* 0x171C16D6: mov dword ptr [ebp - 4], 1 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171C16DD: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x171C16DF: mov edi, eax */
    eax = MEM32(esi + 0xBC); /* 0x171C16E1: mov eax, dword ptr [esi + 0xbc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171C16E7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ebx */ /* 0x171C16E9: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = edi; /* 0x171C16EB: mov dword ptr [ebp - 8], edi */
    MEM32(esi + 0x16C) = edi; /* 0x171C16EE: mov dword ptr [esi + 0x16c], edi */
    MEM32(edi) = 0x171BC250u; /* 0x171C16F4: mov dword ptr [edi], 0x171bc250 */
    MEM32(edi + 0x4) = 0x171C0CF0u; /* 0x171C16FA: mov dword ptr [edi + 4], 0x171c0cf0 */
    MEM32(edi + 0x8) = ebx; /* 0x171C1701: mov dword ptr [edi + 8], ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C1712; /* 0x171C1704: je 0x171c1712 */
L_171C1706:
    eax = MEM32(esi); /* 0x171C1706: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171C1708: push esi */
    MEM32(eax + 0x14) = 0x19u; /* 0x171C1709: mov dword ptr [eax + 0x14], 0x19 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171C1710: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171C1712:
    eax = MEM32(esi + 0x3C); /* 0x171C1712: mov eax, dword ptr [esi + 0x3c] */
    /* test eax, eax */ /* 0x171C1715: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = ebx; /* 0x171C1717: mov dword ptr [ebp - 0xc], ebx */
    ebx = MEM32(esi + 0x44); /* 0x171C171A: mov ebx, dword ptr [esi + 0x44] */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171C180E; /* 0x171C171D: jle 0x171c180e */
L_171C1723:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0xCu; /* 0x171C1723: add ebx, 0xc */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = ebx; /* 0x171C1726: mov dword ptr [ebp + 8], ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0xCu; /* 0x171C1729: add edi, 0xc */
    _flag_k = FK_ADD;
    esp = esp; /* 0x171C172C: lea esp, [esp] */
L_171C1730:
    ecx = MEM32(ebx + (-0x4)); /* 0x171C1730: mov ecx, dword ptr [ebx - 4] */
    eax = MEM32(esi + 0xF0); /* 0x171C1733: mov eax, dword ptr [esi + 0xf0] */
    /* cmp ecx, eax */ /* 0x171C1739: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C1771; /* 0x171C173B: jne 0x171c1771 */
L_171C173D:
    edx = MEM32(ebx); /* 0x171C173D: mov edx, dword ptr [ebx] */
    /* cmp edx, MEM32(esi + 0xF4) */ /* 0x171C173F: cmp edx, dword ptr [esi + 0xf4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0xF4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C1771; /* 0x171C1745: jne 0x171c1771 */
L_171C1747:
    eax = MEM32(esi + 0xC0); /* 0x171C1747: mov eax, dword ptr [esi + 0xc0] */
    /* test eax, eax */ /* 0x171C174D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171C1766; /* 0x171C174F: je 0x171c1766 */
L_171C1751:
    eax = MEM32(ebp + (-0x8)); /* 0x171C1751: mov eax, dword ptr [ebp - 8] */
    MEM32(edi) = 0x171C1460u; /* 0x171C1754: mov dword ptr [edi], 0x171c1460 */
    MEM32(eax + 0x8) = 1; /* 0x171C175A: mov dword ptr [eax + 8], 1 */
    goto L_171C17F3; /* 0x171C1761: jmp 0x171c17f3 */
L_171C1766:
    MEM32(edi) = 0x171C0EB0u; /* 0x171C1766: mov dword ptr [edi], 0x171c0eb0 */
    goto L_171C17F3; /* 0x171C176C: jmp 0x171c17f3 */
L_171C1771:
    edx = ecx + ecx; /* 0x171C1771: lea edx, [ecx + ecx] */
    /* cmp edx, eax */ /* 0x171C1774: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C17C8; /* 0x171C1776: jne 0x171c17c8 */
L_171C1778:
    ebx = MEM32(ebx); /* 0x171C1778: mov ebx, dword ptr [ebx] */
    /* cmp ebx, MEM32(esi + 0xF4) */ /* 0x171C177A: cmp ebx, dword ptr [esi + 0xf4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + 0xF4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + 0x8); /* 0x171C1780: mov ebx, dword ptr [ebp + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C1794; /* 0x171C1783: jne 0x171c1794 */
L_171C1785:
    MEM32(ebp + (-0x4)) = 0; /* 0x171C1785: mov dword ptr [ebp - 4], 0 */
    MEM32(edi) = 0x171C15E0u; /* 0x171C178C: mov dword ptr [edi], 0x171c15e0 */
    goto L_171C17F3; /* 0x171C1792: jmp 0x171c17f3 */
L_171C1794:
    /* cmp edx, eax */ /* 0x171C1794: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C17C8; /* 0x171C1796: jne 0x171c17c8 */
L_171C1798:
    edx = MEM32(ebx); /* 0x171C1798: mov edx, dword ptr [ebx] */
    if (1u) _cf = (((edx) >> 31) & 1u); /* 0x171C179A: shl edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 1u; /* 0x171C179A: shl edx, 1 */
    /* cmp edx, MEM32(esi + 0xF4) */ /* 0x171C179C: cmp edx, dword ptr [esi + 0xf4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0xF4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C17C8; /* 0x171C17A2: jne 0x171c17c8 */
L_171C17A4:
    eax = MEM32(esi + 0xC0); /* 0x171C17A4: mov eax, dword ptr [esi + 0xc0] */
    /* test eax, eax */ /* 0x171C17AA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171C17C0; /* 0x171C17AC: je 0x171c17c0 */
L_171C17AE:
    eax = MEM32(ebp + (-0x8)); /* 0x171C17AE: mov eax, dword ptr [ebp - 8] */
    MEM32(edi) = 0x171C11E0u; /* 0x171C17B1: mov dword ptr [edi], 0x171c11e0 */
    MEM32(eax + 0x8) = 1; /* 0x171C17B7: mov dword ptr [eax + 8], 1 */
    goto L_171C17F3; /* 0x171C17BE: jmp 0x171c17f3 */
L_171C17C0:
    MEM32(edi) = 0x171C1650u; /* 0x171C17C0: mov dword ptr [edi], 0x171c1650 */
    goto L_171C17F3; /* 0x171C17C6: jmp 0x171c17f3 */
L_171C17C8:
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x171C17C8: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)ecx; /* 0x171C17C9: idiv ecx */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    /* test edx, edx */ /* 0x171C17CB: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C17E7; /* 0x171C17CD: jne 0x171c17e7 */
L_171C17CF:
    eax = MEM32(esi + 0xF4); /* 0x171C17CF: mov eax, dword ptr [esi + 0xf4] */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x171C17D5: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ebx); /* 0x171C17D6: idiv dword ptr [ebx] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    /* test edx, edx */ /* 0x171C17D8: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C17E7; /* 0x171C17DA: jne 0x171c17e7 */
L_171C17DC:
    MEM32(ebp + (-0x4)) = edx; /* 0x171C17DC: mov dword ptr [ebp - 4], edx */
    MEM32(edi) = 0x171C0D90u; /* 0x171C17DF: mov dword ptr [edi], 0x171c0d90 */
    goto L_171C17F3; /* 0x171C17E5: jmp 0x171c17f3 */
L_171C17E7:
    eax = MEM32(esi); /* 0x171C17E7: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171C17E9: push esi */
    MEM32(eax + 0x14) = 0x26u; /* 0x171C17EA: mov dword ptr [eax + 0x14], 0x26 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171C17F1: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171C17F3:
    eax = MEM32(ebp + (-0xC)); /* 0x171C17F3: mov eax, dword ptr [ebp - 0xc] */
    ecx = MEM32(esi + 0x3C); /* 0x171C17F6: mov ecx, dword ptr [esi + 0x3c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171C17F9: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x54u; /* 0x171C17FA: add ebx, 0x54 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x171C17FD: add edi, 4 */
    _flag_k = FK_ADD;
    /* cmp eax, ecx */ /* 0x171C1800: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = eax; /* 0x171C1802: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + 0x8) = ebx; /* 0x171C1805: mov dword ptr [ebp + 8], ebx */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171C1730; /* 0x171C1808: jl 0x171c1730 */
L_171C180E:
    eax = MEM32(esi + 0xC0); /* 0x171C180E: mov eax, dword ptr [esi + 0xc0] */
    /* test eax, eax */ /* 0x171C1814: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171C182E; /* 0x171C1816: je 0x171c182e */
L_171C1818:
    eax = MEM32(ebp + (-0x4)); /* 0x171C1818: mov eax, dword ptr [ebp - 4] */
    /* test eax, eax */ /* 0x171C181B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C182E; /* 0x171C181D: jne 0x171c182e */
L_171C181F:
    eax = MEM32(esi); /* 0x171C181F: mov eax, dword ptr [esi] */
    PUSH32(esp, 0); /* 0x171C1821: push 0 */
    PUSH32(esp, esi); /* 0x171C1823: push esi */
    MEM32(eax + 0x14) = 0x63u; /* 0x171C1824: mov dword ptr [eax + 0x14], 0x63 */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x171C182B: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_171C182E:
    edi = POP32_VAL(esp); /* 0x171C182E: pop edi */
    esi = POP32_VAL(esp); /* 0x171C182F: pop esi */
    ebx = POP32_VAL(esp); /* 0x171C1830: pop ebx */
    esp = ebp; /* 0x171C1831: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171C1833: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171C1834: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171C1840(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C1840u);

L_171C1840:
    edi = edi; /* 0x171C1840: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C1842: push ebp */
    ebp = esp; /* 0x171C1843: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x171C1845: sub esp, 0xc */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x171C1848: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x4); /* 0x171C184B: mov ecx, dword ptr [eax + 4] */
    PUSH32(esp, ebx); /* 0x171C184E: push ebx */
    PUSH32(esp, esi); /* 0x171C184F: push esi */
    esi = MEM32(eax + 0x168); /* 0x171C1850: mov esi, dword ptr [eax + 0x168] */
    PUSH32(esp, edi); /* 0x171C1856: push edi */
    PUSH32(esp, 0x2000u); /* 0x171C1857: push 0x2000 */
    PUSH32(esp, 1); /* 0x171C185C: push 1 */
    PUSH32(esp, eax); /* 0x171C185E: push eax */
    RECOMP_ICALL(MEM32(ecx)); /* 0x171C185F: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171C1861: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x8) = eax; /* 0x171C1863: mov dword ptr [esi + 8], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171C1866: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171C1868: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = edx; /* 0x171C186A: mov dword ptr [ebp - 0xc], edx */
    MEM32(ebp + (-0x8)) = edx; /* 0x171C186D: mov dword ptr [ebp - 8], edx */
    MEM32(ebp + 0x8) = edx; /* 0x171C1870: mov dword ptr [ebp + 8], edx */
    MEM32(ebp + (-0x4)) = 0x00807FFFu; /* 0x171C1873: mov dword ptr [ebp - 4], 0x807fff */
    ecx = 0x8000u; /* 0x171C187A: mov ecx, 0x8000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x800u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x800u; /* 0x171C187F: add eax, 0x800 */
    _flag_k = FK_ADD;
L_171C1884:
    ebx = MEM32(ebp + 0x8); /* 0x171C1884: mov ebx, dword ptr [ebp + 8] */
    MEM32(eax + 0x800) = ebx; /* 0x171C1887: mov dword ptr [eax + 0x800], ebx */
    ebx = MEM32(ebp + (-0x4)); /* 0x171C188D: mov ebx, dword ptr [ebp - 4] */
    MEM32(eax + 0xC00) = ebx; /* 0x171C1890: mov dword ptr [eax + 0xc00], ebx */
    ebx = MEM32(ebp + (-0x8)); /* 0x171C1896: mov ebx, dword ptr [ebp - 8] */
    MEM32(eax + 0x1000) = ebx; /* 0x171C1899: mov dword ptr [eax + 0x1000], ebx */
    ebx = MEM32(ebp + (-0xC)); /* 0x171C189F: mov ebx, dword ptr [ebp - 0xc] */
    MEM32(eax + 0x1400) = ebx; /* 0x171C18A2: mov dword ptr [eax + 0x1400], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0x54CDu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) - 0x54CDu; /* 0x171C18A8: sub dword ptr [ebp + 8], 0x54cd */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0x8000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 0x8000u; /* 0x171C18AF: add dword ptr [ebp - 4], 0x8000 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0x6B2Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) - 0x6B2Fu; /* 0x171C18B6: sub dword ptr [ebp - 8], 0x6b2f */
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + (-0xC)); /* 0x171C18BD: mov ebx, dword ptr [ebp - 0xc] */
    MEM32(eax) = ecx; /* 0x171C18C0: mov dword ptr [eax], ecx */
    MEM32(eax + (-0x800)) = edx; /* 0x171C18C2: mov dword ptr [eax - 0x800], edx */
    MEM32(eax + (-0x400)) = esi; /* 0x171C18C8: mov dword ptr [eax - 0x400], esi */
    MEM32(eax + 0x400) = edi; /* 0x171C18CE: mov dword ptr [eax + 0x400], edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x1D2Fu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x1D2Fu; /* 0x171C18D4: add ecx, 0x1d2f */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x14D1u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 0x14D1u; /* 0x171C18DA: sub ebx, 0x14d1 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x4C8Bu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x4C8Bu; /* 0x171C18E0: add edx, 0x4c8b */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171C18E6: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x9646u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x9646u; /* 0x171C18E9: add esi, 0x9646 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x2B33u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 0x2B33u; /* 0x171C18EF: sub edi, 0x2b33 */
    _flag_k = FK_CMP;
    /* cmp ecx, 0x001D91D1u */ /* 0x171C18F5: cmp ecx, 0x1d91d1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x001D91D1u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = ebx; /* 0x171C18FB: mov dword ptr [ebp - 0xc], ebx */
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_171C1884; /* 0x171C18FE: jle 0x171c1884 */
L_171C1900:
    edi = POP32_VAL(esp); /* 0x171C1900: pop edi */
    esi = POP32_VAL(esp); /* 0x171C1901: pop esi */
    ebx = POP32_VAL(esp); /* 0x171C1902: pop ebx */
    esp = ebp; /* 0x171C1903: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171C1905: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171C1906: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171C1910(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C1910u);

L_171C1910:
    edi = edi; /* 0x171C1910: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C1912: push ebp */
    ebp = esp; /* 0x171C1913: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x171C1915: sub esp, 0x18 */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x8); /* 0x171C1918: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x168); /* 0x171C191B: mov eax, dword ptr [ecx + 0x168] */
    ecx = MEM32(ecx + 0x1C); /* 0x171C1921: mov ecx, dword ptr [ecx + 0x1c] */
    eax = MEM32(eax + 0x8); /* 0x171C1924: mov eax, dword ptr [eax + 8] */
    PUSH32(esp, edi); /* 0x171C1927: push edi */
    edi = MEM32(ebp + 0x18); /* 0x171C1928: mov edi, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x171C192B: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x8)) = ecx; /* 0x171C192C: mov dword ptr [ebp - 8], ecx */
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_171C1A27; /* 0x171C192F: js 0x171c1a27 */
L_171C1935:
    edx = MEM32(ebp + 0x14); /* 0x171C1935: mov edx, dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x171C1938: push ebx */
    PUSH32(esp, esi); /* 0x171C1939: push esi */
    esi = MEM32(ebp + 0x10); /* 0x171C193A: mov esi, dword ptr [ebp + 0x10] */
    ecx = MEM32(esi + 0x4); /* 0x171C193D: mov ecx, dword ptr [esi + 4] */
    ebx = MEM32(esi); /* 0x171C1940: mov ebx, dword ptr [esi] */
    esi = MEM32(esi + 0x8); /* 0x171C1942: mov esi, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x171C1945: sub ebx, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x171C1947: sub esi, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171C1949: inc edi */
    _flag_k = FK_INC;
    edx = ecx + edx * 4; /* 0x171C194A: lea edx, [ecx + edx*4] */
    MEM32(ebp + 0x14) = ebx; /* 0x171C194D: mov dword ptr [ebp + 0x14], ebx */
    MEM32(ebp + (-0x4)) = esi; /* 0x171C1950: mov dword ptr [ebp - 4], esi */
    MEM32(ebp + 0x10) = edi; /* 0x171C1953: mov dword ptr [ebp + 0x10], edi */
    goto L_171C1960; /* 0x171C1956: jmp 0x171c1960 */
L_171C1958:
    ebx = MEM32(ebp + 0x14); /* 0x171C1958: mov ebx, dword ptr [ebp + 0x14] */
    goto L_171C1960; /* 0x171C195B: jmp 0x171c1960 */
L_171C1960:
    edi = MEM32(ebx + edx); /* 0x171C1960: mov edi, dword ptr [ebx + edx] */
    ecx = MEM32(ebp + 0xC); /* 0x171C1963: mov ecx, dword ptr [ebp + 0xc] */
    esi = MEM32(ecx); /* 0x171C1966: mov esi, dword ptr [ecx] */
    ebx = MEM32(ebp + (-0x4)); /* 0x171C1968: mov ebx, dword ptr [ebp - 4] */
    ebx = MEM32(ebx + edx); /* 0x171C196B: mov ebx, dword ptr [ebx + edx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x171C196E: add ecx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = ecx; /* 0x171C1971: mov dword ptr [ebp + 0xc], ecx */
    ecx = MEM32(edx); /* 0x171C1974: mov ecx, dword ptr [edx] */
    MEM32(ebp + 0x8) = ebx; /* 0x171C1976: mov dword ptr [ebp + 8], ebx */
    ebx = MEM32(ebp + (-0x8)); /* 0x171C1979: mov ebx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x171C197C: add edx, 4 */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x171C197F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = edx; /* 0x171C1981: mov dword ptr [ebp - 0x18], edx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171C1A1C; /* 0x171C1984: jbe 0x171c1a1c */
L_171C198A:
    edx = MEM32(ebp + 0x8); /* 0x171C198A: mov edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x171C198D: sub edi, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x171C198F: sub edx, ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0xC)) = edi; /* 0x171C1991: mov dword ptr [ebp - 0xc], edi */
    MEM32(ebp + (-0x14)) = edx; /* 0x171C1994: mov dword ptr [ebp - 0x14], edx */
    MEM32(ebp + 0x18) = ebx; /* 0x171C1997: mov dword ptr [ebp + 0x18], ebx */
    ebx = ebx; /* 0x171C199A: lea ebx, [ebx] */
L_171C19A0:
    ebx = (uint32_t)MEM8(esi + 0x2); /* 0x171C19A0: movzx ebx, byte ptr [esi + 2] */
    edx = (uint32_t)MEM8(esi + 0x1); /* 0x171C19A4: movzx edx, byte ptr [esi + 1] */
    edi = (uint32_t)MEM8(esi); /* 0x171C19A8: movzx edi, byte ptr [esi] */
    MEM32(ebp + 0x8) = ebx; /* 0x171C19AB: mov dword ptr [ebp + 8], ebx */
    ebx = MEM32(eax + ebx * 4 + 0x800); /* 0x171C19AE: mov ebx, dword ptr [eax + ebx*4 + 0x800] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax + edx * 4 + 0x400));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(eax + edx * 4 + 0x400); /* 0x171C19B5: add ebx, dword ptr [eax + edx*4 + 0x400] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = edx; /* 0x171C19BC: mov dword ptr [ebp - 0x10], edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax + edi * 4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(eax + edi * 4); /* 0x171C19BF: add ebx, dword ptr [eax + edi*4] */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + (-0xC)); /* 0x171C19C2: mov edx, dword ptr [ebp - 0xc] */
    if (16u) _cf = (((ebx) >> 15) & 1u); /* 0x171C19C5: sar ebx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 16u);
    MEM8(edx + ecx) = (uint8_t)(LO8(ebx)); /* 0x171C19C8: mov byte ptr [edx + ecx], bl */
    edx = MEM32(ebp + 0x8); /* 0x171C19CB: mov edx, dword ptr [ebp + 8] */
    ebx = MEM32(eax + edx * 4 + 0x1400); /* 0x171C19CE: mov ebx, dword ptr [eax + edx*4 + 0x1400] */
    edx = MEM32(ebp + (-0x10)); /* 0x171C19D5: mov edx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax + edx * 4 + 0x1000));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(eax + edx * 4 + 0x1000); /* 0x171C19D8: add ebx, dword ptr [eax + edx*4 + 0x1000] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 3; /* 0x171C19DF: add esi, 3 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax + edi * 4 + 0xC00));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(eax + edi * 4 + 0xC00); /* 0x171C19E2: add ebx, dword ptr [eax + edi*4 + 0xc00] */
    _flag_k = FK_ADD;
    if (16u) _cf = (((ebx) >> 15) & 1u); /* 0x171C19E9: sar ebx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 16u);
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x171C19EC: mov byte ptr [ecx], bl */
    ebx = MEM32(ebp + 0x8); /* 0x171C19EE: mov ebx, dword ptr [ebp + 8] */
    ebx = MEM32(eax + ebx * 4 + 0x1C00); /* 0x171C19F1: mov ebx, dword ptr [eax + ebx*4 + 0x1c00] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax + edx * 4 + 0x1800));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(eax + edx * 4 + 0x1800); /* 0x171C19F8: add ebx, dword ptr [eax + edx*4 + 0x1800] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax + edi * 4 + 0x1400));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(eax + edi * 4 + 0x1400); /* 0x171C19FF: add ebx, dword ptr [eax + edi*4 + 0x1400] */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + (-0x14)); /* 0x171C1A06: mov edx, dword ptr [ebp - 0x14] */
    if (16u) _cf = (((ebx) >> 15) & 1u); /* 0x171C1A09: sar ebx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 16u);
    MEM8(edx + ecx) = (uint8_t)(LO8(ebx)); /* 0x171C1A0C: mov byte ptr [edx + ecx], bl */
    edx = MEM32(ebp + 0x18); /* 0x171C1A0F: mov edx, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171C1A12: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x171C1A13: dec edx */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x18) = edx; /* 0x171C1A14: mov dword ptr [ebp + 0x18], edx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171C19A0; /* 0x171C1A17: jne 0x171c19a0 */
L_171C1A19:
    edx = MEM32(ebp + (-0x18)); /* 0x171C1A19: mov edx, dword ptr [ebp - 0x18] */
L_171C1A1C:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1; /* 0x171C1A1C: dec dword ptr [ebp + 0x10] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171C1958; /* 0x171C1A1F: jne 0x171c1958 */
L_171C1A25:
    esi = POP32_VAL(esp); /* 0x171C1A25: pop esi */
    ebx = POP32_VAL(esp); /* 0x171C1A26: pop ebx */
L_171C1A27:
    edi = POP32_VAL(esp); /* 0x171C1A27: pop edi */
    esp = ebp; /* 0x171C1A28: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171C1A2A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x171C1A2B: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_171C1A40(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C1A40u);

L_171C1A40:
    edi = edi; /* 0x171C1A40: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C1A42: push ebp */
    ebp = esp; /* 0x171C1A43: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x171C1A45: sub esp, 0x1c */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x8); /* 0x171C1A48: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x24); /* 0x171C1A4B: mov eax, dword ptr [ecx + 0x24] */
    edx = MEM32(ecx + 0x168); /* 0x171C1A4E: mov edx, dword ptr [ecx + 0x168] */
    ecx = MEM32(ecx + 0x1C); /* 0x171C1A54: mov ecx, dword ptr [ecx + 0x1c] */
    PUSH32(esp, edi); /* 0x171C1A57: push edi */
    edi = MEM32(ebp + 0x18); /* 0x171C1A58: mov edi, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x171C1A5B: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0xC)) = eax; /* 0x171C1A5C: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(edx + 0x8); /* 0x171C1A5F: mov eax, dword ptr [edx + 8] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x171C1A62: mov dword ptr [ebp - 8], ecx */
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_171C1B57; /* 0x171C1A65: js 0x171c1b57 */
L_171C1A6B:
    edx = MEM32(ebp + 0x14); /* 0x171C1A6B: mov edx, dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x171C1A6E: push ebx */
    PUSH32(esp, esi); /* 0x171C1A6F: push esi */
    esi = MEM32(ebp + 0x10); /* 0x171C1A70: mov esi, dword ptr [ebp + 0x10] */
    ecx = MEM32(esi + 0x4); /* 0x171C1A73: mov ecx, dword ptr [esi + 4] */
    ebx = MEM32(esi); /* 0x171C1A76: mov ebx, dword ptr [esi] */
    esi = MEM32(esi + 0x8); /* 0x171C1A78: mov esi, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x171C1A7B: sub ebx, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x171C1A7D: sub esi, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171C1A7F: inc edi */
    _flag_k = FK_INC;
    edx = ecx + edx * 4; /* 0x171C1A80: lea edx, [ecx + edx*4] */
    MEM32(ebp + 0x14) = ebx; /* 0x171C1A83: mov dword ptr [ebp + 0x14], ebx */
    MEM32(ebp + (-0x4)) = esi; /* 0x171C1A86: mov dword ptr [ebp - 4], esi */
    MEM32(ebp + 0x10) = edi; /* 0x171C1A89: mov dword ptr [ebp + 0x10], edi */
    goto L_171C1A91; /* 0x171C1A8C: jmp 0x171c1a91 */
L_171C1A8E:
    ebx = MEM32(ebp + 0x14); /* 0x171C1A8E: mov ebx, dword ptr [ebp + 0x14] */
L_171C1A91:
    edi = MEM32(ebx + edx); /* 0x171C1A91: mov edi, dword ptr [ebx + edx] */
    ecx = MEM32(ebp + 0xC); /* 0x171C1A94: mov ecx, dword ptr [ebp + 0xc] */
    esi = MEM32(ecx); /* 0x171C1A97: mov esi, dword ptr [ecx] */
    ebx = MEM32(ebp + (-0x4)); /* 0x171C1A99: mov ebx, dword ptr [ebp - 4] */
    ebx = MEM32(ebx + edx); /* 0x171C1A9C: mov ebx, dword ptr [ebx + edx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x171C1A9F: add ecx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = ecx; /* 0x171C1AA2: mov dword ptr [ebp + 0xc], ecx */
    ecx = MEM32(edx); /* 0x171C1AA5: mov ecx, dword ptr [edx] */
    MEM32(ebp + 0x8) = ebx; /* 0x171C1AA7: mov dword ptr [ebp + 8], ebx */
    ebx = MEM32(ebp + (-0x8)); /* 0x171C1AAA: mov ebx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x171C1AAD: add edx, 4 */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x171C1AB0: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = edx; /* 0x171C1AB2: mov dword ptr [ebp - 0x1c], edx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171C1B4C; /* 0x171C1AB5: jbe 0x171c1b4c */
L_171C1ABB:
    edx = MEM32(ebp + 0x8); /* 0x171C1ABB: mov edx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x171C1ABE: sub edi, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x171C1AC0: sub edx, ecx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x10)) = edi; /* 0x171C1AC2: mov dword ptr [ebp - 0x10], edi */
    MEM32(ebp + (-0x18)) = edx; /* 0x171C1AC5: mov dword ptr [ebp - 0x18], edx */
    MEM32(ebp + 0x18) = ebx; /* 0x171C1AC8: mov dword ptr [ebp + 0x18], ebx */
    goto L_171C1AD0; /* 0x171C1ACB: jmp 0x171c1ad0 */
L_171C1AD0:
    ebx = (uint32_t)MEM8(esi); /* 0x171C1AD0: movzx ebx, byte ptr [esi] */
    edx = (uint32_t)MEM8(esi + 0x1); /* 0x171C1AD3: movzx edx, byte ptr [esi + 1] */
    edi = (uint32_t)MEM8(esi + 0x2); /* 0x171C1AD7: movzx edi, byte ptr [esi + 2] */
    MEM32(ebp + 0x8) = ebx; /* 0x171C1ADB: mov dword ptr [ebp + 8], ebx */
    ebx = MEM32(eax + ebx * 4 + 0x800); /* 0x171C1ADE: mov ebx, dword ptr [eax + ebx*4 + 0x800] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax + edx * 4 + 0x400));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(eax + edx * 4 + 0x400); /* 0x171C1AE5: add ebx, dword ptr [eax + edx*4 + 0x400] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x14)) = edx; /* 0x171C1AEC: mov dword ptr [ebp - 0x14], edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax + edi * 4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(eax + edi * 4); /* 0x171C1AEF: add ebx, dword ptr [eax + edi*4] */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + (-0x10)); /* 0x171C1AF2: mov edx, dword ptr [ebp - 0x10] */
    if (16u) _cf = (((ebx) >> 15) & 1u); /* 0x171C1AF5: sar ebx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 16u);
    MEM8(edx + ecx) = (uint8_t)(LO8(ebx)); /* 0x171C1AF8: mov byte ptr [edx + ecx], bl */
    edx = MEM32(ebp + 0x8); /* 0x171C1AFB: mov edx, dword ptr [ebp + 8] */
    ebx = MEM32(eax + edx * 4 + 0x1400); /* 0x171C1AFE: mov ebx, dword ptr [eax + edx*4 + 0x1400] */
    edx = MEM32(ebp + (-0x14)); /* 0x171C1B05: mov edx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax + edx * 4 + 0x1000));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(eax + edx * 4 + 0x1000); /* 0x171C1B08: add ebx, dword ptr [eax + edx*4 + 0x1000] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0xC)); /* 0x171C1B0F: add esi, dword ptr [ebp - 0xc] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax + edi * 4 + 0xC00));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(eax + edi * 4 + 0xC00); /* 0x171C1B12: add ebx, dword ptr [eax + edi*4 + 0xc00] */
    _flag_k = FK_ADD;
    if (16u) _cf = (((ebx) >> 15) & 1u); /* 0x171C1B19: sar ebx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 16u);
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x171C1B1C: mov byte ptr [ecx], bl */
    ebx = MEM32(ebp + 0x8); /* 0x171C1B1E: mov ebx, dword ptr [ebp + 8] */
    ebx = MEM32(eax + ebx * 4 + 0x1C00); /* 0x171C1B21: mov ebx, dword ptr [eax + ebx*4 + 0x1c00] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax + edx * 4 + 0x1800));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(eax + edx * 4 + 0x1800); /* 0x171C1B28: add ebx, dword ptr [eax + edx*4 + 0x1800] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax + edi * 4 + 0x1400));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(eax + edi * 4 + 0x1400); /* 0x171C1B2F: add ebx, dword ptr [eax + edi*4 + 0x1400] */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + (-0x18)); /* 0x171C1B36: mov edx, dword ptr [ebp - 0x18] */
    if (16u) _cf = (((ebx) >> 15) & 1u); /* 0x171C1B39: sar ebx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 16u);
    MEM8(edx + ecx) = (uint8_t)(LO8(ebx)); /* 0x171C1B3C: mov byte ptr [edx + ecx], bl */
    edx = MEM32(ebp + 0x18); /* 0x171C1B3F: mov edx, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171C1B42: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x171C1B43: dec edx */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x18) = edx; /* 0x171C1B44: mov dword ptr [ebp + 0x18], edx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171C1AD0; /* 0x171C1B47: jne 0x171c1ad0 */
L_171C1B49:
    edx = MEM32(ebp + (-0x1C)); /* 0x171C1B49: mov edx, dword ptr [ebp - 0x1c] */
L_171C1B4C:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1; /* 0x171C1B4C: dec dword ptr [ebp + 0x10] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171C1A8E; /* 0x171C1B4F: jne 0x171c1a8e */
L_171C1B55:
    esi = POP32_VAL(esp); /* 0x171C1B55: pop esi */
    ebx = POP32_VAL(esp); /* 0x171C1B56: pop ebx */
L_171C1B57:
    edi = POP32_VAL(esp); /* 0x171C1B57: pop edi */
    esp = ebp; /* 0x171C1B58: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171C1B5A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x171C1B5B: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_171C1B70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C1B70u);

L_171C1B70:
    edi = edi; /* 0x171C1B70: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C1B72: push ebp */
    ebp = esp; /* 0x171C1B73: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171C1B75: push ecx */
    eax = MEM32(ebp + 0x8); /* 0x171C1B76: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x168); /* 0x171C1B79: mov ecx, dword ptr [eax + 0x168] */
    edx = MEM32(eax + 0x1C); /* 0x171C1B7F: mov edx, dword ptr [eax + 0x1c] */
    eax = MEM32(ebp + 0x18); /* 0x171C1B82: mov eax, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171C1B85: dec eax */
    _flag_k = FK_DEC;
    PUSH32(esp, esi); /* 0x171C1B86: push esi */
    esi = MEM32(ecx + 0x8); /* 0x171C1B87: mov esi, dword ptr [ecx + 8] */
    MEM32(ebp + (-0x4)) = edx; /* 0x171C1B8A: mov dword ptr [ebp - 4], edx */
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_171C1BFA; /* 0x171C1B8D: js 0x171c1bfa */
L_171C1B8F:
    ecx = MEM32(ebp + 0x10); /* 0x171C1B8F: mov ecx, dword ptr [ebp + 0x10] */
    ecx = MEM32(ecx); /* 0x171C1B92: mov ecx, dword ptr [ecx] */
    PUSH32(esp, ebx); /* 0x171C1B94: push ebx */
    PUSH32(esp, edi); /* 0x171C1B95: push edi */
    edi = MEM32(ebp + 0x14); /* 0x171C1B96: mov edi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171C1B99: inc eax */
    _flag_k = FK_INC;
    edi = ecx + edi * 4; /* 0x171C1B9A: lea edi, [ecx + edi*4] */
    MEM32(ebp + 0x8) = eax; /* 0x171C1B9D: mov dword ptr [ebp + 8], eax */
L_171C1BA0:
    ecx = MEM32(ebp + 0xC); /* 0x171C1BA0: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(ecx); /* 0x171C1BA3: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x171C1BA5: add ecx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = ecx; /* 0x171C1BA8: mov dword ptr [ebp + 0xc], ecx */
    ecx = MEM32(edi); /* 0x171C1BAB: mov ecx, dword ptr [edi] */
    MEM32(ebp + 0x18) = ecx; /* 0x171C1BAD: mov dword ptr [ebp + 0x18], ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x171C1BB0: add edi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171C1BB3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x171C1BB5: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = edi; /* 0x171C1BB7: mov dword ptr [ebp + 0x10], edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171C1BF3; /* 0x171C1BBA: jbe 0x171c1bf3 */
L_171C1BBC:
    esp = esp; /* 0x171C1BBC: lea esp, [esp] */
L_171C1BC0:
    ebx = (uint32_t)MEM8(eax + 0x2); /* 0x171C1BC0: movzx ebx, byte ptr [eax + 2] */
    edx = (uint32_t)MEM8(eax + 0x1); /* 0x171C1BC4: movzx edx, byte ptr [eax + 1] */
    edi = (uint32_t)MEM8(eax); /* 0x171C1BC8: movzx edi, byte ptr [eax] */
    ebx = MEM32(esi + ebx * 4 + 0x800); /* 0x171C1BCB: mov ebx, dword ptr [esi + ebx*4 + 0x800] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + edx * 4 + 0x400));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(esi + edx * 4 + 0x400); /* 0x171C1BD2: add ebx, dword ptr [esi + edx*4 + 0x400] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + edi * 4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(esi + edi * 4); /* 0x171C1BD9: add ebx, dword ptr [esi + edi*4] */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + 0x18); /* 0x171C1BDC: mov edx, dword ptr [ebp + 0x18] */
    if (16u) _cf = (((ebx) >> 15) & 1u); /* 0x171C1BDF: sar ebx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 16u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 3; /* 0x171C1BE2: add eax, 3 */
    _flag_k = FK_ADD;
    MEM8(ecx + edx) = (uint8_t)(LO8(ebx)); /* 0x171C1BE5: mov byte ptr [ecx + edx], bl */
    edx = MEM32(ebp + (-0x4)); /* 0x171C1BE8: mov edx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171C1BEB: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, edx */ /* 0x171C1BEC: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171C1BC0; /* 0x171C1BEE: jb 0x171c1bc0 */
L_171C1BF0:
    edi = MEM32(ebp + 0x10); /* 0x171C1BF0: mov edi, dword ptr [ebp + 0x10] */
L_171C1BF3:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) - 1; /* 0x171C1BF3: dec dword ptr [ebp + 8] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171C1BA0; /* 0x171C1BF6: jne 0x171c1ba0 */
L_171C1BF8:
    edi = POP32_VAL(esp); /* 0x171C1BF8: pop edi */
    ebx = POP32_VAL(esp); /* 0x171C1BF9: pop ebx */
L_171C1BFA:
    esi = POP32_VAL(esp); /* 0x171C1BFA: pop esi */
    esp = ebp; /* 0x171C1BFB: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171C1BFD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x171C1BFE: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_171C1C10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C1C10u);

L_171C1C10:
    edi = edi; /* 0x171C1C10: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C1C12: push ebp */
    ebp = esp; /* 0x171C1C13: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x171C1C15: sub esp, 8 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x171C1C18: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(eax + 0x168); /* 0x171C1C1B: mov edx, dword ptr [eax + 0x168] */
    ecx = MEM32(eax + 0x24); /* 0x171C1C21: mov ecx, dword ptr [eax + 0x24] */
    PUSH32(esp, esi); /* 0x171C1C24: push esi */
    esi = MEM32(edx + 0x8); /* 0x171C1C25: mov esi, dword ptr [edx + 8] */
    edx = MEM32(eax + 0x1C); /* 0x171C1C28: mov edx, dword ptr [eax + 0x1c] */
    eax = MEM32(ebp + 0x18); /* 0x171C1C2B: mov eax, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171C1C2E: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x4)) = ecx; /* 0x171C1C2F: mov dword ptr [ebp - 4], ecx */
    MEM32(ebp + (-0x8)) = edx; /* 0x171C1C32: mov dword ptr [ebp - 8], edx */
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_171C1CA0; /* 0x171C1C35: js 0x171c1ca0 */
L_171C1C37:
    ecx = MEM32(ebp + 0x10); /* 0x171C1C37: mov ecx, dword ptr [ebp + 0x10] */
    ecx = MEM32(ecx); /* 0x171C1C3A: mov ecx, dword ptr [ecx] */
    PUSH32(esp, ebx); /* 0x171C1C3C: push ebx */
    PUSH32(esp, edi); /* 0x171C1C3D: push edi */
    edi = MEM32(ebp + 0x14); /* 0x171C1C3E: mov edi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171C1C41: inc eax */
    _flag_k = FK_INC;
    edi = ecx + edi * 4; /* 0x171C1C42: lea edi, [ecx + edi*4] */
    MEM32(ebp + 0x8) = eax; /* 0x171C1C45: mov dword ptr [ebp + 8], eax */
L_171C1C48:
    ecx = MEM32(ebp + 0xC); /* 0x171C1C48: mov ecx, dword ptr [ebp + 0xc] */
    eax = MEM32(ecx); /* 0x171C1C4B: mov eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x171C1C4D: add ecx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = ecx; /* 0x171C1C50: mov dword ptr [ebp + 0xc], ecx */
    ecx = MEM32(edi); /* 0x171C1C53: mov ecx, dword ptr [edi] */
    MEM32(ebp + 0x18) = ecx; /* 0x171C1C55: mov dword ptr [ebp + 0x18], ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x171C1C58: add edi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171C1C5B: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edx, edx */ /* 0x171C1C5D: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = edi; /* 0x171C1C5F: mov dword ptr [ebp + 0x10], edi */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171C1C99; /* 0x171C1C62: jbe 0x171c1c99 */
L_171C1C64:
    ebx = (uint32_t)MEM8(eax); /* 0x171C1C64: movzx ebx, byte ptr [eax] */
    edx = (uint32_t)MEM8(eax + 0x1); /* 0x171C1C67: movzx edx, byte ptr [eax + 1] */
    edi = (uint32_t)MEM8(eax + 0x2); /* 0x171C1C6B: movzx edi, byte ptr [eax + 2] */
    ebx = MEM32(esi + ebx * 4 + 0x800); /* 0x171C1C6F: mov ebx, dword ptr [esi + ebx*4 + 0x800] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + edx * 4 + 0x400));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(esi + edx * 4 + 0x400); /* 0x171C1C76: add ebx, dword ptr [esi + edx*4 + 0x400] */
    _flag_k = FK_ADD;
    edx = MEM32(esi + edi * 4); /* 0x171C1C7D: mov edx, dword ptr [esi + edi*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x4)); /* 0x171C1C80: add eax, dword ptr [ebp - 4] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edx; /* 0x171C1C83: add ebx, edx */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + 0x18); /* 0x171C1C85: mov edx, dword ptr [ebp + 0x18] */
    if (16u) _cf = (((ebx) >> 15) & 1u); /* 0x171C1C88: sar ebx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 16u);
    MEM8(ecx + edx) = (uint8_t)(LO8(ebx)); /* 0x171C1C8B: mov byte ptr [ecx + edx], bl */
    edx = MEM32(ebp + (-0x8)); /* 0x171C1C8E: mov edx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171C1C91: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, edx */ /* 0x171C1C92: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171C1C64; /* 0x171C1C94: jb 0x171c1c64 */
L_171C1C96:
    edi = MEM32(ebp + 0x10); /* 0x171C1C96: mov edi, dword ptr [ebp + 0x10] */
L_171C1C99:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) - 1; /* 0x171C1C99: dec dword ptr [ebp + 8] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171C1C48; /* 0x171C1C9C: jne 0x171c1c48 */
L_171C1C9E:
    edi = POP32_VAL(esp); /* 0x171C1C9E: pop edi */
    ebx = POP32_VAL(esp); /* 0x171C1C9F: pop ebx */
L_171C1CA0:
    esi = POP32_VAL(esp); /* 0x171C1CA0: pop esi */
    esp = ebp; /* 0x171C1CA1: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171C1CA3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x171C1CA4: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_171C1CB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C1CB0u);

L_171C1CB0:
    edi = edi; /* 0x171C1CB0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C1CB2: push ebp */
    ebp = esp; /* 0x171C1CB3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x171C1CB5: sub esp, 0x20 */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x8); /* 0x171C1CB8: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x168); /* 0x171C1CBB: mov eax, dword ptr [ecx + 0x168] */
    ecx = MEM32(ecx + 0x1C); /* 0x171C1CC1: mov ecx, dword ptr [ecx + 0x1c] */
    eax = MEM32(eax + 0x8); /* 0x171C1CC4: mov eax, dword ptr [eax + 8] */
    PUSH32(esp, edi); /* 0x171C1CC7: push edi */
    edi = MEM32(ebp + 0x18); /* 0x171C1CC8: mov edi, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x171C1CCB: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x10)) = ecx; /* 0x171C1CCC: mov dword ptr [ebp - 0x10], ecx */
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_171C1E09; /* 0x171C1CCF: js 0x171c1e09 */
L_171C1CD5:
    ecx = MEM32(ebp + 0x14); /* 0x171C1CD5: mov ecx, dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x171C1CD8: push ebx */
    PUSH32(esp, esi); /* 0x171C1CD9: push esi */
    esi = MEM32(ebp + 0x10); /* 0x171C1CDA: mov esi, dword ptr [ebp + 0x10] */
    edx = MEM32(esi + 0x4); /* 0x171C1CDD: mov edx, dword ptr [esi + 4] */
    ebx = MEM32(esi); /* 0x171C1CE0: mov ebx, dword ptr [esi] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edx; /* 0x171C1CE2: sub ebx, edx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = ebx; /* 0x171C1CE4: mov dword ptr [ebp - 8], ebx */
    ebx = MEM32(esi + 0x8); /* 0x171C1CE7: mov ebx, dword ptr [esi + 8] */
    esi = MEM32(esi + 0xC); /* 0x171C1CEA: mov esi, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edx; /* 0x171C1CED: sub ebx, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x171C1CEF: sub esi, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171C1CF1: inc edi */
    _flag_k = FK_INC;
    ecx = edx + ecx * 4; /* 0x171C1CF2: lea ecx, [edx + ecx*4] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x171C1CF5: mov dword ptr [ebp - 4], ebx */
    MEM32(ebp + (-0xC)) = esi; /* 0x171C1CF8: mov dword ptr [ebp - 0xc], esi */
    MEM32(ebp + 0x14) = edi; /* 0x171C1CFB: mov dword ptr [ebp + 0x14], edi */
    goto L_171C1D03; /* 0x171C1CFE: jmp 0x171c1d03 */
L_171C1D00:
    ebx = MEM32(ebp + (-0x4)); /* 0x171C1D00: mov ebx, dword ptr [ebp - 4] */
L_171C1D03:
    ebx = MEM32(ebx + ecx); /* 0x171C1D03: mov ebx, dword ptr [ebx + ecx] */
    esi = MEM32(ebp + 0xC); /* 0x171C1D06: mov esi, dword ptr [ebp + 0xc] */
    edx = MEM32(esi); /* 0x171C1D09: mov edx, dword ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x171C1D0B: add esi, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x10) = ebx; /* 0x171C1D0E: mov dword ptr [ebp + 0x10], ebx */
    ebx = MEM32(ebp + (-0xC)); /* 0x171C1D11: mov ebx, dword ptr [ebp - 0xc] */
    ebx = MEM32(ebx + ecx); /* 0x171C1D14: mov ebx, dword ptr [ebx + ecx] */
    MEM32(ebp + 0xC) = esi; /* 0x171C1D17: mov dword ptr [ebp + 0xc], esi */
    esi = MEM32(ebp + (-0x8)); /* 0x171C1D1A: mov esi, dword ptr [ebp - 8] */
    edi = MEM32(esi + ecx); /* 0x171C1D1D: mov edi, dword ptr [esi + ecx] */
    esi = MEM32(ecx); /* 0x171C1D20: mov esi, dword ptr [ecx] */
    MEM32(ebp + 0x18) = ebx; /* 0x171C1D22: mov dword ptr [ebp + 0x18], ebx */
    ebx = MEM32(ebp + (-0x10)); /* 0x171C1D25: mov ebx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x171C1D28: add ecx, 4 */
    _flag_k = FK_ADD;
    /* test ebx, ebx */ /* 0x171C1D2B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = edx; /* 0x171C1D2D: mov dword ptr [ebp + 8], edx */
    MEM32(ebp + (-0x20)) = ecx; /* 0x171C1D30: mov dword ptr [ebp - 0x20], ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171C1DFE; /* 0x171C1D33: jbe 0x171c1dfe */
L_171C1D39:
    ecx = MEM32(ebp + 0x18); /* 0x171C1D39: mov ecx, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x171C1D3C: sub ecx, edi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x14)) = ecx; /* 0x171C1D3E: mov dword ptr [ebp - 0x14], ecx */
    ecx = MEM32(ebp + 0x10); /* 0x171C1D41: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x171C1D44: sub esi, edi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x171C1D46: sub ecx, edi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x18)) = esi; /* 0x171C1D48: mov dword ptr [ebp - 0x18], esi */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x171C1D4B: mov dword ptr [ebp - 0x1c], ecx */
    MEM32(ebp + 0x10) = ebx; /* 0x171C1D4E: mov dword ptr [ebp + 0x10], ebx */
    goto L_171C1D60; /* 0x171C1D51: jmp 0x171c1d60 */
L_171C1D53:
    edx = MEM32(ebp + 0x8); /* 0x171C1D53: mov edx, dword ptr [ebp + 8] */
    goto L_171C1D60; /* 0x171C1D56: jmp 0x171c1d60 */
L_171C1D60:
    esi = (uint32_t)MEM8(edx); /* 0x171C1D60: movzx esi, byte ptr [edx] */
    ebx = (uint32_t)MEM8(edx + 0x1); /* 0x171C1D63: movzx ebx, byte ptr [edx + 1] */
    ecx = 0xFFu; /* 0x171C1D67: mov ecx, 0xff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x171C1D6C: sub ecx, esi */
    _flag_k = FK_CMP;
    esi = 0xFFu; /* 0x171C1D6E: mov esi, 0xff */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x171C1D73: sub esi, ebx */
    _flag_k = FK_CMP;
    ebx = (uint32_t)MEM8(edx + 0x2); /* 0x171C1D75: movzx ebx, byte ptr [edx + 2] */
    edx = 0xFFu; /* 0x171C1D79: mov edx, 0xff */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ebx; /* 0x171C1D7E: sub edx, ebx */
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + (-0x14)); /* 0x171C1D80: mov ebx, dword ptr [ebp - 0x14] */
    MEM32(ebp + 0x18) = edx; /* 0x171C1D83: mov dword ptr [ebp + 0x18], edx */
    edx = MEM32(ebp + 0x8); /* 0x171C1D86: mov edx, dword ptr [ebp + 8] */
    SET_LO8(edx, MEM8(edx + 0x3)); /* 0x171C1D89: mov dl, byte ptr [edx + 3] */
    MEM8(ebx + edi) = (uint8_t)(LO8(edx)); /* 0x171C1D8C: mov byte ptr [ebx + edi], dl */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) + 4; /* 0x171C1D8F: add dword ptr [ebp + 8], 4 */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + 0x18); /* 0x171C1D93: mov edx, dword ptr [ebp + 0x18] */
    ebx = MEM32(eax + edx * 4 + 0x800); /* 0x171C1D96: mov ebx, dword ptr [eax + edx*4 + 0x800] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax + esi * 4 + 0x400));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(eax + esi * 4 + 0x400); /* 0x171C1D9D: add ebx, dword ptr [eax + esi*4 + 0x400] */
    _flag_k = FK_ADD;
    edx = MEM32(eax + edx * 4 + 0x1400); /* 0x171C1DA4: mov edx, dword ptr [eax + edx*4 + 0x1400] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(eax + ecx * 4));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(eax + ecx * 4); /* 0x171C1DAB: add ebx, dword ptr [eax + ecx*4] */
    _flag_k = FK_ADD;
    if (16u) _cf = (((ebx) >> 15) & 1u); /* 0x171C1DAE: sar ebx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 16u);
    MEM8(edi) = (uint8_t)(LO8(ebx)); /* 0x171C1DB1: mov byte ptr [edi], bl */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + esi * 4 + 0x1000));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(eax + esi * 4 + 0x1000); /* 0x171C1DB3: add edx, dword ptr [eax + esi*4 + 0x1000] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + ecx * 4 + 0xC00));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(eax + ecx * 4 + 0xC00); /* 0x171C1DBA: add edx, dword ptr [eax + ecx*4 + 0xc00] */
    _flag_k = FK_ADD;
    ebx = MEM32(ebp + (-0x18)); /* 0x171C1DC1: mov ebx, dword ptr [ebp - 0x18] */
    if (16u) _cf = (((edx) >> 15) & 1u); /* 0x171C1DC4: sar edx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 16u);
    MEM8(ebx + edi) = (uint8_t)(LO8(edx)); /* 0x171C1DC7: mov byte ptr [ebx + edi], dl */
    edx = MEM32(ebp + 0x18); /* 0x171C1DCA: mov edx, dword ptr [ebp + 0x18] */
    edx = MEM32(eax + edx * 4 + 0x1C00); /* 0x171C1DCD: mov edx, dword ptr [eax + edx*4 + 0x1c00] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + esi * 4 + 0x1800));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(eax + esi * 4 + 0x1800); /* 0x171C1DD4: add edx, dword ptr [eax + esi*4 + 0x1800] */
    _flag_k = FK_ADD;
    ebx = MEM32(eax + ecx * 4 + 0x1400); /* 0x171C1DDB: mov ebx, dword ptr [eax + ecx*4 + 0x1400] */
    ecx = MEM32(ebp + (-0x1C)); /* 0x171C1DE2: mov ecx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ebx; /* 0x171C1DE5: add edx, ebx */
    _flag_k = FK_ADD;
    if (16u) _cf = (((edx) >> 15) & 1u); /* 0x171C1DE7: sar edx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 16u);
    MEM8(ecx + edi) = (uint8_t)(LO8(edx)); /* 0x171C1DEA: mov byte ptr [ecx + edi], dl */
    ecx = MEM32(ebp + 0x10); /* 0x171C1DED: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171C1DF0: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x171C1DF1: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x10) = ecx; /* 0x171C1DF2: mov dword ptr [ebp + 0x10], ecx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171C1D53; /* 0x171C1DF5: jne 0x171c1d53 */
L_171C1DFB:
    ecx = MEM32(ebp + (-0x20)); /* 0x171C1DFB: mov ecx, dword ptr [ebp - 0x20] */
L_171C1DFE:
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) - 1; /* 0x171C1DFE: dec dword ptr [ebp + 0x14] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171C1D00; /* 0x171C1E01: jne 0x171c1d00 */
L_171C1E07:
    esi = POP32_VAL(esp); /* 0x171C1E07: pop esi */
    ebx = POP32_VAL(esp); /* 0x171C1E08: pop ebx */
L_171C1E09:
    edi = POP32_VAL(esp); /* 0x171C1E09: pop edi */
    esp = ebp; /* 0x171C1E0A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171C1E0C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x171C1E0D: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_171C1E20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C1E20u);

L_171C1E20:
    edi = edi; /* 0x171C1E20: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C1E22: push ebp */
    ebp = esp; /* 0x171C1E23: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171C1E25: push ecx */
    eax = MEM32(ebp + 0x8); /* 0x171C1E26: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x171C1E29: push edi */
    edi = MEM32(eax + 0x1C); /* 0x171C1E2A: mov edi, dword ptr [eax + 0x1c] */
    eax = MEM32(eax + 0x24); /* 0x171C1E2D: mov eax, dword ptr [eax + 0x24] */
    MEM32(ebp + (-0x4)) = eax; /* 0x171C1E30: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x18); /* 0x171C1E33: mov eax, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171C1E36: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_171C1E7A; /* 0x171C1E37: js 0x171c1e7a */
L_171C1E39:
    ecx = MEM32(ebp + 0x10); /* 0x171C1E39: mov ecx, dword ptr [ebp + 0x10] */
    edx = MEM32(ecx); /* 0x171C1E3C: mov edx, dword ptr [ecx] */
    ecx = MEM32(ebp + 0x14); /* 0x171C1E3E: mov ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171C1E41: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, ebx); /* 0x171C1E42: push ebx */
    edx = edx + ecx * 4; /* 0x171C1E43: lea edx, [edx + ecx*4] */
    MEM32(ebp + 0x8) = eax; /* 0x171C1E46: mov dword ptr [ebp + 8], eax */
    PUSH32(esp, esi); /* 0x171C1E49: push esi */
    ebx = ebx; /* 0x171C1E4A: lea ebx, [ebx] */
L_171C1E50:
    eax = MEM32(ebp + 0xC); /* 0x171C1E50: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x171C1E53: mov ecx, dword ptr [eax] */
    esi = MEM32(edx); /* 0x171C1E55: mov esi, dword ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171C1E57: add eax, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = eax; /* 0x171C1E5A: mov dword ptr [ebp + 0xc], eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x171C1E5D: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171C1E60: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x171C1E62: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171C1E73; /* 0x171C1E64: jbe 0x171c1e73 */
L_171C1E66:
    SET_LO8(ebx, MEM8(ecx)); /* 0x171C1E66: mov bl, byte ptr [ecx] */
    MEM8(eax + esi) = (uint8_t)(LO8(ebx)); /* 0x171C1E68: mov byte ptr [eax + esi], bl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x4)); /* 0x171C1E6B: add ecx, dword ptr [ebp - 4] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171C1E6E: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, edi */ /* 0x171C1E6F: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171C1E66; /* 0x171C1E71: jb 0x171c1e66 */
L_171C1E73:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) - 1; /* 0x171C1E73: dec dword ptr [ebp + 8] */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171C1E50; /* 0x171C1E76: jne 0x171c1e50 */
L_171C1E78:
    esi = POP32_VAL(esp); /* 0x171C1E78: pop esi */
    ebx = POP32_VAL(esp); /* 0x171C1E79: pop ebx */
L_171C1E7A:
    edi = POP32_VAL(esp); /* 0x171C1E7A: pop edi */
    esp = ebp; /* 0x171C1E7B: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171C1E7D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x171C1E7E: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_171C1E90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C1E90u);

L_171C1E90:
    edi = edi; /* 0x171C1E90: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C1E92: push ebp */
    ebp = esp; /* 0x171C1E93: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171C1E95: push ecx */
    eax = MEM32(ebp + 0x8); /* 0x171C1E96: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x171C1E99: push ebx */
    ebx = MEM32(eax + 0x3C); /* 0x171C1E9A: mov ebx, dword ptr [eax + 0x3c] */
    PUSH32(esp, edi); /* 0x171C1E9D: push edi */
    edi = MEM32(eax + 0x1C); /* 0x171C1E9E: mov edi, dword ptr [eax + 0x1c] */
    eax = MEM32(ebp + 0x18); /* 0x171C1EA1: mov eax, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171C1EA4: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x4)) = ebx; /* 0x171C1EA5: mov dword ptr [ebp - 4], ebx */
    if (/* dec result */ CMP_S(_flag_a, _flag_b)) goto L_171C1F1A; /* 0x171C1EA8: js 0x171c1f1a */
L_171C1EAA:
    ecx = MEM32(ebp + 0x14); /* 0x171C1EAA: mov ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171C1EAD: inc eax */
    _flag_k = FK_INC;
    edx = ecx * 4; /* 0x171C1EAE: lea edx, [ecx*4] */
    MEM32(ebp + 0x18) = eax; /* 0x171C1EB5: mov dword ptr [ebp + 0x18], eax */
    MEM32(ebp + 0x8) = edx; /* 0x171C1EB8: mov dword ptr [ebp + 8], edx */
    eax = 4; /* 0x171C1EBB: mov eax, 4 */
    PUSH32(esp, esi); /* 0x171C1EC0: push esi */
L_171C1EC1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171C1EC1: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x171C1EC3: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171C1F00; /* 0x171C1EC5: jle 0x171c1f00 */
L_171C1EC7:
    eax = MEM32(ebp + 0xC); /* 0x171C1EC7: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x171C1ECA: mov ecx, dword ptr [eax] */
    MEM32(ebp + 0x14) = ecx; /* 0x171C1ECC: mov dword ptr [ebp + 0x14], ecx */
    /* nop */ /* 0x171C1ECF: nop  */
L_171C1ED0:
    eax = MEM32(ebp + 0x10); /* 0x171C1ED0: mov eax, dword ptr [ebp + 0x10] */
    ecx = MEM32(eax + edx * 4); /* 0x171C1ED3: mov ecx, dword ptr [eax + edx*4] */
    eax = MEM32(ebp + 0x8); /* 0x171C1ED6: mov eax, dword ptr [ebp + 8] */
    esi = MEM32(eax + ecx); /* 0x171C1ED9: mov esi, dword ptr [eax + ecx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171C1EDC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x171C1EDE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171C1EF6; /* 0x171C1EE0: jbe 0x171c1ef6 */
L_171C1EE2:
    ecx = MEM32(ebp + 0x14); /* 0x171C1EE2: mov ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x171C1EE5: add ecx, edx */
    _flag_k = FK_ADD;
L_171C1EE7:
    SET_LO8(ebx, MEM8(ecx)); /* 0x171C1EE7: mov bl, byte ptr [ecx] */
    MEM8(eax + esi) = (uint8_t)(LO8(ebx)); /* 0x171C1EE9: mov byte ptr [eax + esi], bl */
    ebx = MEM32(ebp + (-0x4)); /* 0x171C1EEC: mov ebx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x171C1EEF: add ecx, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171C1EF1: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, edi */ /* 0x171C1EF2: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171C1EE7; /* 0x171C1EF4: jb 0x171c1ee7 */
L_171C1EF6:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x171C1EF6: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, ebx */ /* 0x171C1EF7: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171C1ED0; /* 0x171C1EF9: jl 0x171c1ed0 */
L_171C1EFB:
    eax = 4; /* 0x171C1EFB: mov eax, 4 */
L_171C1F00:
    esi = MEM32(ebp + 0xC); /* 0x171C1F00: mov esi, dword ptr [ebp + 0xc] */
    edx = MEM32(ebp + 0x8); /* 0x171C1F03: mov edx, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0x18); /* 0x171C1F06: mov ecx, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + eax; /* 0x171C1F09: add esi, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x171C1F0B: add edx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x171C1F0D: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + 0xC) = esi; /* 0x171C1F0E: mov dword ptr [ebp + 0xc], esi */
    MEM32(ebp + 0x8) = edx; /* 0x171C1F11: mov dword ptr [ebp + 8], edx */
    MEM32(ebp + 0x18) = ecx; /* 0x171C1F14: mov dword ptr [ebp + 0x18], ecx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171C1EC1; /* 0x171C1F17: jne 0x171c1ec1 */
L_171C1F19:
    esi = POP32_VAL(esp); /* 0x171C1F19: pop esi */
L_171C1F1A:
    edi = POP32_VAL(esp); /* 0x171C1F1A: pop edi */
    ebx = POP32_VAL(esp); /* 0x171C1F1B: pop ebx */
    esp = ebp; /* 0x171C1F1C: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171C1F1E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x171C1F1F: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_171C1F30(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C1F30u);

L_171C1F30:
    edi = edi; /* 0x171C1F30: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C1F32: push ebp */
    ebp = esp; /* 0x171C1F33: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171C1F35: push ebx */
    PUSH32(esp, esi); /* 0x171C1F36: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171C1F37: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x4); /* 0x171C1F3A: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, edi); /* 0x171C1F3D: push edi */
    PUSH32(esp, 0xCu); /* 0x171C1F3E: push 0xc */
    PUSH32(esp, 1); /* 0x171C1F40: push 1 */
    PUSH32(esp, esi); /* 0x171C1F42: push esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171C1F43: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x171C1F45: mov edi, eax */
    eax = MEM32(esi + 0x28); /* 0x171C1F47: mov eax, dword ptr [esi + 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171C1F4A: dec eax */
    _flag_k = FK_DEC;
    ebx = 4; /* 0x171C1F4B: mov ebx, 4 */
    /* cmp eax, ebx */ /* 0x171C1F50: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x168) = edi; /* 0x171C1F52: mov dword ptr [esi + 0x168], edi */
    MEM32(edi) = 0x171BC250u; /* 0x171C1F58: mov dword ptr [edi], 0x171bc250 */
    if (CMP_A(_flag_a, _flag_b)) goto L_171C1F7E; /* 0x171C1F5E: ja 0x171c1f7e */
L_171C1F60:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x171C20FC)); goto _ljump; }
L_171C1F67:
    /* cmp MEM32(esi + 0x24), 1 */ /* 0x171C1F67: cmp dword ptr [esi + 0x24], 1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x24)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C1F90; /* 0x171C1F6B: je 0x171c1f90 */
L_171C1F6D:
    goto L_171C1F84; /* 0x171C1F6D: jmp 0x171c1f84 */
L_171C1F6F:
    /* cmp MEM32(esi + 0x24), 3 */ /* 0x171C1F6F: cmp dword ptr [esi + 0x24], 3 */
    _flag_a = (uint32_t)(MEM32(esi + 0x24)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C1F90; /* 0x171C1F73: je 0x171c1f90 */
L_171C1F75:
    goto L_171C1F84; /* 0x171C1F75: jmp 0x171c1f84 */
L_171C1F77:
    /* cmp MEM32(esi + 0x24), ebx */ /* 0x171C1F77: cmp dword ptr [esi + 0x24], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x24)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C1F90; /* 0x171C1F7A: je 0x171c1f90 */
L_171C1F7C:
    goto L_171C1F84; /* 0x171C1F7C: jmp 0x171c1f84 */
L_171C1F7E:
    /* cmp MEM32(esi + 0x24), 1 */ /* 0x171C1F7E: cmp dword ptr [esi + 0x24], 1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x24)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_171C1F90; /* 0x171C1F82: jge 0x171c1f90 */
L_171C1F84:
    eax = MEM32(esi); /* 0x171C1F84: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171C1F86: push esi */
    MEM32(eax + 0x14) = 9; /* 0x171C1F87: mov dword ptr [eax + 0x14], 9 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171C1F8E: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171C1F90:
    eax = MEM32(esi + 0x40); /* 0x171C1F90: mov eax, dword ptr [esi + 0x40] */
    ecx = eax + (-0x1); /* 0x171C1F93: lea ecx, [eax - 1] */
    /* cmp ecx, ebx */ /* 0x171C1F96: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171C20D3; /* 0x171C1F98: ja 0x171c20d3 */
L_171C1F9E:
    { _itail_tgt = (uint32_t)(MEM32(ecx * 4 + 0x171C2110)); goto _ljump; }
L_171C1FA5:
    /* cmp MEM32(esi + 0x3C), 1 */ /* 0x171C1FA5: cmp dword ptr [esi + 0x3c], 1 */
    _flag_a = (uint32_t)(MEM32(esi + 0x3C)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C1FB7; /* 0x171C1FA9: je 0x171c1fb7 */
L_171C1FAB:
    eax = MEM32(esi); /* 0x171C1FAB: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171C1FAD: push esi */
    MEM32(eax + 0x14) = 0xAu; /* 0x171C1FAE: mov dword ptr [eax + 0x14], 0xa */
    RECOMP_ICALL(MEM32(eax)); /* 0x171C1FB5: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171C1FB7:
    eax = MEM32(esi + 0x28); /* 0x171C1FB7: mov eax, dword ptr [esi + 0x28] */
    /* cmp eax, 1 */ /* 0x171C1FBA: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C1FFF; /* 0x171C1FBD: je 0x171c1fff */
L_171C1FBF:
    /* cmp eax, 2 */ /* 0x171C1FBF: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C1FD8; /* 0x171C1FC2: jne 0x171c1fd8 */
L_171C1FC4:
    MEM32(edi) = 0x171C1840u; /* 0x171C1FC4: mov dword ptr [edi], 0x171c1840 */
    MEM32(edi + 0x4) = 0x171C1B70u; /* 0x171C1FCA: mov dword ptr [edi + 4], 0x171c1b70 */
    edi = POP32_VAL(esp); /* 0x171C1FD1: pop edi */
    esi = POP32_VAL(esp); /* 0x171C1FD2: pop esi */
    ebx = POP32_VAL(esp); /* 0x171C1FD3: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171C1FD4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171C1FD5: ret 4 */
L_171C1FD8:
    /* cmp eax, 6 */ /* 0x171C1FD8: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C1FE2; /* 0x171C1FDB: je 0x171c1fe2 */
L_171C1FDD:
    /* cmp eax, 7 */ /* 0x171C1FDD: cmp eax, 7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C1FF6; /* 0x171C1FE0: jne 0x171c1ff6 */
L_171C1FE2:
    MEM32(edi) = 0x171C1840u; /* 0x171C1FE2: mov dword ptr [edi], 0x171c1840 */
    MEM32(edi + 0x4) = 0x171C1C10u; /* 0x171C1FE8: mov dword ptr [edi + 4], 0x171c1c10 */
    edi = POP32_VAL(esp); /* 0x171C1FEF: pop edi */
    esi = POP32_VAL(esp); /* 0x171C1FF0: pop esi */
    ebx = POP32_VAL(esp); /* 0x171C1FF1: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171C1FF2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171C1FF3: ret 4 */
L_171C1FF6:
    /* cmp eax, 3 */ /* 0x171C1FF6: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C20C0; /* 0x171C1FF9: jne 0x171c20c0 */
L_171C1FFF:
    MEM32(edi + 0x4) = 0x171C1E20u; /* 0x171C1FFF: mov dword ptr [edi + 4], 0x171c1e20 */
    edi = POP32_VAL(esp); /* 0x171C2006: pop edi */
    esi = POP32_VAL(esp); /* 0x171C2007: pop esi */
    ebx = POP32_VAL(esp); /* 0x171C2008: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171C2009: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171C200A: ret 4 */
L_171C200D:
    /* cmp MEM32(esi + 0x3C), 3 */ /* 0x171C200D: cmp dword ptr [esi + 0x3c], 3 */
    _flag_a = (uint32_t)(MEM32(esi + 0x3C)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C201F; /* 0x171C2011: je 0x171c201f */
L_171C2013:
    eax = MEM32(esi); /* 0x171C2013: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171C2015: push esi */
    MEM32(eax + 0x14) = 0xAu; /* 0x171C2016: mov dword ptr [eax + 0x14], 0xa */
    RECOMP_ICALL(MEM32(eax)); /* 0x171C201D: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171C201F:
    /* cmp MEM32(esi + 0x28), 2 */ /* 0x171C201F: cmp dword ptr [esi + 0x28], 2 */
    _flag_a = (uint32_t)(MEM32(esi + 0x28)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_171C20BE; /* 0x171C2023: jmp 0x171c20be */
L_171C2028:
    /* cmp MEM32(esi + 0x3C), 3 */ /* 0x171C2028: cmp dword ptr [esi + 0x3c], 3 */
    _flag_a = (uint32_t)(MEM32(esi + 0x3C)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C203A; /* 0x171C202C: je 0x171c203a */
L_171C202E:
    eax = MEM32(esi); /* 0x171C202E: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171C2030: push esi */
    MEM32(eax + 0x14) = 0xAu; /* 0x171C2031: mov dword ptr [eax + 0x14], 0xa */
    RECOMP_ICALL(MEM32(eax)); /* 0x171C2038: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171C203A:
    eax = MEM32(esi + 0x28); /* 0x171C203A: mov eax, dword ptr [esi + 0x28] */
    /* cmp eax, 2 */ /* 0x171C203D: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C2056; /* 0x171C2040: jne 0x171c2056 */
L_171C2042:
    MEM32(edi) = 0x171C1840u; /* 0x171C2042: mov dword ptr [edi], 0x171c1840 */
    MEM32(edi + 0x4) = 0x171C1910u; /* 0x171C2048: mov dword ptr [edi + 4], 0x171c1910 */
    edi = POP32_VAL(esp); /* 0x171C204F: pop edi */
    esi = POP32_VAL(esp); /* 0x171C2050: pop esi */
    ebx = POP32_VAL(esp); /* 0x171C2051: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171C2052: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171C2053: ret 4 */
L_171C2056:
    /* cmp eax, 6 */ /* 0x171C2056: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C2060; /* 0x171C2059: je 0x171c2060 */
L_171C205B:
    /* cmp eax, 7 */ /* 0x171C205B: cmp eax, 7 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C2074; /* 0x171C205E: jne 0x171c2074 */
L_171C2060:
    MEM32(edi) = 0x171C1840u; /* 0x171C2060: mov dword ptr [edi], 0x171c1840 */
    MEM32(edi + 0x4) = 0x171C1A40u; /* 0x171C2066: mov dword ptr [edi + 4], 0x171c1a40 */
    edi = POP32_VAL(esp); /* 0x171C206D: pop edi */
    esi = POP32_VAL(esp); /* 0x171C206E: pop esi */
    ebx = POP32_VAL(esp); /* 0x171C206F: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171C2070: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171C2071: ret 4 */
L_171C2074:
    /* cmp eax, 3 */ /* 0x171C2074: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_171C20BE; /* 0x171C2077: jmp 0x171c20be */
L_171C2079:
    /* cmp MEM32(esi + 0x3C), ebx */ /* 0x171C2079: cmp dword ptr [esi + 0x3c], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x3C)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C208A; /* 0x171C207C: je 0x171c208a */
L_171C207E:
    eax = MEM32(esi); /* 0x171C207E: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171C2080: push esi */
    MEM32(eax + 0x14) = 0xAu; /* 0x171C2081: mov dword ptr [eax + 0x14], 0xa */
    RECOMP_ICALL(MEM32(eax)); /* 0x171C2088: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171C208A:
    /* cmp MEM32(esi + 0x28), ebx */ /* 0x171C208A: cmp dword ptr [esi + 0x28], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x28)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_171C20BE; /* 0x171C208D: jmp 0x171c20be */
L_171C208F:
    /* cmp MEM32(esi + 0x3C), ebx */ /* 0x171C208F: cmp dword ptr [esi + 0x3c], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x3C)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C20A0; /* 0x171C2092: je 0x171c20a0 */
L_171C2094:
    eax = MEM32(esi); /* 0x171C2094: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171C2096: push esi */
    MEM32(eax + 0x14) = 0xAu; /* 0x171C2097: mov dword ptr [eax + 0x14], 0xa */
    RECOMP_ICALL(MEM32(eax)); /* 0x171C209E: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171C20A0:
    eax = MEM32(esi + 0x28); /* 0x171C20A0: mov eax, dword ptr [esi + 0x28] */
    /* cmp eax, ebx */ /* 0x171C20A3: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C20BB; /* 0x171C20A5: jne 0x171c20bb */
L_171C20A7:
    MEM32(edi) = 0x171C1840u; /* 0x171C20A7: mov dword ptr [edi], 0x171c1840 */
    MEM32(edi + 0x4) = 0x171C1CB0u; /* 0x171C20AD: mov dword ptr [edi + 4], 0x171c1cb0 */
    edi = POP32_VAL(esp); /* 0x171C20B4: pop edi */
    esi = POP32_VAL(esp); /* 0x171C20B5: pop esi */
    ebx = POP32_VAL(esp); /* 0x171C20B6: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171C20B7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171C20B8: ret 4 */
L_171C20BB:
    /* cmp eax, 5 */ /* 0x171C20BB: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_171C20BE:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171C20EC; /* 0x171C20BE: je 0x171c20ec */
L_171C20C0:
    eax = MEM32(esi); /* 0x171C20C0: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171C20C2: push esi */
    MEM32(eax + 0x14) = 0x1Bu; /* 0x171C20C3: mov dword ptr [eax + 0x14], 0x1b */
    RECOMP_ICALL(MEM32(eax)); /* 0x171C20CA: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x171C20CC: pop edi */
    esi = POP32_VAL(esp); /* 0x171C20CD: pop esi */
    ebx = POP32_VAL(esp); /* 0x171C20CE: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171C20CF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171C20D0: ret 4 */
L_171C20D3:
    /* cmp eax, MEM32(esi + 0x28) */ /* 0x171C20D3: cmp eax, dword ptr [esi + 0x28] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x28));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C20E0; /* 0x171C20D6: jne 0x171c20e0 */
L_171C20D8:
    ecx = MEM32(esi + 0x3C); /* 0x171C20D8: mov ecx, dword ptr [esi + 0x3c] */
    /* cmp ecx, MEM32(esi + 0x24) */ /* 0x171C20DB: cmp ecx, dword ptr [esi + 0x24] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x24));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C20EC; /* 0x171C20DE: je 0x171c20ec */
L_171C20E0:
    eax = MEM32(esi); /* 0x171C20E0: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171C20E2: push esi */
    MEM32(eax + 0x14) = 0x1Bu; /* 0x171C20E3: mov dword ptr [eax + 0x14], 0x1b */
    RECOMP_ICALL(MEM32(eax)); /* 0x171C20EA: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171C20EC:
    MEM32(edi + 0x4) = 0x171C1E90u; /* 0x171C20EC: mov dword ptr [edi + 4], 0x171c1e90 */
    edi = POP32_VAL(esp); /* 0x171C20F3: pop edi */
    esi = POP32_VAL(esp); /* 0x171C20F4: pop esi */
    ebx = POP32_VAL(esp); /* 0x171C20F5: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171C20F6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171C20F7: ret 4 */
  _ljump:
    switch (_itail_tgt) {
      case 0x171C1F67u: goto L_171C1F67;
      case 0x171C1F6Fu: goto L_171C1F6F;
      case 0x171C1F77u: goto L_171C1F77;
      case 0x171C1FA5u: goto L_171C1FA5;
      case 0x171C200Du: goto L_171C200D;
      case 0x171C2028u: goto L_171C2028;
      case 0x171C2079u: goto L_171C2079;
      case 0x171C208Fu: goto L_171C208F;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_171C2130(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C2130u);

L_171C2130:
    eax = MEM32(esi + 0x20); /* 0x171C2130: mov eax, dword ptr [esi + 0x20] */
    /* test eax, eax */ /* 0x171C2133: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171C214C; /* 0x171C2135: jbe 0x171c214c */
L_171C2137:
    eax = MEM32(esi + 0x1C); /* 0x171C2137: mov eax, dword ptr [esi + 0x1c] */
    /* test eax, eax */ /* 0x171C213A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171C214C; /* 0x171C213C: jbe 0x171c214c */
L_171C213E:
    eax = MEM32(esi + 0x3C); /* 0x171C213E: mov eax, dword ptr [esi + 0x3c] */
    /* test eax, eax */ /* 0x171C2141: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171C214C; /* 0x171C2143: jle 0x171c214c */
L_171C2145:
    eax = MEM32(esi + 0x24); /* 0x171C2145: mov eax, dword ptr [esi + 0x24] */
    /* test eax, eax */ /* 0x171C2148: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_171C2158; /* 0x171C214A: jg 0x171c2158 */
L_171C214C:
    eax = MEM32(esi); /* 0x171C214C: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171C214E: push esi */
    MEM32(eax + 0x14) = 0x20u; /* 0x171C214F: mov dword ptr [eax + 0x14], 0x20 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171C2156: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171C2158:
    eax = MEM32(esi + 0x20); /* 0x171C2158: mov eax, dword ptr [esi + 0x20] */
    ecx = 0xFFDCu; /* 0x171C215B: mov ecx, 0xffdc */
    /* cmp eax, ecx */ /* 0x171C2160: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_171C2169; /* 0x171C2162: jg 0x171c2169 */
L_171C2164:
    /* cmp MEM32(esi + 0x1C), ecx */ /* 0x171C2164: cmp dword ptr [esi + 0x1c], ecx */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171C2178; /* 0x171C2167: jle 0x171c2178 */
L_171C2169:
    eax = MEM32(esi); /* 0x171C2169: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x29u; /* 0x171C216B: mov dword ptr [eax + 0x14], 0x29 */
    PUSH32(esp, esi); /* 0x171C2172: push esi */
    MEM32(eax + 0x18) = ecx; /* 0x171C2173: mov dword ptr [eax + 0x18], ecx */
    RECOMP_ICALL(MEM32(eax)); /* 0x171C2176: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171C2178:
    ecx = MEM32(esi + 0x38); /* 0x171C2178: mov ecx, dword ptr [esi + 0x38] */
    /* cmp ecx, 8 */ /* 0x171C217B: cmp ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C218F; /* 0x171C217E: je 0x171c218f */
L_171C2180:
    eax = MEM32(esi); /* 0x171C2180: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0xFu; /* 0x171C2182: mov dword ptr [eax + 0x14], 0xf */
    PUSH32(esp, esi); /* 0x171C2189: push esi */
    MEM32(eax + 0x18) = ecx; /* 0x171C218A: mov dword ptr [eax + 0x18], ecx */
    RECOMP_ICALL(MEM32(eax)); /* 0x171C218D: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171C218F:
    ecx = MEM32(esi + 0x3C); /* 0x171C218F: mov ecx, dword ptr [esi + 0x3c] */
    /* cmp ecx, 0xAu */ /* 0x171C2192: cmp ecx, 0xa */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171C21AD; /* 0x171C2195: jle 0x171c21ad */
L_171C2197:
    eax = MEM32(esi); /* 0x171C2197: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x1Au; /* 0x171C2199: mov dword ptr [eax + 0x14], 0x1a */
    MEM32(eax + 0x18) = ecx; /* 0x171C21A0: mov dword ptr [eax + 0x18], ecx */
    PUSH32(esp, esi); /* 0x171C21A3: push esi */
    MEM32(eax + 0x1C) = 0xAu; /* 0x171C21A4: mov dword ptr [eax + 0x1c], 0xa */
    RECOMP_ICALL(MEM32(eax)); /* 0x171C21AB: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171C21AD:
    ecx = MEM32(esi + 0x3C); /* 0x171C21AD: mov ecx, dword ptr [esi + 0x3c] */
    eax = 1; /* 0x171C21B0: mov eax, 1 */
    PUSH32(esp, ebx); /* 0x171C21B5: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171C21B6: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x171C21B8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0xF0) = eax; /* 0x171C21BA: mov dword ptr [esi + 0xf0], eax */
    MEM32(esi + 0xF4) = eax; /* 0x171C21C0: mov dword ptr [esi + 0xf4], eax */
    eax = MEM32(esi + 0x44); /* 0x171C21C6: mov eax, dword ptr [esi + 0x44] */
    PUSH32(esp, edi); /* 0x171C21C9: push edi */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171C2227; /* 0x171C21CA: jle 0x171c2227 */
L_171C21CC:
    edi = eax + 0xC; /* 0x171C21CC: lea edi, [eax + 0xc] */
    /* nop */ /* 0x171C21CF: nop  */
L_171C21D0:
    eax = MEM32(edi + (-0x4)); /* 0x171C21D0: mov eax, dword ptr [edi - 4] */
    /* test eax, eax */ /* 0x171C21D3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171C21E7; /* 0x171C21D5: jle 0x171c21e7 */
L_171C21D7:
    /* cmp eax, 4 */ /* 0x171C21D7: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_171C21E7; /* 0x171C21DA: jg 0x171c21e7 */
L_171C21DC:
    eax = MEM32(edi); /* 0x171C21DC: mov eax, dword ptr [edi] */
    /* test eax, eax */ /* 0x171C21DE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171C21E7; /* 0x171C21E0: jle 0x171c21e7 */
L_171C21E2:
    /* cmp eax, 4 */ /* 0x171C21E2: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171C21F3; /* 0x171C21E5: jle 0x171c21f3 */
L_171C21E7:
    eax = MEM32(esi); /* 0x171C21E7: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171C21E9: push esi */
    MEM32(eax + 0x14) = 0x12u; /* 0x171C21EA: mov dword ptr [eax + 0x14], 0x12 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171C21F1: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171C21F3:
    eax = MEM32(esi + 0xF0); /* 0x171C21F3: mov eax, dword ptr [esi + 0xf0] */
    ecx = MEM32(edi + (-0x4)); /* 0x171C21F9: mov ecx, dword ptr [edi - 4] */
    /* cmp eax, ecx */ /* 0x171C21FC: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_171C2202; /* 0x171C21FE: jg 0x171c2202 */
L_171C2200:
    eax = ecx; /* 0x171C2200: mov eax, ecx */
L_171C2202:
    ecx = MEM32(edi); /* 0x171C2202: mov ecx, dword ptr [edi] */
    MEM32(esi + 0xF0) = eax; /* 0x171C2204: mov dword ptr [esi + 0xf0], eax */
    eax = MEM32(esi + 0xF4); /* 0x171C220A: mov eax, dword ptr [esi + 0xf4] */
    /* cmp eax, ecx */ /* 0x171C2210: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_171C2216; /* 0x171C2212: jg 0x171c2216 */
L_171C2214:
    eax = ecx; /* 0x171C2214: mov eax, ecx */
L_171C2216:
    MEM32(esi + 0xF4) = eax; /* 0x171C2216: mov dword ptr [esi + 0xf4], eax */
    eax = MEM32(esi + 0x3C); /* 0x171C221C: mov eax, dword ptr [esi + 0x3c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x171C221F: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x54u; /* 0x171C2220: add edi, 0x54 */
    _flag_k = FK_ADD;
    /* cmp ebx, eax */ /* 0x171C2223: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171C21D0; /* 0x171C2225: jl 0x171c21d0 */
L_171C2227:
    ecx = MEM32(esi + 0x3C); /* 0x171C2227: mov ecx, dword ptr [esi + 0x3c] */
    eax = MEM32(esi + 0x44); /* 0x171C222A: mov eax, dword ptr [esi + 0x44] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171C222D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x171C222F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171C22BD; /* 0x171C2231: jle 0x171c22bd */
L_171C2237:
    edi = eax + 0x24; /* 0x171C2237: lea edi, [eax + 0x24] */
    ebx = ebx; /* 0x171C223A: lea ebx, [ebx] */
L_171C2240:
    ecx = MEM32(edi + (-0x1C)); /* 0x171C2240: mov ecx, dword ptr [edi - 0x1c] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esi + 0x1C)); /* 0x171C2243: imul ecx, dword ptr [esi + 0x1c] */
    eax = MEM32(esi + 0xF0); /* 0x171C2247: mov eax, dword ptr [esi + 0xf0] */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x171C224D: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x171C224D: shl eax, 3 */
    PUSH32(esp, eax); /* 0x171C2250: push eax */
    PUSH32(esp, ecx); /* 0x171C2251: push ecx */
    MEM32(edi + (-0x20)) = ebx; /* 0x171C2252: mov dword ptr [edi - 0x20], ebx */
    MEM32(edi) = 8; /* 0x171C2255: mov dword ptr [edi], 8 */
    RECOMP_CALL(sub_171B5CE0); /* 0x171C225B: call 0x171b5ce0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi + 0xF4); /* 0x171C2260: mov edx, dword ptr [esi + 0xf4] */
    MEM32(edi + (-0x8)) = eax; /* 0x171C2266: mov dword ptr [edi - 8], eax */
    eax = MEM32(edi + (-0x18)); /* 0x171C2269: mov eax, dword ptr [edi - 0x18] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esi + 0x20)); /* 0x171C226C: imul eax, dword ptr [esi + 0x20] */
    if (3u) _cf = (((edx) >> 29) & 1u); /* 0x171C2270: shl edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 3u; /* 0x171C2270: shl edx, 3 */
    PUSH32(esp, edx); /* 0x171C2273: push edx */
    PUSH32(esp, eax); /* 0x171C2274: push eax */
    RECOMP_CALL(sub_171B5CE0); /* 0x171C2275: call 0x171b5ce0 */
    RECOMP_FLAGS_IN();
    edx = MEM32(edi + (-0x1C)); /* 0x171C227A: mov edx, dword ptr [edi - 0x1c] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esi + 0x1C)); /* 0x171C227D: imul edx, dword ptr [esi + 0x1c] */
    ecx = MEM32(esi + 0xF0); /* 0x171C2281: mov ecx, dword ptr [esi + 0xf0] */
    PUSH32(esp, ecx); /* 0x171C2287: push ecx */
    PUSH32(esp, edx); /* 0x171C2288: push edx */
    MEM32(edi + (-0x4)) = eax; /* 0x171C2289: mov dword ptr [edi - 4], eax */
    RECOMP_CALL(sub_171B5CE0); /* 0x171C228C: call 0x171b5ce0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + (-0x18)); /* 0x171C2291: mov ecx, dword ptr [edi - 0x18] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(esi + 0x20)); /* 0x171C2294: imul ecx, dword ptr [esi + 0x20] */
    MEM32(edi + 0x4) = eax; /* 0x171C2298: mov dword ptr [edi + 4], eax */
    eax = MEM32(esi + 0xF4); /* 0x171C229B: mov eax, dword ptr [esi + 0xf4] */
    PUSH32(esp, eax); /* 0x171C22A1: push eax */
    PUSH32(esp, ecx); /* 0x171C22A2: push ecx */
    RECOMP_CALL(sub_171B5CE0); /* 0x171C22A3: call 0x171b5ce0 */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x8) = eax; /* 0x171C22A8: mov dword ptr [edi + 8], eax */
    eax = MEM32(esi + 0x3C); /* 0x171C22AB: mov eax, dword ptr [esi + 0x3c] */
    MEM32(edi + 0xC) = 1; /* 0x171C22AE: mov dword ptr [edi + 0xc], 1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x171C22B5: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x54u; /* 0x171C22B6: add edi, 0x54 */
    _flag_k = FK_ADD;
    /* cmp ebx, eax */ /* 0x171C22B9: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171C2240; /* 0x171C22BB: jl 0x171c2240 */
L_171C22BD:
    edx = MEM32(esi + 0xF4); /* 0x171C22BD: mov edx, dword ptr [esi + 0xf4] */
    eax = MEM32(esi + 0x20); /* 0x171C22C3: mov eax, dword ptr [esi + 0x20] */
    if (3u) _cf = (((edx) >> 29) & 1u); /* 0x171C22C6: shl edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((edx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 3u; /* 0x171C22C6: shl edx, 3 */
    PUSH32(esp, edx); /* 0x171C22C9: push edx */
    PUSH32(esp, eax); /* 0x171C22CA: push eax */
    RECOMP_CALL(sub_171B5CE0); /* 0x171C22CB: call 0x171b5ce0 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x171C22D0: pop edi */
    MEM32(esi + 0xF8) = eax; /* 0x171C22D1: mov dword ptr [esi + 0xf8], eax */
    ebx = POP32_VAL(esp); /* 0x171C22D7: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171C22D8: ret  */
    RECOMP_REGS_OUT();
}

void sub_171C22E0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C22E0u);

L_171C22E0:
    edi = edi; /* 0x171C22E0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C22E2: push ebp */
    ebp = esp; /* 0x171C22E3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xA48u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xA48u; /* 0x171C22E5: sub esp, 0xa48 */
    _flag_k = FK_CMP;
    eax = MEM32(esi + 0xA8); /* 0x171C22EB: mov eax, dword ptr [esi + 0xa8] */
    PUSH32(esp, ebx); /* 0x171C22F1: push ebx */
    PUSH32(esp, edi); /* 0x171C22F2: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171C22F3: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edi */ /* 0x171C22F5: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_171C2308; /* 0x171C22F7: jg 0x171c2308 */
L_171C22F9:
    eax = MEM32(esi); /* 0x171C22F9: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x13u; /* 0x171C22FB: mov dword ptr [eax + 0x14], 0x13 */
    PUSH32(esp, esi); /* 0x171C2302: push esi */
    MEM32(eax + 0x18) = edi; /* 0x171C2303: mov dword ptr [eax + 0x18], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171C2306: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171C2308:
    edx = MEM32(esi + 0xAC); /* 0x171C2308: mov edx, dword ptr [esi + 0xac] */
    /* cmp MEM32(edx + 0x14), edi */ /* 0x171C230E: cmp dword ptr [edx + 0x14], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0x14)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = edx; /* 0x171C2311: mov dword ptr [ebp - 8], edx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C2332; /* 0x171C2314: jne 0x171c2332 */
L_171C2316:
    /* cmp MEM32(edx + 0x18), 0x3Fu */ /* 0x171C2316: cmp dword ptr [edx + 0x18], 0x3f */
    _flag_a = (uint32_t)(MEM32(edx + 0x18)); _flag_b = (uint32_t)(0x3Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C2332; /* 0x171C231A: jne 0x171c2332 */
L_171C231C:
    eax = MEM32(esi + 0x3C); /* 0x171C231C: mov eax, dword ptr [esi + 0x3c] */
    /* cmp eax, edi */ /* 0x171C231F: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0xEC) = edi; /* 0x171C2321: mov dword ptr [esi + 0xec], edi */
    if (CMP_LE(_flag_a, _flag_b)) goto L_171C2359; /* 0x171C2327: jle 0x171c2359 */
L_171C2329:
    ecx = eax; /* 0x171C2329: mov ecx, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171C232B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebp + (-0x48); /* 0x171C232D: lea edi, [ebp - 0x48] */
    goto L_171C2357; /* 0x171C2330: jmp 0x171c2357 */
L_171C2332:
    eax = MEM32(esi + 0x3C); /* 0x171C2332: mov eax, dword ptr [esi + 0x3c] */
    /* cmp eax, edi */ /* 0x171C2335: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0xEC) = 1; /* 0x171C2337: mov dword ptr [esi + 0xec], 1 */
    if (CMP_LE(_flag_a, _flag_b)) goto L_171C2359; /* 0x171C2341: jle 0x171c2359 */
L_171C2343:
    ecx = eax; /* 0x171C2343: mov ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00FFFFFFu);
    ecx = ecx & 0x00FFFFFFu; /* 0x171C2345: and ecx, 0xffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    if (6u) _cf = (((ecx) >> 26) & 1u); /* 0x171C234B: shl ecx, 6 */
    if (6u) { _flag_a = recomp_flags_pack((ecx << 6u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 6u; /* 0x171C234B: shl ecx, 6 */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x171C234E: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = ebp + (-0xA48); /* 0x171C2351: lea edi, [ebp - 0xa48] */
L_171C2357:
    { uint32_t _n = ecx, _b = _n * 4u; /* 0x171C2357: rep stosd dword ptr es:[edi], eax */ if (_df > 0) { MEMSET32((void*)ADDR(edi), eax, _n); edi += _b; } else { MEMSET32((void*)ADDR(edi - _b + 4u), eax, _n); edi -= _b; } ecx = 0; }
L_171C2359:
    eax = MEM32(esi + 0xA8); /* 0x171C2359: mov eax, dword ptr [esi + 0xa8] */
    edi = 1; /* 0x171C235F: mov edi, 1 */
    /* cmp eax, edi */ /* 0x171C2364: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = edi; /* 0x171C2366: mov dword ptr [ebp - 4], edi */
    if (CMP_L(_flag_a, _flag_b)) goto L_171C25AD; /* 0x171C2369: jl 0x171c25ad */
L_171C236F:
    goto L_171C2374; /* 0x171C236F: jmp 0x171c2374 */
L_171C2371:
    edx = MEM32(ebp + (-0x8)); /* 0x171C2371: mov edx, dword ptr [ebp - 8] */
L_171C2374:
    ecx = MEM32(edx); /* 0x171C2374: mov ecx, dword ptr [edx] */
    /* test ecx, ecx */ /* 0x171C2376: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = ecx; /* 0x171C2378: mov dword ptr [ebp - 0xc], ecx */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171C2382; /* 0x171C237B: jle 0x171c2382 */
L_171C237D:
    /* cmp ecx, 4 */ /* 0x171C237D: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171C2398; /* 0x171C2380: jle 0x171c2398 */
L_171C2382:
    eax = MEM32(esi); /* 0x171C2382: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x1Au; /* 0x171C2384: mov dword ptr [eax + 0x14], 0x1a */
    MEM32(eax + 0x18) = ecx; /* 0x171C238B: mov dword ptr [eax + 0x18], ecx */
    PUSH32(esp, esi); /* 0x171C238E: push esi */
    MEM32(eax + 0x1C) = 4; /* 0x171C238F: mov dword ptr [eax + 0x1c], 4 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171C2396: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171C2398:
    eax = MEM32(ebp + (-0xC)); /* 0x171C2398: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171C239B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x171C239D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171C23F1; /* 0x171C239F: jle 0x171c23f1 */
L_171C23A1:
    edx = MEM32(ebp + (-0x8)); /* 0x171C23A1: mov edx, dword ptr [ebp - 8] */
    edi = MEM32(edx + ebx * 4 + 0x4); /* 0x171C23A4: mov edi, dword ptr [edx + ebx*4 + 4] */
    /* test edi, edi */ /* 0x171C23A8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171C23B1; /* 0x171C23AA: jl 0x171c23b1 */
L_171C23AC:
    /* cmp edi, MEM32(esi + 0x3C) */ /* 0x171C23AC: cmp edi, dword ptr [esi + 0x3c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x3C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171C23C6; /* 0x171C23AF: jl 0x171c23c6 */
L_171C23B1:
    eax = MEM32(esi); /* 0x171C23B1: mov eax, dword ptr [esi] */
    ecx = MEM32(ebp + (-0x4)); /* 0x171C23B3: mov ecx, dword ptr [ebp - 4] */
    MEM32(eax + 0x14) = 0x13u; /* 0x171C23B6: mov dword ptr [eax + 0x14], 0x13 */
    PUSH32(esp, esi); /* 0x171C23BD: push esi */
    MEM32(eax + 0x18) = ecx; /* 0x171C23BE: mov dword ptr [eax + 0x18], ecx */
    RECOMP_ICALL(MEM32(eax)); /* 0x171C23C1: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x8)); /* 0x171C23C3: mov edx, dword ptr [ebp - 8] */
L_171C23C6:
    /* test ebx, ebx */ /* 0x171C23C6: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171C23E4; /* 0x171C23C8: jle 0x171c23e4 */
L_171C23CA:
    /* cmp edi, MEM32(edx + ebx * 4) */ /* 0x171C23CA: cmp edi, dword ptr [edx + ebx*4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(edx + ebx * 4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_171C23E4; /* 0x171C23CD: jg 0x171c23e4 */
L_171C23CF:
    eax = MEM32(esi); /* 0x171C23CF: mov eax, dword ptr [esi] */
    edx = MEM32(ebp + (-0x4)); /* 0x171C23D1: mov edx, dword ptr [ebp - 4] */
    MEM32(eax + 0x14) = 0x13u; /* 0x171C23D4: mov dword ptr [eax + 0x14], 0x13 */
    PUSH32(esp, esi); /* 0x171C23DB: push esi */
    MEM32(eax + 0x18) = edx; /* 0x171C23DC: mov dword ptr [eax + 0x18], edx */
    RECOMP_ICALL(MEM32(eax)); /* 0x171C23DF: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x8)); /* 0x171C23E1: mov edx, dword ptr [ebp - 8] */
L_171C23E4:
    eax = MEM32(ebp + (-0xC)); /* 0x171C23E4: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x171C23E7: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, eax */ /* 0x171C23E8: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171C23A1; /* 0x171C23EA: jl 0x171c23a1 */
L_171C23EC:
    edi = MEM32(ebp + (-0x4)); /* 0x171C23EC: mov edi, dword ptr [ebp - 4] */
    goto L_171C23F4; /* 0x171C23EF: jmp 0x171c23f4 */
L_171C23F1:
    edx = MEM32(ebp + (-0x8)); /* 0x171C23F1: mov edx, dword ptr [ebp - 8] */
L_171C23F4:
    /* cmp MEM32(esi + 0xEC), 0 */ /* 0x171C23F4: cmp dword ptr [esi + 0xec], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0xEC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(edx + 0x14); /* 0x171C23FB: mov ebx, dword ptr [edx + 0x14] */
    ecx = MEM32(edx + 0x18); /* 0x171C23FE: mov ecx, dword ptr [edx + 0x18] */
    eax = MEM32(edx + 0x1C); /* 0x171C2401: mov eax, dword ptr [edx + 0x1c] */
    edx = MEM32(edx + 0x20); /* 0x171C2404: mov edx, dword ptr [edx + 0x20] */
    MEM32(ebp + (-0x18)) = ebx; /* 0x171C2407: mov dword ptr [ebp - 0x18], ebx */
    MEM32(ebp + (-0x14)) = ecx; /* 0x171C240A: mov dword ptr [ebp - 0x14], ecx */
    MEM32(ebp + (-0x1C)) = eax; /* 0x171C240D: mov dword ptr [ebp - 0x1c], eax */
    MEM32(ebp + (-0x20)) = edx; /* 0x171C2410: mov dword ptr [ebp - 0x20], edx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C2529; /* 0x171C2413: je 0x171c2529 */
L_171C2419:
    /* test ebx, ebx */ /* 0x171C2419: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171C243D; /* 0x171C241B: jl 0x171c243d */
L_171C241D:
    /* cmp ebx, 0x40u */ /* 0x171C241D: cmp ebx, 0x40 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_171C243D; /* 0x171C2420: jge 0x171c243d */
L_171C2422:
    /* cmp ecx, ebx */ /* 0x171C2422: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171C243D; /* 0x171C2424: jl 0x171c243d */
L_171C2426:
    /* cmp ecx, 0x40u */ /* 0x171C2426: cmp ecx, 0x40 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_171C243D; /* 0x171C2429: jge 0x171c243d */
L_171C242B:
    /* test eax, eax */ /* 0x171C242B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171C243D; /* 0x171C242D: jl 0x171c243d */
L_171C242F:
    /* cmp eax, 0xAu */ /* 0x171C242F: cmp eax, 0xa */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_171C243D; /* 0x171C2432: jg 0x171c243d */
L_171C2434:
    /* test edx, edx */ /* 0x171C2434: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171C243D; /* 0x171C2436: jl 0x171c243d */
L_171C2438:
    /* cmp edx, 0xAu */ /* 0x171C2438: cmp edx, 0xa */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171C244F; /* 0x171C243B: jle 0x171c244f */
L_171C243D:
    eax = MEM32(esi); /* 0x171C243D: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x11u; /* 0x171C243F: mov dword ptr [eax + 0x14], 0x11 */
    PUSH32(esp, esi); /* 0x171C2446: push esi */
    MEM32(eax + 0x18) = edi; /* 0x171C2447: mov dword ptr [eax + 0x18], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171C244A: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x14)); /* 0x171C244C: mov ecx, dword ptr [ebp - 0x14] */
L_171C244F:
    /* test ebx, ebx */ /* 0x171C244F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C2457; /* 0x171C2451: jne 0x171c2457 */
L_171C2453:
    /* test ecx, ecx */ /* 0x171C2453: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171C245B; /* 0x171C2455: jmp 0x171c245b */
L_171C2457:
    /* cmp MEM32(ebp + (-0xC)), 1 */ /* 0x171C2457: cmp dword ptr [ebp - 0xc], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_171C245B:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_171C246C; /* 0x171C245B: je 0x171c246c */
L_171C245D:
    eax = MEM32(esi); /* 0x171C245D: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x11u; /* 0x171C245F: mov dword ptr [eax + 0x14], 0x11 */
    PUSH32(esp, esi); /* 0x171C2466: push esi */
    MEM32(eax + 0x18) = edi; /* 0x171C2467: mov dword ptr [eax + 0x18], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171C246A: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171C246C:
    eax = MEM32(ebp + (-0xC)); /* 0x171C246C: mov eax, dword ptr [ebp - 0xc] */
    /* test eax, eax */ /* 0x171C246F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171C2592; /* 0x171C2471: jle 0x171c2592 */
L_171C2477:
    ecx = MEM32(ebp + (-0x8)); /* 0x171C2477: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x171C247A: add ecx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = ecx; /* 0x171C247D: mov dword ptr [ebp - 0xc], ecx */
    MEM32(ebp + (-0x10)) = eax; /* 0x171C2480: mov dword ptr [ebp - 0x10], eax */
L_171C2483:
    edx = MEM32(ebp + (-0xC)); /* 0x171C2483: mov edx, dword ptr [ebp - 0xc] */
    ebx = MEM32(edx); /* 0x171C2486: mov ebx, dword ptr [edx] */
    eax = MEM32(ebp + (-0x18)); /* 0x171C2488: mov eax, dword ptr [ebp - 0x18] */
    if (8u) _cf = (((ebx) >> 24) & 1u); /* 0x171C248B: shl ebx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((ebx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 8u; /* 0x171C248B: shl ebx, 8 */
    /* test eax, eax */ /* 0x171C248E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = ebp + ebx + (-0xA48); /* 0x171C2490: lea ebx, [ebp + ebx - 0xa48] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171C24AD; /* 0x171C2497: je 0x171c24ad */
L_171C2499:
    /* cmp MEM32(ebx), 0 */ /* 0x171C2499: cmp dword ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_171C24AD; /* 0x171C249C: jge 0x171c24ad */
L_171C249E:
    eax = MEM32(esi); /* 0x171C249E: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x11u; /* 0x171C24A0: mov dword ptr [eax + 0x14], 0x11 */
    PUSH32(esp, esi); /* 0x171C24A7: push esi */
    MEM32(eax + 0x18) = edi; /* 0x171C24A8: mov dword ptr [eax + 0x18], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171C24AB: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171C24AD:
    edi = MEM32(ebp + (-0x18)); /* 0x171C24AD: mov edi, dword ptr [ebp - 0x18] */
    ecx = MEM32(ebp + (-0x14)); /* 0x171C24B0: mov ecx, dword ptr [ebp - 0x14] */
    eax = edi; /* 0x171C24B3: mov eax, edi */
    /* cmp eax, ecx */ /* 0x171C24B5: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_171C250E; /* 0x171C24B7: jg 0x171c250e */
L_171C24B9:
    esp = esp; /* 0x171C24B9: lea esp, [esp] */
L_171C24C0:
    eax = MEM32(ebx + edi * 4); /* 0x171C24C0: mov eax, dword ptr [ebx + edi*4] */
    /* test eax, eax */ /* 0x171C24C3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_171C24DF; /* 0x171C24C5: jge 0x171c24df */
L_171C24C7:
    eax = MEM32(ebp + (-0x1C)); /* 0x171C24C7: mov eax, dword ptr [ebp - 0x1c] */
    /* test eax, eax */ /* 0x171C24CA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171C2500; /* 0x171C24CC: je 0x171c2500 */
L_171C24CE:
    eax = MEM32(esi); /* 0x171C24CE: mov eax, dword ptr [esi] */
    ecx = MEM32(ebp + (-0x4)); /* 0x171C24D0: mov ecx, dword ptr [ebp - 4] */
    MEM32(eax + 0x14) = 0x11u; /* 0x171C24D3: mov dword ptr [eax + 0x14], 0x11 */
    MEM32(eax + 0x18) = ecx; /* 0x171C24DA: mov dword ptr [eax + 0x18], ecx */
    goto L_171C24FD; /* 0x171C24DD: jmp 0x171c24fd */
L_171C24DF:
    ecx = MEM32(ebp + (-0x1C)); /* 0x171C24DF: mov ecx, dword ptr [ebp - 0x1c] */
    /* cmp ecx, eax */ /* 0x171C24E2: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C24EE; /* 0x171C24E4: jne 0x171c24ee */
L_171C24E6:
    eax = MEM32(ebp + (-0x20)); /* 0x171C24E6: mov eax, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x171C24E9: dec ecx */
    _flag_k = FK_DEC;
    /* cmp eax, ecx */ /* 0x171C24EA: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C2500; /* 0x171C24EC: je 0x171c2500 */
L_171C24EE:
    eax = MEM32(esi); /* 0x171C24EE: mov eax, dword ptr [esi] */
    edx = MEM32(ebp + (-0x4)); /* 0x171C24F0: mov edx, dword ptr [ebp - 4] */
    MEM32(eax + 0x14) = 0x11u; /* 0x171C24F3: mov dword ptr [eax + 0x14], 0x11 */
    MEM32(eax + 0x18) = edx; /* 0x171C24FA: mov dword ptr [eax + 0x18], edx */
L_171C24FD:
    PUSH32(esp, esi); /* 0x171C24FD: push esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171C24FE: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171C2500:
    eax = MEM32(ebp + (-0x20)); /* 0x171C2500: mov eax, dword ptr [ebp - 0x20] */
    MEM32(ebx + edi * 4) = eax; /* 0x171C2503: mov dword ptr [ebx + edi*4], eax */
    eax = MEM32(ebp + (-0x14)); /* 0x171C2506: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171C2509: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, eax */ /* 0x171C250A: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_171C24C0; /* 0x171C250C: jle 0x171c24c0 */
L_171C250E:
    ecx = MEM32(ebp + (-0xC)); /* 0x171C250E: mov ecx, dword ptr [ebp - 0xc] */
    eax = MEM32(ebp + (-0x10)); /* 0x171C2511: mov eax, dword ptr [ebp - 0x10] */
    edi = MEM32(ebp + (-0x4)); /* 0x171C2514: mov edi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x171C2517: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171C251A: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0xC)) = ecx; /* 0x171C251B: mov dword ptr [ebp - 0xc], ecx */
    MEM32(ebp + (-0x10)) = eax; /* 0x171C251E: mov dword ptr [ebp - 0x10], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171C2483; /* 0x171C2521: jne 0x171c2483 */
L_171C2527:
    goto L_171C2592; /* 0x171C2527: jmp 0x171c2592 */
L_171C2529:
    /* test ebx, ebx */ /* 0x171C2529: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C253A; /* 0x171C252B: jne 0x171c253a */
L_171C252D:
    /* cmp ecx, 0x3Fu */ /* 0x171C252D: cmp ecx, 0x3f */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x3Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C253A; /* 0x171C2530: jne 0x171c253a */
L_171C2532:
    /* test eax, eax */ /* 0x171C2532: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C253A; /* 0x171C2534: jne 0x171c253a */
L_171C2536:
    /* test edx, edx */ /* 0x171C2536: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171C2549; /* 0x171C2538: je 0x171c2549 */
L_171C253A:
    eax = MEM32(esi); /* 0x171C253A: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x11u; /* 0x171C253C: mov dword ptr [eax + 0x14], 0x11 */
    PUSH32(esp, esi); /* 0x171C2543: push esi */
    MEM32(eax + 0x18) = edi; /* 0x171C2544: mov dword ptr [eax + 0x18], edi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171C2547: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171C2549:
    eax = MEM32(ebp + (-0xC)); /* 0x171C2549: mov eax, dword ptr [ebp - 0xc] */
    /* test eax, eax */ /* 0x171C254C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171C2592; /* 0x171C254E: jle 0x171c2592 */
L_171C2550:
    ebx = MEM32(ebp + (-0x8)); /* 0x171C2550: mov ebx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x171C2553: add ebx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = eax; /* 0x171C2556: mov dword ptr [ebp - 0x10], eax */
    esp = esp; /* 0x171C2559: lea esp, [esp] */
L_171C2560:
    eax = MEM32(ebx); /* 0x171C2560: mov eax, dword ptr [ebx] */
    edi = ebp + eax * 4 + (-0x48); /* 0x171C2562: lea edi, [ebp + eax*4 - 0x48] */
    /* cmp MEM32(edi), 0 */ /* 0x171C2566: cmp dword ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C257D; /* 0x171C2569: je 0x171c257d */
L_171C256B:
    eax = MEM32(esi); /* 0x171C256B: mov eax, dword ptr [esi] */
    ecx = MEM32(ebp + (-0x4)); /* 0x171C256D: mov ecx, dword ptr [ebp - 4] */
    MEM32(eax + 0x14) = 0x13u; /* 0x171C2570: mov dword ptr [eax + 0x14], 0x13 */
    PUSH32(esp, esi); /* 0x171C2577: push esi */
    MEM32(eax + 0x18) = ecx; /* 0x171C2578: mov dword ptr [eax + 0x18], ecx */
    RECOMP_ICALL(MEM32(eax)); /* 0x171C257B: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171C257D:
    eax = MEM32(ebp + (-0x10)); /* 0x171C257D: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x171C2580: add ebx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171C2583: dec eax */
    _flag_k = FK_DEC;
    MEM32(edi) = 1; /* 0x171C2584: mov dword ptr [edi], 1 */
    MEM32(ebp + (-0x10)) = eax; /* 0x171C258A: mov dword ptr [ebp - 0x10], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171C2560; /* 0x171C258D: jne 0x171c2560 */
L_171C258F:
    edi = MEM32(ebp + (-0x4)); /* 0x171C258F: mov edi, dword ptr [ebp - 4] */
L_171C2592:
    edx = MEM32(ebp + (-0x8)); /* 0x171C2592: mov edx, dword ptr [ebp - 8] */
    eax = MEM32(esi + 0xA8); /* 0x171C2595: mov eax, dword ptr [esi + 0xa8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x24u; /* 0x171C259B: add edx, 0x24 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171C259E: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, eax */ /* 0x171C259F: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = edx; /* 0x171C25A1: mov dword ptr [ebp - 8], edx */
    MEM32(ebp + (-0x4)) = edi; /* 0x171C25A4: mov dword ptr [ebp - 4], edi */
    RECOMP_BACKEDGE();
    if (CMP_LE(_flag_a, _flag_b)) goto L_171C2371; /* 0x171C25A7: jle 0x171c2371 */
L_171C25AD:
    eax = MEM32(esi + 0xEC); /* 0x171C25AD: mov eax, dword ptr [esi + 0xec] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171C25B3: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x171C25B5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi + 0x3C); /* 0x171C25B7: mov eax, dword ptr [esi + 0x3c] */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171C25EB; /* 0x171C25BA: je 0x171c25eb */
L_171C25BC:
    /* test eax, eax */ /* 0x171C25BC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171C260C; /* 0x171C25BE: jle 0x171c260c */
L_171C25C0:
    ebx = ebp + (-0xA48); /* 0x171C25C0: lea ebx, [ebp - 0xa48] */
L_171C25C6:
    /* cmp MEM32(ebx), 0 */ /* 0x171C25C6: cmp dword ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_171C25D7; /* 0x171C25C9: jge 0x171c25d7 */
L_171C25CB:
    eax = MEM32(esi); /* 0x171C25CB: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171C25CD: push esi */
    MEM32(eax + 0x14) = 0x2Du; /* 0x171C25CE: mov dword ptr [eax + 0x14], 0x2d */
    RECOMP_ICALL(MEM32(eax)); /* 0x171C25D5: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171C25D7:
    eax = MEM32(esi + 0x3C); /* 0x171C25D7: mov eax, dword ptr [esi + 0x3c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171C25DA: inc edi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x100u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x100u; /* 0x171C25DB: add ebx, 0x100 */
    _flag_k = FK_ADD;
    /* cmp edi, eax */ /* 0x171C25E1: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171C25C6; /* 0x171C25E3: jl 0x171c25c6 */
L_171C25E5:
    edi = POP32_VAL(esp); /* 0x171C25E5: pop edi */
    ebx = POP32_VAL(esp); /* 0x171C25E6: pop ebx */
    esp = ebp; /* 0x171C25E7: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171C25E9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171C25EA: ret  */
L_171C25EB:
    /* test eax, eax */ /* 0x171C25EB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171C260C; /* 0x171C25ED: jle 0x171c260c */
L_171C25EF:
    /* nop */ /* 0x171C25EF: nop  */
L_171C25F0:
    eax = MEM32(ebp + edi * 4 + (-0x48)); /* 0x171C25F0: mov eax, dword ptr [ebp + edi*4 - 0x48] */
    /* test eax, eax */ /* 0x171C25F4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C2604; /* 0x171C25F6: jne 0x171c2604 */
L_171C25F8:
    eax = MEM32(esi); /* 0x171C25F8: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171C25FA: push esi */
    MEM32(eax + 0x14) = 0x2Du; /* 0x171C25FB: mov dword ptr [eax + 0x14], 0x2d */
    RECOMP_ICALL(MEM32(eax)); /* 0x171C2602: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171C2604:
    eax = MEM32(esi + 0x3C); /* 0x171C2604: mov eax, dword ptr [esi + 0x3c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171C2607: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, eax */ /* 0x171C2608: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171C25F0; /* 0x171C260A: jl 0x171c25f0 */
L_171C260C:
    edi = POP32_VAL(esp); /* 0x171C260C: pop edi */
    ebx = POP32_VAL(esp); /* 0x171C260D: pop ebx */
    esp = ebp; /* 0x171C260E: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171C2610: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171C2611: ret  */
    RECOMP_REGS_OUT();
}

void sub_171C2620(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C2620u);

L_171C2620:
    ecx = MEM32(esi + 0xAC); /* 0x171C2620: mov ecx, dword ptr [esi + 0xac] */
    PUSH32(esp, ebx); /* 0x171C2626: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171C2627: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, ebx */ /* 0x171C2629: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x171C262B: push edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C268C; /* 0x171C262C: je 0x171c268c */
L_171C262E:
    eax = MEM32(esi + 0x154); /* 0x171C262E: mov eax, dword ptr [esi + 0x154] */
    eax = MEM32(eax + 0x20); /* 0x171C2634: mov eax, dword ptr [eax + 0x20] */
    edx = eax + eax * 8; /* 0x171C2637: lea edx, [eax + eax*8] */
    edi = ecx + edx * 4; /* 0x171C263A: lea edi, [ecx + edx*4] */
    edx = MEM32(edi); /* 0x171C263D: mov edx, dword ptr [edi] */
    /* cmp edx, ebx */ /* 0x171C263F: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0xFC) = edx; /* 0x171C2641: mov dword ptr [esi + 0xfc], edx */
    if (CMP_LE(_flag_a, _flag_b)) goto L_171C2665; /* 0x171C2647: jle 0x171c2665 */
L_171C2649:
    ecx = esi + 0x100; /* 0x171C2649: lea ecx, [esi + 0x100] */
    eax = edi + 0x4; /* 0x171C264F: lea eax, [edi + 4] */
L_171C2652:
    ebx = MEM32(eax); /* 0x171C2652: mov ebx, dword ptr [eax] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x54u); /* 0x171C2654: imul ebx, ebx, 0x54 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + 0x44));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(esi + 0x44); /* 0x171C2657: add ebx, dword ptr [esi + 0x44] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171C265A: add eax, 4 */
    _flag_k = FK_ADD;
    MEM32(ecx) = ebx; /* 0x171C265D: mov dword ptr [ecx], ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x171C265F: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x171C2662: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171C2652; /* 0x171C2663: jne 0x171c2652 */
L_171C2665:
    eax = MEM32(edi + 0x14); /* 0x171C2665: mov eax, dword ptr [edi + 0x14] */
    ecx = MEM32(edi + 0x18); /* 0x171C2668: mov ecx, dword ptr [edi + 0x18] */
    edx = MEM32(edi + 0x1C); /* 0x171C266B: mov edx, dword ptr [edi + 0x1c] */
    MEM32(esi + 0x144) = eax; /* 0x171C266E: mov dword ptr [esi + 0x144], eax */
    eax = MEM32(edi + 0x20); /* 0x171C2674: mov eax, dword ptr [edi + 0x20] */
    edi = POP32_VAL(esp); /* 0x171C2677: pop edi */
    MEM32(esi + 0x148) = ecx; /* 0x171C2678: mov dword ptr [esi + 0x148], ecx */
    MEM32(esi + 0x14C) = edx; /* 0x171C267E: mov dword ptr [esi + 0x14c], edx */
    MEM32(esi + 0x150) = eax; /* 0x171C2684: mov dword ptr [esi + 0x150], eax */
    ebx = POP32_VAL(esp); /* 0x171C268A: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171C268B: ret  */
L_171C268C:
    ecx = MEM32(esi + 0x3C); /* 0x171C268C: mov ecx, dword ptr [esi + 0x3c] */
    /* cmp ecx, 4 */ /* 0x171C268F: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171C26AA; /* 0x171C2692: jle 0x171c26aa */
L_171C2694:
    eax = MEM32(esi); /* 0x171C2694: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x1Au; /* 0x171C2696: mov dword ptr [eax + 0x14], 0x1a */
    MEM32(eax + 0x18) = ecx; /* 0x171C269D: mov dword ptr [eax + 0x18], ecx */
    PUSH32(esp, esi); /* 0x171C26A0: push esi */
    MEM32(eax + 0x1C) = 4; /* 0x171C26A1: mov dword ptr [eax + 0x1c], 4 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171C26A8: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171C26AA:
    eax = MEM32(esi + 0x3C); /* 0x171C26AA: mov eax, dword ptr [esi + 0x3c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171C26AD: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ebx */ /* 0x171C26AF: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0xFC) = eax; /* 0x171C26B1: mov dword ptr [esi + 0xfc], eax */
    if (CMP_LE(_flag_a, _flag_b)) goto L_171C26D6; /* 0x171C26B7: jle 0x171c26d6 */
L_171C26B9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171C26B9: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = esi + 0x100; /* 0x171C26BB: lea eax, [esi + 0x100] */
L_171C26C1:
    edi = MEM32(esi + 0x44); /* 0x171C26C1: mov edi, dword ptr [esi + 0x44] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x171C26C4: add edi, ecx */
    _flag_k = FK_ADD;
    MEM32(eax) = edi; /* 0x171C26C6: mov dword ptr [eax], edi */
    edi = MEM32(esi + 0x3C); /* 0x171C26C8: mov edi, dword ptr [esi + 0x3c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x171C26CB: inc edx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171C26CC: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x54u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x54u; /* 0x171C26CF: add ecx, 0x54 */
    _flag_k = FK_ADD;
    /* cmp edx, edi */ /* 0x171C26D2: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171C26C1; /* 0x171C26D4: jl 0x171c26c1 */
L_171C26D6:
    edi = POP32_VAL(esp); /* 0x171C26D6: pop edi */
    MEM32(esi + 0x144) = ebx; /* 0x171C26D7: mov dword ptr [esi + 0x144], ebx */
    MEM32(esi + 0x14C) = ebx; /* 0x171C26DD: mov dword ptr [esi + 0x14c], ebx */
    MEM32(esi + 0x150) = ebx; /* 0x171C26E3: mov dword ptr [esi + 0x150], ebx */
    MEM32(esi + 0x148) = 0x3Fu; /* 0x171C26E9: mov dword ptr [esi + 0x148], 0x3f */
    ebx = POP32_VAL(esp); /* 0x171C26F3: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171C26F4: ret  */
    RECOMP_REGS_OUT();
}

void sub_171C2700(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C2700u);

L_171C2700:
    edi = edi; /* 0x171C2700: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C2702: push ebp */
    ebp = esp; /* 0x171C2703: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 8; /* 0x171C2705: sub esp, 8 */
    _flag_k = FK_CMP;
    ecx = MEM32(esi + 0xFC); /* 0x171C2708: mov ecx, dword ptr [esi + 0xfc] */
    PUSH32(esp, ebx); /* 0x171C270E: push ebx */
    ebx = 1; /* 0x171C270F: mov ebx, 1 */
    /* cmp ecx, ebx */ /* 0x171C2714: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x171C2716: push edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C2769; /* 0x171C2717: jne 0x171c2769 */
L_171C2719:
    ecx = MEM32(esi + 0x100); /* 0x171C2719: mov ecx, dword ptr [esi + 0x100] */
    eax = MEM32(ecx + 0x1C); /* 0x171C271F: mov eax, dword ptr [ecx + 0x1c] */
    edi = MEM32(ecx + 0xC); /* 0x171C2722: mov edi, dword ptr [ecx + 0xc] */
    MEM32(esi + 0x110) = eax; /* 0x171C2725: mov dword ptr [esi + 0x110], eax */
    eax = MEM32(ecx + 0x20); /* 0x171C272B: mov eax, dword ptr [ecx + 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171C272E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x114) = eax; /* 0x171C2730: mov dword ptr [esi + 0x114], eax */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)edi; /* 0x171C2736: div edi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    MEM32(ecx + 0x34) = ebx; /* 0x171C2738: mov dword ptr [ecx + 0x34], ebx */
    MEM32(ecx + 0x38) = ebx; /* 0x171C273B: mov dword ptr [ecx + 0x38], ebx */
    MEM32(ecx + 0x3C) = ebx; /* 0x171C273E: mov dword ptr [ecx + 0x3c], ebx */
    MEM32(ecx + 0x40) = 8; /* 0x171C2741: mov dword ptr [ecx + 0x40], 8 */
    MEM32(ecx + 0x44) = ebx; /* 0x171C2748: mov dword ptr [ecx + 0x44], ebx */
    /* test edx, edx */ /* 0x171C274B: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C2751; /* 0x171C274D: jne 0x171c2751 */
L_171C274F:
    edx = edi; /* 0x171C274F: mov edx, edi */
L_171C2751:
    MEM32(ecx + 0x48) = edx; /* 0x171C2751: mov dword ptr [ecx + 0x48], edx */
    MEM32(esi + 0x118) = ebx; /* 0x171C2754: mov dword ptr [esi + 0x118], ebx */
    MEM32(esi + 0x11C) = 0; /* 0x171C275A: mov dword ptr [esi + 0x11c], 0 */
    goto L_171C288E; /* 0x171C2764: jmp 0x171c288e */
L_171C2769:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171C2769: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, edi */ /* 0x171C276B: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171C2774; /* 0x171C276D: jle 0x171c2774 */
L_171C276F:
    /* cmp ecx, 4 */ /* 0x171C276F: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171C278A; /* 0x171C2772: jle 0x171c278a */
L_171C2774:
    eax = MEM32(esi); /* 0x171C2774: mov eax, dword ptr [esi] */
    MEM32(eax + 0x14) = 0x1Au; /* 0x171C2776: mov dword ptr [eax + 0x14], 0x1a */
    MEM32(eax + 0x18) = ecx; /* 0x171C277D: mov dword ptr [eax + 0x18], ecx */
    PUSH32(esp, esi); /* 0x171C2780: push esi */
    MEM32(eax + 0x1C) = 4; /* 0x171C2781: mov dword ptr [eax + 0x1c], 4 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171C2788: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171C278A:
    ecx = MEM32(esi + 0xF0); /* 0x171C278A: mov ecx, dword ptr [esi + 0xf0] */
    edx = MEM32(esi + 0x1C); /* 0x171C2790: mov edx, dword ptr [esi + 0x1c] */
    if (3u) _cf = (((ecx) >> 29) & 1u); /* 0x171C2793: shl ecx, 3 */
    if (3u) { _flag_a = recomp_flags_pack((ecx << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 3u; /* 0x171C2793: shl ecx, 3 */
    PUSH32(esp, ecx); /* 0x171C2796: push ecx */
    PUSH32(esp, edx); /* 0x171C2797: push edx */
    RECOMP_CALL(sub_171B5CE0); /* 0x171C2798: call 0x171b5ce0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x20); /* 0x171C279D: mov ecx, dword ptr [esi + 0x20] */
    MEM32(esi + 0x110) = eax; /* 0x171C27A0: mov dword ptr [esi + 0x110], eax */
    eax = MEM32(esi + 0xF4); /* 0x171C27A6: mov eax, dword ptr [esi + 0xf4] */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x171C27AC: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x171C27AC: shl eax, 3 */
    PUSH32(esp, eax); /* 0x171C27AF: push eax */
    PUSH32(esp, ecx); /* 0x171C27B0: push ecx */
    RECOMP_CALL(sub_171B5CE0); /* 0x171C27B1: call 0x171b5ce0 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x114) = eax; /* 0x171C27B6: mov dword ptr [esi + 0x114], eax */
    /* cmp MEM32(esi + 0xFC), edi */ /* 0x171C27BC: cmp dword ptr [esi + 0xfc], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0xFC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi + 0x118) = edi; /* 0x171C27C2: mov dword ptr [esi + 0x118], edi */
    MEM32(ebp + (-0x4)) = edi; /* 0x171C27C8: mov dword ptr [ebp - 4], edi */
    if (CMP_LE(_flag_a, _flag_b)) goto L_171C288E; /* 0x171C27CB: jle 0x171c288e */
L_171C27D1:
    edx = esi + 0x100; /* 0x171C27D1: lea edx, [esi + 0x100] */
    MEM32(ebp + (-0x8)) = edx; /* 0x171C27D7: mov dword ptr [ebp - 8], edx */
    ebx = ebx; /* 0x171C27DA: lea ebx, [ebx] */
L_171C27E0:
    eax = MEM32(ebp + (-0x8)); /* 0x171C27E0: mov eax, dword ptr [ebp - 8] */
    ecx = MEM32(eax); /* 0x171C27E3: mov ecx, dword ptr [eax] */
    edi = MEM32(ecx + 0x8); /* 0x171C27E5: mov edi, dword ptr [ecx + 8] */
    eax = MEM32(ecx + 0x1C); /* 0x171C27E8: mov eax, dword ptr [ecx + 0x1c] */
    edx = edi * 8; /* 0x171C27EB: lea edx, [edi*8] */
    ebx = MEM32(ecx + 0xC); /* 0x171C27F2: mov ebx, dword ptr [ecx + 0xc] */
    MEM32(ecx + 0x40) = edx; /* 0x171C27F5: mov dword ptr [ecx + 0x40], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171C27F8: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)edi; /* 0x171C27FA: div edi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    MEM32(ecx + 0x38) = ebx; /* 0x171C27FC: mov dword ptr [ecx + 0x38], ebx */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edi); /* 0x171C27FF: imul ebx, edi */
    MEM32(ecx + 0x34) = edi; /* 0x171C2802: mov dword ptr [ecx + 0x34], edi */
    MEM32(ecx + 0x3C) = ebx; /* 0x171C2805: mov dword ptr [ecx + 0x3c], ebx */
    /* test edx, edx */ /* 0x171C2808: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C280E; /* 0x171C280A: jne 0x171c280e */
L_171C280C:
    edx = edi; /* 0x171C280C: mov edx, edi */
L_171C280E:
    eax = MEM32(ecx + 0x20); /* 0x171C280E: mov eax, dword ptr [ecx + 0x20] */
    edi = MEM32(ecx + 0xC); /* 0x171C2811: mov edi, dword ptr [ecx + 0xc] */
    MEM32(ecx + 0x44) = edx; /* 0x171C2814: mov dword ptr [ecx + 0x44], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171C2817: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)edi; /* 0x171C2819: div edi */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    /* test edx, edx */ /* 0x171C281B: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C2821; /* 0x171C281D: jne 0x171c2821 */
L_171C281F:
    edx = edi; /* 0x171C281F: mov edx, edi */
L_171C2821:
    eax = MEM32(esi + 0x118); /* 0x171C2821: mov eax, dword ptr [esi + 0x118] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x171C2827: add eax, ebx */
    _flag_k = FK_ADD;
    /* cmp eax, 0xAu */ /* 0x171C2829: cmp eax, 0xa */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ecx + 0x48) = edx; /* 0x171C282C: mov dword ptr [ecx + 0x48], edx */
    if (CMP_LE(_flag_a, _flag_b)) goto L_171C283D; /* 0x171C282F: jle 0x171c283d */
L_171C2831:
    eax = MEM32(esi); /* 0x171C2831: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171C2833: push esi */
    MEM32(eax + 0x14) = 0xDu; /* 0x171C2834: mov dword ptr [eax + 0x14], 0xd */
    RECOMP_ICALL(MEM32(eax)); /* 0x171C283B: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
L_171C283D:
    /* test ebx, ebx */ /* 0x171C283D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171C2870; /* 0x171C283F: jle 0x171c2870 */
L_171C2841:
    goto L_171C2850; /* 0x171C2841: jmp 0x171c2850 */
L_171C2850:
    ecx = MEM32(esi + 0x118); /* 0x171C2850: mov ecx, dword ptr [esi + 0x118] */
    edx = MEM32(ebp + (-0x4)); /* 0x171C2856: mov edx, dword ptr [ebp - 4] */
    MEM32(esi + ecx * 4 + 0x11C) = edx; /* 0x171C2859: mov dword ptr [esi + ecx*4 + 0x11c], edx */
    ecx = MEM32(esi + 0x118); /* 0x171C2860: mov ecx, dword ptr [esi + 0x118] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171C2866: inc ecx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x171C2867: dec ebx */
    _flag_k = FK_DEC;
    MEM32(esi + 0x118) = ecx; /* 0x171C2868: mov dword ptr [esi + 0x118], ecx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171C2850; /* 0x171C286E: jne 0x171c2850 */
L_171C2870:
    eax = MEM32(ebp + (-0x4)); /* 0x171C2870: mov eax, dword ptr [ebp - 4] */
    edx = MEM32(ebp + (-0x8)); /* 0x171C2873: mov edx, dword ptr [ebp - 8] */
    ecx = MEM32(esi + 0xFC); /* 0x171C2876: mov ecx, dword ptr [esi + 0xfc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171C287C: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x171C287D: add edx, 4 */
    _flag_k = FK_ADD;
    /* cmp eax, ecx */ /* 0x171C2880: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = eax; /* 0x171C2882: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0x8)) = edx; /* 0x171C2885: mov dword ptr [ebp - 8], edx */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171C27E0; /* 0x171C2888: jl 0x171c27e0 */
L_171C288E:
    ecx = MEM32(esi + 0xCC); /* 0x171C288E: mov ecx, dword ptr [esi + 0xcc] */
    /* test ecx, ecx */ /* 0x171C2894: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x171C2896: pop edi */
    ebx = POP32_VAL(esp); /* 0x171C2897: pop ebx */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171C28B5; /* 0x171C2898: jle 0x171c28b5 */
L_171C289A:
    eax = MEM32(esi + 0x110); /* 0x171C289A: mov eax, dword ptr [esi + 0x110] */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x171C28A0: imul eax, ecx */
    /* cmp eax, 0xFFFFu */ /* 0x171C28A3: cmp eax, 0xffff */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_171C28AF; /* 0x171C28A8: jl 0x171c28af */
L_171C28AA:
    eax = 0xFFFFu; /* 0x171C28AA: mov eax, 0xffff */
L_171C28AF:
    MEM32(esi + 0xC8) = eax; /* 0x171C28AF: mov dword ptr [esi + 0xc8], eax */
L_171C28B5:
    esp = ebp; /* 0x171C28B5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171C28B7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171C28B8: ret  */
    RECOMP_REGS_OUT();
}

void sub_171C28C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C28C0u);

L_171C28C0:
    edi = edi; /* 0x171C28C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C28C2: push ebp */
    ebp = esp; /* 0x171C28C3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171C28C5: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171C28C6: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x171C28C9: push edi */
    edi = MEM32(esi + 0x154); /* 0x171C28CA: mov edi, dword ptr [esi + 0x154] */
    eax = MEM32(edi + 0x14); /* 0x171C28D0: mov eax, dword ptr [edi + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x171C28D3: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_171C2999; /* 0x171C28D6: je 0x171c2999 */
L_171C28DC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171C28DC: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_171C28F3; /* 0x171C28DD: je 0x171c28f3 */
L_171C28DF:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171C28DF: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_171C2929; /* 0x171C28E0: je 0x171c2929 */
L_171C28E2:
    eax = MEM32(esi); /* 0x171C28E2: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x171C28E4: push esi */
    MEM32(eax + 0x14) = 0x30u; /* 0x171C28E5: mov dword ptr [eax + 0x14], 0x30 */
    RECOMP_ICALL(MEM32(eax)); /* 0x171C28EC: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    goto L_171C2A17; /* 0x171C28EE: jmp 0x171c2a17 */
L_171C28F3:
    RECOMP_CALL(sub_171C2620); /* 0x171C28F3: call 0x171c2620 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_171C2700); /* 0x171C28F8: call 0x171c2700 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x144); /* 0x171C28FD: mov eax, dword ptr [esi + 0x144] */
    /* test eax, eax */ /* 0x171C2903: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C297A; /* 0x171C2905: jne 0x171c297a */
L_171C2907:
    eax = MEM32(esi + 0x14C); /* 0x171C2907: mov eax, dword ptr [esi + 0x14c] */
    /* test eax, eax */ /* 0x171C290D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171C297A; /* 0x171C290F: je 0x171c297a */
L_171C2911:
    eax = MEM32(esi + 0xB4); /* 0x171C2911: mov eax, dword ptr [esi + 0xb4] */
    /* test eax, eax */ /* 0x171C2917: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C297A; /* 0x171C2919: jne 0x171c297a */
L_171C291B:
    eax = MEM32(edi + 0x18); /* 0x171C291B: mov eax, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171C291E: inc eax */
    _flag_k = FK_INC;
    MEM32(edi + 0x14) = 2; /* 0x171C291F: mov dword ptr [edi + 0x14], 2 */
    MEM32(edi + 0x18) = eax; /* 0x171C2926: mov dword ptr [edi + 0x18], eax */
L_171C2929:
    eax = MEM32(esi + 0xB8); /* 0x171C2929: mov eax, dword ptr [esi + 0xb8] */
    /* test eax, eax */ /* 0x171C292F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C293D; /* 0x171C2931: jne 0x171c293d */
L_171C2933:
    RECOMP_CALL(sub_171C2620); /* 0x171C2933: call 0x171c2620 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_171C2700); /* 0x171C2938: call 0x171c2700 */
    RECOMP_FLAGS_IN();
L_171C293D:
    eax = MEM32(esi + 0x174); /* 0x171C293D: mov eax, dword ptr [esi + 0x174] */
    PUSH32(esp, 0); /* 0x171C2943: push 0 */
    PUSH32(esp, esi); /* 0x171C2945: push esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171C2946: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x160); /* 0x171C2948: mov ecx, dword ptr [esi + 0x160] */
    PUSH32(esp, 2); /* 0x171C294E: push 2 */
    PUSH32(esp, esi); /* 0x171C2950: push esi */
    RECOMP_ICALL(MEM32(ecx)); /* 0x171C2951: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x20); /* 0x171C2953: mov eax, dword ptr [edi + 0x20] */
    /* test eax, eax */ /* 0x171C2956: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C2964; /* 0x171C2958: jne 0x171c2964 */
L_171C295A:
    edx = MEM32(esi + 0x164); /* 0x171C295A: mov edx, dword ptr [esi + 0x164] */
    PUSH32(esp, esi); /* 0x171C2960: push esi */
    RECOMP_ICALL(MEM32(edx + 0x4)); /* 0x171C2961: call dword ptr [edx + 4] */
    RECOMP_FLAGS_IN();
L_171C2964:
    eax = MEM32(esi + 0x164); /* 0x171C2964: mov eax, dword ptr [esi + 0x164] */
    PUSH32(esp, esi); /* 0x171C296A: push esi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x171C296B: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0xC) = 0; /* 0x171C296E: mov dword ptr [edi + 0xc], 0 */
    goto L_171C2A17; /* 0x171C2975: jmp 0x171c2a17 */
L_171C297A:
    ecx = MEM32(esi + 0x174); /* 0x171C297A: mov ecx, dword ptr [esi + 0x174] */
    PUSH32(esp, 1); /* 0x171C2980: push 1 */
    PUSH32(esp, esi); /* 0x171C2982: push esi */
    RECOMP_ICALL(MEM32(ecx)); /* 0x171C2983: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi + 0x160); /* 0x171C2985: mov edx, dword ptr [esi + 0x160] */
    PUSH32(esp, 2); /* 0x171C298B: push 2 */
    PUSH32(esp, esi); /* 0x171C298D: push esi */
    RECOMP_ICALL(MEM32(edx)); /* 0x171C298E: call dword ptr [edx] */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0xC) = 0; /* 0x171C2990: mov dword ptr [edi + 0xc], 0 */
    goto L_171C2A17; /* 0x171C2997: jmp 0x171c2a17 */
L_171C2999:
    RECOMP_CALL(sub_171C2620); /* 0x171C2999: call 0x171c2620 */
    RECOMP_FLAGS_IN();
    RECOMP_CALL(sub_171C2700); /* 0x171C299E: call 0x171c2700 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xB0); /* 0x171C29A3: mov eax, dword ptr [esi + 0xb0] */
    /* test eax, eax */ /* 0x171C29A9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C29CA; /* 0x171C29AB: jne 0x171c29ca */
L_171C29AD:
    eax = MEM32(esi + 0x168); /* 0x171C29AD: mov eax, dword ptr [esi + 0x168] */
    PUSH32(esp, esi); /* 0x171C29B3: push esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171C29B4: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x16C); /* 0x171C29B6: mov ecx, dword ptr [esi + 0x16c] */
    PUSH32(esp, esi); /* 0x171C29BC: push esi */
    RECOMP_ICALL(MEM32(ecx)); /* 0x171C29BD: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi + 0x15C); /* 0x171C29BF: mov edx, dword ptr [esi + 0x15c] */
    PUSH32(esp, 0); /* 0x171C29C5: push 0 */
    PUSH32(esp, esi); /* 0x171C29C7: push esi */
    RECOMP_ICALL(MEM32(edx)); /* 0x171C29C8: call dword ptr [edx] */
    RECOMP_FLAGS_IN();
L_171C29CA:
    eax = MEM32(esi + 0x170); /* 0x171C29CA: mov eax, dword ptr [esi + 0x170] */
    PUSH32(esp, esi); /* 0x171C29D0: push esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171C29D1: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi + 0xB8); /* 0x171C29D3: mov edx, dword ptr [esi + 0xb8] */
    ecx = MEM32(esi + 0x174); /* 0x171C29D9: mov ecx, dword ptr [esi + 0x174] */
    PUSH32(esp, edx); /* 0x171C29DF: push edx */
    PUSH32(esp, esi); /* 0x171C29E0: push esi */
    RECOMP_ICALL(MEM32(ecx)); /* 0x171C29E1: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
    edx = MEM32(edi + 0x1C); /* 0x171C29E3: mov edx, dword ptr [edi + 0x1c] */
    eax = MEM32(esi + 0x160); /* 0x171C29E6: mov eax, dword ptr [esi + 0x160] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171C29EC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, 1 */ /* 0x171C29EE: cmp edx, 1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_LE(_flag_a, _flag_b)) ? 1 : 0); /* 0x171C29F1: setle cl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x171C29F4: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x171C29F5: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x171C29F8: push ecx */
    PUSH32(esp, esi); /* 0x171C29F9: push esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171C29FA: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi + 0x158); /* 0x171C29FC: mov edx, dword ptr [esi + 0x158] */
    PUSH32(esp, 0); /* 0x171C2A02: push 0 */
    PUSH32(esp, esi); /* 0x171C2A04: push esi */
    RECOMP_ICALL(MEM32(edx)); /* 0x171C2A05: call dword ptr [edx] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0xB8); /* 0x171C2A07: mov ecx, dword ptr [esi + 0xb8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171C2A0D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x171C2A0F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_Z(_flag_a, _flag_b)) ? 1 : 0); /* 0x171C2A11: sete al */
    MEM32(edi + 0xC) = eax; /* 0x171C2A14: mov dword ptr [edi + 0xc], eax */
L_171C2A17:
    ecx = MEM32(edi + 0x1C); /* 0x171C2A17: mov ecx, dword ptr [edi + 0x1c] */
    eax = MEM32(edi + 0x18); /* 0x171C2A1A: mov eax, dword ptr [edi + 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x171C2A1D: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171C2A1E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x171C2A20: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(esi + 0x8); /* 0x171C2A22: mov ecx, dword ptr [esi + 8] */
    SET_LO8(edx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x171C2A25: sete dl */
    /* test ecx, ecx */ /* 0x171C2A28: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x10) = edx; /* 0x171C2A2A: mov dword ptr [edi + 0x10], edx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171C2A3A; /* 0x171C2A2D: je 0x171c2a3a */
L_171C2A2F:
    esi = ecx; /* 0x171C2A2F: mov esi, ecx */
    MEM32(esi + 0xC) = eax; /* 0x171C2A31: mov dword ptr [esi + 0xc], eax */
    eax = MEM32(edi + 0x1C); /* 0x171C2A34: mov eax, dword ptr [edi + 0x1c] */
    MEM32(esi + 0x10) = eax; /* 0x171C2A37: mov dword ptr [esi + 0x10], eax */
L_171C2A3A:
    edi = POP32_VAL(esp); /* 0x171C2A3A: pop edi */
    esi = POP32_VAL(esp); /* 0x171C2A3B: pop esi */
    ebp = POP32_VAL(esp); /* 0x171C2A3C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171C2A3D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171C2A50(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C2A50u);

L_171C2A50:
    edi = edi; /* 0x171C2A50: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C2A52: push ebp */
    ebp = esp; /* 0x171C2A53: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171C2A55: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171C2A56: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x154); /* 0x171C2A59: mov eax, dword ptr [esi + 0x154] */
    ecx = MEM32(esi + 0x164); /* 0x171C2A5F: mov ecx, dword ptr [esi + 0x164] */
    PUSH32(esp, esi); /* 0x171C2A65: push esi */
    MEM32(eax + 0xC) = 0; /* 0x171C2A66: mov dword ptr [eax + 0xc], 0 */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x171C2A6D: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi + 0x164); /* 0x171C2A70: mov edx, dword ptr [esi + 0x164] */
    PUSH32(esp, esi); /* 0x171C2A76: push esi */
    RECOMP_ICALL(MEM32(edx + 0x8)); /* 0x171C2A77: call dword ptr [edx + 8] */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x171C2A7A: pop esi */
    ebp = POP32_VAL(esp); /* 0x171C2A7B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171C2A7C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171C2A90(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C2A90u);

L_171C2A90:
    edi = edi; /* 0x171C2A90: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C2A92: push ebp */
    ebp = esp; /* 0x171C2A93: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171C2A95: push esi */
    PUSH32(esp, edi); /* 0x171C2A96: push edi */
    edi = MEM32(ebp + 0x8); /* 0x171C2A97: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0x174); /* 0x171C2A9A: mov eax, dword ptr [edi + 0x174] */
    esi = MEM32(edi + 0x154); /* 0x171C2AA0: mov esi, dword ptr [edi + 0x154] */
    PUSH32(esp, edi); /* 0x171C2AA6: push edi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x171C2AA7: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x14); /* 0x171C2AAA: mov eax, dword ptr [esi + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x171C2AAD: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_171C2AED; /* 0x171C2AB0: je 0x171c2aed */
L_171C2AB2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171C2AB2: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_171C2AD9; /* 0x171C2AB3: je 0x171c2ad9 */
L_171C2AB5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171C2AB5: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171C2B01; /* 0x171C2AB6: jne 0x171c2b01 */
L_171C2AB8:
    eax = MEM32(edi + 0xB8); /* 0x171C2AB8: mov eax, dword ptr [edi + 0xb8] */
    /* test eax, eax */ /* 0x171C2ABE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171C2AFE; /* 0x171C2AC0: je 0x171c2afe */
L_171C2AC2:
    _flag_a = (uint32_t)(MEM32(esi + 0x20)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x20) = MEM32(esi + 0x20) + 1; /* 0x171C2AC2: inc dword ptr [esi + 0x20] */
    _flag_k = FK_INC;
    eax = MEM32(esi + 0x18); /* 0x171C2AC5: mov eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171C2AC8: inc eax */
    _flag_k = FK_INC;
    edi = POP32_VAL(esp); /* 0x171C2AC9: pop edi */
    MEM32(esi + 0x14) = 1; /* 0x171C2ACA: mov dword ptr [esi + 0x14], 1 */
    MEM32(esi + 0x18) = eax; /* 0x171C2AD1: mov dword ptr [esi + 0x18], eax */
    esi = POP32_VAL(esp); /* 0x171C2AD4: pop esi */
    ebp = POP32_VAL(esp); /* 0x171C2AD5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171C2AD6: ret 4 */
L_171C2AD9:
    eax = MEM32(esi + 0x18); /* 0x171C2AD9: mov eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171C2ADC: inc eax */
    _flag_k = FK_INC;
    edi = POP32_VAL(esp); /* 0x171C2ADD: pop edi */
    MEM32(esi + 0x14) = 2; /* 0x171C2ADE: mov dword ptr [esi + 0x14], 2 */
    MEM32(esi + 0x18) = eax; /* 0x171C2AE5: mov dword ptr [esi + 0x18], eax */
    esi = POP32_VAL(esp); /* 0x171C2AE8: pop esi */
    ebp = POP32_VAL(esp); /* 0x171C2AE9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171C2AEA: ret 4 */
L_171C2AED:
    eax = MEM32(edi + 0xB8); /* 0x171C2AED: mov eax, dword ptr [edi + 0xb8] */
    /* test eax, eax */ /* 0x171C2AF3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x14) = 2; /* 0x171C2AF5: mov dword ptr [esi + 0x14], 2 */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C2B01; /* 0x171C2AFC: jne 0x171c2b01 */
L_171C2AFE:
    _flag_a = (uint32_t)(MEM32(esi + 0x20)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x20) = MEM32(esi + 0x20) + 1; /* 0x171C2AFE: inc dword ptr [esi + 0x20] */
    _flag_k = FK_INC;
L_171C2B01:
    eax = MEM32(esi + 0x18); /* 0x171C2B01: mov eax, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171C2B04: inc eax */
    _flag_k = FK_INC;
    edi = POP32_VAL(esp); /* 0x171C2B05: pop edi */
    MEM32(esi + 0x18) = eax; /* 0x171C2B06: mov dword ptr [esi + 0x18], eax */
    esi = POP32_VAL(esp); /* 0x171C2B09: pop esi */
    ebp = POP32_VAL(esp); /* 0x171C2B0A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171C2B0B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171C2B20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C2B20u);

L_171C2B20:
    edi = edi; /* 0x171C2B20: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C2B22: push ebp */
    ebp = esp; /* 0x171C2B23: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171C2B25: push ebx */
    PUSH32(esp, esi); /* 0x171C2B26: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171C2B27: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x4); /* 0x171C2B2A: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, edi); /* 0x171C2B2D: push edi */
    PUSH32(esp, 0x24u); /* 0x171C2B2E: push 0x24 */
    PUSH32(esp, 1); /* 0x171C2B30: push 1 */
    PUSH32(esp, esi); /* 0x171C2B32: push esi */
    RECOMP_ICALL(MEM32(eax)); /* 0x171C2B33: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x171C2B35: mov edi, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171C2B37: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x154) = edi; /* 0x171C2B39: mov dword ptr [esi + 0x154], edi */
    MEM32(edi) = 0x171C28C0u; /* 0x171C2B3F: mov dword ptr [edi], 0x171c28c0 */
    MEM32(edi + 0x4) = 0x171C2A50u; /* 0x171C2B45: mov dword ptr [edi + 4], 0x171c2a50 */
    MEM32(edi + 0x8) = 0x171C2A90u; /* 0x171C2B4C: mov dword ptr [edi + 8], 0x171c2a90 */
    MEM32(edi + 0x10) = ebx; /* 0x171C2B53: mov dword ptr [edi + 0x10], ebx */
    RECOMP_CALL(sub_171C2130); /* 0x171C2B56: call 0x171c2130 */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0xAC), ebx */ /* 0x171C2B5B: cmp dword ptr [esi + 0xac], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0xAC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C2B6A; /* 0x171C2B61: je 0x171c2b6a */
L_171C2B63:
    RECOMP_CALL(sub_171C22E0); /* 0x171C2B63: call 0x171c22e0 */
    RECOMP_FLAGS_IN();
    goto L_171C2B7A; /* 0x171C2B68: jmp 0x171c2b7a */
L_171C2B6A:
    MEM32(esi + 0xEC) = ebx; /* 0x171C2B6A: mov dword ptr [esi + 0xec], ebx */
    MEM32(esi + 0xA8) = 1; /* 0x171C2B70: mov dword ptr [esi + 0xa8], 1 */
L_171C2B7A:
    /* cmp MEM32(esi + 0xEC), ebx */ /* 0x171C2B7A: cmp dword ptr [esi + 0xec], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0xEC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C2B8C; /* 0x171C2B80: je 0x171c2b8c */
L_171C2B82:
    MEM32(esi + 0xB8) = 1; /* 0x171C2B82: mov dword ptr [esi + 0xb8], 1 */
L_171C2B8C:
    /* cmp MEM32(ebp + 0xC), ebx */ /* 0x171C2B8C: cmp dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C2BA4; /* 0x171C2B8F: je 0x171c2ba4 */
L_171C2B91:
    edx = MEM32(esi + 0xB8); /* 0x171C2B91: mov edx, dword ptr [esi + 0xb8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171C2B97: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp edx, ebx */ /* 0x171C2B99: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x171C2B9B: sete cl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x171C2B9E: inc ecx */
    _flag_k = FK_INC;
    MEM32(edi + 0x14) = ecx; /* 0x171C2B9F: mov dword ptr [edi + 0x14], ecx */
    goto L_171C2BA7; /* 0x171C2BA2: jmp 0x171c2ba7 */
L_171C2BA4:
    MEM32(edi + 0x14) = ebx; /* 0x171C2BA4: mov dword ptr [edi + 0x14], ebx */
L_171C2BA7:
    /* cmp MEM32(esi + 0xB8), ebx */ /* 0x171C2BA7: cmp dword ptr [esi + 0xb8], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0xB8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(edi + 0x20) = ebx; /* 0x171C2BAD: mov dword ptr [edi + 0x20], ebx */
    MEM32(edi + 0x18) = ebx; /* 0x171C2BB0: mov dword ptr [edi + 0x18], ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C2BC7; /* 0x171C2BB3: je 0x171c2bc7 */
L_171C2BB5:
    edx = MEM32(esi + 0xA8); /* 0x171C2BB5: mov edx, dword ptr [esi + 0xa8] */
    if (1u) _cf = (((edx) >> 31) & 1u); /* 0x171C2BBB: shl edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack((edx << 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 1u; /* 0x171C2BBB: shl edx, 1 */
    MEM32(edi + 0x1C) = edx; /* 0x171C2BBD: mov dword ptr [edi + 0x1c], edx */
    edi = POP32_VAL(esp); /* 0x171C2BC0: pop edi */
    esi = POP32_VAL(esp); /* 0x171C2BC1: pop esi */
    ebx = POP32_VAL(esp); /* 0x171C2BC2: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171C2BC3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171C2BC4: ret 8 */
L_171C2BC7:
    eax = MEM32(esi + 0xA8); /* 0x171C2BC7: mov eax, dword ptr [esi + 0xa8] */
    MEM32(edi + 0x1C) = eax; /* 0x171C2BCD: mov dword ptr [edi + 0x1c], eax */
    edi = POP32_VAL(esp); /* 0x171C2BD0: pop edi */
    esi = POP32_VAL(esp); /* 0x171C2BD1: pop esi */
    ebx = POP32_VAL(esp); /* 0x171C2BD2: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171C2BD3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171C2BD4: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171C2BE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C2BE0u);

L_171C2BE0:
    edi = edi; /* 0x171C2BE0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C2BE2: push ebp */
    ebp = esp; /* 0x171C2BE3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x11Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x11Cu; /* 0x171C2BE5: sub esp, 0x11c */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x171C2BEB: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0xC); /* 0x171C2BEE: mov edx, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x10); /* 0x171C2BF1: mov ecx, dword ptr [ebp + 0x10] */
    edx = MEM32(edx + 0x50); /* 0x171C2BF4: mov edx, dword ptr [edx + 0x50] */
    PUSH32(esp, ebx); /* 0x171C2BF7: push ebx */
    ebx = MEM32(eax + 0x148); /* 0x171C2BF8: mov ebx, dword ptr [eax + 0x148] */
    PUSH32(esp, esi); /* 0x171C2BFE: push esi */
    PUSH32(esp, edi); /* 0x171C2BFF: push edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x80u; /* 0x171C2C00: add ebx, 0x80 */
    _flag_k = FK_ADD;
    eax = ebp + (-0x11C); /* 0x171C2C06: lea eax, [ebp - 0x11c] */
    MEM32(ebp + (-0x10)) = 8; /* 0x171C2C0C: mov dword ptr [ebp - 0x10], 8 */
L_171C2C13:
    SET_LO16(esi, MEM16(ecx + 0x10)); /* 0x171C2C13: mov si, word ptr [ecx + 0x10] */
    /* test LO16(esi), LO16(esi) */ /* 0x171C2C17: test si, si */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C2C73; /* 0x171C2C1A: jne 0x171c2c73 */
L_171C2C1C:
    /* cmp MEM16(ecx + 0x20), LO16(esi) */ /* 0x171C2C1C: cmp word ptr [ecx + 0x20], si */
    _flag_a = (uint32_t)(MEM16(ecx + 0x20)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C2C73; /* 0x171C2C20: jne 0x171c2c73 */
L_171C2C22:
    /* cmp MEM16(ecx + 0x30), LO16(esi) */ /* 0x171C2C22: cmp word ptr [ecx + 0x30], si */
    _flag_a = (uint32_t)(MEM16(ecx + 0x30)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C2C73; /* 0x171C2C26: jne 0x171c2c73 */
L_171C2C28:
    /* cmp MEM16(ecx + 0x40), LO16(esi) */ /* 0x171C2C28: cmp word ptr [ecx + 0x40], si */
    _flag_a = (uint32_t)(MEM16(ecx + 0x40)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C2C73; /* 0x171C2C2C: jne 0x171c2c73 */
L_171C2C2E:
    /* cmp MEM16(ecx + 0x50), LO16(esi) */ /* 0x171C2C2E: cmp word ptr [ecx + 0x50], si */
    _flag_a = (uint32_t)(MEM16(ecx + 0x50)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C2C73; /* 0x171C2C32: jne 0x171c2c73 */
L_171C2C34:
    /* cmp MEM16(ecx + 0x60), LO16(esi) */ /* 0x171C2C34: cmp word ptr [ecx + 0x60], si */
    _flag_a = (uint32_t)(MEM16(ecx + 0x60)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C2C73; /* 0x171C2C38: jne 0x171c2c73 */
L_171C2C3A:
    /* cmp MEM16(ecx + 0x70), LO16(esi) */ /* 0x171C2C3A: cmp word ptr [ecx + 0x70], si */
    _flag_a = (uint32_t)(MEM16(ecx + 0x70)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C2C73; /* 0x171C2C3E: jne 0x171c2c73 */
L_171C2C40:
    esi = (int32_t)(int16_t)MEM16(ecx); /* 0x171C2C40: movsx esi, word ptr [ecx] */
    MEM32(ebp + 0x8) = esi; /* 0x171C2C43: mov dword ptr [ebp + 8], esi */
    fp_push((double)(int32_t)MEM32(ebp + 0x8)); /* 0x171C2C46: fild dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x171C2C49: fmul dword ptr [edx] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax) = _v; } /* 0x171C2C4B: fst dword ptr [eax] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x20) = _v; } /* 0x171C2C4D: fst dword ptr [eax + 0x20] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x40) = _v; } /* 0x171C2C50: fst dword ptr [eax + 0x40] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x60) = _v; } /* 0x171C2C53: fst dword ptr [eax + 0x60] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0x80) = _v; } /* 0x171C2C56: fst dword ptr [eax + 0x80] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0xA0) = _v; } /* 0x171C2C5C: fst dword ptr [eax + 0xa0] */
    { float _v = (float)_st[0]; *(float*)ADDR(eax + 0xC0) = _v; } /* 0x171C2C62: fst dword ptr [eax + 0xc0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xE0) = _v; } /* 0x171C2C68: fstp dword ptr [eax + 0xe0] */
    goto L_171C2DE1; /* 0x171C2C6E: jmp 0x171c2de1 */
L_171C2C73:
    edi = (int32_t)(int16_t)MEM16(ecx); /* 0x171C2C73: movsx edi, word ptr [ecx] */
    MEM32(ebp + 0x8) = edi; /* 0x171C2C76: mov dword ptr [ebp + 8], edi */
    edi = (int32_t)(int16_t)MEM16(ecx + 0x20); /* 0x171C2C79: movsx edi, word ptr [ecx + 0x20] */
    fp_push((double)(int32_t)MEM32(ebp + 0x8)); /* 0x171C2C7D: fild dword ptr [ebp + 8] */
    MEM32(ebp + 0x8) = edi; /* 0x171C2C80: mov dword ptr [ebp + 8], edi */
    edi = (int32_t)(int16_t)MEM16(ecx + 0x40); /* 0x171C2C83: movsx edi, word ptr [ecx + 0x40] */
    esi = (int32_t)(int16_t)LO16(esi); /* 0x171C2C87: movsx esi, si */
    _st[0] *= (double)*(float*)ADDR(edx); /* 0x171C2C8A: fmul dword ptr [edx] */
    fp_push((double)(int32_t)MEM32(ebp + 0x8)); /* 0x171C2C8C: fild dword ptr [ebp + 8] */
    MEM32(ebp + 0x8) = edi; /* 0x171C2C8F: mov dword ptr [ebp + 8], edi */
    edi = (int32_t)(int16_t)MEM16(ecx + 0x60); /* 0x171C2C92: movsx edi, word ptr [ecx + 0x60] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x40); /* 0x171C2C96: fmul dword ptr [edx + 0x40] */
    fp_push((double)(int32_t)MEM32(ebp + 0x8)); /* 0x171C2C99: fild dword ptr [ebp + 8] */
    MEM32(ebp + 0x8) = edi; /* 0x171C2C9C: mov dword ptr [ebp + 8], edi */
    _st[0] *= (double)*(float*)ADDR(edx + 0x80); /* 0x171C2C9F: fmul dword ptr [edx + 0x80] */
    fp_push((double)(int32_t)MEM32(ebp + 0x8)); /* 0x171C2CA5: fild dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(edx + 0xC0); /* 0x171C2CA8: fmul dword ptr [edx + 0xc0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x171C2CAE: fstp dword ptr [ebp + 0x10] */
    fp_push(_st[0]); /* 0x171C2CB1: fld st(0) */
    _st[0] += _st[3]; /* 0x171C2CB3: fadd st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x171C2CB5: fstp dword ptr [ebp + 0xc] */
    fp_xch(2); /* 0x171C2CB8: fxch st(2) */
    _st[0] -= _st[2]; /* 0x171C2CBA: fsub st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x171C2CBC: fstp dword ptr [ebp - 8] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x171C2CBF: fstp st(1) */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x171C2CC1: fld dword ptr [ebp + 0x10] */
    _st[0] += _st[1]; /* 0x171C2CC4: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x171C2CC6: fstp dword ptr [ebp + 8] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x10); /* 0x171C2CC9: fsub dword ptr [ebp + 0x10] */
    _st[0] *= (double)*(float*)ADDR(0x17025BC4); /* 0x171C2CCC: fmul dword ptr [0x17025bc4] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x8); /* 0x171C2CD2: fsub dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171C2CD5: fld dword ptr [ebp + 8] */
    _st[0] += (double)*(float*)ADDR(ebp + 0xC); /* 0x171C2CD8: fadd dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x171C2CDB: fld dword ptr [ebp + 0xc] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x8); /* 0x171C2CDE: fsub dword ptr [ebp + 8] */
    MEM32(ebp + 0x8) = esi; /* 0x171C2CE1: mov dword ptr [ebp + 8], esi */
    esi = (int32_t)(int16_t)MEM16(ecx + 0x30); /* 0x171C2CE4: movsx esi, word ptr [ecx + 0x30] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x171C2CE8: fstp dword ptr [ebp + 0x10] */
    fp_push(_st[1]); /* 0x171C2CEB: fld st(1) */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x8)); /* 0x171C2CED: fadd dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x171C2CF0: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x171C2CF3: fld dword ptr [ebp - 8] */
    _st[0] -= _st[2]; /* 0x171C2CF6: fsub st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x171C2CF8: fstp dword ptr [ebp - 0x1c] */
    fp_push((double)(int32_t)MEM32(ebp + 0x8)); /* 0x171C2CFB: fild dword ptr [ebp + 8] */
    MEM32(ebp + 0x8) = esi; /* 0x171C2CFE: mov dword ptr [ebp + 8], esi */
    esi = (int32_t)(int16_t)MEM16(ecx + 0x50); /* 0x171C2D01: movsx esi, word ptr [ecx + 0x50] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x20); /* 0x171C2D05: fmul dword ptr [edx + 0x20] */
    fp_push((double)(int32_t)MEM32(ebp + 0x8)); /* 0x171C2D08: fild dword ptr [ebp + 8] */
    MEM32(ebp + 0x8) = esi; /* 0x171C2D0B: mov dword ptr [ebp + 8], esi */
    esi = (int32_t)(int16_t)MEM16(ecx + 0x70); /* 0x171C2D0E: movsx esi, word ptr [ecx + 0x70] */
    _st[0] *= (double)*(float*)ADDR(edx + 0x60); /* 0x171C2D12: fmul dword ptr [edx + 0x60] */
    fp_push((double)(int32_t)MEM32(ebp + 0x8)); /* 0x171C2D15: fild dword ptr [ebp + 8] */
    MEM32(ebp + 0x8) = esi; /* 0x171C2D18: mov dword ptr [ebp + 8], esi */
    _st[0] *= (double)*(float*)ADDR(edx + 0xA0); /* 0x171C2D1B: fmul dword ptr [edx + 0xa0] */
    fp_push((double)(int32_t)MEM32(ebp + 0x8)); /* 0x171C2D21: fild dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(edx + 0xE0); /* 0x171C2D24: fmul dword ptr [edx + 0xe0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x171C2D2A: fstp dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x171C2D2D: fld st(0) */
    _st[0] += _st[2]; /* 0x171C2D2F: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x171C2D31: fstp dword ptr [ebp - 0x18] */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x171C2D34: fsubrp st(1) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171C2D36: fld dword ptr [ebp + 8] */
    _st[0] += _st[2]; /* 0x171C2D39: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x171C2D3B: fstp dword ptr [ebp + 0xc] */
    fp_xch(1); /* 0x171C2D3E: fxch st(1) */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x8); /* 0x171C2D40: fsub dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x171C2D43: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x171C2D46: fld dword ptr [ebp + 0xc] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x18)); /* 0x171C2D49: fadd dword ptr [ebp - 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x171C2D4C: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x171C2D4F: fld dword ptr [ebp - 0xc] */
    _st[0] += _st[1]; /* 0x171C2D52: fadd st(1) */
    _st[0] *= (double)*(float*)ADDR(0x17025BC0); /* 0x171C2D54: fmul dword ptr [0x17025bc0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x171C2D5A: fstp dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(0x17025BBC); /* 0x171C2D5D: fmul dword ptr [0x17025bbc] */
    _st[0] = (double)*(float*)ADDR(ebp + (-0x4)) - _st[0]; /* 0x171C2D63: fsubr dword ptr [ebp - 4] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x8); /* 0x171C2D66: fsub dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x171C2D69: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x171C2D6C: fld dword ptr [ebp + 0xc] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x18)); /* 0x171C2D6F: fsub dword ptr [ebp - 0x18] */
    _st[0] *= (double)*(float*)ADDR(0x17025BC4); /* 0x171C2D72: fmul dword ptr [0x17025bc4] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x171C2D78: fsub dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x171C2D7B: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x171C2D7E: fld dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(0x17025BB8); /* 0x171C2D81: fmul dword ptr [0x17025bb8] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171C2D87: fsub dword ptr [ebp - 4] */
    _st[0] += (double)*(float*)ADDR(ebp + 0xC); /* 0x171C2D8A: fadd dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x171C2D8D: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171C2D90: fld dword ptr [ebp + 8] */
    _st[0] += _st[1]; /* 0x171C2D93: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x171C2D95: fstp dword ptr [eax] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x8); /* 0x171C2D97: fsub dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xE0) = _v; } /* 0x171C2D9A: fstp dword ptr [eax + 0xe0] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171C2DA0: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x171C2DA2: fld dword ptr [ebp - 8] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x14)); /* 0x171C2DA5: fadd dword ptr [ebp - 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x20) = _v; } /* 0x171C2DA8: fstp dword ptr [eax + 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x171C2DAB: fld dword ptr [ebp - 0x14] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x8)); /* 0x171C2DAE: fsub dword ptr [ebp - 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC0) = _v; } /* 0x171C2DB1: fstp dword ptr [eax + 0xc0] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x171C2DB7: fld dword ptr [ebp + 0xc] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x1C)); /* 0x171C2DBA: fadd dword ptr [ebp - 0x1c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x40) = _v; } /* 0x171C2DBD: fstp dword ptr [eax + 0x40] */
    fp_push(*(float*)&MEM32(ebp + (-0x1C))); /* 0x171C2DC0: fld dword ptr [ebp - 0x1c] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0xC); /* 0x171C2DC3: fsub dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xA0) = _v; } /* 0x171C2DC6: fstp dword ptr [eax + 0xa0] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x171C2DCC: fld dword ptr [ebp - 4] */
    _st[0] += (double)*(float*)ADDR(ebp + 0x10); /* 0x171C2DCF: fadd dword ptr [ebp + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x80) = _v; } /* 0x171C2DD2: fstp dword ptr [eax + 0x80] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x171C2DD8: fld dword ptr [ebp + 0x10] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171C2DDB: fsub dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x60) = _v; } /* 0x171C2DDE: fstp dword ptr [eax + 0x60] */
L_171C2DE1:
    esi = MEM32(ebp + (-0x10)); /* 0x171C2DE1: mov esi, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x171C2DE4: add edx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x171C2DE7: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171C2DEA: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x171C2DED: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x10)) = esi; /* 0x171C2DEE: mov dword ptr [ebp - 0x10], esi */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171C2C13; /* 0x171C2DF1: jne 0x171c2c13 */
L_171C2DF7:
    MEM32(ebp + (-0x8)) = 0; /* 0x171C2DF7: mov dword ptr [ebp - 8], 0 */
    esi = ebp + (-0x114); /* 0x171C2DFE: lea esi, [ebp - 0x114] */
L_171C2E04:
    fp_push(*(float*)&MEM32(esi + 0x8)); /* 0x171C2E04: fld dword ptr [esi + 8] */
    eax = MEM32(ebp + 0x14); /* 0x171C2E07: mov eax, dword ptr [ebp + 0x14] */
    _st[0] += (double)*(float*)ADDR(esi + (-0x8)); /* 0x171C2E0A: fadd dword ptr [esi - 8] */
    ecx = MEM32(ebp + (-0x8)); /* 0x171C2E0D: mov ecx, dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(esi + (-0x8))); /* 0x171C2E10: fld dword ptr [esi - 8] */
    edi = MEM32(eax + ecx * 4); /* 0x171C2E13: mov edi, dword ptr [eax + ecx*4] */
    _st[0] -= (double)*(float*)ADDR(esi + 0x8); /* 0x171C2E16: fsub dword ptr [esi + 8] */
    eax = MEM32(ebp + 0x18); /* 0x171C2E19: mov eax, dword ptr [ebp + 0x18] */
    fp_push(*(float*)&MEM32(esi)); /* 0x171C2E1C: fld dword ptr [esi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x171C2E1E: add edi, eax */
    _flag_k = FK_ADD;
    _st[0] += (double)*(float*)ADDR(esi + 0x10); /* 0x171C2E20: fadd dword ptr [esi + 0x10] */
    fp_push(*(float*)&MEM32(esi)); /* 0x171C2E23: fld dword ptr [esi] */
    _st[0] -= (double)*(float*)ADDR(esi + 0x10); /* 0x171C2E25: fsub dword ptr [esi + 0x10] */
    _st[0] *= (double)*(float*)ADDR(0x17025BC4); /* 0x171C2E28: fmul dword ptr [0x17025bc4] */
    _st[0] -= _st[1]; /* 0x171C2E2E: fsub st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x171C2E30: fstp dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x171C2E33: fld st(0) */
    _st[0] += _st[3]; /* 0x171C2E35: fadd st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x171C2E37: fstp dword ptr [ebp - 0x10] */
    fp_xch(2); /* 0x171C2E3A: fxch st(2) */
    _st[0] -= _st[2]; /* 0x171C2E3C: fsub st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x10) = _v; } /* 0x171C2E3E: fstp dword ptr [ebp + 0x10] */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x171C2E41: fstp st(1) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171C2E43: fld dword ptr [ebp + 8] */
    _st[0] += _st[1]; /* 0x171C2E46: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x171C2E48: fstp dword ptr [ebp - 0x14] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x8); /* 0x171C2E4B: fsub dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(esi + 0xC)); /* 0x171C2E4E: fld dword ptr [esi + 0xc] */
    _st[0] += (double)*(float*)ADDR(esi + 0x4); /* 0x171C2E51: fadd dword ptr [esi + 4] */
    fp_push(*(float*)&MEM32(esi + 0xC)); /* 0x171C2E54: fld dword ptr [esi + 0xc] */
    _st[0] -= (double)*(float*)ADDR(esi + 0x4); /* 0x171C2E57: fsub dword ptr [esi + 4] */
    fp_push(*(float*)&MEM32(esi + 0x14)); /* 0x171C2E5A: fld dword ptr [esi + 0x14] */
    _st[0] += (double)*(float*)ADDR(esi + (-0x4)); /* 0x171C2E5D: fadd dword ptr [esi - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x171C2E60: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(esi + (-0x4))); /* 0x171C2E63: fld dword ptr [esi - 4] */
    _st[0] -= (double)*(float*)ADDR(esi + 0x14); /* 0x171C2E66: fsub dword ptr [esi + 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x171C2E69: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x171C2E6C: fld dword ptr [ebp + 0xc] */
    _st[0] += _st[2]; /* 0x171C2E6F: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x171C2E71: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x171C2E74: fld dword ptr [ebp - 0xc] */
    _st[0] += _st[1]; /* 0x171C2E77: fadd st(1) */
    _st[0] *= (double)*(float*)ADDR(0x17025BC0); /* 0x171C2E79: fmul dword ptr [0x17025bc0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x171C2E7F: fstp dword ptr [ebp - 4] */
    _st[0] *= (double)*(float*)ADDR(0x17025BBC); /* 0x171C2E82: fmul dword ptr [0x17025bbc] */
    _st[0] = (double)*(float*)ADDR(ebp + (-0x4)) - _st[0]; /* 0x171C2E88: fsubr dword ptr [ebp - 4] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x8); /* 0x171C2E8B: fsub dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x171C2E8E: fld dword ptr [ebp + 0xc] */
    _st[0] -= _st[2]; /* 0x171C2E91: fsub st(2) */
    _st[0] *= (double)*(float*)ADDR(0x17025BC4); /* 0x171C2E93: fmul dword ptr [0x17025bc4] */
    _st[0] -= _st[1]; /* 0x171C2E99: fsub st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0xC) = _v; } /* 0x171C2E9B: fstp dword ptr [ebp + 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x171C2E9E: fld dword ptr [ebp - 0xc] */
    _st[0] *= (double)*(float*)ADDR(0x17025BB8); /* 0x171C2EA1: fmul dword ptr [0x17025bb8] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171C2EA7: fsub dword ptr [ebp - 4] */
    _st[0] += (double)*(float*)ADDR(ebp + 0xC); /* 0x171C2EAA: fadd dword ptr [ebp + 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x171C2EAD: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171C2EB0: fld dword ptr [ebp + 8] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x10)); /* 0x171C2EB3: fadd dword ptr [ebp - 0x10] */
    RECOMP_CALL(sub_1721B050); /* 0x171C2EB6: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x10))); /* 0x171C2EBB: fld dword ptr [ebp - 0x10] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x8); /* 0x171C2EBE: fsub dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171C2EC1: add eax, 4 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x171C2EC4: sar eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 3u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFu);
    eax = eax & 0x3FFu; /* 0x171C2EC7: and eax, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(edx, MEM8(eax + ebx)); /* 0x171C2ECC: mov dl, byte ptr [eax + ebx] */
    MEM8(edi) = (uint8_t)(LO8(edx)); /* 0x171C2ECF: mov byte ptr [edi], dl */
    RECOMP_CALL(sub_1721B050); /* 0x171C2ED1: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x171C2ED6: fld dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171C2ED9: add eax, 4 */
    _flag_k = FK_ADD;
    _st[0] += _st[1]; /* 0x171C2EDC: fadd st(1) */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x171C2EDE: sar eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 3u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFu);
    eax = eax & 0x3FFu; /* 0x171C2EE1: and eax, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, MEM8(eax + ebx)); /* 0x171C2EE6: mov al, byte ptr [eax + ebx] */
    MEM8(edi + 0x7) = (uint8_t)(LO8(eax)); /* 0x171C2EE9: mov byte ptr [edi + 7], al */
    RECOMP_CALL(sub_1721B050); /* 0x171C2EEC: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x171C2EF1: fld dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171C2EF4: add eax, 4 */
    _flag_k = FK_ADD;
    _st[0] -= _st[1]; /* 0x171C2EF7: fsub st(1) */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x171C2EF9: sar eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 3u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFu);
    eax = eax & 0x3FFu; /* 0x171C2EFC: and eax, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ecx, MEM8(eax + ebx)); /* 0x171C2F01: mov cl, byte ptr [eax + ebx] */
    MEM8(edi + 0x1) = (uint8_t)(LO8(ecx)); /* 0x171C2F04: mov byte ptr [edi + 1], cl */
    RECOMP_CALL(sub_1721B050); /* 0x171C2F07: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171C2F0C: fstp st(0) */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171C2F0E: add eax, 4 */
    _flag_k = FK_ADD;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171C2F11: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + 0xC)); /* 0x171C2F13: fld dword ptr [ebp + 0xc] */
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x171C2F16: sar eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 3u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFu);
    eax = eax & 0x3FFu; /* 0x171C2F19: and eax, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] += _st[1]; /* 0x171C2F1E: fadd st(1) */
    SET_LO8(edx, MEM8(eax + ebx)); /* 0x171C2F20: mov dl, byte ptr [eax + ebx] */
    MEM8(edi + 0x6) = (uint8_t)(LO8(edx)); /* 0x171C2F23: mov byte ptr [edi + 6], dl */
    RECOMP_CALL(sub_1721B050); /* 0x171C2F26: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    _st[0] -= (double)*(float*)ADDR(ebp + 0xC); /* 0x171C2F2B: fsub dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171C2F2E: add eax, 4 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x171C2F31: sar eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 3u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFu);
    eax = eax & 0x3FFu; /* 0x171C2F34: and eax, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, MEM8(eax + ebx)); /* 0x171C2F39: mov al, byte ptr [eax + ebx] */
    MEM8(edi + 0x2) = (uint8_t)(LO8(eax)); /* 0x171C2F3C: mov byte ptr [edi + 2], al */
    RECOMP_CALL(sub_1721B050); /* 0x171C2F3F: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x171C2F44: fld dword ptr [ebp - 4] */
    _st[0] += (double)*(float*)ADDR(ebp + 0x10); /* 0x171C2F47: fadd dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171C2F4A: add eax, 4 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x171C2F4D: sar eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 3u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFu);
    eax = eax & 0x3FFu; /* 0x171C2F50: and eax, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ecx, MEM8(eax + ebx)); /* 0x171C2F55: mov cl, byte ptr [eax + ebx] */
    MEM8(edi + 0x5) = (uint8_t)(LO8(ecx)); /* 0x171C2F58: mov byte ptr [edi + 5], cl */
    RECOMP_CALL(sub_1721B050); /* 0x171C2F5B: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x171C2F60: fld dword ptr [ebp + 0x10] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171C2F63: fsub dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171C2F66: add eax, 4 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x171C2F69: sar eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 3u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFu);
    eax = eax & 0x3FFu; /* 0x171C2F6C: and eax, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(edx, MEM8(eax + ebx)); /* 0x171C2F71: mov dl, byte ptr [eax + ebx] */
    MEM8(edi + 0x4) = (uint8_t)(LO8(edx)); /* 0x171C2F74: mov byte ptr [edi + 4], dl */
    RECOMP_CALL(sub_1721B050); /* 0x171C2F77: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171C2F7C: add eax, 4 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x171C2F7F: sar eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 3u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFu);
    eax = eax & 0x3FFu; /* 0x171C2F82: and eax, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, MEM8(eax + ebx)); /* 0x171C2F87: mov al, byte ptr [eax + ebx] */
    MEM8(edi + 0x3) = (uint8_t)(LO8(eax)); /* 0x171C2F8A: mov byte ptr [edi + 3], al */
    eax = MEM32(ebp + (-0x8)); /* 0x171C2F8D: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x20u; /* 0x171C2F90: add esi, 0x20 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171C2F93: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, 8 */ /* 0x171C2F94: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = eax; /* 0x171C2F97: mov dword ptr [ebp - 8], eax */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171C2E04; /* 0x171C2F9A: jl 0x171c2e04 */
L_171C2FA0:
    edi = POP32_VAL(esp); /* 0x171C2FA0: pop edi */
    esi = POP32_VAL(esp); /* 0x171C2FA1: pop esi */
    ebx = POP32_VAL(esp); /* 0x171C2FA2: pop ebx */
    esp = ebp; /* 0x171C2FA3: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171C2FA5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x171C2FA6: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_171C2FB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C2FB0u);

L_171C2FB0:
    edi = edi; /* 0x171C2FB0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C2FB2: push ebp */
    ebp = esp; /* 0x171C2FB3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x124u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x124u; /* 0x171C2FB5: sub esp, 0x124 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x171C2FBB: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(ebp + 0x10); /* 0x171C2FBE: mov edx, dword ptr [ebp + 0x10] */
    ecx = MEM32(ebp + 0xC); /* 0x171C2FC1: mov ecx, dword ptr [ebp + 0xc] */
    ecx = MEM32(ecx + 0x50); /* 0x171C2FC4: mov ecx, dword ptr [ecx + 0x50] */
    PUSH32(esp, ebx); /* 0x171C2FC7: push ebx */
    PUSH32(esp, esi); /* 0x171C2FC8: push esi */
    PUSH32(esp, edi); /* 0x171C2FC9: push edi */
    edi = MEM32(eax + 0x148); /* 0x171C2FCA: mov edi, dword ptr [eax + 0x148] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x80u; /* 0x171C2FD0: add edi, 0x80 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = edi; /* 0x171C2FD6: mov dword ptr [ebp - 0x1c], edi */
    MEM32(ebp + (-0xC)) = edx; /* 0x171C2FD9: mov dword ptr [ebp - 0xc], edx */
    eax = ebp + (-0x124); /* 0x171C2FDC: lea eax, [ebp - 0x124] */
    MEM32(ebp + (-0x10)) = 8; /* 0x171C2FE2: mov dword ptr [ebp - 0x10], 8 */
    esp = esp; /* 0x171C2FE9: lea esp, [esp] */
L_171C2FF0:
    SET_LO16(esi, MEM16(edx + 0x70)); /* 0x171C2FF0: mov si, word ptr [edx + 0x70] */
    MEM16(ebp + (-0x4)) = (uint16_t)(LO16(esi)); /* 0x171C2FF4: mov word ptr [ebp - 4], si */
    SET_LO16(esi, MEM16(edx + 0x60)); /* 0x171C2FF8: mov si, word ptr [edx + 0x60] */
    MEM16(ebp + 0x10) = (uint16_t)(LO16(esi)); /* 0x171C2FFC: mov word ptr [ebp + 0x10], si */
    SET_LO16(esi, MEM16(edx + 0x50)); /* 0x171C3000: mov si, word ptr [edx + 0x50] */
    MEM16(ebp + (-0x8)) = (uint16_t)(LO16(esi)); /* 0x171C3004: mov word ptr [ebp - 8], si */
    SET_LO16(esi, MEM16(edx + 0x40)); /* 0x171C3008: mov si, word ptr [edx + 0x40] */
    MEM16(ebp + 0x8) = (uint16_t)(LO16(esi)); /* 0x171C300C: mov word ptr [ebp + 8], si */
    SET_LO16(esi, MEM16(edx + 0x30)); /* 0x171C3010: mov si, word ptr [edx + 0x30] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171C3014: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(ebx, MEM16(edx + 0x10)); /* 0x171C3016: mov bx, word ptr [edx + 0x10] */
    MEM16(ebp + 0xC) = (uint16_t)(LO16(esi)); /* 0x171C301A: mov word ptr [ebp + 0xc], si */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171C301E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(esi, MEM16(edx + 0x20)); /* 0x171C3020: mov si, word ptr [edx + 0x20] */
    MEM32(ebp + (-0x24)) = ebx; /* 0x171C3024: mov dword ptr [ebp - 0x24], ebx */
    _flag_a = (uint32_t)((ebx | esi)); _flag_b = (uint32_t)((ebx | esi));
    ebx = ebx | esi; /* 0x171C3027: or ebx, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = esi; /* 0x171C3029: mov dword ptr [ebp - 0x14], esi */
    _flag_a = (uint32_t)((ebx | MEM32(ebp + 0xC))); _flag_b = (uint32_t)((ebx | MEM32(ebp + 0xC)));
    ebx = ebx | MEM32(ebp + 0xC); /* 0x171C302C: or ebx, dword ptr [ebp + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ebx | MEM32(ebp + 0x8))); _flag_b = (uint32_t)((ebx | MEM32(ebp + 0x8)));
    ebx = ebx | MEM32(ebp + 0x8); /* 0x171C302F: or ebx, dword ptr [ebp + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ebx | MEM32(ebp + (-0x8)))); _flag_b = (uint32_t)((ebx | MEM32(ebp + (-0x8))));
    ebx = ebx | MEM32(ebp + (-0x8)); /* 0x171C3032: or ebx, dword ptr [ebp - 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ebx | MEM32(ebp + 0x10))); _flag_b = (uint32_t)((ebx | MEM32(ebp + 0x10)));
    ebx = ebx | MEM32(ebp + 0x10); /* 0x171C3035: or ebx, dword ptr [ebp + 0x10] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((ebx | MEM32(ebp + (-0x4)))); _flag_b = (uint32_t)((ebx | MEM32(ebp + (-0x4))));
    ebx = ebx | MEM32(ebp + (-0x4)); /* 0x171C3038: or ebx, dword ptr [ebp - 4] */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO16(ebx), LO16(ebx) */ /* 0x171C303B: test bx, bx */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C3071; /* 0x171C303E: jne 0x171c3071 */
L_171C3040:
    esi = (int32_t)(int16_t)MEM16(edx); /* 0x171C3040: movsx esi, word ptr [edx] */
    ebx = (int32_t)(int16_t)MEM16(ecx); /* 0x171C3043: movsx ebx, word ptr [ecx] */
    esi = (uint32_t)((int32_t)esi * (int32_t)ebx); /* 0x171C3046: imul esi, ebx */
    MEM32(eax) = esi; /* 0x171C3049: mov dword ptr [eax], esi */
    MEM32(eax + 0x20) = esi; /* 0x171C304B: mov dword ptr [eax + 0x20], esi */
    MEM32(eax + 0x40) = esi; /* 0x171C304E: mov dword ptr [eax + 0x40], esi */
    MEM32(eax + 0x60) = esi; /* 0x171C3051: mov dword ptr [eax + 0x60], esi */
    MEM32(eax + 0x80) = esi; /* 0x171C3054: mov dword ptr [eax + 0x80], esi */
    MEM32(eax + 0xA0) = esi; /* 0x171C305A: mov dword ptr [eax + 0xa0], esi */
    MEM32(eax + 0xC0) = esi; /* 0x171C3060: mov dword ptr [eax + 0xc0], esi */
    MEM32(eax + 0xE0) = esi; /* 0x171C3066: mov dword ptr [eax + 0xe0], esi */
    goto L_171C31D1; /* 0x171C306C: jmp 0x171c31d1 */
L_171C3071:
    SET_LO16(edx, MEM16(edx)); /* 0x171C3071: mov dx, word ptr [edx] */
    SET_LO16(edx, (uint32_t)((int32_t)LO16(edx) * (int32_t)MEM16(ecx))); /* 0x171C3074: imul dx, word ptr [ecx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171C3078: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(edi, MEM16(ecx + 0x40)); /* 0x171C307A: mov di, word ptr [ecx + 0x40] */
    SET_LO16(edi, (uint32_t)((int32_t)LO16(edi) * (int32_t)MEM16(ebp + 0x8))); /* 0x171C307E: imul di, word ptr [ebp + 8] */
    SET_LO16(esi, MEM16(ecx + 0x20)); /* 0x171C3083: mov si, word ptr [ecx + 0x20] */
    SET_LO16(esi, (uint32_t)((int32_t)LO16(esi) * (int32_t)MEM16(ebp + (-0x14)))); /* 0x171C3087: imul si, word ptr [ebp - 0x14] */
    MEM32(ebp + 0x8) = edi; /* 0x171C308C: mov dword ptr [ebp + 8], edi */
    ebx = MEM32(ebp + 0x8); /* 0x171C308F: mov ebx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edx; /* 0x171C3092: add ebx, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171C3094: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(edi, MEM16(ecx + 0x60)); /* 0x171C3096: mov di, word ptr [ecx + 0x60] */
    SET_LO16(edi, (uint32_t)((int32_t)LO16(edi) * (int32_t)MEM16(ebp + 0x10))); /* 0x171C309A: imul di, word ptr [ebp + 0x10] */
    MEM32(ebp + 0x10) = ebx; /* 0x171C309F: mov dword ptr [ebp + 0x10], ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ebp + 0x8); /* 0x171C30A2: sub edx, dword ptr [ebp + 8] */
    _flag_k = FK_CMP;
    ebx = edx; /* 0x171C30A5: mov ebx, edx */
    edx = edi + esi; /* 0x171C30A7: lea edx, [edi + esi] */
    MEM32(ebp + 0x8) = edx; /* 0x171C30AA: mov dword ptr [ebp + 8], edx */
    edx = (int32_t)(int16_t)LO16(esi); /* 0x171C30AD: movsx edx, si */
    esi = MEM32(ebp + 0x10); /* 0x171C30B0: mov esi, dword ptr [ebp + 0x10] */
    edi = (int32_t)(int16_t)LO16(edi); /* 0x171C30B3: movsx edi, di */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - edi; /* 0x171C30B6: sub edx, edi */
    _flag_k = FK_CMP;
    edi = MEM32(ebp + 0x8); /* 0x171C30B8: mov edi, dword ptr [ebp + 8] */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x16Au); /* 0x171C30BB: imul edx, edx, 0x16a */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edi; /* 0x171C30C1: add esi, edi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x20)) = esi; /* 0x171C30C3: mov dword ptr [ebp - 0x20], esi */
    esi = MEM32(ebp + 0x10); /* 0x171C30C6: mov esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x171C30C9: sub esi, edi */
    _flag_k = FK_CMP;
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x171C30CB: sar edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 8u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - edi; /* 0x171C30CE: sub edx, edi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x14)) = esi; /* 0x171C30D0: mov dword ptr [ebp - 0x14], esi */
    esi = edx + ebx; /* 0x171C30D3: lea esi, [edx + ebx] */
    MEM32(ebp + (-0x18)) = esi; /* 0x171C30D6: mov dword ptr [ebp - 0x18], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171C30D9: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(esi, MEM16(ecx + 0x30)); /* 0x171C30DB: mov si, word ptr [ecx + 0x30] */
    SET_LO16(esi, (uint32_t)((int32_t)LO16(esi) * (int32_t)MEM16(ebp + 0xC))); /* 0x171C30DF: imul si, word ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edx; /* 0x171C30E4: sub ebx, edx */
    _flag_k = FK_CMP;
    SET_LO16(edx, MEM16(ecx + 0x10)); /* 0x171C30E6: mov dx, word ptr [ecx + 0x10] */
    SET_LO16(edx, (uint32_t)((int32_t)LO16(edx) * (int32_t)MEM16(ebp + (-0x24)))); /* 0x171C30EA: imul dx, word ptr [ebp - 0x24] */
    MEM32(ebp + 0xC) = esi; /* 0x171C30EF: mov dword ptr [ebp + 0xc], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171C30F2: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(esi, MEM16(ecx + 0x50)); /* 0x171C30F4: mov si, word ptr [ecx + 0x50] */
    SET_LO16(esi, (uint32_t)((int32_t)LO16(esi) * (int32_t)MEM16(ebp + (-0x8)))); /* 0x171C30F8: imul si, word ptr [ebp - 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171C30FD: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(edi, MEM16(ecx + 0x70)); /* 0x171C30FF: mov di, word ptr [ecx + 0x70] */
    SET_LO16(edi, (uint32_t)((int32_t)LO16(edi) * (int32_t)MEM16(ebp + (-0x4)))); /* 0x171C3103: imul di, word ptr [ebp - 4] */
    MEM32(ebp + 0x8) = ebx; /* 0x171C3108: mov dword ptr [ebp + 8], ebx */
    ebx = MEM32(ebp + 0xC); /* 0x171C310B: mov ebx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + esi; /* 0x171C310E: add ebx, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x10) = ebx; /* 0x171C3110: mov dword ptr [ebp + 0x10], ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebp + 0xC); /* 0x171C3113: sub esi, dword ptr [ebp + 0xc] */
    _flag_k = FK_CMP;
    ebx = esi; /* 0x171C3116: mov ebx, esi */
    esi = edi + edx; /* 0x171C3118: lea esi, [edi + edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - edi; /* 0x171C311B: sub edx, edi */
    _flag_k = FK_CMP;
    edi = MEM32(ebp + 0x10); /* 0x171C311D: mov edi, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x8)) = esi; /* 0x171C3120: mov dword ptr [ebp - 8], esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edi; /* 0x171C3123: add esi, edi */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = esi; /* 0x171C3125: mov dword ptr [ebp + 0xc], esi */
    esi = (int32_t)(int16_t)LO16(edx); /* 0x171C3128: movsx esi, dx */
    edx = (int32_t)(int16_t)LO16(ebx); /* 0x171C312B: movsx edx, bx */
    ebx = MEM32(ebp + 0xC); /* 0x171C312E: mov ebx, dword ptr [ebp + 0xc] */
    edi = edx + esi; /* 0x171C3131: lea edi, [edx + esi] */
    edx = (uint32_t)((int32_t)edx * (int32_t)0xFFFFFD63u); /* 0x171C3134: imul edx, edx, 0xfffffd63 */
    esi = (uint32_t)((int32_t)esi * (int32_t)0x115u); /* 0x171C313A: imul esi, esi, 0x115 */
    edi = (uint32_t)((int32_t)edi * (int32_t)0x1D9u); /* 0x171C3140: imul edi, edi, 0x1d9 */
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x171C3146: sar edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 8u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ebx; /* 0x171C3149: sub edx, ebx */
    _flag_k = FK_CMP;
    ebx = (int32_t)(int16_t)MEM16(ebp + 0x10); /* 0x171C314B: movsx ebx, word ptr [ebp + 0x10] */
    if (8u) _cf = (((edi) >> 7) & 1u); /* 0x171C314F: sar edi, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> 8u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x171C3152: add edx, edi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = edx; /* 0x171C3154: mov dword ptr [ebp - 4], edx */
    edx = (int32_t)(int16_t)MEM16(ebp + (-0x8)); /* 0x171C3157: movsx edx, word ptr [ebp - 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ebx; /* 0x171C315B: sub edx, ebx */
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + (-0x4)); /* 0x171C315D: mov ebx, dword ptr [ebp - 4] */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x16Au); /* 0x171C3160: imul edx, edx, 0x16a */
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x171C3166: sar edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 8u);
    if (8u) _cf = (((esi) >> 7) & 1u); /* 0x171C3169: sar esi, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 8u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ebx; /* 0x171C316C: sub edx, ebx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x171C316E: sub esi, edi */
    _flag_k = FK_CMP;
    edi = (int32_t)(int16_t)MEM16(ebp + (-0x20)); /* 0x171C3170: movsx edi, word ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x171C3174: add esi, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x10) = esi; /* 0x171C3176: mov dword ptr [ebp + 0x10], esi */
    esi = (int32_t)(int16_t)MEM16(ebp + 0xC); /* 0x171C3179: movsx esi, word ptr [ebp + 0xc] */
    ebx = edi + esi; /* 0x171C317D: lea ebx, [edi + esi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - esi; /* 0x171C3180: sub edi, esi */
    _flag_k = FK_CMP;
    esi = (int32_t)(int16_t)MEM16(ebp + (-0x4)); /* 0x171C3182: movsx esi, word ptr [ebp - 4] */
    MEM32(eax + 0xE0) = edi; /* 0x171C3186: mov dword ptr [eax + 0xe0], edi */
    edi = (int32_t)(int16_t)MEM16(ebp + (-0x18)); /* 0x171C318C: movsx edi, word ptr [ebp - 0x18] */
    MEM32(eax) = ebx; /* 0x171C3190: mov dword ptr [eax], ebx */
    ebx = esi + edi; /* 0x171C3192: lea ebx, [esi + edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - esi; /* 0x171C3195: sub edi, esi */
    _flag_k = FK_CMP;
    esi = (int32_t)(int16_t)LO16(edx); /* 0x171C3197: movsx esi, dx */
    edx = (int32_t)(int16_t)MEM16(ebp + 0x8); /* 0x171C319A: movsx edx, word ptr [ebp + 8] */
    MEM32(eax + 0xC0) = edi; /* 0x171C319E: mov dword ptr [eax + 0xc0], edi */
    edi = edx + esi; /* 0x171C31A4: lea edi, [edx + esi] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x171C31A7: sub edx, esi */
    _flag_k = FK_CMP;
    esi = (int32_t)(int16_t)MEM16(ebp + 0x10); /* 0x171C31A9: movsx esi, word ptr [ebp + 0x10] */
    MEM32(eax + 0xA0) = edx; /* 0x171C31AD: mov dword ptr [eax + 0xa0], edx */
    edx = (int32_t)(int16_t)MEM16(ebp + (-0x14)); /* 0x171C31B3: movsx edx, word ptr [ebp - 0x14] */
    MEM32(eax + 0x40) = edi; /* 0x171C31B7: mov dword ptr [eax + 0x40], edi */
    edi = esi + edx; /* 0x171C31BA: lea edi, [esi + edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x171C31BD: sub edx, esi */
    _flag_k = FK_CMP;
    MEM32(eax + 0x80) = edi; /* 0x171C31BF: mov dword ptr [eax + 0x80], edi */
    edi = MEM32(ebp + (-0x1C)); /* 0x171C31C5: mov edi, dword ptr [ebp - 0x1c] */
    MEM32(eax + 0x60) = edx; /* 0x171C31C8: mov dword ptr [eax + 0x60], edx */
    edx = MEM32(ebp + (-0xC)); /* 0x171C31CB: mov edx, dword ptr [ebp - 0xc] */
    MEM32(eax + 0x20) = ebx; /* 0x171C31CE: mov dword ptr [eax + 0x20], ebx */
L_171C31D1:
    esi = MEM32(ebp + (-0x10)); /* 0x171C31D1: mov esi, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x171C31D4: add edx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x171C31D7: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171C31DA: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x171C31DD: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0xC)) = edx; /* 0x171C31DE: mov dword ptr [ebp - 0xc], edx */
    MEM32(ebp + (-0x10)) = esi; /* 0x171C31E1: mov dword ptr [ebp - 0x10], esi */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171C2FF0; /* 0x171C31E4: jne 0x171c2ff0 */
L_171C31EA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171C31EA: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x124); /* 0x171C31EC: lea eax, [ebp - 0x124] */
    MEM32(ebp + (-0xC)) = esi; /* 0x171C31F2: mov dword ptr [ebp - 0xc], esi */
L_171C31F5:
    ecx = MEM32(ebp + 0x14); /* 0x171C31F5: mov ecx, dword ptr [ebp + 0x14] */
    edx = MEM32(ebp + 0x18); /* 0x171C31F8: mov edx, dword ptr [ebp + 0x18] */
    ecx = MEM32(ecx + esi * 4); /* 0x171C31FB: mov ecx, dword ptr [ecx + esi*4] */
    ebx = MEM32(eax + 0x1C); /* 0x171C31FE: mov ebx, dword ptr [eax + 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x171C3201: add ecx, edx */
    _flag_k = FK_ADD;
    edx = MEM32(eax + 0x18); /* 0x171C3203: mov edx, dword ptr [eax + 0x18] */
    _flag_a = (uint32_t)((edx | ebx)); _flag_b = (uint32_t)((edx | ebx));
    edx = edx | ebx; /* 0x171C3206: or edx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | MEM32(eax + 0x14))); _flag_b = (uint32_t)((edx | MEM32(eax + 0x14)));
    edx = edx | MEM32(eax + 0x14); /* 0x171C3208: or edx, dword ptr [eax + 0x14] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | MEM32(eax + 0x10))); _flag_b = (uint32_t)((edx | MEM32(eax + 0x10)));
    edx = edx | MEM32(eax + 0x10); /* 0x171C320B: or edx, dword ptr [eax + 0x10] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | MEM32(eax + 0xC))); _flag_b = (uint32_t)((edx | MEM32(eax + 0xC)));
    edx = edx | MEM32(eax + 0xC); /* 0x171C320E: or edx, dword ptr [eax + 0xc] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | MEM32(eax + 0x8))); _flag_b = (uint32_t)((edx | MEM32(eax + 0x8)));
    edx = edx | MEM32(eax + 0x8); /* 0x171C3211: or edx, dword ptr [eax + 8] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((edx | MEM32(eax + 0x4))); _flag_b = (uint32_t)((edx | MEM32(eax + 0x4)));
    edx = edx | MEM32(eax + 0x4); /* 0x171C3214: or edx, dword ptr [eax + 4] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C3240; /* 0x171C3217: jne 0x171c3240 */
L_171C3219:
    edx = MEM32(eax); /* 0x171C3219: mov edx, dword ptr [eax] */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x171C321B: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x3FFu);
    edx = edx & 0x3FFu; /* 0x171C321E: and edx, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(edx, MEM8(edx + edi)); /* 0x171C3224: mov dl, byte ptr [edx + edi] */
    MEM8(ecx) = (uint8_t)(LO8(edx)); /* 0x171C3227: mov byte ptr [ecx], dl */
    MEM8(ecx + 0x1) = (uint8_t)(LO8(edx)); /* 0x171C3229: mov byte ptr [ecx + 1], dl */
    MEM8(ecx + 0x2) = (uint8_t)(LO8(edx)); /* 0x171C322C: mov byte ptr [ecx + 2], dl */
    MEM8(ecx + 0x4) = (uint8_t)(LO8(edx)); /* 0x171C322F: mov byte ptr [ecx + 4], dl */
    MEM8(ecx + 0x5) = (uint8_t)(LO8(edx)); /* 0x171C3232: mov byte ptr [ecx + 5], dl */
    MEM8(ecx + 0x6) = (uint8_t)(LO8(edx)); /* 0x171C3235: mov byte ptr [ecx + 6], dl */
    MEM8(ecx + 0x7) = (uint8_t)(LO8(edx)); /* 0x171C3238: mov byte ptr [ecx + 7], dl */
    goto L_171C33CC; /* 0x171C323B: jmp 0x171c33cc */
L_171C3240:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171C3240: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(ebx, MEM16(eax + 0x10)); /* 0x171C3242: mov bx, word ptr [eax + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171C3246: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(edx, MEM16(eax)); /* 0x171C3248: mov dx, word ptr [eax] */
    esi = edx + ebx; /* 0x171C324B: lea esi, [edx + ebx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ebx; /* 0x171C324E: sub edx, ebx */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x10) = edx; /* 0x171C3250: mov dword ptr [ebp + 0x10], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171C3253: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(ebx, MEM16(eax + 0x18)); /* 0x171C3255: mov bx, word ptr [eax + 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171C3259: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(edx, MEM16(eax + 0x8)); /* 0x171C325B: mov dx, word ptr [eax + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ebx; /* 0x171C325F: add edx, ebx */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = edx; /* 0x171C3261: mov dword ptr [ebp + 8], edx */
    edx = (int32_t)(int16_t)MEM16(eax + 0x8); /* 0x171C3264: movsx edx, word ptr [eax + 8] */
    ebx = (int32_t)(int16_t)LO16(ebx); /* 0x171C3268: movsx ebx, bx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ebx; /* 0x171C326B: sub edx, ebx */
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + 0x8); /* 0x171C326D: mov ebx, dword ptr [ebp + 8] */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x16Au); /* 0x171C3270: imul edx, edx, 0x16a */
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x171C3276: sar edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 8u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ebx; /* 0x171C3279: sub edx, ebx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + esi; /* 0x171C327B: add ebx, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x20)) = ebx; /* 0x171C327D: mov dword ptr [ebp - 0x20], ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebp + 0x8); /* 0x171C3280: sub esi, dword ptr [ebp + 8] */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x14)) = esi; /* 0x171C3283: mov dword ptr [ebp - 0x14], esi */
    esi = MEM32(ebp + 0x10); /* 0x171C3286: mov esi, dword ptr [ebp + 0x10] */
    ebx = edx + esi; /* 0x171C3289: lea ebx, [edx + esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x171C328C: sub esi, edx */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = esi; /* 0x171C328E: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171C3291: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(esi, MEM16(eax + 0xC)); /* 0x171C3293: mov si, word ptr [eax + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171C3297: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(edx, MEM16(eax + 0x14)); /* 0x171C3299: mov dx, word ptr [eax + 0x14] */
    MEM32(ebp + (-0x18)) = ebx; /* 0x171C329D: mov dword ptr [ebp - 0x18], ebx */
    ebx = esi + edx; /* 0x171C32A0: lea ebx, [esi + edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x171C32A3: sub edx, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171C32A5: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(esi, MEM16(eax + 0x1C)); /* 0x171C32A7: mov si, word ptr [eax + 0x1c] */
    MEM32(ebp + (-0x1C)) = edx; /* 0x171C32AB: mov dword ptr [ebp - 0x1c], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171C32AE: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(edx, MEM16(eax + 0x4)); /* 0x171C32B0: mov dx, word ptr [eax + 4] */
    MEM32(ebp + 0x10) = ebx; /* 0x171C32B4: mov dword ptr [ebp + 0x10], ebx */
    ebx = edx + esi; /* 0x171C32B7: lea ebx, [edx + esi] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x171C32BA: sub edx, esi */
    _flag_k = FK_CMP;
    esi = MEM32(ebp + 0x10); /* 0x171C32BC: mov esi, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x8)) = ebx; /* 0x171C32BF: mov dword ptr [ebp - 8], ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + esi; /* 0x171C32C2: add ebx, esi */
    _flag_k = FK_ADD;
    esi = (int32_t)(int16_t)MEM16(ebp + (-0x1C)); /* 0x171C32C4: movsx esi, word ptr [ebp - 0x1c] */
    MEM32(ebp + 0xC) = ebx; /* 0x171C32C8: mov dword ptr [ebp + 0xc], ebx */
    edx = (int32_t)(int16_t)LO16(edx); /* 0x171C32CB: movsx edx, dx */
    ebx = esi + edx; /* 0x171C32CE: lea ebx, [esi + edx] */
    esi = (uint32_t)((int32_t)esi * (int32_t)0xFFFFFD63u); /* 0x171C32D1: imul esi, esi, 0xfffffd63 */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x115u); /* 0x171C32D7: imul edx, edx, 0x115 */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x1D9u); /* 0x171C32DD: imul ebx, ebx, 0x1d9 */
    if (8u) _cf = (((ebx) >> 7) & 1u); /* 0x171C32E3: sar ebx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 8u);
    MEM32(ebp + (-0x10)) = ebx; /* 0x171C32E6: mov dword ptr [ebp - 0x10], ebx */
    ebx = MEM32(ebp + 0xC); /* 0x171C32E9: mov ebx, dword ptr [ebp + 0xc] */
    if (8u) _cf = (((esi) >> 7) & 1u); /* 0x171C32EC: sar esi, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 8u);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x171C32EF: sub esi, ebx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x10)); /* 0x171C32F1: add esi, dword ptr [ebp - 0x10] */
    _flag_k = FK_ADD;
    ebx = (int32_t)(int16_t)MEM16(ebp + 0x10); /* 0x171C32F4: movsx ebx, word ptr [ebp + 0x10] */
    MEM32(ebp + (-0x4)) = esi; /* 0x171C32F8: mov dword ptr [ebp - 4], esi */
    esi = (int32_t)(int16_t)MEM16(ebp + (-0x8)); /* 0x171C32FB: movsx esi, word ptr [ebp - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x171C32FF: sub esi, ebx */
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + (-0x4)); /* 0x171C3301: mov ebx, dword ptr [ebp - 4] */
    esi = (uint32_t)((int32_t)esi * (int32_t)0x16Au); /* 0x171C3304: imul esi, esi, 0x16a */
    if (8u) _cf = (((esi) >> 7) & 1u); /* 0x171C330A: sar esi, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 8u);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ebx; /* 0x171C330D: sub esi, ebx */
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + (-0x10)); /* 0x171C330F: mov ebx, dword ptr [ebp - 0x10] */
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x171C3312: sar edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 8u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ebx; /* 0x171C3315: sub edx, ebx */
    _flag_k = FK_CMP;
    ebx = (int32_t)(int16_t)MEM16(ebp + 0xC); /* 0x171C3317: movsx ebx, word ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + esi; /* 0x171C331B: add edx, esi */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x10) = edx; /* 0x171C331D: mov dword ptr [ebp + 0x10], edx */
    edx = (int32_t)(int16_t)MEM16(ebp + (-0x20)); /* 0x171C3320: movsx edx, word ptr [ebp - 0x20] */
    MEM32(ebp + 0xC) = ebx; /* 0x171C3324: mov dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edx; /* 0x171C3327: add ebx, edx */
    _flag_k = FK_ADD;
    if (5u) _cf = (((ebx) >> 4) & 1u); /* 0x171C3329: sar ebx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 5u);
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x3FFu);
    ebx = ebx & 0x3FFu; /* 0x171C332C: and ebx, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ebx, MEM8(ebx + edi)); /* 0x171C3332: mov bl, byte ptr [ebx + edi] */
    MEM8(ecx) = (uint8_t)(LO8(ebx)); /* 0x171C3335: mov byte ptr [ecx], bl */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ebp + 0xC); /* 0x171C3337: sub edx, dword ptr [ebp + 0xc] */
    _flag_k = FK_CMP;
    ebx = (int32_t)(int16_t)MEM16(ebp + (-0x4)); /* 0x171C333A: movsx ebx, word ptr [ebp - 4] */
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x171C333E: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x3FFu);
    edx = edx & 0x3FFu; /* 0x171C3341: and edx, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(edx, MEM8(edx + edi)); /* 0x171C3347: mov dl, byte ptr [edx + edi] */
    MEM8(ecx + 0x7) = (uint8_t)(LO8(edx)); /* 0x171C334A: mov byte ptr [ecx + 7], dl */
    edx = (int32_t)(int16_t)MEM16(ebp + (-0x18)); /* 0x171C334D: movsx edx, word ptr [ebp - 0x18] */
    MEM32(ebp + 0xC) = ebx; /* 0x171C3351: mov dword ptr [ebp + 0xc], ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edx; /* 0x171C3354: add ebx, edx */
    _flag_k = FK_ADD;
    if (5u) _cf = (((ebx) >> 4) & 1u); /* 0x171C3356: sar ebx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 5u);
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x3FFu);
    ebx = ebx & 0x3FFu; /* 0x171C3359: and ebx, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ebx, MEM8(ebx + edi)); /* 0x171C335F: mov bl, byte ptr [ebx + edi] */
    MEM8(ecx + 0x1) = (uint8_t)(LO8(ebx)); /* 0x171C3362: mov byte ptr [ecx + 1], bl */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ebp + 0xC); /* 0x171C3365: sub edx, dword ptr [ebp + 0xc] */
    _flag_k = FK_CMP;
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x171C3368: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x3FFu);
    edx = edx & 0x3FFu; /* 0x171C336B: and edx, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(edx, MEM8(edx + edi)); /* 0x171C3371: mov dl, byte ptr [edx + edi] */
    MEM8(ecx + 0x6) = (uint8_t)(LO8(edx)); /* 0x171C3374: mov byte ptr [ecx + 6], dl */
    edx = (int32_t)(int16_t)LO16(esi); /* 0x171C3377: movsx edx, si */
    esi = (int32_t)(int16_t)MEM16(ebp + 0x8); /* 0x171C337A: movsx esi, word ptr [ebp + 8] */
    ebx = esi + edx; /* 0x171C337E: lea ebx, [esi + edx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x171C3381: sub esi, edx */
    _flag_k = FK_CMP;
    if (5u) _cf = (((esi) >> 4) & 1u); /* 0x171C3383: sar esi, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 5u);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x3FFu);
    esi = esi & 0x3FFu; /* 0x171C3386: and esi, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(edx, MEM8(esi + edi)); /* 0x171C338C: mov dl, byte ptr [esi + edi] */
    esi = (int32_t)(int16_t)MEM16(ebp + (-0x14)); /* 0x171C338F: movsx esi, word ptr [ebp - 0x14] */
    if (5u) _cf = (((ebx) >> 4) & 1u); /* 0x171C3393: sar ebx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 5u);
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x3FFu);
    ebx = ebx & 0x3FFu; /* 0x171C3396: and ebx, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ebx, MEM8(ebx + edi)); /* 0x171C339C: mov bl, byte ptr [ebx + edi] */
    MEM8(ecx + 0x5) = (uint8_t)(LO8(edx)); /* 0x171C339F: mov byte ptr [ecx + 5], dl */
    edx = (int32_t)(int16_t)MEM16(ebp + 0x10); /* 0x171C33A2: movsx edx, word ptr [ebp + 0x10] */
    MEM8(ecx + 0x2) = (uint8_t)(LO8(ebx)); /* 0x171C33A6: mov byte ptr [ecx + 2], bl */
    ebx = edx + esi; /* 0x171C33A9: lea ebx, [edx + esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x171C33AC: sub esi, edx */
    _flag_k = FK_CMP;
    if (5u) _cf = (((ebx) >> 4) & 1u); /* 0x171C33AE: sar ebx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 5u);
    if (5u) _cf = (((esi) >> 4) & 1u); /* 0x171C33B1: sar esi, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 5u);
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x3FFu);
    ebx = ebx & 0x3FFu; /* 0x171C33B4: and ebx, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ebx, MEM8(ebx + edi)); /* 0x171C33BA: mov bl, byte ptr [ebx + edi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x3FFu);
    esi = esi & 0x3FFu; /* 0x171C33BD: and esi, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(edx, MEM8(esi + edi)); /* 0x171C33C3: mov dl, byte ptr [esi + edi] */
    esi = MEM32(ebp + (-0xC)); /* 0x171C33C6: mov esi, dword ptr [ebp - 0xc] */
    MEM8(ecx + 0x4) = (uint8_t)(LO8(ebx)); /* 0x171C33C9: mov byte ptr [ecx + 4], bl */
L_171C33CC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x171C33CC: add eax, 0x20 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171C33CF: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, 8 */ /* 0x171C33D0: cmp esi, 8 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM8(ecx + 0x3) = (uint8_t)(LO8(edx)); /* 0x171C33D3: mov byte ptr [ecx + 3], dl */
    MEM32(ebp + (-0xC)) = esi; /* 0x171C33D6: mov dword ptr [ebp - 0xc], esi */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171C31F5; /* 0x171C33D9: jl 0x171c31f5 */
L_171C33DF:
    edi = POP32_VAL(esp); /* 0x171C33DF: pop edi */
    esi = POP32_VAL(esp); /* 0x171C33E0: pop esi */
    ebx = POP32_VAL(esp); /* 0x171C33E1: pop ebx */
    esp = ebp; /* 0x171C33E2: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171C33E4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x171C33E5: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_171C33F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C33F0u);

L_171C33F0:
    edi = edi; /* 0x171C33F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C33F2: push ebp */
    ebp = esp; /* 0x171C33F3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x134u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x134u; /* 0x171C33F5: sub esp, 0x134 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x171C33FB: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(eax + 0x148); /* 0x171C33FE: mov edx, dword ptr [eax + 0x148] */
    ecx = MEM32(ebp + 0xC); /* 0x171C3404: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x171C3407: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x171C3408: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x171C340B: push esi */
    PUSH32(esp, edi); /* 0x171C340C: push edi */
    edi = MEM32(ecx + 0x50); /* 0x171C340D: mov edi, dword ptr [ecx + 0x50] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x80u; /* 0x171C3410: add edx, 0x80 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x2C)) = edx; /* 0x171C3416: mov dword ptr [ebp - 0x2c], edx */
    MEM32(ebp + (-0x4)) = ebx; /* 0x171C3419: mov dword ptr [ebp - 4], ebx */
    MEM32(ebp + 0xC) = edi; /* 0x171C341C: mov dword ptr [ebp + 0xc], edi */
    eax = ebp + (-0x134); /* 0x171C341F: lea eax, [ebp - 0x134] */
    MEM32(ebp + (-0x14)) = 8; /* 0x171C3425: mov dword ptr [ebp - 0x14], 8 */
    esp = esp; /* 0x171C342C: lea esp, [esp] */
L_171C3430:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171C3430: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(ecx, MEM16(ebx + 0x10)); /* 0x171C3432: mov cx, word ptr [ebx + 0x10] */
    /* test LO16(ecx), LO16(ecx) */ /* 0x171C3436: test cx, cx */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    MEM32(ebp + (-0x20)) = ecx; /* 0x171C3439: mov dword ptr [ebp - 0x20], ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C3496; /* 0x171C343C: jne 0x171c3496 */
L_171C343E:
    /* cmp MEM16(ebx + 0x20), LO16(ecx) */ /* 0x171C343E: cmp word ptr [ebx + 0x20], cx */
    _flag_a = (uint32_t)(MEM16(ebx + 0x20)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C3496; /* 0x171C3442: jne 0x171c3496 */
L_171C3444:
    /* cmp MEM16(ebx + 0x30), LO16(ecx) */ /* 0x171C3444: cmp word ptr [ebx + 0x30], cx */
    _flag_a = (uint32_t)(MEM16(ebx + 0x30)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C3496; /* 0x171C3448: jne 0x171c3496 */
L_171C344A:
    /* cmp MEM16(ebx + 0x40), LO16(ecx) */ /* 0x171C344A: cmp word ptr [ebx + 0x40], cx */
    _flag_a = (uint32_t)(MEM16(ebx + 0x40)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C3496; /* 0x171C344E: jne 0x171c3496 */
L_171C3450:
    /* cmp MEM16(ebx + 0x50), LO16(ecx) */ /* 0x171C3450: cmp word ptr [ebx + 0x50], cx */
    _flag_a = (uint32_t)(MEM16(ebx + 0x50)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C3496; /* 0x171C3454: jne 0x171c3496 */
L_171C3456:
    /* cmp MEM16(ebx + 0x60), LO16(ecx) */ /* 0x171C3456: cmp word ptr [ebx + 0x60], cx */
    _flag_a = (uint32_t)(MEM16(ebx + 0x60)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C3496; /* 0x171C345A: jne 0x171c3496 */
L_171C345C:
    /* cmp MEM16(ebx + 0x70), LO16(ecx) */ /* 0x171C345C: cmp word ptr [ebx + 0x70], cx */
    _flag_a = (uint32_t)(MEM16(ebx + 0x70)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C3496; /* 0x171C3460: jne 0x171c3496 */
L_171C3462:
    ecx = (int32_t)(int16_t)MEM16(ebx); /* 0x171C3462: movsx ecx, word ptr [ebx] */
    esi = (int32_t)(int16_t)MEM16(edi); /* 0x171C3465: movsx esi, word ptr [edi] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)esi); /* 0x171C3468: imul ecx, esi */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x171C346B: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x171C346B: shl ecx, 2 */
    MEM32(eax) = ecx; /* 0x171C346E: mov dword ptr [eax], ecx */
    MEM32(eax + 0x20) = ecx; /* 0x171C3470: mov dword ptr [eax + 0x20], ecx */
    MEM32(eax + 0x40) = ecx; /* 0x171C3473: mov dword ptr [eax + 0x40], ecx */
    MEM32(eax + 0x60) = ecx; /* 0x171C3476: mov dword ptr [eax + 0x60], ecx */
    MEM32(eax + 0x80) = ecx; /* 0x171C3479: mov dword ptr [eax + 0x80], ecx */
    MEM32(eax + 0xA0) = ecx; /* 0x171C347F: mov dword ptr [eax + 0xa0], ecx */
    MEM32(eax + 0xC0) = ecx; /* 0x171C3485: mov dword ptr [eax + 0xc0], ecx */
    MEM32(eax + 0xE0) = ecx; /* 0x171C348B: mov dword ptr [eax + 0xe0], ecx */
    goto L_171C3650; /* 0x171C3491: jmp 0x171c3650 */
L_171C3496:
    ecx = (int32_t)(int16_t)MEM16(edi + 0x20); /* 0x171C3496: movsx ecx, word ptr [edi + 0x20] */
    edx = (int32_t)(int16_t)MEM16(ebx + 0x20); /* 0x171C349A: movsx edx, word ptr [ebx + 0x20] */
    esi = (int32_t)(int16_t)MEM16(ebx + 0x60); /* 0x171C349E: movsx esi, word ptr [ebx + 0x60] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx); /* 0x171C34A2: imul ecx, edx */
    edx = (int32_t)(int16_t)MEM16(edi + 0x60); /* 0x171C34A5: movsx edx, word ptr [edi + 0x60] */
    edx = (uint32_t)((int32_t)edx * (int32_t)esi); /* 0x171C34A9: imul edx, esi */
    esi = edx + ecx; /* 0x171C34AC: lea esi, [edx + ecx] */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x3B21u); /* 0x171C34AF: imul edx, edx, 0x3b21 */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x187Eu); /* 0x171C34B5: imul ecx, ecx, 0x187e */
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1151u); /* 0x171C34BB: imul esi, esi, 0x1151 */
    MEM32(ebp + 0x8) = esi; /* 0x171C34C1: mov dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x171C34C4: sub esi, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + 0x8); /* 0x171C34C6: add ecx, dword ptr [ebp + 8] */
    _flag_k = FK_ADD;
    edx = (int32_t)(int16_t)MEM16(ebx); /* 0x171C34C9: movsx edx, word ptr [ebx] */
    MEM32(ebp + 0x10) = ecx; /* 0x171C34CC: mov dword ptr [ebp + 0x10], ecx */
    ecx = (int32_t)(int16_t)MEM16(edi); /* 0x171C34CF: movsx ecx, word ptr [edi] */
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx); /* 0x171C34D2: imul edx, ecx */
    ecx = (int32_t)(int16_t)MEM16(ebx + 0x40); /* 0x171C34D5: movsx ecx, word ptr [ebx + 0x40] */
    MEM32(ebp + (-0x10)) = esi; /* 0x171C34D9: mov dword ptr [ebp - 0x10], esi */
    esi = (int32_t)(int16_t)MEM16(edi + 0x40); /* 0x171C34DC: movsx esi, word ptr [edi + 0x40] */
    esi = (uint32_t)((int32_t)esi * (int32_t)ecx); /* 0x171C34E0: imul esi, ecx */
    ecx = esi + edx; /* 0x171C34E3: lea ecx, [esi + edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - esi; /* 0x171C34E6: sub edx, esi */
    _flag_k = FK_CMP;
    esi = MEM32(ebp + 0x10); /* 0x171C34E8: mov esi, dword ptr [ebp + 0x10] */
    if (13u) _cf = (((ecx) >> 19) & 1u); /* 0x171C34EB: shl ecx, 0xd */
    if (13u) { _flag_a = recomp_flags_pack((ecx << 13u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 13u; /* 0x171C34EB: shl ecx, 0xd */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x171C34EE: add esi, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x34)) = esi; /* 0x171C34F0: mov dword ptr [ebp - 0x34], esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + 0x10); /* 0x171C34F3: sub ecx, dword ptr [ebp + 0x10] */
    _flag_k = FK_CMP;
    if (13u) _cf = (((edx) >> 19) & 1u); /* 0x171C34F6: shl edx, 0xd */
    if (13u) { _flag_a = recomp_flags_pack((edx << 13u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 13u; /* 0x171C34F6: shl edx, 0xd */
    MEM32(ebp + (-0x30)) = ecx; /* 0x171C34F9: mov dword ptr [ebp - 0x30], ecx */
    ecx = MEM32(ebp + (-0x10)); /* 0x171C34FC: mov ecx, dword ptr [ebp - 0x10] */
    esi = edx + ecx; /* 0x171C34FF: lea esi, [edx + ecx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x171C3502: sub edx, ecx */
    _flag_k = FK_CMP;
    ecx = (int32_t)(int16_t)MEM16(edi + 0x70); /* 0x171C3504: movsx ecx, word ptr [edi + 0x70] */
    MEM32(ebp + (-0x28)) = edx; /* 0x171C3508: mov dword ptr [ebp - 0x28], edx */
    edx = (int32_t)(int16_t)MEM16(ebx + 0x70); /* 0x171C350B: movsx edx, word ptr [ebx + 0x70] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx); /* 0x171C350F: imul ecx, edx */
    edx = (int32_t)(int16_t)MEM16(edi + 0x50); /* 0x171C3512: movsx edx, word ptr [edi + 0x50] */
    MEM32(ebp + (-0x24)) = esi; /* 0x171C3516: mov dword ptr [ebp - 0x24], esi */
    esi = (int32_t)(int16_t)MEM16(ebx + 0x50); /* 0x171C3519: movsx esi, word ptr [ebx + 0x50] */
    ebx = (int32_t)(int16_t)MEM16(ebx + 0x30); /* 0x171C351D: movsx ebx, word ptr [ebx + 0x30] */
    edx = (uint32_t)((int32_t)edx * (int32_t)esi); /* 0x171C3521: imul edx, esi */
    esi = (int32_t)(int16_t)MEM16(edi + 0x30); /* 0x171C3524: movsx esi, word ptr [edi + 0x30] */
    edi = (int32_t)(int16_t)MEM16(edi + 0x10); /* 0x171C3528: movsx edi, word ptr [edi + 0x10] */
    esi = (uint32_t)((int32_t)esi * (int32_t)ebx); /* 0x171C352C: imul esi, ebx */
    ebx = (int32_t)(int16_t)MEM16(ebp + (-0x20)); /* 0x171C352F: movsx ebx, word ptr [ebp - 0x20] */
    edi = (uint32_t)((int32_t)edi * (int32_t)ebx); /* 0x171C3533: imul edi, ebx */
    ebx = ecx + edi; /* 0x171C3536: lea ebx, [ecx + edi] */
    MEM32(ebp + 0x10) = edi; /* 0x171C3539: mov dword ptr [ebp + 0x10], edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + edx; /* 0x171C353C: add edi, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = ebx; /* 0x171C353E: mov dword ptr [ebp + 8], ebx */
    MEM32(ebp + (-0x18)) = edi; /* 0x171C3541: mov dword ptr [ebp - 0x18], edi */
    ebx = edx + esi; /* 0x171C3544: lea ebx, [edx + esi] */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x41B3u); /* 0x171C3547: imul edx, edx, 0x41b3 */
    MEM32(ebp + (-0x8)) = ebx; /* 0x171C354D: mov dword ptr [ebp - 8], ebx */
    ebx = ecx + esi; /* 0x171C3550: lea ebx, [ecx + esi] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x98Eu); /* 0x171C3553: imul ecx, ecx, 0x98e */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ebx; /* 0x171C3559: add edi, ebx */
    _flag_k = FK_ADD;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x3EC5u); /* 0x171C355B: imul ebx, ebx, 0x3ec5 */
    edi = (uint32_t)((int32_t)edi * (int32_t)0x25A1u); /* 0x171C3561: imul edi, edi, 0x25a1 */
    MEM32(ebp + (-0x1C)) = edi; /* 0x171C3567: mov dword ptr [ebp - 0x1c], edi */
    edi = MEM32(ebp + 0x8); /* 0x171C356A: mov edi, dword ptr [ebp + 8] */
    edi = (uint32_t)((int32_t)edi * (int32_t)0xFFFFE333u); /* 0x171C356D: imul edi, edi, 0xffffe333 */
    MEM32(ebp + 0x8) = edi; /* 0x171C3573: mov dword ptr [ebp + 8], edi */
    edi = MEM32(ebp + (-0x8)); /* 0x171C3576: mov edi, dword ptr [ebp - 8] */
    edi = (uint32_t)((int32_t)edi * (int32_t)0xFFFFADFDu); /* 0x171C3579: imul edi, edi, 0xffffadfd */
    MEM32(ebp + (-0x8)) = edi; /* 0x171C357F: mov dword ptr [ebp - 8], edi */
    edi = MEM32(ebp + (-0x1C)); /* 0x171C3582: mov edi, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x171C3585: sub edi, ebx */
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + (-0x1C)); /* 0x171C3587: mov ebx, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0xC)) = edi; /* 0x171C358A: mov dword ptr [ebp - 0xc], edi */
    edi = MEM32(ebp + (-0x18)); /* 0x171C358D: mov edi, dword ptr [ebp - 0x18] */
    edi = (uint32_t)((int32_t)edi * (int32_t)0xC7Cu); /* 0x171C3590: imul edi, edi, 0xc7c */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edi; /* 0x171C3596: sub ebx, edi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + 0x8); /* 0x171C3598: add ecx, dword ptr [ebp + 8] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0xC)); /* 0x171C359B: add ecx, dword ptr [ebp - 0xc] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ebx; /* 0x171C359E: add edx, ebx */
    _flag_k = FK_ADD;
    edi = MEM32(ebp + (-0x8)); /* 0x171C35A0: mov edi, dword ptr [ebp - 8] */
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6254u); /* 0x171C35A3: imul esi, esi, 0x6254 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0xC)); /* 0x171C35A9: add esi, dword ptr [ebp - 0xc] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x171C35AC: add edx, edi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edi; /* 0x171C35AE: add esi, edi */
    _flag_k = FK_ADD;
    edi = MEM32(ebp + 0x10); /* 0x171C35B0: mov edi, dword ptr [ebp + 0x10] */
    edi = (uint32_t)((int32_t)edi * (int32_t)0x300Bu); /* 0x171C35B3: imul edi, edi, 0x300b */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ebx; /* 0x171C35B9: add edi, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + 0x8); /* 0x171C35BB: add edi, dword ptr [ebp + 8] */
    _flag_k = FK_ADD;
    ebx = edi; /* 0x171C35BE: mov ebx, edi */
    edi = MEM32(ebp + (-0x34)); /* 0x171C35C0: mov edi, dword ptr [ebp - 0x34] */
    MEM32(ebp + 0x10) = ebx; /* 0x171C35C3: mov dword ptr [ebp + 0x10], ebx */
    ebx = edi + ebx + 0x400; /* 0x171C35C6: lea ebx, [edi + ebx + 0x400] */
    if (11u) _cf = (((ebx) >> 10) & 1u); /* 0x171C35CD: sar ebx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 11u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 11u);
    MEM32(eax) = ebx; /* 0x171C35D0: mov dword ptr [eax], ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(ebp + 0x10); /* 0x171C35D2: sub edi, dword ptr [ebp + 0x10] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x400u; /* 0x171C35D5: add edi, 0x400 */
    _flag_k = FK_ADD;
    if (11u) _cf = (((edi) >> 10) & 1u); /* 0x171C35DB: sar edi, 0xb */
    if (11u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> 11u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> 11u);
    MEM32(eax + 0xE0) = edi; /* 0x171C35DE: mov dword ptr [eax + 0xe0], edi */
    edi = MEM32(ebp + (-0x24)); /* 0x171C35E4: mov edi, dword ptr [ebp - 0x24] */
    ebx = edi + esi + 0x400; /* 0x171C35E7: lea ebx, [edi + esi + 0x400] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - esi; /* 0x171C35EE: sub edi, esi */
    _flag_k = FK_CMP;
    esi = MEM32(ebp + (-0x28)); /* 0x171C35F0: mov esi, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x400u; /* 0x171C35F3: add edi, 0x400 */
    _flag_k = FK_ADD;
    if (11u) _cf = (((edi) >> 10) & 1u); /* 0x171C35F9: sar edi, 0xb */
    if (11u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> 11u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> 11u);
    MEM32(eax + 0xC0) = edi; /* 0x171C35FC: mov dword ptr [eax + 0xc0], edi */
    edi = esi + edx + 0x400; /* 0x171C3602: lea edi, [esi + edx + 0x400] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x171C3609: sub esi, edx */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + (-0x30)); /* 0x171C360B: mov edx, dword ptr [ebp - 0x30] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x400u; /* 0x171C360E: add esi, 0x400 */
    _flag_k = FK_ADD;
    if (11u) _cf = (((esi) >> 10) & 1u); /* 0x171C3614: sar esi, 0xb */
    if (11u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 11u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 11u);
    MEM32(eax + 0xA0) = esi; /* 0x171C3617: mov dword ptr [eax + 0xa0], esi */
    esi = edx + ecx + 0x400; /* 0x171C361D: lea esi, [edx + ecx + 0x400] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x171C3624: sub edx, ecx */
    _flag_k = FK_CMP;
    if (11u) _cf = (((ebx) >> 10) & 1u); /* 0x171C3626: sar ebx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 11u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 11u);
    if (11u) _cf = (((edi) >> 10) & 1u); /* 0x171C3629: sar edi, 0xb */
    if (11u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> 11u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> 11u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x400u; /* 0x171C362C: add edx, 0x400 */
    _flag_k = FK_ADD;
    if (11u) _cf = (((esi) >> 10) & 1u); /* 0x171C3632: sar esi, 0xb */
    if (11u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 11u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 11u);
    if (11u) _cf = (((edx) >> 10) & 1u); /* 0x171C3635: sar edx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 11u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 11u);
    MEM32(eax + 0x20) = ebx; /* 0x171C3638: mov dword ptr [eax + 0x20], ebx */
    ebx = MEM32(ebp + (-0x4)); /* 0x171C363B: mov ebx, dword ptr [ebp - 4] */
    MEM32(eax + 0x40) = edi; /* 0x171C363E: mov dword ptr [eax + 0x40], edi */
    edi = MEM32(ebp + 0xC); /* 0x171C3641: mov edi, dword ptr [ebp + 0xc] */
    MEM32(eax + 0x80) = edx; /* 0x171C3644: mov dword ptr [eax + 0x80], edx */
    edx = MEM32(ebp + (-0x2C)); /* 0x171C364A: mov edx, dword ptr [ebp - 0x2c] */
    MEM32(eax + 0x60) = esi; /* 0x171C364D: mov dword ptr [eax + 0x60], esi */
L_171C3650:
    ecx = MEM32(ebp + (-0x14)); /* 0x171C3650: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 2; /* 0x171C3653: add ebx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 2; /* 0x171C3656: add edi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171C3659: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x171C365C: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x4)) = ebx; /* 0x171C365D: mov dword ptr [ebp - 4], ebx */
    MEM32(ebp + 0xC) = edi; /* 0x171C3660: mov dword ptr [ebp + 0xc], edi */
    MEM32(ebp + (-0x14)) = ecx; /* 0x171C3663: mov dword ptr [ebp - 0x14], ecx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171C3430; /* 0x171C3666: jne 0x171c3430 */
L_171C366C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171C366C: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x134); /* 0x171C366E: lea ecx, [ebp - 0x134] */
    MEM32(ebp + (-0x20)) = edi; /* 0x171C3674: mov dword ptr [ebp - 0x20], edi */
L_171C3677:
    eax = MEM32(ebp + 0x14); /* 0x171C3677: mov eax, dword ptr [ebp + 0x14] */
    esi = MEM32(ebp + 0x18); /* 0x171C367A: mov esi, dword ptr [ebp + 0x18] */
    eax = MEM32(eax + edi * 4); /* 0x171C367D: mov eax, dword ptr [eax + edi*4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x171C3680: add eax, esi */
    _flag_k = FK_ADD;
    esi = MEM32(ecx + 0x4); /* 0x171C3682: mov esi, dword ptr [ecx + 4] */
    /* test esi, esi */ /* 0x171C3685: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = esi; /* 0x171C3687: mov dword ptr [ebp - 0x14], esi */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C36E0; /* 0x171C368A: jne 0x171c36e0 */
L_171C368C:
    esi = MEM32(ecx + 0x8); /* 0x171C368C: mov esi, dword ptr [ecx + 8] */
    /* test esi, esi */ /* 0x171C368F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C36E0; /* 0x171C3691: jne 0x171c36e0 */
L_171C3693:
    esi = MEM32(ecx + 0xC); /* 0x171C3693: mov esi, dword ptr [ecx + 0xc] */
    /* test esi, esi */ /* 0x171C3696: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C36E0; /* 0x171C3698: jne 0x171c36e0 */
L_171C369A:
    esi = MEM32(ecx + 0x10); /* 0x171C369A: mov esi, dword ptr [ecx + 0x10] */
    /* test esi, esi */ /* 0x171C369D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C36E0; /* 0x171C369F: jne 0x171c36e0 */
L_171C36A1:
    esi = MEM32(ecx + 0x14); /* 0x171C36A1: mov esi, dword ptr [ecx + 0x14] */
    /* test esi, esi */ /* 0x171C36A4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C36E0; /* 0x171C36A6: jne 0x171c36e0 */
L_171C36A8:
    esi = MEM32(ecx + 0x18); /* 0x171C36A8: mov esi, dword ptr [ecx + 0x18] */
    /* test esi, esi */ /* 0x171C36AB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C36E0; /* 0x171C36AD: jne 0x171c36e0 */
L_171C36AF:
    esi = MEM32(ecx + 0x1C); /* 0x171C36AF: mov esi, dword ptr [ecx + 0x1c] */
    /* test esi, esi */ /* 0x171C36B2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C36E0; /* 0x171C36B4: jne 0x171c36e0 */
L_171C36B6:
    esi = MEM32(ecx); /* 0x171C36B6: mov esi, dword ptr [ecx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x171C36B8: add esi, 0x10 */
    _flag_k = FK_ADD;
    if (5u) _cf = (((esi) >> 4) & 1u); /* 0x171C36BB: sar esi, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 5u);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x3FFu);
    esi = esi & 0x3FFu; /* 0x171C36BE: and esi, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ebx, MEM8(esi + edx)); /* 0x171C36C4: mov bl, byte ptr [esi + edx] */
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x171C36C7: mov byte ptr [eax], bl */
    MEM8(eax + 0x1) = (uint8_t)(LO8(ebx)); /* 0x171C36C9: mov byte ptr [eax + 1], bl */
    MEM8(eax + 0x2) = (uint8_t)(LO8(ebx)); /* 0x171C36CC: mov byte ptr [eax + 2], bl */
    MEM8(eax + 0x3) = (uint8_t)(LO8(ebx)); /* 0x171C36CF: mov byte ptr [eax + 3], bl */
    MEM8(eax + 0x5) = (uint8_t)(LO8(ebx)); /* 0x171C36D2: mov byte ptr [eax + 5], bl */
    MEM8(eax + 0x6) = (uint8_t)(LO8(ebx)); /* 0x171C36D5: mov byte ptr [eax + 6], bl */
    MEM8(eax + 0x7) = (uint8_t)(LO8(ebx)); /* 0x171C36D8: mov byte ptr [eax + 7], bl */
    goto L_171C38C0; /* 0x171C36DB: jmp 0x171c38c0 */
L_171C36E0:
    edx = MEM32(ecx + 0x8); /* 0x171C36E0: mov edx, dword ptr [ecx + 8] */
    esi = MEM32(ecx + 0x18); /* 0x171C36E3: mov esi, dword ptr [ecx + 0x18] */
    edi = esi + edx; /* 0x171C36E6: lea edi, [esi + edx] */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x187Eu); /* 0x171C36E9: imul edx, edx, 0x187e */
    esi = (uint32_t)((int32_t)esi * (int32_t)0x3B21u); /* 0x171C36EF: imul esi, esi, 0x3b21 */
    edi = (uint32_t)((int32_t)edi * (int32_t)0x1151u); /* 0x171C36F5: imul edi, edi, 0x1151 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + edi; /* 0x171C36FB: add edx, edi */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x10) = edx; /* 0x171C36FD: mov dword ptr [ebp + 0x10], edx */
    edx = MEM32(ecx + 0x10); /* 0x171C3700: mov edx, dword ptr [ecx + 0x10] */
    ebx = edi; /* 0x171C3703: mov ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - esi; /* 0x171C3705: sub ebx, esi */
    _flag_k = FK_CMP;
    esi = MEM32(ecx); /* 0x171C3707: mov esi, dword ptr [ecx] */
    edi = edx + esi; /* 0x171C3709: lea edi, [edx + esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x171C370C: sub esi, edx */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0x10); /* 0x171C370E: mov edx, dword ptr [ebp + 0x10] */
    if (13u) _cf = (((esi) >> 19) & 1u); /* 0x171C3711: shl esi, 0xd */
    if (13u) { _flag_a = recomp_flags_pack((esi << 13u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 13u; /* 0x171C3711: shl esi, 0xd */
    if (13u) _cf = (((edi) >> 19) & 1u); /* 0x171C3714: shl edi, 0xd */
    if (13u) { _flag_a = recomp_flags_pack((edi << 13u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 13u; /* 0x171C3714: shl edi, 0xd */
    MEM32(ebp + 0xC) = esi; /* 0x171C3717: mov dword ptr [ebp + 0xc], esi */
    esi = edi + edx; /* 0x171C371A: lea esi, [edi + edx] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - edx; /* 0x171C371D: sub edi, edx */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + 0xC); /* 0x171C371F: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ebx; /* 0x171C3722: add edx, ebx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x24)) = edx; /* 0x171C3724: mov dword ptr [ebp - 0x24], edx */
    edx = MEM32(ebp + 0xC); /* 0x171C3727: mov edx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ebx; /* 0x171C372A: sub edx, ebx */
    _flag_k = FK_CMP;
    ebx = MEM32(ecx + 0x14); /* 0x171C372C: mov ebx, dword ptr [ecx + 0x14] */
    MEM32(ebp + 0xC) = ebx; /* 0x171C372F: mov dword ptr [ebp + 0xc], ebx */
    ebx = MEM32(ecx + 0xC); /* 0x171C3732: mov ebx, dword ptr [ecx + 0xc] */
    MEM32(ebp + (-0x10)) = ebx; /* 0x171C3735: mov dword ptr [ebp - 0x10], ebx */
    ebx = MEM32(ebp + (-0x14)); /* 0x171C3738: mov ebx, dword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x28)) = edx; /* 0x171C373B: mov dword ptr [ebp - 0x28], edx */
    edx = MEM32(ecx + 0x1C); /* 0x171C373E: mov edx, dword ptr [ecx + 0x1c] */
    MEM32(ebp + (-0x4)) = edx; /* 0x171C3741: mov dword ptr [ebp - 4], edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ebx; /* 0x171C3744: add edx, ebx */
    _flag_k = FK_ADD;
    ebx = MEM32(ebp + 0xC); /* 0x171C3746: mov ebx, dword ptr [ebp + 0xc] */
    MEM32(ebp + 0x8) = edx; /* 0x171C3749: mov dword ptr [ebp + 8], edx */
    edx = MEM32(ebp + (-0x10)); /* 0x171C374C: mov edx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edx; /* 0x171C374F: add ebx, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x8)) = ebx; /* 0x171C3751: mov dword ptr [ebp - 8], ebx */
    ebx = MEM32(ebp + (-0x4)); /* 0x171C3754: mov ebx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edx; /* 0x171C3757: add ebx, edx */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + 0xC); /* 0x171C3759: mov edx, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0xC)) = ebx; /* 0x171C375C: mov dword ptr [ebp - 0xc], ebx */
    ebx = MEM32(ebp + (-0x14)); /* 0x171C375F: mov ebx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edx; /* 0x171C3762: add ebx, edx */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + (-0xC)); /* 0x171C3764: mov edx, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x18)) = ebx; /* 0x171C3767: mov dword ptr [ebp - 0x18], ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edx; /* 0x171C376A: add ebx, edx */
    _flag_k = FK_ADD;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x3EC5u); /* 0x171C376C: imul edx, edx, 0x3ec5 */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x25A1u); /* 0x171C3772: imul ebx, ebx, 0x25a1 */
    MEM32(ebp + (-0x1C)) = ebx; /* 0x171C3778: mov dword ptr [ebp - 0x1c], ebx */
    ebx = MEM32(ebp + 0x8); /* 0x171C377B: mov ebx, dword ptr [ebp + 8] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0xFFFFE333u); /* 0x171C377E: imul ebx, ebx, 0xffffe333 */
    MEM32(ebp + 0x8) = ebx; /* 0x171C3784: mov dword ptr [ebp + 8], ebx */
    ebx = MEM32(ebp + (-0x8)); /* 0x171C3787: mov ebx, dword ptr [ebp - 8] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0xFFFFADFDu); /* 0x171C378A: imul ebx, ebx, 0xffffadfd */
    MEM32(ebp + (-0x8)) = ebx; /* 0x171C3790: mov dword ptr [ebp - 8], ebx */
    ebx = MEM32(ebp + (-0x1C)); /* 0x171C3793: mov ebx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edx; /* 0x171C3796: sub ebx, edx */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + (-0x18)); /* 0x171C3798: mov edx, dword ptr [ebp - 0x18] */
    edx = (uint32_t)((int32_t)edx * (int32_t)0xC7Cu); /* 0x171C379B: imul edx, edx, 0xc7c */
    MEM32(ebp + (-0xC)) = ebx; /* 0x171C37A1: mov dword ptr [ebp - 0xc], ebx */
    ebx = MEM32(ebp + (-0x1C)); /* 0x171C37A4: mov ebx, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edx; /* 0x171C37A7: sub ebx, edx */
    _flag_k = FK_CMP;
    edx = MEM32(ebp + (-0x4)); /* 0x171C37A9: mov edx, dword ptr [ebp - 4] */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x98Eu); /* 0x171C37AC: imul edx, edx, 0x98e */
    MEM32(ebp + (-0x18)) = ebx; /* 0x171C37B2: mov dword ptr [ebp - 0x18], ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + 0x8); /* 0x171C37B5: add edx, dword ptr [ebp + 8] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0xC)); /* 0x171C37B8: add edx, dword ptr [ebp - 0xc] */
    _flag_k = FK_ADD;
    ebx = MEM32(ebp + (-0x18)); /* 0x171C37BB: mov ebx, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x4)) = edx; /* 0x171C37BE: mov dword ptr [ebp - 4], edx */
    edx = MEM32(ebp + 0xC); /* 0x171C37C1: mov edx, dword ptr [ebp + 0xc] */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x41B3u); /* 0x171C37C4: imul edx, edx, 0x41b3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ebx; /* 0x171C37CA: add edx, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x8)); /* 0x171C37CC: add edx, dword ptr [ebp - 8] */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = edx; /* 0x171C37CF: mov dword ptr [ebp + 0xc], edx */
    edx = MEM32(ebp + (-0x10)); /* 0x171C37D2: mov edx, dword ptr [ebp - 0x10] */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x6254u); /* 0x171C37D5: imul edx, edx, 0x6254 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0xC)); /* 0x171C37DB: add edx, dword ptr [ebp - 0xc] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x8)); /* 0x171C37DE: add edx, dword ptr [ebp - 8] */
    _flag_k = FK_ADD;
    ebx = MEM32(ebp + (-0x18)); /* 0x171C37E1: mov ebx, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x10)) = edx; /* 0x171C37E4: mov dword ptr [ebp - 0x10], edx */
    edx = MEM32(ebp + (-0x14)); /* 0x171C37E7: mov edx, dword ptr [ebp - 0x14] */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x300Bu); /* 0x171C37EA: imul edx, edx, 0x300b */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ebx; /* 0x171C37F0: add edx, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + 0x8); /* 0x171C37F2: add edx, dword ptr [ebp + 8] */
    _flag_k = FK_ADD;
    ebx = esi + edx + 0x20000; /* 0x171C37F5: lea ebx, [esi + edx + 0x20000] */
    if (18u) _cf = (((ebx) >> 17) & 1u); /* 0x171C37FC: sar ebx, 0x12 */
    if (18u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 18u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 18u);
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x3FFu);
    ebx = ebx & 0x3FFu; /* 0x171C37FF: and ebx, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = edx; /* 0x171C3805: mov dword ptr [ebp + 0x10], edx */
    edx = MEM32(ebp + (-0x2C)); /* 0x171C3808: mov edx, dword ptr [ebp - 0x2c] */
    SET_LO8(ebx, MEM8(ebx + edx)); /* 0x171C380B: mov bl, byte ptr [ebx + edx] */
    MEM8(eax) = (uint8_t)(LO8(ebx)); /* 0x171C380E: mov byte ptr [eax], bl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebp + 0x10); /* 0x171C3810: sub esi, dword ptr [ebp + 0x10] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x00020000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x00020000u; /* 0x171C3813: add esi, 0x20000 */
    _flag_k = FK_ADD;
    if (18u) _cf = (((esi) >> 17) & 1u); /* 0x171C3819: sar esi, 0x12 */
    if (18u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 18u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 18u);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x3FFu);
    esi = esi & 0x3FFu; /* 0x171C381C: and esi, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ebx, MEM8(esi + edx)); /* 0x171C3822: mov bl, byte ptr [esi + edx] */
    esi = MEM32(ebp + (-0x24)); /* 0x171C3825: mov esi, dword ptr [ebp - 0x24] */
    MEM8(eax + 0x7) = (uint8_t)(LO8(ebx)); /* 0x171C3828: mov byte ptr [eax + 7], bl */
    ebx = MEM32(ebp + (-0x10)); /* 0x171C382B: mov ebx, dword ptr [ebp - 0x10] */
    ebx = esi + ebx + 0x20000; /* 0x171C382E: lea ebx, [esi + ebx + 0x20000] */
    if (18u) _cf = (((ebx) >> 17) & 1u); /* 0x171C3835: sar ebx, 0x12 */
    if (18u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 18u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 18u);
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x3FFu);
    ebx = ebx & 0x3FFu; /* 0x171C3838: and ebx, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ebx, MEM8(ebx + edx)); /* 0x171C383E: mov bl, byte ptr [ebx + edx] */
    MEM8(eax + 0x1) = (uint8_t)(LO8(ebx)); /* 0x171C3841: mov byte ptr [eax + 1], bl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebp + (-0x10)); /* 0x171C3844: sub esi, dword ptr [ebp - 0x10] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x00020000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x00020000u; /* 0x171C3847: add esi, 0x20000 */
    _flag_k = FK_ADD;
    if (18u) _cf = (((esi) >> 17) & 1u); /* 0x171C384D: sar esi, 0x12 */
    if (18u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 18u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 18u);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x3FFu);
    esi = esi & 0x3FFu; /* 0x171C3850: and esi, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ebx, MEM8(esi + edx)); /* 0x171C3856: mov bl, byte ptr [esi + edx] */
    esi = MEM32(ebp + (-0x28)); /* 0x171C3859: mov esi, dword ptr [ebp - 0x28] */
    MEM8(eax + 0x6) = (uint8_t)(LO8(ebx)); /* 0x171C385C: mov byte ptr [eax + 6], bl */
    ebx = MEM32(ebp + 0xC); /* 0x171C385F: mov ebx, dword ptr [ebp + 0xc] */
    ebx = esi + ebx + 0x20000; /* 0x171C3862: lea ebx, [esi + ebx + 0x20000] */
    if (18u) _cf = (((ebx) >> 17) & 1u); /* 0x171C3869: sar ebx, 0x12 */
    if (18u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 18u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 18u);
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x3FFu);
    ebx = ebx & 0x3FFu; /* 0x171C386C: and ebx, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ebx, MEM8(ebx + edx)); /* 0x171C3872: mov bl, byte ptr [ebx + edx] */
    MEM8(eax + 0x2) = (uint8_t)(LO8(ebx)); /* 0x171C3875: mov byte ptr [eax + 2], bl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebp + 0xC); /* 0x171C3878: sub esi, dword ptr [ebp + 0xc] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x00020000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x00020000u; /* 0x171C387B: add esi, 0x20000 */
    _flag_k = FK_ADD;
    if (18u) _cf = (((esi) >> 17) & 1u); /* 0x171C3881: sar esi, 0x12 */
    if (18u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 18u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 18u);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x3FFu);
    esi = esi & 0x3FFu; /* 0x171C3884: and esi, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ebx, MEM8(esi + edx)); /* 0x171C388A: mov bl, byte ptr [esi + edx] */
    esi = MEM32(ebp + (-0x4)); /* 0x171C388D: mov esi, dword ptr [ebp - 4] */
    MEM8(eax + 0x5) = (uint8_t)(LO8(ebx)); /* 0x171C3890: mov byte ptr [eax + 5], bl */
    ebx = edi + esi + 0x20000; /* 0x171C3893: lea ebx, [edi + esi + 0x20000] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - esi; /* 0x171C389A: sub edi, esi */
    _flag_k = FK_CMP;
    if (18u) _cf = (((ebx) >> 17) & 1u); /* 0x171C389C: sar ebx, 0x12 */
    if (18u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 18u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 18u);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x00020000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x00020000u; /* 0x171C389F: add edi, 0x20000 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x3FFu);
    ebx = ebx & 0x3FFu; /* 0x171C38A5: and ebx, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ebx, MEM8(ebx + edx)); /* 0x171C38AB: mov bl, byte ptr [ebx + edx] */
    if (18u) _cf = (((edi) >> 17) & 1u); /* 0x171C38AE: sar edi, 0x12 */
    if (18u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> 18u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> 18u);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x3FFu);
    edi = edi & 0x3FFu; /* 0x171C38B1: and edi, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(eax + 0x3) = (uint8_t)(LO8(ebx)); /* 0x171C38B7: mov byte ptr [eax + 3], bl */
    SET_LO8(ebx, MEM8(edi + edx)); /* 0x171C38BA: mov bl, byte ptr [edi + edx] */
    edi = MEM32(ebp + (-0x20)); /* 0x171C38BD: mov edi, dword ptr [ebp - 0x20] */
L_171C38C0:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x171C38C0: add ecx, 0x20 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171C38C3: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, 8 */ /* 0x171C38C4: cmp edi, 8 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM8(eax + 0x4) = (uint8_t)(LO8(ebx)); /* 0x171C38C7: mov byte ptr [eax + 4], bl */
    MEM32(ebp + (-0x20)) = edi; /* 0x171C38CA: mov dword ptr [ebp - 0x20], edi */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171C3677; /* 0x171C38CD: jl 0x171c3677 */
L_171C38D3:
    edi = POP32_VAL(esp); /* 0x171C38D3: pop edi */
    esi = POP32_VAL(esp); /* 0x171C38D4: pop esi */
    ebx = POP32_VAL(esp); /* 0x171C38D5: pop ebx */
    esp = ebp; /* 0x171C38D6: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171C38D8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x171C38D9: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_171C38F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C38F0u);

L_171C38F0:
    edi = edi; /* 0x171C38F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C38F2: push ebp */
    ebp = esp; /* 0x171C38F3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x171C38F5: sub esp, 0x44 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x171C38F8: push ebx */
    PUSH32(esp, esi); /* 0x171C38F9: push esi */
    PUSH32(esp, edi); /* 0x171C38FA: push edi */
    esi = MEM32(ebp + 0x8); /* 0x171C38FB: mov esi, dword ptr [ebp + 8] */
    edi = MEM32(ebp + 0xC); /* 0x171C38FE: mov edi, dword ptr [ebp + 0xc] */
    eax = MEM32(ebp + 0x10); /* 0x171C3901: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x44)) = esi; /* 0x171C3904: mov dword ptr [ebp - 0x44], esi */
    MEM32(ebp + (-0x40)) = edi; /* 0x171C3907: mov dword ptr [ebp - 0x40], edi */
    MEM32(ebp + (-0x3C)) = eax; /* 0x171C390A: mov dword ptr [ebp - 0x3c], eax */
    MEM32(ebp + (-0x38)) = 8; /* 0x171C390D: mov dword ptr [ebp - 0x38], 8 */
    eax = MEM32(esi); /* 0x171C3914: mov eax, dword ptr [esi] */
    ebx = MEM32(esi + 0x20); /* 0x171C3916: mov ebx, dword ptr [esi + 0x20] */
    ecx = MEM32(esi + 0x40); /* 0x171C3919: mov ecx, dword ptr [esi + 0x40] */
    edx = MEM32(esi + 0x60); /* 0x171C391C: mov edx, dword ptr [esi + 0x60] */
    eax = MEM32(edi); /* 0x171C391F: mov eax, dword ptr [edi] */
    ebx = MEM32(edi + 0x20); /* 0x171C3921: mov ebx, dword ptr [edi + 0x20] */
    ecx = MEM32(edi + 0x40); /* 0x171C3924: mov ecx, dword ptr [edi + 0x40] */
    edx = MEM32(edi + 0x60); /* 0x171C3927: mov edx, dword ptr [edi + 0x60] */
L_171C392A:
    esi = MEM32(ebp + (-0x44)); /* 0x171C392A: mov esi, dword ptr [ebp - 0x44] */
    edi = MEM32(ebp + (-0x40)); /* 0x171C392D: mov edi, dword ptr [ebp - 0x40] */
    SET_LO16(eax, MEM16(esi + 0x20)); /* 0x171C3930: mov ax, word ptr [esi + 0x20] */
    SET_LO16(ebx, MEM16(edi + 0x20)); /* 0x171C3934: mov bx, word ptr [edi + 0x20] */
    if (16u) _cf = (((eax) >> 16) & 1u); /* 0x171C3938: shl eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 16u; /* 0x171C3938: shl eax, 0x10 */
    SET_LO16(ecx, MEM16(esi + 0x60)); /* 0x171C393B: mov cx, word ptr [esi + 0x60] */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x171C393F: sar eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 16u);
    SET_LO16(edx, MEM16(edi + 0x60)); /* 0x171C3942: mov dx, word ptr [edi + 0x60] */
    if (16u) _cf = (((ebx) >> 16) & 1u); /* 0x171C3946: shl ebx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ebx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 16u; /* 0x171C3946: shl ebx, 0x10 */
    if (16u) _cf = (((ebx) >> 15) & 1u); /* 0x171C3949: sar ebx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 16u);
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx); /* 0x171C394C: imul eax, ebx */
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x171C394F: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x171C394F: shl ecx, 0x10 */
    if (16u) _cf = (((ecx) >> 15) & 1u); /* 0x171C3952: sar ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 16u);
    if (16u) _cf = (((edx) >> 16) & 1u); /* 0x171C3955: shl edx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((edx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 16u; /* 0x171C3955: shl edx, 0x10 */
    if (16u) _cf = (((edx) >> 15) & 1u); /* 0x171C3958: sar edx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 16u);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx); /* 0x171C395B: imul ecx, edx */
    ebx = eax; /* 0x171C395E: mov ebx, eax */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(0x17025BD4)); /* 0x171C3960: imul eax, dword ptr [0x17025bd4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x171C3967: add ebx, ecx */
    _flag_k = FK_ADD;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(0x17025BE4)); /* 0x171C3969: imul ecx, dword ptr [0x17025be4] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(0x17025BD0)); /* 0x171C3970: imul ebx, dword ptr [0x17025bd0] */
    SET_LO16(edx, MEM16(edi + 0x40)); /* 0x171C3977: mov dx, word ptr [edi + 0x40] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x171C397B: add ecx, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x171C397D: add eax, ebx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x34)) = ecx; /* 0x171C397F: mov dword ptr [ebp - 0x34], ecx */
    MEM32(ebp + (-0x30)) = eax; /* 0x171C3982: mov dword ptr [ebp - 0x30], eax */
    SET_LO16(ecx, MEM16(esi + 0x40)); /* 0x171C3985: mov cx, word ptr [esi + 0x40] */
    SET_LO16(eax, MEM16(esi)); /* 0x171C3989: mov ax, word ptr [esi] */
    SET_LO16(ebx, MEM16(edi)); /* 0x171C398C: mov bx, word ptr [edi] */
    edx = (int32_t)(int16_t)LO16(edx); /* 0x171C398F: movsx edx, dx */
    ecx = (int32_t)(int16_t)LO16(ecx); /* 0x171C3992: movsx ecx, cx */
    eax = (int32_t)(int16_t)LO16(eax); /* 0x171C3995: movsx eax, ax */
    ebx = (int32_t)(int16_t)LO16(ebx); /* 0x171C3998: movsx ebx, bx */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx); /* 0x171C399B: imul ecx, edx */
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx); /* 0x171C399E: imul eax, ebx */
    edx = ecx; /* 0x171C39A1: mov edx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x171C39A3: add ecx, eax */
    _flag_k = FK_ADD;
    if (13u) _cf = (((ecx) >> 19) & 1u); /* 0x171C39A5: shl ecx, 0xd */
    if (13u) { _flag_a = recomp_flags_pack((ecx << 13u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 13u; /* 0x171C39A5: shl ecx, 0xd */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x171C39A8: sub eax, edx */
    _flag_k = FK_CMP;
    if (13u) _cf = (((eax) >> 19) & 1u); /* 0x171C39AA: shl eax, 0xd */
    if (13u) { _flag_a = recomp_flags_pack((eax << 13u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 13u; /* 0x171C39AA: shl eax, 0xd */
    ebx = ecx; /* 0x171C39AD: mov ebx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x30)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x30)); /* 0x171C39AF: add ecx, dword ptr [ebp - 0x30] */
    _flag_k = FK_ADD;
    edx = eax; /* 0x171C39B2: mov edx, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x34)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x34)); /* 0x171C39B4: add eax, dword ptr [ebp - 0x34] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x2C)) = ecx; /* 0x171C39B7: mov dword ptr [ebp - 0x2c], ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x30)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - MEM32(ebp + (-0x30)); /* 0x171C39BA: sub ebx, dword ptr [ebp - 0x30] */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x28)) = eax; /* 0x171C39BD: mov dword ptr [ebp - 0x28], eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x34)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ebp + (-0x34)); /* 0x171C39C0: sub edx, dword ptr [ebp - 0x34] */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x24)) = ebx; /* 0x171C39C3: mov dword ptr [ebp - 0x24], ebx */
    SET_LO16(eax, MEM16(esi + 0x70)); /* 0x171C39C6: mov ax, word ptr [esi + 0x70] */
    MEM32(ebp + (-0x20)) = edx; /* 0x171C39CA: mov dword ptr [ebp - 0x20], edx */
    SET_LO16(ebx, MEM16(edi + 0x70)); /* 0x171C39CD: mov bx, word ptr [edi + 0x70] */
    if (16u) _cf = (((eax) >> 16) & 1u); /* 0x171C39D1: shl eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 16u; /* 0x171C39D1: shl eax, 0x10 */
    SET_LO16(ecx, MEM16(esi + 0x30)); /* 0x171C39D4: mov cx, word ptr [esi + 0x30] */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x171C39D8: sar eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 16u);
    SET_LO16(edx, MEM16(edi + 0x30)); /* 0x171C39DB: mov dx, word ptr [edi + 0x30] */
    if (16u) _cf = (((ebx) >> 16) & 1u); /* 0x171C39DF: shl ebx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ebx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 16u; /* 0x171C39DF: shl ebx, 0x10 */
    if (16u) _cf = (((ebx) >> 15) & 1u); /* 0x171C39E2: sar ebx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 16u);
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx); /* 0x171C39E5: imul eax, ebx */
    if (16u) _cf = (((ecx) >> 16) & 1u); /* 0x171C39E8: shl ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ecx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 16u; /* 0x171C39E8: shl ecx, 0x10 */
    if (16u) _cf = (((ecx) >> 15) & 1u); /* 0x171C39EB: sar ecx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 16u);
    if (16u) _cf = (((edx) >> 16) & 1u); /* 0x171C39EE: shl edx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((edx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 16u; /* 0x171C39EE: shl edx, 0x10 */
    if (16u) _cf = (((edx) >> 15) & 1u); /* 0x171C39F1: sar edx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 16u);
    SET_LO16(ebx, MEM16(esi + 0x10)); /* 0x171C39F4: mov bx, word ptr [esi + 0x10] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx); /* 0x171C39F8: imul ecx, edx */
    if (16u) _cf = (((ebx) >> 16) & 1u); /* 0x171C39FB: shl ebx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((ebx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 16u; /* 0x171C39FB: shl ebx, 0x10 */
    SET_LO16(edx, MEM16(edi + 0x10)); /* 0x171C39FE: mov dx, word ptr [edi + 0x10] */
    if (16u) _cf = (((ebx) >> 15) & 1u); /* 0x171C3A02: sar ebx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 16u);
    if (16u) _cf = (((edx) >> 16) & 1u); /* 0x171C3A05: shl edx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((edx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 16u; /* 0x171C3A05: shl edx, 0x10 */
    if (16u) _cf = (((edx) >> 15) & 1u); /* 0x171C3A08: sar edx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 16u);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edx); /* 0x171C3A0B: imul ebx, edx */
    MEM32(ebp + (-0x1C)) = eax; /* 0x171C3A0E: mov dword ptr [ebp - 0x1c], eax */
    MEM32(ebp + (-0x34)) = ecx; /* 0x171C3A11: mov dword ptr [ebp - 0x34], ecx */
    SET_LO16(eax, MEM16(esi + 0x50)); /* 0x171C3A14: mov ax, word ptr [esi + 0x50] */
    SET_LO16(edx, MEM16(edi + 0x50)); /* 0x171C3A18: mov dx, word ptr [edi + 0x50] */
    if (16u) _cf = (((eax) >> 16) & 1u); /* 0x171C3A1C: shl eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 16u; /* 0x171C3A1C: shl eax, 0x10 */
    if (16u) _cf = (((eax) >> 15) & 1u); /* 0x171C3A1F: sar eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 16u);
    if (16u) _cf = (((edx) >> 16) & 1u); /* 0x171C3A22: shl edx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((edx << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 16u; /* 0x171C3A22: shl edx, 0x10 */
    if (16u) _cf = (((edx) >> 15) & 1u); /* 0x171C3A25: sar edx, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 16u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 16u);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx); /* 0x171C3A28: imul eax, edx */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(0x17025BF4)); /* 0x171C3A2B: imul ecx, dword ptr [0x17025bf4] */
    MEM32(ebp + (-0x30)) = ebx; /* 0x171C3A32: mov dword ptr [ebp - 0x30], ebx */
    edx = MEM32(ebp + (-0x1C)); /* 0x171C3A35: mov edx, dword ptr [ebp - 0x1c] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(0x17025BE0)); /* 0x171C3A38: imul ebx, dword ptr [0x17025be0] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(0x17025BC8)); /* 0x171C3A3F: imul edx, dword ptr [0x17025bc8] */
    MEM32(ebp + (-0x18)) = eax; /* 0x171C3A46: mov dword ptr [ebp - 0x18], eax */
    MEM32(ebp + (-0x14)) = edx; /* 0x171C3A49: mov dword ptr [ebp - 0x14], edx */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(0x17025BEC)); /* 0x171C3A4C: imul eax, dword ptr [0x17025bec] */
    MEM32(ebp + (-0x10)) = eax; /* 0x171C3A53: mov dword ptr [ebp - 0x10], eax */
    MEM32(ebp + (-0xC)) = ecx; /* 0x171C3A56: mov dword ptr [ebp - 0xc], ecx */
    MEM32(ebp + (-0x8)) = ebx; /* 0x171C3A59: mov dword ptr [ebp - 8], ebx */
    eax = MEM32(ebp + (-0x1C)); /* 0x171C3A5C: mov eax, dword ptr [ebp - 0x1c] */
    ebx = MEM32(ebp + (-0x18)); /* 0x171C3A5F: mov ebx, dword ptr [ebp - 0x18] */
    ecx = eax; /* 0x171C3A62: mov ecx, eax */
    edx = ebx; /* 0x171C3A64: mov edx, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x30)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x30)); /* 0x171C3A66: add eax, dword ptr [ebp - 0x30] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x30)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + (-0x30)); /* 0x171C3A69: add ebx, dword ptr [ebp - 0x30] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x34)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x34)); /* 0x171C3A6C: add ecx, dword ptr [ebp - 0x34] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x34)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x34)); /* 0x171C3A6F: add edx, dword ptr [ebp - 0x34] */
    _flag_k = FK_ADD;
    esi = ecx; /* 0x171C3A72: mov esi, ecx */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(0x17025BD8)); /* 0x171C3A74: imul eax, dword ptr [0x17025bd8] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(0x17025BF0)); /* 0x171C3A7B: imul edx, dword ptr [0x17025bf0] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ebx; /* 0x171C3A82: add esi, ebx */
    _flag_k = FK_ADD;
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(0x17025BDC)); /* 0x171C3A84: imul esi, dword ptr [0x17025bdc] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(0x17025BE8)); /* 0x171C3A8B: imul ecx, dword ptr [0x17025be8] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(0x17025BCC)); /* 0x171C3A92: imul ebx, dword ptr [0x17025bcc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x171C3A99: add ecx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + esi; /* 0x171C3A9B: add ebx, esi */
    _flag_k = FK_ADD;
    esi = eax; /* 0x171C3A9D: mov esi, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x171C3A9F: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ebx; /* 0x171C3AA1: add esi, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x171C3AA3: add ecx, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ebx; /* 0x171C3AA5: add edx, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x14)); /* 0x171C3AA7: add eax, dword ptr [ebp - 0x14] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x10)); /* 0x171C3AAA: add edx, dword ptr [ebp - 0x10] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0xC)); /* 0x171C3AAD: add ecx, dword ptr [ebp - 0xc] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x8)); /* 0x171C3AB0: add esi, dword ptr [ebp - 8] */
    _flag_k = FK_ADD;
    ebx = MEM32(ebp + (-0x24)); /* 0x171C3AB3: mov ebx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x171C3AB6: sub ebx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x24)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x24)); /* 0x171C3AB8: add eax, dword ptr [ebp - 0x24] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(0x17025BF8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(0x17025BF8); /* 0x171C3ABB: add ebx, dword ptr [0x17025bf8] */
    _flag_k = FK_ADD;
    edi = MEM32(ebp + (-0x3C)); /* 0x171C3AC1: mov edi, dword ptr [ebp - 0x3c] */
    if (11u) _cf = (((ebx) >> 10) & 1u); /* 0x171C3AC4: sar ebx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 11u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 11u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x17025BF8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(0x17025BF8); /* 0x171C3AC7: add eax, dword ptr [0x17025bf8] */
    _flag_k = FK_ADD;
    if (11u) _cf = (((eax) >> 10) & 1u); /* 0x171C3ACD: sar eax, 0xb */
    if (11u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 11u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 11u);
    MEM32(edi + 0x80) = ebx; /* 0x171C3AD0: mov dword ptr [edi + 0x80], ebx */
    MEM32(edi + 0x60) = eax; /* 0x171C3AD6: mov dword ptr [edi + 0x60], eax */
    ebx = MEM32(ebp + (-0x20)); /* 0x171C3AD9: mov ebx, dword ptr [ebp - 0x20] */
    eax = MEM32(ebp + (-0x28)); /* 0x171C3ADC: mov eax, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edx; /* 0x171C3ADF: sub ebx, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x20)); /* 0x171C3AE1: add edx, dword ptr [ebp - 0x20] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x171C3AE4: sub eax, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x28)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x28)); /* 0x171C3AE6: add ecx, dword ptr [ebp - 0x28] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(0x17025BF8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(0x17025BF8); /* 0x171C3AE9: add ebx, dword ptr [0x17025bf8] */
    _flag_k = FK_ADD;
    if (11u) _cf = (((ebx) >> 10) & 1u); /* 0x171C3AEF: sar ebx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 11u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 11u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x17025BF8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(0x17025BF8); /* 0x171C3AF2: add eax, dword ptr [0x17025bf8] */
    _flag_k = FK_ADD;
    if (11u) _cf = (((eax) >> 10) & 1u); /* 0x171C3AF8: sar eax, 0xb */
    if (11u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 11u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 11u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(0x17025BF8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(0x17025BF8); /* 0x171C3AFB: add edx, dword ptr [0x17025bf8] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x17025BF8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(0x17025BF8); /* 0x171C3B01: add ecx, dword ptr [0x17025bf8] */
    _flag_k = FK_ADD;
    MEM32(edi + 0xA0) = ebx; /* 0x171C3B07: mov dword ptr [edi + 0xa0], ebx */
    if (11u) _cf = (((edx) >> 10) & 1u); /* 0x171C3B0D: sar edx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 11u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 11u);
    MEM32(edi + 0xC0) = eax; /* 0x171C3B10: mov dword ptr [edi + 0xc0], eax */
    if (11u) _cf = (((ecx) >> 10) & 1u); /* 0x171C3B16: sar ecx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 11u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 11u);
    MEM32(edi + 0x40) = edx; /* 0x171C3B19: mov dword ptr [edi + 0x40], edx */
    eax = MEM32(ebp + (-0x2C)); /* 0x171C3B1C: mov eax, dword ptr [ebp - 0x2c] */
    MEM32(edi + 0x20) = ecx; /* 0x171C3B1F: mov dword ptr [edi + 0x20], ecx */
    ebx = eax; /* 0x171C3B22: mov ebx, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x171C3B24: sub eax, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + esi; /* 0x171C3B26: add ebx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(0x17025BF8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(0x17025BF8); /* 0x171C3B28: add eax, dword ptr [0x17025bf8] */
    _flag_k = FK_ADD;
    if (11u) _cf = (((eax) >> 10) & 1u); /* 0x171C3B2E: sar eax, 0xb */
    if (11u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 11u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 11u);
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(0x17025BF8));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(0x17025BF8); /* 0x171C3B31: add ebx, dword ptr [0x17025bf8] */
    _flag_k = FK_ADD;
    if (11u) _cf = (((ebx) >> 10) & 1u); /* 0x171C3B37: sar ebx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 11u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 11u);
    MEM32(edi + 0xE0) = eax; /* 0x171C3B3A: mov dword ptr [edi + 0xe0], eax */
    MEM32(edi) = ebx; /* 0x171C3B40: mov dword ptr [edi], ebx */
    eax = MEM32(ebp + (-0x38)); /* 0x171C3B42: mov eax, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x44))); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x44)) = MEM32(ebp + (-0x44)) + 2; /* 0x171C3B45: add dword ptr [ebp - 0x44], 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3C))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x3C)) = MEM32(ebp + (-0x3C)) + 4; /* 0x171C3B49: add dword ptr [ebp - 0x3c], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x40))); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x40)) = MEM32(ebp + (-0x40)) + 2; /* 0x171C3B4D: add dword ptr [ebp - 0x40], 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171C3B51: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x38)) = eax; /* 0x171C3B52: mov dword ptr [ebp - 0x38], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171C392A; /* 0x171C3B55: jne 0x171c392a */
L_171C3B5B:
    esi = MEM32(ebp + 0x10); /* 0x171C3B5B: mov esi, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x38)) = 8; /* 0x171C3B5E: mov dword ptr [ebp - 0x38], 8 */
    MEM32(ebp + (-0x4)) = 0; /* 0x171C3B65: mov dword ptr [ebp - 4], 0 */
    MEM32(ebp + (-0x3C)) = esi; /* 0x171C3B6C: mov dword ptr [ebp - 0x3c], esi */
L_171C3B6F:
    esi = MEM32(ebp + (-0x3C)); /* 0x171C3B6F: mov esi, dword ptr [ebp - 0x3c] */
    edi = MEM32(ebp + 0x14); /* 0x171C3B72: mov edi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0x4)); /* 0x171C3B75: add edi, dword ptr [ebp - 4] */
    _flag_k = FK_ADD;
    edi = MEM32(edi); /* 0x171C3B78: mov edi, dword ptr [edi] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 4; /* 0x171C3B7A: add dword ptr [ebp - 4], 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + 0x18); /* 0x171C3B7E: add edi, dword ptr [ebp + 0x18] */
    _flag_k = FK_ADD;
    eax = MEM32(esi + 0x8); /* 0x171C3B81: mov eax, dword ptr [esi + 8] */
    ecx = MEM32(esi + 0x18); /* 0x171C3B84: mov ecx, dword ptr [esi + 0x18] */
    ebx = eax; /* 0x171C3B87: mov ebx, eax */
    edx = MEM32(edi); /* 0x171C3B89: mov edx, dword ptr [edi] */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(0x17025BD4)); /* 0x171C3B8B: imul eax, dword ptr [0x17025bd4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x171C3B92: add ebx, ecx */
    _flag_k = FK_ADD;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(0x17025BE4)); /* 0x171C3B94: imul ecx, dword ptr [0x17025be4] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(0x17025BD0)); /* 0x171C3B9B: imul ebx, dword ptr [0x17025bd0] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x171C3BA2: add ecx, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x171C3BA4: add eax, ebx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x34)) = ecx; /* 0x171C3BA6: mov dword ptr [ebp - 0x34], ecx */
    MEM32(ebp + (-0x30)) = eax; /* 0x171C3BA9: mov dword ptr [ebp - 0x30], eax */
    ecx = MEM32(esi + 0x10); /* 0x171C3BAC: mov ecx, dword ptr [esi + 0x10] */
    eax = MEM32(esi); /* 0x171C3BAF: mov eax, dword ptr [esi] */
    edx = ecx; /* 0x171C3BB1: mov edx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x171C3BB3: add ecx, eax */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x171C3BB5: sub eax, edx */
    _flag_k = FK_CMP;
    if (13u) _cf = (((ecx) >> 19) & 1u); /* 0x171C3BB7: shl ecx, 0xd */
    if (13u) { _flag_a = recomp_flags_pack((ecx << 13u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 13u; /* 0x171C3BB7: shl ecx, 0xd */
    if (13u) _cf = (((eax) >> 19) & 1u); /* 0x171C3BBA: shl eax, 0xd */
    if (13u) { _flag_a = recomp_flags_pack((eax << 13u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 13u; /* 0x171C3BBA: shl eax, 0xd */
    ebx = ecx; /* 0x171C3BBD: mov ebx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x30)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x30)); /* 0x171C3BBF: add ecx, dword ptr [ebp - 0x30] */
    _flag_k = FK_ADD;
    edx = eax; /* 0x171C3BC2: mov edx, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x34)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x34)); /* 0x171C3BC4: add eax, dword ptr [ebp - 0x34] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x2C)) = ecx; /* 0x171C3BC7: mov dword ptr [ebp - 0x2c], ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x30)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - MEM32(ebp + (-0x30)); /* 0x171C3BCA: sub ebx, dword ptr [ebp - 0x30] */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x28)) = eax; /* 0x171C3BCD: mov dword ptr [ebp - 0x28], eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x34)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ebp + (-0x34)); /* 0x171C3BD0: sub edx, dword ptr [ebp - 0x34] */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x24)) = ebx; /* 0x171C3BD3: mov dword ptr [ebp - 0x24], ebx */
    eax = MEM32(esi + 0x1C); /* 0x171C3BD6: mov eax, dword ptr [esi + 0x1c] */
    MEM32(ebp + (-0x20)) = edx; /* 0x171C3BD9: mov dword ptr [ebp - 0x20], edx */
    ecx = MEM32(esi + 0xC); /* 0x171C3BDC: mov ecx, dword ptr [esi + 0xc] */
    ebx = MEM32(esi + 0x4); /* 0x171C3BDF: mov ebx, dword ptr [esi + 4] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x171C3BE2: mov dword ptr [ebp - 0x1c], eax */
    MEM32(ebp + (-0x34)) = ecx; /* 0x171C3BE5: mov dword ptr [ebp - 0x34], ecx */
    eax = MEM32(esi + 0x14); /* 0x171C3BE8: mov eax, dword ptr [esi + 0x14] */
    MEM32(ebp + (-0x30)) = ebx; /* 0x171C3BEB: mov dword ptr [ebp - 0x30], ebx */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(0x17025BF4)); /* 0x171C3BEE: imul ecx, dword ptr [0x17025bf4] */
    edx = MEM32(ebp + (-0x1C)); /* 0x171C3BF5: mov edx, dword ptr [ebp - 0x1c] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(0x17025BE0)); /* 0x171C3BF8: imul ebx, dword ptr [0x17025be0] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(0x17025BC8)); /* 0x171C3BFF: imul edx, dword ptr [0x17025bc8] */
    MEM32(ebp + (-0x18)) = eax; /* 0x171C3C06: mov dword ptr [ebp - 0x18], eax */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(0x17025BEC)); /* 0x171C3C09: imul eax, dword ptr [0x17025bec] */
    MEM32(ebp + (-0x14)) = edx; /* 0x171C3C10: mov dword ptr [ebp - 0x14], edx */
    MEM32(ebp + (-0x10)) = eax; /* 0x171C3C13: mov dword ptr [ebp - 0x10], eax */
    MEM32(ebp + (-0xC)) = ecx; /* 0x171C3C16: mov dword ptr [ebp - 0xc], ecx */
    MEM32(ebp + (-0x8)) = ebx; /* 0x171C3C19: mov dword ptr [ebp - 8], ebx */
    eax = MEM32(ebp + (-0x1C)); /* 0x171C3C1C: mov eax, dword ptr [ebp - 0x1c] */
    ebx = MEM32(ebp + (-0x18)); /* 0x171C3C1F: mov ebx, dword ptr [ebp - 0x18] */
    ecx = eax; /* 0x171C3C22: mov ecx, eax */
    edx = ebx; /* 0x171C3C24: mov edx, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x30)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x30)); /* 0x171C3C26: add eax, dword ptr [ebp - 0x30] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x34)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x34)); /* 0x171C3C29: add edx, dword ptr [ebp - 0x34] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x30)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + (-0x30)); /* 0x171C3C2C: add ebx, dword ptr [ebp - 0x30] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x34)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x34)); /* 0x171C3C2F: add ecx, dword ptr [ebp - 0x34] */
    _flag_k = FK_ADD;
    esi = ecx; /* 0x171C3C32: mov esi, ecx */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(0x17025BD8)); /* 0x171C3C34: imul eax, dword ptr [0x17025bd8] */
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(0x17025BF0)); /* 0x171C3C3B: imul edx, dword ptr [0x17025bf0] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ebx; /* 0x171C3C42: add esi, ebx */
    _flag_k = FK_ADD;
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(0x17025BDC)); /* 0x171C3C44: imul esi, dword ptr [0x17025bdc] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(0x17025BE8)); /* 0x171C3C4B: imul ecx, dword ptr [0x17025be8] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(0x17025BCC)); /* 0x171C3C52: imul ebx, dword ptr [0x17025bcc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x171C3C59: add ecx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + esi; /* 0x171C3C5B: add ebx, esi */
    _flag_k = FK_ADD;
    esi = eax; /* 0x171C3C5D: mov esi, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x171C3C5F: add eax, ecx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ebx; /* 0x171C3C61: add esi, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x171C3C63: add ecx, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ebx; /* 0x171C3C65: add edx, ebx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + (-0x14)); /* 0x171C3C67: add eax, dword ptr [ebp - 0x14] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x10)); /* 0x171C3C6A: add edx, dword ptr [ebp - 0x10] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0xC)); /* 0x171C3C6D: add ecx, dword ptr [ebp - 0xc] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x8)); /* 0x171C3C70: add esi, dword ptr [ebp - 8] */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = eax; /* 0x171C3C73: mov dword ptr [ebp - 0x1c], eax */
    MEM32(ebp + (-0x18)) = edx; /* 0x171C3C76: mov dword ptr [ebp - 0x18], edx */
    MEM32(ebp + (-0x34)) = ecx; /* 0x171C3C79: mov dword ptr [ebp - 0x34], ecx */
    MEM32(ebp + (-0x30)) = esi; /* 0x171C3C7C: mov dword ptr [ebp - 0x30], esi */
    ebx = MEM32(ebp + (-0x24)); /* 0x171C3C7F: mov ebx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + (-0x1C)); /* 0x171C3C82: add ebx, dword ptr [ebp - 0x1c] */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x2C)); /* 0x171C3C85: mov ecx, dword ptr [ebp - 0x2c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x30)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x30)); /* 0x171C3C88: sub ecx, dword ptr [ebp - 0x30] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(0x17025BFC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(0x17025BFC); /* 0x171C3C8B: add ebx, dword ptr [0x17025bfc] */
    _flag_k = FK_ADD;
    if (18u) _cf = (((ebx) >> 17) & 1u); /* 0x171C3C91: sar ebx, 0x12 */
    if (18u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 18u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 18u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x17025BFC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(0x17025BFC); /* 0x171C3C94: add ecx, dword ptr [0x17025bfc] */
    _flag_k = FK_ADD;
    if (18u) _cf = (((ecx) >> 17) & 1u); /* 0x171C3C9A: sar ecx, 0x12 */
    if (18u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 18u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 18u);
    esi = MEM32(ebp + 0x1C); /* 0x171C3C9D: mov esi, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(0x17025C00));
    ebx = ebx & MEM32(0x17025C00); /* 0x171C3CA0: and ebx, dword ptr [0x17025c00] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x17025C00));
    ecx = ecx & MEM32(0x17025C00); /* 0x171C3CA6: and ecx, dword ptr [0x17025c00] */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, MEM8(esi + ebx)); /* 0x171C3CAC: mov al, byte ptr [esi + ebx] */
    SET_LO8(edx, MEM8(esi + ecx)); /* 0x171C3CAF: mov dl, byte ptr [esi + ecx] */
    ebx = MEM32(ebp + (-0x20)); /* 0x171C3CB2: mov ebx, dword ptr [ebp - 0x20] */
    ecx = MEM32(ebp + (-0x28)); /* 0x171C3CB5: mov ecx, dword ptr [ebp - 0x28] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + (-0x18)); /* 0x171C3CB8: add ebx, dword ptr [ebp - 0x18] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x34)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x34)); /* 0x171C3CBB: sub ecx, dword ptr [ebp - 0x34] */
    _flag_k = FK_CMP;
    if (8u) _cf = (((eax) >> 24) & 1u); /* 0x171C3CBE: shl eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 8u; /* 0x171C3CBE: shl eax, 8 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(0x17025BFC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(0x17025BFC); /* 0x171C3CC1: add ebx, dword ptr [0x17025bfc] */
    _flag_k = FK_ADD;
    if (8u) _cf = (((edx) >> 24) & 1u); /* 0x171C3CC7: shl edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 8u; /* 0x171C3CC7: shl edx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x17025BFC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(0x17025BFC); /* 0x171C3CCA: add ecx, dword ptr [0x17025bfc] */
    _flag_k = FK_ADD;
    if (18u) _cf = (((ebx) >> 17) & 1u); /* 0x171C3CD0: sar ebx, 0x12 */
    if (18u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 18u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 18u);
    if (18u) _cf = (((ecx) >> 17) & 1u); /* 0x171C3CD3: sar ecx, 0x12 */
    if (18u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 18u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 18u);
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(0x17025C00));
    ebx = ebx & MEM32(0x17025C00); /* 0x171C3CD6: and ebx, dword ptr [0x17025c00] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x17025C00));
    ecx = ecx & MEM32(0x17025C00); /* 0x171C3CDC: and ecx, dword ptr [0x17025c00] */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, MEM8(esi + ebx)); /* 0x171C3CE2: mov al, byte ptr [esi + ebx] */
    SET_LO8(edx, MEM8(esi + ecx)); /* 0x171C3CE5: mov dl, byte ptr [esi + ecx] */
    ebx = MEM32(ebp + (-0x28)); /* 0x171C3CE8: mov ebx, dword ptr [ebp - 0x28] */
    ecx = MEM32(ebp + (-0x20)); /* 0x171C3CEB: mov ecx, dword ptr [ebp - 0x20] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x34)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + (-0x34)); /* 0x171C3CEE: add ebx, dword ptr [ebp - 0x34] */
    _flag_k = FK_ADD;
    if (8u) _cf = (((eax) >> 24) & 1u); /* 0x171C3CF1: shl eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 8u; /* 0x171C3CF1: shl eax, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x18)); /* 0x171C3CF4: sub ecx, dword ptr [ebp - 0x18] */
    _flag_k = FK_CMP;
    if (8u) _cf = (((edx) >> 24) & 1u); /* 0x171C3CF7: shl edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 8u; /* 0x171C3CF7: shl edx, 8 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(0x17025BFC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(0x17025BFC); /* 0x171C3CFA: add ebx, dword ptr [0x17025bfc] */
    _flag_k = FK_ADD;
    if (18u) _cf = (((ebx) >> 17) & 1u); /* 0x171C3D00: sar ebx, 0x12 */
    if (18u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 18u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 18u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x17025BFC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(0x17025BFC); /* 0x171C3D03: add ecx, dword ptr [0x17025bfc] */
    _flag_k = FK_ADD;
    if (18u) _cf = (((ecx) >> 17) & 1u); /* 0x171C3D09: sar ecx, 0x12 */
    if (18u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 18u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 18u);
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(0x17025C00));
    ebx = ebx & MEM32(0x17025C00); /* 0x171C3D0C: and ebx, dword ptr [0x17025c00] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x17025C00));
    ecx = ecx & MEM32(0x17025C00); /* 0x171C3D12: and ecx, dword ptr [0x17025c00] */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, MEM8(esi + ebx)); /* 0x171C3D18: mov al, byte ptr [esi + ebx] */
    SET_LO8(edx, MEM8(esi + ecx)); /* 0x171C3D1B: mov dl, byte ptr [esi + ecx] */
    ebx = MEM32(ebp + (-0x2C)); /* 0x171C3D1E: mov ebx, dword ptr [ebp - 0x2c] */
    ecx = MEM32(ebp + (-0x24)); /* 0x171C3D21: mov ecx, dword ptr [ebp - 0x24] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x30)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + (-0x30)); /* 0x171C3D24: add ebx, dword ptr [ebp - 0x30] */
    _flag_k = FK_ADD;
    if (8u) _cf = (((eax) >> 24) & 1u); /* 0x171C3D27: shl eax, 8 */
    if (8u) { _flag_a = recomp_flags_pack((eax << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 8u; /* 0x171C3D27: shl eax, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x1C)); /* 0x171C3D2A: sub ecx, dword ptr [ebp - 0x1c] */
    _flag_k = FK_CMP;
    if (8u) _cf = (((edx) >> 24) & 1u); /* 0x171C3D2D: shl edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack((edx << 8u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 8u; /* 0x171C3D2D: shl edx, 8 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(0x17025BFC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(0x17025BFC); /* 0x171C3D30: add ebx, dword ptr [0x17025bfc] */
    _flag_k = FK_ADD;
    if (18u) _cf = (((ebx) >> 17) & 1u); /* 0x171C3D36: sar ebx, 0x12 */
    if (18u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 18u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 18u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x17025BFC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(0x17025BFC); /* 0x171C3D39: add ecx, dword ptr [0x17025bfc] */
    _flag_k = FK_ADD;
    if (18u) _cf = (((ecx) >> 17) & 1u); /* 0x171C3D3F: sar ecx, 0x12 */
    if (18u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 18u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 18u);
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(0x17025C00));
    ebx = ebx & MEM32(0x17025C00); /* 0x171C3D42: and ebx, dword ptr [0x17025c00] */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(0x17025C00));
    ecx = ecx & MEM32(0x17025C00); /* 0x171C3D48: and ecx, dword ptr [0x17025c00] */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, MEM8(esi + ebx)); /* 0x171C3D4E: mov al, byte ptr [esi + ebx] */
    SET_LO8(edx, MEM8(esi + ecx)); /* 0x171C3D51: mov dl, byte ptr [esi + ecx] */
    MEM32(edi) = eax; /* 0x171C3D54: mov dword ptr [edi], eax */
    MEM32(edi + 0x4) = edx; /* 0x171C3D56: mov dword ptr [edi + 4], edx */
    eax = MEM32(ebp + (-0x38)); /* 0x171C3D59: mov eax, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x3C))); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x3C)) = MEM32(ebp + (-0x3C)) + 0x20u; /* 0x171C3D5C: add dword ptr [ebp - 0x3c], 0x20 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171C3D60: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x38)) = eax; /* 0x171C3D61: mov dword ptr [ebp - 0x38], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171C3B6F; /* 0x171C3D64: jne 0x171c3b6f */
L_171C3D6A:
    edi = POP32_VAL(esp); /* 0x171C3D6A: pop edi */
    esi = POP32_VAL(esp); /* 0x171C3D6B: pop esi */
    ebx = POP32_VAL(esp); /* 0x171C3D6C: pop ebx */
    esp = ebp; /* 0x171C3D6D: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171C3D6F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x171C3D70: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_171C3D80(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C3D80u);

L_171C3D80:
    edi = edi; /* 0x171C3D80: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C3D82: push ebp */
    ebp = esp; /* 0x171C3D83: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x120u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x120u; /* 0x171C3D85: sub esp, 0x120 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x171C3D8B: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x148); /* 0x171C3D8E: mov ecx, dword ptr [eax + 0x148] */
    edx = MEM32(ebp + 0x18); /* 0x171C3D94: mov edx, dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + 0x14); /* 0x171C3D97: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x80u; /* 0x171C3D9A: add ecx, 0x80 */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x171C3DA0: push ecx */
    PUSH32(esp, edx); /* 0x171C3DA1: push edx */
    edx = MEM32(ebp + 0xC); /* 0x171C3DA2: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x171C3DA5: push eax */
    eax = MEM32(edx + 0x50); /* 0x171C3DA6: mov eax, dword ptr [edx + 0x50] */
    ecx = ebp + (-0x120); /* 0x171C3DA9: lea ecx, [ebp - 0x120] */
    PUSH32(esp, ecx); /* 0x171C3DAF: push ecx */
    ecx = MEM32(ebp + 0x10); /* 0x171C3DB0: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x171C3DB3: push eax */
    PUSH32(esp, ecx); /* 0x171C3DB4: push ecx */
    RECOMP_CALL(sub_171C38F0); /* 0x171C3DB5: call 0x171c38f0 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x171C3DBA: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171C3DBC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x171C3DBD: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_171C3DD0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C3DD0u);

L_171C3DD0:
    edi = edi; /* 0x171C3DD0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C3DD2: push ebp */
    ebp = esp; /* 0x171C3DD3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xFCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xFCu; /* 0x171C3DD5: sub esp, 0xfc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x171C3DDB: push ebx */
    PUSH32(esp, esi); /* 0x171C3DDC: push esi */
    PUSH32(esp, edi); /* 0x171C3DDD: push edi */
    esi = MEM32(ebp + 0x8); /* 0x171C3DDE: mov esi, dword ptr [ebp + 8] */
    edi = MEM32(ebp + 0xC); /* 0x171C3DE1: mov edi, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x14)) = esi; /* 0x171C3DE4: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0xC)) = edi; /* 0x171C3DE7: mov dword ptr [ebp - 0xc], edi */
    esi = MEM32(ebp + 0x10); /* 0x171C3DEA: mov esi, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x4)) = 2; /* 0x171C3DED: mov dword ptr [ebp - 4], 2 */
    MEM32(ebp + (-0x10)) = esi; /* 0x171C3DF4: mov dword ptr [ebp - 0x10], esi */
L_171C3DF7:
    esi = MEM32(ebp + (-0x14)); /* 0x171C3DF7: mov esi, dword ptr [ebp - 0x14] */
    edi = MEM32(ebp + (-0xC)); /* 0x171C3DFA: mov edi, dword ptr [ebp - 0xc] */
    _mm[0] = MEM64(esi + 0x20); /* 0x171C3DFD: movq mm0, qword ptr [esi + 0x20] */
    _mm[1] = MEM64(edi + 0x20); /* 0x171C3E01: movq mm1, qword ptr [edi + 0x20] */
    _mm[2] = MEM64(esi + 0x60); /* 0x171C3E05: movq mm2, qword ptr [esi + 0x60] */
    _mm[0] = mmx_pmullw(_mm[0], _mm[1]); /* 0x171C3E09: pmullw mm0, mm1 */
    _mm[3] = MEM64(edi + 0x60); /* 0x171C3E0C: movq mm3, qword ptr [edi + 0x60] */
    _mm[6] = MEM64(0x17025C20); /* 0x171C3E10: movq mm6, qword ptr [0x17025c20] */
    _mm[2] = mmx_pmullw(_mm[2], _mm[3]); /* 0x171C3E17: pmullw mm2, mm3 */
    _mm[7] = MEM64(0x17025C40); /* 0x171C3E1A: movq mm7, qword ptr [0x17025c40] */
    _mm[4] = _mm[0]; /* 0x171C3E21: movq mm4, mm0 */
    _mm[4] = mmx_pmaddwd(_mm[4], _mm[6]); /* 0x171C3E24: pmaddwd mm4, mm6 */
    _mm[5] = _mm[0]; /* 0x171C3E27: movq mm5, mm0 */
    _mm[3] = _mm[2]; /* 0x171C3E2A: movq mm3, mm2 */
    _mm[5] = mmx_psrlq(_mm[5], 16); /* 0x171C3E2D: psrlq mm5, 0x10 */
    _mm[1] = MEM64(0x17025C18); /* 0x171C3E31: movq mm1, qword ptr [0x17025c18] */
    _mm[5] = mmx_pmaddwd(_mm[5], _mm[6]); /* 0x171C3E38: pmaddwd mm5, mm6 */
    _mm[3] = mmx_psrlq(_mm[3], 16); /* 0x171C3E3B: psrlq mm3, 0x10 */
    _mm[0] = mmx_paddw(_mm[0], _mm[2]); /* 0x171C3E3F: paddw mm0, mm2 */
    _mm[2] = mmx_pmaddwd(_mm[2], _mm[7]); /* 0x171C3E42: pmaddwd mm2, mm7 */
    _mm[6] = _mm[0]; /* 0x171C3E45: movq mm6, mm0 */
    _mm[6] = mmx_psrlq(_mm[6], 16); /* 0x171C3E48: psrlq mm6, 0x10 */
    _mm[3] = mmx_pmaddwd(_mm[3], _mm[7]); /* 0x171C3E4C: pmaddwd mm3, mm7 */
    _mm[7] = MEM64(0x17025C68); /* 0x171C3E4F: movq mm7, qword ptr [0x17025c68] */
    _mm[0] = mmx_pmaddwd(_mm[0], _mm[1]); /* 0x171C3E56: pmaddwd mm0, mm1 */
    _mm[6] = mmx_pmaddwd(_mm[6], _mm[1]); /* 0x171C3E59: pmaddwd mm6, mm1 */
    _mm[2] = (_mm[2] ^ _mm[7]); /* 0x171C3E5C: pxor mm2, mm7 */
    _mm[1] = MEM64(0x17025C70); /* 0x171C3E5F: movq mm1, qword ptr [0x17025c70] */
    _mm[3] = (_mm[3] ^ _mm[7]); /* 0x171C3E66: pxor mm3, mm7 */
    _mm[2] = mmx_paddd(_mm[2], _mm[1]); /* 0x171C3E69: paddd mm2, mm1 */
    _mm[3] = mmx_paddd(_mm[3], _mm[1]); /* 0x171C3E6C: paddd mm3, mm1 */
    _mm[2] = mmx_paddd(_mm[2], _mm[0]); /* 0x171C3E6F: paddd mm2, mm0 */
    _mm[4] = mmx_paddd(_mm[4], _mm[0]); /* 0x171C3E72: paddd mm4, mm0 */
    _mm[0] = MEM64(esi); /* 0x171C3E75: movq mm0, qword ptr [esi] */
    _mm[3] = mmx_paddd(_mm[3], _mm[6]); /* 0x171C3E78: paddd mm3, mm6 */
    _mm[1] = MEM64(edi); /* 0x171C3E7B: movq mm1, qword ptr [edi] */
    _mm[5] = mmx_paddd(_mm[5], _mm[6]); /* 0x171C3E7E: paddd mm5, mm6 */
    _mm[6] = MEM64(esi + 0x40); /* 0x171C3E81: movq mm6, qword ptr [esi + 0x40] */
    _mm[0] = mmx_pmullw(_mm[0], _mm[1]); /* 0x171C3E85: pmullw mm0, mm1 */
    _mm[7] = MEM64(edi + 0x40); /* 0x171C3E88: movq mm7, qword ptr [edi + 0x40] */
    /* nop */ /* 0x171C3E8C: nop  */
    MEM64(ebp + (-0xFC)) = _mm[2]; /* 0x171C3E8D: movq qword ptr [ebp - 0xfc], mm2 */
    _mm[6] = mmx_pmullw(_mm[6], _mm[7]); /* 0x171C3E94: pmullw mm6, mm7 */
    _mm[7] = MEM64(0x17025C78); /* 0x171C3E97: movq mm7, qword ptr [0x17025c78] */
    _mm[1] = _mm[0]; /* 0x171C3E9E: movq mm1, mm0 */
    _mm[0] = mmx_paddw(_mm[0], _mm[6]); /* 0x171C3EA1: paddw mm0, mm6 */
    /* nop */ /* 0x171C3EA4: nop  */
    _mm[1] = mmx_psubw(_mm[1], _mm[6]); /* 0x171C3EA5: psubw mm1, mm6 */
    _mm[6] = _mm[0]; /* 0x171C3EA8: movq mm6, mm0 */
    _mm[0] = mmx_pmaddwd(_mm[0], _mm[7]); /* 0x171C3EAB: pmaddwd mm0, mm7 */
    _mm[6] = mmx_psrlq(_mm[6], 16); /* 0x171C3EAE: psrlq mm6, 0x10 */
    _mm[6] = mmx_pmaddwd(_mm[6], _mm[7]); /* 0x171C3EB2: pmaddwd mm6, mm7 */
    _mm[2] = _mm[1]; /* 0x171C3EB5: movq mm2, mm1 */
    _mm[1] = mmx_pmaddwd(_mm[1], _mm[7]); /* 0x171C3EB8: pmaddwd mm1, mm7 */
    _mm[2] = mmx_psrlq(_mm[2], 16); /* 0x171C3EBB: psrlq mm2, 0x10 */
    _mm[2] = mmx_pmaddwd(_mm[2], _mm[7]); /* 0x171C3EBF: pmaddwd mm2, mm7 */
    _mm[0] = mmx_pslld(_mm[0], 13); /* 0x171C3EC2: pslld mm0, 0xd */
    _mm[7] = _mm[4]; /* 0x171C3EC6: movq mm7, mm4 */
    _mm[6] = mmx_pslld(_mm[6], 13); /* 0x171C3EC9: pslld mm6, 0xd */
    _mm[4] = mmx_paddd(_mm[4], _mm[0]); /* 0x171C3ECD: paddd mm4, mm0 */
    _mm[0] = mmx_psubd(_mm[0], _mm[7]); /* 0x171C3ED0: psubd mm0, mm7 */
    _mm[7] = _mm[5]; /* 0x171C3ED3: movq mm7, mm5 */
    _mm[2] = mmx_pslld(_mm[2], 13); /* 0x171C3ED6: pslld mm2, 0xd */
    MEM64(ebp + (-0xEC)) = _mm[0]; /* 0x171C3EDA: movq qword ptr [ebp - 0xec], mm0 */
    _mm[5] = mmx_paddd(_mm[5], _mm[6]); /* 0x171C3EE1: paddd mm5, mm6 */
    _mm[0] = MEM64(ebp + (-0xFC)); /* 0x171C3EE4: movq mm0, qword ptr [ebp - 0xfc] */
    _mm[6] = mmx_psubd(_mm[6], _mm[7]); /* 0x171C3EEB: psubd mm6, mm7 */
    MEM64(ebp + (-0xDC)) = _mm[5]; /* 0x171C3EEE: movq qword ptr [ebp - 0xdc], mm5 */
    _mm[7] = _mm[3]; /* 0x171C3EF5: movq mm7, mm3 */
    MEM64(ebp + (-0xCC)) = _mm[6]; /* 0x171C3EF8: movq qword ptr [ebp - 0xcc], mm6 */
    _mm[3] = mmx_paddd(_mm[3], _mm[2]); /* 0x171C3EFF: paddd mm3, mm2 */
    MEM64(ebp + (-0xBC)) = _mm[4]; /* 0x171C3F02: movq qword ptr [ebp - 0xbc], mm4 */
    _mm[1] = mmx_pslld(_mm[1], 13); /* 0x171C3F09: pslld mm1, 0xd */
    MEM64(ebp + (-0xAC)) = _mm[3]; /* 0x171C3F0D: movq qword ptr [ebp - 0xac], mm3 */
    _mm[2] = mmx_psubd(_mm[2], _mm[7]); /* 0x171C3F14: psubd mm2, mm7 */
    _mm[6] = MEM64(esi + 0x10); /* 0x171C3F17: movq mm6, qword ptr [esi + 0x10] */
    _mm[3] = _mm[0]; /* 0x171C3F1B: movq mm3, mm0 */
    MEM64(ebp + (-0x9C)) = _mm[2]; /* 0x171C3F1E: movq qword ptr [ebp - 0x9c], mm2 */
    _mm[0] = mmx_paddd(_mm[0], _mm[1]); /* 0x171C3F25: paddd mm0, mm1 */
    _mm[7] = MEM64(edi + 0x10); /* 0x171C3F28: movq mm7, qword ptr [edi + 0x10] */
    MEM64(ebp + (-0x8C)) = _mm[0]; /* 0x171C3F2C: movq qword ptr [ebp - 0x8c], mm0 */
    _mm[1] = mmx_psubd(_mm[1], _mm[3]); /* 0x171C3F33: psubd mm1, mm3 */
    _mm[0] = MEM64(esi + 0x70); /* 0x171C3F36: movq mm0, qword ptr [esi + 0x70] */
    _mm[6] = mmx_pmullw(_mm[6], _mm[7]); /* 0x171C3F3A: pmullw mm6, mm7 */
    MEM64(ebp + (-0x7C)) = _mm[1]; /* 0x171C3F3D: movq qword ptr [ebp - 0x7c], mm1 */
    _mm[1] = MEM64(edi + 0x70); /* 0x171C3F41: movq mm1, qword ptr [edi + 0x70] */
    _mm[2] = MEM64(esi + 0x50); /* 0x171C3F45: movq mm2, qword ptr [esi + 0x50] */
    _mm[0] = mmx_pmullw(_mm[0], _mm[1]); /* 0x171C3F49: pmullw mm0, mm1 */
    _mm[3] = MEM64(edi + 0x50); /* 0x171C3F4C: movq mm3, qword ptr [edi + 0x50] */
    _mm[4] = MEM64(esi + 0x30); /* 0x171C3F50: movq mm4, qword ptr [esi + 0x30] */
    _mm[2] = mmx_pmullw(_mm[2], _mm[3]); /* 0x171C3F54: pmullw mm2, mm3 */
    _mm[5] = MEM64(edi + 0x30); /* 0x171C3F57: movq mm5, qword ptr [edi + 0x30] */
    _mm[1] = _mm[0]; /* 0x171C3F5B: movq mm1, mm0 */
    MEM64(ebp + (-0x6C)) = _mm[6]; /* 0x171C3F5E: movq qword ptr [ebp - 0x6c], mm6 */
    _mm[4] = mmx_pmullw(_mm[4], _mm[5]); /* 0x171C3F62: pmullw mm4, mm5 */
    MEM64(ebp + (-0x5C)) = _mm[0]; /* 0x171C3F65: movq qword ptr [ebp - 0x5c], mm0 */
    _mm[0] = mmx_paddw(_mm[0], _mm[6]); /* 0x171C3F69: paddw mm0, mm6 */
    MEM64(ebp + (-0x4C)) = _mm[2]; /* 0x171C3F6C: movq qword ptr [ebp - 0x4c], mm2 */
    _mm[3] = _mm[2]; /* 0x171C3F70: movq mm3, mm2 */
    MEM64(ebp + (-0x3C)) = _mm[4]; /* 0x171C3F73: movq qword ptr [ebp - 0x3c], mm4 */
    _mm[2] = mmx_paddw(_mm[2], _mm[4]); /* 0x171C3F77: paddw mm2, mm4 */
    _mm[1] = mmx_paddw(_mm[1], _mm[4]); /* 0x171C3F7A: paddw mm1, mm4 */
    _mm[4] = MEM64(0x17025C30); /* 0x171C3F7D: movq mm4, qword ptr [0x17025c30] */
    _mm[3] = mmx_paddw(_mm[3], _mm[6]); /* 0x171C3F84: paddw mm3, mm6 */
    _mm[5] = _mm[1]; /* 0x171C3F87: movq mm5, mm1 */
    _mm[7] = _mm[0]; /* 0x171C3F8A: movq mm7, mm0 */
    _mm[7] = mmx_psrlq(_mm[7], 16); /* 0x171C3F8D: psrlq mm7, 0x10 */
    _mm[5] = mmx_paddw(_mm[5], _mm[3]); /* 0x171C3F91: paddw mm5, mm3 */
    _mm[6] = _mm[5]; /* 0x171C3F94: movq mm6, mm5 */
    _mm[5] = mmx_pmaddwd(_mm[5], _mm[4]); /* 0x171C3F97: pmaddwd mm5, mm4 */
    _mm[0] = mmx_pmaddwd(_mm[0], MEM64(0x17025C28)); /* 0x171C3F9A: pmaddwd mm0, qword ptr [0x17025c28] */
    _mm[6] = mmx_psrlq(_mm[6], 16); /* 0x171C3FA1: psrlq mm6, 0x10 */
    _mm[6] = mmx_pmaddwd(_mm[6], _mm[4]); /* 0x171C3FA5: pmaddwd mm6, mm4 */
    _mm[4] = _mm[2]; /* 0x171C3FA8: movq mm4, mm2 */
    MEM64(ebp + (-0x2C)) = _mm[5]; /* 0x171C3FAB: movq qword ptr [ebp - 0x2c], mm5 */
    _mm[4] = mmx_psrlq(_mm[4], 16); /* 0x171C3FAF: psrlq mm4, 0x10 */
    _mm[0] = (_mm[0] ^ MEM64(0x17025C68)); /* 0x171C3FB3: pxor mm0, qword ptr [0x17025c68] */
    _mm[5] = _mm[1]; /* 0x171C3FBA: movq mm5, mm1 */
    MEM64(ebp + (-0x24)) = _mm[6]; /* 0x171C3FBD: movq qword ptr [ebp - 0x24], mm6 */
    _mm[5] = mmx_psrlq(_mm[5], 16); /* 0x171C3FC1: psrlq mm5, 0x10 */
    _mm[6] = MEM64(0x17025C58); /* 0x171C3FC5: movq mm6, qword ptr [0x17025c58] */
    /* nop */ /* 0x171C3FCC: nop  */
    _mm[0] = mmx_paddd(_mm[0], MEM64(0x17025C70)); /* 0x171C3FCD: paddd mm0, qword ptr [0x17025c70] */
    _mm[2] = mmx_pmaddwd(_mm[2], _mm[6]); /* 0x171C3FD4: pmaddwd mm2, mm6 */
    MEM64(ebp + (-0xC4)) = _mm[0]; /* 0x171C3FD7: movq qword ptr [ebp - 0xc4], mm0 */
    _mm[4] = mmx_pmaddwd(_mm[4], _mm[6]); /* 0x171C3FDE: pmaddwd mm4, mm6 */
    _mm[7] = mmx_pmaddwd(_mm[7], MEM64(0x17025C28)); /* 0x171C3FE1: pmaddwd mm7, qword ptr [0x17025c28] */
    _mm[0] = _mm[3]; /* 0x171C3FE8: movq mm0, mm3 */
    _mm[6] = MEM64(0x17025C48); /* 0x171C3FEB: movq mm6, qword ptr [0x17025c48] */
    _mm[0] = mmx_psrlq(_mm[0], 16); /* 0x171C3FF2: psrlq mm0, 0x10 */
    _mm[2] = (_mm[2] ^ MEM64(0x17025C68)); /* 0x171C3FF6: pxor mm2, qword ptr [0x17025c68] */
    _mm[1] = mmx_pmaddwd(_mm[1], _mm[6]); /* 0x171C3FFD: pmaddwd mm1, mm6 */
    _mm[2] = mmx_paddd(_mm[2], MEM64(0x17025C70)); /* 0x171C4000: paddd mm2, qword ptr [0x17025c70] */
    _mm[5] = mmx_pmaddwd(_mm[5], _mm[6]); /* 0x171C4007: pmaddwd mm5, mm6 */
    _mm[6] = MEM64(0x17025C10); /* 0x171C400A: movq mm6, qword ptr [0x17025c10] */
    /* nop */ /* 0x171C4011: nop  */
    _mm[4] = (_mm[4] ^ MEM64(0x17025C68)); /* 0x171C4012: pxor mm4, qword ptr [0x17025c68] */
    _mm[3] = mmx_pmaddwd(_mm[3], _mm[6]); /* 0x171C4019: pmaddwd mm3, mm6 */
    _mm[4] = mmx_paddd(_mm[4], MEM64(0x17025C70)); /* 0x171C401C: paddd mm4, qword ptr [0x17025c70] */
    _mm[0] = mmx_pmaddwd(_mm[0], _mm[6]); /* 0x171C4023: pmaddwd mm0, mm6 */
    _mm[6] = MEM64(0x17025C68); /* 0x171C4026: movq mm6, qword ptr [0x17025c68] */
    /* nop */ /* 0x171C402D: nop  */
    _mm[1] = (_mm[1] ^ _mm[6]); /* 0x171C402E: pxor mm1, mm6 */
    _mm[7] = (_mm[7] ^ _mm[6]); /* 0x171C4031: pxor mm7, mm6 */
    _mm[1] = mmx_paddd(_mm[1], MEM64(0x17025C70)); /* 0x171C4034: paddd mm1, qword ptr [0x17025c70] */
    _mm[5] = (_mm[5] ^ _mm[6]); /* 0x171C403B: pxor mm5, mm6 */
    _mm[7] = mmx_paddd(_mm[7], MEM64(0x17025C70)); /* 0x171C403E: paddd mm7, qword ptr [0x17025c70] */
    _mm[3] = (_mm[3] ^ _mm[6]); /* 0x171C4045: pxor mm3, mm6 */
    _mm[5] = mmx_paddd(_mm[5], MEM64(0x17025C70)); /* 0x171C4048: paddd mm5, qword ptr [0x17025c70] */
    /* nop */ /* 0x171C404F: nop  */
    MEM64(ebp + (-0x84)) = _mm[7]; /* 0x171C4050: movq qword ptr [ebp - 0x84], mm7 */
    _mm[0] = (_mm[0] ^ _mm[6]); /* 0x171C4057: pxor mm0, mm6 */
    _mm[1] = mmx_paddd(_mm[1], MEM64(ebp + (-0x2C))); /* 0x171C405A: paddd mm1, qword ptr [ebp - 0x2c] */
    /* nop */ /* 0x171C405E: nop  */
    _mm[6] = MEM64(ebp + (-0xC4)); /* 0x171C405F: movq mm6, qword ptr [ebp - 0xc4] */
    /* nop */ /* 0x171C4066: nop  */
    _mm[5] = mmx_paddd(_mm[5], MEM64(ebp + (-0x24))); /* 0x171C4067: paddd mm5, qword ptr [ebp - 0x24] */
    _mm[6] = mmx_paddd(_mm[6], _mm[1]); /* 0x171C406B: paddd mm6, mm1 */
    _mm[3] = mmx_paddd(_mm[3], MEM64(0x17025C70)); /* 0x171C406E: paddd mm3, qword ptr [0x17025c70] */
    _mm[1] = mmx_paddd(_mm[1], _mm[2]); /* 0x171C4075: paddd mm1, mm2 */
    _mm[0] = mmx_paddd(_mm[0], MEM64(0x17025C70)); /* 0x171C4078: paddd mm0, qword ptr [0x17025c70] */
    _mm[7] = mmx_paddd(_mm[7], _mm[5]); /* 0x171C407F: paddd mm7, mm5 */
    _mm[3] = mmx_paddd(_mm[3], MEM64(ebp + (-0x2C))); /* 0x171C4082: paddd mm3, qword ptr [ebp - 0x2c] */
    _mm[5] = mmx_paddd(_mm[5], _mm[4]); /* 0x171C4086: paddd mm5, mm4 */
    _mm[0] = mmx_paddd(_mm[0], MEM64(ebp + (-0x24))); /* 0x171C4089: paddd mm0, qword ptr [ebp - 0x24] */
    _mm[2] = mmx_paddd(_mm[2], _mm[3]); /* 0x171C408D: paddd mm2, mm3 */
    _mm[3] = mmx_paddd(_mm[3], MEM64(ebp + (-0xC4))); /* 0x171C4090: paddd mm3, qword ptr [ebp - 0xc4] */
    _mm[4] = mmx_paddd(_mm[4], _mm[0]); /* 0x171C4097: paddd mm4, mm0 */
    _mm[0] = mmx_paddd(_mm[0], MEM64(ebp + (-0x84))); /* 0x171C409A: paddd mm0, qword ptr [ebp - 0x84] */
    MEM64(ebp + (-0x1C)) = _mm[1]; /* 0x171C40A1: movq qword ptr [ebp - 0x1c], mm1 */
    /* nop */ /* 0x171C40A5: nop  */
    MEM64(ebp + (-0x74)) = _mm[0]; /* 0x171C40A6: movq qword ptr [ebp - 0x74], mm0 */
    /* nop */ /* 0x171C40AA: nop  */
    _mm[0] = MEM64(ebp + (-0x5C)); /* 0x171C40AB: movq mm0, qword ptr [ebp - 0x5c] */
    /* nop */ /* 0x171C40AF: nop  */
    MEM64(ebp + (-0xB4)) = _mm[2]; /* 0x171C40B0: movq qword ptr [ebp - 0xb4], mm2 */
    _mm[1] = _mm[0]; /* 0x171C40B7: movq mm1, mm0 */
    _mm[2] = MEM64(0x17025C08); /* 0x171C40BA: movq mm2, qword ptr [0x17025c08] */
    _mm[1] = mmx_psrlq(_mm[1], 16); /* 0x171C40C1: psrlq mm1, 0x10 */
    MEM64(ebp + (-0x64)) = _mm[3]; /* 0x171C40C5: movq qword ptr [ebp - 0x64], mm3 */
    _mm[0] = mmx_pmaddwd(_mm[0], _mm[2]); /* 0x171C40C9: pmaddwd mm0, mm2 */
    _mm[3] = MEM64(ebp + (-0x4C)); /* 0x171C40CC: movq mm3, qword ptr [ebp - 0x4c] */
    _mm[1] = mmx_pmaddwd(_mm[1], _mm[2]); /* 0x171C40D0: pmaddwd mm1, mm2 */
    MEM64(ebp + (-0xD4)) = _mm[4]; /* 0x171C40D3: movq qword ptr [ebp - 0xd4], mm4 */
    _mm[2] = _mm[3]; /* 0x171C40DA: movq mm2, mm3 */
    _mm[4] = MEM64(0x17025C50); /* 0x171C40DD: movq mm4, qword ptr [0x17025c50] */
    _mm[2] = mmx_psrlq(_mm[2], 16); /* 0x171C40E4: psrlq mm2, 0x10 */
    MEM64(ebp + (-0x54)) = _mm[5]; /* 0x171C40E8: movq qword ptr [ebp - 0x54], mm5 */
    _mm[3] = mmx_pmaddwd(_mm[3], _mm[4]); /* 0x171C40EC: pmaddwd mm3, mm4 */
    _mm[5] = MEM64(ebp + (-0x3C)); /* 0x171C40EF: movq mm5, qword ptr [ebp - 0x3c] */
    _mm[2] = mmx_pmaddwd(_mm[2], _mm[4]); /* 0x171C40F3: pmaddwd mm2, mm4 */
    MEM64(ebp + (-0xA4)) = _mm[6]; /* 0x171C40F6: movq qword ptr [ebp - 0xa4], mm6 */
    _mm[4] = _mm[5]; /* 0x171C40FD: movq mm4, mm5 */
    _mm[6] = MEM64(0x17025C60); /* 0x171C4100: movq mm6, qword ptr [0x17025c60] */
    _mm[4] = mmx_psrlq(_mm[4], 16); /* 0x171C4107: psrlq mm4, 0x10 */
    MEM64(ebp + (-0x44)) = _mm[7]; /* 0x171C410B: movq qword ptr [ebp - 0x44], mm7 */
    _mm[5] = mmx_pmaddwd(_mm[5], _mm[6]); /* 0x171C410F: pmaddwd mm5, mm6 */
    _mm[7] = MEM64(ebp + (-0x6C)); /* 0x171C4112: movq mm7, qword ptr [ebp - 0x6c] */
    _mm[4] = mmx_pmaddwd(_mm[4], _mm[6]); /* 0x171C4116: pmaddwd mm4, mm6 */
    _mm[0] = mmx_paddd(_mm[0], MEM64(ebp + (-0xA4))); /* 0x171C4119: paddd mm0, qword ptr [ebp - 0xa4] */
    _mm[6] = _mm[7]; /* 0x171C4120: movq mm6, mm7 */
    _mm[1] = mmx_paddd(_mm[1], MEM64(ebp + (-0x44))); /* 0x171C4123: paddd mm1, qword ptr [ebp - 0x44] */
    _mm[6] = mmx_psrlq(_mm[6], 16); /* 0x171C4127: psrlq mm6, 0x10 */
    MEM64(ebp + (-0xE4)) = _mm[0]; /* 0x171C412B: movq qword ptr [ebp - 0xe4], mm0 */
    /* nop */ /* 0x171C4132: nop  */
    _mm[0] = MEM64(0x17025C38); /* 0x171C4133: movq mm0, qword ptr [0x17025c38] */
    /* nop */ /* 0x171C413A: nop  */
    MEM64(ebp + (-0x34)) = _mm[1]; /* 0x171C413B: movq qword ptr [ebp - 0x34], mm1 */
    _mm[7] = mmx_pmaddwd(_mm[7], _mm[0]); /* 0x171C413F: pmaddwd mm7, mm0 */
    _mm[3] = mmx_paddd(_mm[3], MEM64(ebp + (-0xB4))); /* 0x171C4142: paddd mm3, qword ptr [ebp - 0xb4] */
    _mm[6] = mmx_pmaddwd(_mm[6], _mm[0]); /* 0x171C4149: pmaddwd mm6, mm0 */
    _mm[0] = MEM64(ebp + (-0xBC)); /* 0x171C414C: movq mm0, qword ptr [ebp - 0xbc] */
    /* nop */ /* 0x171C4153: nop  */
    _mm[7] = mmx_paddd(_mm[7], MEM64(ebp + (-0x64))); /* 0x171C4154: paddd mm7, qword ptr [ebp - 0x64] */
    /* nop */ /* 0x171C4158: nop  */
    _mm[6] = mmx_paddd(_mm[6], MEM64(ebp + (-0x74))); /* 0x171C4159: paddd mm6, qword ptr [ebp - 0x74] */
    _mm[0] = mmx_psubd(_mm[0], _mm[7]); /* 0x171C415D: psubd mm0, mm7 */
    _mm[1] = MEM64(ebp + (-0xDC)); /* 0x171C4160: movq mm1, qword ptr [ebp - 0xdc] */
    /* nop */ /* 0x171C4167: nop  */
    MEM64(ebp + (-0x94)) = _mm[3]; /* 0x171C4168: movq qword ptr [ebp - 0x94], mm3 */
    _mm[1] = mmx_psubd(_mm[1], _mm[6]); /* 0x171C416F: psubd mm1, mm6 */
    _mm[3] = MEM64(0x17025C80); /* 0x171C4172: movq mm3, qword ptr [0x17025c80] */
    /* nop */ /* 0x171C4179: nop  */
    _mm[2] = mmx_paddd(_mm[2], MEM64(ebp + (-0xD4))); /* 0x171C417A: paddd mm2, qword ptr [ebp - 0xd4] */
    _mm[0] = mmx_paddd(_mm[0], _mm[3]); /* 0x171C4181: paddd mm0, mm3 */
    _mm[7] = mmx_paddd(_mm[7], MEM64(ebp + (-0xBC))); /* 0x171C4184: paddd mm7, qword ptr [ebp - 0xbc] */
    _mm[0] = mmx_psrad(_mm[0], 11); /* 0x171C418B: psrad mm0, 0xb */
    MEM64(ebp + (-0xF4)) = _mm[2]; /* 0x171C418F: movq qword ptr [ebp - 0xf4], mm2 */
    _mm[1] = mmx_paddd(_mm[1], _mm[3]); /* 0x171C4196: paddd mm1, mm3 */
    _mm[6] = mmx_paddd(_mm[6], MEM64(ebp + (-0xDC))); /* 0x171C4199: paddd mm6, qword ptr [ebp - 0xdc] */
    _mm[1] = mmx_psrad(_mm[1], 11); /* 0x171C41A0: psrad mm1, 0xb */
    _mm[5] = mmx_paddd(_mm[5], MEM64(ebp + (-0x1C))); /* 0x171C41A4: paddd mm5, qword ptr [ebp - 0x1c] */
    _mm[2] = _mm[0]; /* 0x171C41A8: movq mm2, mm0 */
    _mm[4] = mmx_paddd(_mm[4], MEM64(ebp + (-0x54))); /* 0x171C41AB: paddd mm4, qword ptr [ebp - 0x54] */
    _mm[0] = mmx_punpcklwd(_mm[0], _mm[1]); /* 0x171C41AF: punpcklwd mm0, mm1 */
    _mm[6] = mmx_paddd(_mm[6], _mm[3]); /* 0x171C41B2: paddd mm6, mm3 */
    _mm[2] = mmx_punpckhwd(_mm[2], _mm[1]); /* 0x171C41B5: punpckhwd mm2, mm1 */
    _mm[7] = mmx_paddd(_mm[7], _mm[3]); /* 0x171C41B8: paddd mm7, mm3 */
    void_lift_trap(0x171C41BBu, "unsupported PUNPCKLDQ operands");
    edi = MEM32(ebp + (-0x10)); /* 0x171C41BE: mov edi, dword ptr [ebp - 0x10] */
    MEM64(edi + 0x70) = _mm[0]; /* 0x171C41C1: movq qword ptr [edi + 0x70], mm0 */
    _mm[6] = mmx_psrad(_mm[6], 11); /* 0x171C41C5: psrad mm6, 0xb */
    _mm[2] = MEM64(ebp + (-0x8C)); /* 0x171C41C9: movq mm2, qword ptr [ebp - 0x8c] */
    _mm[7] = mmx_psrad(_mm[7], 11); /* 0x171C41D0: psrad mm7, 0xb */
    _mm[2] = mmx_psubd(_mm[2], _mm[5]); /* 0x171C41D4: psubd mm2, mm5 */
    _mm[0] = _mm[7]; /* 0x171C41D7: movq mm0, mm7 */
    _mm[1] = MEM64(ebp + (-0xAC)); /* 0x171C41DA: movq mm1, qword ptr [ebp - 0xac] */
    _mm[7] = mmx_punpcklwd(_mm[7], _mm[6]); /* 0x171C41E1: punpcklwd mm7, mm6 */
    _mm[1] = mmx_psubd(_mm[1], _mm[4]); /* 0x171C41E4: psubd mm1, mm4 */
    _mm[0] = mmx_punpckhwd(_mm[0], _mm[6]); /* 0x171C41E7: punpckhwd mm0, mm6 */
    _mm[5] = mmx_paddd(_mm[5], MEM64(ebp + (-0x8C))); /* 0x171C41EA: paddd mm5, qword ptr [ebp - 0x8c] */
    void_lift_trap(0x171C41F1u, "unsupported PUNPCKLDQ operands");
    _mm[4] = mmx_paddd(_mm[4], MEM64(ebp + (-0xAC))); /* 0x171C41F4: paddd mm4, qword ptr [ebp - 0xac] */
    _mm[2] = mmx_paddd(_mm[2], _mm[3]); /* 0x171C41FB: paddd mm2, mm3 */
    _mm[1] = mmx_paddd(_mm[1], _mm[3]); /* 0x171C41FE: paddd mm1, mm3 */
    _mm[5] = mmx_paddd(_mm[5], _mm[3]); /* 0x171C4201: paddd mm5, mm3 */
    _mm[4] = mmx_paddd(_mm[4], _mm[3]); /* 0x171C4204: paddd mm4, mm3 */
    _mm[2] = mmx_psrad(_mm[2], 11); /* 0x171C4207: psrad mm2, 0xb */
    MEM64(edi) = _mm[7]; /* 0x171C420B: movq qword ptr [edi], mm7 */
    _mm[1] = mmx_psrad(_mm[1], 11); /* 0x171C420E: psrad mm1, 0xb */
    _mm[0] = _mm[2]; /* 0x171C4212: movq mm0, mm2 */
    _mm[5] = mmx_psrad(_mm[5], 11); /* 0x171C4215: psrad mm5, 0xb */
    _mm[6] = MEM64(ebp + (-0x7C)); /* 0x171C4219: movq mm6, qword ptr [ebp - 0x7c] */
    _mm[2] = mmx_punpcklwd(_mm[2], _mm[1]); /* 0x171C421D: punpcklwd mm2, mm1 */
    _mm[0] = mmx_punpckhwd(_mm[0], _mm[1]); /* 0x171C4220: punpckhwd mm0, mm1 */
    _mm[1] = _mm[5]; /* 0x171C4223: movq mm1, mm5 */
    _mm[7] = MEM64(ebp + (-0x9C)); /* 0x171C4226: movq mm7, qword ptr [ebp - 0x9c] */
    void_lift_trap(0x171C422Du, "unsupported PUNPCKLDQ operands");
    MEM64(edi + 0x60) = _mm[2]; /* 0x171C4230: movq qword ptr [edi + 0x60], mm2 */
    _mm[4] = mmx_psrad(_mm[4], 11); /* 0x171C4234: psrad mm4, 0xb */
    _mm[2] = _mm[6]; /* 0x171C4238: movq mm2, mm6 */
    _mm[5] = mmx_punpcklwd(_mm[5], _mm[4]); /* 0x171C423B: punpcklwd mm5, mm4 */
    _mm[6] = mmx_paddd(_mm[6], MEM64(ebp + (-0x94))); /* 0x171C423E: paddd mm6, qword ptr [ebp - 0x94] */
    _mm[1] = mmx_punpckhwd(_mm[1], _mm[4]); /* 0x171C4245: punpckhwd mm1, mm4 */
    _mm[2] = mmx_psubd(_mm[2], MEM64(ebp + (-0x94))); /* 0x171C4248: psubd mm2, qword ptr [ebp - 0x94] */
    void_lift_trap(0x171C424Fu, "unsupported PUNPCKLDQ operands");
    MEM64(edi + 0x10) = _mm[5]; /* 0x171C4252: movq qword ptr [edi + 0x10], mm5 */
    _mm[0] = _mm[7]; /* 0x171C4256: movq mm0, mm7 */
    _mm[7] = mmx_paddd(_mm[7], MEM64(ebp + (-0xF4))); /* 0x171C4259: paddd mm7, qword ptr [ebp - 0xf4] */
    _mm[6] = mmx_paddd(_mm[6], _mm[3]); /* 0x171C4260: paddd mm6, mm3 */
    _mm[0] = mmx_psubd(_mm[0], MEM64(ebp + (-0xF4))); /* 0x171C4263: psubd mm0, qword ptr [ebp - 0xf4] */
    _mm[7] = mmx_paddd(_mm[7], _mm[3]); /* 0x171C426A: paddd mm7, mm3 */
    _mm[2] = mmx_paddd(_mm[2], _mm[3]); /* 0x171C426D: paddd mm2, mm3 */
    _mm[7] = mmx_psrad(_mm[7], 11); /* 0x171C4270: psrad mm7, 0xb */
    _mm[0] = mmx_paddd(_mm[0], _mm[3]); /* 0x171C4274: paddd mm0, mm3 */
    _mm[6] = mmx_psrad(_mm[6], 11); /* 0x171C4277: psrad mm6, 0xb */
    _mm[1] = _mm[6]; /* 0x171C427B: movq mm1, mm6 */
    _mm[2] = mmx_psrad(_mm[2], 11); /* 0x171C427E: psrad mm2, 0xb */
    _mm[4] = MEM64(ebp + (-0xEC)); /* 0x171C4282: movq mm4, qword ptr [ebp - 0xec] */
    _mm[6] = mmx_punpcklwd(_mm[6], _mm[7]); /* 0x171C4289: punpcklwd mm6, mm7 */
    _mm[5] = _mm[4]; /* 0x171C428C: movq mm5, mm4 */
    _mm[1] = mmx_punpckhwd(_mm[1], _mm[7]); /* 0x171C428F: punpckhwd mm1, mm7 */
    _mm[4] = mmx_paddd(_mm[4], MEM64(ebp + (-0xE4))); /* 0x171C4292: paddd mm4, qword ptr [ebp - 0xe4] */
    void_lift_trap(0x171C4299u, "unsupported PUNPCKLDQ operands");
    _mm[5] = mmx_psubd(_mm[5], MEM64(ebp + (-0xE4))); /* 0x171C429C: psubd mm5, qword ptr [ebp - 0xe4] */
    _mm[0] = mmx_psrad(_mm[0], 11); /* 0x171C42A3: psrad mm0, 0xb */
    MEM64(edi + 0x20) = _mm[6]; /* 0x171C42A7: movq qword ptr [edi + 0x20], mm6 */
    _mm[6] = _mm[2]; /* 0x171C42AB: movq mm6, mm2 */
    _mm[4] = mmx_paddd(_mm[4], _mm[3]); /* 0x171C42AE: paddd mm4, mm3 */
    _mm[2] = mmx_punpcklwd(_mm[2], _mm[0]); /* 0x171C42B1: punpcklwd mm2, mm0 */
    _mm[5] = mmx_paddd(_mm[5], _mm[3]); /* 0x171C42B4: paddd mm5, mm3 */
    _mm[6] = mmx_punpckhwd(_mm[6], _mm[0]); /* 0x171C42B7: punpckhwd mm6, mm0 */
    _mm[0] = MEM64(ebp + (-0xCC)); /* 0x171C42BA: movq mm0, qword ptr [ebp - 0xcc] */
    void_lift_trap(0x171C42C1u, "unsupported PUNPCKLDQ operands");
    _mm[1] = _mm[0]; /* 0x171C42C4: movq mm1, mm0 */
    _mm[4] = mmx_psrad(_mm[4], 11); /* 0x171C42C7: psrad mm4, 0xb */
    _mm[0] = mmx_paddd(_mm[0], MEM64(ebp + (-0x34))); /* 0x171C42CB: paddd mm0, qword ptr [ebp - 0x34] */
    _mm[5] = mmx_psrad(_mm[5], 11); /* 0x171C42CF: psrad mm5, 0xb */
    _mm[0] = mmx_paddd(_mm[0], _mm[3]); /* 0x171C42D3: paddd mm0, mm3 */
    _mm[6] = _mm[4]; /* 0x171C42D6: movq mm6, mm4 */
    _mm[1] = mmx_psubd(_mm[1], MEM64(ebp + (-0x34))); /* 0x171C42D9: psubd mm1, qword ptr [ebp - 0x34] */
    _mm[0] = mmx_psrad(_mm[0], 11); /* 0x171C42DD: psrad mm0, 0xb */
    _mm[1] = mmx_paddd(_mm[1], _mm[3]); /* 0x171C42E1: paddd mm1, mm3 */
    _mm[4] = mmx_punpcklwd(_mm[4], _mm[0]); /* 0x171C42E4: punpcklwd mm4, mm0 */
    _mm[3] = _mm[5]; /* 0x171C42E7: movq mm3, mm5 */
    _mm[6] = mmx_punpckhwd(_mm[6], _mm[0]); /* 0x171C42EA: punpckhwd mm6, mm0 */
    MEM64(edi + 0x50) = _mm[2]; /* 0x171C42ED: movq qword ptr [edi + 0x50], mm2 */
    void_lift_trap(0x171C42F1u, "unsupported PUNPCKLDQ operands");
    _mm[1] = mmx_psrad(_mm[1], 11); /* 0x171C42F4: psrad mm1, 0xb */
    MEM64(edi + 0x30) = _mm[4]; /* 0x171C42F8: movq qword ptr [edi + 0x30], mm4 */
    _mm[5] = mmx_punpcklwd(_mm[5], _mm[1]); /* 0x171C42FC: punpcklwd mm5, mm1 */
    _mm[3] = mmx_punpckhwd(_mm[3], _mm[1]); /* 0x171C42FF: punpckhwd mm3, mm1 */
    void_lift_trap(0x171C4302u, "unsupported PUNPCKLDQ operands");
    _flag_a = (uint32_t)(MEM32(ebp + (-0x14))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x14)) = MEM32(ebp + (-0x14)) + 8; /* 0x171C4305: add dword ptr [ebp - 0x14], 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 8; /* 0x171C4309: add dword ptr [ebp - 0xc], 8 */
    _flag_k = FK_ADD;
    MEM64(edi + 0x40) = _mm[5]; /* 0x171C430D: movq qword ptr [edi + 0x40], mm5 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + 8; /* 0x171C4311: add dword ptr [ebp - 0x10], 8 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x4)); /* 0x171C4315: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171C4318: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x4)) = eax; /* 0x171C4319: mov dword ptr [ebp - 4], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171C3DF7; /* 0x171C431C: jne 0x171c3df7 */
L_171C4322:
    esi = MEM32(ebp + 0x10); /* 0x171C4322: mov esi, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x4)) = 8; /* 0x171C4325: mov dword ptr [ebp - 4], 8 */
    MEM32(ebp + (-0x10)) = esi; /* 0x171C432C: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x8)) = 0; /* 0x171C432F: mov dword ptr [ebp - 8], 0 */
L_171C4336:
    esi = MEM32(ebp + (-0x10)); /* 0x171C4336: mov esi, dword ptr [ebp - 0x10] */
    edi = MEM32(ebp + 0x14); /* 0x171C4339: mov edi, dword ptr [ebp + 0x14] */
    _mm[0] = MEM64(esi); /* 0x171C433C: movq mm0, qword ptr [esi] */
    _mm[1] = MEM64(esi + 0x8); /* 0x171C433F: movq mm1, qword ptr [esi + 8] */
    _mm[2] = _mm[0]; /* 0x171C4343: movq mm2, mm0 */
    _mm[3] = _mm[0]; /* 0x171C4346: movq mm3, mm0 */
    _mm[2] = mmx_paddw(_mm[2], _mm[1]); /* 0x171C4349: paddw mm2, mm1 */
    _mm[4] = _mm[2]; /* 0x171C434C: movq mm4, mm2 */
    _mm[3] = mmx_punpckhdq(_mm[3], _mm[1]); /* 0x171C434F: punpckhdq mm3, mm1 */
    _mm[3] = mmx_pmaddwd(_mm[3], MEM64(0x17025C98)); /* 0x171C4352: pmaddwd mm3, qword ptr [0x17025c98] */
    _mm[6] = _mm[0]; /* 0x171C4359: movq mm6, mm0 */
    _mm[2] = mmx_pmaddwd(_mm[2], MEM64(0x17025CA0)); /* 0x171C435C: pmaddwd mm2, qword ptr [0x17025ca0] */
    _mm[6] = mmx_psubw(_mm[6], _mm[1]); /* 0x171C4363: psubw mm6, mm1 */
    void_lift_trap(0x171C4366u, "unsupported PUNPCKLDQ operands");
    _mm[6] = _mm[0]; /* 0x171C4369: movq mm6, mm0 */
    _mm[5] = _mm[3]; /* 0x171C436C: movq mm5, mm3 */
    _mm[4] = mmx_pslld(_mm[4], 16); /* 0x171C436F: pslld mm4, 0x10 */
    _mm[3] = (_mm[3] ^ MEM64(0x17025C68)); /* 0x171C4373: pxor mm3, qword ptr [0x17025c68] */
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[2]); /* 0x171C437A: punpckhdq mm2, mm2 */
    _mm[3] = mmx_paddd(_mm[3], MEM64(0x17025C70)); /* 0x171C437D: paddd mm3, qword ptr [0x17025c70] */
    _mm[4] = mmx_psrad(_mm[4], 3); /* 0x171C4384: psrad mm4, 3 */
    _mm[3] = mmx_psrlq(_mm[3], 32); /* 0x171C4388: psrlq mm3, 0x20 */
    _mm[7] = _mm[4]; /* 0x171C438C: movq mm7, mm4 */
    void_lift_trap(0x171C438Fu, "unsupported PUNPCKLDQ operands");
    _mm[3] = _mm[0]; /* 0x171C4392: movq mm3, mm0 */
    _mm[5] = mmx_paddd(_mm[5], _mm[2]); /* 0x171C4395: paddd mm5, mm2 */
    _mm[3] = mmx_paddw(_mm[3], _mm[1]); /* 0x171C4398: paddw mm3, mm1 */
    _mm[4] = mmx_paddd(_mm[4], _mm[5]); /* 0x171C439B: paddd mm4, mm5 */
    _mm[7] = mmx_psubd(_mm[7], _mm[5]); /* 0x171C439E: psubd mm7, mm5 */
    _mm[5] = _mm[3]; /* 0x171C43A1: movq mm5, mm3 */
    _mm[2] = _mm[0]; /* 0x171C43A4: movq mm2, mm0 */
    _mm[0] = mmx_pmaddwd(_mm[0], MEM64(0x17025CA8)); /* 0x171C43A7: pmaddwd mm0, qword ptr [0x17025ca8] */
    void_lift_trap(0x171C43AEu, "unsupported PUNPCKLDQ operands");
    _mm[5] = mmx_paddw(_mm[5], _mm[3]); /* 0x171C43B1: paddw mm5, mm3 */
    void_lift_trap(0x171C43B4u, "unsupported PUNPCKLDQ operands");
    _mm[5] = mmx_pmaddwd(_mm[5], MEM64(0x17025CC8)); /* 0x171C43B7: pmaddwd mm5, qword ptr [0x17025cc8] */
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[2]); /* 0x171C43BE: punpckhdq mm6, mm2 */
    _mm[3] = mmx_pmaddwd(_mm[3], MEM64(0x17025CC0)); /* 0x171C43C1: pmaddwd mm3, qword ptr [0x17025cc0] */
    _mm[6] = mmx_paddw(_mm[6], _mm[1]); /* 0x171C43C8: paddw mm6, mm1 */
    _mm[6] = mmx_pmaddwd(_mm[6], MEM64(0x17025CB8)); /* 0x171C43CB: pmaddwd mm6, qword ptr [0x17025cb8] */
    /* nop */ /* 0x171C43D2: nop  */
    _mm[1] = mmx_pmaddwd(_mm[1], MEM64(0x17025CB0)); /* 0x171C43D3: pmaddwd mm1, qword ptr [0x17025cb0] */
    _mm[5] = mmx_punpckhdq(_mm[5], _mm[5]); /* 0x171C43DA: punpckhdq mm5, mm5 */
    _mm[2] = MEM64(0x17025C70); /* 0x171C43DD: movq mm2, qword ptr [0x17025c70] */
    /* nop */ /* 0x171C43E4: nop  */
    _mm[3] = (_mm[3] ^ MEM64(0x17025C68)); /* 0x171C43E5: pxor mm3, qword ptr [0x17025c68] */
    /* nop */ /* 0x171C43EC: nop  */
    _mm[6] = (_mm[6] ^ MEM64(0x17025C68)); /* 0x171C43ED: pxor mm6, qword ptr [0x17025c68] */
    _mm[3] = mmx_paddd(_mm[3], _mm[2]); /* 0x171C43F4: paddd mm3, mm2 */
    _mm[6] = mmx_paddd(_mm[6], _mm[2]); /* 0x171C43F7: paddd mm6, mm2 */
    _mm[3] = mmx_paddd(_mm[3], _mm[5]); /* 0x171C43FA: paddd mm3, mm5 */
    _mm[5] = _mm[6]; /* 0x171C43FD: movq mm5, mm6 */
    _mm[6] = mmx_paddd(_mm[6], _mm[3]); /* 0x171C4400: paddd mm6, mm3 */
    _mm[2] = _mm[5]; /* 0x171C4403: movq mm2, mm5 */
    void_lift_trap(0x171C4406u, "unsupported PUNPCKLDQ operands");
    _mm[2] = mmx_punpckhdq(_mm[2], _mm[5]); /* 0x171C4409: punpckhdq mm2, mm5 */
    _mm[1] = mmx_paddd(_mm[1], _mm[6]); /* 0x171C440C: paddd mm1, mm6 */
    _mm[2] = mmx_paddd(_mm[2], _mm[3]); /* 0x171C440F: paddd mm2, mm3 */
    _mm[5] = _mm[1]; /* 0x171C4412: movq mm5, mm1 */
    _mm[3] = _mm[4]; /* 0x171C4415: movq mm3, mm4 */
    _mm[0] = mmx_paddd(_mm[0], _mm[2]); /* 0x171C4418: paddd mm0, mm2 */
    _mm[2] = _mm[7]; /* 0x171C441B: movq mm2, mm7 */
    void_lift_trap(0x171C441Eu, "unsupported PUNPCKLDQ operands");
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[5]); /* 0x171C4421: punpckhdq mm1, mm5 */
    _mm[3] = mmx_psubd(_mm[3], _mm[0]); /* 0x171C4424: psubd mm3, mm0 */
    _mm[5] = MEM64(0x17025C88); /* 0x171C4427: movq mm5, qword ptr [0x17025c88] */
    _mm[0] = mmx_paddd(_mm[0], _mm[4]); /* 0x171C442E: paddd mm0, mm4 */
    _mm[6] = MEM64(0x17025C90); /* 0x171C4431: movq mm6, qword ptr [0x17025c90] */
    _mm[2] = mmx_psubd(_mm[2], _mm[1]); /* 0x171C4438: psubd mm2, mm1 */
    _mm[0] = mmx_paddd(_mm[0], _mm[5]); /* 0x171C443B: paddd mm0, mm5 */
    _mm[1] = mmx_paddd(_mm[1], _mm[7]); /* 0x171C443E: paddd mm1, mm7 */
    _mm[1] = mmx_paddd(_mm[1], _mm[5]); /* 0x171C4441: paddd mm1, mm5 */
    _mm[0] = mmx_psrad(_mm[0], 18); /* 0x171C4444: psrad mm0, 0x12 */
    _mm[3] = mmx_paddd(_mm[3], _mm[5]); /* 0x171C4448: paddd mm3, mm5 */
    _mm[1] = mmx_psrad(_mm[1], 18); /* 0x171C444B: psrad mm1, 0x12 */
    _mm[2] = mmx_paddd(_mm[2], _mm[5]); /* 0x171C444F: paddd mm2, mm5 */
    _mm[3] = mmx_psrad(_mm[3], 18); /* 0x171C4452: psrad mm3, 0x12 */
    _mm[1] = (_mm[1] & _mm[6]); /* 0x171C4456: pand mm1, mm6 */
    _mm[2] = mmx_psrad(_mm[2], 18); /* 0x171C4459: psrad mm2, 0x12 */
    ebx = (uint32_t)_mm[1]; /* 0x171C445D: movd ebx, mm1 */
    _mm[1] = mmx_psrlq(_mm[1], 32); /* 0x171C4460: psrlq mm1, 0x20 */
    ecx = MEM32(ebp + 0x1C); /* 0x171C4464: mov ecx, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0x8)); /* 0x171C4467: add edi, dword ptr [ebp - 8] */
    _flag_k = FK_ADD;
    edx = (uint32_t)_mm[1]; /* 0x171C446A: movd edx, mm1 */
    _mm[0] = (_mm[0] & _mm[6]); /* 0x171C446D: pand mm0, mm6 */
    SET_HI8(eax, MEM8(ecx + ebx)); /* 0x171C4470: mov ah, byte ptr [ecx + ebx] */
    edi = MEM32(edi); /* 0x171C4473: mov edi, dword ptr [edi] */
    ebx = (uint32_t)_mm[0]; /* 0x171C4475: movd ebx, mm0 */
    _mm[0] = mmx_psrlq(_mm[0], 32); /* 0x171C4478: psrlq mm0, 0x20 */
    SET_LO8(eax, MEM8(ecx + edx)); /* 0x171C447C: mov al, byte ptr [ecx + edx] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 4; /* 0x171C447F: add dword ptr [ebp - 8], 4 */
    _flag_k = FK_ADD;
    edx = (uint32_t)_mm[0]; /* 0x171C4483: movd edx, mm0 */
    _mm[3] = (_mm[3] & _mm[6]); /* 0x171C4486: pand mm3, mm6 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + 0x18); /* 0x171C4489: add edi, dword ptr [ebp + 0x18] */
    _flag_k = FK_ADD;
    if (16u) _cf = (((eax) >> 16) & 1u); /* 0x171C448C: shl eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 16u; /* 0x171C448C: shl eax, 0x10 */
    SET_LO8(eax, MEM8(ecx + ebx)); /* 0x171C448F: mov al, byte ptr [ecx + ebx] */
    SET_HI8(eax, MEM8(ecx + edx)); /* 0x171C4492: mov ah, byte ptr [ecx + edx] */
    _mm[4] = (uint64_t)(uint32_t)(eax); /* 0x171C4495: movd mm4, eax */
    _mm[2] = (_mm[2] & _mm[6]); /* 0x171C4498: pand mm2, mm6 */
    ebx = (uint32_t)_mm[3]; /* 0x171C449B: movd ebx, mm3 */
    _mm[3] = mmx_psrlq(_mm[3], 32); /* 0x171C449E: psrlq mm3, 0x20 */
    edx = (uint32_t)_mm[3]; /* 0x171C44A2: movd edx, mm3 */
    SET_HI8(eax, MEM8(ecx + ebx)); /* 0x171C44A5: mov ah, byte ptr [ecx + ebx] */
    SET_LO8(eax, MEM8(ecx + edx)); /* 0x171C44A8: mov al, byte ptr [ecx + edx] */
    ebx = (uint32_t)_mm[2]; /* 0x171C44AB: movd ebx, mm2 */
    _mm[2] = mmx_psrlq(_mm[2], 32); /* 0x171C44AE: psrlq mm2, 0x20 */
    if (16u) _cf = (((eax) >> 16) & 1u); /* 0x171C44B2: shl eax, 0x10 */
    if (16u) { _flag_a = recomp_flags_pack((eax << 16u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 16u; /* 0x171C44B2: shl eax, 0x10 */
    edx = (uint32_t)_mm[2]; /* 0x171C44B5: movd edx, mm2 */
    SET_LO8(eax, MEM8(ecx + ebx)); /* 0x171C44B8: mov al, byte ptr [ecx + ebx] */
    SET_HI8(eax, MEM8(ecx + edx)); /* 0x171C44BB: mov ah, byte ptr [ecx + edx] */
    _mm[5] = (uint64_t)(uint32_t)(eax); /* 0x171C44BE: movd mm5, eax */
    void_lift_trap(0x171C44C1u, "unsupported PUNPCKLDQ operands");
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + 0x10u; /* 0x171C44C4: add dword ptr [ebp - 0x10], 0x10 */
    _flag_k = FK_ADD;
    eax = MEM32(ebp + (-0x4)); /* 0x171C44C8: mov eax, dword ptr [ebp - 4] */
    MEM64(edi) = _mm[4]; /* 0x171C44CB: movq qword ptr [edi], mm4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171C44CE: dec eax */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x4)) = eax; /* 0x171C44CF: mov dword ptr [ebp - 4], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171C4336; /* 0x171C44D2: jne 0x171c4336 */
L_171C44D8:
    /* emms */ /* 0x171C44D8: emms  */
    edi = POP32_VAL(esp); /* 0x171C44DA: pop edi */
    esi = POP32_VAL(esp); /* 0x171C44DB: pop esi */
    ebx = POP32_VAL(esp); /* 0x171C44DC: pop ebx */
    esp = ebp; /* 0x171C44DD: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171C44DF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x171C44E0: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_171C44F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C44F0u);

L_171C44F0:
    edi = edi; /* 0x171C44F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C44F2: push ebp */
    ebp = esp; /* 0x171C44F3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x120u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x120u; /* 0x171C44F5: sub esp, 0x120 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x171C44FB: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x148); /* 0x171C44FE: mov ecx, dword ptr [eax + 0x148] */
    edx = MEM32(ebp + 0x18); /* 0x171C4504: mov edx, dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + 0x14); /* 0x171C4507: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x80u; /* 0x171C450A: add ecx, 0x80 */
    _flag_k = FK_ADD;
    PUSH32(esp, ecx); /* 0x171C4510: push ecx */
    PUSH32(esp, edx); /* 0x171C4511: push edx */
    edx = MEM32(ebp + 0xC); /* 0x171C4512: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x171C4515: push eax */
    eax = MEM32(edx + 0x50); /* 0x171C4516: mov eax, dword ptr [edx + 0x50] */
    ecx = ebp + (-0x120); /* 0x171C4519: lea ecx, [ebp - 0x120] */
    PUSH32(esp, ecx); /* 0x171C451F: push ecx */
    ecx = MEM32(ebp + 0x10); /* 0x171C4520: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x171C4523: push eax */
    PUSH32(esp, ecx); /* 0x171C4524: push ecx */
    RECOMP_CALL(sub_171C3DD0); /* 0x171C4525: call 0x171c3dd0 */
    RECOMP_FLAGS_IN();
    esp = ebp; /* 0x171C452A: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171C452C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x171C452D: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_171C4540(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C4540u);

L_171C4540:
    edi = edi; /* 0x171C4540: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C4542: push ebp */
    ebp = esp; /* 0x171C4543: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x90u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x90u; /* 0x171C4545: sub esp, 0x90 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x171C454B: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x148); /* 0x171C454E: mov eax, dword ptr [eax + 0x148] */
    edx = MEM32(ebp + 0xC); /* 0x171C4554: mov edx, dword ptr [ebp + 0xc] */
    edx = MEM32(edx + 0x50); /* 0x171C4557: mov edx, dword ptr [edx + 0x50] */
    PUSH32(esp, ebx); /* 0x171C455A: push ebx */
    PUSH32(esp, esi); /* 0x171C455B: push esi */
    esi = MEM32(ebp + 0x10); /* 0x171C455C: mov esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x80u; /* 0x171C455F: add eax, 0x80 */
    _flag_k = FK_ADD;
    ecx = 8; /* 0x171C4564: mov ecx, 8 */
    ebx = ebp + (-0x70); /* 0x171C4569: lea ebx, [ebp - 0x70] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x60u; /* 0x171C456C: add esi, 0x60 */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x171C456F: push edi */
    MEM32(ebp + (-0x8)) = eax; /* 0x171C4570: mov dword ptr [ebp - 8], eax */
    MEM32(ebp + (-0x4)) = ecx; /* 0x171C4573: mov dword ptr [ebp - 4], ecx */
    MEM32(ebp + (-0x10)) = ebx; /* 0x171C4576: mov dword ptr [ebp - 0x10], ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x60u; /* 0x171C4579: add edx, 0x60 */
    _flag_k = FK_ADD;
    esp = esp; /* 0x171C457C: lea esp, [esp] */
L_171C4580:
    /* cmp ecx, 4 */ /* 0x171C4580: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C46C8; /* 0x171C4583: je 0x171c46c8 */
L_171C4589:
    /* cmp MEM16(esi + (-0x50)), 0 */ /* 0x171C4589: cmp word ptr [esi - 0x50], 0 */
    _flag_a = (uint32_t)(MEM16(esi + (-0x50))) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C45CD; /* 0x171C458E: jne 0x171c45cd */
L_171C4590:
    /* cmp MEM16(esi + (-0x40)), 0 */ /* 0x171C4590: cmp word ptr [esi - 0x40], 0 */
    _flag_a = (uint32_t)(MEM16(esi + (-0x40))) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C45CD; /* 0x171C4595: jne 0x171c45cd */
L_171C4597:
    /* cmp MEM16(esi + (-0x30)), 0 */ /* 0x171C4597: cmp word ptr [esi - 0x30], 0 */
    _flag_a = (uint32_t)(MEM16(esi + (-0x30))) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C45CD; /* 0x171C459C: jne 0x171c45cd */
L_171C459E:
    /* cmp MEM16(esi + (-0x10)), 0 */ /* 0x171C459E: cmp word ptr [esi - 0x10], 0 */
    _flag_a = (uint32_t)(MEM16(esi + (-0x10))) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C45CD; /* 0x171C45A3: jne 0x171c45cd */
L_171C45A5:
    /* cmp MEM16(esi), 0 */ /* 0x171C45A5: cmp word ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C45CD; /* 0x171C45A9: jne 0x171c45cd */
L_171C45AB:
    /* cmp MEM16(esi + 0x10), 0 */ /* 0x171C45AB: cmp word ptr [esi + 0x10], 0 */
    _flag_a = (uint32_t)(MEM16(esi + 0x10)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C45CD; /* 0x171C45B0: jne 0x171c45cd */
L_171C45B2:
    eax = (int32_t)(int16_t)MEM16(edx + (-0x60)); /* 0x171C45B2: movsx eax, word ptr [edx - 0x60] */
    edi = (int32_t)(int16_t)MEM16(esi + (-0x60)); /* 0x171C45B6: movsx edi, word ptr [esi - 0x60] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x171C45BA: imul eax, edi */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x171C45BD: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x171C45BD: shl eax, 2 */
    MEM32(ebx + (-0x20)) = eax; /* 0x171C45C0: mov dword ptr [ebx - 0x20], eax */
    MEM32(ebx) = eax; /* 0x171C45C3: mov dword ptr [ebx], eax */
    MEM32(ebx + 0x40) = eax; /* 0x171C45C5: mov dword ptr [ebx + 0x40], eax */
    goto L_171C46C5; /* 0x171C45C8: jmp 0x171c46c5 */
L_171C45CD:
    ecx = (int32_t)(int16_t)MEM16(esi + (-0x60)); /* 0x171C45CD: movsx ecx, word ptr [esi - 0x60] */
    eax = (int32_t)(int16_t)MEM16(edx + (-0x60)); /* 0x171C45D1: movsx eax, word ptr [edx - 0x60] */
    edi = (int32_t)(int16_t)MEM16(esi + (-0x40)); /* 0x171C45D5: movsx edi, word ptr [esi - 0x40] */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x171C45D9: imul eax, ecx */
    ecx = (int32_t)(int16_t)MEM16(edx + (-0x40)); /* 0x171C45DC: movsx ecx, word ptr [edx - 0x40] */
    ebx = (int32_t)(int16_t)MEM16(edx); /* 0x171C45E0: movsx ebx, word ptr [edx] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edi); /* 0x171C45E3: imul ecx, edi */
    edi = (int32_t)(int16_t)MEM16(esi); /* 0x171C45E6: movsx edi, word ptr [esi] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3B21u); /* 0x171C45E9: imul ecx, ecx, 0x3b21 */
    edi = (uint32_t)((int32_t)edi * (int32_t)ebx); /* 0x171C45EF: imul edi, ebx */
    if (14u) _cf = (((eax) >> 18) & 1u); /* 0x171C45F2: shl eax, 0xe */
    if (14u) { _flag_a = recomp_flags_pack((eax << 14u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 14u; /* 0x171C45F2: shl eax, 0xe */
    edi = (uint32_t)((int32_t)edi * (int32_t)0x187Eu); /* 0x171C45F5: imul edi, edi, 0x187e */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x171C45FB: sub ecx, edi */
    _flag_k = FK_CMP;
    edi = ecx + eax; /* 0x171C45FD: lea edi, [ecx + eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x171C4600: sub eax, ecx */
    _flag_k = FK_CMP;
    ecx = (int32_t)(int16_t)MEM16(esi + 0x10); /* 0x171C4602: movsx ecx, word ptr [esi + 0x10] */
    MEM32(ebp + (-0xC)) = eax; /* 0x171C4606: mov dword ptr [ebp - 0xc], eax */
    eax = (int32_t)(int16_t)MEM16(edx + 0x10); /* 0x171C4609: movsx eax, word ptr [edx + 0x10] */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x171C460D: imul eax, ecx */
    ecx = (int32_t)(int16_t)MEM16(edx + (-0x10)); /* 0x171C4610: movsx ecx, word ptr [edx - 0x10] */
    ebx = (int32_t)(int16_t)MEM16(esi + (-0x30)); /* 0x171C4614: movsx ebx, word ptr [esi - 0x30] */
    MEM32(ebp + 0x8) = eax; /* 0x171C4618: mov dword ptr [ebp + 8], eax */
    eax = (int32_t)(int16_t)MEM16(esi + (-0x10)); /* 0x171C461B: movsx eax, word ptr [esi - 0x10] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x171C461F: imul ecx, eax */
    eax = (int32_t)(int16_t)MEM16(edx + (-0x30)); /* 0x171C4622: movsx eax, word ptr [edx - 0x30] */
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx); /* 0x171C4626: imul eax, ebx */
    ebx = (int32_t)(int16_t)MEM16(esi + (-0x50)); /* 0x171C4629: movsx ebx, word ptr [esi - 0x50] */
    MEM32(ebp + 0x10) = eax; /* 0x171C462D: mov dword ptr [ebp + 0x10], eax */
    eax = (int32_t)(int16_t)MEM16(edx + (-0x50)); /* 0x171C4630: movsx eax, word ptr [edx - 0x50] */
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx); /* 0x171C4634: imul eax, ebx */
    ebx = MEM32(ebp + 0x10); /* 0x171C4637: mov ebx, dword ptr [ebp + 0x10] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x4587u); /* 0x171C463A: imul ebx, ebx, 0x4587 */
    MEM32(ebp + 0xC) = ecx; /* 0x171C4640: mov dword ptr [ebp + 0xc], ecx */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x2E75u); /* 0x171C4643: imul ecx, ecx, 0x2e75 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x171C4649: sub ecx, ebx */
    _flag_k = FK_CMP;
    ebx = eax; /* 0x171C464B: mov ebx, eax */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x5203u); /* 0x171C464D: imul eax, eax, 0x5203 */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x21F9u); /* 0x171C4653: imul ebx, ebx, 0x21f9 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x171C4659: add ecx, ebx */
    _flag_k = FK_ADD;
    ebx = MEM32(ebp + 0x8); /* 0x171C465B: mov ebx, dword ptr [ebp + 8] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x6C2u); /* 0x171C465E: imul ebx, ebx, 0x6c2 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x171C4664: sub ecx, ebx */
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + 0x10); /* 0x171C4666: mov ebx, dword ptr [ebp + 0x10] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x1CCDu); /* 0x171C4669: imul ebx, ebx, 0x1ccd */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x171C466F: add eax, ebx */
    _flag_k = FK_ADD;
    ebx = MEM32(ebp + 0xC); /* 0x171C4671: mov ebx, dword ptr [ebp + 0xc] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x133Eu); /* 0x171C4674: imul ebx, ebx, 0x133e */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x171C467A: sub eax, ebx */
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + 0x8); /* 0x171C467C: mov ebx, dword ptr [ebp + 8] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x1050u); /* 0x171C467F: imul ebx, ebx, 0x1050 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x171C4685: sub eax, ebx */
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + (-0x10)); /* 0x171C4687: mov ebx, dword ptr [ebp - 0x10] */
    MEM32(ebp + 0x8) = eax; /* 0x171C468A: mov dword ptr [ebp + 8], eax */
    eax = edi + eax + 0x800; /* 0x171C468D: lea eax, [edi + eax + 0x800] */
    if (12u) _cf = (((eax) >> 11) & 1u); /* 0x171C4694: sar eax, 0xc */
    if (12u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 12u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 12u);
    MEM32(ebx + (-0x20)) = eax; /* 0x171C4697: mov dword ptr [ebx - 0x20], eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(ebp + 0x8); /* 0x171C469A: sub edi, dword ptr [ebp + 8] */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0xC)); /* 0x171C469D: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x800u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x800u; /* 0x171C46A0: add edi, 0x800 */
    _flag_k = FK_ADD;
    if (12u) _cf = (((edi) >> 11) & 1u); /* 0x171C46A6: sar edi, 0xc */
    if (12u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> 12u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> 12u);
    MEM32(ebx + 0x40) = edi; /* 0x171C46A9: mov dword ptr [ebx + 0x40], edi */
    edi = eax + ecx + 0x800; /* 0x171C46AC: lea edi, [eax + ecx + 0x800] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x171C46B3: sub eax, ecx */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x4)); /* 0x171C46B5: mov ecx, dword ptr [ebp - 4] */
    if (12u) _cf = (((edi) >> 11) & 1u); /* 0x171C46B8: sar edi, 0xc */
    if (12u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> 12u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> 12u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x800u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x800u; /* 0x171C46BB: add eax, 0x800 */
    _flag_k = FK_ADD;
    MEM32(ebx) = edi; /* 0x171C46C0: mov dword ptr [ebx], edi */
    if (12u) _cf = (((eax) >> 11) & 1u); /* 0x171C46C2: sar eax, 0xc */
    if (12u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 12u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 12u);
L_171C46C5:
    MEM32(ebx + 0x20) = eax; /* 0x171C46C5: mov dword ptr [ebx + 0x20], eax */
L_171C46C8:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x171C46C8: add ebx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x171C46CB: add esi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 2; /* 0x171C46CE: add edx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x171C46D1: dec ecx */
    _flag_k = FK_DEC;
    /* test ecx, ecx */ /* 0x171C46D2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ebx; /* 0x171C46D4: mov dword ptr [ebp - 0x10], ebx */
    MEM32(ebp + (-0x4)) = ecx; /* 0x171C46D7: mov dword ptr [ebp - 4], ecx */
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_171C4580; /* 0x171C46DA: jg 0x171c4580 */
L_171C46E0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171C46E0: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = ebp + (-0x90); /* 0x171C46E2: lea ecx, [ebp - 0x90] */
    MEM32(ebp + (-0x4)) = esi; /* 0x171C46E8: mov dword ptr [ebp - 4], esi */
    goto L_171C46F0; /* 0x171C46EB: jmp 0x171c46f0 */
L_171C46F0:
    edx = MEM32(ebp + 0x14); /* 0x171C46F0: mov edx, dword ptr [ebp + 0x14] */
    eax = MEM32(edx + esi * 4); /* 0x171C46F3: mov eax, dword ptr [edx + esi*4] */
    ebx = MEM32(ebp + 0x18); /* 0x171C46F6: mov ebx, dword ptr [ebp + 0x18] */
    edx = MEM32(ecx + 0x4); /* 0x171C46F9: mov edx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x171C46FC: add eax, ebx */
    _flag_k = FK_ADD;
    /* test edx, edx */ /* 0x171C46FE: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = eax; /* 0x171C4700: mov dword ptr [ebp - 0xc], eax */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C474C; /* 0x171C4703: jne 0x171c474c */
L_171C4705:
    edi = MEM32(ecx + 0x8); /* 0x171C4705: mov edi, dword ptr [ecx + 8] */
    /* test edi, edi */ /* 0x171C4708: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C474C; /* 0x171C470A: jne 0x171c474c */
L_171C470C:
    edi = MEM32(ecx + 0xC); /* 0x171C470C: mov edi, dword ptr [ecx + 0xc] */
    /* test edi, edi */ /* 0x171C470F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C474C; /* 0x171C4711: jne 0x171c474c */
L_171C4713:
    edi = MEM32(ecx + 0x14); /* 0x171C4713: mov edi, dword ptr [ecx + 0x14] */
    /* test edi, edi */ /* 0x171C4716: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C474C; /* 0x171C4718: jne 0x171c474c */
L_171C471A:
    edi = MEM32(ecx + 0x18); /* 0x171C471A: mov edi, dword ptr [ecx + 0x18] */
    /* test edi, edi */ /* 0x171C471D: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C474C; /* 0x171C471F: jne 0x171c474c */
L_171C4721:
    edi = MEM32(ecx + 0x1C); /* 0x171C4721: mov edi, dword ptr [ecx + 0x1c] */
    /* test edi, edi */ /* 0x171C4724: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C474C; /* 0x171C4726: jne 0x171c474c */
L_171C4728:
    edx = MEM32(ecx); /* 0x171C4728: mov edx, dword ptr [ecx] */
    edi = MEM32(ebp + (-0x8)); /* 0x171C472A: mov edi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x10u; /* 0x171C472D: add edx, 0x10 */
    _flag_k = FK_ADD;
    if (5u) _cf = (((edx) >> 4) & 1u); /* 0x171C4730: sar edx, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 5u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x3FFu);
    edx = edx & 0x3FFu; /* 0x171C4733: and edx, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(edx, MEM8(edx + edi)); /* 0x171C4739: mov dl, byte ptr [edx + edi] */
    MEM8(eax) = (uint8_t)(LO8(edx)); /* 0x171C473C: mov byte ptr [eax], dl */
    MEM8(eax + 0x1) = (uint8_t)(LO8(edx)); /* 0x171C473E: mov byte ptr [eax + 1], dl */
    MEM8(eax + 0x2) = (uint8_t)(LO8(edx)); /* 0x171C4741: mov byte ptr [eax + 2], dl */
    MEM8(eax + 0x3) = (uint8_t)(LO8(edx)); /* 0x171C4744: mov byte ptr [eax + 3], dl */
    goto L_171C4835; /* 0x171C4747: jmp 0x171c4835 */
L_171C474C:
    eax = MEM32(ecx + 0x8); /* 0x171C474C: mov eax, dword ptr [ecx + 8] */
    esi = MEM32(ecx + 0x18); /* 0x171C474F: mov esi, dword ptr [ecx + 0x18] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3B21u); /* 0x171C4752: imul eax, eax, 0x3b21 */
    edi = MEM32(ecx); /* 0x171C4758: mov edi, dword ptr [ecx] */
    esi = (uint32_t)((int32_t)esi * (int32_t)0x187Eu); /* 0x171C475A: imul esi, esi, 0x187e */
    ebx = MEM32(ecx + 0xC); /* 0x171C4760: mov ebx, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x171C4763: sub eax, esi */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x10) = ebx; /* 0x171C4765: mov dword ptr [ebp + 0x10], ebx */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x4587u); /* 0x171C4768: imul ebx, ebx, 0x4587 */
    if (14u) _cf = (((edi) >> 18) & 1u); /* 0x171C476E: shl edi, 0xe */
    if (14u) { _flag_a = recomp_flags_pack((edi << 14u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 14u; /* 0x171C476E: shl edi, 0xe */
    esi = eax + edi; /* 0x171C4771: lea esi, [eax + edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x171C4774: sub edi, eax */
    _flag_k = FK_CMP;
    eax = MEM32(ecx + 0x1C); /* 0x171C4776: mov eax, dword ptr [ecx + 0x1c] */
    MEM32(ebp + 0x8) = eax; /* 0x171C4779: mov dword ptr [ebp + 8], eax */
    eax = MEM32(ecx + 0x14); /* 0x171C477C: mov eax, dword ptr [ecx + 0x14] */
    MEM32(ebp + 0xC) = eax; /* 0x171C477F: mov dword ptr [ebp + 0xc], eax */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x2E75u); /* 0x171C4782: imul eax, eax, 0x2e75 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x171C4788: sub eax, ebx */
    _flag_k = FK_CMP;
    ebx = edx; /* 0x171C478A: mov ebx, edx */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x5203u); /* 0x171C478C: imul edx, edx, 0x5203 */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x21F9u); /* 0x171C4792: imul ebx, ebx, 0x21f9 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x171C4798: add eax, ebx */
    _flag_k = FK_ADD;
    ebx = MEM32(ebp + 0x8); /* 0x171C479A: mov ebx, dword ptr [ebp + 8] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x6C2u); /* 0x171C479D: imul ebx, ebx, 0x6c2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x171C47A3: sub eax, ebx */
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + 0x10); /* 0x171C47A5: mov ebx, dword ptr [ebp + 0x10] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x1CCDu); /* 0x171C47A8: imul ebx, ebx, 0x1ccd */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ebx; /* 0x171C47AE: add edx, ebx */
    _flag_k = FK_ADD;
    ebx = MEM32(ebp + 0xC); /* 0x171C47B0: mov ebx, dword ptr [ebp + 0xc] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x133Eu); /* 0x171C47B3: imul ebx, ebx, 0x133e */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ebx; /* 0x171C47B9: sub edx, ebx */
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + 0x8); /* 0x171C47BB: mov ebx, dword ptr [ebp + 8] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x1050u); /* 0x171C47BE: imul ebx, ebx, 0x1050 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ebx; /* 0x171C47C4: sub edx, ebx */
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + (-0x8)); /* 0x171C47C6: mov ebx, dword ptr [ebp - 8] */
    MEM32(ebp + 0x8) = edx; /* 0x171C47C9: mov dword ptr [ebp + 8], edx */
    edx = esi + edx + 0x40000; /* 0x171C47CC: lea edx, [esi + edx + 0x40000] */
    if (19u) _cf = (((edx) >> 18) & 1u); /* 0x171C47D3: sar edx, 0x13 */
    if (19u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 19u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 19u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x3FFu);
    edx = edx & 0x3FFu; /* 0x171C47D6: and edx, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ebx, MEM8(edx + ebx)); /* 0x171C47DC: mov bl, byte ptr [edx + ebx] */
    edx = MEM32(ebp + (-0xC)); /* 0x171C47DF: mov edx, dword ptr [ebp - 0xc] */
    MEM8(edx) = (uint8_t)(LO8(ebx)); /* 0x171C47E2: mov byte ptr [edx], bl */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebp + 0x8); /* 0x171C47E4: sub esi, dword ptr [ebp + 8] */
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + (-0x8)); /* 0x171C47E7: mov ebx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x00040000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x00040000u; /* 0x171C47EA: add esi, 0x40000 */
    _flag_k = FK_ADD;
    if (19u) _cf = (((esi) >> 18) & 1u); /* 0x171C47F0: sar esi, 0x13 */
    if (19u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 19u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 19u);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x3FFu);
    esi = esi & 0x3FFu; /* 0x171C47F3: and esi, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ebx, MEM8(esi + ebx)); /* 0x171C47F9: mov bl, byte ptr [esi + ebx] */
    esi = edi + eax + 0x40000; /* 0x171C47FC: lea esi, [edi + eax + 0x40000] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x171C4803: sub edi, eax */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x8)); /* 0x171C4805: mov eax, dword ptr [ebp - 8] */
    if (19u) _cf = (((esi) >> 18) & 1u); /* 0x171C4808: sar esi, 0x13 */
    if (19u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 19u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 19u);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x00040000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x00040000u; /* 0x171C480B: add edi, 0x40000 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x3FFu);
    esi = esi & 0x3FFu; /* 0x171C4811: and esi, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(edx + 0x3) = (uint8_t)(LO8(ebx)); /* 0x171C4817: mov byte ptr [edx + 3], bl */
    ebx = MEM32(ebp + (-0x8)); /* 0x171C481A: mov ebx, dword ptr [ebp - 8] */
    SET_LO8(ebx, MEM8(esi + ebx)); /* 0x171C481D: mov bl, byte ptr [esi + ebx] */
    esi = MEM32(ebp + (-0x4)); /* 0x171C4820: mov esi, dword ptr [ebp - 4] */
    if (19u) _cf = (((edi) >> 18) & 1u); /* 0x171C4823: sar edi, 0x13 */
    if (19u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> 19u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> 19u);
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x3FFu);
    edi = edi & 0x3FFu; /* 0x171C4826: and edi, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, MEM8(edi + eax)); /* 0x171C482C: mov al, byte ptr [edi + eax] */
    MEM8(edx + 0x1) = (uint8_t)(LO8(ebx)); /* 0x171C482F: mov byte ptr [edx + 1], bl */
    MEM8(edx + 0x2) = (uint8_t)(LO8(eax)); /* 0x171C4832: mov byte ptr [edx + 2], al */
L_171C4835:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x20u; /* 0x171C4835: add ecx, 0x20 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171C4838: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, 4 */ /* 0x171C4839: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = esi; /* 0x171C483C: mov dword ptr [ebp - 4], esi */
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171C46F0; /* 0x171C483F: jl 0x171c46f0 */
L_171C4845:
    edi = POP32_VAL(esp); /* 0x171C4845: pop edi */
    esi = POP32_VAL(esp); /* 0x171C4846: pop esi */
    ebx = POP32_VAL(esp); /* 0x171C4847: pop ebx */
    esp = ebp; /* 0x171C4848: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171C484A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x171C484B: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_171C4860(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C4860u);

L_171C4860:
    edi = edi; /* 0x171C4860: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C4862: push ebp */
    ebp = esp; /* 0x171C4863: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x44u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x44u; /* 0x171C4865: sub esp, 0x44 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x171C4868: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x148); /* 0x171C486B: mov eax, dword ptr [eax + 0x148] */
    ecx = MEM32(ebp + 0xC); /* 0x171C4871: mov ecx, dword ptr [ebp + 0xc] */
    ecx = MEM32(ecx + 0x50); /* 0x171C4874: mov ecx, dword ptr [ecx + 0x50] */
    PUSH32(esp, ebx); /* 0x171C4877: push ebx */
    PUSH32(esp, esi); /* 0x171C4878: push esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x80u; /* 0x171C4879: add eax, 0x80 */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x171C487E: push edi */
    MEM32(ebp + (-0x4)) = eax; /* 0x171C487F: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x10); /* 0x171C4882: mov eax, dword ptr [ebp + 0x10] */
    edi = 6; /* 0x171C4885: mov edi, 6 */
    edx = ebp + (-0x44); /* 0x171C488A: lea edx, [ebp - 0x44] */
    MEM32(ebp + 0x10) = edi; /* 0x171C488D: mov dword ptr [ebp + 0x10], edi */
L_171C4890:
    esi = edi + 0x2; /* 0x171C4890: lea esi, [edi + 2] */
    /* cmp esi, 6 */ /* 0x171C4893: cmp esi, 6 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C4953; /* 0x171C4896: je 0x171c4953 */
L_171C489C:
    /* cmp esi, 4 */ /* 0x171C489C: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C4953; /* 0x171C489F: je 0x171c4953 */
L_171C48A5:
    /* cmp esi, 2 */ /* 0x171C48A5: cmp esi, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C4953; /* 0x171C48A8: je 0x171c4953 */
L_171C48AE:
    /* cmp MEM16(eax + 0x10), 0 */ /* 0x171C48AE: cmp word ptr [eax + 0x10], 0 */
    _flag_a = (uint32_t)(MEM16(eax + 0x10)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C48DA; /* 0x171C48B3: jne 0x171c48da */
L_171C48B5:
    /* cmp MEM16(eax + 0x30), 0 */ /* 0x171C48B5: cmp word ptr [eax + 0x30], 0 */
    _flag_a = (uint32_t)(MEM16(eax + 0x30)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C48DA; /* 0x171C48BA: jne 0x171c48da */
L_171C48BC:
    /* cmp MEM16(eax + 0x50), 0 */ /* 0x171C48BC: cmp word ptr [eax + 0x50], 0 */
    _flag_a = (uint32_t)(MEM16(eax + 0x50)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C48DA; /* 0x171C48C1: jne 0x171c48da */
L_171C48C3:
    /* cmp MEM16(eax + 0x70), 0 */ /* 0x171C48C3: cmp word ptr [eax + 0x70], 0 */
    _flag_a = (uint32_t)(MEM16(eax + 0x70)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C48DA; /* 0x171C48C8: jne 0x171c48da */
L_171C48CA:
    esi = (int32_t)(int16_t)MEM16(eax); /* 0x171C48CA: movsx esi, word ptr [eax] */
    ebx = (int32_t)(int16_t)MEM16(ecx); /* 0x171C48CD: movsx ebx, word ptr [ecx] */
    esi = (uint32_t)((int32_t)esi * (int32_t)ebx); /* 0x171C48D0: imul esi, ebx */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x171C48D3: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x171C48D3: shl esi, 2 */
    MEM32(edx) = esi; /* 0x171C48D6: mov dword ptr [edx], esi */
    goto L_171C4950; /* 0x171C48D8: jmp 0x171c4950 */
L_171C48DA:
    edi = (int32_t)(int16_t)MEM16(ecx); /* 0x171C48DA: movsx edi, word ptr [ecx] */
    esi = (int32_t)(int16_t)MEM16(eax); /* 0x171C48DD: movsx esi, word ptr [eax] */
    esi = (uint32_t)((int32_t)esi * (int32_t)edi); /* 0x171C48E0: imul esi, edi */
    edi = (int32_t)(int16_t)MEM16(eax + 0x30); /* 0x171C48E3: movsx edi, word ptr [eax + 0x30] */
    ebx = (int32_t)(int16_t)MEM16(eax + 0x50); /* 0x171C48E7: movsx ebx, word ptr [eax + 0x50] */
    if (15u) _cf = (((esi) >> 17) & 1u); /* 0x171C48EB: shl esi, 0xf */
    if (15u) { _flag_a = recomp_flags_pack((esi << 15u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 15u; /* 0x171C48EB: shl esi, 0xf */
    MEM32(ebp + 0x8) = esi; /* 0x171C48EE: mov dword ptr [ebp + 8], esi */
    esi = (int32_t)(int16_t)MEM16(ecx + 0x30); /* 0x171C48F1: movsx esi, word ptr [ecx + 0x30] */
    esi = (uint32_t)((int32_t)esi * (int32_t)edi); /* 0x171C48F5: imul esi, edi */
    edi = (int32_t)(int16_t)MEM16(ecx + 0x50); /* 0x171C48F8: movsx edi, word ptr [ecx + 0x50] */
    esi = (uint32_t)((int32_t)esi * (int32_t)0x28BAu); /* 0x171C48FC: imul esi, esi, 0x28ba */
    edi = (uint32_t)((int32_t)edi * (int32_t)ebx); /* 0x171C4902: imul edi, ebx */
    ebx = (int32_t)(int16_t)MEM16(eax + 0x70); /* 0x171C4905: movsx ebx, word ptr [eax + 0x70] */
    edi = (uint32_t)((int32_t)edi * (int32_t)0x1B37u); /* 0x171C4909: imul edi, edi, 0x1b37 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - esi; /* 0x171C490F: sub edi, esi */
    _flag_k = FK_CMP;
    esi = (int32_t)(int16_t)MEM16(ecx + 0x70); /* 0x171C4911: movsx esi, word ptr [ecx + 0x70] */
    esi = (uint32_t)((int32_t)esi * (int32_t)ebx); /* 0x171C4915: imul esi, ebx */
    ebx = (int32_t)(int16_t)MEM16(eax + 0x10); /* 0x171C4918: movsx ebx, word ptr [eax + 0x10] */
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1712u); /* 0x171C491C: imul esi, esi, 0x1712 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - esi; /* 0x171C4922: sub edi, esi */
    _flag_k = FK_CMP;
    esi = (int32_t)(int16_t)MEM16(ecx + 0x10); /* 0x171C4924: movsx esi, word ptr [ecx + 0x10] */
    esi = (uint32_t)((int32_t)esi * (int32_t)ebx); /* 0x171C4928: imul esi, ebx */
    esi = (uint32_t)((int32_t)esi * (int32_t)0x73FCu); /* 0x171C492B: imul esi, esi, 0x73fc */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x171C4931: add edi, esi */
    _flag_k = FK_ADD;
    esi = MEM32(ebp + 0x8); /* 0x171C4933: mov esi, dword ptr [ebp + 8] */
    ebx = edi + esi + 0x1000; /* 0x171C4936: lea ebx, [edi + esi + 0x1000] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x171C493D: sub esi, edi */
    _flag_k = FK_CMP;
    edi = MEM32(ebp + 0x10); /* 0x171C493F: mov edi, dword ptr [ebp + 0x10] */
    if (13u) _cf = (((ebx) >> 12) & 1u); /* 0x171C4942: sar ebx, 0xd */
    if (13u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 13u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 13u);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x1000u; /* 0x171C4945: add esi, 0x1000 */
    _flag_k = FK_ADD;
    MEM32(edx) = ebx; /* 0x171C494B: mov dword ptr [edx], ebx */
    if (13u) _cf = (((esi) >> 12) & 1u); /* 0x171C494D: sar esi, 0xd */
    if (13u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 13u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 13u);
L_171C4950:
    MEM32(edx + 0x20) = esi; /* 0x171C4950: mov dword ptr [edx + 0x20], esi */
L_171C4953:
    esi = edi + 0x1; /* 0x171C4953: lea esi, [edi + 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x171C4956: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x171C4959: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x171C495C: add edx, 4 */
    _flag_k = FK_ADD;
    /* cmp esi, 6 */ /* 0x171C495F: cmp esi, 6 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C4A1F; /* 0x171C4962: je 0x171c4a1f */
L_171C4968:
    /* cmp esi, 4 */ /* 0x171C4968: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C4A1F; /* 0x171C496B: je 0x171c4a1f */
L_171C4971:
    /* cmp esi, 2 */ /* 0x171C4971: cmp esi, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C4A1F; /* 0x171C4974: je 0x171c4a1f */
L_171C497A:
    /* cmp MEM16(eax + 0x10), 0 */ /* 0x171C497A: cmp word ptr [eax + 0x10], 0 */
    _flag_a = (uint32_t)(MEM16(eax + 0x10)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C49A6; /* 0x171C497F: jne 0x171c49a6 */
L_171C4981:
    /* cmp MEM16(eax + 0x30), 0 */ /* 0x171C4981: cmp word ptr [eax + 0x30], 0 */
    _flag_a = (uint32_t)(MEM16(eax + 0x30)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C49A6; /* 0x171C4986: jne 0x171c49a6 */
L_171C4988:
    /* cmp MEM16(eax + 0x50), 0 */ /* 0x171C4988: cmp word ptr [eax + 0x50], 0 */
    _flag_a = (uint32_t)(MEM16(eax + 0x50)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C49A6; /* 0x171C498D: jne 0x171c49a6 */
L_171C498F:
    /* cmp MEM16(eax + 0x70), 0 */ /* 0x171C498F: cmp word ptr [eax + 0x70], 0 */
    _flag_a = (uint32_t)(MEM16(eax + 0x70)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C49A6; /* 0x171C4994: jne 0x171c49a6 */
L_171C4996:
    esi = (int32_t)(int16_t)MEM16(eax); /* 0x171C4996: movsx esi, word ptr [eax] */
    ebx = (int32_t)(int16_t)MEM16(ecx); /* 0x171C4999: movsx ebx, word ptr [ecx] */
    esi = (uint32_t)((int32_t)esi * (int32_t)ebx); /* 0x171C499C: imul esi, ebx */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x171C499F: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x171C499F: shl esi, 2 */
    MEM32(edx) = esi; /* 0x171C49A2: mov dword ptr [edx], esi */
    goto L_171C4A1C; /* 0x171C49A4: jmp 0x171c4a1c */
L_171C49A6:
    edi = (int32_t)(int16_t)MEM16(ecx); /* 0x171C49A6: movsx edi, word ptr [ecx] */
    esi = (int32_t)(int16_t)MEM16(eax); /* 0x171C49A9: movsx esi, word ptr [eax] */
    esi = (uint32_t)((int32_t)esi * (int32_t)edi); /* 0x171C49AC: imul esi, edi */
    edi = (int32_t)(int16_t)MEM16(eax + 0x30); /* 0x171C49AF: movsx edi, word ptr [eax + 0x30] */
    ebx = (int32_t)(int16_t)MEM16(eax + 0x50); /* 0x171C49B3: movsx ebx, word ptr [eax + 0x50] */
    if (15u) _cf = (((esi) >> 17) & 1u); /* 0x171C49B7: shl esi, 0xf */
    if (15u) { _flag_a = recomp_flags_pack((esi << 15u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 15u; /* 0x171C49B7: shl esi, 0xf */
    MEM32(ebp + 0x8) = esi; /* 0x171C49BA: mov dword ptr [ebp + 8], esi */
    esi = (int32_t)(int16_t)MEM16(ecx + 0x30); /* 0x171C49BD: movsx esi, word ptr [ecx + 0x30] */
    esi = (uint32_t)((int32_t)esi * (int32_t)edi); /* 0x171C49C1: imul esi, edi */
    edi = (int32_t)(int16_t)MEM16(ecx + 0x50); /* 0x171C49C4: movsx edi, word ptr [ecx + 0x50] */
    esi = (uint32_t)((int32_t)esi * (int32_t)0x28BAu); /* 0x171C49C8: imul esi, esi, 0x28ba */
    edi = (uint32_t)((int32_t)edi * (int32_t)ebx); /* 0x171C49CE: imul edi, ebx */
    ebx = (int32_t)(int16_t)MEM16(eax + 0x70); /* 0x171C49D1: movsx ebx, word ptr [eax + 0x70] */
    edi = (uint32_t)((int32_t)edi * (int32_t)0x1B37u); /* 0x171C49D5: imul edi, edi, 0x1b37 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - esi; /* 0x171C49DB: sub edi, esi */
    _flag_k = FK_CMP;
    esi = (int32_t)(int16_t)MEM16(ecx + 0x70); /* 0x171C49DD: movsx esi, word ptr [ecx + 0x70] */
    esi = (uint32_t)((int32_t)esi * (int32_t)ebx); /* 0x171C49E1: imul esi, ebx */
    ebx = (int32_t)(int16_t)MEM16(eax + 0x10); /* 0x171C49E4: movsx ebx, word ptr [eax + 0x10] */
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1712u); /* 0x171C49E8: imul esi, esi, 0x1712 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - esi; /* 0x171C49EE: sub edi, esi */
    _flag_k = FK_CMP;
    esi = (int32_t)(int16_t)MEM16(ecx + 0x10); /* 0x171C49F0: movsx esi, word ptr [ecx + 0x10] */
    esi = (uint32_t)((int32_t)esi * (int32_t)ebx); /* 0x171C49F4: imul esi, ebx */
    esi = (uint32_t)((int32_t)esi * (int32_t)0x73FCu); /* 0x171C49F7: imul esi, esi, 0x73fc */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x171C49FD: add edi, esi */
    _flag_k = FK_ADD;
    esi = MEM32(ebp + 0x8); /* 0x171C49FF: mov esi, dword ptr [ebp + 8] */
    ebx = edi + esi + 0x1000; /* 0x171C4A02: lea ebx, [edi + esi + 0x1000] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x171C4A09: sub esi, edi */
    _flag_k = FK_CMP;
    edi = MEM32(ebp + 0x10); /* 0x171C4A0B: mov edi, dword ptr [ebp + 0x10] */
    if (13u) _cf = (((ebx) >> 12) & 1u); /* 0x171C4A0E: sar ebx, 0xd */
    if (13u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 13u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 13u);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x1000u; /* 0x171C4A11: add esi, 0x1000 */
    _flag_k = FK_ADD;
    MEM32(edx) = ebx; /* 0x171C4A17: mov dword ptr [edx], ebx */
    if (13u) _cf = (((esi) >> 12) & 1u); /* 0x171C4A19: sar esi, 0xd */
    if (13u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 13u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 13u);
L_171C4A1C:
    MEM32(edx + 0x20) = esi; /* 0x171C4A1C: mov dword ptr [edx + 0x20], esi */
L_171C4A1F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x171C4A1F: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x171C4A22: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x171C4A25: add edx, 4 */
    _flag_k = FK_ADD;
    /* cmp edi, 6 */ /* 0x171C4A28: cmp edi, 6 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C4AE8; /* 0x171C4A2B: je 0x171c4ae8 */
L_171C4A31:
    /* cmp edi, 4 */ /* 0x171C4A31: cmp edi, 4 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C4AE8; /* 0x171C4A34: je 0x171c4ae8 */
L_171C4A3A:
    /* cmp edi, 2 */ /* 0x171C4A3A: cmp edi, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C4AE8; /* 0x171C4A3D: je 0x171c4ae8 */
L_171C4A43:
    /* cmp MEM16(eax + 0x10), 0 */ /* 0x171C4A43: cmp word ptr [eax + 0x10], 0 */
    _flag_a = (uint32_t)(MEM16(eax + 0x10)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C4A6F; /* 0x171C4A48: jne 0x171c4a6f */
L_171C4A4A:
    /* cmp MEM16(eax + 0x30), 0 */ /* 0x171C4A4A: cmp word ptr [eax + 0x30], 0 */
    _flag_a = (uint32_t)(MEM16(eax + 0x30)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C4A6F; /* 0x171C4A4F: jne 0x171c4a6f */
L_171C4A51:
    /* cmp MEM16(eax + 0x50), 0 */ /* 0x171C4A51: cmp word ptr [eax + 0x50], 0 */
    _flag_a = (uint32_t)(MEM16(eax + 0x50)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C4A6F; /* 0x171C4A56: jne 0x171c4a6f */
L_171C4A58:
    /* cmp MEM16(eax + 0x70), 0 */ /* 0x171C4A58: cmp word ptr [eax + 0x70], 0 */
    _flag_a = (uint32_t)(MEM16(eax + 0x70)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C4A6F; /* 0x171C4A5D: jne 0x171c4a6f */
L_171C4A5F:
    esi = (int32_t)(int16_t)MEM16(eax); /* 0x171C4A5F: movsx esi, word ptr [eax] */
    ebx = (int32_t)(int16_t)MEM16(ecx); /* 0x171C4A62: movsx ebx, word ptr [ecx] */
    esi = (uint32_t)((int32_t)esi * (int32_t)ebx); /* 0x171C4A65: imul esi, ebx */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x171C4A68: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x171C4A68: shl esi, 2 */
    MEM32(edx) = esi; /* 0x171C4A6B: mov dword ptr [edx], esi */
    goto L_171C4AE5; /* 0x171C4A6D: jmp 0x171c4ae5 */
L_171C4A6F:
    edi = (int32_t)(int16_t)MEM16(ecx); /* 0x171C4A6F: movsx edi, word ptr [ecx] */
    esi = (int32_t)(int16_t)MEM16(eax); /* 0x171C4A72: movsx esi, word ptr [eax] */
    esi = (uint32_t)((int32_t)esi * (int32_t)edi); /* 0x171C4A75: imul esi, edi */
    edi = (int32_t)(int16_t)MEM16(eax + 0x30); /* 0x171C4A78: movsx edi, word ptr [eax + 0x30] */
    ebx = (int32_t)(int16_t)MEM16(eax + 0x50); /* 0x171C4A7C: movsx ebx, word ptr [eax + 0x50] */
    if (15u) _cf = (((esi) >> 17) & 1u); /* 0x171C4A80: shl esi, 0xf */
    if (15u) { _flag_a = recomp_flags_pack((esi << 15u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 15u; /* 0x171C4A80: shl esi, 0xf */
    MEM32(ebp + 0x8) = esi; /* 0x171C4A83: mov dword ptr [ebp + 8], esi */
    esi = (int32_t)(int16_t)MEM16(ecx + 0x30); /* 0x171C4A86: movsx esi, word ptr [ecx + 0x30] */
    esi = (uint32_t)((int32_t)esi * (int32_t)edi); /* 0x171C4A8A: imul esi, edi */
    edi = (int32_t)(int16_t)MEM16(ecx + 0x50); /* 0x171C4A8D: movsx edi, word ptr [ecx + 0x50] */
    esi = (uint32_t)((int32_t)esi * (int32_t)0x28BAu); /* 0x171C4A91: imul esi, esi, 0x28ba */
    edi = (uint32_t)((int32_t)edi * (int32_t)ebx); /* 0x171C4A97: imul edi, ebx */
    ebx = (int32_t)(int16_t)MEM16(eax + 0x70); /* 0x171C4A9A: movsx ebx, word ptr [eax + 0x70] */
    edi = (uint32_t)((int32_t)edi * (int32_t)0x1B37u); /* 0x171C4A9E: imul edi, edi, 0x1b37 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - esi; /* 0x171C4AA4: sub edi, esi */
    _flag_k = FK_CMP;
    esi = (int32_t)(int16_t)MEM16(ecx + 0x70); /* 0x171C4AA6: movsx esi, word ptr [ecx + 0x70] */
    esi = (uint32_t)((int32_t)esi * (int32_t)ebx); /* 0x171C4AAA: imul esi, ebx */
    ebx = (int32_t)(int16_t)MEM16(eax + 0x10); /* 0x171C4AAD: movsx ebx, word ptr [eax + 0x10] */
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1712u); /* 0x171C4AB1: imul esi, esi, 0x1712 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - esi; /* 0x171C4AB7: sub edi, esi */
    _flag_k = FK_CMP;
    esi = (int32_t)(int16_t)MEM16(ecx + 0x10); /* 0x171C4AB9: movsx esi, word ptr [ecx + 0x10] */
    esi = (uint32_t)((int32_t)esi * (int32_t)ebx); /* 0x171C4ABD: imul esi, ebx */
    esi = (uint32_t)((int32_t)esi * (int32_t)0x73FCu); /* 0x171C4AC0: imul esi, esi, 0x73fc */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x171C4AC6: add edi, esi */
    _flag_k = FK_ADD;
    esi = MEM32(ebp + 0x8); /* 0x171C4AC8: mov esi, dword ptr [ebp + 8] */
    ebx = edi + esi + 0x1000; /* 0x171C4ACB: lea ebx, [edi + esi + 0x1000] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x171C4AD2: sub esi, edi */
    _flag_k = FK_CMP;
    edi = MEM32(ebp + 0x10); /* 0x171C4AD4: mov edi, dword ptr [ebp + 0x10] */
    if (13u) _cf = (((ebx) >> 12) & 1u); /* 0x171C4AD7: sar ebx, 0xd */
    if (13u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 13u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 13u);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x1000u; /* 0x171C4ADA: add esi, 0x1000 */
    _flag_k = FK_ADD;
    MEM32(edx) = ebx; /* 0x171C4AE0: mov dword ptr [edx], ebx */
    if (13u) _cf = (((esi) >> 12) & 1u); /* 0x171C4AE2: sar esi, 0xd */
    if (13u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 13u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 13u);
L_171C4AE5:
    MEM32(edx + 0x20) = esi; /* 0x171C4AE5: mov dword ptr [edx + 0x20], esi */
L_171C4AE8:
    esi = edi + (-0x1); /* 0x171C4AE8: lea esi, [edi - 1] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x171C4AEB: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x171C4AEE: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x171C4AF1: add edx, 4 */
    _flag_k = FK_ADD;
    /* cmp esi, 6 */ /* 0x171C4AF4: cmp esi, 6 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C4BB4; /* 0x171C4AF7: je 0x171c4bb4 */
L_171C4AFD:
    /* cmp esi, 4 */ /* 0x171C4AFD: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C4BB4; /* 0x171C4B00: je 0x171c4bb4 */
L_171C4B06:
    /* cmp esi, 2 */ /* 0x171C4B06: cmp esi, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C4BB4; /* 0x171C4B09: je 0x171c4bb4 */
L_171C4B0F:
    /* cmp MEM16(eax + 0x10), 0 */ /* 0x171C4B0F: cmp word ptr [eax + 0x10], 0 */
    _flag_a = (uint32_t)(MEM16(eax + 0x10)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C4B3B; /* 0x171C4B14: jne 0x171c4b3b */
L_171C4B16:
    /* cmp MEM16(eax + 0x30), 0 */ /* 0x171C4B16: cmp word ptr [eax + 0x30], 0 */
    _flag_a = (uint32_t)(MEM16(eax + 0x30)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C4B3B; /* 0x171C4B1B: jne 0x171c4b3b */
L_171C4B1D:
    /* cmp MEM16(eax + 0x50), 0 */ /* 0x171C4B1D: cmp word ptr [eax + 0x50], 0 */
    _flag_a = (uint32_t)(MEM16(eax + 0x50)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C4B3B; /* 0x171C4B22: jne 0x171c4b3b */
L_171C4B24:
    /* cmp MEM16(eax + 0x70), 0 */ /* 0x171C4B24: cmp word ptr [eax + 0x70], 0 */
    _flag_a = (uint32_t)(MEM16(eax + 0x70)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C4B3B; /* 0x171C4B29: jne 0x171c4b3b */
L_171C4B2B:
    esi = (int32_t)(int16_t)MEM16(eax); /* 0x171C4B2B: movsx esi, word ptr [eax] */
    ebx = (int32_t)(int16_t)MEM16(ecx); /* 0x171C4B2E: movsx ebx, word ptr [ecx] */
    esi = (uint32_t)((int32_t)esi * (int32_t)ebx); /* 0x171C4B31: imul esi, ebx */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x171C4B34: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x171C4B34: shl esi, 2 */
    MEM32(edx) = esi; /* 0x171C4B37: mov dword ptr [edx], esi */
    goto L_171C4BB1; /* 0x171C4B39: jmp 0x171c4bb1 */
L_171C4B3B:
    edi = (int32_t)(int16_t)MEM16(ecx); /* 0x171C4B3B: movsx edi, word ptr [ecx] */
    esi = (int32_t)(int16_t)MEM16(eax); /* 0x171C4B3E: movsx esi, word ptr [eax] */
    esi = (uint32_t)((int32_t)esi * (int32_t)edi); /* 0x171C4B41: imul esi, edi */
    edi = (int32_t)(int16_t)MEM16(eax + 0x30); /* 0x171C4B44: movsx edi, word ptr [eax + 0x30] */
    ebx = (int32_t)(int16_t)MEM16(eax + 0x50); /* 0x171C4B48: movsx ebx, word ptr [eax + 0x50] */
    if (15u) _cf = (((esi) >> 17) & 1u); /* 0x171C4B4C: shl esi, 0xf */
    if (15u) { _flag_a = recomp_flags_pack((esi << 15u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 15u; /* 0x171C4B4C: shl esi, 0xf */
    MEM32(ebp + 0x8) = esi; /* 0x171C4B4F: mov dword ptr [ebp + 8], esi */
    esi = (int32_t)(int16_t)MEM16(ecx + 0x30); /* 0x171C4B52: movsx esi, word ptr [ecx + 0x30] */
    esi = (uint32_t)((int32_t)esi * (int32_t)edi); /* 0x171C4B56: imul esi, edi */
    edi = (int32_t)(int16_t)MEM16(ecx + 0x50); /* 0x171C4B59: movsx edi, word ptr [ecx + 0x50] */
    esi = (uint32_t)((int32_t)esi * (int32_t)0x28BAu); /* 0x171C4B5D: imul esi, esi, 0x28ba */
    edi = (uint32_t)((int32_t)edi * (int32_t)ebx); /* 0x171C4B63: imul edi, ebx */
    ebx = (int32_t)(int16_t)MEM16(eax + 0x70); /* 0x171C4B66: movsx ebx, word ptr [eax + 0x70] */
    edi = (uint32_t)((int32_t)edi * (int32_t)0x1B37u); /* 0x171C4B6A: imul edi, edi, 0x1b37 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - esi; /* 0x171C4B70: sub edi, esi */
    _flag_k = FK_CMP;
    esi = (int32_t)(int16_t)MEM16(ecx + 0x70); /* 0x171C4B72: movsx esi, word ptr [ecx + 0x70] */
    esi = (uint32_t)((int32_t)esi * (int32_t)ebx); /* 0x171C4B76: imul esi, ebx */
    ebx = (int32_t)(int16_t)MEM16(eax + 0x10); /* 0x171C4B79: movsx ebx, word ptr [eax + 0x10] */
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1712u); /* 0x171C4B7D: imul esi, esi, 0x1712 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - esi; /* 0x171C4B83: sub edi, esi */
    _flag_k = FK_CMP;
    esi = (int32_t)(int16_t)MEM16(ecx + 0x10); /* 0x171C4B85: movsx esi, word ptr [ecx + 0x10] */
    esi = (uint32_t)((int32_t)esi * (int32_t)ebx); /* 0x171C4B89: imul esi, ebx */
    esi = (uint32_t)((int32_t)esi * (int32_t)0x73FCu); /* 0x171C4B8C: imul esi, esi, 0x73fc */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + esi; /* 0x171C4B92: add edi, esi */
    _flag_k = FK_ADD;
    esi = MEM32(ebp + 0x8); /* 0x171C4B94: mov esi, dword ptr [ebp + 8] */
    ebx = edi + esi + 0x1000; /* 0x171C4B97: lea ebx, [edi + esi + 0x1000] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edi; /* 0x171C4B9E: sub esi, edi */
    _flag_k = FK_CMP;
    edi = MEM32(ebp + 0x10); /* 0x171C4BA0: mov edi, dword ptr [ebp + 0x10] */
    if (13u) _cf = (((ebx) >> 12) & 1u); /* 0x171C4BA3: sar ebx, 0xd */
    if (13u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 13u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 13u);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x1000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x1000u; /* 0x171C4BA6: add esi, 0x1000 */
    _flag_k = FK_ADD;
    MEM32(edx) = ebx; /* 0x171C4BAC: mov dword ptr [edx], ebx */
    if (13u) _cf = (((esi) >> 12) & 1u); /* 0x171C4BAE: sar esi, 0xd */
    if (13u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 13u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 13u);
L_171C4BB1:
    MEM32(edx + 0x20) = esi; /* 0x171C4BB1: mov dword ptr [edx + 0x20], esi */
L_171C4BB4:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 4; /* 0x171C4BB4: sub edi, 4 */
    _flag_k = FK_CMP;
    esi = edi + 0x2; /* 0x171C4BB7: lea esi, [edi + 2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x171C4BBA: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x171C4BBD: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x171C4BC0: add edx, 4 */
    _flag_k = FK_ADD;
    /* test esi, esi */ /* 0x171C4BC3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = edi; /* 0x171C4BC5: mov dword ptr [ebp + 0x10], edi */
    RECOMP_BACKEDGE();
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_171C4890; /* 0x171C4BC8: jg 0x171c4890 */
L_171C4BCE:
    edx = MEM32(ebp + 0x14); /* 0x171C4BCE: mov edx, dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + 0x18); /* 0x171C4BD1: mov ecx, dword ptr [ebp + 0x18] */
    edx = MEM32(edx); /* 0x171C4BD4: mov edx, dword ptr [edx] */
    esi = MEM32(ebp + (-0x28)); /* 0x171C4BD6: mov esi, dword ptr [ebp - 0x28] */
    edi = MEM32(ebp + (-0x30)); /* 0x171C4BD9: mov edi, dword ptr [ebp - 0x30] */
    ebx = MEM32(ebp + (-0x38)); /* 0x171C4BDC: mov ebx, dword ptr [ebp - 0x38] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x171C4BDF: add edx, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x40)); /* 0x171C4BE1: mov ecx, dword ptr [ebp - 0x40] */
    /* test ecx, ecx */ /* 0x171C4BE4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C4C0C; /* 0x171C4BE6: jne 0x171c4c0c */
L_171C4BE8:
    /* test ebx, ebx */ /* 0x171C4BE8: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C4C0C; /* 0x171C4BEA: jne 0x171c4c0c */
L_171C4BEC:
    /* test edi, edi */ /* 0x171C4BEC: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C4C0C; /* 0x171C4BEE: jne 0x171c4c0c */
L_171C4BF0:
    /* test esi, esi */ /* 0x171C4BF0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C4C0C; /* 0x171C4BF2: jne 0x171c4c0c */
L_171C4BF4:
    eax = MEM32(ebp + (-0x44)); /* 0x171C4BF4: mov eax, dword ptr [ebp - 0x44] */
    ecx = MEM32(ebp + (-0x4)); /* 0x171C4BF7: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x171C4BFA: add eax, 0x10 */
    _flag_k = FK_ADD;
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x171C4BFD: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFu);
    eax = eax & 0x3FFu; /* 0x171C4C00: and eax, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, MEM8(eax + ecx)); /* 0x171C4C05: mov al, byte ptr [eax + ecx] */
    MEM8(edx) = (uint8_t)(LO8(eax)); /* 0x171C4C08: mov byte ptr [edx], al */
    goto L_171C4C5C; /* 0x171C4C0A: jmp 0x171c4c5c */
L_171C4C0C:
    eax = MEM32(ebp + (-0x44)); /* 0x171C4C0C: mov eax, dword ptr [ebp - 0x44] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x73FCu); /* 0x171C4C0F: imul ecx, ecx, 0x73fc */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x28BAu); /* 0x171C4C15: imul ebx, ebx, 0x28ba */
    edi = (uint32_t)((int32_t)edi * (int32_t)0x1B37u); /* 0x171C4C1B: imul edi, edi, 0x1b37 */
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1712u); /* 0x171C4C21: imul esi, esi, 0x1712 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x171C4C27: sub ecx, ebx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x171C4C29: add ecx, edi */
    _flag_k = FK_ADD;
    edi = MEM32(ebp + (-0x4)); /* 0x171C4C2B: mov edi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x171C4C2E: sub ecx, esi */
    _flag_k = FK_CMP;
    if (15u) _cf = (((eax) >> 17) & 1u); /* 0x171C4C30: shl eax, 0xf */
    if (15u) { _flag_a = recomp_flags_pack((eax << 15u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 15u; /* 0x171C4C30: shl eax, 0xf */
    esi = ecx; /* 0x171C4C33: mov esi, ecx */
    ecx = esi + eax + 0x80000; /* 0x171C4C35: lea ecx, [esi + eax + 0x80000] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x171C4C3C: sub eax, esi */
    _flag_k = FK_CMP;
    if (20u) _cf = (((ecx) >> 19) & 1u); /* 0x171C4C3E: sar ecx, 0x14 */
    if (20u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 20u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 20u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00080000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x00080000u; /* 0x171C4C41: add eax, 0x80000 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x3FFu);
    ecx = ecx & 0x3FFu; /* 0x171C4C46: and ecx, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ecx, MEM8(ecx + edi)); /* 0x171C4C4C: mov cl, byte ptr [ecx + edi] */
    if (20u) _cf = (((eax) >> 19) & 1u); /* 0x171C4C4F: sar eax, 0x14 */
    if (20u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 20u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 20u);
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFu);
    eax = eax & 0x3FFu; /* 0x171C4C52: and eax, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, MEM8(eax + edi)); /* 0x171C4C57: mov al, byte ptr [eax + edi] */
    MEM8(edx) = (uint8_t)(LO8(ecx)); /* 0x171C4C5A: mov byte ptr [edx], cl */
L_171C4C5C:
    ecx = MEM32(ebp + 0x14); /* 0x171C4C5C: mov ecx, dword ptr [ebp + 0x14] */
    esi = MEM32(ebp + (-0x8)); /* 0x171C4C5F: mov esi, dword ptr [ebp - 8] */
    edi = MEM32(ebp + (-0x10)); /* 0x171C4C62: mov edi, dword ptr [ebp - 0x10] */
    ebx = MEM32(ebp + (-0x18)); /* 0x171C4C65: mov ebx, dword ptr [ebp - 0x18] */
    MEM8(edx + 0x1) = (uint8_t)(LO8(eax)); /* 0x171C4C68: mov byte ptr [edx + 1], al */
    edx = MEM32(ecx + 0x4); /* 0x171C4C6B: mov edx, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + 0x18); /* 0x171C4C6E: add edx, dword ptr [ebp + 0x18] */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x20)); /* 0x171C4C71: mov ecx, dword ptr [ebp - 0x20] */
    /* test ecx, ecx */ /* 0x171C4C74: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C4CA6; /* 0x171C4C76: jne 0x171c4ca6 */
L_171C4C78:
    /* test ebx, ebx */ /* 0x171C4C78: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C4CA6; /* 0x171C4C7A: jne 0x171c4ca6 */
L_171C4C7C:
    /* test edi, edi */ /* 0x171C4C7C: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C4CA6; /* 0x171C4C7E: jne 0x171c4ca6 */
L_171C4C80:
    /* test esi, esi */ /* 0x171C4C80: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C4CA6; /* 0x171C4C82: jne 0x171c4ca6 */
L_171C4C84:
    eax = MEM32(ebp + (-0x24)); /* 0x171C4C84: mov eax, dword ptr [ebp - 0x24] */
    ecx = MEM32(ebp + (-0x4)); /* 0x171C4C87: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x171C4C8A: add eax, 0x10 */
    _flag_k = FK_ADD;
    if (5u) _cf = (((eax) >> 4) & 1u); /* 0x171C4C8D: sar eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 5u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 5u);
    edi = POP32_VAL(esp); /* 0x171C4C90: pop edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFu);
    eax = eax & 0x3FFu; /* 0x171C4C91: and eax, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, MEM8(eax + ecx)); /* 0x171C4C96: mov al, byte ptr [eax + ecx] */
    esi = POP32_VAL(esp); /* 0x171C4C99: pop esi */
    MEM8(edx) = (uint8_t)(LO8(eax)); /* 0x171C4C9A: mov byte ptr [edx], al */
    MEM8(edx + 0x1) = (uint8_t)(LO8(eax)); /* 0x171C4C9C: mov byte ptr [edx + 1], al */
    ebx = POP32_VAL(esp); /* 0x171C4C9F: pop ebx */
    esp = ebp; /* 0x171C4CA0: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171C4CA2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x171C4CA3: ret 0x14 */
L_171C4CA6:
    eax = MEM32(ebp + (-0x24)); /* 0x171C4CA6: mov eax, dword ptr [ebp - 0x24] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x73FCu); /* 0x171C4CA9: imul ecx, ecx, 0x73fc */
    edi = (uint32_t)((int32_t)edi * (int32_t)0x1B37u); /* 0x171C4CAF: imul edi, edi, 0x1b37 */
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1712u); /* 0x171C4CB5: imul esi, esi, 0x1712 */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x28BAu); /* 0x171C4CBB: imul ebx, ebx, 0x28ba */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x171C4CC1: add ecx, edi */
    _flag_k = FK_ADD;
    edi = MEM32(ebp + (-0x4)); /* 0x171C4CC3: mov edi, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - esi; /* 0x171C4CC6: sub ecx, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x171C4CC8: sub ecx, ebx */
    _flag_k = FK_CMP;
    if (15u) _cf = (((eax) >> 17) & 1u); /* 0x171C4CCA: shl eax, 0xf */
    if (15u) { _flag_a = recomp_flags_pack((eax << 15u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 15u; /* 0x171C4CCA: shl eax, 0xf */
    esi = ecx; /* 0x171C4CCD: mov esi, ecx */
    ecx = esi + eax + 0x80000; /* 0x171C4CCF: lea ecx, [esi + eax + 0x80000] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - esi; /* 0x171C4CD6: sub eax, esi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00080000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x00080000u; /* 0x171C4CD8: add eax, 0x80000 */
    _flag_k = FK_ADD;
    if (20u) _cf = (((ecx) >> 19) & 1u); /* 0x171C4CDD: sar ecx, 0x14 */
    if (20u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 20u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 20u);
    if (20u) _cf = (((eax) >> 19) & 1u); /* 0x171C4CE0: sar eax, 0x14 */
    if (20u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 20u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 20u);
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x3FFu);
    ecx = ecx & 0x3FFu; /* 0x171C4CE3: and ecx, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ecx, MEM8(ecx + edi)); /* 0x171C4CE9: mov cl, byte ptr [ecx + edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x3FFu);
    eax = eax & 0x3FFu; /* 0x171C4CEC: and eax, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, MEM8(eax + edi)); /* 0x171C4CF1: mov al, byte ptr [eax + edi] */
    edi = POP32_VAL(esp); /* 0x171C4CF4: pop edi */
    esi = POP32_VAL(esp); /* 0x171C4CF5: pop esi */
    MEM8(edx) = (uint8_t)(LO8(ecx)); /* 0x171C4CF6: mov byte ptr [edx], cl */
    MEM8(edx + 0x1) = (uint8_t)(LO8(eax)); /* 0x171C4CF8: mov byte ptr [edx + 1], al */
    ebx = POP32_VAL(esp); /* 0x171C4CFB: pop ebx */
    esp = ebp; /* 0x171C4CFC: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171C4CFE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x171C4CFF: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_171C4D10(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C4D10u);

L_171C4D10:
    edi = edi; /* 0x171C4D10: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C4D12: push ebp */
    ebp = esp; /* 0x171C4D13: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x171C4D15: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(eax + 0x50); /* 0x171C4D18: mov ecx, dword ptr [eax + 0x50] */
    eax = MEM32(ebp + 0x10); /* 0x171C4D1B: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171C4D1E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(edx, MEM16(ecx)); /* 0x171C4D20: mov dx, word ptr [ecx] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171C4D23: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(ecx, MEM16(eax)); /* 0x171C4D25: mov cx, word ptr [eax] */
    eax = MEM32(ebp + 0x8); /* 0x171C4D28: mov eax, dword ptr [ebp + 8] */
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx); /* 0x171C4D2B: imul edx, ecx */
    ecx = MEM32(eax + 0x148); /* 0x171C4D2E: mov ecx, dword ptr [eax + 0x148] */
    eax = MEM32(ebp + 0x14); /* 0x171C4D34: mov eax, dword ptr [ebp + 0x14] */
    eax = MEM32(eax); /* 0x171C4D37: mov eax, dword ptr [eax] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x171C4D39: add edx, 4 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((edx) >> 2) & 1u); /* 0x171C4D3C: sar edx, 3 */
    if (3u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 3u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 3u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x3FFu);
    edx = edx & 0x3FFu; /* 0x171C4D3F: and edx, 0x3ff */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(ecx, MEM8(edx + ecx + 0x80)); /* 0x171C4D45: mov cl, byte ptr [edx + ecx + 0x80] */
    edx = MEM32(ebp + 0x18); /* 0x171C4D4C: mov edx, dword ptr [ebp + 0x18] */
    MEM8(edx + eax) = (uint8_t)(LO8(ecx)); /* 0x171C4D4F: mov byte ptr [edx + eax], cl */
    ebp = POP32_VAL(esp); /* 0x171C4D52: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x171C4D53: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_171C4D60(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C4D60u);

L_171C4D60:
    edi = edi; /* 0x171C4D60: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C4D62: push ebp */
    ebp = esp; /* 0x171C4D63: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171C4D65: push ebx */
    PUSH32(esp, edi); /* 0x171C4D66: push edi */
    eax = MEM32(ebp + 0xC); /* 0x171C4D67: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x14); /* 0x171C4D6A: mov ecx, dword ptr [ebp + 0x14] */
    edi = MEM32(ebp + 0x8); /* 0x171C4D6D: mov edi, dword ptr [ebp + 8] */
    ebx = MEM32(ebp + 0x10); /* 0x171C4D70: mov ebx, dword ptr [ebp + 0x10] */
    if (2u) _cf = (((edi) >> 1) & 1u); /* 0x171C4D73: shr edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 2u; /* 0x171C4D73: shr edi, 2 */
    edx = MEM32(ebp + 0x18); /* 0x171C4D76: mov edx, dword ptr [ebp + 0x18] */
L_171C4D79:
    _mm[0] = (uint64_t)(uint32_t)(MEM32(eax)); /* 0x171C4D79: movd mm0, dword ptr [eax] */
    _mm[7] = (_mm[7] ^ _mm[7]); /* 0x171C4D7C: pxor mm7, mm7 */
    _mm[2] = (uint64_t)(uint32_t)(MEM32(ebx)); /* 0x171C4D7F: movd mm2, dword ptr [ebx] */
    _mm[0] = mmx_punpcklbw(_mm[0], _mm[7]); /* 0x171C4D82: punpcklbw mm0, mm7 */
    _mm[3] = (uint64_t)(uint32_t)(MEM32(ecx)); /* 0x171C4D85: movd mm3, dword ptr [ecx] */
    _mm[2] = mmx_punpcklbw(_mm[2], _mm[7]); /* 0x171C4D88: punpcklbw mm2, mm7 */
    _mm[2] = mmx_psubsw(_mm[2], MEM64(0x17025CD8)); /* 0x171C4D8B: psubsw mm2, qword ptr [0x17025cd8] */
    _mm[3] = mmx_punpcklbw(_mm[3], _mm[7]); /* 0x171C4D92: punpcklbw mm3, mm7 */
    _mm[3] = mmx_psubsw(_mm[3], MEM64(0x17025CD8)); /* 0x171C4D95: psubsw mm3, qword ptr [0x17025cd8] */
    _mm[4] = _mm[2]; /* 0x171C4D9C: movq mm4, mm2 */
    _mm[2] = mmx_punpcklwd(_mm[2], _mm[3]); /* 0x171C4D9F: punpcklwd mm2, mm3 */
    _mm[1] = _mm[0]; /* 0x171C4DA2: movq mm1, mm0 */
    _mm[2] = mmx_pmaddwd(_mm[2], MEM64(0x17025CE0)); /* 0x171C4DA5: pmaddwd mm2, qword ptr [0x17025ce0] */
    _mm[1] = mmx_psllw(_mm[1], 8); /* 0x171C4DAC: psllw mm1, 8 */
    _mm[6] = _mm[1]; /* 0x171C4DB0: movq mm6, mm1 */
    _mm[1] = mmx_punpcklwd(_mm[1], _mm[7]); /* 0x171C4DB3: punpcklwd mm1, mm7 */
    _mm[6] = mmx_punpckhwd(_mm[6], _mm[7]); /* 0x171C4DB6: punpckhwd mm6, mm7 */
    _mm[5] = _mm[4]; /* 0x171C4DB9: movq mm5, mm4 */
    _mm[5] = mmx_punpckhwd(_mm[5], _mm[3]); /* 0x171C4DBC: punpckhwd mm5, mm3 */
    _mm[2] = mmx_paddd(_mm[2], _mm[1]); /* 0x171C4DBF: paddd mm2, mm1 */
    _mm[5] = mmx_pmaddwd(_mm[5], MEM64(0x17025CE0)); /* 0x171C4DC2: pmaddwd mm5, qword ptr [0x17025ce0] */
    _mm[1] = _mm[3]; /* 0x171C4DC9: movq mm1, mm3 */
    _mm[3] = mmx_punpcklwd(_mm[3], _mm[0]); /* 0x171C4DCC: punpcklwd mm3, mm0 */
    _mm[7] = _mm[4]; /* 0x171C4DCF: movq mm7, mm4 */
    _mm[3] = mmx_pmaddwd(_mm[3], MEM64(0x17025CE8)); /* 0x171C4DD2: pmaddwd mm3, qword ptr [0x17025ce8] */
    _mm[2] = mmx_psrad(_mm[2], 8); /* 0x171C4DD9: psrad mm2, 8 */
    _mm[5] = mmx_paddd(_mm[5], _mm[6]); /* 0x171C4DDD: paddd mm5, mm6 */
    _mm[4] = mmx_punpcklwd(_mm[4], _mm[0]); /* 0x171C4DE0: punpcklwd mm4, mm0 */
    _mm[4] = mmx_pmaddwd(_mm[4], MEM64(0x17025CF0)); /* 0x171C4DE3: pmaddwd mm4, qword ptr [0x17025cf0] */
    _mm[5] = mmx_psrad(_mm[5], 8); /* 0x171C4DEA: psrad mm5, 8 */
    _mm[3] = mmx_psrad(_mm[3], 8); /* 0x171C4DEE: psrad mm3, 8 */
    _mm[7] = mmx_punpckhwd(_mm[7], _mm[0]); /* 0x171C4DF2: punpckhwd mm7, mm0 */
    _mm[4] = mmx_psrad(_mm[4], 8); /* 0x171C4DF5: psrad mm4, 8 */
    _mm[6] = _mm[3]; /* 0x171C4DF9: movq mm6, mm3 */
    _mm[7] = mmx_pmaddwd(_mm[7], MEM64(0x17025CF0)); /* 0x171C4DFC: pmaddwd mm7, qword ptr [0x17025cf0] */
    _mm[1] = mmx_punpckhwd(_mm[1], _mm[0]); /* 0x171C4E03: punpckhwd mm1, mm0 */
    _mm[1] = mmx_pmaddwd(_mm[1], MEM64(0x17025CE8)); /* 0x171C4E06: pmaddwd mm1, qword ptr [0x17025ce8] */
    void_lift_trap(0x171C4E0Du, "unsupported PUNPCKLDQ operands");
    _mm[6] = mmx_punpckhdq(_mm[6], _mm[2]); /* 0x171C4E10: punpckhdq mm6, mm2 */
    _mm[0] = _mm[4]; /* 0x171C4E13: movq mm0, mm4 */
    _mm[7] = mmx_psrad(_mm[7], 8); /* 0x171C4E16: psrad mm7, 8 */
    void_lift_trap(0x171C4E1Au, "unsupported PUNPCKLDQ operands");
    _mm[0] = mmx_punpckhdq(_mm[0], MEM64(0x17025CD0)); /* 0x171C4E21: punpckhdq mm0, qword ptr [0x17025cd0] */
    _mm[1] = mmx_psrad(_mm[1], 8); /* 0x171C4E28: psrad mm1, 8 */
    _mm[3] = mmx_packssdw(_mm[3], _mm[4]); /* 0x171C4E2C: packssdw mm3, mm4 */
    _mm[2] = _mm[1]; /* 0x171C4E2F: movq mm2, mm1 */
    _mm[6] = mmx_packssdw(_mm[6], _mm[0]); /* 0x171C4E32: packssdw mm6, mm0 */
    _mm[3] = mmx_packuswb(_mm[3], _mm[6]); /* 0x171C4E35: packuswb mm3, mm6 */
    void_lift_trap(0x171C4E38u, "unsupported PUNPCKLDQ operands");
    _mm[4] = _mm[7]; /* 0x171C4E3B: movq mm4, mm7 */
    _mm[1] = mmx_punpckhdq(_mm[1], _mm[5]); /* 0x171C4E3E: punpckhdq mm1, mm5 */
    void_lift_trap(0x171C4E41u, "unsupported PUNPCKLDQ operands");
    _mm[4] = mmx_punpckhdq(_mm[4], MEM64(0x17025CD0)); /* 0x171C4E48: punpckhdq mm4, qword ptr [0x17025cd0] */
    _mm[0] = _mm[3]; /* 0x171C4E4F: movq mm0, mm3 */
    _mm[2] = mmx_packssdw(_mm[2], _mm[7]); /* 0x171C4E52: packssdw mm2, mm7 */
    _mm[3] = (_mm[3] & MEM64(0x17025CF8)); /* 0x171C4E55: pand mm3, qword ptr [0x17025cf8] */
    _mm[1] = mmx_packssdw(_mm[1], _mm[4]); /* 0x171C4E5C: packssdw mm1, mm4 */
    _mm[3] = mmx_psrlq(_mm[3], 8); /* 0x171C4E5F: psrlq mm3, 8 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0xCu; /* 0x171C4E63: add edx, 0xc */
    _flag_k = FK_ADD;
    _mm[0] = (_mm[0] | _mm[3]); /* 0x171C4E66: por mm0, mm3 */
    _mm[2] = mmx_packuswb(_mm[2], _mm[1]); /* 0x171C4E69: packuswb mm2, mm1 */
    _mm[3] = mmx_psrlq(_mm[3], 32); /* 0x171C4E6C: psrlq mm3, 0x20 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171C4E70: add eax, 4 */
    _flag_k = FK_ADD;
    MEM32(edx + (-0xC)) = (uint32_t)_mm[0]; /* 0x171C4E73: movd dword ptr [edx - 0xc], mm0 */
    _mm[3] = mmx_punpcklwd(_mm[3], _mm[2]); /* 0x171C4E77: punpcklwd mm3, mm2 */
    _mm[2] = mmx_psrlq(_mm[2], 24); /* 0x171C4E7A: psrlq mm2, 0x18 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x171C4E7E: add ecx, 4 */
    _flag_k = FK_ADD;
    MEM32(edx + (-0x8)) = (uint32_t)_mm[3]; /* 0x171C4E81: movd dword ptr [edx - 8], mm3 */
    _mm[3] = mmx_psrlq(_mm[3], 48); /* 0x171C4E85: psrlq mm3, 0x30 */
    _mm[2] = (_mm[2] | _mm[3]); /* 0x171C4E89: por mm2, mm3 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x171C4E8C: add ebx, 4 */
    _flag_k = FK_ADD;
    MEM32(edx + (-0x4)) = (uint32_t)_mm[2]; /* 0x171C4E8F: movd dword ptr [edx - 4], mm2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x171C4E93: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171C4D79; /* 0x171C4E94: jne 0x171c4d79 */
L_171C4E9A:
    edi = POP32_VAL(esp); /* 0x171C4E9A: pop edi */
    ebx = POP32_VAL(esp); /* 0x171C4E9B: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171C4E9C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x171C4E9D: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_171C4EB0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C4EB0u);

L_171C4EB0:
    edi = edi; /* 0x171C4EB0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C4EB2: push ebp */
    ebp = esp; /* 0x171C4EB3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x171C4EB5: sub esp, 0xc */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x171C4EB8: mov eax, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(eax)); /* 0x171C4EBB: fld dword ptr [eax] */
    _st[0] += (double)*(float*)ADDR(eax + 0x1C); /* 0x171C4EBD: fadd dword ptr [eax + 0x1c] */
    fp_push(*(float*)&MEM32(eax)); /* 0x171C4EC0: fld dword ptr [eax] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x1C); /* 0x171C4EC2: fsub dword ptr [eax + 0x1c] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x171C4EC5: fld dword ptr [eax + 4] */
    _st[0] += (double)*(float*)ADDR(eax + 0x18); /* 0x171C4EC8: fadd dword ptr [eax + 0x18] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x171C4ECB: fld dword ptr [eax + 4] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x18); /* 0x171C4ECE: fsub dword ptr [eax + 0x18] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x171C4ED1: fld dword ptr [eax + 8] */
    _st[0] += (double)*(float*)ADDR(eax + 0x14); /* 0x171C4ED4: fadd dword ptr [eax + 0x14] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x171C4ED7: fld dword ptr [eax + 8] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x14); /* 0x171C4EDA: fsub dword ptr [eax + 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x171C4EDD: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(eax + 0xC)); /* 0x171C4EE0: fld dword ptr [eax + 0xc] */
    _st[0] += (double)*(float*)ADDR(eax + 0x10); /* 0x171C4EE3: fadd dword ptr [eax + 0x10] */
    fp_push(*(float*)&MEM32(eax + 0xC)); /* 0x171C4EE6: fld dword ptr [eax + 0xc] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x10); /* 0x171C4EE9: fsub dword ptr [eax + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x171C4EEC: fstp dword ptr [ebp - 0xc] */
    fp_push(_st[0]); /* 0x171C4EEF: fld st(0) */
    _st[0] += _st[6]; /* 0x171C4EF1: fadd st(6) */
    fp_xch(6); /* 0x171C4EF3: fxch st(6) */
    _st[0] -= _st[1]; /* 0x171C4EF5: fsub st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x171C4EF7: fstp dword ptr [ebp + 8] */
    fp_push(_st[1]); /* 0x171C4EFA: fld st(1) */
    _st[0] += _st[4]; /* 0x171C4EFC: fadd st(4) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x171C4EFE: fst dword ptr [ebp - 4] */
    _st[0] += _st[6]; /* 0x171C4F01: fadd st(6) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x171C4F03: fstp dword ptr [eax] */
    fp_xch(5); /* 0x171C4F05: fxch st(5) */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171C4F07: fsub dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x10) = _v; } /* 0x171C4F0A: fstp dword ptr [eax + 0x10] */
    { _st[4] = _st[0]; g_st_i64[4] = g_st_i64[0]; fp_pop(); } /* 0x171C4F0D: fstp st(4) */
    fp_xch(1); /* 0x171C4F0F: fxch st(1) */
    { double _v = fp_pop(); _st[2] = _v - _st[2]; } /* 0x171C4F11: fsubrp st(3) */
    fp_xch(2); /* 0x171C4F13: fxch st(2) */
    _st[0] += (double)*(float*)ADDR(ebp + 0x8); /* 0x171C4F15: fadd dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(0x17025D0C); /* 0x171C4F18: fmul dword ptr [0x17025d0c] */
    fp_xch(2); /* 0x171C4F1E: fxch st(2) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171C4F20: fld dword ptr [ebp + 8] */
    _st[0] += _st[3]; /* 0x171C4F23: fadd st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x171C4F25: fstp dword ptr [eax + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171C4F28: fld dword ptr [ebp + 8] */
    _st[0] -= _st[3]; /* 0x171C4F2B: fsub st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x18) = _v; } /* 0x171C4F2D: fstp dword ptr [eax + 0x18] */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x171C4F30: fstp st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x171C4F32: fld dword ptr [ebp - 0xc] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x8)); /* 0x171C4F35: fadd dword ptr [ebp - 8] */
    fp_push(_st[2]); /* 0x171C4F38: fld st(2) */
    _st[0] += _st[2]; /* 0x171C4F3A: fadd st(2) */
    fp_push(_st[1]); /* 0x171C4F3C: fld st(1) */
    _st[0] -= _st[1]; /* 0x171C4F3E: fsub st(1) */
    _st[0] *= (double)*(float*)ADDR(0x17025D08); /* 0x171C4F40: fmul dword ptr [0x17025d08] */
    fp_xch(2); /* 0x171C4F46: fxch st(2) */
    _st[0] *= (double)*(float*)ADDR(0x17025D04); /* 0x171C4F48: fmul dword ptr [0x17025d04] */
    _st[0] += _st[2]; /* 0x171C4F4E: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x171C4F50: fstp dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(0x17025D00); /* 0x171C4F53: fmul dword ptr [0x17025d00] */
    _st[0] += _st[1]; /* 0x171C4F59: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x171C4F5B: fstp dword ptr [ebp - 4] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171C4F5E: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x171C4F60: fld dword ptr [ebp - 8] */
    _st[0] += _st[2]; /* 0x171C4F63: fadd st(2) */
    _st[0] *= (double)*(float*)ADDR(0x17025D0C); /* 0x171C4F65: fmul dword ptr [0x17025d0c] */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x171C4F6B: fstp st(2) */
    fp_xch(1); /* 0x171C4F6D: fxch st(1) */
    fp_push(_st[0]); /* 0x171C4F6F: fld st(0) */
    _st[0] += _st[2]; /* 0x171C4F71: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x171C4F73: fstp dword ptr [ebp - 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x171C4F76: fsubp st(1) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171C4F78: fld dword ptr [ebp + 8] */
    _st[0] += _st[1]; /* 0x171C4F7B: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x14) = _v; } /* 0x171C4F7D: fstp dword ptr [eax + 0x14] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x8); /* 0x171C4F80: fsub dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x171C4F83: fstp dword ptr [eax + 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x171C4F86: fld dword ptr [ebp - 8] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171C4F89: fadd dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x171C4F8C: fstp dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x171C4F8F: fld dword ptr [ebp - 8] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171C4F92: fsub dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x1C) = _v; } /* 0x171C4F95: fstp dword ptr [eax + 0x1c] */
    fp_push(*(float*)&MEM32(eax + 0x20)); /* 0x171C4F98: fld dword ptr [eax + 0x20] */
    _st[0] += (double)*(float*)ADDR(eax + 0x3C); /* 0x171C4F9B: fadd dword ptr [eax + 0x3c] */
    fp_push(*(float*)&MEM32(eax + 0x20)); /* 0x171C4F9E: fld dword ptr [eax + 0x20] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x3C); /* 0x171C4FA1: fsub dword ptr [eax + 0x3c] */
    fp_push(*(float*)&MEM32(eax + 0x24)); /* 0x171C4FA4: fld dword ptr [eax + 0x24] */
    _st[0] += (double)*(float*)ADDR(eax + 0x38); /* 0x171C4FA7: fadd dword ptr [eax + 0x38] */
    fp_push(*(float*)&MEM32(eax + 0x24)); /* 0x171C4FAA: fld dword ptr [eax + 0x24] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x38); /* 0x171C4FAD: fsub dword ptr [eax + 0x38] */
    fp_push(*(float*)&MEM32(eax + 0x28)); /* 0x171C4FB0: fld dword ptr [eax + 0x28] */
    _st[0] += (double)*(float*)ADDR(eax + 0x34); /* 0x171C4FB3: fadd dword ptr [eax + 0x34] */
    fp_push(*(float*)&MEM32(eax + 0x28)); /* 0x171C4FB6: fld dword ptr [eax + 0x28] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x34); /* 0x171C4FB9: fsub dword ptr [eax + 0x34] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x171C4FBC: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(eax + 0x2C)); /* 0x171C4FBF: fld dword ptr [eax + 0x2c] */
    _st[0] += (double)*(float*)ADDR(eax + 0x30); /* 0x171C4FC2: fadd dword ptr [eax + 0x30] */
    fp_push(*(float*)&MEM32(eax + 0x2C)); /* 0x171C4FC5: fld dword ptr [eax + 0x2c] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x30); /* 0x171C4FC8: fsub dword ptr [eax + 0x30] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x171C4FCB: fstp dword ptr [ebp - 0xc] */
    fp_push(_st[0]); /* 0x171C4FCE: fld st(0) */
    _st[0] += _st[6]; /* 0x171C4FD0: fadd st(6) */
    fp_xch(6); /* 0x171C4FD2: fxch st(6) */
    _st[0] -= _st[1]; /* 0x171C4FD4: fsub st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x171C4FD6: fstp dword ptr [ebp + 8] */
    fp_push(_st[1]); /* 0x171C4FD9: fld st(1) */
    _st[0] += _st[4]; /* 0x171C4FDB: fadd st(4) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x171C4FDD: fst dword ptr [ebp - 4] */
    _st[0] += _st[6]; /* 0x171C4FE0: fadd st(6) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x20) = _v; } /* 0x171C4FE2: fstp dword ptr [eax + 0x20] */
    fp_xch(5); /* 0x171C4FE5: fxch st(5) */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171C4FE7: fsub dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x30) = _v; } /* 0x171C4FEA: fstp dword ptr [eax + 0x30] */
    { _st[4] = _st[0]; g_st_i64[4] = g_st_i64[0]; fp_pop(); } /* 0x171C4FED: fstp st(4) */
    fp_xch(1); /* 0x171C4FEF: fxch st(1) */
    { double _v = fp_pop(); _st[2] = _v - _st[2]; } /* 0x171C4FF1: fsubrp st(3) */
    fp_xch(2); /* 0x171C4FF3: fxch st(2) */
    _st[0] += (double)*(float*)ADDR(ebp + 0x8); /* 0x171C4FF5: fadd dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(0x17025D0C); /* 0x171C4FF8: fmul dword ptr [0x17025d0c] */
    fp_xch(2); /* 0x171C4FFE: fxch st(2) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171C5000: fld dword ptr [ebp + 8] */
    _st[0] += _st[3]; /* 0x171C5003: fadd st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x28) = _v; } /* 0x171C5005: fstp dword ptr [eax + 0x28] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171C5008: fld dword ptr [ebp + 8] */
    _st[0] -= _st[3]; /* 0x171C500B: fsub st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x38) = _v; } /* 0x171C500D: fstp dword ptr [eax + 0x38] */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x171C5010: fstp st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x171C5012: fld dword ptr [ebp - 0xc] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x8)); /* 0x171C5015: fadd dword ptr [ebp - 8] */
    fp_push(_st[2]); /* 0x171C5018: fld st(2) */
    _st[0] += _st[2]; /* 0x171C501A: fadd st(2) */
    fp_push(_st[1]); /* 0x171C501C: fld st(1) */
    _st[0] -= _st[1]; /* 0x171C501E: fsub st(1) */
    _st[0] *= (double)*(float*)ADDR(0x17025D08); /* 0x171C5020: fmul dword ptr [0x17025d08] */
    fp_xch(2); /* 0x171C5026: fxch st(2) */
    _st[0] *= (double)*(float*)ADDR(0x17025D04); /* 0x171C5028: fmul dword ptr [0x17025d04] */
    _st[0] += _st[2]; /* 0x171C502E: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x171C5030: fstp dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(0x17025D00); /* 0x171C5033: fmul dword ptr [0x17025d00] */
    _st[0] += _st[1]; /* 0x171C5039: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x171C503B: fstp dword ptr [ebp - 4] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171C503E: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x171C5040: fld dword ptr [ebp - 8] */
    _st[0] += _st[2]; /* 0x171C5043: fadd st(2) */
    _st[0] *= (double)*(float*)ADDR(0x17025D0C); /* 0x171C5045: fmul dword ptr [0x17025d0c] */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x171C504B: fstp st(2) */
    fp_xch(1); /* 0x171C504D: fxch st(1) */
    fp_push(_st[0]); /* 0x171C504F: fld st(0) */
    _st[0] += _st[2]; /* 0x171C5051: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x171C5053: fstp dword ptr [ebp - 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x171C5056: fsubp st(1) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171C5058: fld dword ptr [ebp + 8] */
    _st[0] += _st[1]; /* 0x171C505B: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x34) = _v; } /* 0x171C505D: fstp dword ptr [eax + 0x34] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x8); /* 0x171C5060: fsub dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x2C) = _v; } /* 0x171C5063: fstp dword ptr [eax + 0x2c] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x171C5066: fld dword ptr [ebp - 8] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171C5069: fadd dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x24) = _v; } /* 0x171C506C: fstp dword ptr [eax + 0x24] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x171C506F: fld dword ptr [ebp - 8] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171C5072: fsub dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x3C) = _v; } /* 0x171C5075: fstp dword ptr [eax + 0x3c] */
    fp_push(*(float*)&MEM32(eax + 0x40)); /* 0x171C5078: fld dword ptr [eax + 0x40] */
    _st[0] += (double)*(float*)ADDR(eax + 0x5C); /* 0x171C507B: fadd dword ptr [eax + 0x5c] */
    fp_push(*(float*)&MEM32(eax + 0x40)); /* 0x171C507E: fld dword ptr [eax + 0x40] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x5C); /* 0x171C5081: fsub dword ptr [eax + 0x5c] */
    fp_push(*(float*)&MEM32(eax + 0x44)); /* 0x171C5084: fld dword ptr [eax + 0x44] */
    _st[0] += (double)*(float*)ADDR(eax + 0x58); /* 0x171C5087: fadd dword ptr [eax + 0x58] */
    fp_push(*(float*)&MEM32(eax + 0x44)); /* 0x171C508A: fld dword ptr [eax + 0x44] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x58); /* 0x171C508D: fsub dword ptr [eax + 0x58] */
    fp_push(*(float*)&MEM32(eax + 0x48)); /* 0x171C5090: fld dword ptr [eax + 0x48] */
    _st[0] += (double)*(float*)ADDR(eax + 0x54); /* 0x171C5093: fadd dword ptr [eax + 0x54] */
    fp_push(*(float*)&MEM32(eax + 0x48)); /* 0x171C5096: fld dword ptr [eax + 0x48] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x54); /* 0x171C5099: fsub dword ptr [eax + 0x54] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x171C509C: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(eax + 0x4C)); /* 0x171C509F: fld dword ptr [eax + 0x4c] */
    _st[0] += (double)*(float*)ADDR(eax + 0x50); /* 0x171C50A2: fadd dword ptr [eax + 0x50] */
    fp_push(*(float*)&MEM32(eax + 0x4C)); /* 0x171C50A5: fld dword ptr [eax + 0x4c] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x50); /* 0x171C50A8: fsub dword ptr [eax + 0x50] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x171C50AB: fstp dword ptr [ebp - 0xc] */
    fp_push(_st[0]); /* 0x171C50AE: fld st(0) */
    _st[0] += _st[6]; /* 0x171C50B0: fadd st(6) */
    fp_xch(6); /* 0x171C50B2: fxch st(6) */
    _st[0] -= _st[1]; /* 0x171C50B4: fsub st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x171C50B6: fstp dword ptr [ebp + 8] */
    fp_push(_st[1]); /* 0x171C50B9: fld st(1) */
    _st[0] += _st[4]; /* 0x171C50BB: fadd st(4) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x171C50BD: fst dword ptr [ebp - 4] */
    _st[0] += _st[6]; /* 0x171C50C0: fadd st(6) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x40) = _v; } /* 0x171C50C2: fstp dword ptr [eax + 0x40] */
    fp_xch(5); /* 0x171C50C5: fxch st(5) */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171C50C7: fsub dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x50) = _v; } /* 0x171C50CA: fstp dword ptr [eax + 0x50] */
    { _st[4] = _st[0]; g_st_i64[4] = g_st_i64[0]; fp_pop(); } /* 0x171C50CD: fstp st(4) */
    fp_xch(1); /* 0x171C50CF: fxch st(1) */
    { double _v = fp_pop(); _st[2] = _v - _st[2]; } /* 0x171C50D1: fsubrp st(3) */
    fp_xch(2); /* 0x171C50D3: fxch st(2) */
    _st[0] += (double)*(float*)ADDR(ebp + 0x8); /* 0x171C50D5: fadd dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(0x17025D0C); /* 0x171C50D8: fmul dword ptr [0x17025d0c] */
    fp_xch(2); /* 0x171C50DE: fxch st(2) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171C50E0: fld dword ptr [ebp + 8] */
    _st[0] += _st[3]; /* 0x171C50E3: fadd st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x48) = _v; } /* 0x171C50E5: fstp dword ptr [eax + 0x48] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171C50E8: fld dword ptr [ebp + 8] */
    _st[0] -= _st[3]; /* 0x171C50EB: fsub st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x58) = _v; } /* 0x171C50ED: fstp dword ptr [eax + 0x58] */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x171C50F0: fstp st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x171C50F2: fld dword ptr [ebp - 0xc] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x8)); /* 0x171C50F5: fadd dword ptr [ebp - 8] */
    fp_push(_st[2]); /* 0x171C50F8: fld st(2) */
    _st[0] += _st[2]; /* 0x171C50FA: fadd st(2) */
    fp_push(_st[1]); /* 0x171C50FC: fld st(1) */
    _st[0] -= _st[1]; /* 0x171C50FE: fsub st(1) */
    _st[0] *= (double)*(float*)ADDR(0x17025D08); /* 0x171C5100: fmul dword ptr [0x17025d08] */
    fp_xch(2); /* 0x171C5106: fxch st(2) */
    _st[0] *= (double)*(float*)ADDR(0x17025D04); /* 0x171C5108: fmul dword ptr [0x17025d04] */
    _st[0] += _st[2]; /* 0x171C510E: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x171C5110: fstp dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(0x17025D00); /* 0x171C5113: fmul dword ptr [0x17025d00] */
    _st[0] += _st[1]; /* 0x171C5119: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x171C511B: fstp dword ptr [ebp - 4] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171C511E: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x171C5120: fld dword ptr [ebp - 8] */
    _st[0] += _st[2]; /* 0x171C5123: fadd st(2) */
    _st[0] *= (double)*(float*)ADDR(0x17025D0C); /* 0x171C5125: fmul dword ptr [0x17025d0c] */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x171C512B: fstp st(2) */
    fp_xch(1); /* 0x171C512D: fxch st(1) */
    fp_push(_st[0]); /* 0x171C512F: fld st(0) */
    _st[0] += _st[2]; /* 0x171C5131: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x171C5133: fstp dword ptr [ebp - 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x171C5136: fsubp st(1) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171C5138: fld dword ptr [ebp + 8] */
    _st[0] += _st[1]; /* 0x171C513B: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x54) = _v; } /* 0x171C513D: fstp dword ptr [eax + 0x54] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x8); /* 0x171C5140: fsub dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4C) = _v; } /* 0x171C5143: fstp dword ptr [eax + 0x4c] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x171C5146: fld dword ptr [ebp - 8] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171C5149: fadd dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x44) = _v; } /* 0x171C514C: fstp dword ptr [eax + 0x44] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x171C514F: fld dword ptr [ebp - 8] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171C5152: fsub dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x5C) = _v; } /* 0x171C5155: fstp dword ptr [eax + 0x5c] */
    fp_push(*(float*)&MEM32(eax + 0x60)); /* 0x171C5158: fld dword ptr [eax + 0x60] */
    _st[0] += (double)*(float*)ADDR(eax + 0x7C); /* 0x171C515B: fadd dword ptr [eax + 0x7c] */
    fp_push(*(float*)&MEM32(eax + 0x60)); /* 0x171C515E: fld dword ptr [eax + 0x60] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x7C); /* 0x171C5161: fsub dword ptr [eax + 0x7c] */
    fp_push(*(float*)&MEM32(eax + 0x64)); /* 0x171C5164: fld dword ptr [eax + 0x64] */
    _st[0] += (double)*(float*)ADDR(eax + 0x78); /* 0x171C5167: fadd dword ptr [eax + 0x78] */
    fp_push(*(float*)&MEM32(eax + 0x64)); /* 0x171C516A: fld dword ptr [eax + 0x64] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x78); /* 0x171C516D: fsub dword ptr [eax + 0x78] */
    fp_push(*(float*)&MEM32(eax + 0x68)); /* 0x171C5170: fld dword ptr [eax + 0x68] */
    _st[0] += (double)*(float*)ADDR(eax + 0x74); /* 0x171C5173: fadd dword ptr [eax + 0x74] */
    fp_push(*(float*)&MEM32(eax + 0x68)); /* 0x171C5176: fld dword ptr [eax + 0x68] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x74); /* 0x171C5179: fsub dword ptr [eax + 0x74] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x171C517C: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(eax + 0x6C)); /* 0x171C517F: fld dword ptr [eax + 0x6c] */
    _st[0] += (double)*(float*)ADDR(eax + 0x70); /* 0x171C5182: fadd dword ptr [eax + 0x70] */
    fp_push(*(float*)&MEM32(eax + 0x6C)); /* 0x171C5185: fld dword ptr [eax + 0x6c] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x70); /* 0x171C5188: fsub dword ptr [eax + 0x70] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x171C518B: fstp dword ptr [ebp - 0xc] */
    fp_push(_st[0]); /* 0x171C518E: fld st(0) */
    _st[0] += _st[6]; /* 0x171C5190: fadd st(6) */
    fp_xch(6); /* 0x171C5192: fxch st(6) */
    _st[0] -= _st[1]; /* 0x171C5194: fsub st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x171C5196: fstp dword ptr [ebp + 8] */
    fp_push(_st[1]); /* 0x171C5199: fld st(1) */
    _st[0] += _st[4]; /* 0x171C519B: fadd st(4) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x171C519D: fst dword ptr [ebp - 4] */
    _st[0] += _st[6]; /* 0x171C51A0: fadd st(6) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x60) = _v; } /* 0x171C51A2: fstp dword ptr [eax + 0x60] */
    fp_xch(5); /* 0x171C51A5: fxch st(5) */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171C51A7: fsub dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x70) = _v; } /* 0x171C51AA: fstp dword ptr [eax + 0x70] */
    { _st[4] = _st[0]; g_st_i64[4] = g_st_i64[0]; fp_pop(); } /* 0x171C51AD: fstp st(4) */
    fp_xch(1); /* 0x171C51AF: fxch st(1) */
    { double _v = fp_pop(); _st[2] = _v - _st[2]; } /* 0x171C51B1: fsubrp st(3) */
    fp_xch(2); /* 0x171C51B3: fxch st(2) */
    _st[0] += (double)*(float*)ADDR(ebp + 0x8); /* 0x171C51B5: fadd dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(0x17025D0C); /* 0x171C51B8: fmul dword ptr [0x17025d0c] */
    fp_xch(2); /* 0x171C51BE: fxch st(2) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171C51C0: fld dword ptr [ebp + 8] */
    _st[0] += _st[3]; /* 0x171C51C3: fadd st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x68) = _v; } /* 0x171C51C5: fstp dword ptr [eax + 0x68] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171C51C8: fld dword ptr [ebp + 8] */
    _st[0] -= _st[3]; /* 0x171C51CB: fsub st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x78) = _v; } /* 0x171C51CD: fstp dword ptr [eax + 0x78] */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x171C51D0: fstp st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x171C51D2: fld dword ptr [ebp - 0xc] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x8)); /* 0x171C51D5: fadd dword ptr [ebp - 8] */
    fp_push(_st[2]); /* 0x171C51D8: fld st(2) */
    _st[0] += _st[2]; /* 0x171C51DA: fadd st(2) */
    fp_push(_st[1]); /* 0x171C51DC: fld st(1) */
    _st[0] -= _st[1]; /* 0x171C51DE: fsub st(1) */
    _st[0] *= (double)*(float*)ADDR(0x17025D08); /* 0x171C51E0: fmul dword ptr [0x17025d08] */
    fp_xch(2); /* 0x171C51E6: fxch st(2) */
    _st[0] *= (double)*(float*)ADDR(0x17025D04); /* 0x171C51E8: fmul dword ptr [0x17025d04] */
    _st[0] += _st[2]; /* 0x171C51EE: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x171C51F0: fstp dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(0x17025D00); /* 0x171C51F3: fmul dword ptr [0x17025d00] */
    _st[0] += _st[1]; /* 0x171C51F9: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x171C51FB: fstp dword ptr [ebp - 4] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171C51FE: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x171C5200: fld dword ptr [ebp - 8] */
    _st[0] += _st[2]; /* 0x171C5203: fadd st(2) */
    _st[0] *= (double)*(float*)ADDR(0x17025D0C); /* 0x171C5205: fmul dword ptr [0x17025d0c] */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x171C520B: fstp st(2) */
    fp_xch(1); /* 0x171C520D: fxch st(1) */
    fp_push(_st[0]); /* 0x171C520F: fld st(0) */
    _st[0] += _st[2]; /* 0x171C5211: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x171C5213: fstp dword ptr [ebp - 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x171C5216: fsubp st(1) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171C5218: fld dword ptr [ebp + 8] */
    _st[0] += _st[1]; /* 0x171C521B: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x74) = _v; } /* 0x171C521D: fstp dword ptr [eax + 0x74] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x8); /* 0x171C5220: fsub dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x6C) = _v; } /* 0x171C5223: fstp dword ptr [eax + 0x6c] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x171C5226: fld dword ptr [ebp - 8] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171C5229: fadd dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x64) = _v; } /* 0x171C522C: fstp dword ptr [eax + 0x64] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x171C522F: fld dword ptr [ebp - 8] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171C5232: fsub dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x7C) = _v; } /* 0x171C5235: fstp dword ptr [eax + 0x7c] */
    fp_push(*(float*)&MEM32(eax + 0x80)); /* 0x171C5238: fld dword ptr [eax + 0x80] */
    _st[0] += (double)*(float*)ADDR(eax + 0x9C); /* 0x171C523E: fadd dword ptr [eax + 0x9c] */
    fp_push(*(float*)&MEM32(eax + 0x80)); /* 0x171C5244: fld dword ptr [eax + 0x80] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x9C); /* 0x171C524A: fsub dword ptr [eax + 0x9c] */
    fp_push(*(float*)&MEM32(eax + 0x84)); /* 0x171C5250: fld dword ptr [eax + 0x84] */
    _st[0] += (double)*(float*)ADDR(eax + 0x98); /* 0x171C5256: fadd dword ptr [eax + 0x98] */
    fp_push(*(float*)&MEM32(eax + 0x84)); /* 0x171C525C: fld dword ptr [eax + 0x84] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x98); /* 0x171C5262: fsub dword ptr [eax + 0x98] */
    fp_push(*(float*)&MEM32(eax + 0x88)); /* 0x171C5268: fld dword ptr [eax + 0x88] */
    _st[0] += (double)*(float*)ADDR(eax + 0x94); /* 0x171C526E: fadd dword ptr [eax + 0x94] */
    fp_push(*(float*)&MEM32(eax + 0x88)); /* 0x171C5274: fld dword ptr [eax + 0x88] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x94); /* 0x171C527A: fsub dword ptr [eax + 0x94] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x171C5280: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(eax + 0x8C)); /* 0x171C5283: fld dword ptr [eax + 0x8c] */
    _st[0] += (double)*(float*)ADDR(eax + 0x90); /* 0x171C5289: fadd dword ptr [eax + 0x90] */
    fp_push(*(float*)&MEM32(eax + 0x8C)); /* 0x171C528F: fld dword ptr [eax + 0x8c] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x90); /* 0x171C5295: fsub dword ptr [eax + 0x90] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x171C529B: fstp dword ptr [ebp - 0xc] */
    fp_push(_st[0]); /* 0x171C529E: fld st(0) */
    _st[0] += _st[6]; /* 0x171C52A0: fadd st(6) */
    fp_xch(6); /* 0x171C52A2: fxch st(6) */
    _st[0] -= _st[1]; /* 0x171C52A4: fsub st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x171C52A6: fstp dword ptr [ebp + 8] */
    fp_push(_st[1]); /* 0x171C52A9: fld st(1) */
    _st[0] += _st[4]; /* 0x171C52AB: fadd st(4) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x171C52AD: fst dword ptr [ebp - 4] */
    _st[0] += _st[6]; /* 0x171C52B0: fadd st(6) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x80) = _v; } /* 0x171C52B2: fstp dword ptr [eax + 0x80] */
    fp_xch(5); /* 0x171C52B8: fxch st(5) */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171C52BA: fsub dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x90) = _v; } /* 0x171C52BD: fstp dword ptr [eax + 0x90] */
    { _st[4] = _st[0]; g_st_i64[4] = g_st_i64[0]; fp_pop(); } /* 0x171C52C3: fstp st(4) */
    fp_xch(1); /* 0x171C52C5: fxch st(1) */
    { double _v = fp_pop(); _st[2] = _v - _st[2]; } /* 0x171C52C7: fsubrp st(3) */
    fp_xch(2); /* 0x171C52C9: fxch st(2) */
    _st[0] += (double)*(float*)ADDR(ebp + 0x8); /* 0x171C52CB: fadd dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(0x17025D0C); /* 0x171C52CE: fmul dword ptr [0x17025d0c] */
    fp_xch(2); /* 0x171C52D4: fxch st(2) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171C52D6: fld dword ptr [ebp + 8] */
    _st[0] += _st[3]; /* 0x171C52D9: fadd st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x88) = _v; } /* 0x171C52DB: fstp dword ptr [eax + 0x88] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171C52E1: fld dword ptr [ebp + 8] */
    _st[0] -= _st[3]; /* 0x171C52E4: fsub st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x98) = _v; } /* 0x171C52E6: fstp dword ptr [eax + 0x98] */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x171C52EC: fstp st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x171C52EE: fld dword ptr [ebp - 0xc] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x8)); /* 0x171C52F1: fadd dword ptr [ebp - 8] */
    fp_push(_st[2]); /* 0x171C52F4: fld st(2) */
    _st[0] += _st[2]; /* 0x171C52F6: fadd st(2) */
    fp_push(_st[1]); /* 0x171C52F8: fld st(1) */
    _st[0] -= _st[1]; /* 0x171C52FA: fsub st(1) */
    _st[0] *= (double)*(float*)ADDR(0x17025D08); /* 0x171C52FC: fmul dword ptr [0x17025d08] */
    fp_xch(2); /* 0x171C5302: fxch st(2) */
    _st[0] *= (double)*(float*)ADDR(0x17025D04); /* 0x171C5304: fmul dword ptr [0x17025d04] */
    _st[0] += _st[2]; /* 0x171C530A: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x171C530C: fstp dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(0x17025D00); /* 0x171C530F: fmul dword ptr [0x17025d00] */
    _st[0] += _st[1]; /* 0x171C5315: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x171C5317: fstp dword ptr [ebp - 4] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171C531A: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x171C531C: fld dword ptr [ebp - 8] */
    _st[0] += _st[2]; /* 0x171C531F: fadd st(2) */
    _st[0] *= (double)*(float*)ADDR(0x17025D0C); /* 0x171C5321: fmul dword ptr [0x17025d0c] */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x171C5327: fstp st(2) */
    fp_xch(1); /* 0x171C5329: fxch st(1) */
    fp_push(_st[0]); /* 0x171C532B: fld st(0) */
    _st[0] += _st[2]; /* 0x171C532D: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x171C532F: fstp dword ptr [ebp - 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x171C5332: fsubp st(1) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171C5334: fld dword ptr [ebp + 8] */
    _st[0] += _st[1]; /* 0x171C5337: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x94) = _v; } /* 0x171C5339: fstp dword ptr [eax + 0x94] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x8); /* 0x171C533F: fsub dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8C) = _v; } /* 0x171C5342: fstp dword ptr [eax + 0x8c] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x171C5348: fld dword ptr [ebp - 8] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171C534B: fadd dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x84) = _v; } /* 0x171C534E: fstp dword ptr [eax + 0x84] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x171C5354: fld dword ptr [ebp - 8] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171C5357: fsub dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x9C) = _v; } /* 0x171C535A: fstp dword ptr [eax + 0x9c] */
    fp_push(*(float*)&MEM32(eax + 0xA0)); /* 0x171C5360: fld dword ptr [eax + 0xa0] */
    _st[0] += (double)*(float*)ADDR(eax + 0xBC); /* 0x171C5366: fadd dword ptr [eax + 0xbc] */
    fp_push(*(float*)&MEM32(eax + 0xA0)); /* 0x171C536C: fld dword ptr [eax + 0xa0] */
    _st[0] -= (double)*(float*)ADDR(eax + 0xBC); /* 0x171C5372: fsub dword ptr [eax + 0xbc] */
    fp_push(*(float*)&MEM32(eax + 0xA4)); /* 0x171C5378: fld dword ptr [eax + 0xa4] */
    _st[0] += (double)*(float*)ADDR(eax + 0xB8); /* 0x171C537E: fadd dword ptr [eax + 0xb8] */
    fp_push(*(float*)&MEM32(eax + 0xA4)); /* 0x171C5384: fld dword ptr [eax + 0xa4] */
    _st[0] -= (double)*(float*)ADDR(eax + 0xB8); /* 0x171C538A: fsub dword ptr [eax + 0xb8] */
    fp_push(*(float*)&MEM32(eax + 0xA8)); /* 0x171C5390: fld dword ptr [eax + 0xa8] */
    _st[0] += (double)*(float*)ADDR(eax + 0xB4); /* 0x171C5396: fadd dword ptr [eax + 0xb4] */
    fp_push(*(float*)&MEM32(eax + 0xA8)); /* 0x171C539C: fld dword ptr [eax + 0xa8] */
    _st[0] -= (double)*(float*)ADDR(eax + 0xB4); /* 0x171C53A2: fsub dword ptr [eax + 0xb4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x171C53A8: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(eax + 0xAC)); /* 0x171C53AB: fld dword ptr [eax + 0xac] */
    _st[0] += (double)*(float*)ADDR(eax + 0xB0); /* 0x171C53B1: fadd dword ptr [eax + 0xb0] */
    fp_push(*(float*)&MEM32(eax + 0xAC)); /* 0x171C53B7: fld dword ptr [eax + 0xac] */
    _st[0] -= (double)*(float*)ADDR(eax + 0xB0); /* 0x171C53BD: fsub dword ptr [eax + 0xb0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x171C53C3: fstp dword ptr [ebp - 0xc] */
    fp_push(_st[0]); /* 0x171C53C6: fld st(0) */
    _st[0] += _st[6]; /* 0x171C53C8: fadd st(6) */
    fp_xch(6); /* 0x171C53CA: fxch st(6) */
    _st[0] -= _st[1]; /* 0x171C53CC: fsub st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x171C53CE: fstp dword ptr [ebp + 8] */
    fp_push(_st[1]); /* 0x171C53D1: fld st(1) */
    _st[0] += _st[4]; /* 0x171C53D3: fadd st(4) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x171C53D5: fst dword ptr [ebp - 4] */
    _st[0] += _st[6]; /* 0x171C53D8: fadd st(6) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xA0) = _v; } /* 0x171C53DA: fstp dword ptr [eax + 0xa0] */
    fp_xch(5); /* 0x171C53E0: fxch st(5) */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171C53E2: fsub dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xB0) = _v; } /* 0x171C53E5: fstp dword ptr [eax + 0xb0] */
    { _st[4] = _st[0]; g_st_i64[4] = g_st_i64[0]; fp_pop(); } /* 0x171C53EB: fstp st(4) */
    fp_xch(1); /* 0x171C53ED: fxch st(1) */
    { double _v = fp_pop(); _st[2] = _v - _st[2]; } /* 0x171C53EF: fsubrp st(3) */
    fp_xch(2); /* 0x171C53F1: fxch st(2) */
    _st[0] += (double)*(float*)ADDR(ebp + 0x8); /* 0x171C53F3: fadd dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(0x17025D0C); /* 0x171C53F6: fmul dword ptr [0x17025d0c] */
    fp_xch(2); /* 0x171C53FC: fxch st(2) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171C53FE: fld dword ptr [ebp + 8] */
    _st[0] += _st[3]; /* 0x171C5401: fadd st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xA8) = _v; } /* 0x171C5403: fstp dword ptr [eax + 0xa8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171C5409: fld dword ptr [ebp + 8] */
    _st[0] -= _st[3]; /* 0x171C540C: fsub st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xB8) = _v; } /* 0x171C540E: fstp dword ptr [eax + 0xb8] */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x171C5414: fstp st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x171C5416: fld dword ptr [ebp - 0xc] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x8)); /* 0x171C5419: fadd dword ptr [ebp - 8] */
    fp_push(_st[2]); /* 0x171C541C: fld st(2) */
    _st[0] += _st[2]; /* 0x171C541E: fadd st(2) */
    fp_push(_st[1]); /* 0x171C5420: fld st(1) */
    _st[0] -= _st[1]; /* 0x171C5422: fsub st(1) */
    _st[0] *= (double)*(float*)ADDR(0x17025D08); /* 0x171C5424: fmul dword ptr [0x17025d08] */
    fp_xch(2); /* 0x171C542A: fxch st(2) */
    _st[0] *= (double)*(float*)ADDR(0x17025D04); /* 0x171C542C: fmul dword ptr [0x17025d04] */
    _st[0] += _st[2]; /* 0x171C5432: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x171C5434: fstp dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(0x17025D00); /* 0x171C5437: fmul dword ptr [0x17025d00] */
    _st[0] += _st[1]; /* 0x171C543D: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x171C543F: fstp dword ptr [ebp - 4] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171C5442: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x171C5444: fld dword ptr [ebp - 8] */
    _st[0] += _st[2]; /* 0x171C5447: fadd st(2) */
    _st[0] *= (double)*(float*)ADDR(0x17025D0C); /* 0x171C5449: fmul dword ptr [0x17025d0c] */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x171C544F: fstp st(2) */
    fp_xch(1); /* 0x171C5451: fxch st(1) */
    fp_push(_st[0]); /* 0x171C5453: fld st(0) */
    _st[0] += _st[2]; /* 0x171C5455: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x171C5457: fstp dword ptr [ebp - 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x171C545A: fsubp st(1) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171C545C: fld dword ptr [ebp + 8] */
    _st[0] += _st[1]; /* 0x171C545F: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xB4) = _v; } /* 0x171C5461: fstp dword ptr [eax + 0xb4] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x8); /* 0x171C5467: fsub dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xAC) = _v; } /* 0x171C546A: fstp dword ptr [eax + 0xac] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x171C5470: fld dword ptr [ebp - 8] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171C5473: fadd dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xA4) = _v; } /* 0x171C5476: fstp dword ptr [eax + 0xa4] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x171C547C: fld dword ptr [ebp - 8] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171C547F: fsub dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xBC) = _v; } /* 0x171C5482: fstp dword ptr [eax + 0xbc] */
    fp_push(*(float*)&MEM32(eax + 0xC0)); /* 0x171C5488: fld dword ptr [eax + 0xc0] */
    _st[0] += (double)*(float*)ADDR(eax + 0xDC); /* 0x171C548E: fadd dword ptr [eax + 0xdc] */
    fp_push(*(float*)&MEM32(eax + 0xC0)); /* 0x171C5494: fld dword ptr [eax + 0xc0] */
    _st[0] -= (double)*(float*)ADDR(eax + 0xDC); /* 0x171C549A: fsub dword ptr [eax + 0xdc] */
    fp_push(*(float*)&MEM32(eax + 0xC4)); /* 0x171C54A0: fld dword ptr [eax + 0xc4] */
    _st[0] += (double)*(float*)ADDR(eax + 0xD8); /* 0x171C54A6: fadd dword ptr [eax + 0xd8] */
    fp_push(*(float*)&MEM32(eax + 0xC4)); /* 0x171C54AC: fld dword ptr [eax + 0xc4] */
    _st[0] -= (double)*(float*)ADDR(eax + 0xD8); /* 0x171C54B2: fsub dword ptr [eax + 0xd8] */
    fp_push(*(float*)&MEM32(eax + 0xC8)); /* 0x171C54B8: fld dword ptr [eax + 0xc8] */
    _st[0] += (double)*(float*)ADDR(eax + 0xD4); /* 0x171C54BE: fadd dword ptr [eax + 0xd4] */
    fp_push(*(float*)&MEM32(eax + 0xC8)); /* 0x171C54C4: fld dword ptr [eax + 0xc8] */
    _st[0] -= (double)*(float*)ADDR(eax + 0xD4); /* 0x171C54CA: fsub dword ptr [eax + 0xd4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x171C54D0: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(eax + 0xCC)); /* 0x171C54D3: fld dword ptr [eax + 0xcc] */
    _st[0] += (double)*(float*)ADDR(eax + 0xD0); /* 0x171C54D9: fadd dword ptr [eax + 0xd0] */
    fp_push(*(float*)&MEM32(eax + 0xCC)); /* 0x171C54DF: fld dword ptr [eax + 0xcc] */
    _st[0] -= (double)*(float*)ADDR(eax + 0xD0); /* 0x171C54E5: fsub dword ptr [eax + 0xd0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x171C54EB: fstp dword ptr [ebp - 0xc] */
    fp_push(_st[0]); /* 0x171C54EE: fld st(0) */
    _st[0] += _st[6]; /* 0x171C54F0: fadd st(6) */
    fp_xch(6); /* 0x171C54F2: fxch st(6) */
    _st[0] -= _st[1]; /* 0x171C54F4: fsub st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x171C54F6: fstp dword ptr [ebp + 8] */
    fp_push(_st[1]); /* 0x171C54F9: fld st(1) */
    _st[0] += _st[4]; /* 0x171C54FB: fadd st(4) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x171C54FD: fst dword ptr [ebp - 4] */
    _st[0] += _st[6]; /* 0x171C5500: fadd st(6) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC0) = _v; } /* 0x171C5502: fstp dword ptr [eax + 0xc0] */
    fp_xch(5); /* 0x171C5508: fxch st(5) */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171C550A: fsub dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xD0) = _v; } /* 0x171C550D: fstp dword ptr [eax + 0xd0] */
    { _st[4] = _st[0]; g_st_i64[4] = g_st_i64[0]; fp_pop(); } /* 0x171C5513: fstp st(4) */
    fp_xch(1); /* 0x171C5515: fxch st(1) */
    { double _v = fp_pop(); _st[2] = _v - _st[2]; } /* 0x171C5517: fsubrp st(3) */
    fp_xch(2); /* 0x171C5519: fxch st(2) */
    _st[0] += (double)*(float*)ADDR(ebp + 0x8); /* 0x171C551B: fadd dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(0x17025D0C); /* 0x171C551E: fmul dword ptr [0x17025d0c] */
    fp_xch(2); /* 0x171C5524: fxch st(2) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171C5526: fld dword ptr [ebp + 8] */
    _st[0] += _st[3]; /* 0x171C5529: fadd st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC8) = _v; } /* 0x171C552B: fstp dword ptr [eax + 0xc8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171C5531: fld dword ptr [ebp + 8] */
    _st[0] -= _st[3]; /* 0x171C5534: fsub st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xD8) = _v; } /* 0x171C5536: fstp dword ptr [eax + 0xd8] */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x171C553C: fstp st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x171C553E: fld dword ptr [ebp - 0xc] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x8)); /* 0x171C5541: fadd dword ptr [ebp - 8] */
    fp_push(_st[2]); /* 0x171C5544: fld st(2) */
    _st[0] += _st[2]; /* 0x171C5546: fadd st(2) */
    fp_push(_st[1]); /* 0x171C5548: fld st(1) */
    _st[0] -= _st[1]; /* 0x171C554A: fsub st(1) */
    _st[0] *= (double)*(float*)ADDR(0x17025D08); /* 0x171C554C: fmul dword ptr [0x17025d08] */
    fp_xch(2); /* 0x171C5552: fxch st(2) */
    _st[0] *= (double)*(float*)ADDR(0x17025D04); /* 0x171C5554: fmul dword ptr [0x17025d04] */
    _st[0] += _st[2]; /* 0x171C555A: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x171C555C: fstp dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(0x17025D00); /* 0x171C555F: fmul dword ptr [0x17025d00] */
    _st[0] += _st[1]; /* 0x171C5565: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x171C5567: fstp dword ptr [ebp - 4] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171C556A: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x171C556C: fld dword ptr [ebp - 8] */
    _st[0] += _st[2]; /* 0x171C556F: fadd st(2) */
    _st[0] *= (double)*(float*)ADDR(0x17025D0C); /* 0x171C5571: fmul dword ptr [0x17025d0c] */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x171C5577: fstp st(2) */
    fp_xch(1); /* 0x171C5579: fxch st(1) */
    fp_push(_st[0]); /* 0x171C557B: fld st(0) */
    _st[0] += _st[2]; /* 0x171C557D: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x171C557F: fstp dword ptr [ebp - 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x171C5582: fsubp st(1) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171C5584: fld dword ptr [ebp + 8] */
    _st[0] += _st[1]; /* 0x171C5587: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xD4) = _v; } /* 0x171C5589: fstp dword ptr [eax + 0xd4] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x8); /* 0x171C558F: fsub dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xCC) = _v; } /* 0x171C5592: fstp dword ptr [eax + 0xcc] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x171C5598: fld dword ptr [ebp - 8] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171C559B: fadd dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC4) = _v; } /* 0x171C559E: fstp dword ptr [eax + 0xc4] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x171C55A4: fld dword ptr [ebp - 8] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171C55A7: fsub dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xDC) = _v; } /* 0x171C55AA: fstp dword ptr [eax + 0xdc] */
    fp_push(*(float*)&MEM32(eax + 0xE0)); /* 0x171C55B0: fld dword ptr [eax + 0xe0] */
    _st[0] += (double)*(float*)ADDR(eax + 0xFC); /* 0x171C55B6: fadd dword ptr [eax + 0xfc] */
    fp_push(*(float*)&MEM32(eax + 0xE0)); /* 0x171C55BC: fld dword ptr [eax + 0xe0] */
    _st[0] -= (double)*(float*)ADDR(eax + 0xFC); /* 0x171C55C2: fsub dword ptr [eax + 0xfc] */
    fp_push(*(float*)&MEM32(eax + 0xE4)); /* 0x171C55C8: fld dword ptr [eax + 0xe4] */
    _st[0] += (double)*(float*)ADDR(eax + 0xF8); /* 0x171C55CE: fadd dword ptr [eax + 0xf8] */
    fp_push(*(float*)&MEM32(eax + 0xE4)); /* 0x171C55D4: fld dword ptr [eax + 0xe4] */
    _st[0] -= (double)*(float*)ADDR(eax + 0xF8); /* 0x171C55DA: fsub dword ptr [eax + 0xf8] */
    fp_push(*(float*)&MEM32(eax + 0xE8)); /* 0x171C55E0: fld dword ptr [eax + 0xe8] */
    _st[0] += (double)*(float*)ADDR(eax + 0xF4); /* 0x171C55E6: fadd dword ptr [eax + 0xf4] */
    fp_push(*(float*)&MEM32(eax + 0xE8)); /* 0x171C55EC: fld dword ptr [eax + 0xe8] */
    _st[0] -= (double)*(float*)ADDR(eax + 0xF4); /* 0x171C55F2: fsub dword ptr [eax + 0xf4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x171C55F8: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(eax + 0xEC)); /* 0x171C55FB: fld dword ptr [eax + 0xec] */
    _st[0] += (double)*(float*)ADDR(eax + 0xF0); /* 0x171C5601: fadd dword ptr [eax + 0xf0] */
    fp_push(*(float*)&MEM32(eax + 0xEC)); /* 0x171C5607: fld dword ptr [eax + 0xec] */
    _st[0] -= (double)*(float*)ADDR(eax + 0xF0); /* 0x171C560D: fsub dword ptr [eax + 0xf0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x171C5613: fstp dword ptr [ebp - 0xc] */
    fp_push(_st[0]); /* 0x171C5616: fld st(0) */
    _st[0] += _st[6]; /* 0x171C5618: fadd st(6) */
    fp_xch(6); /* 0x171C561A: fxch st(6) */
    _st[0] -= _st[1]; /* 0x171C561C: fsub st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x171C561E: fstp dword ptr [ebp + 8] */
    fp_push(_st[1]); /* 0x171C5621: fld st(1) */
    _st[0] += _st[4]; /* 0x171C5623: fadd st(4) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x171C5625: fst dword ptr [ebp - 4] */
    _st[0] += _st[6]; /* 0x171C5628: fadd st(6) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xE0) = _v; } /* 0x171C562A: fstp dword ptr [eax + 0xe0] */
    fp_xch(5); /* 0x171C5630: fxch st(5) */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171C5632: fsub dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xF0) = _v; } /* 0x171C5635: fstp dword ptr [eax + 0xf0] */
    { _st[4] = _st[0]; g_st_i64[4] = g_st_i64[0]; fp_pop(); } /* 0x171C563B: fstp st(4) */
    fp_xch(1); /* 0x171C563D: fxch st(1) */
    { double _v = fp_pop(); _st[2] = _v - _st[2]; } /* 0x171C563F: fsubrp st(3) */
    fp_xch(2); /* 0x171C5641: fxch st(2) */
    _st[0] += (double)*(float*)ADDR(ebp + 0x8); /* 0x171C5643: fadd dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(0x17025D0C); /* 0x171C5646: fmul dword ptr [0x17025d0c] */
    fp_xch(2); /* 0x171C564C: fxch st(2) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171C564E: fld dword ptr [ebp + 8] */
    _st[0] += _st[3]; /* 0x171C5651: fadd st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xE8) = _v; } /* 0x171C5653: fstp dword ptr [eax + 0xe8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171C5659: fld dword ptr [ebp + 8] */
    _st[0] -= _st[3]; /* 0x171C565C: fsub st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xF8) = _v; } /* 0x171C565E: fstp dword ptr [eax + 0xf8] */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x171C5664: fstp st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x171C5666: fld dword ptr [ebp - 0xc] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x8)); /* 0x171C5669: fadd dword ptr [ebp - 8] */
    fp_push(_st[2]); /* 0x171C566C: fld st(2) */
    _st[0] += _st[2]; /* 0x171C566E: fadd st(2) */
    fp_push(_st[1]); /* 0x171C5670: fld st(1) */
    _st[0] -= _st[1]; /* 0x171C5672: fsub st(1) */
    _st[0] *= (double)*(float*)ADDR(0x17025D08); /* 0x171C5674: fmul dword ptr [0x17025d08] */
    fp_xch(2); /* 0x171C567A: fxch st(2) */
    _st[0] *= (double)*(float*)ADDR(0x17025D04); /* 0x171C567C: fmul dword ptr [0x17025d04] */
    _st[0] += _st[2]; /* 0x171C5682: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x171C5684: fstp dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(0x17025D00); /* 0x171C5687: fmul dword ptr [0x17025d00] */
    _st[0] += _st[1]; /* 0x171C568D: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x171C568F: fstp dword ptr [ebp - 4] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171C5692: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x171C5694: fld dword ptr [ebp - 8] */
    _st[0] += _st[2]; /* 0x171C5697: fadd st(2) */
    _st[0] *= (double)*(float*)ADDR(0x17025D0C); /* 0x171C5699: fmul dword ptr [0x17025d0c] */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x171C569F: fstp st(2) */
    fp_xch(1); /* 0x171C56A1: fxch st(1) */
    fp_push(_st[0]); /* 0x171C56A3: fld st(0) */
    _st[0] += _st[2]; /* 0x171C56A5: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x171C56A7: fstp dword ptr [ebp - 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x171C56AA: fsubp st(1) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171C56AC: fld dword ptr [ebp + 8] */
    _st[0] += _st[1]; /* 0x171C56AF: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xF4) = _v; } /* 0x171C56B1: fstp dword ptr [eax + 0xf4] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x8); /* 0x171C56B7: fsub dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xEC) = _v; } /* 0x171C56BA: fstp dword ptr [eax + 0xec] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x171C56C0: fld dword ptr [ebp - 8] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171C56C3: fadd dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xE4) = _v; } /* 0x171C56C6: fstp dword ptr [eax + 0xe4] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x171C56CC: fld dword ptr [ebp - 8] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171C56CF: fsub dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xFC) = _v; } /* 0x171C56D2: fstp dword ptr [eax + 0xfc] */
    fp_push(*(float*)&MEM32(eax + 0xE0)); /* 0x171C56D8: fld dword ptr [eax + 0xe0] */
    _st[0] += (double)*(float*)ADDR(eax); /* 0x171C56DE: fadd dword ptr [eax] */
    fp_push(*(float*)&MEM32(eax)); /* 0x171C56E0: fld dword ptr [eax] */
    _st[0] -= (double)*(float*)ADDR(eax + 0xE0); /* 0x171C56E2: fsub dword ptr [eax + 0xe0] */
    fp_push(*(float*)&MEM32(eax + 0xC0)); /* 0x171C56E8: fld dword ptr [eax + 0xc0] */
    _st[0] += (double)*(float*)ADDR(eax + 0x20); /* 0x171C56EE: fadd dword ptr [eax + 0x20] */
    fp_push(*(float*)&MEM32(eax + 0x20)); /* 0x171C56F1: fld dword ptr [eax + 0x20] */
    _st[0] -= (double)*(float*)ADDR(eax + 0xC0); /* 0x171C56F4: fsub dword ptr [eax + 0xc0] */
    fp_push(*(float*)&MEM32(eax + 0xA0)); /* 0x171C56FA: fld dword ptr [eax + 0xa0] */
    _st[0] += (double)*(float*)ADDR(eax + 0x40); /* 0x171C5700: fadd dword ptr [eax + 0x40] */
    fp_push(*(float*)&MEM32(eax + 0x40)); /* 0x171C5703: fld dword ptr [eax + 0x40] */
    _st[0] -= (double)*(float*)ADDR(eax + 0xA0); /* 0x171C5706: fsub dword ptr [eax + 0xa0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x171C570C: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(eax + 0x80)); /* 0x171C570F: fld dword ptr [eax + 0x80] */
    _st[0] += (double)*(float*)ADDR(eax + 0x60); /* 0x171C5715: fadd dword ptr [eax + 0x60] */
    fp_push(*(float*)&MEM32(eax + 0x60)); /* 0x171C5718: fld dword ptr [eax + 0x60] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x80); /* 0x171C571B: fsub dword ptr [eax + 0x80] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x171C5721: fstp dword ptr [ebp - 0xc] */
    fp_push(_st[0]); /* 0x171C5724: fld st(0) */
    _st[0] += _st[6]; /* 0x171C5726: fadd st(6) */
    fp_xch(6); /* 0x171C5728: fxch st(6) */
    _st[0] -= _st[1]; /* 0x171C572A: fsub st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x171C572C: fstp dword ptr [ebp + 8] */
    fp_push(_st[1]); /* 0x171C572F: fld st(1) */
    _st[0] += _st[4]; /* 0x171C5731: fadd st(4) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x171C5733: fst dword ptr [ebp - 4] */
    _st[0] += _st[6]; /* 0x171C5736: fadd st(6) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x171C5738: fstp dword ptr [eax] */
    fp_xch(5); /* 0x171C573A: fxch st(5) */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171C573C: fsub dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x80) = _v; } /* 0x171C573F: fstp dword ptr [eax + 0x80] */
    { _st[4] = _st[0]; g_st_i64[4] = g_st_i64[0]; fp_pop(); } /* 0x171C5745: fstp st(4) */
    fp_xch(1); /* 0x171C5747: fxch st(1) */
    { double _v = fp_pop(); _st[2] = _v - _st[2]; } /* 0x171C5749: fsubrp st(3) */
    fp_xch(2); /* 0x171C574B: fxch st(2) */
    _st[0] += (double)*(float*)ADDR(ebp + 0x8); /* 0x171C574D: fadd dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(0x17025D0C); /* 0x171C5750: fmul dword ptr [0x17025d0c] */
    fp_xch(2); /* 0x171C5756: fxch st(2) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171C5758: fld dword ptr [ebp + 8] */
    _st[0] += _st[3]; /* 0x171C575B: fadd st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x40) = _v; } /* 0x171C575D: fstp dword ptr [eax + 0x40] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171C5760: fld dword ptr [ebp + 8] */
    _st[0] -= _st[3]; /* 0x171C5763: fsub st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC0) = _v; } /* 0x171C5765: fstp dword ptr [eax + 0xc0] */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x171C576B: fstp st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x171C576D: fld dword ptr [ebp - 0xc] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x8)); /* 0x171C5770: fadd dword ptr [ebp - 8] */
    fp_push(_st[2]); /* 0x171C5773: fld st(2) */
    _st[0] += _st[2]; /* 0x171C5775: fadd st(2) */
    fp_push(_st[1]); /* 0x171C5777: fld st(1) */
    _st[0] -= _st[1]; /* 0x171C5779: fsub st(1) */
    _st[0] *= (double)*(float*)ADDR(0x17025D08); /* 0x171C577B: fmul dword ptr [0x17025d08] */
    fp_xch(2); /* 0x171C5781: fxch st(2) */
    _st[0] *= (double)*(float*)ADDR(0x17025D04); /* 0x171C5783: fmul dword ptr [0x17025d04] */
    _st[0] += _st[2]; /* 0x171C5789: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x171C578B: fstp dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(0x17025D00); /* 0x171C578E: fmul dword ptr [0x17025d00] */
    _st[0] += _st[1]; /* 0x171C5794: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x171C5796: fstp dword ptr [ebp - 4] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171C5799: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x171C579B: fld dword ptr [ebp - 8] */
    _st[0] += _st[2]; /* 0x171C579E: fadd st(2) */
    _st[0] *= (double)*(float*)ADDR(0x17025D0C); /* 0x171C57A0: fmul dword ptr [0x17025d0c] */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x171C57A6: fstp st(2) */
    fp_xch(1); /* 0x171C57A8: fxch st(1) */
    fp_push(_st[0]); /* 0x171C57AA: fld st(0) */
    _st[0] += _st[2]; /* 0x171C57AC: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x171C57AE: fstp dword ptr [ebp - 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x171C57B1: fsubp st(1) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171C57B3: fld dword ptr [ebp + 8] */
    _st[0] += _st[1]; /* 0x171C57B6: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xA0) = _v; } /* 0x171C57B8: fstp dword ptr [eax + 0xa0] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x8); /* 0x171C57BE: fsub dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x60) = _v; } /* 0x171C57C1: fstp dword ptr [eax + 0x60] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x171C57C4: fld dword ptr [ebp - 8] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171C57C7: fadd dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x20) = _v; } /* 0x171C57CA: fstp dword ptr [eax + 0x20] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x171C57CD: fld dword ptr [ebp - 8] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171C57D0: fsub dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xE0) = _v; } /* 0x171C57D3: fstp dword ptr [eax + 0xe0] */
    fp_push(*(float*)&MEM32(eax + 0xE4)); /* 0x171C57D9: fld dword ptr [eax + 0xe4] */
    _st[0] += (double)*(float*)ADDR(eax + 0x4); /* 0x171C57DF: fadd dword ptr [eax + 4] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x171C57E2: fld dword ptr [eax + 4] */
    _st[0] -= (double)*(float*)ADDR(eax + 0xE4); /* 0x171C57E5: fsub dword ptr [eax + 0xe4] */
    fp_push(*(float*)&MEM32(eax + 0xC4)); /* 0x171C57EB: fld dword ptr [eax + 0xc4] */
    _st[0] += (double)*(float*)ADDR(eax + 0x24); /* 0x171C57F1: fadd dword ptr [eax + 0x24] */
    fp_push(*(float*)&MEM32(eax + 0x24)); /* 0x171C57F4: fld dword ptr [eax + 0x24] */
    _st[0] -= (double)*(float*)ADDR(eax + 0xC4); /* 0x171C57F7: fsub dword ptr [eax + 0xc4] */
    fp_push(*(float*)&MEM32(eax + 0xA4)); /* 0x171C57FD: fld dword ptr [eax + 0xa4] */
    _st[0] += (double)*(float*)ADDR(eax + 0x44); /* 0x171C5803: fadd dword ptr [eax + 0x44] */
    fp_push(*(float*)&MEM32(eax + 0x44)); /* 0x171C5806: fld dword ptr [eax + 0x44] */
    _st[0] -= (double)*(float*)ADDR(eax + 0xA4); /* 0x171C5809: fsub dword ptr [eax + 0xa4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x171C580F: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(eax + 0x84)); /* 0x171C5812: fld dword ptr [eax + 0x84] */
    _st[0] += (double)*(float*)ADDR(eax + 0x64); /* 0x171C5818: fadd dword ptr [eax + 0x64] */
    fp_push(*(float*)&MEM32(eax + 0x64)); /* 0x171C581B: fld dword ptr [eax + 0x64] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x84); /* 0x171C581E: fsub dword ptr [eax + 0x84] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x171C5824: fstp dword ptr [ebp - 0xc] */
    fp_push(_st[0]); /* 0x171C5827: fld st(0) */
    _st[0] += _st[6]; /* 0x171C5829: fadd st(6) */
    fp_xch(6); /* 0x171C582B: fxch st(6) */
    _st[0] -= _st[1]; /* 0x171C582D: fsub st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x171C582F: fstp dword ptr [ebp + 8] */
    fp_push(_st[1]); /* 0x171C5832: fld st(1) */
    _st[0] += _st[4]; /* 0x171C5834: fadd st(4) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x171C5836: fst dword ptr [ebp - 4] */
    _st[0] += _st[6]; /* 0x171C5839: fadd st(6) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4) = _v; } /* 0x171C583B: fstp dword ptr [eax + 4] */
    fp_xch(5); /* 0x171C583E: fxch st(5) */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171C5840: fsub dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x84) = _v; } /* 0x171C5843: fstp dword ptr [eax + 0x84] */
    { _st[4] = _st[0]; g_st_i64[4] = g_st_i64[0]; fp_pop(); } /* 0x171C5849: fstp st(4) */
    fp_xch(1); /* 0x171C584B: fxch st(1) */
    { double _v = fp_pop(); _st[2] = _v - _st[2]; } /* 0x171C584D: fsubrp st(3) */
    fp_xch(2); /* 0x171C584F: fxch st(2) */
    _st[0] += (double)*(float*)ADDR(ebp + 0x8); /* 0x171C5851: fadd dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(0x17025D0C); /* 0x171C5854: fmul dword ptr [0x17025d0c] */
    fp_xch(2); /* 0x171C585A: fxch st(2) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171C585C: fld dword ptr [ebp + 8] */
    _st[0] += _st[3]; /* 0x171C585F: fadd st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x44) = _v; } /* 0x171C5861: fstp dword ptr [eax + 0x44] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171C5864: fld dword ptr [ebp + 8] */
    _st[0] -= _st[3]; /* 0x171C5867: fsub st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC4) = _v; } /* 0x171C5869: fstp dword ptr [eax + 0xc4] */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x171C586F: fstp st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x171C5871: fld dword ptr [ebp - 0xc] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x8)); /* 0x171C5874: fadd dword ptr [ebp - 8] */
    fp_push(_st[2]); /* 0x171C5877: fld st(2) */
    _st[0] += _st[2]; /* 0x171C5879: fadd st(2) */
    fp_push(_st[1]); /* 0x171C587B: fld st(1) */
    _st[0] -= _st[1]; /* 0x171C587D: fsub st(1) */
    _st[0] *= (double)*(float*)ADDR(0x17025D08); /* 0x171C587F: fmul dword ptr [0x17025d08] */
    fp_xch(2); /* 0x171C5885: fxch st(2) */
    _st[0] *= (double)*(float*)ADDR(0x17025D04); /* 0x171C5887: fmul dword ptr [0x17025d04] */
    _st[0] += _st[2]; /* 0x171C588D: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x171C588F: fstp dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(0x17025D00); /* 0x171C5892: fmul dword ptr [0x17025d00] */
    _st[0] += _st[1]; /* 0x171C5898: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x171C589A: fstp dword ptr [ebp - 4] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171C589D: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x171C589F: fld dword ptr [ebp - 8] */
    _st[0] += _st[2]; /* 0x171C58A2: fadd st(2) */
    _st[0] *= (double)*(float*)ADDR(0x17025D0C); /* 0x171C58A4: fmul dword ptr [0x17025d0c] */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x171C58AA: fstp st(2) */
    fp_xch(1); /* 0x171C58AC: fxch st(1) */
    fp_push(_st[0]); /* 0x171C58AE: fld st(0) */
    _st[0] += _st[2]; /* 0x171C58B0: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x171C58B2: fstp dword ptr [ebp - 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x171C58B5: fsubp st(1) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171C58B7: fld dword ptr [ebp + 8] */
    _st[0] += _st[1]; /* 0x171C58BA: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xA4) = _v; } /* 0x171C58BC: fstp dword ptr [eax + 0xa4] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x8); /* 0x171C58C2: fsub dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x64) = _v; } /* 0x171C58C5: fstp dword ptr [eax + 0x64] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x171C58C8: fld dword ptr [ebp - 8] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171C58CB: fadd dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x24) = _v; } /* 0x171C58CE: fstp dword ptr [eax + 0x24] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x171C58D1: fld dword ptr [ebp - 8] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171C58D4: fsub dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xE4) = _v; } /* 0x171C58D7: fstp dword ptr [eax + 0xe4] */
    fp_push(*(float*)&MEM32(eax + 0xE8)); /* 0x171C58DD: fld dword ptr [eax + 0xe8] */
    _st[0] += (double)*(float*)ADDR(eax + 0x8); /* 0x171C58E3: fadd dword ptr [eax + 8] */
    fp_push(*(float*)&MEM32(eax + 0x8)); /* 0x171C58E6: fld dword ptr [eax + 8] */
    _st[0] -= (double)*(float*)ADDR(eax + 0xE8); /* 0x171C58E9: fsub dword ptr [eax + 0xe8] */
    fp_push(*(float*)&MEM32(eax + 0xC8)); /* 0x171C58EF: fld dword ptr [eax + 0xc8] */
    _st[0] += (double)*(float*)ADDR(eax + 0x28); /* 0x171C58F5: fadd dword ptr [eax + 0x28] */
    fp_push(*(float*)&MEM32(eax + 0x28)); /* 0x171C58F8: fld dword ptr [eax + 0x28] */
    _st[0] -= (double)*(float*)ADDR(eax + 0xC8); /* 0x171C58FB: fsub dword ptr [eax + 0xc8] */
    fp_push(*(float*)&MEM32(eax + 0xA8)); /* 0x171C5901: fld dword ptr [eax + 0xa8] */
    _st[0] += (double)*(float*)ADDR(eax + 0x48); /* 0x171C5907: fadd dword ptr [eax + 0x48] */
    fp_push(*(float*)&MEM32(eax + 0x48)); /* 0x171C590A: fld dword ptr [eax + 0x48] */
    _st[0] -= (double)*(float*)ADDR(eax + 0xA8); /* 0x171C590D: fsub dword ptr [eax + 0xa8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x171C5913: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(eax + 0x88)); /* 0x171C5916: fld dword ptr [eax + 0x88] */
    _st[0] += (double)*(float*)ADDR(eax + 0x68); /* 0x171C591C: fadd dword ptr [eax + 0x68] */
    fp_push(*(float*)&MEM32(eax + 0x68)); /* 0x171C591F: fld dword ptr [eax + 0x68] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x88); /* 0x171C5922: fsub dword ptr [eax + 0x88] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x171C5928: fstp dword ptr [ebp - 0xc] */
    fp_push(_st[0]); /* 0x171C592B: fld st(0) */
    _st[0] += _st[6]; /* 0x171C592D: fadd st(6) */
    fp_xch(6); /* 0x171C592F: fxch st(6) */
    _st[0] -= _st[1]; /* 0x171C5931: fsub st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x171C5933: fstp dword ptr [ebp + 8] */
    fp_push(_st[1]); /* 0x171C5936: fld st(1) */
    _st[0] += _st[4]; /* 0x171C5938: fadd st(4) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x171C593A: fst dword ptr [ebp - 4] */
    _st[0] += _st[6]; /* 0x171C593D: fadd st(6) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8) = _v; } /* 0x171C593F: fstp dword ptr [eax + 8] */
    fp_xch(5); /* 0x171C5942: fxch st(5) */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171C5944: fsub dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x88) = _v; } /* 0x171C5947: fstp dword ptr [eax + 0x88] */
    { _st[4] = _st[0]; g_st_i64[4] = g_st_i64[0]; fp_pop(); } /* 0x171C594D: fstp st(4) */
    fp_xch(1); /* 0x171C594F: fxch st(1) */
    { double _v = fp_pop(); _st[2] = _v - _st[2]; } /* 0x171C5951: fsubrp st(3) */
    fp_xch(2); /* 0x171C5953: fxch st(2) */
    _st[0] += (double)*(float*)ADDR(ebp + 0x8); /* 0x171C5955: fadd dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(0x17025D0C); /* 0x171C5958: fmul dword ptr [0x17025d0c] */
    fp_xch(2); /* 0x171C595E: fxch st(2) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171C5960: fld dword ptr [ebp + 8] */
    _st[0] += _st[3]; /* 0x171C5963: fadd st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x48) = _v; } /* 0x171C5965: fstp dword ptr [eax + 0x48] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171C5968: fld dword ptr [ebp + 8] */
    _st[0] -= _st[3]; /* 0x171C596B: fsub st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC8) = _v; } /* 0x171C596D: fstp dword ptr [eax + 0xc8] */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x171C5973: fstp st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x171C5975: fld dword ptr [ebp - 0xc] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x8)); /* 0x171C5978: fadd dword ptr [ebp - 8] */
    fp_push(_st[2]); /* 0x171C597B: fld st(2) */
    _st[0] += _st[2]; /* 0x171C597D: fadd st(2) */
    fp_push(_st[1]); /* 0x171C597F: fld st(1) */
    _st[0] -= _st[1]; /* 0x171C5981: fsub st(1) */
    _st[0] *= (double)*(float*)ADDR(0x17025D08); /* 0x171C5983: fmul dword ptr [0x17025d08] */
    fp_xch(2); /* 0x171C5989: fxch st(2) */
    _st[0] *= (double)*(float*)ADDR(0x17025D04); /* 0x171C598B: fmul dword ptr [0x17025d04] */
    _st[0] += _st[2]; /* 0x171C5991: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x171C5993: fstp dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(0x17025D00); /* 0x171C5996: fmul dword ptr [0x17025d00] */
    _st[0] += _st[1]; /* 0x171C599C: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x171C599E: fstp dword ptr [ebp - 4] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171C59A1: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x171C59A3: fld dword ptr [ebp - 8] */
    _st[0] += _st[2]; /* 0x171C59A6: fadd st(2) */
    _st[0] *= (double)*(float*)ADDR(0x17025D0C); /* 0x171C59A8: fmul dword ptr [0x17025d0c] */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x171C59AE: fstp st(2) */
    fp_xch(1); /* 0x171C59B0: fxch st(1) */
    fp_push(_st[0]); /* 0x171C59B2: fld st(0) */
    _st[0] += _st[2]; /* 0x171C59B4: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x171C59B6: fstp dword ptr [ebp - 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x171C59B9: fsubp st(1) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171C59BB: fld dword ptr [ebp + 8] */
    _st[0] += _st[1]; /* 0x171C59BE: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xA8) = _v; } /* 0x171C59C0: fstp dword ptr [eax + 0xa8] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x8); /* 0x171C59C6: fsub dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x68) = _v; } /* 0x171C59C9: fstp dword ptr [eax + 0x68] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x171C59CC: fld dword ptr [ebp - 8] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171C59CF: fadd dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x28) = _v; } /* 0x171C59D2: fstp dword ptr [eax + 0x28] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x171C59D5: fld dword ptr [ebp - 8] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171C59D8: fsub dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xE8) = _v; } /* 0x171C59DB: fstp dword ptr [eax + 0xe8] */
    fp_push(*(float*)&MEM32(eax + 0xEC)); /* 0x171C59E1: fld dword ptr [eax + 0xec] */
    _st[0] += (double)*(float*)ADDR(eax + 0xC); /* 0x171C59E7: fadd dword ptr [eax + 0xc] */
    fp_push(*(float*)&MEM32(eax + 0xC)); /* 0x171C59EA: fld dword ptr [eax + 0xc] */
    _st[0] -= (double)*(float*)ADDR(eax + 0xEC); /* 0x171C59ED: fsub dword ptr [eax + 0xec] */
    fp_push(*(float*)&MEM32(eax + 0xCC)); /* 0x171C59F3: fld dword ptr [eax + 0xcc] */
    _st[0] += (double)*(float*)ADDR(eax + 0x2C); /* 0x171C59F9: fadd dword ptr [eax + 0x2c] */
    fp_push(*(float*)&MEM32(eax + 0x2C)); /* 0x171C59FC: fld dword ptr [eax + 0x2c] */
    _st[0] -= (double)*(float*)ADDR(eax + 0xCC); /* 0x171C59FF: fsub dword ptr [eax + 0xcc] */
    fp_push(*(float*)&MEM32(eax + 0xAC)); /* 0x171C5A05: fld dword ptr [eax + 0xac] */
    _st[0] += (double)*(float*)ADDR(eax + 0x4C); /* 0x171C5A0B: fadd dword ptr [eax + 0x4c] */
    fp_push(*(float*)&MEM32(eax + 0x4C)); /* 0x171C5A0E: fld dword ptr [eax + 0x4c] */
    _st[0] -= (double)*(float*)ADDR(eax + 0xAC); /* 0x171C5A11: fsub dword ptr [eax + 0xac] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x171C5A17: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(eax + 0x8C)); /* 0x171C5A1A: fld dword ptr [eax + 0x8c] */
    _st[0] += (double)*(float*)ADDR(eax + 0x6C); /* 0x171C5A20: fadd dword ptr [eax + 0x6c] */
    fp_push(*(float*)&MEM32(eax + 0x6C)); /* 0x171C5A23: fld dword ptr [eax + 0x6c] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x8C); /* 0x171C5A26: fsub dword ptr [eax + 0x8c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x171C5A2C: fstp dword ptr [ebp - 0xc] */
    fp_push(_st[0]); /* 0x171C5A2F: fld st(0) */
    _st[0] += _st[6]; /* 0x171C5A31: fadd st(6) */
    fp_xch(6); /* 0x171C5A33: fxch st(6) */
    _st[0] -= _st[1]; /* 0x171C5A35: fsub st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x171C5A37: fstp dword ptr [ebp + 8] */
    fp_push(_st[1]); /* 0x171C5A3A: fld st(1) */
    _st[0] += _st[4]; /* 0x171C5A3C: fadd st(4) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x171C5A3E: fst dword ptr [ebp - 4] */
    _st[0] += _st[6]; /* 0x171C5A41: fadd st(6) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xC) = _v; } /* 0x171C5A43: fstp dword ptr [eax + 0xc] */
    fp_xch(5); /* 0x171C5A46: fxch st(5) */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171C5A48: fsub dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x8C) = _v; } /* 0x171C5A4B: fstp dword ptr [eax + 0x8c] */
    { _st[4] = _st[0]; g_st_i64[4] = g_st_i64[0]; fp_pop(); } /* 0x171C5A51: fstp st(4) */
    fp_xch(1); /* 0x171C5A53: fxch st(1) */
    { double _v = fp_pop(); _st[2] = _v - _st[2]; } /* 0x171C5A55: fsubrp st(3) */
    fp_xch(2); /* 0x171C5A57: fxch st(2) */
    _st[0] += (double)*(float*)ADDR(ebp + 0x8); /* 0x171C5A59: fadd dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(0x17025D0C); /* 0x171C5A5C: fmul dword ptr [0x17025d0c] */
    fp_xch(2); /* 0x171C5A62: fxch st(2) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171C5A64: fld dword ptr [ebp + 8] */
    _st[0] += _st[3]; /* 0x171C5A67: fadd st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x4C) = _v; } /* 0x171C5A69: fstp dword ptr [eax + 0x4c] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171C5A6C: fld dword ptr [ebp + 8] */
    _st[0] -= _st[3]; /* 0x171C5A6F: fsub st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xCC) = _v; } /* 0x171C5A71: fstp dword ptr [eax + 0xcc] */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x171C5A77: fstp st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x171C5A79: fld dword ptr [ebp - 0xc] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x8)); /* 0x171C5A7C: fadd dword ptr [ebp - 8] */
    fp_push(_st[2]); /* 0x171C5A7F: fld st(2) */
    _st[0] += _st[2]; /* 0x171C5A81: fadd st(2) */
    fp_push(_st[1]); /* 0x171C5A83: fld st(1) */
    _st[0] -= _st[1]; /* 0x171C5A85: fsub st(1) */
    _st[0] *= (double)*(float*)ADDR(0x17025D08); /* 0x171C5A87: fmul dword ptr [0x17025d08] */
    fp_xch(2); /* 0x171C5A8D: fxch st(2) */
    _st[0] *= (double)*(float*)ADDR(0x17025D04); /* 0x171C5A8F: fmul dword ptr [0x17025d04] */
    _st[0] += _st[2]; /* 0x171C5A95: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x171C5A97: fstp dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(0x17025D00); /* 0x171C5A9A: fmul dword ptr [0x17025d00] */
    _st[0] += _st[1]; /* 0x171C5AA0: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x171C5AA2: fstp dword ptr [ebp - 4] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171C5AA5: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x171C5AA7: fld dword ptr [ebp - 8] */
    _st[0] += _st[2]; /* 0x171C5AAA: fadd st(2) */
    _st[0] *= (double)*(float*)ADDR(0x17025D0C); /* 0x171C5AAC: fmul dword ptr [0x17025d0c] */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x171C5AB2: fstp st(2) */
    fp_xch(1); /* 0x171C5AB4: fxch st(1) */
    fp_push(_st[0]); /* 0x171C5AB6: fld st(0) */
    _st[0] += _st[2]; /* 0x171C5AB8: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x171C5ABA: fstp dword ptr [ebp - 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x171C5ABD: fsubp st(1) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171C5ABF: fld dword ptr [ebp + 8] */
    _st[0] += _st[1]; /* 0x171C5AC2: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xAC) = _v; } /* 0x171C5AC4: fstp dword ptr [eax + 0xac] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x8); /* 0x171C5ACA: fsub dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x6C) = _v; } /* 0x171C5ACD: fstp dword ptr [eax + 0x6c] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x171C5AD0: fld dword ptr [ebp - 8] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171C5AD3: fadd dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x2C) = _v; } /* 0x171C5AD6: fstp dword ptr [eax + 0x2c] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x171C5AD9: fld dword ptr [ebp - 8] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171C5ADC: fsub dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xEC) = _v; } /* 0x171C5ADF: fstp dword ptr [eax + 0xec] */
    fp_push(*(float*)&MEM32(eax + 0xF0)); /* 0x171C5AE5: fld dword ptr [eax + 0xf0] */
    _st[0] += (double)*(float*)ADDR(eax + 0x10); /* 0x171C5AEB: fadd dword ptr [eax + 0x10] */
    fp_push(*(float*)&MEM32(eax + 0x10)); /* 0x171C5AEE: fld dword ptr [eax + 0x10] */
    _st[0] -= (double)*(float*)ADDR(eax + 0xF0); /* 0x171C5AF1: fsub dword ptr [eax + 0xf0] */
    fp_push(*(float*)&MEM32(eax + 0xD0)); /* 0x171C5AF7: fld dword ptr [eax + 0xd0] */
    _st[0] += (double)*(float*)ADDR(eax + 0x30); /* 0x171C5AFD: fadd dword ptr [eax + 0x30] */
    fp_push(*(float*)&MEM32(eax + 0x30)); /* 0x171C5B00: fld dword ptr [eax + 0x30] */
    _st[0] -= (double)*(float*)ADDR(eax + 0xD0); /* 0x171C5B03: fsub dword ptr [eax + 0xd0] */
    fp_push(*(float*)&MEM32(eax + 0xB0)); /* 0x171C5B09: fld dword ptr [eax + 0xb0] */
    _st[0] += (double)*(float*)ADDR(eax + 0x50); /* 0x171C5B0F: fadd dword ptr [eax + 0x50] */
    fp_push(*(float*)&MEM32(eax + 0x50)); /* 0x171C5B12: fld dword ptr [eax + 0x50] */
    _st[0] -= (double)*(float*)ADDR(eax + 0xB0); /* 0x171C5B15: fsub dword ptr [eax + 0xb0] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x171C5B1B: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(eax + 0x90)); /* 0x171C5B1E: fld dword ptr [eax + 0x90] */
    _st[0] += (double)*(float*)ADDR(eax + 0x70); /* 0x171C5B24: fadd dword ptr [eax + 0x70] */
    fp_push(*(float*)&MEM32(eax + 0x70)); /* 0x171C5B27: fld dword ptr [eax + 0x70] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x90); /* 0x171C5B2A: fsub dword ptr [eax + 0x90] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x171C5B30: fstp dword ptr [ebp - 0xc] */
    fp_push(_st[0]); /* 0x171C5B33: fld st(0) */
    _st[0] += _st[6]; /* 0x171C5B35: fadd st(6) */
    fp_xch(6); /* 0x171C5B37: fxch st(6) */
    _st[0] -= _st[1]; /* 0x171C5B39: fsub st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x171C5B3B: fstp dword ptr [ebp + 8] */
    fp_push(_st[1]); /* 0x171C5B3E: fld st(1) */
    _st[0] += _st[4]; /* 0x171C5B40: fadd st(4) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x171C5B42: fst dword ptr [ebp - 4] */
    _st[0] += _st[6]; /* 0x171C5B45: fadd st(6) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x10) = _v; } /* 0x171C5B47: fstp dword ptr [eax + 0x10] */
    fp_xch(5); /* 0x171C5B4A: fxch st(5) */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171C5B4C: fsub dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x90) = _v; } /* 0x171C5B4F: fstp dword ptr [eax + 0x90] */
    { _st[4] = _st[0]; g_st_i64[4] = g_st_i64[0]; fp_pop(); } /* 0x171C5B55: fstp st(4) */
    fp_xch(1); /* 0x171C5B57: fxch st(1) */
    { double _v = fp_pop(); _st[2] = _v - _st[2]; } /* 0x171C5B59: fsubrp st(3) */
    fp_xch(2); /* 0x171C5B5B: fxch st(2) */
    _st[0] += (double)*(float*)ADDR(ebp + 0x8); /* 0x171C5B5D: fadd dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(0x17025D0C); /* 0x171C5B60: fmul dword ptr [0x17025d0c] */
    fp_xch(2); /* 0x171C5B66: fxch st(2) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171C5B68: fld dword ptr [ebp + 8] */
    _st[0] += _st[3]; /* 0x171C5B6B: fadd st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x50) = _v; } /* 0x171C5B6D: fstp dword ptr [eax + 0x50] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171C5B70: fld dword ptr [ebp + 8] */
    _st[0] -= _st[3]; /* 0x171C5B73: fsub st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xD0) = _v; } /* 0x171C5B75: fstp dword ptr [eax + 0xd0] */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x171C5B7B: fstp st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x171C5B7D: fld dword ptr [ebp - 0xc] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x8)); /* 0x171C5B80: fadd dword ptr [ebp - 8] */
    fp_push(_st[2]); /* 0x171C5B83: fld st(2) */
    _st[0] += _st[2]; /* 0x171C5B85: fadd st(2) */
    fp_push(_st[1]); /* 0x171C5B87: fld st(1) */
    _st[0] -= _st[1]; /* 0x171C5B89: fsub st(1) */
    _st[0] *= (double)*(float*)ADDR(0x17025D08); /* 0x171C5B8B: fmul dword ptr [0x17025d08] */
    fp_xch(2); /* 0x171C5B91: fxch st(2) */
    _st[0] *= (double)*(float*)ADDR(0x17025D04); /* 0x171C5B93: fmul dword ptr [0x17025d04] */
    _st[0] += _st[2]; /* 0x171C5B99: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x171C5B9B: fstp dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(0x17025D00); /* 0x171C5B9E: fmul dword ptr [0x17025d00] */
    _st[0] += _st[1]; /* 0x171C5BA4: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x171C5BA6: fstp dword ptr [ebp - 4] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171C5BA9: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x171C5BAB: fld dword ptr [ebp - 8] */
    _st[0] += _st[2]; /* 0x171C5BAE: fadd st(2) */
    _st[0] *= (double)*(float*)ADDR(0x17025D0C); /* 0x171C5BB0: fmul dword ptr [0x17025d0c] */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x171C5BB6: fstp st(2) */
    fp_xch(1); /* 0x171C5BB8: fxch st(1) */
    fp_push(_st[0]); /* 0x171C5BBA: fld st(0) */
    _st[0] += _st[2]; /* 0x171C5BBC: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x171C5BBE: fstp dword ptr [ebp - 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x171C5BC1: fsubp st(1) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171C5BC3: fld dword ptr [ebp + 8] */
    _st[0] += _st[1]; /* 0x171C5BC6: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xB0) = _v; } /* 0x171C5BC8: fstp dword ptr [eax + 0xb0] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x8); /* 0x171C5BCE: fsub dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x70) = _v; } /* 0x171C5BD1: fstp dword ptr [eax + 0x70] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x171C5BD4: fld dword ptr [ebp - 8] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171C5BD7: fadd dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x30) = _v; } /* 0x171C5BDA: fstp dword ptr [eax + 0x30] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x171C5BDD: fld dword ptr [ebp - 8] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171C5BE0: fsub dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xF0) = _v; } /* 0x171C5BE3: fstp dword ptr [eax + 0xf0] */
    fp_push(*(float*)&MEM32(eax + 0xF4)); /* 0x171C5BE9: fld dword ptr [eax + 0xf4] */
    _st[0] += (double)*(float*)ADDR(eax + 0x14); /* 0x171C5BEF: fadd dword ptr [eax + 0x14] */
    fp_push(*(float*)&MEM32(eax + 0x14)); /* 0x171C5BF2: fld dword ptr [eax + 0x14] */
    _st[0] -= (double)*(float*)ADDR(eax + 0xF4); /* 0x171C5BF5: fsub dword ptr [eax + 0xf4] */
    fp_push(*(float*)&MEM32(eax + 0xD4)); /* 0x171C5BFB: fld dword ptr [eax + 0xd4] */
    _st[0] += (double)*(float*)ADDR(eax + 0x34); /* 0x171C5C01: fadd dword ptr [eax + 0x34] */
    fp_push(*(float*)&MEM32(eax + 0x34)); /* 0x171C5C04: fld dword ptr [eax + 0x34] */
    _st[0] -= (double)*(float*)ADDR(eax + 0xD4); /* 0x171C5C07: fsub dword ptr [eax + 0xd4] */
    fp_push(*(float*)&MEM32(eax + 0xB4)); /* 0x171C5C0D: fld dword ptr [eax + 0xb4] */
    _st[0] += (double)*(float*)ADDR(eax + 0x54); /* 0x171C5C13: fadd dword ptr [eax + 0x54] */
    fp_push(*(float*)&MEM32(eax + 0x54)); /* 0x171C5C16: fld dword ptr [eax + 0x54] */
    _st[0] -= (double)*(float*)ADDR(eax + 0xB4); /* 0x171C5C19: fsub dword ptr [eax + 0xb4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x171C5C1F: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(eax + 0x94)); /* 0x171C5C22: fld dword ptr [eax + 0x94] */
    _st[0] += (double)*(float*)ADDR(eax + 0x74); /* 0x171C5C28: fadd dword ptr [eax + 0x74] */
    fp_push(*(float*)&MEM32(eax + 0x74)); /* 0x171C5C2B: fld dword ptr [eax + 0x74] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x94); /* 0x171C5C2E: fsub dword ptr [eax + 0x94] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x171C5C34: fstp dword ptr [ebp - 0xc] */
    fp_push(_st[0]); /* 0x171C5C37: fld st(0) */
    _st[0] += _st[6]; /* 0x171C5C39: fadd st(6) */
    fp_xch(6); /* 0x171C5C3B: fxch st(6) */
    _st[0] -= _st[1]; /* 0x171C5C3D: fsub st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x171C5C3F: fstp dword ptr [ebp + 8] */
    fp_push(_st[1]); /* 0x171C5C42: fld st(1) */
    _st[0] += _st[4]; /* 0x171C5C44: fadd st(4) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x171C5C46: fst dword ptr [ebp - 4] */
    _st[0] += _st[6]; /* 0x171C5C49: fadd st(6) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x14) = _v; } /* 0x171C5C4B: fstp dword ptr [eax + 0x14] */
    fp_xch(5); /* 0x171C5C4E: fxch st(5) */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171C5C50: fsub dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x94) = _v; } /* 0x171C5C53: fstp dword ptr [eax + 0x94] */
    { _st[4] = _st[0]; g_st_i64[4] = g_st_i64[0]; fp_pop(); } /* 0x171C5C59: fstp st(4) */
    fp_xch(1); /* 0x171C5C5B: fxch st(1) */
    { double _v = fp_pop(); _st[2] = _v - _st[2]; } /* 0x171C5C5D: fsubrp st(3) */
    fp_xch(2); /* 0x171C5C5F: fxch st(2) */
    _st[0] += (double)*(float*)ADDR(ebp + 0x8); /* 0x171C5C61: fadd dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(0x17025D0C); /* 0x171C5C64: fmul dword ptr [0x17025d0c] */
    fp_xch(2); /* 0x171C5C6A: fxch st(2) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171C5C6C: fld dword ptr [ebp + 8] */
    _st[0] += _st[3]; /* 0x171C5C6F: fadd st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x54) = _v; } /* 0x171C5C71: fstp dword ptr [eax + 0x54] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171C5C74: fld dword ptr [ebp + 8] */
    _st[0] -= _st[3]; /* 0x171C5C77: fsub st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xD4) = _v; } /* 0x171C5C79: fstp dword ptr [eax + 0xd4] */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x171C5C7F: fstp st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x171C5C81: fld dword ptr [ebp - 0xc] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x8)); /* 0x171C5C84: fadd dword ptr [ebp - 8] */
    fp_push(_st[2]); /* 0x171C5C87: fld st(2) */
    _st[0] += _st[2]; /* 0x171C5C89: fadd st(2) */
    fp_push(_st[1]); /* 0x171C5C8B: fld st(1) */
    _st[0] -= _st[1]; /* 0x171C5C8D: fsub st(1) */
    _st[0] *= (double)*(float*)ADDR(0x17025D08); /* 0x171C5C8F: fmul dword ptr [0x17025d08] */
    fp_xch(2); /* 0x171C5C95: fxch st(2) */
    _st[0] *= (double)*(float*)ADDR(0x17025D04); /* 0x171C5C97: fmul dword ptr [0x17025d04] */
    _st[0] += _st[2]; /* 0x171C5C9D: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x171C5C9F: fstp dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(0x17025D00); /* 0x171C5CA2: fmul dword ptr [0x17025d00] */
    _st[0] += _st[1]; /* 0x171C5CA8: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x171C5CAA: fstp dword ptr [ebp - 4] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171C5CAD: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x171C5CAF: fld dword ptr [ebp - 8] */
    _st[0] += _st[2]; /* 0x171C5CB2: fadd st(2) */
    _st[0] *= (double)*(float*)ADDR(0x17025D0C); /* 0x171C5CB4: fmul dword ptr [0x17025d0c] */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x171C5CBA: fstp st(2) */
    fp_xch(1); /* 0x171C5CBC: fxch st(1) */
    fp_push(_st[0]); /* 0x171C5CBE: fld st(0) */
    _st[0] += _st[2]; /* 0x171C5CC0: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x171C5CC2: fstp dword ptr [ebp - 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x171C5CC5: fsubp st(1) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171C5CC7: fld dword ptr [ebp + 8] */
    _st[0] += _st[1]; /* 0x171C5CCA: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xB4) = _v; } /* 0x171C5CCC: fstp dword ptr [eax + 0xb4] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x8); /* 0x171C5CD2: fsub dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x74) = _v; } /* 0x171C5CD5: fstp dword ptr [eax + 0x74] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x171C5CD8: fld dword ptr [ebp - 8] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171C5CDB: fadd dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x34) = _v; } /* 0x171C5CDE: fstp dword ptr [eax + 0x34] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x171C5CE1: fld dword ptr [ebp - 8] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171C5CE4: fsub dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xF4) = _v; } /* 0x171C5CE7: fstp dword ptr [eax + 0xf4] */
    fp_push(*(float*)&MEM32(eax + 0xF8)); /* 0x171C5CED: fld dword ptr [eax + 0xf8] */
    _st[0] += (double)*(float*)ADDR(eax + 0x18); /* 0x171C5CF3: fadd dword ptr [eax + 0x18] */
    fp_push(*(float*)&MEM32(eax + 0x18)); /* 0x171C5CF6: fld dword ptr [eax + 0x18] */
    _st[0] -= (double)*(float*)ADDR(eax + 0xF8); /* 0x171C5CF9: fsub dword ptr [eax + 0xf8] */
    fp_push(*(float*)&MEM32(eax + 0xD8)); /* 0x171C5CFF: fld dword ptr [eax + 0xd8] */
    _st[0] += (double)*(float*)ADDR(eax + 0x38); /* 0x171C5D05: fadd dword ptr [eax + 0x38] */
    fp_push(*(float*)&MEM32(eax + 0x38)); /* 0x171C5D08: fld dword ptr [eax + 0x38] */
    _st[0] -= (double)*(float*)ADDR(eax + 0xD8); /* 0x171C5D0B: fsub dword ptr [eax + 0xd8] */
    fp_push(*(float*)&MEM32(eax + 0xB8)); /* 0x171C5D11: fld dword ptr [eax + 0xb8] */
    _st[0] += (double)*(float*)ADDR(eax + 0x58); /* 0x171C5D17: fadd dword ptr [eax + 0x58] */
    fp_push(*(float*)&MEM32(eax + 0x58)); /* 0x171C5D1A: fld dword ptr [eax + 0x58] */
    _st[0] -= (double)*(float*)ADDR(eax + 0xB8); /* 0x171C5D1D: fsub dword ptr [eax + 0xb8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x171C5D23: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(eax + 0x98)); /* 0x171C5D26: fld dword ptr [eax + 0x98] */
    _st[0] += (double)*(float*)ADDR(eax + 0x78); /* 0x171C5D2C: fadd dword ptr [eax + 0x78] */
    fp_push(*(float*)&MEM32(eax + 0x78)); /* 0x171C5D2F: fld dword ptr [eax + 0x78] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x98); /* 0x171C5D32: fsub dword ptr [eax + 0x98] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x171C5D38: fstp dword ptr [ebp - 0xc] */
    fp_push(_st[0]); /* 0x171C5D3B: fld st(0) */
    _st[0] += _st[6]; /* 0x171C5D3D: fadd st(6) */
    fp_xch(6); /* 0x171C5D3F: fxch st(6) */
    _st[0] -= _st[1]; /* 0x171C5D41: fsub st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x171C5D43: fstp dword ptr [ebp + 8] */
    fp_push(_st[1]); /* 0x171C5D46: fld st(1) */
    _st[0] += _st[4]; /* 0x171C5D48: fadd st(4) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x171C5D4A: fst dword ptr [ebp - 4] */
    _st[0] += _st[6]; /* 0x171C5D4D: fadd st(6) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x18) = _v; } /* 0x171C5D4F: fstp dword ptr [eax + 0x18] */
    fp_xch(5); /* 0x171C5D52: fxch st(5) */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171C5D54: fsub dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x98) = _v; } /* 0x171C5D57: fstp dword ptr [eax + 0x98] */
    { _st[4] = _st[0]; g_st_i64[4] = g_st_i64[0]; fp_pop(); } /* 0x171C5D5D: fstp st(4) */
    fp_xch(1); /* 0x171C5D5F: fxch st(1) */
    { double _v = fp_pop(); _st[2] = _v - _st[2]; } /* 0x171C5D61: fsubrp st(3) */
    fp_xch(2); /* 0x171C5D63: fxch st(2) */
    _st[0] += (double)*(float*)ADDR(ebp + 0x8); /* 0x171C5D65: fadd dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(0x17025D0C); /* 0x171C5D68: fmul dword ptr [0x17025d0c] */
    fp_xch(2); /* 0x171C5D6E: fxch st(2) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171C5D70: fld dword ptr [ebp + 8] */
    _st[0] += _st[3]; /* 0x171C5D73: fadd st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x58) = _v; } /* 0x171C5D75: fstp dword ptr [eax + 0x58] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171C5D78: fld dword ptr [ebp + 8] */
    _st[0] -= _st[3]; /* 0x171C5D7B: fsub st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xD8) = _v; } /* 0x171C5D7D: fstp dword ptr [eax + 0xd8] */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x171C5D83: fstp st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x171C5D85: fld dword ptr [ebp - 0xc] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x8)); /* 0x171C5D88: fadd dword ptr [ebp - 8] */
    fp_push(_st[2]); /* 0x171C5D8B: fld st(2) */
    _st[0] += _st[2]; /* 0x171C5D8D: fadd st(2) */
    fp_push(_st[1]); /* 0x171C5D8F: fld st(1) */
    _st[0] -= _st[1]; /* 0x171C5D91: fsub st(1) */
    _st[0] *= (double)*(float*)ADDR(0x17025D08); /* 0x171C5D93: fmul dword ptr [0x17025d08] */
    fp_xch(2); /* 0x171C5D99: fxch st(2) */
    _st[0] *= (double)*(float*)ADDR(0x17025D04); /* 0x171C5D9B: fmul dword ptr [0x17025d04] */
    _st[0] += _st[2]; /* 0x171C5DA1: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x171C5DA3: fstp dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(0x17025D00); /* 0x171C5DA6: fmul dword ptr [0x17025d00] */
    _st[0] += _st[1]; /* 0x171C5DAC: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x171C5DAE: fstp dword ptr [ebp - 4] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171C5DB1: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x171C5DB3: fld dword ptr [ebp - 8] */
    _st[0] += _st[2]; /* 0x171C5DB6: fadd st(2) */
    _st[0] *= (double)*(float*)ADDR(0x17025D0C); /* 0x171C5DB8: fmul dword ptr [0x17025d0c] */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x171C5DBE: fstp st(2) */
    fp_xch(1); /* 0x171C5DC0: fxch st(1) */
    fp_push(_st[0]); /* 0x171C5DC2: fld st(0) */
    _st[0] += _st[2]; /* 0x171C5DC4: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x171C5DC6: fstp dword ptr [ebp - 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x171C5DC9: fsubp st(1) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171C5DCB: fld dword ptr [ebp + 8] */
    _st[0] += _st[1]; /* 0x171C5DCE: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xB8) = _v; } /* 0x171C5DD0: fstp dword ptr [eax + 0xb8] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x8); /* 0x171C5DD6: fsub dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x78) = _v; } /* 0x171C5DD9: fstp dword ptr [eax + 0x78] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x171C5DDC: fld dword ptr [ebp - 8] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171C5DDF: fadd dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x38) = _v; } /* 0x171C5DE2: fstp dword ptr [eax + 0x38] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x171C5DE5: fld dword ptr [ebp - 8] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171C5DE8: fsub dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xF8) = _v; } /* 0x171C5DEB: fstp dword ptr [eax + 0xf8] */
    fp_push(*(float*)&MEM32(eax + 0xFC)); /* 0x171C5DF1: fld dword ptr [eax + 0xfc] */
    _st[0] += (double)*(float*)ADDR(eax + 0x1C); /* 0x171C5DF7: fadd dword ptr [eax + 0x1c] */
    fp_push(*(float*)&MEM32(eax + 0x1C)); /* 0x171C5DFA: fld dword ptr [eax + 0x1c] */
    _st[0] -= (double)*(float*)ADDR(eax + 0xFC); /* 0x171C5DFD: fsub dword ptr [eax + 0xfc] */
    fp_push(*(float*)&MEM32(eax + 0xDC)); /* 0x171C5E03: fld dword ptr [eax + 0xdc] */
    _st[0] += (double)*(float*)ADDR(eax + 0x3C); /* 0x171C5E09: fadd dword ptr [eax + 0x3c] */
    fp_push(*(float*)&MEM32(eax + 0x3C)); /* 0x171C5E0C: fld dword ptr [eax + 0x3c] */
    _st[0] -= (double)*(float*)ADDR(eax + 0xDC); /* 0x171C5E0F: fsub dword ptr [eax + 0xdc] */
    fp_push(*(float*)&MEM32(eax + 0xBC)); /* 0x171C5E15: fld dword ptr [eax + 0xbc] */
    _st[0] += (double)*(float*)ADDR(eax + 0x5C); /* 0x171C5E1B: fadd dword ptr [eax + 0x5c] */
    fp_push(*(float*)&MEM32(eax + 0x5C)); /* 0x171C5E1E: fld dword ptr [eax + 0x5c] */
    _st[0] -= (double)*(float*)ADDR(eax + 0xBC); /* 0x171C5E21: fsub dword ptr [eax + 0xbc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x171C5E27: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(eax + 0x9C)); /* 0x171C5E2A: fld dword ptr [eax + 0x9c] */
    _st[0] += (double)*(float*)ADDR(eax + 0x7C); /* 0x171C5E30: fadd dword ptr [eax + 0x7c] */
    fp_push(*(float*)&MEM32(eax + 0x7C)); /* 0x171C5E33: fld dword ptr [eax + 0x7c] */
    _st[0] -= (double)*(float*)ADDR(eax + 0x9C); /* 0x171C5E36: fsub dword ptr [eax + 0x9c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x171C5E3C: fstp dword ptr [ebp - 0xc] */
    fp_push(_st[0]); /* 0x171C5E3F: fld st(0) */
    _st[0] += _st[6]; /* 0x171C5E41: fadd st(6) */
    fp_xch(6); /* 0x171C5E43: fxch st(6) */
    _st[0] -= _st[1]; /* 0x171C5E45: fsub st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x171C5E47: fstp dword ptr [ebp + 8] */
    fp_push(_st[1]); /* 0x171C5E4A: fld st(1) */
    _st[0] += _st[4]; /* 0x171C5E4C: fadd st(4) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x171C5E4E: fst dword ptr [ebp - 4] */
    _st[0] += _st[6]; /* 0x171C5E51: fadd st(6) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x1C) = _v; } /* 0x171C5E53: fstp dword ptr [eax + 0x1c] */
    fp_xch(5); /* 0x171C5E56: fxch st(5) */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171C5E58: fsub dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x9C) = _v; } /* 0x171C5E5B: fstp dword ptr [eax + 0x9c] */
    { _st[4] = _st[0]; g_st_i64[4] = g_st_i64[0]; fp_pop(); } /* 0x171C5E61: fstp st(4) */
    fp_xch(1); /* 0x171C5E63: fxch st(1) */
    { double _v = fp_pop(); _st[2] = _v - _st[2]; } /* 0x171C5E65: fsubrp st(3) */
    fp_xch(2); /* 0x171C5E67: fxch st(2) */
    _st[0] += (double)*(float*)ADDR(ebp + 0x8); /* 0x171C5E69: fadd dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(0x17025D0C); /* 0x171C5E6C: fmul dword ptr [0x17025d0c] */
    fp_xch(2); /* 0x171C5E72: fxch st(2) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171C5E74: fld dword ptr [ebp + 8] */
    _st[0] += _st[3]; /* 0x171C5E77: fadd st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x5C) = _v; } /* 0x171C5E79: fstp dword ptr [eax + 0x5c] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171C5E7C: fld dword ptr [ebp + 8] */
    _st[0] -= _st[3]; /* 0x171C5E7F: fsub st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xDC) = _v; } /* 0x171C5E81: fstp dword ptr [eax + 0xdc] */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x171C5E87: fstp st(2) */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x171C5E89: fld dword ptr [ebp - 0xc] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x8)); /* 0x171C5E8C: fadd dword ptr [ebp - 8] */
    fp_push(_st[2]); /* 0x171C5E8F: fld st(2) */
    _st[0] += _st[2]; /* 0x171C5E91: fadd st(2) */
    fp_push(_st[1]); /* 0x171C5E93: fld st(1) */
    _st[0] -= _st[1]; /* 0x171C5E95: fsub st(1) */
    _st[0] *= (double)*(float*)ADDR(0x17025D08); /* 0x171C5E97: fmul dword ptr [0x17025d08] */
    fp_xch(2); /* 0x171C5E9D: fxch st(2) */
    _st[0] *= (double)*(float*)ADDR(0x17025D04); /* 0x171C5E9F: fmul dword ptr [0x17025d04] */
    _st[0] += _st[2]; /* 0x171C5EA5: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x171C5EA7: fstp dword ptr [ebp + 8] */
    _st[0] *= (double)*(float*)ADDR(0x17025D00); /* 0x171C5EAA: fmul dword ptr [0x17025d00] */
    _st[0] += _st[1]; /* 0x171C5EB0: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x171C5EB2: fstp dword ptr [ebp - 4] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171C5EB5: fstp st(0) */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x171C5EB7: fld dword ptr [ebp - 8] */
    _st[0] += _st[2]; /* 0x171C5EBA: fadd st(2) */
    _st[0] *= (double)*(float*)ADDR(0x17025D0C); /* 0x171C5EBC: fmul dword ptr [0x17025d0c] */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x171C5EC2: fstp st(2) */
    fp_xch(1); /* 0x171C5EC4: fxch st(1) */
    fp_push(_st[0]); /* 0x171C5EC6: fld st(0) */
    _st[0] += _st[2]; /* 0x171C5EC8: fadd st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x171C5ECA: fstp dword ptr [ebp - 8] */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x171C5ECD: fsubp st(1) */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x171C5ECF: fld dword ptr [ebp + 8] */
    _st[0] += _st[1]; /* 0x171C5ED2: fadd st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xBC) = _v; } /* 0x171C5ED4: fstp dword ptr [eax + 0xbc] */
    _st[0] -= (double)*(float*)ADDR(ebp + 0x8); /* 0x171C5EDA: fsub dword ptr [ebp + 8] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x7C) = _v; } /* 0x171C5EDD: fstp dword ptr [eax + 0x7c] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x171C5EE0: fld dword ptr [ebp - 8] */
    _st[0] += (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171C5EE3: fadd dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0x3C) = _v; } /* 0x171C5EE6: fstp dword ptr [eax + 0x3c] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x171C5EE9: fld dword ptr [ebp - 8] */
    _st[0] -= (double)*(float*)ADDR(ebp + (-0x4)); /* 0x171C5EEC: fsub dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + 0xFC) = _v; } /* 0x171C5EEF: fstp dword ptr [eax + 0xfc] */
    esp = ebp; /* 0x171C5EF5: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171C5EF7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171C5EF8: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171C5F00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C5F00u);

L_171C5F00:
    edi = edi; /* 0x171C5F00: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C5F02: push ebp */
    ebp = esp; /* 0x171C5F03: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x171C5F05: sub esp, 0x18 */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x171C5F08: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x171C5F0B: push ebx */
    PUSH32(esp, esi); /* 0x171C5F0C: push esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171C5F0D: add eax, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = 8; /* 0x171C5F10: mov dword ptr [ebp - 0x18], 8 */
    PUSH32(esp, edi); /* 0x171C5F17: push edi */
L_171C5F18:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171C5F18: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(ecx, MEM16(eax + 0xA)); /* 0x171C5F1A: mov cx, word ptr [eax + 0xa] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171C5F1E: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(ebx, MEM16(eax + 0x8)); /* 0x171C5F20: mov bx, word ptr [eax + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171C5F24: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(edi, MEM16(eax + (-0x4))); /* 0x171C5F26: mov di, word ptr [eax - 4] */
    edx = edi + ecx; /* 0x171C5F2A: lea edx, [edi + ecx] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x171C5F2D: sub edi, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171C5F2F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(ecx, MEM16(eax + (-0x2))); /* 0x171C5F31: mov cx, word ptr [eax - 2] */
    esi = ecx + ebx; /* 0x171C5F35: lea esi, [ecx + ebx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x171C5F38: sub ecx, ebx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x14)) = ecx; /* 0x171C5F3A: mov dword ptr [ebp - 0x14], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171C5F3D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(ecx, MEM16(eax)); /* 0x171C5F3F: mov cx, word ptr [eax] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171C5F42: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(ebx, MEM16(eax + 0x6)); /* 0x171C5F44: mov bx, word ptr [eax + 6] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x171C5F48: add ebx, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = ebx; /* 0x171C5F4A: mov dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171C5F4D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(ebx, MEM16(eax + 0x6)); /* 0x171C5F4F: mov bx, word ptr [eax + 6] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x171C5F53: sub ecx, ebx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = ecx; /* 0x171C5F55: mov dword ptr [ebp - 8], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171C5F58: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(ecx, MEM16(eax + 0x2)); /* 0x171C5F5A: mov cx, word ptr [eax + 2] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171C5F5E: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(ebx, MEM16(eax + 0x4)); /* 0x171C5F60: mov bx, word ptr [eax + 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x171C5F64: add ebx, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = ebx; /* 0x171C5F66: mov dword ptr [ebp - 0xc], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171C5F69: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(ebx, MEM16(eax + 0x4)); /* 0x171C5F6B: mov bx, word ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x171C5F6F: sub ecx, ebx */
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + (-0xC)); /* 0x171C5F71: mov ebx, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x171C5F74: mov dword ptr [ebp - 0x10], ecx */
    ecx = ebx + edx; /* 0x171C5F77: lea ecx, [ebx + edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ebx; /* 0x171C5F7A: sub edx, ebx */
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + (-0x4)); /* 0x171C5F7C: mov ebx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + esi; /* 0x171C5F7F: add ebx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x171C5F81: add ebx, ecx */
    _flag_k = FK_ADD;
    MEM16(eax + (-0x4)) = (uint16_t)(LO16(ebx)); /* 0x171C5F83: mov word ptr [eax - 4], bx */
    ebx = MEM32(ebp + (-0x4)); /* 0x171C5F87: mov ebx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + esi; /* 0x171C5F8A: add ebx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x171C5F8C: sub ecx, ebx */
    _flag_k = FK_CMP;
    MEM16(eax + 0x4) = (uint16_t)(LO16(ecx)); /* 0x171C5F8E: mov word ptr [eax + 4], cx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebp + (-0x4)); /* 0x171C5F92: sub esi, dword ptr [ebp - 4] */
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + (-0x14)); /* 0x171C5F95: mov ebx, dword ptr [ebp - 0x14] */
    ecx = (int32_t)(int16_t)LO16(esi); /* 0x171C5F98: movsx ecx, si */
    esi = (int32_t)(int16_t)LO16(edx); /* 0x171C5F9B: movsx esi, dx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x171C5F9E: add ecx, esi */
    _flag_k = FK_ADD;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xB5u); /* 0x171C5FA0: imul ecx, ecx, 0xb5 */
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x171C5FA6: sar ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 8u);
    esi = ecx + edx; /* 0x171C5FA9: lea esi, [ecx + edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x171C5FAC: sub edx, ecx */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x10)); /* 0x171C5FAE: mov ecx, dword ptr [ebp - 0x10] */
    MEM16(eax + 0x8) = (uint16_t)(LO16(edx)); /* 0x171C5FB1: mov word ptr [eax + 8], dx */
    edx = MEM32(ebp + (-0x8)); /* 0x171C5FB5: mov edx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x171C5FB8: add ecx, edx */
    _flag_k = FK_ADD;
    MEM16(eax) = (uint16_t)(LO16(esi)); /* 0x171C5FBA: mov word ptr [eax], si */
    esi = (int32_t)(int16_t)LO16(ecx); /* 0x171C5FBD: movsx esi, cx */
    edx = ebx + edi; /* 0x171C5FC0: lea edx, [ebx + edi] */
    edx = (int32_t)(int16_t)LO16(edx); /* 0x171C5FC3: movsx edx, dx */
    ecx = esi; /* 0x171C5FC6: mov ecx, esi */
    esi = (uint32_t)((int32_t)esi * (int32_t)0x8Bu); /* 0x171C5FC8: imul esi, esi, 0x8b */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x171C5FCE: sub ecx, edx */
    _flag_k = FK_CMP;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x14Eu); /* 0x171C5FD0: imul edx, edx, 0x14e */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x62u); /* 0x171C5FD6: imul ecx, ecx, 0x62 */
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x171C5FD9: sar ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 8u);
    if (8u) _cf = (((esi) >> 7) & 1u); /* 0x171C5FDC: sar esi, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 8u);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x171C5FDF: add esi, ecx */
    _flag_k = FK_ADD;
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x171C5FE1: sar edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 8u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x171C5FE4: add edx, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x8)); /* 0x171C5FE6: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x171C5FE9: add ecx, ebx */
    _flag_k = FK_ADD;
    ecx = (int32_t)(int16_t)LO16(ecx); /* 0x171C5FEB: movsx ecx, cx */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xB5u); /* 0x171C5FEE: imul ecx, ecx, 0xb5 */
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x171C5FF4: sar ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 8u);
    ebx = ecx + edi; /* 0x171C5FF7: lea ebx, [ecx + edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x171C5FFA: sub edi, ecx */
    _flag_k = FK_CMP;
    ecx = edi + esi; /* 0x171C5FFC: lea ecx, [edi + esi] */
    MEM16(eax + 0x6) = (uint16_t)(LO16(ecx)); /* 0x171C5FFF: mov word ptr [eax + 6], cx */
    ecx = ebx + edx; /* 0x171C6003: lea ecx, [ebx + edx] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - esi; /* 0x171C6006: sub edi, esi */
    _flag_k = FK_CMP;
    MEM16(eax + (-0x2)) = (uint16_t)(LO16(ecx)); /* 0x171C6008: mov word ptr [eax - 2], cx */
    ecx = MEM32(ebp + (-0x18)); /* 0x171C600C: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edx; /* 0x171C600F: sub ebx, edx */
    _flag_k = FK_CMP;
    MEM16(eax + 0x2) = (uint16_t)(LO16(edi)); /* 0x171C6011: mov word ptr [eax + 2], di */
    MEM16(eax + 0xA) = (uint16_t)(LO16(ebx)); /* 0x171C6015: mov word ptr [eax + 0xa], bx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x171C6019: add eax, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x171C601C: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x18)) = ecx; /* 0x171C601D: mov dword ptr [ebp - 0x18], ecx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171C5F18; /* 0x171C6020: jne 0x171c5f18 */
L_171C6026:
    eax = MEM32(ebp + 0x8); /* 0x171C6026: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x171C6029: add eax, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = 8; /* 0x171C602C: mov dword ptr [ebp + 8], 8 */
L_171C6033:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171C6033: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(ecx, MEM16(eax + 0x50)); /* 0x171C6035: mov cx, word ptr [eax + 0x50] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171C6039: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(ebx, MEM16(eax + 0x40)); /* 0x171C603B: mov bx, word ptr [eax + 0x40] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171C603F: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(edi, MEM16(eax + (-0x20))); /* 0x171C6041: mov di, word ptr [eax - 0x20] */
    edx = edi + ecx; /* 0x171C6045: lea edx, [edi + ecx] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x171C6048: sub edi, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171C604A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(ecx, MEM16(eax + (-0x10))); /* 0x171C604C: mov cx, word ptr [eax - 0x10] */
    esi = ecx + ebx; /* 0x171C6050: lea esi, [ecx + ebx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x171C6053: sub ecx, ebx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x14)) = ecx; /* 0x171C6055: mov dword ptr [ebp - 0x14], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171C6058: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(ecx, MEM16(eax)); /* 0x171C605A: mov cx, word ptr [eax] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171C605D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(ebx, MEM16(eax + 0x30)); /* 0x171C605F: mov bx, word ptr [eax + 0x30] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x171C6063: add ebx, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = ebx; /* 0x171C6065: mov dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171C6068: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(ebx, MEM16(eax + 0x30)); /* 0x171C606A: mov bx, word ptr [eax + 0x30] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x171C606E: sub ecx, ebx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = ecx; /* 0x171C6070: mov dword ptr [ebp - 8], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171C6073: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(ecx, MEM16(eax + 0x10)); /* 0x171C6075: mov cx, word ptr [eax + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171C6079: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(ebx, MEM16(eax + 0x20)); /* 0x171C607B: mov bx, word ptr [eax + 0x20] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x171C607F: add ebx, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = ebx; /* 0x171C6081: mov dword ptr [ebp - 0xc], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171C6084: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO16(ebx, MEM16(eax + 0x20)); /* 0x171C6086: mov bx, word ptr [eax + 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x171C608A: sub ecx, ebx */
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + (-0xC)); /* 0x171C608C: mov ebx, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x171C608F: mov dword ptr [ebp - 0x10], ecx */
    ecx = ebx + edx; /* 0x171C6092: lea ecx, [ebx + edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ebx; /* 0x171C6095: sub edx, ebx */
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + (-0x4)); /* 0x171C6097: mov ebx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + esi; /* 0x171C609A: add ebx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x171C609C: add ebx, ecx */
    _flag_k = FK_ADD;
    MEM16(eax + (-0x20)) = (uint16_t)(LO16(ebx)); /* 0x171C609E: mov word ptr [eax - 0x20], bx */
    ebx = MEM32(ebp + (-0x4)); /* 0x171C60A2: mov ebx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + esi; /* 0x171C60A5: add ebx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x171C60A7: sub ecx, ebx */
    _flag_k = FK_CMP;
    MEM16(eax + 0x20) = (uint16_t)(LO16(ecx)); /* 0x171C60A9: mov word ptr [eax + 0x20], cx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebp + (-0x4)); /* 0x171C60AD: sub esi, dword ptr [ebp - 4] */
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + (-0x14)); /* 0x171C60B0: mov ebx, dword ptr [ebp - 0x14] */
    ecx = (int32_t)(int16_t)LO16(esi); /* 0x171C60B3: movsx ecx, si */
    esi = (int32_t)(int16_t)LO16(edx); /* 0x171C60B6: movsx esi, dx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x171C60B9: add ecx, esi */
    _flag_k = FK_ADD;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xB5u); /* 0x171C60BB: imul ecx, ecx, 0xb5 */
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x171C60C1: sar ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 8u);
    esi = ecx + edx; /* 0x171C60C4: lea esi, [ecx + edx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x171C60C7: sub edx, ecx */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x8)); /* 0x171C60C9: mov ecx, dword ptr [ebp - 8] */
    MEM16(eax + 0x40) = (uint16_t)(LO16(edx)); /* 0x171C60CC: mov word ptr [eax + 0x40], dx */
    edx = MEM32(ebp + (-0x10)); /* 0x171C60D0: mov edx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x171C60D3: add ecx, edx */
    _flag_k = FK_ADD;
    MEM16(eax) = (uint16_t)(LO16(esi)); /* 0x171C60D5: mov word ptr [eax], si */
    esi = (int32_t)(int16_t)LO16(ecx); /* 0x171C60D8: movsx esi, cx */
    edx = ebx + edi; /* 0x171C60DB: lea edx, [ebx + edi] */
    edx = (int32_t)(int16_t)LO16(edx); /* 0x171C60DE: movsx edx, dx */
    ecx = esi; /* 0x171C60E1: mov ecx, esi */
    esi = (uint32_t)((int32_t)esi * (int32_t)0x8Bu); /* 0x171C60E3: imul esi, esi, 0x8b */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x171C60E9: sub ecx, edx */
    _flag_k = FK_CMP;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x14Eu); /* 0x171C60EB: imul edx, edx, 0x14e */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x62u); /* 0x171C60F1: imul ecx, ecx, 0x62 */
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x171C60F4: sar ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 8u);
    if (8u) _cf = (((esi) >> 7) & 1u); /* 0x171C60F7: sar esi, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)esi >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = (uint32_t)((int32_t)esi >> 8u);
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ecx; /* 0x171C60FA: add esi, ecx */
    _flag_k = FK_ADD;
    if (8u) _cf = (((edx) >> 7) & 1u); /* 0x171C60FC: sar edx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 8u);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x171C60FF: add edx, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x8)); /* 0x171C6101: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x171C6104: add ecx, ebx */
    _flag_k = FK_ADD;
    ecx = (int32_t)(int16_t)LO16(ecx); /* 0x171C6106: movsx ecx, cx */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xB5u); /* 0x171C6109: imul ecx, ecx, 0xb5 */
    if (8u) _cf = (((ecx) >> 7) & 1u); /* 0x171C610F: sar ecx, 8 */
    if (8u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 8u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 8u);
    ebx = ecx + edi; /* 0x171C6112: lea ebx, [ecx + edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x171C6115: sub edi, ecx */
    _flag_k = FK_CMP;
    ecx = edi + esi; /* 0x171C6117: lea ecx, [edi + esi] */
    MEM16(eax + 0x30) = (uint16_t)(LO16(ecx)); /* 0x171C611A: mov word ptr [eax + 0x30], cx */
    ecx = ebx + edx; /* 0x171C611E: lea ecx, [ebx + edx] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - esi; /* 0x171C6121: sub edi, esi */
    _flag_k = FK_CMP;
    MEM16(eax + (-0x10)) = (uint16_t)(LO16(ecx)); /* 0x171C6123: mov word ptr [eax - 0x10], cx */
    ecx = MEM32(ebp + 0x8); /* 0x171C6127: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edx; /* 0x171C612A: sub ebx, edx */
    _flag_k = FK_CMP;
    MEM16(eax + 0x10) = (uint16_t)(LO16(edi)); /* 0x171C612C: mov word ptr [eax + 0x10], di */
    MEM16(eax + 0x50) = (uint16_t)(LO16(ebx)); /* 0x171C6130: mov word ptr [eax + 0x50], bx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x171C6134: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x171C6137: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x8) = ecx; /* 0x171C6138: mov dword ptr [ebp + 8], ecx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171C6033; /* 0x171C613B: jne 0x171c6033 */
L_171C6141:
    edi = POP32_VAL(esp); /* 0x171C6141: pop edi */
    esi = POP32_VAL(esp); /* 0x171C6142: pop esi */
    ebx = POP32_VAL(esp); /* 0x171C6143: pop ebx */
    esp = ebp; /* 0x171C6144: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171C6146: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171C6147: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171C6150(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C6150u);

L_171C6150:
    edi = edi; /* 0x171C6150: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C6152: push ebp */
    ebp = esp; /* 0x171C6153: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x171C6155: sub esp, 0x1c */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x171C6158: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x171C615B: push ebx */
    PUSH32(esp, esi); /* 0x171C615C: push esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x171C615D: add eax, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1C)) = 8; /* 0x171C6160: mov dword ptr [ebp - 0x1c], 8 */
    PUSH32(esp, edi); /* 0x171C6167: push edi */
    goto L_171C6170; /* 0x171C6168: jmp 0x171c6170 */
L_171C6170:
    ecx = (int32_t)(int16_t)MEM16(eax + 0xA); /* 0x171C6170: movsx ecx, word ptr [eax + 0xa] */
    edx = (int32_t)(int16_t)MEM16(eax + (-0x4)); /* 0x171C6174: movsx edx, word ptr [eax - 4] */
    esi = edx + ecx; /* 0x171C6178: lea esi, [edx + ecx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x171C617B: sub edx, ecx */
    _flag_k = FK_CMP;
    ecx = (int32_t)(int16_t)MEM16(eax + 0x8); /* 0x171C617D: movsx ecx, word ptr [eax + 8] */
    MEM32(ebp + (-0x10)) = esi; /* 0x171C6181: mov dword ptr [ebp - 0x10], esi */
    esi = (int32_t)(int16_t)MEM16(eax + (-0x2)); /* 0x171C6184: movsx esi, word ptr [eax - 2] */
    edi = esi + ecx; /* 0x171C6188: lea edi, [esi + ecx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x171C618B: sub esi, ecx */
    _flag_k = FK_CMP;
    ecx = (int32_t)(int16_t)MEM16(eax + 0x6); /* 0x171C618D: movsx ecx, word ptr [eax + 6] */
    MEM32(ebp + (-0x14)) = edi; /* 0x171C6191: mov dword ptr [ebp - 0x14], edi */
    edi = (int32_t)(int16_t)MEM16(eax); /* 0x171C6194: movsx edi, word ptr [eax] */
    ebx = ecx + edi; /* 0x171C6197: lea ebx, [ecx + edi] */
    MEM32(ebp + (-0xC)) = ebx; /* 0x171C619A: mov dword ptr [ebp - 0xc], ebx */
    ebx = (int32_t)(int16_t)MEM16(eax + 0x4); /* 0x171C619D: movsx ebx, word ptr [eax + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x171C61A1: sub edi, ecx */
    _flag_k = FK_CMP;
    ecx = (int32_t)(int16_t)MEM16(eax + 0x2); /* 0x171C61A3: movsx ecx, word ptr [eax + 2] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x171C61A7: add ebx, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = ebx; /* 0x171C61A9: mov dword ptr [ebp - 4], ebx */
    ebx = (int32_t)(int16_t)MEM16(eax + 0x4); /* 0x171C61AC: movsx ebx, word ptr [eax + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x171C61B0: sub ecx, ebx */
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + (-0x4)); /* 0x171C61B2: mov ebx, dword ptr [ebp - 4] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x171C61B5: mov dword ptr [ebp - 8], ecx */
    ecx = MEM32(ebp + (-0x10)); /* 0x171C61B8: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x171C61BB: add ebx, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = ebx; /* 0x171C61BD: mov dword ptr [ebp - 0x10], ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x4)); /* 0x171C61C0: sub ecx, dword ptr [ebp - 4] */
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + (-0xC)); /* 0x171C61C3: mov ebx, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x18)) = ecx; /* 0x171C61C6: mov dword ptr [ebp - 0x18], ecx */
    ecx = MEM32(ebp + (-0x14)); /* 0x171C61C9: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x171C61CC: add ebx, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = ebx; /* 0x171C61CE: mov dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0xC)); /* 0x171C61D1: sub ecx, dword ptr [ebp - 0xc] */
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + (-0x4)); /* 0x171C61D4: mov ebx, dword ptr [ebp - 4] */
    MEM32(ebp + (-0xC)) = ecx; /* 0x171C61D7: mov dword ptr [ebp - 0xc], ecx */
    ecx = MEM32(ebp + (-0x10)); /* 0x171C61DA: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x171C61DD: add ebx, ecx */
    _flag_k = FK_ADD;
    if (2u) _cf = (((ebx) >> 30) & 1u); /* 0x171C61DF: shl ebx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ebx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 2u; /* 0x171C61DF: shl ebx, 2 */
    MEM16(eax + (-0x4)) = (uint16_t)(LO16(ebx)); /* 0x171C61E2: mov word ptr [eax - 4], bx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x4)); /* 0x171C61E6: sub ecx, dword ptr [ebp - 4] */
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + (-0x18)); /* 0x171C61E9: mov ebx, dword ptr [ebp - 0x18] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x171C61EC: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x171C61EC: shl ecx, 2 */
    MEM16(eax + 0x4) = (uint16_t)(LO16(ecx)); /* 0x171C61EF: mov word ptr [eax + 4], cx */
    ecx = MEM32(ebp + (-0xC)); /* 0x171C61F3: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x171C61F6: add ecx, ebx */
    _flag_k = FK_ADD;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x187Eu); /* 0x171C61F8: imul ebx, ebx, 0x187e */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1151u); /* 0x171C61FE: imul ecx, ecx, 0x1151 */
    ebx = ebx + ecx + 0x400; /* 0x171C6204: lea ebx, [ebx + ecx + 0x400] */
    if (11u) _cf = (((ebx) >> 10) & 1u); /* 0x171C620B: sar ebx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 11u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 11u);
    MEM16(eax) = (uint16_t)(LO16(ebx)); /* 0x171C620E: mov word ptr [eax], bx */
    ebx = MEM32(ebp + (-0xC)); /* 0x171C6211: mov ebx, dword ptr [ebp - 0xc] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x3B21u); /* 0x171C6214: imul ebx, ebx, 0x3b21 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x171C621A: sub ecx, ebx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x400u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x400u; /* 0x171C621C: add ecx, 0x400 */
    _flag_k = FK_ADD;
    if (11u) _cf = (((ecx) >> 10) & 1u); /* 0x171C6222: sar ecx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 11u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 11u);
    MEM16(eax + 0x8) = (uint16_t)(LO16(ecx)); /* 0x171C6225: mov word ptr [eax + 8], cx */
    ecx = MEM32(ebp + (-0x8)); /* 0x171C6229: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x171C622C: add ecx, esi */
    _flag_k = FK_ADD;
    ebx = edi + edx; /* 0x171C622E: lea ebx, [edi + edx] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x171C6231: mov dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x171C6234: add ebx, ecx */
    _flag_k = FK_ADD;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3EC5u); /* 0x171C6236: imul ecx, ecx, 0x3ec5 */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x25A1u); /* 0x171C623C: imul ebx, ebx, 0x25a1 */
    MEM32(ebp + (-0xC)) = ebx; /* 0x171C6242: mov dword ptr [ebp - 0xc], ebx */
    ebx = MEM32(ebp + (-0x8)); /* 0x171C6245: mov ebx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edx; /* 0x171C6248: add ebx, edx */
    _flag_k = FK_ADD;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0xFFFFE333u); /* 0x171C624A: imul ebx, ebx, 0xffffe333 */
    MEM32(ebp + (-0x18)) = ebx; /* 0x171C6250: mov dword ptr [ebp - 0x18], ebx */
    ebx = edi + esi; /* 0x171C6253: lea ebx, [edi + esi] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0xFFFFADFDu); /* 0x171C6256: imul ebx, ebx, 0xffffadfd */
    MEM32(ebp + (-0x14)) = ebx; /* 0x171C625C: mov dword ptr [ebp - 0x14], ebx */
    ebx = MEM32(ebp + (-0xC)); /* 0x171C625F: mov ebx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x171C6262: sub ebx, ecx */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x4)); /* 0x171C6264: mov ecx, dword ptr [ebp - 4] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xC7Cu); /* 0x171C6267: imul ecx, ecx, 0xc7c */
    MEM32(ebp + (-0x10)) = ebx; /* 0x171C626D: mov dword ptr [ebp - 0x10], ebx */
    ebx = MEM32(ebp + (-0xC)); /* 0x171C6270: mov ebx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x171C6273: sub ebx, ecx */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x8)); /* 0x171C6275: mov ecx, dword ptr [ebp - 8] */
    edi = (uint32_t)((int32_t)edi * (int32_t)0x41B3u); /* 0x171C6278: imul edi, edi, 0x41b3 */
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6254u); /* 0x171C627E: imul esi, esi, 0x6254 */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x98Eu); /* 0x171C6284: imul ecx, ecx, 0x98e */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x300Bu); /* 0x171C628A: imul edx, edx, 0x300b */
    MEM32(ebp + (-0x4)) = ebx; /* 0x171C6290: mov dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x10)); /* 0x171C6293: add ecx, dword ptr [ebp - 0x10] */
    _flag_k = FK_ADD;
    ebx = MEM32(ebp + (-0x18)); /* 0x171C6296: mov ebx, dword ptr [ebp - 0x18] */
    ecx = ecx + ebx + 0x400; /* 0x171C6299: lea ecx, [ecx + ebx + 0x400] */
    if (11u) _cf = (((ecx) >> 10) & 1u); /* 0x171C62A0: sar ecx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 11u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 11u);
    MEM16(eax + 0xA) = (uint16_t)(LO16(ecx)); /* 0x171C62A3: mov word ptr [eax + 0xa], cx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0x4)); /* 0x171C62A7: add edi, dword ptr [ebp - 4] */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x14)); /* 0x171C62AA: mov ecx, dword ptr [ebp - 0x14] */
    edi = edi + ecx + 0x400; /* 0x171C62AD: lea edi, [edi + ecx + 0x400] */
    if (11u) _cf = (((edi) >> 10) & 1u); /* 0x171C62B4: sar edi, 0xb */
    if (11u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> 11u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> 11u);
    MEM16(eax + 0x6) = (uint16_t)(LO16(edi)); /* 0x171C62B7: mov word ptr [eax + 6], di */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x10)); /* 0x171C62BB: add esi, dword ptr [ebp - 0x10] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x4)); /* 0x171C62BE: add edx, dword ptr [ebp - 4] */
    _flag_k = FK_ADD;
    ecx = esi + ecx + 0x400; /* 0x171C62C1: lea ecx, [esi + ecx + 0x400] */
    if (11u) _cf = (((ecx) >> 10) & 1u); /* 0x171C62C8: sar ecx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 11u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 11u);
    edx = edx + ebx + 0x400; /* 0x171C62CB: lea edx, [edx + ebx + 0x400] */
    MEM16(eax + 0x2) = (uint16_t)(LO16(ecx)); /* 0x171C62D2: mov word ptr [eax + 2], cx */
    ecx = MEM32(ebp + (-0x1C)); /* 0x171C62D6: mov ecx, dword ptr [ebp - 0x1c] */
    if (11u) _cf = (((edx) >> 10) & 1u); /* 0x171C62D9: sar edx, 0xb */
    if (11u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 11u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 11u);
    MEM16(eax + (-0x2)) = (uint16_t)(LO16(edx)); /* 0x171C62DC: mov word ptr [eax - 2], dx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x10u; /* 0x171C62E0: add eax, 0x10 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x171C62E3: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x1C)) = ecx; /* 0x171C62E4: mov dword ptr [ebp - 0x1c], ecx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171C6170; /* 0x171C62E7: jne 0x171c6170 */
L_171C62ED:
    eax = MEM32(ebp + 0x8); /* 0x171C62ED: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x171C62F0: add eax, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = 8; /* 0x171C62F3: mov dword ptr [ebp + 8], 8 */
    ebx = ebx; /* 0x171C62FA: lea ebx, [ebx] */
L_171C6300:
    ecx = (int32_t)(int16_t)MEM16(eax + 0x50); /* 0x171C6300: movsx ecx, word ptr [eax + 0x50] */
    edx = (int32_t)(int16_t)MEM16(eax + (-0x20)); /* 0x171C6304: movsx edx, word ptr [eax - 0x20] */
    esi = edx + ecx; /* 0x171C6308: lea esi, [edx + ecx] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ecx; /* 0x171C630B: sub edx, ecx */
    _flag_k = FK_CMP;
    ecx = (int32_t)(int16_t)MEM16(eax + 0x40); /* 0x171C630D: movsx ecx, word ptr [eax + 0x40] */
    MEM32(ebp + (-0x10)) = esi; /* 0x171C6311: mov dword ptr [ebp - 0x10], esi */
    esi = (int32_t)(int16_t)MEM16(eax + (-0x10)); /* 0x171C6314: movsx esi, word ptr [eax - 0x10] */
    edi = esi + ecx; /* 0x171C6318: lea edi, [esi + ecx] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x171C631B: sub esi, ecx */
    _flag_k = FK_CMP;
    ecx = (int32_t)(int16_t)MEM16(eax + 0x30); /* 0x171C631D: movsx ecx, word ptr [eax + 0x30] */
    MEM32(ebp + (-0x14)) = edi; /* 0x171C6321: mov dword ptr [ebp - 0x14], edi */
    edi = (int32_t)(int16_t)MEM16(eax); /* 0x171C6324: movsx edi, word ptr [eax] */
    ebx = ecx + edi; /* 0x171C6327: lea ebx, [ecx + edi] */
    MEM32(ebp + (-0xC)) = ebx; /* 0x171C632A: mov dword ptr [ebp - 0xc], ebx */
    ebx = (int32_t)(int16_t)MEM16(eax + 0x20); /* 0x171C632D: movsx ebx, word ptr [eax + 0x20] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x171C6331: sub edi, ecx */
    _flag_k = FK_CMP;
    ecx = (int32_t)(int16_t)MEM16(eax + 0x10); /* 0x171C6333: movsx ecx, word ptr [eax + 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x171C6337: add ebx, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = ebx; /* 0x171C6339: mov dword ptr [ebp - 4], ebx */
    ebx = (int32_t)(int16_t)MEM16(eax + 0x20); /* 0x171C633C: movsx ebx, word ptr [eax + 0x20] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x171C6340: sub ecx, ebx */
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + (-0x4)); /* 0x171C6342: mov ebx, dword ptr [ebp - 4] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x171C6345: mov dword ptr [ebp - 8], ecx */
    ecx = MEM32(ebp + (-0x10)); /* 0x171C6348: mov ecx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x171C634B: add ebx, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = ebx; /* 0x171C634D: mov dword ptr [ebp - 0x10], ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x4)); /* 0x171C6350: sub ecx, dword ptr [ebp - 4] */
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + (-0xC)); /* 0x171C6353: mov ebx, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x18)) = ecx; /* 0x171C6356: mov dword ptr [ebp - 0x18], ecx */
    ecx = MEM32(ebp + (-0x14)); /* 0x171C6359: mov ecx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x171C635C: add ebx, ecx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = ebx; /* 0x171C635E: mov dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0xC)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0xC)); /* 0x171C6361: sub ecx, dword ptr [ebp - 0xc] */
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + (-0x4)); /* 0x171C6364: mov ebx, dword ptr [ebp - 4] */
    MEM32(ebp + (-0xC)) = ecx; /* 0x171C6367: mov dword ptr [ebp - 0xc], ecx */
    ecx = MEM32(ebp + (-0x10)); /* 0x171C636A: mov ecx, dword ptr [ebp - 0x10] */
    ebx = ebx + ecx + 0x2; /* 0x171C636D: lea ebx, [ebx + ecx + 2] */
    if (2u) _cf = (((ebx) >> 1) & 1u); /* 0x171C6371: sar ebx, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 2u);
    MEM16(eax + (-0x20)) = (uint16_t)(LO16(ebx)); /* 0x171C6374: mov word ptr [eax - 0x20], bx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x4)); /* 0x171C6378: sub ecx, dword ptr [ebp - 4] */
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + (-0x18)); /* 0x171C637B: mov ebx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x171C637E: add ecx, 2 */
    _flag_k = FK_ADD;
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x171C6381: sar ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 2u);
    MEM16(eax + 0x20) = (uint16_t)(LO16(ecx)); /* 0x171C6384: mov word ptr [eax + 0x20], cx */
    ecx = MEM32(ebp + (-0xC)); /* 0x171C6388: mov ecx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x171C638B: add ecx, ebx */
    _flag_k = FK_ADD;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x187Eu); /* 0x171C638D: imul ebx, ebx, 0x187e */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x1151u); /* 0x171C6393: imul ecx, ecx, 0x1151 */
    ebx = ebx + ecx + 0x4000; /* 0x171C6399: lea ebx, [ebx + ecx + 0x4000] */
    if (15u) _cf = (((ebx) >> 14) & 1u); /* 0x171C63A0: sar ebx, 0xf */
    if (15u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ebx >> 15u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = (uint32_t)((int32_t)ebx >> 15u);
    MEM16(eax) = (uint16_t)(LO16(ebx)); /* 0x171C63A3: mov word ptr [eax], bx */
    ebx = MEM32(ebp + (-0xC)); /* 0x171C63A6: mov ebx, dword ptr [ebp - 0xc] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x3B21u); /* 0x171C63A9: imul ebx, ebx, 0x3b21 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x171C63AF: sub ecx, ebx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x4000u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x4000u; /* 0x171C63B1: add ecx, 0x4000 */
    _flag_k = FK_ADD;
    if (15u) _cf = (((ecx) >> 14) & 1u); /* 0x171C63B7: sar ecx, 0xf */
    if (15u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 15u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 15u);
    MEM16(eax + 0x40) = (uint16_t)(LO16(ecx)); /* 0x171C63BA: mov word ptr [eax + 0x40], cx */
    ecx = MEM32(ebp + (-0x8)); /* 0x171C63BE: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x171C63C1: add ecx, esi */
    _flag_k = FK_ADD;
    ebx = edi + edx; /* 0x171C63C3: lea ebx, [edi + edx] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x171C63C6: mov dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x171C63C9: add ebx, ecx */
    _flag_k = FK_ADD;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3EC5u); /* 0x171C63CB: imul ecx, ecx, 0x3ec5 */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0x25A1u); /* 0x171C63D1: imul ebx, ebx, 0x25a1 */
    MEM32(ebp + (-0xC)) = ebx; /* 0x171C63D7: mov dword ptr [ebp - 0xc], ebx */
    ebx = MEM32(ebp + (-0x8)); /* 0x171C63DA: mov ebx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edx; /* 0x171C63DD: add ebx, edx */
    _flag_k = FK_ADD;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0xFFFFE333u); /* 0x171C63DF: imul ebx, ebx, 0xffffe333 */
    MEM32(ebp + (-0x18)) = ebx; /* 0x171C63E5: mov dword ptr [ebp - 0x18], ebx */
    ebx = edi + esi; /* 0x171C63E8: lea ebx, [edi + esi] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0xFFFFADFDu); /* 0x171C63EB: imul ebx, ebx, 0xffffadfd */
    MEM32(ebp + (-0x14)) = ebx; /* 0x171C63F1: mov dword ptr [ebp - 0x14], ebx */
    ebx = MEM32(ebp + (-0xC)); /* 0x171C63F4: mov ebx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x171C63F7: sub ebx, ecx */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + (-0x4)); /* 0x171C63F9: mov ecx, dword ptr [ebp - 4] */
    MEM32(ebp + (-0x10)) = ebx; /* 0x171C63FC: mov dword ptr [ebp - 0x10], ebx */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0xC7Cu); /* 0x171C63FF: imul ecx, ecx, 0xc7c */
    ebx = MEM32(ebp + (-0xC)); /* 0x171C6405: mov ebx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - ecx; /* 0x171C6408: sub ebx, ecx */
    _flag_k = FK_CMP;
    edi = (uint32_t)((int32_t)edi * (int32_t)0x41B3u); /* 0x171C640A: imul edi, edi, 0x41b3 */
    esi = (uint32_t)((int32_t)esi * (int32_t)0x6254u); /* 0x171C6410: imul esi, esi, 0x6254 */
    ecx = MEM32(ebp + (-0x8)); /* 0x171C6416: mov ecx, dword ptr [ebp - 8] */
    edx = (uint32_t)((int32_t)edx * (int32_t)0x300Bu); /* 0x171C6419: imul edx, edx, 0x300b */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x98Eu); /* 0x171C641F: imul ecx, ecx, 0x98e */
    MEM32(ebp + (-0x4)) = ebx; /* 0x171C6425: mov dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(ebp + (-0x10)); /* 0x171C6428: add ecx, dword ptr [ebp - 0x10] */
    _flag_k = FK_ADD;
    ebx = MEM32(ebp + (-0x18)); /* 0x171C642B: mov ebx, dword ptr [ebp - 0x18] */
    ecx = ecx + ebx + 0x4000; /* 0x171C642E: lea ecx, [ecx + ebx + 0x4000] */
    if (15u) _cf = (((ecx) >> 14) & 1u); /* 0x171C6435: sar ecx, 0xf */
    if (15u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 15u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 15u);
    MEM16(eax + 0x50) = (uint16_t)(LO16(ecx)); /* 0x171C6438: mov word ptr [eax + 0x50], cx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0x4)); /* 0x171C643C: add edi, dword ptr [ebp - 4] */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x14)); /* 0x171C643F: mov ecx, dword ptr [ebp - 0x14] */
    edi = edi + ecx + 0x4000; /* 0x171C6442: lea edi, [edi + ecx + 0x4000] */
    if (15u) _cf = (((edi) >> 14) & 1u); /* 0x171C6449: sar edi, 0xf */
    if (15u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edi >> 15u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = (uint32_t)((int32_t)edi >> 15u);
    MEM16(eax + 0x30) = (uint16_t)(LO16(edi)); /* 0x171C644C: mov word ptr [eax + 0x30], di */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(ebp + (-0x10)); /* 0x171C6450: add esi, dword ptr [ebp - 0x10] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(ebp + (-0x4)); /* 0x171C6453: add edx, dword ptr [ebp - 4] */
    _flag_k = FK_ADD;
    ecx = esi + ecx + 0x4000; /* 0x171C6456: lea ecx, [esi + ecx + 0x4000] */
    if (15u) _cf = (((ecx) >> 14) & 1u); /* 0x171C645D: sar ecx, 0xf */
    if (15u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 15u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 15u);
    edx = edx + ebx + 0x4000; /* 0x171C6460: lea edx, [edx + ebx + 0x4000] */
    MEM16(eax + 0x10) = (uint16_t)(LO16(ecx)); /* 0x171C6467: mov word ptr [eax + 0x10], cx */
    ecx = MEM32(ebp + 0x8); /* 0x171C646B: mov ecx, dword ptr [ebp + 8] */
    if (15u) _cf = (((edx) >> 14) & 1u); /* 0x171C646E: sar edx, 0xf */
    if (15u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 15u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 15u);
    MEM16(eax + (-0x10)) = (uint16_t)(LO16(edx)); /* 0x171C6471: mov word ptr [eax - 0x10], dx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x171C6475: add eax, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x171C6478: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x8) = ecx; /* 0x171C6479: mov dword ptr [ebp + 8], ecx */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171C6300; /* 0x171C647C: jne 0x171c6300 */
L_171C6482:
    edi = POP32_VAL(esp); /* 0x171C6482: pop edi */
    esi = POP32_VAL(esp); /* 0x171C6483: pop esi */
    ebx = POP32_VAL(esp); /* 0x171C6484: pop ebx */
    esp = ebp; /* 0x171C6485: mov esp, ebp */
    ebp = POP32_VAL(esp); /* 0x171C6487: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171C6488: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171C6490(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C6490u);

L_171C6490:
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171C6490: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171C6498(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C6498u);

L_171C6498:
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x171C6498: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_171C64A0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C64A0u);

L_171C64A0:
    PUSH32(esp, 0xD40u); /* 0x171C64A0: push 0xd40 */
    RECOMP_CALL(sub_1721B254); /* 0x171C64A5: call 0x1721b254 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171C64AA: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171C64AB: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x171C64AD: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C64B4; /* 0x171C64AF: jne 0x171c64b4 */
L_171C64B1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171C64B1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171C64B3: ret  */
L_171C64B4:
    fp_push(0.0); /* 0x171C64B4: fldz  */
    MEM32(eax) = ecx; /* 0x171C64B6: mov dword ptr [eax], ecx */
    { double _v = fp_pop(); *(double*)ADDR(eax + 0x10) = _v; } /* 0x171C64B8: fstp qword ptr [eax + 0x10] */
    MEM32(eax + 0x60) = 0x00018722u; /* 0x171C64BB: mov dword ptr [eax + 0x60], 0x18722 */
    fp_push(0.0); /* 0x171C64C2: fldz  */
    MEM8(eax + 0x78) = (uint8_t)(LO8(ecx)); /* 0x171C64C4: mov byte ptr [eax + 0x78], cl */
    { double _v = fp_pop(); *(double*)ADDR(eax + 0x18) = _v; } /* 0x171C64C7: fstp qword ptr [eax + 0x18] */
    MEM8(eax + 0x79) = (uint8_t)(LO8(ecx)); /* 0x171C64CA: mov byte ptr [eax + 0x79], cl */
    fp_push(0.0); /* 0x171C64CD: fldz  */
    MEM32(eax + 0x80) = 0x170D023Cu; /* 0x171C64CF: mov dword ptr [eax + 0x80], 0x170d023c */
    MEM32(eax + 0x84) = 0x170D023Cu; /* 0x171C64D9: mov dword ptr [eax + 0x84], 0x170d023c */
    { double _v = fp_pop(); *(double*)ADDR(eax + 0x20) = _v; } /* 0x171C64E3: fstp qword ptr [eax + 0x20] */
    MEM32(eax + 0x88) = 0x170D023Cu; /* 0x171C64E6: mov dword ptr [eax + 0x88], 0x170d023c */
    fp_push(0.0); /* 0x171C64F0: fldz  */
    MEM32(eax + 0x8C) = 0x17129E95u; /* 0x171C64F2: mov dword ptr [eax + 0x8c], 0x17129e95 */
    MEM32(eax + 0xC) = 0x170D023Cu; /* 0x171C64FC: mov dword ptr [eax + 0xc], 0x170d023c */
    { double _v = fp_pop(); *(double*)ADDR(eax + 0x58) = _v; } /* 0x171C6503: fstp qword ptr [eax + 0x58] */
    MEM32(eax + 0x74) = 0x1710A1C0u; /* 0x171C6506: mov dword ptr [eax + 0x74], 0x1710a1c0 */
    MEM32(eax + 0x90) = 0x170D023Cu; /* 0x171C650D: mov dword ptr [eax + 0x90], 0x170d023c */
    MEM32(eax + 0xD20) = 0x171C6490u; /* 0x171C6517: mov dword ptr [eax + 0xd20], 0x171c6490 */
    MEM32(eax + 0xD24) = 0x171C6490u; /* 0x171C6521: mov dword ptr [eax + 0xd24], 0x171c6490 */
    MEM32(eax + 0xD28) = 0x171C6490u; /* 0x171C652B: mov dword ptr [eax + 0xd28], 0x171c6490 */
    MEM32(eax + 0xD2C) = 0x170D023Cu; /* 0x171C6535: mov dword ptr [eax + 0xd2c], 0x170d023c */
    MEM32(eax + 0xD30) = 0x171C6490u; /* 0x171C653F: mov dword ptr [eax + 0xd30], 0x171c6490 */
    MEM32(eax + 0xD34) = 0x171C6498u; /* 0x171C6549: mov dword ptr [eax + 0xd34], 0x171c6498 */
    MEM32(eax + 0xD38) = ecx; /* 0x171C6553: mov dword ptr [eax + 0xd38], ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171C6559: ret  */
    RECOMP_REGS_OUT();
}

void sub_171C655F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C655Fu);

L_171C655F:
    edi = edi; /* 0x171C655F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C6561: push ebp */
    ebp = esp; /* 0x171C6562: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x171C6564: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x0001872Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x0001872Cu; /* 0x171C6567: sub eax, 0x1872c */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_171C65CB; /* 0x171C656C: je 0x171c65cb */
L_171C656E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171C656E: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_171C6633; /* 0x171C656F: je 0x171c6633 */
L_171C6575:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171C6575: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_171C659D; /* 0x171C6576: je 0x171c659d */
L_171C6578:
    eax = MEM32(ebp + 0x8); /* 0x171C6578: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0xD30); /* 0x171C657B: mov ecx, dword ptr [eax + 0xd30] */
    /* cmp ecx, 0x171C6490u */ /* 0x171C6581: cmp ecx, 0x171c6490 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x171C6490u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C6596; /* 0x171C6587: je 0x171c6596 */
L_171C6589:
    PUSH32(esp, MEM32(eax + 0xD38)); /* 0x171C6589: push dword ptr [eax + 0xd38] */
    PUSH32(esp, 0x00018A24u); /* 0x171C658F: push 0x18a24 */
    goto L_171C660D; /* 0x171C6594: jmp 0x171c660d */
L_171C6596:
    PUSH32(esp, 0x00018A24u); /* 0x171C6596: push 0x18a24 */
    goto L_171C6616; /* 0x171C659B: jmp 0x171c6616 */
L_171C659D:
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x171C659D: fld qword ptr [ebp + 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x171C65A0: fcomp qword ptr [0x17001d90] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C65A6: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171C65A8: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171C65F1; /* 0x171C65AB: jnp 0x171c65f1 */
L_171C65AD:
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x171C65AD: fld qword ptr [ebp + 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D88)); /* 0x171C65B0: fcomp qword ptr [0x17001d88] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C65B6: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171C65B8: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171C65F1; /* 0x171C65BB: je 0x171c65f1 */
L_171C65BD:
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x171C65BD: fld qword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x171C65C0: mov eax, dword ptr [ebp + 8] */
    { double _v = fp_pop(); *(double*)ADDR(eax + 0x58) = _v; } /* 0x171C65C3: fstp qword ptr [eax + 0x58] */
    goto L_171C6651; /* 0x171C65C6: jmp 0x171c6651 */
L_171C65CB:
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x171C65CB: fld qword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_1721B050); /* 0x171C65CE: call 0x1721b050 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x171C65D3: mov ecx, eax */
    /* test ecx, ecx */ /* 0x171C65D5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = ecx; /* 0x171C65D7: mov dword ptr [ebp + 0xc], ecx */
    fp_push((double)(int32_t)MEM32(ebp + 0xC)); /* 0x171C65DA: fild dword ptr [ebp + 0xc] */
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_171C65E5; /* 0x171C65DD: jge 0x171c65e5 */
L_171C65DF:
    _st[0] += *(double*)ADDR(0x17001F50); /* 0x171C65DF: fadd qword ptr [0x17001f50] */
L_171C65E5:
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x171C65E5: fld qword ptr [ebp + 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C65E8: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C65EA: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C65EC: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171C661B; /* 0x171C65EF: jnp 0x171c661b */
L_171C65F1:
    eax = MEM32(ebp + 0x8); /* 0x171C65F1: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0xD30); /* 0x171C65F4: mov ecx, dword ptr [eax + 0xd30] */
    /* cmp ecx, 0x171C6490u */ /* 0x171C65FA: cmp ecx, 0x171c6490 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x171C6490u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C6611; /* 0x171C6600: je 0x171c6611 */
L_171C6602:
    PUSH32(esp, MEM32(eax + 0xD38)); /* 0x171C6602: push dword ptr [eax + 0xd38] */
    PUSH32(esp, 0x00018A25u); /* 0x171C6608: push 0x18a25 */
L_171C660D:
    RECOMP_ICALL(ecx); /* 0x171C660D: call ecx */
    RECOMP_FLAGS_IN();
    goto L_171C6651; /* 0x171C660F: jmp 0x171c6651 */
L_171C6611:
    PUSH32(esp, 0x00018A25u); /* 0x171C6611: push 0x18a25 */
L_171C6616:
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171C6616: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    goto L_171C6651; /* 0x171C6619: jmp 0x171c6651 */
L_171C661B:
    /* cmp ecx, 0x00018722u */ /* 0x171C661B: cmp ecx, 0x18722 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00018722u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_171C6633; /* 0x171C6621: jb 0x171c6633 */
L_171C6623:
    /* cmp ecx, 0x00018726u */ /* 0x171C6623: cmp ecx, 0x18726 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00018726u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171C6633; /* 0x171C6629: ja 0x171c6633 */
L_171C662B:
    eax = MEM32(ebp + 0x8); /* 0x171C662B: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x60) = ecx; /* 0x171C662E: mov dword ptr [eax + 0x60], ecx */
    goto L_171C6651; /* 0x171C6631: jmp 0x171c6651 */
L_171C6633:
    fp_push(*(double*)ADDR(0x17001D90)); /* 0x171C6633: fld qword ptr [0x17001d90] */
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x171C6639: fld qword ptr [ebp + 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C663C: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C663E: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C6640: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171C6649; /* 0x171C6643: jnp 0x171c6649 */
L_171C6645:
    SET_LO8(eax, 1); /* 0x171C6645: mov al, 1 */
    goto L_171C664B; /* 0x171C6647: jmp 0x171c664b */
L_171C6649:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x171C6649: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_171C664B:
    ecx = MEM32(ebp + 0x8); /* 0x171C664B: mov ecx, dword ptr [ebp + 8] */
    MEM8(ecx + 0x79) = (uint8_t)(LO8(eax)); /* 0x171C664E: mov byte ptr [ecx + 0x79], al */
L_171C6651:
    ebp = POP32_VAL(esp); /* 0x171C6651: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x171C6652: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_171C665A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C665Au);

L_171C665A:
    edi = edi; /* 0x171C665A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C665C: push ebp */
    ebp = esp; /* 0x171C665D: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171C665F: mov eax, dword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(ebp + 0xC)); /* 0x171C6662: fld qword ptr [ebp + 0xc] */
    { double _v = fp_pop(); *(double*)ADDR(eax + 0x10) = _v; } /* 0x171C6665: fstp qword ptr [eax + 0x10] */
    fp_push(*(double*)ADDR(ebp + 0x14)); /* 0x171C6668: fld qword ptr [ebp + 0x14] */
    { double _v = fp_pop(); *(double*)ADDR(eax + 0x18) = _v; } /* 0x171C666B: fstp qword ptr [eax + 0x18] */
    fp_push(*(double*)ADDR(ebp + 0x1C)); /* 0x171C666E: fld qword ptr [ebp + 0x1c] */
    { double _v = fp_pop(); *(double*)ADDR(eax + 0x20) = _v; } /* 0x171C6671: fstp qword ptr [eax + 0x20] */
    ebp = POP32_VAL(esp); /* 0x171C6674: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x171C6675: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_171C667D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C667Du);

L_171C667D:
    edi = edi; /* 0x171C667D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C667F: push ebp */
    ebp = esp; /* 0x171C6680: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x171C6682: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFE78FCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0xFFFE78FCu; /* 0x171C6685: add eax, 0xfffe78fc */
    _flag_k = FK_ADD;
    /* cmp eax, 0xBu */ /* 0x171C668A: cmp eax, 0xb */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xBu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_171C67C8; /* 0x171C668D: ja 0x171c67c8 */
L_171C6693:
    { _itail_tgt = (uint32_t)(MEM32(eax * 4 + 0x171C67F4)); goto _ljump; }
L_171C669A:
    eax = MEM32(ebp + 0x10); /* 0x171C669A: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x171C669D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C66A6; /* 0x171C669F: jne 0x171c66a6 */
L_171C66A1:
    eax = 0x170D023Cu; /* 0x171C66A1: mov eax, 0x170d023c */
L_171C66A6:
    ecx = MEM32(ebp + 0x8); /* 0x171C66A6: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx + 0x80) = eax; /* 0x171C66A9: mov dword ptr [ecx + 0x80], eax */
    goto L_171C67F0; /* 0x171C66AF: jmp 0x171c67f0 */
L_171C66B4:
    eax = MEM32(ebp + 0x10); /* 0x171C66B4: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x171C66B7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C66C0; /* 0x171C66B9: jne 0x171c66c0 */
L_171C66BB:
    eax = 0x171C6490u; /* 0x171C66BB: mov eax, 0x171c6490 */
L_171C66C0:
    ecx = MEM32(ebp + 0x8); /* 0x171C66C0: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx + 0xD20) = eax; /* 0x171C66C3: mov dword ptr [ecx + 0xd20], eax */
    goto L_171C67F0; /* 0x171C66C9: jmp 0x171c67f0 */
L_171C66CE:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x171C66CE: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = 0x170D023Cu; /* 0x171C66D2: mov ecx, 0x170d023c */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C66DC; /* 0x171C66D7: je 0x171c66dc */
L_171C66D9:
    ecx = MEM32(ebp + 0x10); /* 0x171C66D9: mov ecx, dword ptr [ebp + 0x10] */
L_171C66DC:
    eax = MEM32(ebp + 0x8); /* 0x171C66DC: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0x84) = ecx; /* 0x171C66DF: mov dword ptr [eax + 0x84], ecx */
    goto L_171C66FE; /* 0x171C66E5: jmp 0x171c66fe */
L_171C66E7:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x171C66E7: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = 0x171C6490u; /* 0x171C66EB: mov ecx, 0x171c6490 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C66F5; /* 0x171C66F0: je 0x171c66f5 */
L_171C66F2:
    ecx = MEM32(ebp + 0x10); /* 0x171C66F2: mov ecx, dword ptr [ebp + 0x10] */
L_171C66F5:
    eax = MEM32(ebp + 0x8); /* 0x171C66F5: mov eax, dword ptr [ebp + 8] */
    MEM32(eax + 0xD24) = ecx; /* 0x171C66F8: mov dword ptr [eax + 0xd24], ecx */
L_171C66FE:
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x171C66FE: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(ecx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x171C6702: setne cl */
    MEM8(eax + 0x78) = (uint8_t)(LO8(ecx)); /* 0x171C6705: mov byte ptr [eax + 0x78], cl */
    goto L_171C67F0; /* 0x171C6708: jmp 0x171c67f0 */
L_171C670D:
    eax = MEM32(ebp + 0x10); /* 0x171C670D: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x171C6710: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C6719; /* 0x171C6712: jne 0x171c6719 */
L_171C6714:
    eax = 0x170D023Cu; /* 0x171C6714: mov eax, 0x170d023c */
L_171C6719:
    ecx = MEM32(ebp + 0x8); /* 0x171C6719: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx + 0x88) = eax; /* 0x171C671C: mov dword ptr [ecx + 0x88], eax */
    goto L_171C67F0; /* 0x171C6722: jmp 0x171c67f0 */
L_171C6727:
    eax = MEM32(ebp + 0x10); /* 0x171C6727: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x171C672A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C6733; /* 0x171C672C: jne 0x171c6733 */
L_171C672E:
    eax = 0x171C6490u; /* 0x171C672E: mov eax, 0x171c6490 */
L_171C6733:
    ecx = MEM32(ebp + 0x8); /* 0x171C6733: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx + 0xD28) = eax; /* 0x171C6736: mov dword ptr [ecx + 0xd28], eax */
    goto L_171C67F0; /* 0x171C673C: jmp 0x171c67f0 */
L_171C6741:
    eax = MEM32(ebp + 0x10); /* 0x171C6741: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x171C6744: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C674D; /* 0x171C6746: jne 0x171c674d */
L_171C6748:
    eax = 0x17129E95u; /* 0x171C6748: mov eax, 0x17129e95 */
L_171C674D:
    ecx = MEM32(ebp + 0x8); /* 0x171C674D: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx + 0x8C) = eax; /* 0x171C6750: mov dword ptr [ecx + 0x8c], eax */
    goto L_171C67F0; /* 0x171C6756: jmp 0x171c67f0 */
L_171C675B:
    eax = MEM32(ebp + 0x10); /* 0x171C675B: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x171C675E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C6767; /* 0x171C6760: jne 0x171c6767 */
L_171C6762:
    eax = 0x170D023Cu; /* 0x171C6762: mov eax, 0x170d023c */
L_171C6767:
    ecx = MEM32(ebp + 0x8); /* 0x171C6767: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx + 0xD2C) = eax; /* 0x171C676A: mov dword ptr [ecx + 0xd2c], eax */
    goto L_171C67F0; /* 0x171C6770: jmp 0x171c67f0 */
L_171C6772:
    eax = MEM32(ebp + 0x10); /* 0x171C6772: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x171C6775: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C677E; /* 0x171C6777: jne 0x171c677e */
L_171C6779:
    eax = 0x170D023Cu; /* 0x171C6779: mov eax, 0x170d023c */
L_171C677E:
    ecx = MEM32(ebp + 0x8); /* 0x171C677E: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx + 0xC) = eax; /* 0x171C6781: mov dword ptr [ecx + 0xc], eax */
    goto L_171C67F0; /* 0x171C6784: jmp 0x171c67f0 */
L_171C6786:
    eax = MEM32(ebp + 0x10); /* 0x171C6786: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x171C6789: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C6792; /* 0x171C678B: jne 0x171c6792 */
L_171C678D:
    eax = 0x171C6490u; /* 0x171C678D: mov eax, 0x171c6490 */
L_171C6792:
    ecx = MEM32(ebp + 0x8); /* 0x171C6792: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx + 0xD30) = eax; /* 0x171C6795: mov dword ptr [ecx + 0xd30], eax */
    goto L_171C67F0; /* 0x171C679B: jmp 0x171c67f0 */
L_171C679D:
    eax = MEM32(ebp + 0x10); /* 0x171C679D: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x171C67A0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C67A9; /* 0x171C67A2: jne 0x171c67a9 */
L_171C67A4:
    eax = 0x1710A1C0u; /* 0x171C67A4: mov eax, 0x1710a1c0 */
L_171C67A9:
    ecx = MEM32(ebp + 0x8); /* 0x171C67A9: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx + 0x74) = eax; /* 0x171C67AC: mov dword ptr [ecx + 0x74], eax */
    goto L_171C67F0; /* 0x171C67AF: jmp 0x171c67f0 */
L_171C67B1:
    eax = MEM32(ebp + 0x10); /* 0x171C67B1: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x171C67B4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C67BD; /* 0x171C67B6: jne 0x171c67bd */
L_171C67B8:
    eax = 0x171C6498u; /* 0x171C67B8: mov eax, 0x171c6498 */
L_171C67BD:
    ecx = MEM32(ebp + 0x8); /* 0x171C67BD: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx + 0xD34) = eax; /* 0x171C67C0: mov dword ptr [ecx + 0xd34], eax */
    goto L_171C67F0; /* 0x171C67C6: jmp 0x171c67f0 */
L_171C67C8:
    eax = MEM32(ebp + 0x8); /* 0x171C67C8: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0xD30); /* 0x171C67CB: mov ecx, dword ptr [eax + 0xd30] */
    /* cmp ecx, 0x171C6490u */ /* 0x171C67D1: cmp ecx, 0x171c6490 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x171C6490u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C67E8; /* 0x171C67D7: je 0x171c67e8 */
L_171C67D9:
    PUSH32(esp, MEM32(eax + 0xD38)); /* 0x171C67D9: push dword ptr [eax + 0xd38] */
    PUSH32(esp, 0x00018A24u); /* 0x171C67DF: push 0x18a24 */
    RECOMP_ICALL(ecx); /* 0x171C67E4: call ecx */
    RECOMP_FLAGS_IN();
    goto L_171C67F0; /* 0x171C67E6: jmp 0x171c67f0 */
L_171C67E8:
    PUSH32(esp, 0x00018A24u); /* 0x171C67E8: push 0x18a24 */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x171C67ED: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
L_171C67F0:
    ebp = POP32_VAL(esp); /* 0x171C67F0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171C67F1: ret 0xc */
  _ljump:
    switch (_itail_tgt) {
      case 0x171C669Au: goto L_171C669A;
      case 0x171C66B4u: goto L_171C66B4;
      case 0x171C66CEu: goto L_171C66CE;
      case 0x171C66E7u: goto L_171C66E7;
      case 0x171C670Du: goto L_171C670D;
      case 0x171C6727u: goto L_171C6727;
      case 0x171C6741u: goto L_171C6741;
      case 0x171C675Bu: goto L_171C675B;
      case 0x171C6772u: goto L_171C6772;
      case 0x171C6786u: goto L_171C6786;
      case 0x171C679Du: goto L_171C679D;
      case 0x171C67B1u: goto L_171C67B1;
      default: RECOMP_ITAIL(_itail_tgt); { RECOMP_REGS_OUT(); return; }
    }
    RECOMP_REGS_OUT();
}

void sub_171C6829(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C6829u);

L_171C6829:
    edi = edi; /* 0x171C6829: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C682B: push ebp */
    ebp = esp; /* 0x171C682C: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171C682E: push esi */
    esi = MEM32(ebx + 0x4); /* 0x171C682F: mov esi, dword ptr [ebx + 4] */
    /* test esi, esi */ /* 0x171C6832: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C684B; /* 0x171C6834: jne 0x171c684b */
L_171C6836:
    PUSH32(esp, MEM32(ebx + 0x8)); /* 0x171C6836: push dword ptr [ebx + 8] */
    RECOMP_CALL(sub_171C6E5D); /* 0x171C6839: call 0x171c6e5d */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x171C683E: mov esi, eax */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x171C6840: push dword ptr [esi + 4] */
    PUSH32(esp, esi); /* 0x171C6843: push esi */
    RECOMP_CALL(sub_171C6E99); /* 0x171C6844: call 0x171c6e99 */
    RECOMP_FLAGS_IN();
    goto L_171C6854; /* 0x171C6849: jmp 0x171c6854 */
L_171C684B:
    PUSH32(esp, esi); /* 0x171C684B: push esi */
    RECOMP_CALL(sub_171C7016); /* 0x171C684C: call 0x171c7016 */
    RECOMP_FLAGS_IN();
    esi = MEM32(esi + 0xC); /* 0x171C6851: mov esi, dword ptr [esi + 0xc] */
L_171C6854:
    edx = MEM32(ebp + 0x8); /* 0x171C6854: mov edx, dword ptr [ebp + 8] */
    eax = esi + 0x10; /* 0x171C6857: lea eax, [esi + 0x10] */
    ecx = MEM32(eax); /* 0x171C685A: mov ecx, dword ptr [eax] */
    MEM32(ecx + 0xC) = edx; /* 0x171C685C: mov dword ptr [ecx + 0xc], edx */
    fp_push(*(double*)ADDR(edi)); /* 0x171C685F: fld qword ptr [edi] */
    ecx = MEM32(eax); /* 0x171C6861: mov ecx, dword ptr [eax] */
    { double _v = fp_pop(); *(double*)ADDR(ecx + 0x10) = _v; } /* 0x171C6863: fstp qword ptr [ecx + 0x10] */
    ecx = MEM32(eax); /* 0x171C6866: mov ecx, dword ptr [eax] */
    fp_push(*(double*)ADDR(edi + 0x8)); /* 0x171C6868: fld qword ptr [edi + 8] */
    { double _v = fp_pop(); *(double*)ADDR(ecx + 0x18) = _v; } /* 0x171C686B: fstp qword ptr [ecx + 0x18] */
    eax = MEM32(eax); /* 0x171C686E: mov eax, dword ptr [eax] */
    fp_push(*(double*)ADDR(edi + 0x10)); /* 0x171C6870: fld qword ptr [edi + 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(eax + 0x20) = _v; } /* 0x171C6873: fstp qword ptr [eax + 0x20] */
    eax = MEM32(esi + 0x4); /* 0x171C6876: mov eax, dword ptr [esi + 4] */
    MEM32(esi + 0x1C) = 1; /* 0x171C6879: mov dword ptr [esi + 0x1c], 1 */
    _flag_a = (uint32_t)((MEM32(eax + 0x1C) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(eax + 0x1C) | 0xFFFFFFFFu));
    MEM32(eax + 0x1C) = MEM32(eax + 0x1C) | 0xFFFFFFFFu; /* 0x171C6880: or dword ptr [eax + 0x1c], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0x4) = esi; /* 0x171C6884: mov dword ptr [ebx + 4], esi */
    esi = POP32_VAL(esp); /* 0x171C6887: pop esi */
    ebp = POP32_VAL(esp); /* 0x171C6888: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171C6889: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171C6891(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C6891u);

L_171C6891:
    edi = edi; /* 0x171C6891: mov edi, edi */
    PUSH32(esp, ebx); /* 0x171C6893: push ebx */
    PUSH32(esp, esi); /* 0x171C6894: push esi */
    ebx = eax; /* 0x171C6895: mov ebx, eax */
    PUSH32(esp, edi); /* 0x171C6897: push edi */
    edi = ebx + 0xA0; /* 0x171C6898: lea edi, [ebx + 0xa0] */
    RECOMP_CALL(sub_171C71A1); /* 0x171C689E: call 0x171c71a1 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebx + 0x98); /* 0x171C68A3: mov esi, dword ptr [ebx + 0x98] */
    if (5u) _cf = (((esi) >> 27) & 1u); /* 0x171C68A9: shl esi, 5 */
    if (5u) { _flag_a = recomp_flags_pack((esi << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 5u; /* 0x171C68A9: shl esi, 5 */
    MEM32(ebx + 0x8) = eax; /* 0x171C68AC: mov dword ptr [ebx + 8], eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edi; /* 0x171C68AF: add esi, edi */
    _flag_k = FK_ADD;
    goto L_171C68BE; /* 0x171C68B1: jmp 0x171c68be */
L_171C68B3:
    PUSH32(esp, MEM32(edi + 0x18)); /* 0x171C68B3: push dword ptr [edi + 0x18] */
    RECOMP_CALL(sub_171C6829); /* 0x171C68B6: call 0x171c6829 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x20u; /* 0x171C68BB: add edi, 0x20 */
    _flag_k = FK_ADD;
L_171C68BE:
    /* cmp edi, esi */ /* 0x171C68BE: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171C68B3; /* 0x171C68C0: jb 0x171c68b3 */
L_171C68C2:
    _flag_a = (uint32_t)(MEM32(ebx + 0x98)); _flag_b = (uint32_t)(0);
    MEM32(ebx + 0x98) = MEM32(ebx + 0x98) & 0; /* 0x171C68C2: and dword ptr [ebx + 0x98], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x171C68C9: pop edi */
    esi = POP32_VAL(esp); /* 0x171C68CA: pop esi */
    MEM8(ebx + 0x94) = (uint8_t)(0); /* 0x171C68CB: mov byte ptr [ebx + 0x94], 0 */
    ebx = POP32_VAL(esp); /* 0x171C68D2: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171C68D3: ret  */
    RECOMP_REGS_OUT();
}

void sub_171C68D9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C68D9u);

L_171C68D9:
    edi = edi; /* 0x171C68D9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C68DB: push ebp */
    ebp = esp; /* 0x171C68DC: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171C68DE: push ebx */
    PUSH32(esp, esi); /* 0x171C68DF: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171C68E0: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171C68E3: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi), ebx */ /* 0x171C68E5: cmp dword ptr [esi], ebx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C68F0; /* 0x171C68E7: je 0x171c68f0 */
L_171C68E9:
    PUSH32(esp, ebx); /* 0x171C68E9: push ebx */
    PUSH32(esp, esi); /* 0x171C68EA: push esi */
    RECOMP_CALL(sub_171C6953); /* 0x171C68EB: call 0x171c6953 */
    RECOMP_FLAGS_IN();
L_171C68F0:
    eax = MEM32(ebp + 0xC); /* 0x171C68F0: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x98) = ebx; /* 0x171C68F3: mov dword ptr [esi + 0x98], ebx */
    MEM8(esi + 0x94) = (uint8_t)(LO8(ebx)); /* 0x171C68F9: mov byte ptr [esi + 0x94], bl */
    MEM32(esi + 0x8) = ebx; /* 0x171C68FF: mov dword ptr [esi + 8], ebx */
    MEM32(esi) = 1; /* 0x171C6902: mov dword ptr [esi], 1 */
    MEM32(esi + 0xD38) = eax; /* 0x171C6908: mov dword ptr [esi + 0xd38], eax */
    esi = POP32_VAL(esp); /* 0x171C690E: pop esi */
    ebx = POP32_VAL(esp); /* 0x171C690F: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171C6910: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171C6911: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171C6919(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C6919u);

L_171C6919:
    edi = edi; /* 0x171C6919: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C691B: push ebp */
    ebp = esp; /* 0x171C691C: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171C691E: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171C691F: mov esi, dword ptr [ebp + 8] */
    /* cmp MEM32(esi), 1 */ /* 0x171C6922: cmp dword ptr [esi], 1 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C692F; /* 0x171C6925: je 0x171c692f */
L_171C6927:
    PUSH32(esp, 1); /* 0x171C6927: push 1 */
    PUSH32(esp, esi); /* 0x171C6929: push esi */
    RECOMP_CALL(sub_171C6953); /* 0x171C692A: call 0x171c6953 */
    RECOMP_FLAGS_IN();
L_171C692F:
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) & 0; /* 0x171C692F: and dword ptr [esi + 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x98), 0 */ /* 0x171C6933: cmp dword ptr [esi + 0x98], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x98)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi) = 2; /* 0x171C693A: mov dword ptr [esi], 2 */
    if (CMP_LE(_flag_a, _flag_b)) goto L_171C6949; /* 0x171C6940: jle 0x171c6949 */
L_171C6942:
    MEM8(esi + 0x94) = (uint8_t)(1); /* 0x171C6942: mov byte ptr [esi + 0x94], 1 */
L_171C6949:
    esi = POP32_VAL(esp); /* 0x171C6949: pop esi */
    ebp = POP32_VAL(esp); /* 0x171C694A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171C694B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171C6953(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C6953u);

L_171C6953:
    edi = edi; /* 0x171C6953: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C6955: push ebp */
    ebp = esp; /* 0x171C6956: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x171C6958: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x171C695B: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171C695C: mov esi, dword ptr [ebp + 8] */
    /* cmp MEM32(esi), ecx */ /* 0x171C695F: cmp dword ptr [esi], ecx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C6A55; /* 0x171C6961: je 0x171c6a55 */
L_171C6967:
    PUSH32(esp, ebx); /* 0x171C6967: push ebx */
    PUSH32(esp, edi); /* 0x171C6968: push edi */
    edi = 0x171C6490u; /* 0x171C6969: mov edi, 0x171c6490 */
    ebx = 0x00018739u; /* 0x171C696E: mov ebx, 0x18739 */
L_171C6973:
    eax = MEM32(esi); /* 0x171C6973: mov eax, dword ptr [esi] */
    /* cmp eax, ecx */ /* 0x171C6975: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171C69DC; /* 0x171C6977: jae 0x171c69dc */
L_171C6979:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x171C6979: sub eax, 0 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_171C69B1; /* 0x171C697C: je 0x171c69b1 */
L_171C697E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171C697E: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171C6A48; /* 0x171C697F: jne 0x171c6a48 */
L_171C6985:
    eax = MEM32(esi + 0xD30); /* 0x171C6985: mov eax, dword ptr [esi + 0xd30] */
    /* cmp eax, edi */ /* 0x171C698B: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C699E; /* 0x171C698D: je 0x171c699e */
L_171C698F:
    PUSH32(esp, MEM32(esi + 0xD38)); /* 0x171C698F: push dword ptr [esi + 0xd38] */
    PUSH32(esp, 0x00018738u); /* 0x171C6995: push 0x18738 */
    RECOMP_ICALL(eax); /* 0x171C699A: call eax */
    RECOMP_FLAGS_IN();
    goto L_171C69A6; /* 0x171C699C: jmp 0x171c69a6 */
L_171C699E:
    PUSH32(esp, 0x00018738u); /* 0x171C699E: push 0x18738 */
    RECOMP_ICALL(MEM32(esi + 0xC)); /* 0x171C69A3: call dword ptr [esi + 0xc] */
    RECOMP_FLAGS_IN();
L_171C69A6:
    PUSH32(esp, esi); /* 0x171C69A6: push esi */
    RECOMP_CALL(sub_171C6919); /* 0x171C69A7: call 0x171c6919 */
    RECOMP_FLAGS_IN();
    goto L_171C6A48; /* 0x171C69AC: jmp 0x171c6a48 */
L_171C69B1:
    eax = MEM32(esi + 0xD30); /* 0x171C69B1: mov eax, dword ptr [esi + 0xd30] */
    /* cmp eax, edi */ /* 0x171C69B7: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C69CA; /* 0x171C69B9: je 0x171c69ca */
L_171C69BB:
    PUSH32(esp, MEM32(esi + 0xD38)); /* 0x171C69BB: push dword ptr [esi + 0xd38] */
    PUSH32(esp, 0x00018737u); /* 0x171C69C1: push 0x18737 */
    RECOMP_ICALL(eax); /* 0x171C69C6: call eax */
    RECOMP_FLAGS_IN();
    goto L_171C69D2; /* 0x171C69C8: jmp 0x171c69d2 */
L_171C69CA:
    PUSH32(esp, 0x00018737u); /* 0x171C69CA: push 0x18737 */
    RECOMP_ICALL(MEM32(esi + 0xC)); /* 0x171C69CF: call dword ptr [esi + 0xc] */
    RECOMP_FLAGS_IN();
L_171C69D2:
    PUSH32(esp, 0); /* 0x171C69D2: push 0 */
    PUSH32(esp, esi); /* 0x171C69D4: push esi */
    RECOMP_CALL(sub_171C68D9); /* 0x171C69D5: call 0x171c68d9 */
    RECOMP_FLAGS_IN();
    goto L_171C6A48; /* 0x171C69DA: jmp 0x171c6a48 */
L_171C69DC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171C69DC: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_171C6A18; /* 0x171C69DD: je 0x171c6a18 */
L_171C69DF:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171C69DF: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171C6A48; /* 0x171C69E0: jne 0x171c6a48 */
L_171C69E2:
    eax = MEM32(esi + 0xD30); /* 0x171C69E2: mov eax, dword ptr [esi + 0xd30] */
    /* cmp eax, edi */ /* 0x171C69E8: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C69FB; /* 0x171C69EA: je 0x171c69fb */
L_171C69EC:
    PUSH32(esp, MEM32(esi + 0xD38)); /* 0x171C69EC: push dword ptr [esi + 0xd38] */
    PUSH32(esp, 0x0001873Au); /* 0x171C69F2: push 0x1873a */
    RECOMP_ICALL(eax); /* 0x171C69F7: call eax */
    RECOMP_FLAGS_IN();
    goto L_171C6A03; /* 0x171C69F9: jmp 0x171c6a03 */
L_171C69FB:
    PUSH32(esp, 0x0001873Au); /* 0x171C69FB: push 0x1873a */
    RECOMP_ICALL(MEM32(esi + 0xC)); /* 0x171C6A00: call dword ptr [esi + 0xc] */
    RECOMP_FLAGS_IN();
L_171C6A03:
    /* cmp MEM32(esi), 2 */ /* 0x171C6A03: cmp dword ptr [esi], 2 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C6A10; /* 0x171C6A06: je 0x171c6a10 */
L_171C6A08:
    PUSH32(esp, 2); /* 0x171C6A08: push 2 */
    PUSH32(esp, esi); /* 0x171C6A0A: push esi */
    RECOMP_CALL(sub_171C6953); /* 0x171C6A0B: call 0x171c6953 */
    RECOMP_FLAGS_IN();
L_171C6A10:
    MEM32(esi) = 1; /* 0x171C6A10: mov dword ptr [esi], 1 */
    goto L_171C6A48; /* 0x171C6A16: jmp 0x171c6a48 */
L_171C6A18:
    eax = MEM32(esi + 0xD30); /* 0x171C6A18: mov eax, dword ptr [esi + 0xd30] */
    /* cmp eax, edi */ /* 0x171C6A1E: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C6A2D; /* 0x171C6A20: je 0x171c6a2d */
L_171C6A22:
    PUSH32(esp, MEM32(esi + 0xD38)); /* 0x171C6A22: push dword ptr [esi + 0xd38] */
    PUSH32(esp, ebx); /* 0x171C6A28: push ebx */
    RECOMP_ICALL(eax); /* 0x171C6A29: call eax */
    RECOMP_FLAGS_IN();
    goto L_171C6A31; /* 0x171C6A2B: jmp 0x171c6a31 */
L_171C6A2D:
    PUSH32(esp, ebx); /* 0x171C6A2D: push ebx */
    RECOMP_ICALL(MEM32(esi + 0xC)); /* 0x171C6A2E: call dword ptr [esi + 0xc] */
    RECOMP_FLAGS_IN();
L_171C6A31:
    eax = MEM32(esi + 0x8); /* 0x171C6A31: mov eax, dword ptr [esi + 8] */
    /* test eax, eax */ /* 0x171C6A34: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171C6A3E; /* 0x171C6A36: je 0x171c6a3e */
L_171C6A38:
    PUSH32(esp, eax); /* 0x171C6A38: push eax */
    RECOMP_CALL(sub_171C7218); /* 0x171C6A39: call 0x171c7218 */
    RECOMP_FLAGS_IN();
L_171C6A3E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171C6A3E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = eax; /* 0x171C6A40: mov dword ptr [esi], eax */
    MEM32(esi + 0x4) = eax; /* 0x171C6A42: mov dword ptr [esi + 4], eax */
    MEM32(esi + 0x8) = eax; /* 0x171C6A45: mov dword ptr [esi + 8], eax */
L_171C6A48:
    ecx = MEM32(ebp + 0xC); /* 0x171C6A48: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp MEM32(esi), ecx */ /* 0x171C6A4B: cmp dword ptr [esi], ecx */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C6973; /* 0x171C6A4D: jne 0x171c6973 */
L_171C6A53:
    edi = POP32_VAL(esp); /* 0x171C6A53: pop edi */
    ebx = POP32_VAL(esp); /* 0x171C6A54: pop ebx */
L_171C6A55:
    esi = POP32_VAL(esp); /* 0x171C6A55: pop esi */
    ebp = POP32_VAL(esp); /* 0x171C6A56: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171C6A57: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171C6A5F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C6A5Fu);

L_171C6A5F:
    edi = edi; /* 0x171C6A5F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C6A61: push ebp */
    ebp = esp; /* 0x171C6A62: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171C6A64: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171C6A65: mov esi, dword ptr [ebp + 8] */
    /* cmp MEM32(esi), 0 */ /* 0x171C6A68: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C6A75; /* 0x171C6A6B: je 0x171c6a75 */
L_171C6A6D:
    PUSH32(esp, 0); /* 0x171C6A6D: push 0 */
    PUSH32(esp, esi); /* 0x171C6A6F: push esi */
    RECOMP_CALL(sub_171C6953); /* 0x171C6A70: call 0x171c6953 */
    RECOMP_FLAGS_IN();
L_171C6A75:
    PUSH32(esp, esi); /* 0x171C6A75: push esi */
    RECOMP_CALL(sub_1721B224); /* 0x171C6A76: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171C6A7B: pop ecx */
    esi = POP32_VAL(esp); /* 0x171C6A7C: pop esi */
    ebp = POP32_VAL(esp); /* 0x171C6A7D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171C6A7E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171C6A86(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C6A86u);

L_171C6A86:
    edi = edi; /* 0x171C6A86: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C6A88: push ebp */
    ebp = esp; /* 0x171C6A89: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x171C6A8B: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x171C6A8E: push ebx */
    PUSH32(esp, esi); /* 0x171C6A8F: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171C6A90: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x171C6A93: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171C6A94: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171C6A96: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi), 2 */ /* 0x171C6A98: cmp dword ptr [esi], 2 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C6AA5; /* 0x171C6A9B: je 0x171c6aa5 */
L_171C6A9D:
    PUSH32(esp, 2); /* 0x171C6A9D: push 2 */
    PUSH32(esp, esi); /* 0x171C6A9F: push esi */
    RECOMP_CALL(sub_171C6953); /* 0x171C6AA0: call 0x171c6953 */
    RECOMP_FLAGS_IN();
L_171C6AA5:
    /* cmp MEM8(esi + 0x94), LO8(ebx) */ /* 0x171C6AA5: cmp byte ptr [esi + 0x94], bl */
    _flag_a = (uint32_t)(MEM8(esi + 0x94)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C6AB7; /* 0x171C6AAB: je 0x171c6ab7 */
L_171C6AAD:
    eax = esi; /* 0x171C6AAD: mov eax, esi */
    RECOMP_CALL(sub_171C6891); /* 0x171C6AAF: call 0x171c6891 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x4) = ebx; /* 0x171C6AB4: mov dword ptr [esi + 4], ebx */
L_171C6AB7:
    ecx = MEM32(ebp + 0xC); /* 0x171C6AB7: mov ecx, dword ptr [ebp + 0xc] */
    fp_push(*(double*)ADDR(0x17025D18)); /* 0x171C6ABA: fld qword ptr [0x17025d18] */
    fp_push(*(double*)ADDR(0x17025D10)); /* 0x171C6AC0: fld qword ptr [0x17025d10] */
    eax = ebp + (-0x18); /* 0x171C6AC6: lea eax, [ebp - 0x18] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171C6AC9: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x171C6ACB: sub ecx, eax */
    _flag_k = FK_CMP;
L_171C6ACD:
    eax = ecx + edx * 8; /* 0x171C6ACD: lea eax, [ecx + edx*8] */
    fp_push(*(double*)ADDR(ebp + eax + (-0x18))); /* 0x171C6AD0: fld qword ptr [ebp + eax - 0x18] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x171C6AD4: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C6AD6: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171C6AD8: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C6AE4; /* 0x171C6ADB: jp 0x171c6ae4 */
L_171C6ADD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171C6ADD: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171C6ADF: fstp st(0) */
    fp_push(_st[1]); /* 0x171C6AE1: fld st(1) */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171C6AE3: inc edi */
    _flag_k = FK_INC;
L_171C6AE4:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C6AE4: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C6AE6: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171C6AE8: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C6AF4; /* 0x171C6AEB: jne 0x171c6af4 */
L_171C6AED:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171C6AED: fstp st(0) */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171C6AEF: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(_st[0]); /* 0x171C6AF1: fld st(0) */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x171C6AF3: inc edi */
    _flag_k = FK_INC;
L_171C6AF4:
    { double _v = fp_pop(); *(double*)ADDR(ebp + edx * 8 + (-0x18)) = _v; } /* 0x171C6AF4: fstp qword ptr [ebp + edx*8 - 0x18] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x171C6AF8: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, 3 */ /* 0x171C6AF9: cmp edx, 3 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_171C6ACD; /* 0x171C6AFC: jl 0x171c6acd */
L_171C6AFE:
    /* cmp edi, ebx */ /* 0x171C6AFE: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171C6B00: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171C6B02: fstp st(0) */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C6B2A; /* 0x171C6B04: je 0x171c6b2a */
L_171C6B06:
    eax = MEM32(esi + 0xD30); /* 0x171C6B06: mov eax, dword ptr [esi + 0xd30] */
    /* cmp eax, 0x171C6490u */ /* 0x171C6B0C: cmp eax, 0x171c6490 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x171C6490u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C6B22; /* 0x171C6B11: je 0x171c6b22 */
L_171C6B13:
    PUSH32(esp, MEM32(esi + 0xD38)); /* 0x171C6B13: push dword ptr [esi + 0xd38] */
    PUSH32(esp, 0x0001873Bu); /* 0x171C6B19: push 0x1873b */
    RECOMP_ICALL(eax); /* 0x171C6B1E: call eax */
    RECOMP_FLAGS_IN();
    goto L_171C6B2A; /* 0x171C6B20: jmp 0x171c6b2a */
L_171C6B22:
    PUSH32(esp, 0x0001873Bu); /* 0x171C6B22: push 0x1873b */
    RECOMP_ICALL(MEM32(esi + 0xC)); /* 0x171C6B27: call dword ptr [esi + 0xc] */
    RECOMP_FLAGS_IN();
L_171C6B2A:
    /* cmp MEM32(esi + 0x8), ebx */ /* 0x171C6B2A: cmp dword ptr [esi + 8], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C6B68; /* 0x171C6B2D: jne 0x171c6b68 */
L_171C6B2F:
    eax = MEM32(esi + 0x98); /* 0x171C6B2F: mov eax, dword ptr [esi + 0x98] */
    /* cmp eax, 0x64u */ /* 0x171C6B35: cmp eax, 0x64 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_171C6B61; /* 0x171C6B38: jge 0x171c6b61 */
L_171C6B3A:
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x171C6B3A: fld qword ptr [ebp - 0x18] */
    ecx = MEM32(ebp + 0x10); /* 0x171C6B3D: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 5; /* 0x171C6B40: add eax, 5 */
    _flag_k = FK_ADD;
    if (5u) _cf = (((eax) >> 27) & 1u); /* 0x171C6B43: shl eax, 5 */
    if (5u) { _flag_a = recomp_flags_pack((eax << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 5u; /* 0x171C6B43: shl eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x171C6B46: add eax, esi */
    _flag_k = FK_ADD;
    { double _v = fp_pop(); *(double*)ADDR(eax) = _v; } /* 0x171C6B48: fstp qword ptr [eax] */
    MEM32(eax + 0x18) = ecx; /* 0x171C6B4A: mov dword ptr [eax + 0x18], ecx */
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x171C6B4D: fld qword ptr [ebp - 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(eax + 0x8) = _v; } /* 0x171C6B50: fstp qword ptr [eax + 8] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x171C6B53: fld qword ptr [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(eax + 0x10) = _v; } /* 0x171C6B56: fstp qword ptr [eax + 0x10] */
    _flag_a = (uint32_t)(MEM32(esi + 0x98)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x98) = MEM32(esi + 0x98) + 1; /* 0x171C6B59: inc dword ptr [esi + 0x98] */
    _flag_k = FK_INC;
    goto L_171C6B75; /* 0x171C6B5F: jmp 0x171c6b75 */
L_171C6B61:
    eax = esi; /* 0x171C6B61: mov eax, esi */
    RECOMP_CALL(sub_171C6891); /* 0x171C6B63: call 0x171c6891 */
    RECOMP_FLAGS_IN();
L_171C6B68:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x171C6B68: push dword ptr [ebp + 0x10] */
    edi = ebp + (-0x18); /* 0x171C6B6B: lea edi, [ebp - 0x18] */
    ebx = esi; /* 0x171C6B6E: mov ebx, esi */
    RECOMP_CALL(sub_171C6829); /* 0x171C6B70: call 0x171c6829 */
    RECOMP_FLAGS_IN();
L_171C6B75:
    edi = POP32_VAL(esp); /* 0x171C6B75: pop edi */
    esi = POP32_VAL(esp); /* 0x171C6B76: pop esi */
    ebx = POP32_VAL(esp); /* 0x171C6B77: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171C6B78: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171C6B79: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171C6B81(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C6B81u);

L_171C6B81:
    edi = edi; /* 0x171C6B81: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C6B83: push ebp */
    ebp = esp; /* 0x171C6B84: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171C6B86: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171C6B87: mov esi, dword ptr [ebp + 8] */
    /* cmp MEM32(esi), 2 */ /* 0x171C6B8A: cmp dword ptr [esi], 2 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C6B97; /* 0x171C6B8D: je 0x171c6b97 */
L_171C6B8F:
    PUSH32(esp, 2); /* 0x171C6B8F: push 2 */
    PUSH32(esp, esi); /* 0x171C6B91: push esi */
    RECOMP_CALL(sub_171C6953); /* 0x171C6B92: call 0x171c6953 */
    RECOMP_FLAGS_IN();
L_171C6B97:
    MEM32(esi) = 1; /* 0x171C6B97: mov dword ptr [esi], 1 */
    esi = POP32_VAL(esp); /* 0x171C6B9D: pop esi */
    ebp = POP32_VAL(esp); /* 0x171C6B9E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171C6B9F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171C6BA7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C6BA7u);

L_171C6BA7:
    edi = edi; /* 0x171C6BA7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C6BA9: push ebp */
    ebp = esp; /* 0x171C6BAA: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171C6BAC: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171C6BAD: mov esi, dword ptr [ebp + 8] */
    /* cmp MEM32(esi), 1 */ /* 0x171C6BB0: cmp dword ptr [esi], 1 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x171C6BB3: push edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C6BBE; /* 0x171C6BB4: je 0x171c6bbe */
L_171C6BB6:
    PUSH32(esp, 1); /* 0x171C6BB6: push 1 */
    PUSH32(esp, esi); /* 0x171C6BB8: push esi */
    RECOMP_CALL(sub_171C6953); /* 0x171C6BB9: call 0x171c6953 */
    RECOMP_FLAGS_IN();
L_171C6BBE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171C6BBE: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x8), edi */ /* 0x171C6BC0: cmp dword ptr [esi + 8], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(esi) = edi; /* 0x171C6BC3: mov dword ptr [esi], edi */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C6BF5; /* 0x171C6BC5: jne 0x171c6bf5 */
L_171C6BC7:
    /* cmp MEM8(esi + 0x78), 0 */ /* 0x171C6BC7: cmp byte ptr [esi + 0x78], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x78)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C6BEE; /* 0x171C6BCB: jne 0x171c6bee */
L_171C6BCD:
    /* cmp MEM32(esi + 0x90), 0x170D023Cu */ /* 0x171C6BCD: cmp dword ptr [esi + 0x90], 0x170d023c */
    _flag_a = (uint32_t)(MEM32(esi + 0x90)); _flag_b = (uint32_t)(0x170D023Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C6BEE; /* 0x171C6BD7: jne 0x171c6bee */
L_171C6BD9:
    PUSH32(esp, esi); /* 0x171C6BD9: push esi */
    RECOMP_CALL(sub_171C7A0D); /* 0x171C6BDA: call 0x171c7a0d */
    RECOMP_FLAGS_IN();
    /* test LO8(eax), LO8(eax) */ /* 0x171C6BDF: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171C6BEE; /* 0x171C6BE1: je 0x171c6bee */
L_171C6BE3:
    MEM32(esi + 0xD38) = edi; /* 0x171C6BE3: mov dword ptr [esi + 0xd38], edi */
    goto L_171C6CD1; /* 0x171C6BE9: jmp 0x171c6cd1 */
L_171C6BEE:
    eax = esi; /* 0x171C6BEE: mov eax, esi */
    RECOMP_CALL(sub_171C6891); /* 0x171C6BF0: call 0x171c6891 */
    RECOMP_FLAGS_IN();
L_171C6BF5:
    PUSH32(esp, ebx); /* 0x171C6BF5: push ebx */
    PUSH32(esp, esi); /* 0x171C6BF6: push esi */
    RECOMP_CALL(sub_171C9674); /* 0x171C6BF7: call 0x171c9674 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x171C6BFC: push esi */
    RECOMP_CALL(sub_171C9257); /* 0x171C6BFD: call 0x171c9257 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(esi + 0x64), 0 */ /* 0x171C6C02: cmp byte ptr [esi + 0x64], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x64)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    ebx = MEM32(esi + 0x8); /* 0x171C6C06: mov ebx, dword ptr [esi + 8] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C6CC1; /* 0x171C6C09: jne 0x171c6cc1 */
L_171C6C0F:
    /* cmp MEM8(esi + 0x79), 0 */ /* 0x171C6C0F: cmp byte ptr [esi + 0x79], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x79)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C6C21; /* 0x171C6C13: je 0x171c6c21 */
L_171C6C15:
    PUSH32(esp, 1); /* 0x171C6C15: push 1 */
    PUSH32(esp, 1); /* 0x171C6C17: push 1 */
    PUSH32(esp, ebx); /* 0x171C6C19: push ebx */
    RECOMP_CALL(sub_171C74F5); /* 0x171C6C1A: call 0x171c74f5 */
    RECOMP_FLAGS_IN();
    goto L_171C6C27; /* 0x171C6C1F: jmp 0x171c6c27 */
L_171C6C21:
    PUSH32(esp, ebx); /* 0x171C6C21: push ebx */
    RECOMP_CALL(sub_171C7491); /* 0x171C6C22: call 0x171c7491 */
    RECOMP_FLAGS_IN();
L_171C6C27:
    /* cmp MEM32(esi + 0x80), 0x170D023Cu */ /* 0x171C6C27: cmp dword ptr [esi + 0x80], 0x170d023c */
    _flag_a = (uint32_t)(MEM32(esi + 0x80)); _flag_b = (uint32_t)(0x170D023Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C6C87; /* 0x171C6C31: jne 0x171c6c87 */
L_171C6C33:
    /* cmp MEM32(esi + 0x8C), 0x17129E95u */ /* 0x171C6C33: cmp dword ptr [esi + 0x8c], 0x17129e95 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8C)); _flag_b = (uint32_t)(0x17129E95u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C6C87; /* 0x171C6C3D: jne 0x171c6c87 */
L_171C6C3F:
    /* cmp MEM32(esi + 0x88), 0x170D023Cu */ /* 0x171C6C3F: cmp dword ptr [esi + 0x88], 0x170d023c */
    _flag_a = (uint32_t)(MEM32(esi + 0x88)); _flag_b = (uint32_t)(0x170D023Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C6C87; /* 0x171C6C49: jne 0x171c6c87 */
L_171C6C4B:
    /* cmp MEM32(esi + 0x84), 0x170D023Cu */ /* 0x171C6C4B: cmp dword ptr [esi + 0x84], 0x170d023c */
    _flag_a = (uint32_t)(MEM32(esi + 0x84)); _flag_b = (uint32_t)(0x170D023Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C6C87; /* 0x171C6C55: jne 0x171c6c87 */
L_171C6C57:
    /* cmp MEM32(esi + 0xD20), 0x171C6490u */ /* 0x171C6C57: cmp dword ptr [esi + 0xd20], 0x171c6490 */
    _flag_a = (uint32_t)(MEM32(esi + 0xD20)); _flag_b = (uint32_t)(0x171C6490u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C6C87; /* 0x171C6C61: jne 0x171c6c87 */
L_171C6C63:
    /* cmp MEM32(esi + 0xD2C), 0x170D023Cu */ /* 0x171C6C63: cmp dword ptr [esi + 0xd2c], 0x170d023c */
    _flag_a = (uint32_t)(MEM32(esi + 0xD2C)); _flag_b = (uint32_t)(0x170D023Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C6C87; /* 0x171C6C6D: jne 0x171c6c87 */
L_171C6C6F:
    /* cmp MEM32(esi + 0xD28), 0x171C6490u */ /* 0x171C6C6F: cmp dword ptr [esi + 0xd28], 0x171c6490 */
    _flag_a = (uint32_t)(MEM32(esi + 0xD28)); _flag_b = (uint32_t)(0x171C6490u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C6C87; /* 0x171C6C79: jne 0x171c6c87 */
L_171C6C7B:
    /* cmp MEM32(esi + 0xD24), 0x171C6490u */ /* 0x171C6C7B: cmp dword ptr [esi + 0xd24], 0x171c6490 */
    _flag_a = (uint32_t)(MEM32(esi + 0xD24)); _flag_b = (uint32_t)(0x171C6490u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C6C9B; /* 0x171C6C85: je 0x171c6c9b */
L_171C6C87:
    /* cmp MEM8(esi + 0x79), 0 */ /* 0x171C6C87: cmp byte ptr [esi + 0x79], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x79)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    PUSH32(esp, ebx); /* 0x171C6C8B: push ebx */
    PUSH32(esp, esi); /* 0x171C6C8C: push esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C6C96; /* 0x171C6C8D: je 0x171c6c96 */
L_171C6C8F:
    RECOMP_CALL(sub_171C7814); /* 0x171C6C8F: call 0x171c7814 */
    RECOMP_FLAGS_IN();
    goto L_171C6C9B; /* 0x171C6C94: jmp 0x171c6c9b */
L_171C6C96:
    RECOMP_CALL(sub_171C7EB9); /* 0x171C6C96: call 0x171c7eb9 */
    RECOMP_FLAGS_IN();
L_171C6C9B:
    edi = esi + 0x90; /* 0x171C6C9B: lea edi, [esi + 0x90] */
    /* cmp MEM32(edi), 0x170D023Cu */ /* 0x171C6CA1: cmp dword ptr [edi], 0x170d023c */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0x170D023Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C6CBF; /* 0x171C6CA7: je 0x171c6cbf */
L_171C6CA9:
    PUSH32(esp, ebx); /* 0x171C6CA9: push ebx */
    RECOMP_CALL(sub_171C74C3); /* 0x171C6CAA: call 0x171c74c3 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x171C6CAF: push ebx */
    RECOMP_ICALL(MEM32(edi)); /* 0x171C6CB0: call dword ptr [edi] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0; /* 0x171C6CB2: and dword ptr [esi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi + 0xD38)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0xD38) = MEM32(esi + 0xD38) & 0; /* 0x171C6CB6: and dword ptr [esi + 0xd38], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171C6CD0; /* 0x171C6CBD: jmp 0x171c6cd0 */
L_171C6CBF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x171C6CBF: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_171C6CC1:
    PUSH32(esp, ebx); /* 0x171C6CC1: push ebx */
    RECOMP_CALL(sub_171C7218); /* 0x171C6CC2: call 0x171c7218 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0xD38) = edi; /* 0x171C6CC7: mov dword ptr [esi + 0xd38], edi */
    MEM32(esi + 0x8) = edi; /* 0x171C6CCD: mov dword ptr [esi + 8], edi */
L_171C6CD0:
    ebx = POP32_VAL(esp); /* 0x171C6CD0: pop ebx */
L_171C6CD1:
    edi = POP32_VAL(esp); /* 0x171C6CD1: pop edi */
    esi = POP32_VAL(esp); /* 0x171C6CD2: pop esi */
    ebp = POP32_VAL(esp); /* 0x171C6CD3: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171C6CD4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171C6CDC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C6CDCu);

L_171C6CDC:
    edi = edi; /* 0x171C6CDC: mov edi, edi */
    PUSH32(esp, esi); /* 0x171C6CDE: push esi */
    PUSH32(esp, 0x40u); /* 0x171C6CDF: push 0x40 */
    esi = eax; /* 0x171C6CE1: mov esi, eax */
    RECOMP_CALL(sub_1721B254); /* 0x171C6CE3: call 0x1721b254 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi + 0x4); /* 0x171C6CE8: mov edx, dword ptr [esi + 4] */
    /* cmp edx, esi */ /* 0x171C6CEB: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x171C6CED: pop ecx */
    ecx = eax + 0x20; /* 0x171C6CEE: lea ecx, [eax + 0x20] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_171C6CF5; /* 0x171C6CF1: jae 0x171c6cf5 */
L_171C6CF3:
    esi = edx; /* 0x171C6CF3: mov esi, edx */
L_171C6CF5:
    edx = MEM32(esi + 0x4); /* 0x171C6CF5: mov edx, dword ptr [esi + 4] */
    edx = MEM32(edx); /* 0x171C6CF8: mov edx, dword ptr [edx] */
    MEM32(ecx) = edx; /* 0x171C6CFA: mov dword ptr [ecx], edx */
    edx = MEM32(edx + 0x4); /* 0x171C6CFC: mov edx, dword ptr [edx + 4] */
    MEM32(edx) = eax; /* 0x171C6CFF: mov dword ptr [edx], eax */
    MEM32(eax) = esi; /* 0x171C6D01: mov dword ptr [eax], esi */
    edx = MEM32(esi + 0x4); /* 0x171C6D03: mov edx, dword ptr [esi + 4] */
    MEM32(edx) = ecx; /* 0x171C6D06: mov dword ptr [edx], ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171C6D08: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x4) = ecx; /* 0x171C6D0A: mov dword ptr [eax + 4], ecx */
    MEM32(eax + 0x8) = eax; /* 0x171C6D0D: mov dword ptr [eax + 8], eax */
    MEM32(eax + 0xC) = ecx; /* 0x171C6D10: mov dword ptr [eax + 0xc], ecx */
    MEM32(eax + 0x10) = edx; /* 0x171C6D13: mov dword ptr [eax + 0x10], edx */
    MEM32(eax + 0x14) = edx; /* 0x171C6D16: mov dword ptr [eax + 0x14], edx */
    MEM32(eax + 0x1C) = edx; /* 0x171C6D19: mov dword ptr [eax + 0x1c], edx */
    MEM32(eax + 0x18) = edx; /* 0x171C6D1C: mov dword ptr [eax + 0x18], edx */
    MEM32(ecx + 0x4) = eax; /* 0x171C6D1F: mov dword ptr [ecx + 4], eax */
    MEM32(ecx + 0x8) = ecx; /* 0x171C6D22: mov dword ptr [ecx + 8], ecx */
    MEM32(ecx + 0xC) = eax; /* 0x171C6D25: mov dword ptr [ecx + 0xc], eax */
    MEM32(ecx + 0x10) = edx; /* 0x171C6D28: mov dword ptr [ecx + 0x10], edx */
    MEM32(ecx + 0x14) = edx; /* 0x171C6D2B: mov dword ptr [ecx + 0x14], edx */
    MEM32(ecx + 0x1C) = edx; /* 0x171C6D2E: mov dword ptr [ecx + 0x1c], edx */
    MEM32(ecx + 0x18) = edx; /* 0x171C6D31: mov dword ptr [ecx + 0x18], edx */
    esi = POP32_VAL(esp); /* 0x171C6D34: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171C6D35: ret  */
    RECOMP_REGS_OUT();
}

void sub_171C6D3B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C6D3Bu);

L_171C6D3B:
    edx = MEM32(ecx + 0x8); /* 0x171C6D3B: mov edx, dword ptr [ecx + 8] */
    PUSH32(esp, esi); /* 0x171C6D3E: push esi */
    esi = MEM32(eax + 0x8); /* 0x171C6D3F: mov esi, dword ptr [eax + 8] */
    PUSH32(esp, edi); /* 0x171C6D42: push edi */
    edi = MEM32(edx + 0x4); /* 0x171C6D43: mov edi, dword ptr [edx + 4] */
    MEM32(edi + 0xC) = eax; /* 0x171C6D46: mov dword ptr [edi + 0xc], eax */
    edi = MEM32(esi + 0x4); /* 0x171C6D49: mov edi, dword ptr [esi + 4] */
    MEM32(edi + 0xC) = ecx; /* 0x171C6D4C: mov dword ptr [edi + 0xc], ecx */
    MEM32(ecx + 0x8) = esi; /* 0x171C6D4F: mov dword ptr [ecx + 8], esi */
    edi = POP32_VAL(esp); /* 0x171C6D52: pop edi */
    MEM32(eax + 0x8) = edx; /* 0x171C6D53: mov dword ptr [eax + 8], edx */
    esi = POP32_VAL(esp); /* 0x171C6D56: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171C6D57: ret  */
    RECOMP_REGS_OUT();
}

void sub_171C6D5D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C6D5Du);

L_171C6D5D:
    PUSH32(esp, 0x40u); /* 0x171C6D5D: push 0x40 */
    RECOMP_CALL(sub_1721B254); /* 0x171C6D5F: call 0x1721b254 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x171C6D64: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171C6D66: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171C6D89; /* 0x171C6D67: je 0x171c6d89 */
L_171C6D69:
    ecx = MEM32(esi + 0x4); /* 0x171C6D69: mov ecx, dword ptr [esi + 4] */
    MEM32(eax + 0x4) = ecx; /* 0x171C6D6C: mov dword ptr [eax + 4], ecx */
    MEM32(ecx) = eax; /* 0x171C6D6F: mov dword ptr [ecx], eax */
    MEM32(eax) = esi; /* 0x171C6D71: mov dword ptr [eax], esi */
    MEM32(esi + 0x4) = eax; /* 0x171C6D73: mov dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0; /* 0x171C6D76: and dword ptr [eax + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + 0x8) = edi; /* 0x171C6D7A: mov dword ptr [eax + 8], edi */
    ecx = edi; /* 0x171C6D7D: mov ecx, edi */
L_171C6D7F:
    MEM32(ecx + 0x10) = eax; /* 0x171C6D7F: mov dword ptr [ecx + 0x10], eax */
    ecx = MEM32(ecx + 0x8); /* 0x171C6D82: mov ecx, dword ptr [ecx + 8] */
    /* cmp ecx, edi */ /* 0x171C6D85: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C6D7F; /* 0x171C6D87: jne 0x171c6d7f */
L_171C6D89:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171C6D89: ret  */
    RECOMP_REGS_OUT();
}

void sub_171C6D8F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C6D8Fu);

L_171C6D8F:
    PUSH32(esp, 0x18u); /* 0x171C6D8F: push 0x18 */
    RECOMP_CALL(sub_1721B254); /* 0x171C6D91: call 0x1721b254 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x171C6D96: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, edx */ /* 0x171C6D98: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x171C6D9A: pop ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C6DC8; /* 0x171C6D9B: je 0x171c6dc8 */
L_171C6D9D:
    ecx = MEM32(esi + 0x4); /* 0x171C6D9D: mov ecx, dword ptr [esi + 4] */
    MEM32(eax + 0x4) = ecx; /* 0x171C6DA0: mov dword ptr [eax + 4], ecx */
    MEM32(ecx) = eax; /* 0x171C6DA3: mov dword ptr [ecx], eax */
    MEM32(eax) = esi; /* 0x171C6DA5: mov dword ptr [eax], esi */
    MEM32(esi + 0x4) = eax; /* 0x171C6DA7: mov dword ptr [esi + 4], eax */
    MEM32(eax + 0x8) = edi; /* 0x171C6DAA: mov dword ptr [eax + 8], edi */
    MEM32(eax + 0xC) = edx; /* 0x171C6DAD: mov dword ptr [eax + 0xc], edx */
    MEM32(eax + 0x10) = edx; /* 0x171C6DB0: mov dword ptr [eax + 0x10], edx */
    MEM8(eax + 0x14) = (uint8_t)(LO8(edx)); /* 0x171C6DB3: mov byte ptr [eax + 0x14], dl */
    SET_LO8(ecx, MEM8(esi + 0x15)); /* 0x171C6DB6: mov cl, byte ptr [esi + 0x15] */
    MEM8(eax + 0x15) = (uint8_t)(LO8(ecx)); /* 0x171C6DB9: mov byte ptr [eax + 0x15], cl */
    ecx = edi; /* 0x171C6DBC: mov ecx, edi */
L_171C6DBE:
    MEM32(ecx + 0x14) = eax; /* 0x171C6DBE: mov dword ptr [ecx + 0x14], eax */
    ecx = MEM32(ecx + 0xC); /* 0x171C6DC1: mov ecx, dword ptr [ecx + 0xc] */
    /* cmp ecx, edi */ /* 0x171C6DC4: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C6DBE; /* 0x171C6DC6: jne 0x171c6dbe */
L_171C6DC8:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171C6DC8: ret  */
    RECOMP_REGS_OUT();
}

void sub_171C6DCE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C6DCEu);

L_171C6DCE:
    ecx = MEM32(eax + 0x4); /* 0x171C6DCE: mov ecx, dword ptr [eax + 4] */
    /* cmp ecx, eax */ /* 0x171C6DD1: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_171C6DD7; /* 0x171C6DD3: jae 0x171c6dd7 */
L_171C6DD5:
    eax = ecx; /* 0x171C6DD5: mov eax, ecx */
L_171C6DD7:
    ecx = MEM32(eax); /* 0x171C6DD7: mov ecx, dword ptr [eax] */
    edx = MEM32(eax + 0x4); /* 0x171C6DD9: mov edx, dword ptr [eax + 4] */
    edx = MEM32(edx); /* 0x171C6DDC: mov edx, dword ptr [edx] */
    PUSH32(esp, esi); /* 0x171C6DDE: push esi */
    esi = MEM32(ecx + 0x4); /* 0x171C6DDF: mov esi, dword ptr [ecx + 4] */
    MEM32(esi) = edx; /* 0x171C6DE2: mov dword ptr [esi], edx */
    edx = MEM32(edx + 0x4); /* 0x171C6DE4: mov edx, dword ptr [edx + 4] */
    PUSH32(esp, eax); /* 0x171C6DE7: push eax */
    MEM32(edx) = ecx; /* 0x171C6DE8: mov dword ptr [edx], ecx */
    RECOMP_CALL(sub_1721B224); /* 0x171C6DEA: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171C6DEF: pop ecx */
    esi = POP32_VAL(esp); /* 0x171C6DF0: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171C6DF1: ret  */
    RECOMP_REGS_OUT();
}

void sub_171C6DF7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C6DF7u);

L_171C6DF7:
    edi = edi; /* 0x171C6DF7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C6DF9: push ebp */
    ebp = esp; /* 0x171C6DFA: mov ebp, esp */
    edx = MEM32(ecx + 0x8); /* 0x171C6DFC: mov edx, dword ptr [ecx + 8] */
    eax = edx; /* 0x171C6DFF: mov eax, edx */
    PUSH32(esp, esi); /* 0x171C6E01: push esi */
L_171C6E02:
    esi = MEM32(ebp + 0x8); /* 0x171C6E02: mov esi, dword ptr [ebp + 8] */
    MEM32(eax + 0x10) = esi; /* 0x171C6E05: mov dword ptr [eax + 0x10], esi */
    eax = MEM32(eax + 0x8); /* 0x171C6E08: mov eax, dword ptr [eax + 8] */
    /* cmp eax, edx */ /* 0x171C6E0B: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C6E02; /* 0x171C6E0D: jne 0x171c6e02 */
L_171C6E0F:
    eax = MEM32(ecx + 0x4); /* 0x171C6E0F: mov eax, dword ptr [ecx + 4] */
    edx = MEM32(ecx); /* 0x171C6E12: mov edx, dword ptr [ecx] */
    MEM32(edx + 0x4) = eax; /* 0x171C6E14: mov dword ptr [edx + 4], eax */
    PUSH32(esp, ecx); /* 0x171C6E17: push ecx */
    MEM32(eax) = edx; /* 0x171C6E18: mov dword ptr [eax], edx */
    RECOMP_CALL(sub_1721B224); /* 0x171C6E1A: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171C6E1F: pop ecx */
    esi = POP32_VAL(esp); /* 0x171C6E20: pop esi */
    ebp = POP32_VAL(esp); /* 0x171C6E21: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171C6E22: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171C6E2A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C6E2Au);

L_171C6E2A:
    edi = edi; /* 0x171C6E2A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C6E2C: push ebp */
    ebp = esp; /* 0x171C6E2D: mov ebp, esp */
    edx = MEM32(ecx + 0x8); /* 0x171C6E2F: mov edx, dword ptr [ecx + 8] */
    eax = edx; /* 0x171C6E32: mov eax, edx */
    PUSH32(esp, esi); /* 0x171C6E34: push esi */
L_171C6E35:
    esi = MEM32(ebp + 0x8); /* 0x171C6E35: mov esi, dword ptr [ebp + 8] */
    MEM32(eax + 0x14) = esi; /* 0x171C6E38: mov dword ptr [eax + 0x14], esi */
    eax = MEM32(eax + 0xC); /* 0x171C6E3B: mov eax, dword ptr [eax + 0xc] */
    /* cmp eax, edx */ /* 0x171C6E3E: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C6E35; /* 0x171C6E40: jne 0x171c6e35 */
L_171C6E42:
    eax = MEM32(ecx + 0x4); /* 0x171C6E42: mov eax, dword ptr [ecx + 4] */
    edx = MEM32(ecx); /* 0x171C6E45: mov edx, dword ptr [ecx] */
    MEM32(edx + 0x4) = eax; /* 0x171C6E47: mov dword ptr [edx + 4], eax */
    PUSH32(esp, ecx); /* 0x171C6E4A: push ecx */
    MEM32(eax) = edx; /* 0x171C6E4B: mov dword ptr [eax], edx */
    RECOMP_CALL(sub_1721B224); /* 0x171C6E4D: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171C6E52: pop ecx */
    esi = POP32_VAL(esp); /* 0x171C6E53: pop esi */
    ebp = POP32_VAL(esp); /* 0x171C6E54: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171C6E55: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171C6E5D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C6E5Du);

L_171C6E5D:
    edi = edi; /* 0x171C6E5D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C6E5F: push ebp */
    ebp = esp; /* 0x171C6E60: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171C6E62: push ebx */
    PUSH32(esp, esi); /* 0x171C6E63: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171C6E64: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x171C6E67: push edi */
    eax = esi + 0x58; /* 0x171C6E68: lea eax, [esi + 0x58] */
    RECOMP_CALL(sub_171C6CDC); /* 0x171C6E6B: call 0x171c6cdc */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x171C6E70: mov ebx, eax */
    edi = ebx; /* 0x171C6E72: mov edi, ebx */
    RECOMP_CALL(sub_171C6D5D); /* 0x171C6E74: call 0x171c6d5d */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebx + 0x4); /* 0x171C6E79: mov edi, dword ptr [ebx + 4] */
    RECOMP_CALL(sub_171C6D5D); /* 0x171C6E7C: call 0x171c6d5d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x40u; /* 0x171C6E81: add esi, 0x40 */
    _flag_k = FK_ADD;
    edi = ebx; /* 0x171C6E84: mov edi, ebx */
    RECOMP_CALL(sub_171C6D8F); /* 0x171C6E86: call 0x171c6d8f */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x171C6E8B: pop edi */
    esi = POP32_VAL(esp); /* 0x171C6E8C: pop esi */
    eax = ebx; /* 0x171C6E8D: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x171C6E8F: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171C6E90: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171C6E91: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171C6E99(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C6E99u);

L_171C6E99:
    edi = edi; /* 0x171C6E99: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C6E9B: push ebp */
    ebp = esp; /* 0x171C6E9C: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171C6E9E: push ecx */
    PUSH32(esp, ecx); /* 0x171C6E9F: push ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x171C6EA0: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x171C6EA4: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x171C6EA8: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x171C6EA9: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x171C6EAC: push edi */
    edi = MEM32(ebp + 0xC); /* 0x171C6EAD: mov edi, dword ptr [ebp + 0xc] */
    /* cmp ebx, edi */ /* 0x171C6EB0: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C6F10; /* 0x171C6EB2: je 0x171c6f10 */
L_171C6EB4:
    ecx = MEM32(edi + 0x10); /* 0x171C6EB4: mov ecx, dword ptr [edi + 0x10] */
    eax = MEM32(ebx + 0x10); /* 0x171C6EB7: mov eax, dword ptr [ebx + 0x10] */
    PUSH32(esp, esi); /* 0x171C6EBA: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171C6EBB: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171C6EBD: inc esi */
    _flag_k = FK_INC;
    /* cmp ecx, eax */ /* 0x171C6EBE: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C6ECB; /* 0x171C6EC0: je 0x171c6ecb */
L_171C6EC2:
    PUSH32(esp, eax); /* 0x171C6EC2: push eax */
    MEM32(ebp + (-0x4)) = esi; /* 0x171C6EC3: mov dword ptr [ebp - 4], esi */
    RECOMP_CALL(sub_171C6DF7); /* 0x171C6EC6: call 0x171c6df7 */
    RECOMP_FLAGS_IN();
L_171C6ECB:
    ecx = MEM32(edi + 0x14); /* 0x171C6ECB: mov ecx, dword ptr [edi + 0x14] */
    eax = MEM32(ebx + 0x14); /* 0x171C6ECE: mov eax, dword ptr [ebx + 0x14] */
    /* cmp ecx, eax */ /* 0x171C6ED1: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C6EDE; /* 0x171C6ED3: je 0x171c6ede */
L_171C6ED5:
    PUSH32(esp, eax); /* 0x171C6ED5: push eax */
    MEM32(ebp + (-0x8)) = esi; /* 0x171C6ED6: mov dword ptr [ebp - 8], esi */
    RECOMP_CALL(sub_171C6E2A); /* 0x171C6ED9: call 0x171c6e2a */
    RECOMP_FLAGS_IN();
L_171C6EDE:
    eax = ebx; /* 0x171C6EDE: mov eax, ebx */
    ecx = edi; /* 0x171C6EE0: mov ecx, edi */
    RECOMP_CALL(sub_171C6D3B); /* 0x171C6EE2: call 0x171c6d3b */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x171C6EE7: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C6EFB; /* 0x171C6EEB: jne 0x171c6efb */
L_171C6EED:
    esi = MEM32(ebx + 0x10); /* 0x171C6EED: mov esi, dword ptr [ebx + 0x10] */
    RECOMP_CALL(sub_171C6D5D); /* 0x171C6EF0: call 0x171c6d5d */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x10); /* 0x171C6EF5: mov eax, dword ptr [ebx + 0x10] */
    MEM32(eax + 0x8) = ebx; /* 0x171C6EF8: mov dword ptr [eax + 8], ebx */
L_171C6EFB:
    /* cmp MEM32(ebp + (-0x8)), 0 */ /* 0x171C6EFB: cmp dword ptr [ebp - 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C6F0F; /* 0x171C6EFF: jne 0x171c6f0f */
L_171C6F01:
    esi = MEM32(ebx + 0x14); /* 0x171C6F01: mov esi, dword ptr [ebx + 0x14] */
    RECOMP_CALL(sub_171C6D8F); /* 0x171C6F04: call 0x171c6d8f */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x14); /* 0x171C6F09: mov eax, dword ptr [ebx + 0x14] */
    MEM32(eax + 0x8) = ebx; /* 0x171C6F0C: mov dword ptr [eax + 8], ebx */
L_171C6F0F:
    esi = POP32_VAL(esp); /* 0x171C6F0F: pop esi */
L_171C6F10:
    edi = POP32_VAL(esp); /* 0x171C6F10: pop edi */
    ebx = POP32_VAL(esp); /* 0x171C6F11: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171C6F12: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171C6F13: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171C6F1B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C6F1Bu);

L_171C6F1B:
    edi = edi; /* 0x171C6F1B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C6F1D: push ebp */
    ebp = esp; /* 0x171C6F1E: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171C6F20: push ebx */
    PUSH32(esp, esi); /* 0x171C6F21: push esi */
    PUSH32(esp, edi); /* 0x171C6F22: push edi */
    edi = MEM32(ebp + 0x8); /* 0x171C6F23: mov edi, dword ptr [ebp + 8] */
    ebx = MEM32(edi + 0x4); /* 0x171C6F26: mov ebx, dword ptr [edi + 4] */
    ecx = MEM32(edi + 0x14); /* 0x171C6F29: mov ecx, dword ptr [edi + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x171C6F2C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp ecx, MEM32(ebx + 0x14) */ /* 0x171C6F2E: cmp ecx, dword ptr [ebx + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C6F3E; /* 0x171C6F31: je 0x171c6f3e */
L_171C6F33:
    eax = ebx; /* 0x171C6F33: mov eax, ebx */
    PUSH32(esp, MEM32(eax + 0x14)); /* 0x171C6F35: push dword ptr [eax + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x171C6F38: inc esi */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_171C6E2A); /* 0x171C6F39: call 0x171c6e2a */
    RECOMP_FLAGS_IN();
L_171C6F3E:
    /* cmp MEM32(edi + 0x8), edi */ /* 0x171C6F3E: cmp dword ptr [edi + 8], edi */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C6F4F; /* 0x171C6F41: jne 0x171c6f4f */
L_171C6F43:
    ecx = MEM32(edi + 0x10); /* 0x171C6F43: mov ecx, dword ptr [edi + 0x10] */
    PUSH32(esp, 0); /* 0x171C6F46: push 0 */
    RECOMP_CALL(sub_171C6DF7); /* 0x171C6F48: call 0x171c6df7 */
    RECOMP_FLAGS_IN();
    goto L_171C6F7D; /* 0x171C6F4D: jmp 0x171c6f7d */
L_171C6F4F:
    eax = MEM32(edi + 0x4); /* 0x171C6F4F: mov eax, dword ptr [edi + 4] */
    ecx = MEM32(eax + 0x14); /* 0x171C6F52: mov ecx, dword ptr [eax + 0x14] */
    eax = MEM32(eax + 0xC); /* 0x171C6F55: mov eax, dword ptr [eax + 0xc] */
    MEM32(ecx + 0x8) = eax; /* 0x171C6F58: mov dword ptr [ecx + 8], eax */
    eax = MEM32(edi + 0x10); /* 0x171C6F5B: mov eax, dword ptr [edi + 0x10] */
    ecx = MEM32(edi + 0x8); /* 0x171C6F5E: mov ecx, dword ptr [edi + 8] */
    MEM32(eax + 0x8) = ecx; /* 0x171C6F61: mov dword ptr [eax + 8], ecx */
    eax = MEM32(edi + 0x4); /* 0x171C6F64: mov eax, dword ptr [edi + 4] */
    eax = MEM32(eax + 0xC); /* 0x171C6F67: mov eax, dword ptr [eax + 0xc] */
    ecx = edi; /* 0x171C6F6A: mov ecx, edi */
    RECOMP_CALL(sub_171C6D3B); /* 0x171C6F6C: call 0x171c6d3b */
    RECOMP_FLAGS_IN();
    /* test esi, esi */ /* 0x171C6F71: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C6F7D; /* 0x171C6F73: jne 0x171c6f7d */
L_171C6F75:
    esi = MEM32(edi + 0x14); /* 0x171C6F75: mov esi, dword ptr [edi + 0x14] */
    RECOMP_CALL(sub_171C6D8F); /* 0x171C6F78: call 0x171c6d8f */
    RECOMP_FLAGS_IN();
L_171C6F7D:
    /* cmp MEM32(ebx + 0x8), ebx */ /* 0x171C6F7D: cmp dword ptr [ebx + 8], ebx */
    _flag_a = (uint32_t)(MEM32(ebx + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C6F98; /* 0x171C6F80: jne 0x171c6f98 */
L_171C6F82:
    ecx = MEM32(ebx + 0x10); /* 0x171C6F82: mov ecx, dword ptr [ebx + 0x10] */
    PUSH32(esp, 0); /* 0x171C6F85: push 0 */
    RECOMP_CALL(sub_171C6DF7); /* 0x171C6F87: call 0x171c6df7 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0x14); /* 0x171C6F8C: mov ecx, dword ptr [ebx + 0x14] */
    PUSH32(esp, 0); /* 0x171C6F8F: push 0 */
    RECOMP_CALL(sub_171C6E2A); /* 0x171C6F91: call 0x171c6e2a */
    RECOMP_FLAGS_IN();
    goto L_171C6FBA; /* 0x171C6F96: jmp 0x171c6fba */
L_171C6F98:
    eax = MEM32(ebx + 0x4); /* 0x171C6F98: mov eax, dword ptr [ebx + 4] */
    eax = MEM32(eax + 0xC); /* 0x171C6F9B: mov eax, dword ptr [eax + 0xc] */
    ecx = MEM32(edi + 0x14); /* 0x171C6F9E: mov ecx, dword ptr [edi + 0x14] */
    MEM32(ecx + 0x8) = eax; /* 0x171C6FA1: mov dword ptr [ecx + 8], eax */
    eax = MEM32(ebx + 0x10); /* 0x171C6FA4: mov eax, dword ptr [ebx + 0x10] */
    ecx = MEM32(ebx + 0x8); /* 0x171C6FA7: mov ecx, dword ptr [ebx + 8] */
    MEM32(eax + 0x8) = ecx; /* 0x171C6FAA: mov dword ptr [eax + 8], ecx */
    eax = MEM32(ebx + 0x4); /* 0x171C6FAD: mov eax, dword ptr [ebx + 4] */
    eax = MEM32(eax + 0xC); /* 0x171C6FB0: mov eax, dword ptr [eax + 0xc] */
    ecx = ebx; /* 0x171C6FB3: mov ecx, ebx */
    RECOMP_CALL(sub_171C6D3B); /* 0x171C6FB5: call 0x171c6d3b */
    RECOMP_FLAGS_IN();
L_171C6FBA:
    eax = edi; /* 0x171C6FBA: mov eax, edi */
    RECOMP_CALL(sub_171C6DCE); /* 0x171C6FBC: call 0x171c6dce */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x171C6FC1: pop edi */
    esi = POP32_VAL(esp); /* 0x171C6FC2: pop esi */
    ebx = POP32_VAL(esp); /* 0x171C6FC3: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171C6FC4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171C6FC5: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171C6FCD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C6FCDu);

L_171C6FCD:
    edi = edi; /* 0x171C6FCD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C6FCF: push ebp */
    ebp = esp; /* 0x171C6FD0: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171C6FD2: push ebx */
    PUSH32(esp, esi); /* 0x171C6FD3: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171C6FD4: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x171C6FD7: push edi */
    eax = esi; /* 0x171C6FD8: mov eax, esi */
    RECOMP_CALL(sub_171C6CDC); /* 0x171C6FDA: call 0x171c6cdc */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x171C6FDF: mov ebx, eax */
    eax = MEM32(esi + 0xC); /* 0x171C6FE1: mov eax, dword ptr [esi + 0xc] */
    edi = MEM32(ebx + 0x4); /* 0x171C6FE4: mov edi, dword ptr [ebx + 4] */
    ecx = ebx; /* 0x171C6FE7: mov ecx, ebx */
    RECOMP_CALL(sub_171C6D3B); /* 0x171C6FE9: call 0x171c6d3b */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x4); /* 0x171C6FEE: mov eax, dword ptr [esi + 4] */
    esi = MEM32(eax + 0x10); /* 0x171C6FF1: mov esi, dword ptr [eax + 0x10] */
    MEM32(ebx + 0x10) = esi; /* 0x171C6FF4: mov dword ptr [ebx + 0x10], esi */
    RECOMP_CALL(sub_171C6D5D); /* 0x171C6FF7: call 0x171c6d5d */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x171C6FFC: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x14); /* 0x171C6FFF: mov eax, dword ptr [eax + 0x14] */
    MEM32(edi + 0x14) = eax; /* 0x171C7002: mov dword ptr [edi + 0x14], eax */
    edi = POP32_VAL(esp); /* 0x171C7005: pop edi */
    MEM32(ebx + 0x14) = eax; /* 0x171C7006: mov dword ptr [ebx + 0x14], eax */
    esi = POP32_VAL(esp); /* 0x171C7009: pop esi */
    eax = ebx; /* 0x171C700A: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x171C700C: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171C700D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171C700E: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171C7016(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C7016u);

L_171C7016:
    edi = edi; /* 0x171C7016: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C7018: push ebp */
    ebp = esp; /* 0x171C7019: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171C701B: push esi */
    PUSH32(esp, edi); /* 0x171C701C: push edi */
    edi = MEM32(ebp + 0x8); /* 0x171C701D: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x171C7020: push edi */
    RECOMP_CALL(sub_171C6FCD); /* 0x171C7021: call 0x171c6fcd */
    RECOMP_FLAGS_IN();
    esi = MEM32(eax + 0x4); /* 0x171C7026: mov esi, dword ptr [eax + 4] */
    ecx = MEM32(edi + 0x4); /* 0x171C7029: mov ecx, dword ptr [edi + 4] */
    eax = MEM32(ecx + 0x4); /* 0x171C702C: mov eax, dword ptr [ecx + 4] */
    eax = MEM32(eax + 0xC); /* 0x171C702F: mov eax, dword ptr [eax + 0xc] */
    RECOMP_CALL(sub_171C6D3B); /* 0x171C7032: call 0x171c6d3b */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x4); /* 0x171C7037: mov ecx, dword ptr [edi + 4] */
    eax = esi; /* 0x171C703A: mov eax, esi */
    RECOMP_CALL(sub_171C6D3B); /* 0x171C703C: call 0x171c6d3b */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x4); /* 0x171C7041: mov eax, dword ptr [edi + 4] */
    ecx = MEM32(esi + 0x10); /* 0x171C7044: mov ecx, dword ptr [esi + 0x10] */
    MEM32(eax + 0x10) = ecx; /* 0x171C7047: mov dword ptr [eax + 0x10], ecx */
    eax = MEM32(esi + 0x4); /* 0x171C704A: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(eax + 0x10); /* 0x171C704D: mov ecx, dword ptr [eax + 0x10] */
    MEM32(ecx + 0x8) = eax; /* 0x171C7050: mov dword ptr [ecx + 8], eax */
    eax = MEM32(edi + 0x4); /* 0x171C7053: mov eax, dword ptr [edi + 4] */
    eax = MEM32(eax + 0x14); /* 0x171C7056: mov eax, dword ptr [eax + 0x14] */
    ecx = MEM32(esi + 0x4); /* 0x171C7059: mov ecx, dword ptr [esi + 4] */
    MEM32(ecx + 0x14) = eax; /* 0x171C705C: mov dword ptr [ecx + 0x14], eax */
    eax = MEM32(edi + 0x1C); /* 0x171C705F: mov eax, dword ptr [edi + 0x1c] */
    ecx = MEM32(esi + 0x4); /* 0x171C7062: mov ecx, dword ptr [esi + 4] */
    MEM32(esi + 0x1C) = eax; /* 0x171C7065: mov dword ptr [esi + 0x1c], eax */
    eax = MEM32(edi + 0x4); /* 0x171C7068: mov eax, dword ptr [edi + 4] */
    eax = MEM32(eax + 0x1C); /* 0x171C706B: mov eax, dword ptr [eax + 0x1c] */
    MEM32(ecx + 0x1C) = eax; /* 0x171C706E: mov dword ptr [ecx + 0x1c], eax */
    edi = POP32_VAL(esp); /* 0x171C7071: pop edi */
    eax = esi; /* 0x171C7072: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171C7074: pop esi */
    ebp = POP32_VAL(esp); /* 0x171C7075: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171C7076: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171C707E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C707Eu);

L_171C707E:
    edi = edi; /* 0x171C707E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C7080: push ebp */
    ebp = esp; /* 0x171C7081: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171C7083: push ebx */
    PUSH32(esp, esi); /* 0x171C7084: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171C7085: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x171C7088: push edi */
    eax = esi; /* 0x171C7089: mov eax, esi */
    RECOMP_CALL(sub_171C6CDC); /* 0x171C708B: call 0x171c6cdc */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x171C7090: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = eax; /* 0x171C7094: mov edi, eax */
    eax = MEM32(ebp + 0xC); /* 0x171C7096: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(eax + 0x14); /* 0x171C7099: mov ecx, dword ptr [eax + 0x14] */
    eax = MEM32(esi + 0x14); /* 0x171C709C: mov eax, dword ptr [esi + 0x14] */
    /* cmp ecx, eax */ /* 0x171C709F: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(edi + 0x4); /* 0x171C70A1: mov ebx, dword ptr [edi + 4] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C70B3; /* 0x171C70A4: je 0x171c70b3 */
L_171C70A6:
    PUSH32(esp, eax); /* 0x171C70A6: push eax */
    MEM32(ebp + 0x8) = 1; /* 0x171C70A7: mov dword ptr [ebp + 8], 1 */
    RECOMP_CALL(sub_171C6E2A); /* 0x171C70AE: call 0x171c6e2a */
    RECOMP_FLAGS_IN();
L_171C70B3:
    eax = MEM32(esi + 0xC); /* 0x171C70B3: mov eax, dword ptr [esi + 0xc] */
    ecx = edi; /* 0x171C70B6: mov ecx, edi */
    RECOMP_CALL(sub_171C6D3B); /* 0x171C70B8: call 0x171c6d3b */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0xC); /* 0x171C70BD: mov eax, dword ptr [ebp + 0xc] */
    ecx = ebx; /* 0x171C70C0: mov ecx, ebx */
    RECOMP_CALL(sub_171C6D3B); /* 0x171C70C2: call 0x171c6d3b */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x171C70C7: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(esi + 0x4); /* 0x171C70CB: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x10); /* 0x171C70CE: mov eax, dword ptr [eax + 0x10] */
    MEM32(edi + 0x10) = eax; /* 0x171C70D1: mov dword ptr [edi + 0x10], eax */
    eax = MEM32(ebp + 0xC); /* 0x171C70D4: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax + 0x10); /* 0x171C70D7: mov eax, dword ptr [eax + 0x10] */
    MEM32(ebx + 0x10) = eax; /* 0x171C70DA: mov dword ptr [ebx + 0x10], eax */
    eax = MEM32(esi + 0x14); /* 0x171C70DD: mov eax, dword ptr [esi + 0x14] */
    MEM32(ebx + 0x14) = eax; /* 0x171C70E0: mov dword ptr [ebx + 0x14], eax */
    MEM32(edi + 0x14) = eax; /* 0x171C70E3: mov dword ptr [edi + 0x14], eax */
    eax = MEM32(esi + 0x14); /* 0x171C70E6: mov eax, dword ptr [esi + 0x14] */
    MEM32(eax + 0x8) = ebx; /* 0x171C70E9: mov dword ptr [eax + 8], ebx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C70F6; /* 0x171C70EC: jne 0x171c70f6 */
L_171C70EE:
    esi = MEM32(esi + 0x14); /* 0x171C70EE: mov esi, dword ptr [esi + 0x14] */
    RECOMP_CALL(sub_171C6D8F); /* 0x171C70F1: call 0x171c6d8f */
    RECOMP_FLAGS_IN();
L_171C70F6:
    eax = edi; /* 0x171C70F6: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x171C70F8: pop edi */
    esi = POP32_VAL(esp); /* 0x171C70F9: pop esi */
    ebx = POP32_VAL(esp); /* 0x171C70FA: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171C70FB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171C70FC: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171C7104(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C7104u);

L_171C7104:
    edi = edi; /* 0x171C7104: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C7106: push ebp */
    ebp = esp; /* 0x171C7107: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171C7109: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x171C710A: mov ebx, dword ptr [ebp + 8] */
    eax = MEM32(ebx + 0x8); /* 0x171C710D: mov eax, dword ptr [ebx + 8] */
    PUSH32(esp, esi); /* 0x171C7110: push esi */
    PUSH32(esp, edi); /* 0x171C7111: push edi */
    edi = MEM32(eax + 0xC); /* 0x171C7112: mov edi, dword ptr [eax + 0xc] */
    MEM32(ebp + 0x8) = eax; /* 0x171C7115: mov dword ptr [ebp + 8], eax */
L_171C7118:
    esi = edi; /* 0x171C7118: mov esi, edi */
    edx = MEM32(esi + 0x4); /* 0x171C711A: mov edx, dword ptr [esi + 4] */
    edi = MEM32(edi + 0xC); /* 0x171C711D: mov edi, dword ptr [edi + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171C7120: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x14) = ecx; /* 0x171C7122: mov dword ptr [esi + 0x14], ecx */
    /* cmp MEM32(edx + 0x14), ecx */ /* 0x171C7125: cmp dword ptr [edx + 0x14], ecx */
    _flag_a = (uint32_t)(MEM32(edx + 0x14)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C7180; /* 0x171C7128: jne 0x171c7180 */
L_171C712A:
    eax = MEM32(esi + 0x8); /* 0x171C712A: mov eax, dword ptr [esi + 8] */
    /* cmp eax, esi */ /* 0x171C712D: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C713C; /* 0x171C712F: jne 0x171c713c */
L_171C7131:
    PUSH32(esp, ecx); /* 0x171C7131: push ecx */
    ecx = MEM32(esi + 0x10); /* 0x171C7132: mov ecx, dword ptr [esi + 0x10] */
    RECOMP_CALL(sub_171C6DF7); /* 0x171C7135: call 0x171c6df7 */
    RECOMP_FLAGS_IN();
    goto L_171C714F; /* 0x171C713A: jmp 0x171c714f */
L_171C713C:
    ecx = MEM32(esi + 0x10); /* 0x171C713C: mov ecx, dword ptr [esi + 0x10] */
    MEM32(ecx + 0x8) = eax; /* 0x171C713F: mov dword ptr [ecx + 8], eax */
    eax = MEM32(esi + 0x4); /* 0x171C7142: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0xC); /* 0x171C7145: mov eax, dword ptr [eax + 0xc] */
    ecx = esi; /* 0x171C7148: mov ecx, esi */
    RECOMP_CALL(sub_171C6D3B); /* 0x171C714A: call 0x171c6d3b */
    RECOMP_FLAGS_IN();
L_171C714F:
    ecx = MEM32(esi + 0x4); /* 0x171C714F: mov ecx, dword ptr [esi + 4] */
    eax = MEM32(ecx + 0x8); /* 0x171C7152: mov eax, dword ptr [ecx + 8] */
    /* cmp eax, ecx */ /* 0x171C7155: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C7165; /* 0x171C7157: jne 0x171c7165 */
L_171C7159:
    ecx = MEM32(ecx + 0x10); /* 0x171C7159: mov ecx, dword ptr [ecx + 0x10] */
    PUSH32(esp, 0); /* 0x171C715C: push 0 */
    RECOMP_CALL(sub_171C6DF7); /* 0x171C715E: call 0x171c6df7 */
    RECOMP_FLAGS_IN();
    goto L_171C7176; /* 0x171C7163: jmp 0x171c7176 */
L_171C7165:
    edx = MEM32(ecx + 0x10); /* 0x171C7165: mov edx, dword ptr [ecx + 0x10] */
    MEM32(edx + 0x8) = eax; /* 0x171C7168: mov dword ptr [edx + 8], eax */
    eax = MEM32(ecx + 0x4); /* 0x171C716B: mov eax, dword ptr [ecx + 4] */
    eax = MEM32(eax + 0xC); /* 0x171C716E: mov eax, dword ptr [eax + 0xc] */
    RECOMP_CALL(sub_171C6D3B); /* 0x171C7171: call 0x171c6d3b */
    RECOMP_FLAGS_IN();
L_171C7176:
    eax = esi; /* 0x171C7176: mov eax, esi */
    RECOMP_CALL(sub_171C6DCE); /* 0x171C7178: call 0x171c6dce */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x171C717D: mov eax, dword ptr [ebp + 8] */
L_171C7180:
    /* cmp esi, eax */ /* 0x171C7180: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C7118; /* 0x171C7182: jne 0x171c7118 */
L_171C7184:
    eax = MEM32(ebx + 0x4); /* 0x171C7184: mov eax, dword ptr [ebx + 4] */
    ecx = MEM32(ebx); /* 0x171C7187: mov ecx, dword ptr [ebx] */
    MEM32(ecx + 0x4) = eax; /* 0x171C7189: mov dword ptr [ecx + 4], eax */
    PUSH32(esp, ebx); /* 0x171C718C: push ebx */
    MEM32(eax) = ecx; /* 0x171C718D: mov dword ptr [eax], ecx */
    RECOMP_CALL(sub_1721B224); /* 0x171C718F: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171C7194: pop ecx */
    edi = POP32_VAL(esp); /* 0x171C7195: pop edi */
    esi = POP32_VAL(esp); /* 0x171C7196: pop esi */
    ebx = POP32_VAL(esp); /* 0x171C7197: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171C7198: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171C7199: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171C71A1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C71A1u);

L_171C71A1:
    edi = edi; /* 0x171C71A1: mov edi, edi */
    PUSH32(esp, ebx); /* 0x171C71A3: push ebx */
    PUSH32(esp, 0x98u); /* 0x171C71A4: push 0x98 */
    RECOMP_CALL(sub_1721B254); /* 0x171C71A9: call 0x1721b254 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171C71AE: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ebx */ /* 0x171C71B0: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x171C71B2: pop ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C71B9; /* 0x171C71B3: jne 0x171c71b9 */
L_171C71B5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171C71B5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x171C71B7: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171C71B8: ret  */
L_171C71B9:
    MEM32(eax + 0x8) = ebx; /* 0x171C71B9: mov dword ptr [eax + 8], ebx */
    MEM32(eax + 0xC) = ebx; /* 0x171C71BC: mov dword ptr [eax + 0xc], ebx */
    MEM32(eax + 0x4) = eax; /* 0x171C71BF: mov dword ptr [eax + 4], eax */
    MEM32(eax) = eax; /* 0x171C71C2: mov dword ptr [eax], eax */
    ecx = eax + 0x58; /* 0x171C71C4: lea ecx, [eax + 0x58] */
    edx = eax + 0x78; /* 0x171C71C7: lea edx, [eax + 0x78] */
    PUSH32(esp, esi); /* 0x171C71CA: push esi */
    esi = eax + 0x40; /* 0x171C71CB: lea esi, [eax + 0x40] */
    MEM32(esi + 0x8) = ebx; /* 0x171C71CE: mov dword ptr [esi + 8], ebx */
    MEM32(esi + 0xC) = ebx; /* 0x171C71D1: mov dword ptr [esi + 0xc], ebx */
    MEM32(esi + 0x10) = ebx; /* 0x171C71D4: mov dword ptr [esi + 0x10], ebx */
    MEM8(esi + 0x14) = (uint8_t)(LO8(ebx)); /* 0x171C71D7: mov byte ptr [esi + 0x14], bl */
    MEM8(esi + 0x15) = (uint8_t)(LO8(ebx)); /* 0x171C71DA: mov byte ptr [esi + 0x15], bl */
    MEM32(esi + 0x4) = esi; /* 0x171C71DD: mov dword ptr [esi + 4], esi */
    MEM32(esi) = esi; /* 0x171C71E0: mov dword ptr [esi], esi */
    MEM32(ecx + 0x8) = ebx; /* 0x171C71E2: mov dword ptr [ecx + 8], ebx */
    MEM32(ecx + 0xC) = ebx; /* 0x171C71E5: mov dword ptr [ecx + 0xc], ebx */
    MEM32(ecx + 0x10) = ebx; /* 0x171C71E8: mov dword ptr [ecx + 0x10], ebx */
    MEM32(ecx + 0x14) = ebx; /* 0x171C71EB: mov dword ptr [ecx + 0x14], ebx */
    MEM32(ecx + 0x1C) = ebx; /* 0x171C71EE: mov dword ptr [ecx + 0x1c], ebx */
    MEM32(ecx + 0x18) = ebx; /* 0x171C71F1: mov dword ptr [ecx + 0x18], ebx */
    MEM32(ecx) = ecx; /* 0x171C71F4: mov dword ptr [ecx], ecx */
    MEM32(ecx + 0x4) = edx; /* 0x171C71F6: mov dword ptr [ecx + 4], edx */
    esi = POP32_VAL(esp); /* 0x171C71F9: pop esi */
    MEM32(edx + 0x8) = ebx; /* 0x171C71FA: mov dword ptr [edx + 8], ebx */
    MEM32(edx + 0xC) = ebx; /* 0x171C71FD: mov dword ptr [edx + 0xc], ebx */
    MEM32(edx + 0x10) = ebx; /* 0x171C7200: mov dword ptr [edx + 0x10], ebx */
    MEM32(edx + 0x14) = ebx; /* 0x171C7203: mov dword ptr [edx + 0x14], ebx */
    MEM32(edx + 0x1C) = ebx; /* 0x171C7206: mov dword ptr [edx + 0x1c], ebx */
    MEM32(edx + 0x18) = ebx; /* 0x171C7209: mov dword ptr [edx + 0x18], ebx */
    MEM32(edx) = edx; /* 0x171C720C: mov dword ptr [edx], edx */
    MEM32(edx + 0x4) = ecx; /* 0x171C720E: mov dword ptr [edx + 4], ecx */
    ebx = POP32_VAL(esp); /* 0x171C7211: pop ebx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171C7212: ret  */
    RECOMP_REGS_OUT();
}

void sub_171C7218(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C7218u);

L_171C7218:
    edi = edi; /* 0x171C7218: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C721A: push ebp */
    ebp = esp; /* 0x171C721B: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171C721D: push ebx */
    PUSH32(esp, esi); /* 0x171C721E: push esi */
    PUSH32(esp, edi); /* 0x171C721F: push edi */
    edi = MEM32(ebp + 0x8); /* 0x171C7220: mov edi, dword ptr [ebp + 8] */
    esi = edi + 0x40; /* 0x171C7223: lea esi, [edi + 0x40] */
    eax = MEM32(esi); /* 0x171C7226: mov eax, dword ptr [esi] */
    /* cmp eax, esi */ /* 0x171C7228: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C723B; /* 0x171C722A: je 0x171c723b */
L_171C722C:
    ebx = MEM32(eax); /* 0x171C722C: mov ebx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171C722E: push eax */
    RECOMP_CALL(sub_1721B224); /* 0x171C722F: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    /* cmp ebx, esi */ /* 0x171C7234: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x171C7236: pop ecx */
    eax = ebx; /* 0x171C7237: mov eax, ebx */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C722C; /* 0x171C7239: jne 0x171c722c */
L_171C723B:
    eax = MEM32(edi); /* 0x171C723B: mov eax, dword ptr [edi] */
    /* cmp eax, edi */ /* 0x171C723D: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C7250; /* 0x171C723F: je 0x171c7250 */
L_171C7241:
    esi = MEM32(eax); /* 0x171C7241: mov esi, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171C7243: push eax */
    RECOMP_CALL(sub_1721B224); /* 0x171C7244: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    /* cmp esi, edi */ /* 0x171C7249: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x171C724B: pop ecx */
    eax = esi; /* 0x171C724C: mov eax, esi */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C7241; /* 0x171C724E: jne 0x171c7241 */
L_171C7250:
    esi = edi + 0x58; /* 0x171C7250: lea esi, [edi + 0x58] */
    eax = MEM32(esi); /* 0x171C7253: mov eax, dword ptr [esi] */
    /* cmp eax, esi */ /* 0x171C7255: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C7268; /* 0x171C7257: je 0x171c7268 */
L_171C7259:
    ebx = MEM32(eax); /* 0x171C7259: mov ebx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x171C725B: push eax */
    RECOMP_CALL(sub_1721B224); /* 0x171C725C: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    /* cmp ebx, esi */ /* 0x171C7261: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = POP32_VAL(esp); /* 0x171C7263: pop ecx */
    eax = ebx; /* 0x171C7264: mov eax, ebx */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C7259; /* 0x171C7266: jne 0x171c7259 */
L_171C7268:
    PUSH32(esp, edi); /* 0x171C7268: push edi */
    RECOMP_CALL(sub_1721B224); /* 0x171C7269: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171C726E: pop ecx */
    edi = POP32_VAL(esp); /* 0x171C726F: pop edi */
    esi = POP32_VAL(esp); /* 0x171C7270: pop esi */
    ebx = POP32_VAL(esp); /* 0x171C7271: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171C7272: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171C7273: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171C727B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C727Bu);

L_171C727B:
    edi = edi; /* 0x171C727B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C727D: push ebp */
    ebp = esp; /* 0x171C727E: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x171C7280: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x171C7283: push esi */
    esi = MEM32(eax + 0x8); /* 0x171C7284: mov esi, dword ptr [eax + 8] */
    PUSH32(esp, edi); /* 0x171C7287: push edi */
L_171C7288:
    eax = MEM32(esi + 0x4); /* 0x171C7288: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(eax + 0x10); /* 0x171C728B: mov ecx, dword ptr [eax + 0x10] */
    edx = MEM32(esi + 0x10); /* 0x171C728E: mov edx, dword ptr [esi + 0x10] */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x171C7291: fld qword ptr [ecx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edx + 0x28)); /* 0x171C7294: fcomp qword ptr [edx + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C7297: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171C7299: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171C72BA; /* 0x171C729C: jnp 0x171c72ba */
L_171C729E:
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x171C729E: fld qword ptr [edx + 0x28] */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x171C72A1: fld qword ptr [ecx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C72A4: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C72A6: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C72A8: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C72C2; /* 0x171C72AB: jp 0x171c72c2 */
L_171C72AD:
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x171C72AD: fld qword ptr [ecx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edx + 0x30)); /* 0x171C72B0: fcomp qword ptr [edx + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C72B3: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171C72B5: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C72C2; /* 0x171C72B8: jp 0x171c72c2 */
L_171C72BA:
    eax = MEM32(esi + 0x8); /* 0x171C72BA: mov eax, dword ptr [esi + 8] */
    esi = MEM32(eax + 0x4); /* 0x171C72BD: mov esi, dword ptr [eax + 4] */
    RECOMP_BACKEDGE();
    goto L_171C7288; /* 0x171C72C0: jmp 0x171c7288 */
L_171C72C2:
    eax = MEM32(esi + 0x4); /* 0x171C72C2: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(esi + 0x10); /* 0x171C72C5: mov ecx, dword ptr [esi + 0x10] */
    edx = MEM32(eax + 0x10); /* 0x171C72C8: mov edx, dword ptr [eax + 0x10] */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x171C72CB: fld qword ptr [ecx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edx + 0x28)); /* 0x171C72CE: fcomp qword ptr [edx + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C72D1: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171C72D3: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171C72F4; /* 0x171C72D6: jnp 0x171c72f4 */
L_171C72D8:
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x171C72D8: fld qword ptr [edx + 0x28] */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x171C72DB: fld qword ptr [ecx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C72DE: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C72E0: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C72E2: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C72F9; /* 0x171C72E5: jp 0x171c72f9 */
L_171C72E7:
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x171C72E7: fld qword ptr [ecx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edx + 0x30)); /* 0x171C72EA: fcomp qword ptr [edx + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C72ED: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171C72EF: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C72F9; /* 0x171C72F2: jp 0x171c72f9 */
L_171C72F4:
    esi = MEM32(esi + 0xC); /* 0x171C72F4: mov esi, dword ptr [esi + 0xc] */
    RECOMP_BACKEDGE();
    goto L_171C72C2; /* 0x171C72F7: jmp 0x171c72c2 */
L_171C72F9:
    eax = MEM32(esi + 0x8); /* 0x171C72F9: mov eax, dword ptr [esi + 8] */
    goto L_171C7466; /* 0x171C72FC: jmp 0x171c7466 */
L_171C7301:
    eax = MEM32(esi + 0x4); /* 0x171C7301: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(eax + 0x10); /* 0x171C7304: mov ecx, dword ptr [eax + 0x10] */
    edx = MEM32(edi + 0x10); /* 0x171C7307: mov edx, dword ptr [edi + 0x10] */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x171C730A: fld qword ptr [ecx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edx + 0x28)); /* 0x171C730D: fcomp qword ptr [edx + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C7310: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171C7312: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171C7458; /* 0x171C7315: jnp 0x171c7458 */
L_171C731B:
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x171C731B: fld qword ptr [edx + 0x28] */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x171C731E: fld qword ptr [ecx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C7321: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C7323: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C7325: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C73CD; /* 0x171C7328: jp 0x171c73cd */
L_171C732E:
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x171C732E: fld qword ptr [ecx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edx + 0x30)); /* 0x171C7331: fcomp qword ptr [edx + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C7334: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171C7336: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171C7458; /* 0x171C7339: jnp 0x171c7458 */
L_171C733F:
    goto L_171C73CD; /* 0x171C733F: jmp 0x171c73cd */
L_171C7344:
    eax = MEM32(esi + 0x8); /* 0x171C7344: mov eax, dword ptr [esi + 8] */
    eax = MEM32(eax + 0x4); /* 0x171C7347: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + 0x10); /* 0x171C734A: mov ecx, dword ptr [eax + 0x10] */
    eax = MEM32(eax + 0x4); /* 0x171C734D: mov eax, dword ptr [eax + 4] */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x171C7350: fld qword ptr [ecx + 0x28] */
    eax = MEM32(eax + 0x10); /* 0x171C7353: mov eax, dword ptr [eax + 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(eax + 0x28)); /* 0x171C7356: fcomp qword ptr [eax + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C7359: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171C735B: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171C73BE; /* 0x171C735E: jnp 0x171c73be */
L_171C7360:
    eax = MEM32(esi + 0x8); /* 0x171C7360: mov eax, dword ptr [esi + 8] */
    eax = MEM32(eax + 0x4); /* 0x171C7363: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + 0x10); /* 0x171C7366: mov ecx, dword ptr [eax + 0x10] */
    eax = MEM32(eax + 0x4); /* 0x171C7369: mov eax, dword ptr [eax + 4] */
    eax = MEM32(eax + 0x10); /* 0x171C736C: mov eax, dword ptr [eax + 0x10] */
    fp_push(*(double*)ADDR(eax + 0x28)); /* 0x171C736F: fld qword ptr [eax + 0x28] */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x171C7372: fld qword ptr [ecx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C7375: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C7377: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C7379: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C739A; /* 0x171C737C: jp 0x171c739a */
L_171C737E:
    eax = MEM32(esi + 0x8); /* 0x171C737E: mov eax, dword ptr [esi + 8] */
    eax = MEM32(eax + 0x4); /* 0x171C7381: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + 0x10); /* 0x171C7384: mov ecx, dword ptr [eax + 0x10] */
    eax = MEM32(eax + 0x4); /* 0x171C7387: mov eax, dword ptr [eax + 4] */
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x171C738A: fld qword ptr [ecx + 0x30] */
    eax = MEM32(eax + 0x10); /* 0x171C738D: mov eax, dword ptr [eax + 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(eax + 0x30)); /* 0x171C7390: fcomp qword ptr [eax + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C7393: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171C7395: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171C73BE; /* 0x171C7398: jnp 0x171c73be */
L_171C739A:
    eax = MEM32(esi + 0x8); /* 0x171C739A: mov eax, dword ptr [esi + 8] */
    eax = MEM32(eax + 0x4); /* 0x171C739D: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, MEM32(eax + 0x10)); /* 0x171C73A0: push dword ptr [eax + 0x10] */
    eax = MEM32(esi + 0x4); /* 0x171C73A3: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x171C73A6: push dword ptr [esi + 0x10] */
    PUSH32(esp, MEM32(eax + 0x10)); /* 0x171C73A9: push dword ptr [eax + 0x10] */
    RECOMP_CALL(sub_171C9869); /* 0x171C73AC: call 0x171c9869 */
    RECOMP_FLAGS_IN();
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x171C73B1: fcomp qword ptr [0x17001d90] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C73B7: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x171C73B9: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C73D6; /* 0x171C73BC: jne 0x171c73d6 */
L_171C73BE:
    eax = MEM32(esi + 0x8); /* 0x171C73BE: mov eax, dword ptr [esi + 8] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x171C73C1: push dword ptr [eax + 4] */
    PUSH32(esp, esi); /* 0x171C73C4: push esi */
    RECOMP_CALL(sub_171C707E); /* 0x171C73C5: call 0x171c707e */
    RECOMP_FLAGS_IN();
    esi = MEM32(eax + 0x4); /* 0x171C73CA: mov esi, dword ptr [eax + 4] */
L_171C73CD:
    /* cmp MEM32(edi + 0xC), esi */ /* 0x171C73CD: cmp dword ptr [edi + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C7344; /* 0x171C73D0: jne 0x171c7344 */
L_171C73D6:
    esi = MEM32(esi + 0xC); /* 0x171C73D6: mov esi, dword ptr [esi + 0xc] */
    goto L_171C7469; /* 0x171C73D9: jmp 0x171c7469 */
L_171C73DE:
    eax = MEM32(edi + 0xC); /* 0x171C73DE: mov eax, dword ptr [edi + 0xc] */
    edx = MEM32(eax + 0x4); /* 0x171C73E1: mov edx, dword ptr [eax + 4] */
    edx = MEM32(edx + 0x10); /* 0x171C73E4: mov edx, dword ptr [edx + 0x10] */
    eax = MEM32(eax + 0x10); /* 0x171C73E7: mov eax, dword ptr [eax + 0x10] */
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x171C73EA: fld qword ptr [edx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(eax + 0x28)); /* 0x171C73ED: fcomp qword ptr [eax + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C73F0: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171C73F2: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171C744C; /* 0x171C73F5: jnp 0x171c744c */
L_171C73F7:
    eax = MEM32(edi + 0xC); /* 0x171C73F7: mov eax, dword ptr [edi + 0xc] */
    edx = MEM32(eax + 0x4); /* 0x171C73FA: mov edx, dword ptr [eax + 4] */
    eax = MEM32(eax + 0x10); /* 0x171C73FD: mov eax, dword ptr [eax + 0x10] */
    fp_push(*(double*)ADDR(eax + 0x28)); /* 0x171C7400: fld qword ptr [eax + 0x28] */
    edx = MEM32(edx + 0x10); /* 0x171C7403: mov edx, dword ptr [edx + 0x10] */
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x171C7406: fld qword ptr [edx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C7409: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C740B: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C740D: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C742B; /* 0x171C7410: jp 0x171c742b */
L_171C7412:
    eax = MEM32(edi + 0xC); /* 0x171C7412: mov eax, dword ptr [edi + 0xc] */
    edx = MEM32(eax + 0x4); /* 0x171C7415: mov edx, dword ptr [eax + 4] */
    edx = MEM32(edx + 0x10); /* 0x171C7418: mov edx, dword ptr [edx + 0x10] */
    eax = MEM32(eax + 0x10); /* 0x171C741B: mov eax, dword ptr [eax + 0x10] */
    fp_push(*(double*)ADDR(edx + 0x30)); /* 0x171C741E: fld qword ptr [edx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(eax + 0x30)); /* 0x171C7421: fcomp qword ptr [eax + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C7424: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171C7426: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171C744C; /* 0x171C7429: jnp 0x171c744c */
L_171C742B:
    eax = MEM32(ecx + 0x4); /* 0x171C742B: mov eax, dword ptr [ecx + 4] */
    PUSH32(esp, MEM32(eax + 0x10)); /* 0x171C742E: push dword ptr [eax + 0x10] */
    eax = MEM32(edi + 0x4); /* 0x171C7431: mov eax, dword ptr [edi + 4] */
    PUSH32(esp, MEM32(eax + 0x10)); /* 0x171C7434: push dword ptr [eax + 0x10] */
    PUSH32(esp, MEM32(edi + 0x10)); /* 0x171C7437: push dword ptr [edi + 0x10] */
    RECOMP_CALL(sub_171C9869); /* 0x171C743A: call 0x171c9869 */
    RECOMP_FLAGS_IN();
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x171C743F: fcomp qword ptr [0x17001d90] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C7445: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171C7447: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C7463; /* 0x171C744A: jp 0x171c7463 */
L_171C744C:
    PUSH32(esp, edi); /* 0x171C744C: push edi */
    PUSH32(esp, MEM32(edi + 0xC)); /* 0x171C744D: push dword ptr [edi + 0xc] */
    RECOMP_CALL(sub_171C707E); /* 0x171C7450: call 0x171c707e */
    RECOMP_FLAGS_IN();
    edi = MEM32(eax + 0x4); /* 0x171C7455: mov edi, dword ptr [eax + 4] */
L_171C7458:
    ecx = MEM32(edi + 0xC); /* 0x171C7458: mov ecx, dword ptr [edi + 0xc] */
    /* cmp ecx, esi */ /* 0x171C745B: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C73DE; /* 0x171C745D: jne 0x171c73de */
L_171C7463:
    eax = MEM32(edi + 0x8); /* 0x171C7463: mov eax, dword ptr [edi + 8] */
L_171C7466:
    edi = MEM32(eax + 0x4); /* 0x171C7466: mov edi, dword ptr [eax + 4] */
L_171C7469:
    /* cmp MEM32(esi + 0xC), edi */ /* 0x171C7469: cmp dword ptr [esi + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C7301; /* 0x171C746C: jne 0x171c7301 */
L_171C7472:
    goto L_171C747E; /* 0x171C7472: jmp 0x171c747e */
L_171C7474:
    PUSH32(esp, edi); /* 0x171C7474: push edi */
    PUSH32(esp, eax); /* 0x171C7475: push eax */
    RECOMP_CALL(sub_171C707E); /* 0x171C7476: call 0x171c707e */
    RECOMP_FLAGS_IN();
    edi = MEM32(eax + 0x4); /* 0x171C747B: mov edi, dword ptr [eax + 4] */
L_171C747E:
    eax = MEM32(edi + 0xC); /* 0x171C747E: mov eax, dword ptr [edi + 0xc] */
    /* cmp MEM32(eax + 0xC), esi */ /* 0x171C7481: cmp dword ptr [eax + 0xc], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C7474; /* 0x171C7484: jne 0x171c7474 */
L_171C7486:
    edi = POP32_VAL(esp); /* 0x171C7486: pop edi */
    esi = POP32_VAL(esp); /* 0x171C7487: pop esi */
    ebp = POP32_VAL(esp); /* 0x171C7488: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171C7489: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171C7491(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C7491u);

L_171C7491:
    edi = edi; /* 0x171C7491: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C7493: push ebp */
    ebp = esp; /* 0x171C7494: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171C7496: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171C7497: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x40u; /* 0x171C749A: add esi, 0x40 */
    _flag_k = FK_ADD;
    eax = MEM32(esi); /* 0x171C749D: mov eax, dword ptr [esi] */
    /* cmp eax, esi */ /* 0x171C749F: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C74B9; /* 0x171C74A1: je 0x171c74b9 */
L_171C74A3:
    PUSH32(esp, edi); /* 0x171C74A3: push edi */
L_171C74A4:
    /* cmp MEM8(eax + 0x15), 0 */ /* 0x171C74A4: cmp byte ptr [eax + 0x15], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x15)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edi = MEM32(eax); /* 0x171C74A8: mov edi, dword ptr [eax] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C74B2; /* 0x171C74AA: je 0x171c74b2 */
L_171C74AC:
    PUSH32(esp, eax); /* 0x171C74AC: push eax */
    RECOMP_CALL(sub_171C727B); /* 0x171C74AD: call 0x171c727b */
    RECOMP_FLAGS_IN();
L_171C74B2:
    /* cmp edi, esi */ /* 0x171C74B2: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = edi; /* 0x171C74B4: mov eax, edi */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C74A4; /* 0x171C74B6: jne 0x171c74a4 */
L_171C74B8:
    edi = POP32_VAL(esp); /* 0x171C74B8: pop edi */
L_171C74B9:
    esi = POP32_VAL(esp); /* 0x171C74B9: pop esi */
    ebp = POP32_VAL(esp); /* 0x171C74BA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171C74BB: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171C74C3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C74C3u);

L_171C74C3:
    edi = edi; /* 0x171C74C3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C74C5: push ebp */
    ebp = esp; /* 0x171C74C6: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171C74C8: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171C74C9: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x40u; /* 0x171C74CC: add esi, 0x40 */
    _flag_k = FK_ADD;
    eax = MEM32(esi); /* 0x171C74CF: mov eax, dword ptr [esi] */
    /* cmp eax, esi */ /* 0x171C74D1: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C74EB; /* 0x171C74D3: je 0x171c74eb */
L_171C74D5:
    PUSH32(esp, edi); /* 0x171C74D5: push edi */
L_171C74D6:
    /* cmp MEM8(eax + 0x15), 0 */ /* 0x171C74D6: cmp byte ptr [eax + 0x15], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x15)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edi = MEM32(eax); /* 0x171C74DA: mov edi, dword ptr [eax] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C74E4; /* 0x171C74DC: jne 0x171c74e4 */
L_171C74DE:
    PUSH32(esp, eax); /* 0x171C74DE: push eax */
    RECOMP_CALL(sub_171C7104); /* 0x171C74DF: call 0x171c7104 */
    RECOMP_FLAGS_IN();
L_171C74E4:
    /* cmp edi, esi */ /* 0x171C74E4: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = edi; /* 0x171C74E6: mov eax, edi */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C74D6; /* 0x171C74E8: jne 0x171c74d6 */
L_171C74EA:
    edi = POP32_VAL(esp); /* 0x171C74EA: pop edi */
L_171C74EB:
    esi = POP32_VAL(esp); /* 0x171C74EB: pop esi */
    ebp = POP32_VAL(esp); /* 0x171C74EC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171C74ED: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171C74F5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C74F5u);

L_171C74F5:
    edi = edi; /* 0x171C74F5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C74F7: push ebp */
    ebp = esp; /* 0x171C74F8: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171C74FA: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171C74FB: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x58u; /* 0x171C74FE: add esi, 0x58 */
    _flag_k = FK_ADD;
    eax = MEM32(esi); /* 0x171C7501: mov eax, dword ptr [esi] */
    /* cmp eax, esi */ /* 0x171C7503: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C7542; /* 0x171C7505: je 0x171c7542 */
L_171C7507:
    PUSH32(esp, edi); /* 0x171C7507: push edi */
L_171C7508:
    ecx = MEM32(eax + 0x14); /* 0x171C7508: mov ecx, dword ptr [eax + 0x14] */
    edx = MEM32(eax + 0x4); /* 0x171C750B: mov edx, dword ptr [eax + 4] */
    SET_LO8(ecx, MEM8(ecx + 0x15)); /* 0x171C750E: mov cl, byte ptr [ecx + 0x15] */
    edx = MEM32(edx + 0x14); /* 0x171C7511: mov edx, dword ptr [edx + 0x14] */
    /* cmp MEM8(edx + 0x15), LO8(ecx) */ /* 0x171C7514: cmp byte ptr [edx + 0x15], cl */
    _flag_a = (uint32_t)(MEM8(edx + 0x15)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    edi = MEM32(eax); /* 0x171C7517: mov edi, dword ptr [eax] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C7529; /* 0x171C7519: je 0x171c7529 */
L_171C751B:
    /* test LO8(ecx), LO8(ecx) */ /* 0x171C751B: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    ecx = MEM32(ebp + 0xC); /* 0x171C751D: mov ecx, dword ptr [ebp + 0xc] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C7524; /* 0x171C7520: jne 0x171c7524 */
L_171C7522:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x171C7522: neg ecx */
    _flag_k = FK_CMP;
L_171C7524:
    MEM32(eax + 0x1C) = ecx; /* 0x171C7524: mov dword ptr [eax + 0x1c], ecx */
    goto L_171C753B; /* 0x171C7527: jmp 0x171c753b */
L_171C7529:
    /* cmp MEM8(ebp + 0x10), 0 */ /* 0x171C7529: cmp byte ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x10)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C7535; /* 0x171C752D: jne 0x171c7535 */
L_171C752F:
    _flag_a = (uint32_t)(MEM32(eax + 0x1C)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x1C) = MEM32(eax + 0x1C) & 0; /* 0x171C752F: and dword ptr [eax + 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171C753B; /* 0x171C7533: jmp 0x171c753b */
L_171C7535:
    PUSH32(esp, eax); /* 0x171C7535: push eax */
    RECOMP_CALL(sub_171C6F1B); /* 0x171C7536: call 0x171c6f1b */
    RECOMP_FLAGS_IN();
L_171C753B:
    /* cmp edi, esi */ /* 0x171C753B: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = edi; /* 0x171C753D: mov eax, edi */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C7508; /* 0x171C753F: jne 0x171c7508 */
L_171C7541:
    edi = POP32_VAL(esp); /* 0x171C7541: pop edi */
L_171C7542:
    esi = POP32_VAL(esp); /* 0x171C7542: pop esi */
    ebp = POP32_VAL(esp); /* 0x171C7543: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171C7544: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171C754C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C754Cu);

L_171C754C:
    edi = edi; /* 0x171C754C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C754E: push ebp */
    ebp = esp; /* 0x171C754F: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x171C7551: mov eax, dword ptr [ebp + 0xc] */
    edx = MEM32(eax + 0x14); /* 0x171C7554: mov edx, dword ptr [eax + 0x14] */
    ecx = MEM32(ebp + 0x8); /* 0x171C7557: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x171C755A: push esi */
    esi = MEM32(ecx + 0x7C); /* 0x171C755B: mov esi, dword ptr [ecx + 0x7c] */
    MEM32(edx + 0x10) = esi; /* 0x171C755E: mov dword ptr [edx + 0x10], esi */
    edx = MEM32(eax + 0x14); /* 0x171C7561: mov edx, dword ptr [eax + 0x14] */
    MEM32(ecx + 0x7C) = edx; /* 0x171C7564: mov dword ptr [ecx + 0x7c], edx */
    eax = MEM32(eax + 0x14); /* 0x171C7567: mov eax, dword ptr [eax + 0x14] */
    MEM8(eax + 0x14) = (uint8_t)(1); /* 0x171C756A: mov byte ptr [eax + 0x14], 1 */
    esi = POP32_VAL(esp); /* 0x171C756E: pop esi */
    ebp = POP32_VAL(esp); /* 0x171C756F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171C7570: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171C7578(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C7578u);

L_171C7578:
    edi = edi; /* 0x171C7578: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C757A: push ebp */
    ebp = esp; /* 0x171C757B: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171C757D: push ecx */
    _flag_a = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu)); _flag_b = (uint32_t)((MEM32(ebp + (-0x4)) | 0xFFFFFFFFu));
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) | 0xFFFFFFFFu; /* 0x171C757E: or dword ptr [ebp - 4], 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x171C7582: push ebx */
    ebx = eax; /* 0x171C7583: mov ebx, eax */
    eax = MEM32(esi + 0xD20); /* 0x171C7585: mov eax, dword ptr [esi + 0xd20] */
    /* cmp eax, 0x171C6490u */ /* 0x171C758B: cmp eax, 0x171c6490 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x171C6490u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C759E; /* 0x171C7590: je 0x171c759e */
L_171C7592:
    PUSH32(esp, MEM32(esi + 0xD38)); /* 0x171C7592: push dword ptr [esi + 0xd38] */
    PUSH32(esp, 4); /* 0x171C7598: push 4 */
    RECOMP_ICALL(eax); /* 0x171C759A: call eax */
    RECOMP_FLAGS_IN();
    goto L_171C75A6; /* 0x171C759C: jmp 0x171c75a6 */
L_171C759E:
    PUSH32(esp, 4); /* 0x171C759E: push 4 */
    RECOMP_ICALL(MEM32(esi + 0x80)); /* 0x171C75A0: call dword ptr [esi + 0x80] */
    RECOMP_FLAGS_IN();
L_171C75A6:
    /* test ebx, ebx */ /* 0x171C75A6: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171C7622; /* 0x171C75A8: je 0x171c7622 */
L_171C75AA:
    PUSH32(esp, edi); /* 0x171C75AA: push edi */
L_171C75AB:
    edi = MEM32(ebx + 0x8); /* 0x171C75AB: mov edi, dword ptr [ebx + 8] */
L_171C75AE:
    /* cmp MEM8(esi + 0x78), 0 */ /* 0x171C75AE: cmp byte ptr [esi + 0x78], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x78)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C75E9; /* 0x171C75B2: je 0x171c75e9 */
L_171C75B4:
    eax = MEM32(edi + 0x4); /* 0x171C75B4: mov eax, dword ptr [edi + 4] */
    eax = MEM32(eax + 0x14); /* 0x171C75B7: mov eax, dword ptr [eax + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171C75BA: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(eax + 0x15), LO8(ecx) */ /* 0x171C75BC: cmp byte ptr [eax + 0x15], cl */
    _flag_a = (uint32_t)(MEM8(eax + 0x15)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    SET_LO8(ecx, (CMP_EQ(_flag_a, _flag_b)) ? 1 : 0); /* 0x171C75BF: sete cl */
    /* cmp MEM32(ebp + (-0x4)), ecx */ /* 0x171C75C2: cmp dword ptr [ebp - 4], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C75E9; /* 0x171C75C5: je 0x171c75e9 */
L_171C75C7:
    eax = MEM32(esi + 0xD24); /* 0x171C75C7: mov eax, dword ptr [esi + 0xd24] */
    /* cmp eax, 0x171C6490u */ /* 0x171C75CD: cmp eax, 0x171c6490 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x171C6490u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x4)) = ecx; /* 0x171C75D2: mov dword ptr [ebp - 4], ecx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C75E2; /* 0x171C75D5: je 0x171c75e2 */
L_171C75D7:
    PUSH32(esp, MEM32(esi + 0xD38)); /* 0x171C75D7: push dword ptr [esi + 0xd38] */
    PUSH32(esp, ecx); /* 0x171C75DD: push ecx */
    RECOMP_ICALL(eax); /* 0x171C75DE: call eax */
    RECOMP_FLAGS_IN();
    goto L_171C75E9; /* 0x171C75E0: jmp 0x171c75e9 */
L_171C75E2:
    PUSH32(esp, ecx); /* 0x171C75E2: push ecx */
    RECOMP_ICALL(MEM32(esi + 0x84)); /* 0x171C75E3: call dword ptr [esi + 0x84] */
    RECOMP_FLAGS_IN();
L_171C75E9:
    eax = MEM32(esi + 0xD28); /* 0x171C75E9: mov eax, dword ptr [esi + 0xd28] */
    /* cmp eax, 0x171C6490u */ /* 0x171C75EF: cmp eax, 0x171c6490 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x171C6490u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C7606; /* 0x171C75F4: je 0x171c7606 */
L_171C75F6:
    PUSH32(esp, MEM32(esi + 0xD38)); /* 0x171C75F6: push dword ptr [esi + 0xd38] */
    ecx = MEM32(edi + 0x10); /* 0x171C75FC: mov ecx, dword ptr [edi + 0x10] */
    PUSH32(esp, MEM32(ecx + 0xC)); /* 0x171C75FF: push dword ptr [ecx + 0xc] */
    RECOMP_ICALL(eax); /* 0x171C7602: call eax */
    RECOMP_FLAGS_IN();
    goto L_171C7612; /* 0x171C7604: jmp 0x171c7612 */
L_171C7606:
    eax = MEM32(edi + 0x10); /* 0x171C7606: mov eax, dword ptr [edi + 0x10] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x171C7609: push dword ptr [eax + 0xc] */
    RECOMP_ICALL(MEM32(esi + 0x88)); /* 0x171C760C: call dword ptr [esi + 0x88] */
    RECOMP_FLAGS_IN();
L_171C7612:
    edi = MEM32(edi + 0xC); /* 0x171C7612: mov edi, dword ptr [edi + 0xc] */
    /* cmp edi, MEM32(ebx + 0x8) */ /* 0x171C7615: cmp edi, dword ptr [ebx + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C75AE; /* 0x171C7618: jne 0x171c75ae */
L_171C761A:
    ebx = MEM32(ebx + 0x10); /* 0x171C761A: mov ebx, dword ptr [ebx + 0x10] */
    /* test ebx, ebx */ /* 0x171C761D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C75AB; /* 0x171C761F: jne 0x171c75ab */
L_171C7621:
    edi = POP32_VAL(esp); /* 0x171C7621: pop edi */
L_171C7622:
    eax = MEM32(esi + 0xD2C); /* 0x171C7622: mov eax, dword ptr [esi + 0xd2c] */
    /* cmp eax, 0x170D023Cu */ /* 0x171C7628: cmp eax, 0x170d023c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x170D023Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = POP32_VAL(esp); /* 0x171C762D: pop ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C763A; /* 0x171C762E: je 0x171c763a */
L_171C7630:
    PUSH32(esp, MEM32(esi + 0xD38)); /* 0x171C7630: push dword ptr [esi + 0xd38] */
    RECOMP_ICALL(eax); /* 0x171C7636: call eax */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171C7638: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171C7639: ret  */
L_171C763A:
    RECOMP_ICALL(MEM32(esi + 0x8C)); /* 0x171C763A: call dword ptr [esi + 0x8c] */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171C7640: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171C7641: ret  */
    RECOMP_REGS_OUT();
}

void sub_171C7647(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C7647u);

L_171C7647:
    edi = edi; /* 0x171C7647: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C7649: push ebp */
    ebp = esp; /* 0x171C764A: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171C764C: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171C764D: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0xD20); /* 0x171C7650: mov eax, dword ptr [esi + 0xd20] */
    /* cmp eax, 0x171C6490u */ /* 0x171C7656: cmp eax, 0x171c6490 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x171C6490u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C7669; /* 0x171C765B: je 0x171c7669 */
L_171C765D:
    PUSH32(esp, MEM32(esi + 0xD38)); /* 0x171C765D: push dword ptr [esi + 0xd38] */
    PUSH32(esp, 6); /* 0x171C7663: push 6 */
    RECOMP_ICALL(eax); /* 0x171C7665: call eax */
    RECOMP_FLAGS_IN();
    goto L_171C7671; /* 0x171C7667: jmp 0x171c7671 */
L_171C7669:
    PUSH32(esp, 6); /* 0x171C7669: push 6 */
    RECOMP_ICALL(MEM32(esi + 0x80)); /* 0x171C766B: call dword ptr [esi + 0x80] */
    RECOMP_FLAGS_IN();
L_171C7671:
    eax = MEM32(esi + 0xD28); /* 0x171C7671: mov eax, dword ptr [esi + 0xd28] */
    PUSH32(esp, ebx); /* 0x171C7677: push ebx */
    ebx = 0x171C6490u; /* 0x171C7678: mov ebx, 0x171c6490 */
    /* cmp eax, ebx */ /* 0x171C767D: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x171C767F: push edi */
    edi = MEM32(ebp + 0xC); /* 0x171C7680: mov edi, dword ptr [ebp + 0xc] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C7695; /* 0x171C7683: je 0x171c7695 */
L_171C7685:
    PUSH32(esp, MEM32(esi + 0xD38)); /* 0x171C7685: push dword ptr [esi + 0xd38] */
    ecx = MEM32(edi + 0x10); /* 0x171C768B: mov ecx, dword ptr [edi + 0x10] */
    PUSH32(esp, MEM32(ecx + 0xC)); /* 0x171C768E: push dword ptr [ecx + 0xc] */
    RECOMP_ICALL(eax); /* 0x171C7691: call eax */
    RECOMP_FLAGS_IN();
    goto L_171C76A1; /* 0x171C7693: jmp 0x171c76a1 */
L_171C7695:
    eax = MEM32(edi + 0x10); /* 0x171C7695: mov eax, dword ptr [edi + 0x10] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x171C7698: push dword ptr [eax + 0xc] */
    RECOMP_ICALL(MEM32(esi + 0x88)); /* 0x171C769B: call dword ptr [esi + 0x88] */
    RECOMP_FLAGS_IN();
L_171C76A1:
    eax = MEM32(esi + 0xD28); /* 0x171C76A1: mov eax, dword ptr [esi + 0xd28] */
    /* cmp eax, ebx */ /* 0x171C76A7: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C76CD; /* 0x171C76A9: je 0x171c76cd */
L_171C76AB:
    ecx = MEM32(edi + 0x4); /* 0x171C76AB: mov ecx, dword ptr [edi + 4] */
    PUSH32(esp, MEM32(esi + 0xD38)); /* 0x171C76AE: push dword ptr [esi + 0xd38] */
    ecx = MEM32(ecx + 0x10); /* 0x171C76B4: mov ecx, dword ptr [ecx + 0x10] */
    PUSH32(esp, MEM32(ecx + 0xC)); /* 0x171C76B7: push dword ptr [ecx + 0xc] */
    RECOMP_ICALL(eax); /* 0x171C76BA: call eax */
    RECOMP_FLAGS_IN();
    goto L_171C76DC; /* 0x171C76BC: jmp 0x171c76dc */
L_171C76BE:
    /* cmp MEM8(eax + 0x14), 0 */ /* 0x171C76BE: cmp byte ptr [eax + 0x14], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x14)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C76E5; /* 0x171C76C2: jne 0x171c76e5 */
L_171C76C4:
    MEM8(eax + 0x14) = (uint8_t)(1); /* 0x171C76C4: mov byte ptr [eax + 0x14], 1 */
    edi = MEM32(edi + 0x8); /* 0x171C76C8: mov edi, dword ptr [edi + 8] */
    RECOMP_BACKEDGE();
    goto L_171C76A1; /* 0x171C76CB: jmp 0x171c76a1 */
L_171C76CD:
    eax = MEM32(edi + 0x4); /* 0x171C76CD: mov eax, dword ptr [edi + 4] */
    eax = MEM32(eax + 0x10); /* 0x171C76D0: mov eax, dword ptr [eax + 0x10] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x171C76D3: push dword ptr [eax + 0xc] */
    RECOMP_ICALL(MEM32(esi + 0x88)); /* 0x171C76D6: call dword ptr [esi + 0x88] */
    RECOMP_FLAGS_IN();
L_171C76DC:
    eax = MEM32(edi + 0x14); /* 0x171C76DC: mov eax, dword ptr [edi + 0x14] */
    /* cmp MEM8(eax + 0x15), 0 */ /* 0x171C76DF: cmp byte ptr [eax + 0x15], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x15)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C76BE; /* 0x171C76E3: jne 0x171c76be */
L_171C76E5:
    eax = MEM32(esi + 0xD2C); /* 0x171C76E5: mov eax, dword ptr [esi + 0xd2c] */
    /* cmp eax, 0x170D023Cu */ /* 0x171C76EB: cmp eax, 0x170d023c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x170D023Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x171C76F0: pop edi */
    ebx = POP32_VAL(esp); /* 0x171C76F1: pop ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C76FE; /* 0x171C76F2: je 0x171c76fe */
L_171C76F4:
    PUSH32(esp, MEM32(esi + 0xD38)); /* 0x171C76F4: push dword ptr [esi + 0xd38] */
    RECOMP_ICALL(eax); /* 0x171C76FA: call eax */
    RECOMP_FLAGS_IN();
    goto L_171C7704; /* 0x171C76FC: jmp 0x171c7704 */
L_171C76FE:
    RECOMP_ICALL(MEM32(esi + 0x8C)); /* 0x171C76FE: call dword ptr [esi + 0x8c] */
    RECOMP_FLAGS_IN();
L_171C7704:
    esi = POP32_VAL(esp); /* 0x171C7704: pop esi */
    ebp = POP32_VAL(esp); /* 0x171C7705: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171C7706: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171C770E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C770Eu);

L_171C770E:
    edi = edi; /* 0x171C770E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C7710: push ebp */
    ebp = esp; /* 0x171C7711: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171C7713: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171C7714: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0xD20); /* 0x171C7717: mov eax, dword ptr [esi + 0xd20] */
    /* cmp eax, 0x171C6490u */ /* 0x171C771D: cmp eax, 0x171c6490 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x171C6490u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C7730; /* 0x171C7722: je 0x171c7730 */
L_171C7724:
    PUSH32(esp, MEM32(esi + 0xD38)); /* 0x171C7724: push dword ptr [esi + 0xd38] */
    PUSH32(esp, 5); /* 0x171C772A: push 5 */
    RECOMP_ICALL(eax); /* 0x171C772C: call eax */
    RECOMP_FLAGS_IN();
    goto L_171C7738; /* 0x171C772E: jmp 0x171c7738 */
L_171C7730:
    PUSH32(esp, 5); /* 0x171C7730: push 5 */
    RECOMP_ICALL(MEM32(esi + 0x80)); /* 0x171C7732: call dword ptr [esi + 0x80] */
    RECOMP_FLAGS_IN();
L_171C7738:
    eax = MEM32(esi + 0xD28); /* 0x171C7738: mov eax, dword ptr [esi + 0xd28] */
    PUSH32(esp, ebx); /* 0x171C773E: push ebx */
    ebx = 0x171C6490u; /* 0x171C773F: mov ebx, 0x171c6490 */
    /* cmp eax, ebx */ /* 0x171C7744: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x171C7746: push edi */
    edi = MEM32(ebp + 0xC); /* 0x171C7747: mov edi, dword ptr [ebp + 0xc] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C775C; /* 0x171C774A: je 0x171c775c */
L_171C774C:
    PUSH32(esp, MEM32(esi + 0xD38)); /* 0x171C774C: push dword ptr [esi + 0xd38] */
    ecx = MEM32(edi + 0x10); /* 0x171C7752: mov ecx, dword ptr [edi + 0x10] */
    PUSH32(esp, MEM32(ecx + 0xC)); /* 0x171C7755: push dword ptr [ecx + 0xc] */
    RECOMP_ICALL(eax); /* 0x171C7758: call eax */
    RECOMP_FLAGS_IN();
    goto L_171C7768; /* 0x171C775A: jmp 0x171c7768 */
L_171C775C:
    eax = MEM32(edi + 0x10); /* 0x171C775C: mov eax, dword ptr [edi + 0x10] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x171C775F: push dword ptr [eax + 0xc] */
    RECOMP_ICALL(MEM32(esi + 0x88)); /* 0x171C7762: call dword ptr [esi + 0x88] */
    RECOMP_FLAGS_IN();
L_171C7768:
    eax = MEM32(esi + 0xD28); /* 0x171C7768: mov eax, dword ptr [esi + 0xd28] */
    /* cmp eax, ebx */ /* 0x171C776E: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C77D3; /* 0x171C7770: je 0x171c77d3 */
L_171C7772:
    ecx = MEM32(edi + 0x4); /* 0x171C7772: mov ecx, dword ptr [edi + 4] */
    PUSH32(esp, MEM32(esi + 0xD38)); /* 0x171C7775: push dword ptr [esi + 0xd38] */
    ecx = MEM32(ecx + 0x10); /* 0x171C777B: mov ecx, dword ptr [ecx + 0x10] */
    PUSH32(esp, MEM32(ecx + 0xC)); /* 0x171C777E: push dword ptr [ecx + 0xc] */
    RECOMP_ICALL(eax); /* 0x171C7781: call eax */
    RECOMP_FLAGS_IN();
    goto L_171C77E2; /* 0x171C7783: jmp 0x171c77e2 */
L_171C7785:
    /* cmp MEM8(eax + 0x14), 0 */ /* 0x171C7785: cmp byte ptr [eax + 0x14], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x14)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C77EB; /* 0x171C7789: jne 0x171c77eb */
L_171C778B:
    MEM8(eax + 0x14) = (uint8_t)(1); /* 0x171C778B: mov byte ptr [eax + 0x14], 1 */
    eax = MEM32(edi + 0xC); /* 0x171C778F: mov eax, dword ptr [edi + 0xc] */
    edi = MEM32(eax + 0x4); /* 0x171C7792: mov edi, dword ptr [eax + 4] */
    eax = MEM32(esi + 0xD28); /* 0x171C7795: mov eax, dword ptr [esi + 0xd28] */
    /* cmp eax, ebx */ /* 0x171C779B: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C77AF; /* 0x171C779D: je 0x171c77af */
L_171C779F:
    PUSH32(esp, MEM32(esi + 0xD38)); /* 0x171C779F: push dword ptr [esi + 0xd38] */
    ecx = MEM32(edi + 0x10); /* 0x171C77A5: mov ecx, dword ptr [edi + 0x10] */
    PUSH32(esp, MEM32(ecx + 0xC)); /* 0x171C77A8: push dword ptr [ecx + 0xc] */
    RECOMP_ICALL(eax); /* 0x171C77AB: call eax */
    RECOMP_FLAGS_IN();
    goto L_171C77BB; /* 0x171C77AD: jmp 0x171c77bb */
L_171C77AF:
    eax = MEM32(edi + 0x10); /* 0x171C77AF: mov eax, dword ptr [edi + 0x10] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x171C77B2: push dword ptr [eax + 0xc] */
    RECOMP_ICALL(MEM32(esi + 0x88)); /* 0x171C77B5: call dword ptr [esi + 0x88] */
    RECOMP_FLAGS_IN();
L_171C77BB:
    eax = MEM32(edi + 0x14); /* 0x171C77BB: mov eax, dword ptr [edi + 0x14] */
    /* cmp MEM8(eax + 0x15), 0 */ /* 0x171C77BE: cmp byte ptr [eax + 0x15], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x15)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C77EB; /* 0x171C77C2: je 0x171c77eb */
L_171C77C4:
    /* cmp MEM8(eax + 0x14), 0 */ /* 0x171C77C4: cmp byte ptr [eax + 0x14], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x14)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C77EB; /* 0x171C77C8: jne 0x171c77eb */
L_171C77CA:
    MEM8(eax + 0x14) = (uint8_t)(1); /* 0x171C77CA: mov byte ptr [eax + 0x14], 1 */
    edi = MEM32(edi + 0x8); /* 0x171C77CE: mov edi, dword ptr [edi + 8] */
    RECOMP_BACKEDGE();
    goto L_171C7768; /* 0x171C77D1: jmp 0x171c7768 */
L_171C77D3:
    eax = MEM32(edi + 0x4); /* 0x171C77D3: mov eax, dword ptr [edi + 4] */
    eax = MEM32(eax + 0x10); /* 0x171C77D6: mov eax, dword ptr [eax + 0x10] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x171C77D9: push dword ptr [eax + 0xc] */
    RECOMP_ICALL(MEM32(esi + 0x88)); /* 0x171C77DC: call dword ptr [esi + 0x88] */
    RECOMP_FLAGS_IN();
L_171C77E2:
    eax = MEM32(edi + 0x14); /* 0x171C77E2: mov eax, dword ptr [edi + 0x14] */
    /* cmp MEM8(eax + 0x15), 0 */ /* 0x171C77E5: cmp byte ptr [eax + 0x15], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x15)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C7785; /* 0x171C77E9: jne 0x171c7785 */
L_171C77EB:
    eax = MEM32(esi + 0xD2C); /* 0x171C77EB: mov eax, dword ptr [esi + 0xd2c] */
    /* cmp eax, 0x170D023Cu */ /* 0x171C77F1: cmp eax, 0x170d023c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x170D023Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x171C77F6: pop edi */
    ebx = POP32_VAL(esp); /* 0x171C77F7: pop ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C7804; /* 0x171C77F8: je 0x171c7804 */
L_171C77FA:
    PUSH32(esp, MEM32(esi + 0xD38)); /* 0x171C77FA: push dword ptr [esi + 0xd38] */
    RECOMP_ICALL(eax); /* 0x171C7800: call eax */
    RECOMP_FLAGS_IN();
    goto L_171C780A; /* 0x171C7802: jmp 0x171c780a */
L_171C7804:
    RECOMP_ICALL(MEM32(esi + 0x8C)); /* 0x171C7804: call dword ptr [esi + 0x8c] */
    RECOMP_FLAGS_IN();
L_171C780A:
    esi = POP32_VAL(esp); /* 0x171C780A: pop esi */
    ebp = POP32_VAL(esp); /* 0x171C780B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171C780C: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171C7814(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C7814u);

L_171C7814:
    edi = edi; /* 0x171C7814: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C7816: push ebp */
    ebp = esp; /* 0x171C7817: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x171C7819: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x40u; /* 0x171C781C: add eax, 0x40 */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x171C781F: push ebx */
    ebx = MEM32(eax); /* 0x171C7820: mov ebx, dword ptr [eax] */
    /* cmp ebx, eax */ /* 0x171C7822: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0xC) = eax; /* 0x171C7824: mov dword ptr [ebp + 0xc], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C78B3; /* 0x171C7827: je 0x171c78b3 */
L_171C782D:
    PUSH32(esp, esi); /* 0x171C782D: push esi */
    esi = MEM32(ebp + 0x8); /* 0x171C782E: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x171C7831: push edi */
L_171C7832:
    /* cmp MEM8(ebx + 0x15), 0 */ /* 0x171C7832: cmp byte ptr [ebx + 0x15], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0x15)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C78AA; /* 0x171C7836: je 0x171c78aa */
L_171C7838:
    eax = MEM32(esi + 0xD20); /* 0x171C7838: mov eax, dword ptr [esi + 0xd20] */
    /* cmp eax, 0x171C6490u */ /* 0x171C783E: cmp eax, 0x171c6490 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x171C6490u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C7851; /* 0x171C7843: je 0x171c7851 */
L_171C7845:
    PUSH32(esp, MEM32(esi + 0xD38)); /* 0x171C7845: push dword ptr [esi + 0xd38] */
    PUSH32(esp, 2); /* 0x171C784B: push 2 */
    RECOMP_ICALL(eax); /* 0x171C784D: call eax */
    RECOMP_FLAGS_IN();
    goto L_171C7859; /* 0x171C784F: jmp 0x171c7859 */
L_171C7851:
    PUSH32(esp, 2); /* 0x171C7851: push 2 */
    RECOMP_ICALL(MEM32(esi + 0x80)); /* 0x171C7853: call dword ptr [esi + 0x80] */
    RECOMP_FLAGS_IN();
L_171C7859:
    edi = MEM32(ebx + 0x8); /* 0x171C7859: mov edi, dword ptr [ebx + 8] */
L_171C785C:
    eax = MEM32(esi + 0xD28); /* 0x171C785C: mov eax, dword ptr [esi + 0xd28] */
    /* cmp eax, 0x171C6490u */ /* 0x171C7862: cmp eax, 0x171c6490 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x171C6490u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C7879; /* 0x171C7867: je 0x171c7879 */
L_171C7869:
    PUSH32(esp, MEM32(esi + 0xD38)); /* 0x171C7869: push dword ptr [esi + 0xd38] */
    ecx = MEM32(edi + 0x10); /* 0x171C786F: mov ecx, dword ptr [edi + 0x10] */
    PUSH32(esp, MEM32(ecx + 0xC)); /* 0x171C7872: push dword ptr [ecx + 0xc] */
    RECOMP_ICALL(eax); /* 0x171C7875: call eax */
    RECOMP_FLAGS_IN();
    goto L_171C7885; /* 0x171C7877: jmp 0x171c7885 */
L_171C7879:
    eax = MEM32(edi + 0x10); /* 0x171C7879: mov eax, dword ptr [edi + 0x10] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x171C787C: push dword ptr [eax + 0xc] */
    RECOMP_ICALL(MEM32(esi + 0x88)); /* 0x171C787F: call dword ptr [esi + 0x88] */
    RECOMP_FLAGS_IN();
L_171C7885:
    edi = MEM32(edi + 0xC); /* 0x171C7885: mov edi, dword ptr [edi + 0xc] */
    /* cmp edi, MEM32(ebx + 0x8) */ /* 0x171C7888: cmp edi, dword ptr [ebx + 8] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C785C; /* 0x171C788B: jne 0x171c785c */
L_171C788D:
    eax = MEM32(esi + 0xD2C); /* 0x171C788D: mov eax, dword ptr [esi + 0xd2c] */
    /* cmp eax, 0x170D023Cu */ /* 0x171C7893: cmp eax, 0x170d023c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x170D023Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C78A4; /* 0x171C7898: je 0x171c78a4 */
L_171C789A:
    PUSH32(esp, MEM32(esi + 0xD38)); /* 0x171C789A: push dword ptr [esi + 0xd38] */
    RECOMP_ICALL(eax); /* 0x171C78A0: call eax */
    RECOMP_FLAGS_IN();
    goto L_171C78AA; /* 0x171C78A2: jmp 0x171c78aa */
L_171C78A4:
    RECOMP_ICALL(MEM32(esi + 0x8C)); /* 0x171C78A4: call dword ptr [esi + 0x8c] */
    RECOMP_FLAGS_IN();
L_171C78AA:
    ebx = MEM32(ebx); /* 0x171C78AA: mov ebx, dword ptr [ebx] */
    /* cmp ebx, MEM32(ebp + 0xC) */ /* 0x171C78AC: cmp ebx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C7832; /* 0x171C78AF: jne 0x171c7832 */
L_171C78B1:
    edi = POP32_VAL(esp); /* 0x171C78B1: pop edi */
    esi = POP32_VAL(esp); /* 0x171C78B2: pop esi */
L_171C78B3:
    ebx = POP32_VAL(esp); /* 0x171C78B3: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171C78B4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171C78B5: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171C78BD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C78BDu);

L_171C78BD:
    edi = edi; /* 0x171C78BD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C78BF: push ebp */
    ebp = esp; /* 0x171C78C0: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40u; /* 0x171C78C2: sub esp, 0x40 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x171C78C5: push ebx */
    PUSH32(esp, edi); /* 0x171C78C6: push edi */
    edi = MEM32(eax + 0x98); /* 0x171C78C7: mov edi, dword ptr [eax + 0x98] */
    if (5u) _cf = (((edi) >> 27) & 1u); /* 0x171C78CD: shl edi, 5 */
    if (5u) { _flag_a = recomp_flags_pack((edi << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 5u; /* 0x171C78CD: shl edi, 5 */
    ecx = eax + 0xA0; /* 0x171C78D0: lea ecx, [eax + 0xa0] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171C78D6: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x171C78D8: add edi, ecx */
    _flag_k = FK_ADD;
    /* cmp MEM32(ebp + 0x8), ebx */ /* 0x171C78DA: cmp dword ptr [ebp + 8], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C78ED; /* 0x171C78DD: jne 0x171c78ed */
L_171C78DF:
    fp_push(0.0); /* 0x171C78DF: fldz  */
    { double _v = fp_pop(); *(double*)ADDR(esi + 0x10) = _v; } /* 0x171C78E1: fstp qword ptr [esi + 0x10] */
    fp_push(0.0); /* 0x171C78E4: fldz  */
    { double _v = fp_pop(); *(double*)ADDR(esi + 0x8) = _v; } /* 0x171C78E6: fstp qword ptr [esi + 8] */
    fp_push(0.0); /* 0x171C78E9: fldz  */
    { double _v = fp_pop(); *(double*)ADDR(esi) = _v; } /* 0x171C78EB: fstp qword ptr [esi] */
L_171C78ED:
    edx = ecx + 0x20; /* 0x171C78ED: lea edx, [ecx + 0x20] */
    fp_push(*(double*)ADDR(edx)); /* 0x171C78F0: fld qword ptr [edx] */
    _st[0] -= *(double*)ADDR(ecx); /* 0x171C78F2: fsub qword ptr [ecx] */
    fp_push(*(double*)ADDR(edx + 0x8)); /* 0x171C78F4: fld qword ptr [edx + 8] */
    _st[0] -= *(double*)ADDR(ecx + 0x8); /* 0x171C78F7: fsub qword ptr [ecx + 8] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x171C78FA: fstp qword ptr [ebp - 8] */
    fp_push(*(double*)ADDR(edx + 0x10)); /* 0x171C78FD: fld qword ptr [edx + 0x10] */
    _st[0] -= *(double*)ADDR(ecx + 0x10); /* 0x171C7900: fsub qword ptr [ecx + 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x171C7903: fstp qword ptr [ebp - 0x10] */
    goto L_171C79EE; /* 0x171C7906: jmp 0x171c79ee */
L_171C790B:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x171C790B: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x20)) = _v; } /* 0x171C790F: fstp qword ptr [ebp - 0x20] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x171C7912: fld qword ptr [ebp - 8] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x28)) = _v; } /* 0x171C7915: fstp qword ptr [ebp - 0x28] */
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x171C7918: fld qword ptr [ebp - 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x18)) = _v; } /* 0x171C791B: fstp qword ptr [ebp - 0x18] */
    fp_push(*(double*)ADDR(edx)); /* 0x171C791E: fld qword ptr [edx] */
    _st[0] -= *(double*)ADDR(ecx); /* 0x171C7920: fsub qword ptr [ecx] */
    fp_push(*(double*)ADDR(edx + 0x8)); /* 0x171C7922: fld qword ptr [edx + 8] */
    _st[0] -= *(double*)ADDR(ecx + 0x8); /* 0x171C7925: fsub qword ptr [ecx + 8] */
    *(double*)ADDR(ebp + (-0x8)) = _st[0]; /* 0x171C7928: fst qword ptr [ebp - 8] */
    fp_push(*(double*)ADDR(edx + 0x10)); /* 0x171C792B: fld qword ptr [edx + 0x10] */
    _st[0] -= *(double*)ADDR(ecx + 0x10); /* 0x171C792E: fsub qword ptr [ecx + 0x10] */
    *(double*)ADDR(ebp + (-0x10)) = _st[0]; /* 0x171C7931: fst qword ptr [ebp - 0x10] */
    fp_push(*(double*)ADDR(ebp + (-0x28))); /* 0x171C7934: fld qword ptr [ebp - 0x28] */
    _st[0] *= _st[1]; /* 0x171C7937: fmul st(1) */
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x171C7939: fld qword ptr [ebp - 0x18] */
    _st[0] *= _st[3]; /* 0x171C793C: fmul st(3) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x171C793E: fsubp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x40)) = _v; } /* 0x171C7940: fstp qword ptr [ebp - 0x40] */
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x171C7943: fld qword ptr [ebp - 0x18] */
    _st[0] *= _st[3]; /* 0x171C7946: fmul st(3) */
    fp_push(*(double*)ADDR(ebp + (-0x20))); /* 0x171C7948: fld qword ptr [ebp - 0x20] */
    _st[0] *= _st[2]; /* 0x171C794B: fmul st(2) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x171C794D: fsubp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x38)) = _v; } /* 0x171C794F: fstp qword ptr [ebp - 0x38] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171C7952: fstp st(0) */
    fp_push(*(double*)ADDR(ebp + (-0x20))); /* 0x171C7954: fld qword ptr [ebp - 0x20] */
    _st[0] *= _st[1]; /* 0x171C7957: fmul st(1) */
    fp_push(*(double*)ADDR(ebp + (-0x28))); /* 0x171C7959: fld qword ptr [ebp - 0x28] */
    _st[0] *= _st[3]; /* 0x171C795C: fmul st(3) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x171C795E: fsubp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x30)) = _v; } /* 0x171C7960: fstp qword ptr [ebp - 0x30] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171C7963: fstp st(0) */
    fp_push(*(double*)ADDR(ebp + (-0x30))); /* 0x171C7965: fld qword ptr [ebp - 0x30] */
    _st[0] *= *(double*)ADDR(esi + 0x10); /* 0x171C7968: fmul qword ptr [esi + 0x10] */
    fp_push(*(double*)ADDR(ebp + (-0x38))); /* 0x171C796B: fld qword ptr [ebp - 0x38] */
    _st[0] *= *(double*)ADDR(esi + 0x8); /* 0x171C796E: fmul qword ptr [esi + 8] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x171C7971: faddp st(1) */
    fp_push(*(double*)ADDR(ebp + (-0x40))); /* 0x171C7973: fld qword ptr [ebp - 0x40] */
    _st[0] *= *(double*)ADDR(esi); /* 0x171C7976: fmul qword ptr [esi] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x171C7978: faddp st(1) */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C79BC; /* 0x171C797A: jne 0x171c79bc */
L_171C797C:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x171C797C: fcomp qword ptr [0x17001d90] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C7982: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x171C7984: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C79A4; /* 0x171C7987: jne 0x171c79a4 */
L_171C7989:
    fp_push(*(double*)ADDR(ebp + (-0x40))); /* 0x171C7989: fld qword ptr [ebp - 0x40] */
    _st[0] += *(double*)ADDR(esi); /* 0x171C798C: fadd qword ptr [esi] */
    { double _v = fp_pop(); *(double*)ADDR(esi) = _v; } /* 0x171C798E: fstp qword ptr [esi] */
    fp_push(*(double*)ADDR(ebp + (-0x38))); /* 0x171C7990: fld qword ptr [ebp - 0x38] */
    _st[0] += *(double*)ADDR(esi + 0x8); /* 0x171C7993: fadd qword ptr [esi + 8] */
    { double _v = fp_pop(); *(double*)ADDR(esi + 0x8) = _v; } /* 0x171C7996: fstp qword ptr [esi + 8] */
    fp_push(*(double*)ADDR(ebp + (-0x30))); /* 0x171C7999: fld qword ptr [ebp - 0x30] */
    _st[0] += *(double*)ADDR(esi + 0x10); /* 0x171C799C: fadd qword ptr [esi + 0x10] */
L_171C799F:
    { double _v = fp_pop(); *(double*)ADDR(esi + 0x10) = _v; } /* 0x171C799F: fstp qword ptr [esi + 0x10] */
    goto L_171C79EE; /* 0x171C79A2: jmp 0x171c79ee */
L_171C79A4:
    fp_push(*(double*)ADDR(esi)); /* 0x171C79A4: fld qword ptr [esi] */
    _st[0] -= *(double*)ADDR(ebp + (-0x40)); /* 0x171C79A6: fsub qword ptr [ebp - 0x40] */
    { double _v = fp_pop(); *(double*)ADDR(esi) = _v; } /* 0x171C79A9: fstp qword ptr [esi] */
    fp_push(*(double*)ADDR(esi + 0x8)); /* 0x171C79AB: fld qword ptr [esi + 8] */
    _st[0] -= *(double*)ADDR(ebp + (-0x38)); /* 0x171C79AE: fsub qword ptr [ebp - 0x38] */
    { double _v = fp_pop(); *(double*)ADDR(esi + 0x8) = _v; } /* 0x171C79B1: fstp qword ptr [esi + 8] */
    fp_push(*(double*)ADDR(esi + 0x10)); /* 0x171C79B4: fld qword ptr [esi + 0x10] */
    _st[0] -= *(double*)ADDR(ebp + (-0x30)); /* 0x171C79B7: fsub qword ptr [ebp - 0x30] */
    RECOMP_BACKEDGE();
    goto L_171C799F; /* 0x171C79BA: jmp 0x171c799f */
L_171C79BC:
    fp_push(*(double*)ADDR(0x17001D90)); /* 0x171C79BC: fld qword ptr [0x17001d90] */
    fp_push(_st[1]); /* 0x171C79C2: fld st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C79C4: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C79C6: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C79C8: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171C79EC; /* 0x171C79CB: jnp 0x171c79ec */
L_171C79CD:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x171C79CD: fcomp qword ptr [0x17001d90] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C79D3: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171C79D5: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C79E3; /* 0x171C79D8: jne 0x171c79e3 */
L_171C79DA:
    /* test ebx, ebx */ /* 0x171C79DA: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171C7A03; /* 0x171C79DC: jl 0x171c7a03 */
L_171C79DE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171C79DE: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x171C79E0: inc ebx */
    _flag_k = FK_INC;
    goto L_171C79EE; /* 0x171C79E1: jmp 0x171c79ee */
L_171C79E3:
    /* test ebx, ebx */ /* 0x171C79E3: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_171C7A03; /* 0x171C79E5: jg 0x171c7a03 */
L_171C79E7:
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x171C79E7: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171C79EE; /* 0x171C79EA: jmp 0x171c79ee */
L_171C79EC:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171C79EC: fstp st(0) */
L_171C79EE:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x20u; /* 0x171C79EE: add edx, 0x20 */
    _flag_k = FK_ADD;
    /* cmp edx, edi */ /* 0x171C79F1: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171C790B; /* 0x171C79F3: jb 0x171c790b */
L_171C79F9:
    eax = ebx; /* 0x171C79F9: mov eax, ebx */
L_171C79FB:
    edi = POP32_VAL(esp); /* 0x171C79FB: pop edi */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171C79FC: fstp st(0) */
    ebx = POP32_VAL(esp); /* 0x171C79FE: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171C79FF: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171C7A00: ret 4 */
L_171C7A03:
    PUSH32(esp, 2); /* 0x171C7A03: push 2 */
    eax = POP32_VAL(esp); /* 0x171C7A05: pop eax */
    RECOMP_BACKEDGE();
    goto L_171C79FB; /* 0x171C7A06: jmp 0x171c79fb */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171C7A0D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C7A0Du);

L_171C7A0D:
    edi = edi; /* 0x171C7A0D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C7A0F: push ebp */
    ebp = esp; /* 0x171C7A10: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x171C7A12: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x171C7A15: push edi */
    edi = MEM32(ebp + 0x8); /* 0x171C7A16: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0x98); /* 0x171C7A19: mov eax, dword ptr [edi + 0x98] */
    ecx = eax; /* 0x171C7A1F: mov ecx, eax */
    if (5u) _cf = (((ecx) >> 27) & 1u); /* 0x171C7A21: shl ecx, 5 */
    if (5u) { _flag_a = recomp_flags_pack((ecx << 5u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 5u; /* 0x171C7A21: shl ecx, 5 */
    edx = edi + 0xA0; /* 0x171C7A24: lea edx, [edi + 0xa0] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x171C7A2A: add ecx, edx */
    _flag_k = FK_ADD;
    /* cmp eax, 3 */ /* 0x171C7A2C: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + 0x8) = ecx; /* 0x171C7A2F: mov dword ptr [ebp + 8], ecx */
    if (CMP_GE(_flag_a, _flag_b)) goto L_171C7A3B; /* 0x171C7A32: jge 0x171c7a3b */
L_171C7A34:
    SET_LO8(eax, 1); /* 0x171C7A34: mov al, 1 */
    goto L_171C7BE6; /* 0x171C7A36: jmp 0x171c7be6 */
L_171C7A3B:
    fp_push(*(double*)ADDR(edi + 0x10)); /* 0x171C7A3B: fld qword ptr [edi + 0x10] */
    PUSH32(esp, esi); /* 0x171C7A3E: push esi */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x18)) = _v; } /* 0x171C7A3F: fstp qword ptr [ebp - 0x18] */
    fp_push(*(double*)ADDR(edi + 0x18)); /* 0x171C7A42: fld qword ptr [edi + 0x18] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x171C7A45: fstp qword ptr [ebp - 0x10] */
    fp_push(*(double*)ADDR(edi + 0x20)); /* 0x171C7A48: fld qword ptr [edi + 0x20] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x171C7A4B: fstp qword ptr [ebp - 8] */
    fp_push(*(double*)ADDR(0x17001D90)); /* 0x171C7A4E: fld qword ptr [0x17001d90] */
    fp_push(*(double*)ADDR(ebp + (-0x18))); /* 0x171C7A54: fld qword ptr [ebp - 0x18] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C7A57: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C7A59: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C7A5B: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C7A90; /* 0x171C7A5E: jp 0x171c7a90 */
L_171C7A60:
    fp_push(*(double*)ADDR(0x17001D90)); /* 0x171C7A60: fld qword ptr [0x17001d90] */
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x171C7A66: fld qword ptr [ebp - 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C7A69: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C7A6B: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C7A6D: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C7A90; /* 0x171C7A70: jp 0x171c7a90 */
L_171C7A72:
    fp_push(*(double*)ADDR(0x17001D90)); /* 0x171C7A72: fld qword ptr [0x17001d90] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x171C7A78: fld qword ptr [ebp - 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C7A7B: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C7A7D: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C7A7F: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C7A90; /* 0x171C7A82: jp 0x171c7a90 */
L_171C7A84:
    PUSH32(esp, 0); /* 0x171C7A84: push 0 */
    esi = ebp + (-0x18); /* 0x171C7A86: lea esi, [ebp - 0x18] */
    eax = edi; /* 0x171C7A89: mov eax, edi */
    RECOMP_CALL(sub_171C78BD); /* 0x171C7A8B: call 0x171c78bd */
    RECOMP_FLAGS_IN();
L_171C7A90:
    PUSH32(esp, 1); /* 0x171C7A90: push 1 */
    esi = ebp + (-0x18); /* 0x171C7A92: lea esi, [ebp - 0x18] */
    eax = edi; /* 0x171C7A95: mov eax, edi */
    RECOMP_CALL(sub_171C78BD); /* 0x171C7A97: call 0x171c78bd */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x171C7A9C: mov esi, eax */
    /* cmp esi, 2 */ /* 0x171C7A9E: cmp esi, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C7AAA; /* 0x171C7AA1: jne 0x171c7aaa */
L_171C7AA3:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x171C7AA3: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    goto L_171C7BE5; /* 0x171C7AA5: jmp 0x171c7be5 */
L_171C7AAA:
    /* test esi, esi */ /* 0x171C7AAA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171C7BE3; /* 0x171C7AAC: je 0x171c7be3 */
L_171C7AB2:
    eax = MEM32(edi + 0x60); /* 0x171C7AB2: mov eax, dword ptr [edi + 0x60] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00018724u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x00018724u; /* 0x171C7AB5: sub eax, 0x18724 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_171C7AD0; /* 0x171C7ABA: je 0x171c7ad0 */
L_171C7ABC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171C7ABC: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_171C7AC7; /* 0x171C7ABD: je 0x171c7ac7 */
L_171C7ABF:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x171C7ABF: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171C7AD8; /* 0x171C7AC0: jne 0x171c7ad8 */
L_171C7AC2:
    goto L_171C7BE3; /* 0x171C7AC2: jmp 0x171c7be3 */
L_171C7AC7:
    /* test esi, esi */ /* 0x171C7AC7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171C7AD8; /* 0x171C7AC9: jle 0x171c7ad8 */
L_171C7ACB:
    goto L_171C7BE3; /* 0x171C7ACB: jmp 0x171c7be3 */
L_171C7AD0:
    /* test esi, esi */ /* 0x171C7AD0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171C7BE3; /* 0x171C7AD2: jl 0x171c7be3 */
L_171C7AD8:
    ecx = MEM32(edi + 0xD20); /* 0x171C7AD8: mov ecx, dword ptr [edi + 0xd20] */
    /* cmp ecx, 0x171C6490u */ /* 0x171C7ADE: cmp ecx, 0x171c6490 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x171C6490u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C7B0C; /* 0x171C7AE4: je 0x171c7b0c */
L_171C7AE6:
    /* cmp MEM8(edi + 0x79), 0 */ /* 0x171C7AE6: cmp byte ptr [edi + 0x79], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x79)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C7AF1; /* 0x171C7AEA: je 0x171c7af1 */
L_171C7AEC:
    PUSH32(esp, 2); /* 0x171C7AEC: push 2 */
    eax = POP32_VAL(esp); /* 0x171C7AEE: pop eax */
    goto L_171C7B01; /* 0x171C7AEF: jmp 0x171c7b01 */
L_171C7AF1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171C7AF1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x98), 3 */ /* 0x171C7AF3: cmp dword ptr [edi + 0x98], 3 */
    _flag_a = (uint32_t)(MEM32(edi + 0x98)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_G(_flag_a, _flag_b)) ? 1 : 0); /* 0x171C7AFA: setg al */
    eax = eax + eax + 0x4; /* 0x171C7AFD: lea eax, [eax + eax + 4] */
L_171C7B01:
    PUSH32(esp, MEM32(edi + 0xD38)); /* 0x171C7B01: push dword ptr [edi + 0xd38] */
    PUSH32(esp, eax); /* 0x171C7B07: push eax */
    RECOMP_ICALL(ecx); /* 0x171C7B08: call ecx */
    RECOMP_FLAGS_IN();
    goto L_171C7B2E; /* 0x171C7B0A: jmp 0x171c7b2e */
L_171C7B0C:
    /* cmp MEM8(edi + 0x79), 0 */ /* 0x171C7B0C: cmp byte ptr [edi + 0x79], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x79)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C7B17; /* 0x171C7B10: je 0x171c7b17 */
L_171C7B12:
    PUSH32(esp, 2); /* 0x171C7B12: push 2 */
    eax = POP32_VAL(esp); /* 0x171C7B14: pop eax */
    goto L_171C7B27; /* 0x171C7B15: jmp 0x171c7b27 */
L_171C7B17:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171C7B17: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + 0x98), 3 */ /* 0x171C7B19: cmp dword ptr [edi + 0x98], 3 */
    _flag_a = (uint32_t)(MEM32(edi + 0x98)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_G(_flag_a, _flag_b)) ? 1 : 0); /* 0x171C7B20: setg al */
    eax = eax + eax + 0x4; /* 0x171C7B23: lea eax, [eax + eax + 4] */
L_171C7B27:
    PUSH32(esp, eax); /* 0x171C7B27: push eax */
    RECOMP_ICALL(MEM32(edi + 0x80)); /* 0x171C7B28: call dword ptr [edi + 0x80] */
    RECOMP_FLAGS_IN();
L_171C7B2E:
    eax = MEM32(edi + 0xD28); /* 0x171C7B2E: mov eax, dword ptr [edi + 0xd28] */
    PUSH32(esp, ebx); /* 0x171C7B34: push ebx */
    ebx = 0x171C6490u; /* 0x171C7B35: mov ebx, 0x171c6490 */
    /* cmp eax, ebx */ /* 0x171C7B3A: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C7B4E; /* 0x171C7B3C: je 0x171c7b4e */
L_171C7B3E:
    PUSH32(esp, MEM32(edi + 0xD38)); /* 0x171C7B3E: push dword ptr [edi + 0xd38] */
    PUSH32(esp, MEM32(edi + 0xB8)); /* 0x171C7B44: push dword ptr [edi + 0xb8] */
    RECOMP_ICALL(eax); /* 0x171C7B4A: call eax */
    RECOMP_FLAGS_IN();
    goto L_171C7B5A; /* 0x171C7B4C: jmp 0x171c7b5a */
L_171C7B4E:
    PUSH32(esp, MEM32(edi + 0xB8)); /* 0x171C7B4E: push dword ptr [edi + 0xb8] */
    RECOMP_ICALL(MEM32(edi + 0x88)); /* 0x171C7B54: call dword ptr [edi + 0x88] */
    RECOMP_FLAGS_IN();
L_171C7B5A:
    /* test esi, esi */ /* 0x171C7B5A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_171C7B90; /* 0x171C7B5C: jle 0x171c7b90 */
L_171C7B5E:
    esi = edi + 0xC0; /* 0x171C7B5E: lea esi, [edi + 0xc0] */
    goto L_171C7B89; /* 0x171C7B64: jmp 0x171c7b89 */
L_171C7B66:
    eax = MEM32(edi + 0xD28); /* 0x171C7B66: mov eax, dword ptr [edi + 0xd28] */
    /* cmp eax, ebx */ /* 0x171C7B6C: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C7B7D; /* 0x171C7B6E: je 0x171c7b7d */
L_171C7B70:
    PUSH32(esp, MEM32(edi + 0xD38)); /* 0x171C7B70: push dword ptr [edi + 0xd38] */
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x171C7B76: push dword ptr [esi + 0x18] */
    RECOMP_ICALL(eax); /* 0x171C7B79: call eax */
    RECOMP_FLAGS_IN();
    goto L_171C7B86; /* 0x171C7B7B: jmp 0x171c7b86 */
L_171C7B7D:
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x171C7B7D: push dword ptr [esi + 0x18] */
    RECOMP_ICALL(MEM32(edi + 0x88)); /* 0x171C7B80: call dword ptr [edi + 0x88] */
    RECOMP_FLAGS_IN();
L_171C7B86:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x20u; /* 0x171C7B86: add esi, 0x20 */
    _flag_k = FK_ADD;
L_171C7B89:
    /* cmp esi, MEM32(ebp + 0x8) */ /* 0x171C7B89: cmp esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_171C7B66; /* 0x171C7B8C: jb 0x171c7b66 */
L_171C7B8E:
    goto L_171C7BC5; /* 0x171C7B8E: jmp 0x171c7bc5 */
L_171C7B90:
    esi = MEM32(ebp + 0x8); /* 0x171C7B90: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xFFFFFFE0u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0xFFFFFFE0u; /* 0x171C7B93: add esi, -0x20 */
    _flag_k = FK_ADD;
    goto L_171C7BBB; /* 0x171C7B96: jmp 0x171c7bbb */
L_171C7B98:
    eax = MEM32(edi + 0xD28); /* 0x171C7B98: mov eax, dword ptr [edi + 0xd28] */
    /* cmp eax, ebx */ /* 0x171C7B9E: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C7BAF; /* 0x171C7BA0: je 0x171c7baf */
L_171C7BA2:
    PUSH32(esp, MEM32(edi + 0xD38)); /* 0x171C7BA2: push dword ptr [edi + 0xd38] */
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x171C7BA8: push dword ptr [esi + 0x18] */
    RECOMP_ICALL(eax); /* 0x171C7BAB: call eax */
    RECOMP_FLAGS_IN();
    goto L_171C7BB8; /* 0x171C7BAD: jmp 0x171c7bb8 */
L_171C7BAF:
    PUSH32(esp, MEM32(esi + 0x18)); /* 0x171C7BAF: push dword ptr [esi + 0x18] */
    RECOMP_ICALL(MEM32(edi + 0x88)); /* 0x171C7BB2: call dword ptr [edi + 0x88] */
    RECOMP_FLAGS_IN();
L_171C7BB8:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 0x20u; /* 0x171C7BB8: sub esi, 0x20 */
    _flag_k = FK_CMP;
L_171C7BBB:
    eax = edi + 0xA0; /* 0x171C7BBB: lea eax, [edi + 0xa0] */
    /* cmp esi, eax */ /* 0x171C7BC1: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_171C7B98; /* 0x171C7BC3: ja 0x171c7b98 */
L_171C7BC5:
    eax = MEM32(edi + 0xD2C); /* 0x171C7BC5: mov eax, dword ptr [edi + 0xd2c] */
    /* cmp eax, 0x170D023Cu */ /* 0x171C7BCB: cmp eax, 0x170d023c */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x170D023Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = POP32_VAL(esp); /* 0x171C7BD0: pop ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C7BDD; /* 0x171C7BD1: je 0x171c7bdd */
L_171C7BD3:
    PUSH32(esp, MEM32(edi + 0xD38)); /* 0x171C7BD3: push dword ptr [edi + 0xd38] */
    RECOMP_ICALL(eax); /* 0x171C7BD9: call eax */
    RECOMP_FLAGS_IN();
    goto L_171C7BE3; /* 0x171C7BDB: jmp 0x171c7be3 */
L_171C7BDD:
    RECOMP_ICALL(MEM32(edi + 0x8C)); /* 0x171C7BDD: call dword ptr [edi + 0x8c] */
    RECOMP_FLAGS_IN();
L_171C7BE3:
    SET_LO8(eax, 1); /* 0x171C7BE3: mov al, 1 */
L_171C7BE5:
    esi = POP32_VAL(esp); /* 0x171C7BE5: pop esi */
L_171C7BE6:
    edi = POP32_VAL(esp); /* 0x171C7BE6: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171C7BE7: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171C7BE8: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171C7BF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C7BF0u);

L_171C7BF0:
    edi = edi; /* 0x171C7BF0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C7BF2: push ebp */
    ebp = esp; /* 0x171C7BF3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x171C7BF5: sub esp, 0xc */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x171C7BF8: push ebx */
    PUSH32(esp, esi); /* 0x171C7BF9: push esi */
    PUSH32(esp, edi); /* 0x171C7BFA: push edi */
    edi = eax; /* 0x171C7BFB: mov edi, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171C7BFD: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = ebx; /* 0x171C7BFF: mov dword ptr [ebp - 0xc], ebx */
    MEM32(ebp + (-0x4)) = 0x171C7647u; /* 0x171C7C02: mov dword ptr [ebp - 4], 0x171c7647 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171C7C09: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = edi; /* 0x171C7C0B: mov edx, edi */
    ecx = edi + 0x14; /* 0x171C7C0D: lea ecx, [edi + 0x14] */
    goto L_171C7C2B; /* 0x171C7C10: jmp 0x171c7c2b */
L_171C7C12:
    /* cmp MEM8(esi + 0x14), LO8(ebx) */ /* 0x171C7C12: cmp byte ptr [esi + 0x14], bl */
    _flag_a = (uint32_t)(MEM8(esi + 0x14)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C7C32; /* 0x171C7C15: jne 0x171c7c32 */
L_171C7C17:
    esi = MEM32(ecx); /* 0x171C7C17: mov esi, dword ptr [ecx] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 1; /* 0x171C7C19: inc dword ptr [ebp - 0xc] */
    _flag_k = FK_INC;
    MEM32(esi + 0x10) = eax; /* 0x171C7C1C: mov dword ptr [esi + 0x10], eax */
    eax = MEM32(ecx); /* 0x171C7C1F: mov eax, dword ptr [ecx] */
    MEM8(eax + 0x14) = (uint8_t)(1); /* 0x171C7C21: mov byte ptr [eax + 0x14], 1 */
    edx = MEM32(edx + 0x8); /* 0x171C7C25: mov edx, dword ptr [edx + 8] */
    ecx = edx + 0x14; /* 0x171C7C28: lea ecx, [edx + 0x14] */
L_171C7C2B:
    esi = MEM32(ecx); /* 0x171C7C2B: mov esi, dword ptr [ecx] */
    /* cmp MEM8(esi + 0x15), LO8(ebx) */ /* 0x171C7C2D: cmp byte ptr [esi + 0x15], bl */
    _flag_a = (uint32_t)(MEM8(esi + 0x15)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C7C12; /* 0x171C7C30: jne 0x171c7c12 */
L_171C7C32:
    esi = edi; /* 0x171C7C32: mov esi, edi */
    ecx = edi + 0x4; /* 0x171C7C34: lea ecx, [edi + 4] */
    goto L_171C7C5A; /* 0x171C7C37: jmp 0x171c7c5a */
L_171C7C39:
    /* cmp MEM8(edx + 0x14), LO8(ebx) */ /* 0x171C7C39: cmp byte ptr [edx + 0x14], bl */
    _flag_a = (uint32_t)(MEM8(edx + 0x14)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C7C64; /* 0x171C7C3C: jne 0x171c7c64 */
L_171C7C3E:
    edx = MEM32(ecx); /* 0x171C7C3E: mov edx, dword ptr [ecx] */
    edx = MEM32(edx + 0x14); /* 0x171C7C40: mov edx, dword ptr [edx + 0x14] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 1; /* 0x171C7C43: inc dword ptr [ebp - 0xc] */
    _flag_k = FK_INC;
    MEM32(edx + 0x10) = eax; /* 0x171C7C46: mov dword ptr [edx + 0x10], eax */
    eax = MEM32(ecx); /* 0x171C7C49: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x14); /* 0x171C7C4B: mov eax, dword ptr [eax + 0x14] */
    MEM8(eax + 0x14) = (uint8_t)(1); /* 0x171C7C4E: mov byte ptr [eax + 0x14], 1 */
    ecx = MEM32(ecx); /* 0x171C7C52: mov ecx, dword ptr [ecx] */
    esi = MEM32(ecx + 0xC); /* 0x171C7C54: mov esi, dword ptr [ecx + 0xc] */
    ecx = esi + 0x4; /* 0x171C7C57: lea ecx, [esi + 4] */
L_171C7C5A:
    edx = MEM32(ecx); /* 0x171C7C5A: mov edx, dword ptr [ecx] */
    edx = MEM32(edx + 0x14); /* 0x171C7C5C: mov edx, dword ptr [edx + 0x14] */
    /* cmp MEM8(edx + 0x15), LO8(ebx) */ /* 0x171C7C5F: cmp byte ptr [edx + 0x15], bl */
    _flag_a = (uint32_t)(MEM8(edx + 0x15)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C7C39; /* 0x171C7C62: jne 0x171c7c39 */
L_171C7C64:
    MEM32(ebp + (-0x8)) = esi; /* 0x171C7C64: mov dword ptr [ebp - 8], esi */
    goto L_171C7C6F; /* 0x171C7C67: jmp 0x171c7c6f */
L_171C7C69:
    MEM8(eax + 0x14) = (uint8_t)(LO8(ebx)); /* 0x171C7C69: mov byte ptr [eax + 0x14], bl */
    eax = MEM32(eax + 0x10); /* 0x171C7C6C: mov eax, dword ptr [eax + 0x10] */
L_171C7C6F:
    /* cmp eax, ebx */ /* 0x171C7C6F: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C7C69; /* 0x171C7C71: jne 0x171c7c69 */
L_171C7C73:
    eax = MEM32(ebp + 0x8); /* 0x171C7C73: mov eax, dword ptr [ebp + 8] */
    esi = ebp + (-0xC); /* 0x171C7C76: lea esi, [ebp - 0xc] */
    edi = eax; /* 0x171C7C79: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171C7C7B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171C7C7C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171C7C7D: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x171C7C7E: pop edi */
    esi = POP32_VAL(esp); /* 0x171C7C7F: pop esi */
    ebx = POP32_VAL(esp); /* 0x171C7C80: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171C7C81: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171C7C82: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171C7C8A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C7C8Au);

L_171C7C8A:
    edi = edi; /* 0x171C7C8A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C7C8C: push ebp */
    ebp = esp; /* 0x171C7C8D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x171C7C8F: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x171C7C92: push ebx */
    PUSH32(esp, esi); /* 0x171C7C93: push esi */
    esi = eax; /* 0x171C7C94: mov esi, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x171C7C96: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x171C7C98: push edi */
    MEM32(ebp + (-0x10)) = 0x171C770Eu; /* 0x171C7C99: mov dword ptr [ebp - 0x10], 0x171c770e */
    MEM32(ebp + (-0x8)) = ebx; /* 0x171C7CA0: mov dword ptr [ebp - 8], ebx */
    MEM32(ebp + (-0x4)) = ebx; /* 0x171C7CA3: mov dword ptr [ebp - 4], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171C7CA6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = esi; /* 0x171C7CA8: mov ecx, esi */
    edx = esi + 0x14; /* 0x171C7CAA: lea edx, [esi + 0x14] */
    goto L_171C7CE8; /* 0x171C7CAD: jmp 0x171c7ce8 */
L_171C7CAF:
    /* cmp MEM8(edi + 0x14), LO8(ebx) */ /* 0x171C7CAF: cmp byte ptr [edi + 0x14], bl */
    _flag_a = (uint32_t)(MEM8(edi + 0x14)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C7CEF; /* 0x171C7CB2: jne 0x171c7cef */
L_171C7CB4:
    edi = MEM32(edx); /* 0x171C7CB4: mov edi, dword ptr [edx] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x171C7CB6: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    MEM32(edi + 0x10) = eax; /* 0x171C7CB9: mov dword ptr [edi + 0x10], eax */
    eax = MEM32(edx); /* 0x171C7CBC: mov eax, dword ptr [edx] */
    MEM8(eax + 0x14) = (uint8_t)(1); /* 0x171C7CBE: mov byte ptr [eax + 0x14], 1 */
    ecx = MEM32(ecx + 0xC); /* 0x171C7CC2: mov ecx, dword ptr [ecx + 0xc] */
    ecx = MEM32(ecx + 0x4); /* 0x171C7CC5: mov ecx, dword ptr [ecx + 4] */
    edx = MEM32(ecx + 0x14); /* 0x171C7CC8: mov edx, dword ptr [ecx + 0x14] */
    /* cmp MEM8(edx + 0x15), LO8(ebx) */ /* 0x171C7CCB: cmp byte ptr [edx + 0x15], bl */
    _flag_a = (uint32_t)(MEM8(edx + 0x15)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C7CEF; /* 0x171C7CCE: je 0x171c7cef */
L_171C7CD0:
    /* cmp MEM8(edx + 0x14), LO8(ebx) */ /* 0x171C7CD0: cmp byte ptr [edx + 0x14], bl */
    _flag_a = (uint32_t)(MEM8(edx + 0x14)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C7CEF; /* 0x171C7CD3: jne 0x171c7cef */
L_171C7CD5:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) + 1; /* 0x171C7CD5: inc dword ptr [ebp - 4] */
    _flag_k = FK_INC;
    MEM32(edx + 0x10) = eax; /* 0x171C7CD8: mov dword ptr [edx + 0x10], eax */
    eax = MEM32(ecx + 0x14); /* 0x171C7CDB: mov eax, dword ptr [ecx + 0x14] */
    MEM8(eax + 0x14) = (uint8_t)(1); /* 0x171C7CDE: mov byte ptr [eax + 0x14], 1 */
    ecx = MEM32(ecx + 0x8); /* 0x171C7CE2: mov ecx, dword ptr [ecx + 8] */
    edx = ecx + 0x14; /* 0x171C7CE5: lea edx, [ecx + 0x14] */
L_171C7CE8:
    edi = MEM32(edx); /* 0x171C7CE8: mov edi, dword ptr [edx] */
    /* cmp MEM8(edi + 0x15), LO8(ebx) */ /* 0x171C7CEA: cmp byte ptr [edi + 0x15], bl */
    _flag_a = (uint32_t)(MEM8(edi + 0x15)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C7CAF; /* 0x171C7CED: jne 0x171c7caf */
L_171C7CEF:
    MEM32(ebp + (-0xC)) = ecx; /* 0x171C7CEF: mov dword ptr [ebp - 0xc], ecx */
    goto L_171C7D3E; /* 0x171C7CF2: jmp 0x171c7d3e */
L_171C7CF4:
    /* cmp MEM8(edi + 0x14), LO8(ebx) */ /* 0x171C7CF4: cmp byte ptr [edi + 0x14], bl */
    _flag_a = (uint32_t)(MEM8(edi + 0x14)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C7D4B; /* 0x171C7CF7: jne 0x171c7d4b */
L_171C7CF9:
    ecx = MEM32(edx); /* 0x171C7CF9: mov ecx, dword ptr [edx] */
    ecx = MEM32(ecx + 0x14); /* 0x171C7CFB: mov ecx, dword ptr [ecx + 0x14] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x171C7CFE: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    MEM32(ecx + 0x10) = eax; /* 0x171C7D01: mov dword ptr [ecx + 0x10], eax */
    eax = MEM32(edx); /* 0x171C7D04: mov eax, dword ptr [edx] */
    eax = MEM32(eax + 0x14); /* 0x171C7D06: mov eax, dword ptr [eax + 0x14] */
    MEM8(eax + 0x14) = (uint8_t)(1); /* 0x171C7D09: mov byte ptr [eax + 0x14], 1 */
    ecx = MEM32(edx); /* 0x171C7D0D: mov ecx, dword ptr [edx] */
    esi = MEM32(ecx + 0xC); /* 0x171C7D0F: mov esi, dword ptr [ecx + 0xc] */
    ecx = MEM32(esi + 0x4); /* 0x171C7D12: mov ecx, dword ptr [esi + 4] */
    edx = MEM32(ecx + 0x14); /* 0x171C7D15: mov edx, dword ptr [ecx + 0x14] */
    /* cmp MEM8(edx + 0x15), LO8(ebx) */ /* 0x171C7D18: cmp byte ptr [edx + 0x15], bl */
    _flag_a = (uint32_t)(MEM8(edx + 0x15)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C7D4B; /* 0x171C7D1B: je 0x171c7d4b */
L_171C7D1D:
    /* cmp MEM8(edx + 0x14), LO8(ebx) */ /* 0x171C7D1D: cmp byte ptr [edx + 0x14], bl */
    _flag_a = (uint32_t)(MEM8(edx + 0x14)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C7D4B; /* 0x171C7D20: jne 0x171c7d4b */
L_171C7D22:
    ecx = MEM32(ecx + 0x14); /* 0x171C7D22: mov ecx, dword ptr [ecx + 0x14] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + 1; /* 0x171C7D25: inc dword ptr [ebp - 8] */
    _flag_k = FK_INC;
    MEM32(ecx + 0x10) = eax; /* 0x171C7D28: mov dword ptr [ecx + 0x10], eax */
    eax = MEM32(esi + 0x4); /* 0x171C7D2B: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x14); /* 0x171C7D2E: mov eax, dword ptr [eax + 0x14] */
    MEM8(eax + 0x14) = (uint8_t)(1); /* 0x171C7D31: mov byte ptr [eax + 0x14], 1 */
    ecx = MEM32(esi + 0x4); /* 0x171C7D35: mov ecx, dword ptr [esi + 4] */
    ecx = MEM32(ecx + 0x8); /* 0x171C7D38: mov ecx, dword ptr [ecx + 8] */
    esi = MEM32(ecx + 0x4); /* 0x171C7D3B: mov esi, dword ptr [ecx + 4] */
L_171C7D3E:
    edx = esi + 0x4; /* 0x171C7D3E: lea edx, [esi + 4] */
    ecx = MEM32(edx); /* 0x171C7D41: mov ecx, dword ptr [edx] */
    edi = MEM32(ecx + 0x14); /* 0x171C7D43: mov edi, dword ptr [ecx + 0x14] */
    /* cmp MEM8(edi + 0x15), LO8(ebx) */ /* 0x171C7D46: cmp byte ptr [edi + 0x15], bl */
    _flag_a = (uint32_t)(MEM8(edi + 0x15)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C7CF4; /* 0x171C7D49: jne 0x171c7cf4 */
L_171C7D4B:
    ecx = MEM32(ebp + (-0x4)); /* 0x171C7D4B: mov ecx, dword ptr [ebp - 4] */
    edx = MEM32(ebp + (-0x8)); /* 0x171C7D4E: mov edx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x171C7D51: add ecx, edx */
    _flag_k = FK_ADD;
    /* test MEM8(ebp + (-0x4)), 1 */ /* 0x171C7D53: test byte ptr [ebp - 4], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x4))) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    MEM32(ebp + (-0x18)) = ecx; /* 0x171C7D57: mov dword ptr [ebp - 0x18], ecx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C7D64; /* 0x171C7D5A: jne 0x171c7d64 */
L_171C7D5C:
    ecx = MEM32(ebp + (-0xC)); /* 0x171C7D5C: mov ecx, dword ptr [ebp - 0xc] */
    ecx = MEM32(ecx + 0x4); /* 0x171C7D5F: mov ecx, dword ptr [ecx + 4] */
    goto L_171C7D75; /* 0x171C7D62: jmp 0x171c7d75 */
L_171C7D64:
    /* test MEM8(ebp + (-0x8)), 1 */ /* 0x171C7D64: test byte ptr [ebp - 8], 1 */
    _flag_a = (uint32_t)(MEM8(ebp + (-0x8))) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_171C7D6F; /* 0x171C7D68: jne 0x171c7d6f */
L_171C7D6A:
    MEM32(ebp + (-0x14)) = esi; /* 0x171C7D6A: mov dword ptr [ebp - 0x14], esi */
    goto L_171C7D80; /* 0x171C7D6D: jmp 0x171c7d80 */
L_171C7D6F:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(1);
    MEM32(ebp + (-0x18)) = MEM32(ebp + (-0x18)) - 1; /* 0x171C7D6F: dec dword ptr [ebp - 0x18] */
    _flag_k = FK_DEC;
    ecx = MEM32(esi + 0x8); /* 0x171C7D72: mov ecx, dword ptr [esi + 8] */
L_171C7D75:
    MEM32(ebp + (-0x14)) = ecx; /* 0x171C7D75: mov dword ptr [ebp - 0x14], ecx */
    goto L_171C7D80; /* 0x171C7D78: jmp 0x171c7d80 */
L_171C7D7A:
    MEM8(eax + 0x14) = (uint8_t)(LO8(ebx)); /* 0x171C7D7A: mov byte ptr [eax + 0x14], bl */
    eax = MEM32(eax + 0x10); /* 0x171C7D7D: mov eax, dword ptr [eax + 0x10] */
L_171C7D80:
    /* cmp eax, ebx */ /* 0x171C7D80: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C7D7A; /* 0x171C7D82: jne 0x171c7d7a */
L_171C7D84:
    eax = MEM32(ebp + 0x8); /* 0x171C7D84: mov eax, dword ptr [ebp + 8] */
    esi = ebp + (-0x18); /* 0x171C7D87: lea esi, [ebp - 0x18] */
    edi = eax; /* 0x171C7D8A: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171C7D8C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171C7D8D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171C7D8E: movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x171C7D8F: pop edi */
    esi = POP32_VAL(esp); /* 0x171C7D90: pop esi */
    ebx = POP32_VAL(esp); /* 0x171C7D91: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171C7D92: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171C7D93: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171C7D9B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C7D9Bu);

L_171C7D9B:
    edi = edi; /* 0x171C7D9B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C7D9D: push ebp */
    ebp = esp; /* 0x171C7D9E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x171C7DA0: sub esp, 0x24 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x171C7DA3: push ebx */
    ebx = MEM32(eax + 0x8); /* 0x171C7DA4: mov ebx, dword ptr [eax + 8] */
    eax = MEM32(ebp + 0x8); /* 0x171C7DA7: mov eax, dword ptr [ebp + 8] */
    /* cmp MEM8(eax + 0x78), 0 */ /* 0x171C7DAA: cmp byte ptr [eax + 0x78], 0 */
    _flag_a = (uint32_t)(MEM8(eax + 0x78)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + (-0xC)) = 1; /* 0x171C7DAE: mov dword ptr [ebp - 0xc], 1 */
    MEM32(ebp + (-0x8)) = ebx; /* 0x171C7DB5: mov dword ptr [ebp - 8], ebx */
    MEM32(ebp + (-0x4)) = 0x171C754Cu; /* 0x171C7DB8: mov dword ptr [ebp - 4], 0x171c754c */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C7EA3; /* 0x171C7DBF: jne 0x171c7ea3 */
L_171C7DC5:
    PUSH32(esp, esi); /* 0x171C7DC5: push esi */
    PUSH32(esp, edi); /* 0x171C7DC6: push edi */
    eax = ebp + (-0x24); /* 0x171C7DC7: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x171C7DCA: push eax */
    eax = ebx; /* 0x171C7DCB: mov eax, ebx */
    RECOMP_CALL(sub_171C7BF0); /* 0x171C7DCD: call 0x171c7bf0 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x171C7DD2: mov esi, eax */
    edi = ebp + (-0x18); /* 0x171C7DD4: lea edi, [ebp - 0x18] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171C7DD7: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171C7DD8: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171C7DD9: movsd dword ptr es:[edi], dword ptr [esi] */
    /* cmp MEM32(ebp + (-0x18)), 1 */ /* 0x171C7DDA: cmp dword ptr [ebp - 0x18], 1 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171C7DE8; /* 0x171C7DDE: jle 0x171c7de8 */
L_171C7DE0:
    esi = eax; /* 0x171C7DE0: mov esi, eax */
    edi = ebp + (-0xC); /* 0x171C7DE2: lea edi, [ebp - 0xc] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171C7DE5: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171C7DE6: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171C7DE7: movsd dword ptr es:[edi], dword ptr [esi] */
L_171C7DE8:
    eax = ebp + (-0x24); /* 0x171C7DE8: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x171C7DEB: push eax */
    eax = MEM32(ebx + 0xC); /* 0x171C7DEC: mov eax, dword ptr [ebx + 0xc] */
    RECOMP_CALL(sub_171C7BF0); /* 0x171C7DEF: call 0x171c7bf0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x171C7DF4: mov ecx, dword ptr [ebp - 0xc] */
    esi = eax; /* 0x171C7DF7: mov esi, eax */
    edi = ebp + (-0x18); /* 0x171C7DF9: lea edi, [ebp - 0x18] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171C7DFC: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171C7DFD: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171C7DFE: movsd dword ptr es:[edi], dword ptr [esi] */
    /* cmp MEM32(ebp + (-0x18)), ecx */ /* 0x171C7DFF: cmp dword ptr [ebp - 0x18], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171C7E0C; /* 0x171C7E02: jle 0x171c7e0c */
L_171C7E04:
    esi = eax; /* 0x171C7E04: mov esi, eax */
    edi = ebp + (-0xC); /* 0x171C7E06: lea edi, [ebp - 0xc] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171C7E09: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171C7E0A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171C7E0B: movsd dword ptr es:[edi], dword ptr [esi] */
L_171C7E0C:
    eax = MEM32(ebx + 0x8); /* 0x171C7E0C: mov eax, dword ptr [ebx + 8] */
    eax = MEM32(eax + 0x4); /* 0x171C7E0F: mov eax, dword ptr [eax + 4] */
    ecx = ebp + (-0x24); /* 0x171C7E12: lea ecx, [ebp - 0x24] */
    PUSH32(esp, ecx); /* 0x171C7E15: push ecx */
    RECOMP_CALL(sub_171C7BF0); /* 0x171C7E16: call 0x171c7bf0 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x171C7E1B: mov ecx, dword ptr [ebp - 0xc] */
    esi = eax; /* 0x171C7E1E: mov esi, eax */
    edi = ebp + (-0x18); /* 0x171C7E20: lea edi, [ebp - 0x18] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171C7E23: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171C7E24: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171C7E25: movsd dword ptr es:[edi], dword ptr [esi] */
    /* cmp MEM32(ebp + (-0x18)), ecx */ /* 0x171C7E26: cmp dword ptr [ebp - 0x18], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171C7E33; /* 0x171C7E29: jle 0x171c7e33 */
L_171C7E2B:
    esi = eax; /* 0x171C7E2B: mov esi, eax */
    edi = ebp + (-0xC); /* 0x171C7E2D: lea edi, [ebp - 0xc] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171C7E30: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171C7E31: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171C7E32: movsd dword ptr es:[edi], dword ptr [esi] */
L_171C7E33:
    eax = ebp + (-0x24); /* 0x171C7E33: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x171C7E36: push eax */
    eax = ebx; /* 0x171C7E37: mov eax, ebx */
    RECOMP_CALL(sub_171C7C8A); /* 0x171C7E39: call 0x171c7c8a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x171C7E3E: mov ecx, dword ptr [ebp - 0xc] */
    esi = eax; /* 0x171C7E41: mov esi, eax */
    edi = ebp + (-0x18); /* 0x171C7E43: lea edi, [ebp - 0x18] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171C7E46: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171C7E47: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171C7E48: movsd dword ptr es:[edi], dword ptr [esi] */
    /* cmp MEM32(ebp + (-0x18)), ecx */ /* 0x171C7E49: cmp dword ptr [ebp - 0x18], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171C7E56; /* 0x171C7E4C: jle 0x171c7e56 */
L_171C7E4E:
    esi = eax; /* 0x171C7E4E: mov esi, eax */
    edi = ebp + (-0xC); /* 0x171C7E50: lea edi, [ebp - 0xc] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171C7E53: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171C7E54: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171C7E55: movsd dword ptr es:[edi], dword ptr [esi] */
L_171C7E56:
    eax = ebp + (-0x24); /* 0x171C7E56: lea eax, [ebp - 0x24] */
    PUSH32(esp, eax); /* 0x171C7E59: push eax */
    eax = MEM32(ebx + 0xC); /* 0x171C7E5A: mov eax, dword ptr [ebx + 0xc] */
    RECOMP_CALL(sub_171C7C8A); /* 0x171C7E5D: call 0x171c7c8a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x171C7E62: mov ecx, dword ptr [ebp - 0xc] */
    esi = eax; /* 0x171C7E65: mov esi, eax */
    edi = ebp + (-0x18); /* 0x171C7E67: lea edi, [ebp - 0x18] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171C7E6A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171C7E6B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171C7E6C: movsd dword ptr es:[edi], dword ptr [esi] */
    /* cmp MEM32(ebp + (-0x18)), ecx */ /* 0x171C7E6D: cmp dword ptr [ebp - 0x18], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171C7E7A; /* 0x171C7E70: jle 0x171c7e7a */
L_171C7E72:
    esi = eax; /* 0x171C7E72: mov esi, eax */
    edi = ebp + (-0xC); /* 0x171C7E74: lea edi, [ebp - 0xc] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171C7E77: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171C7E78: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171C7E79: movsd dword ptr es:[edi], dword ptr [esi] */
L_171C7E7A:
    eax = MEM32(ebx + 0x8); /* 0x171C7E7A: mov eax, dword ptr [ebx + 8] */
    eax = MEM32(eax + 0x4); /* 0x171C7E7D: mov eax, dword ptr [eax + 4] */
    ecx = ebp + (-0x24); /* 0x171C7E80: lea ecx, [ebp - 0x24] */
    PUSH32(esp, ecx); /* 0x171C7E83: push ecx */
    RECOMP_CALL(sub_171C7C8A); /* 0x171C7E84: call 0x171c7c8a */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0xC)); /* 0x171C7E89: mov ecx, dword ptr [ebp - 0xc] */
    esi = eax; /* 0x171C7E8C: mov esi, eax */
    edi = ebp + (-0x18); /* 0x171C7E8E: lea edi, [ebp - 0x18] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171C7E91: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171C7E92: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171C7E93: movsd dword ptr es:[edi], dword ptr [esi] */
    /* cmp MEM32(ebp + (-0x18)), ecx */ /* 0x171C7E94: cmp dword ptr [ebp - 0x18], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x18))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171C7EA1; /* 0x171C7E97: jle 0x171c7ea1 */
L_171C7E99:
    esi = eax; /* 0x171C7E99: mov esi, eax */
    edi = ebp + (-0xC); /* 0x171C7E9B: lea edi, [ebp - 0xc] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171C7E9E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171C7E9F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x171C7EA0: movsd dword ptr es:[edi], dword ptr [esi] */
L_171C7EA1:
    edi = POP32_VAL(esp); /* 0x171C7EA1: pop edi */
    esi = POP32_VAL(esp); /* 0x171C7EA2: pop esi */
L_171C7EA3:
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x171C7EA3: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x171C7EA6: push dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171C7EA9: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(ebp + (-0x4))); /* 0x171C7EAC: call dword ptr [ebp - 4] */
    RECOMP_FLAGS_IN();
    ebx = POP32_VAL(esp); /* 0x171C7EAF: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171C7EB0: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171C7EB1: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171C7EB9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C7EB9u);

L_171C7EB9:
    edi = edi; /* 0x171C7EB9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C7EBB: push ebp */
    ebp = esp; /* 0x171C7EBC: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x171C7EBE: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x171C7EBF: mov ebx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x7C)); _flag_b = (uint32_t)(0);
    MEM32(ebx + 0x7C) = MEM32(ebx + 0x7C) & 0; /* 0x171C7EC2: and dword ptr [ebx + 0x7c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x171C7EC6: push esi */
    PUSH32(esp, edi); /* 0x171C7EC7: push edi */
    edi = MEM32(ebp + 0xC); /* 0x171C7EC8: mov edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x40u; /* 0x171C7ECB: add edi, 0x40 */
    _flag_k = FK_ADD;
    eax = MEM32(edi); /* 0x171C7ECE: mov eax, dword ptr [edi] */
    goto L_171C7ED8; /* 0x171C7ED0: jmp 0x171c7ed8 */
L_171C7ED2:
    MEM8(eax + 0x14) = (uint8_t)(0); /* 0x171C7ED2: mov byte ptr [eax + 0x14], 0 */
    eax = MEM32(eax); /* 0x171C7ED6: mov eax, dword ptr [eax] */
L_171C7ED8:
    /* cmp eax, edi */ /* 0x171C7ED8: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C7ED2; /* 0x171C7EDA: jne 0x171c7ed2 */
L_171C7EDC:
    esi = MEM32(edi); /* 0x171C7EDC: mov esi, dword ptr [edi] */
    goto L_171C7EF6; /* 0x171C7EDE: jmp 0x171c7ef6 */
L_171C7EE0:
    /* cmp MEM8(esi + 0x15), 0 */ /* 0x171C7EE0: cmp byte ptr [esi + 0x15], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x15)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C7EF4; /* 0x171C7EE4: je 0x171c7ef4 */
L_171C7EE6:
    /* cmp MEM8(esi + 0x14), 0 */ /* 0x171C7EE6: cmp byte ptr [esi + 0x14], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x14)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C7EF4; /* 0x171C7EEA: jne 0x171c7ef4 */
L_171C7EEC:
    PUSH32(esp, ebx); /* 0x171C7EEC: push ebx */
    eax = esi; /* 0x171C7EED: mov eax, esi */
    RECOMP_CALL(sub_171C7D9B); /* 0x171C7EEF: call 0x171c7d9b */
    RECOMP_FLAGS_IN();
L_171C7EF4:
    esi = MEM32(esi); /* 0x171C7EF4: mov esi, dword ptr [esi] */
L_171C7EF6:
    /* cmp esi, edi */ /* 0x171C7EF6: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C7EE0; /* 0x171C7EF8: jne 0x171c7ee0 */
L_171C7EFA:
    eax = MEM32(ebx + 0x7C); /* 0x171C7EFA: mov eax, dword ptr [ebx + 0x7c] */
    /* test eax, eax */ /* 0x171C7EFD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_171C7F0C; /* 0x171C7EFF: je 0x171c7f0c */
L_171C7F01:
    esi = ebx; /* 0x171C7F01: mov esi, ebx */
    RECOMP_CALL(sub_171C7578); /* 0x171C7F03: call 0x171c7578 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebx + 0x7C)); _flag_b = (uint32_t)(0);
    MEM32(ebx + 0x7C) = MEM32(ebx + 0x7C) & 0; /* 0x171C7F08: and dword ptr [ebx + 0x7c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_171C7F0C:
    edi = POP32_VAL(esp); /* 0x171C7F0C: pop edi */
    esi = POP32_VAL(esp); /* 0x171C7F0D: pop esi */
    ebx = POP32_VAL(esp); /* 0x171C7F0E: pop ebx */
    ebp = POP32_VAL(esp); /* 0x171C7F0F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171C7F10: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171C7F18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C7F18u);

L_171C7F18:
    edi = edi; /* 0x171C7F18: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C7F1A: push ebp */
    ebp = esp; /* 0x171C7F1B: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171C7F1D: push ecx */
    PUSH32(esp, ecx); /* 0x171C7F1E: push ecx */
    eax = MEM32(ebp + 0x8); /* 0x171C7F1F: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0x10); /* 0x171C7F22: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x171C7F25: push ebx */
    PUSH32(esp, esi); /* 0x171C7F26: push esi */
    esi = MEM32(ecx); /* 0x171C7F27: mov esi, dword ptr [ecx] */
    PUSH32(esp, edi); /* 0x171C7F29: push edi */
    edi = MEM32(eax + 0x70); /* 0x171C7F2A: mov edi, dword ptr [eax + 0x70] */
    eax = MEM32(ebp + 0xC); /* 0x171C7F2D: mov eax, dword ptr [ebp + 0xc] */
    eax = MEM32(eax); /* 0x171C7F30: mov eax, dword ptr [eax] */
    ecx = MEM32(eax + 0x4); /* 0x171C7F32: mov ecx, dword ptr [eax + 4] */
    edx = MEM32(ecx + 0x10); /* 0x171C7F35: mov edx, dword ptr [ecx + 0x10] */
    /* cmp edx, edi */ /* 0x171C7F38: cmp edx, edi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ecx = MEM32(esi + 0x4); /* 0x171C7F3A: mov ecx, dword ptr [esi + 4] */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C7F90; /* 0x171C7F3D: jne 0x171c7f90 */
L_171C7F3F:
    ebx = MEM32(ecx + 0x10); /* 0x171C7F3F: mov ebx, dword ptr [ecx + 0x10] */
    /* cmp ebx, edi */ /* 0x171C7F42: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C7F7E; /* 0x171C7F44: jne 0x171c7f7e */
L_171C7F46:
    ecx = MEM32(eax + 0x10); /* 0x171C7F46: mov ecx, dword ptr [eax + 0x10] */
    esi = MEM32(esi + 0x10); /* 0x171C7F49: mov esi, dword ptr [esi + 0x10] */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x171C7F4C: fld qword ptr [ecx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi + 0x28)); /* 0x171C7F4F: fcomp qword ptr [esi + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C7F52: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171C7F54: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171C7F7A; /* 0x171C7F57: jnp 0x171c7f7a */
L_171C7F59:
    fp_push(*(double*)ADDR(esi + 0x28)); /* 0x171C7F59: fld qword ptr [esi + 0x28] */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x171C7F5C: fld qword ptr [ecx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C7F5F: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C7F61: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C7F63: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C7F75; /* 0x171C7F66: jp 0x171c7f75 */
L_171C7F68:
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x171C7F68: fld qword ptr [ecx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi + 0x30)); /* 0x171C7F6B: fcomp qword ptr [esi + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C7F6E: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171C7F70: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171C7F7A; /* 0x171C7F73: jnp 0x171c7f7a */
L_171C7F75:
    PUSH32(esp, ecx); /* 0x171C7F75: push ecx */
    PUSH32(esp, esi); /* 0x171C7F76: push esi */
    PUSH32(esp, edx); /* 0x171C7F77: push edx */
    goto L_171C7F9A; /* 0x171C7F78: jmp 0x171c7f9a */
L_171C7F7A:
    PUSH32(esp, esi); /* 0x171C7F7A: push esi */
    PUSH32(esp, ecx); /* 0x171C7F7B: push ecx */
    goto L_171C7F82; /* 0x171C7F7C: jmp 0x171c7f82 */
L_171C7F7E:
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x171C7F7E: push dword ptr [esi + 0x10] */
    PUSH32(esp, edi); /* 0x171C7F81: push edi */
L_171C7F82:
    PUSH32(esp, ebx); /* 0x171C7F82: push ebx */
    RECOMP_CALL(sub_171C9869); /* 0x171C7F83: call 0x171c9869 */
    RECOMP_FLAGS_IN();
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x171C7F88: fcomp qword ptr [0x17001d90] */
    fp_pop();
    goto L_171C7FCF; /* 0x171C7F8E: jmp 0x171c7fcf */
L_171C7F90:
    /* cmp MEM32(ecx + 0x10), edi */ /* 0x171C7F90: cmp dword ptr [ecx + 0x10], edi */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, MEM32(eax + 0x10)); /* 0x171C7F93: push dword ptr [eax + 0x10] */
    PUSH32(esp, edi); /* 0x171C7F96: push edi */
    PUSH32(esp, edx); /* 0x171C7F97: push edx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C7FB5; /* 0x171C7F98: jne 0x171c7fb5 */
L_171C7F9A:
    RECOMP_CALL(sub_171C9869); /* 0x171C7F9A: call 0x171c9869 */
    RECOMP_FLAGS_IN();
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x171C7F9F: fcomp qword ptr [0x17001d90] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C7FA5: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x171C7FA7: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_171C7FD6; /* 0x171C7FAA: je 0x171c7fd6 */
L_171C7FAC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171C7FAC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_171C7FAE:
    edi = POP32_VAL(esp); /* 0x171C7FAE: pop edi */
    esi = POP32_VAL(esp); /* 0x171C7FAF: pop esi */
    ebx = POP32_VAL(esp); /* 0x171C7FB0: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171C7FB1: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171C7FB2: ret 0xc */
L_171C7FB5:
    RECOMP_CALL(sub_171C97E7); /* 0x171C7FB5: call 0x171c97e7 */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x171C7FBA: fstp qword ptr [ebp - 8] */
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x171C7FBD: push dword ptr [esi + 0x10] */
    eax = MEM32(esi + 0x4); /* 0x171C7FC0: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, edi); /* 0x171C7FC3: push edi */
    PUSH32(esp, MEM32(eax + 0x10)); /* 0x171C7FC4: push dword ptr [eax + 0x10] */
    RECOMP_CALL(sub_171C97E7); /* 0x171C7FC7: call 0x171c97e7 */
    RECOMP_FLAGS_IN();
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + (-0x8))); /* 0x171C7FCC: fcomp qword ptr [ebp - 8] */
    fp_pop();
L_171C7FCF:
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C7FCF: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171C7FD1: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C7FAC; /* 0x171C7FD4: jp 0x171c7fac */
L_171C7FD6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171C7FD6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171C7FD8: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_171C7FAE; /* 0x171C7FD9: jmp 0x171c7fae */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_171C7FE0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C7FE0u);

L_171C7FE0:
    edi = edi; /* 0x171C7FE0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C7FE2: push ebp */
    ebp = esp; /* 0x171C7FE3: mov ebp, esp */
    eax = MEM32(esi); /* 0x171C7FE5: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM32(eax + 0x18)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x18) = MEM32(eax + 0x18) & 0; /* 0x171C7FE7: and dword ptr [eax + 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x171C7FEB: push dword ptr [esi + 4] */
    eax = MEM32(ebp + 0x8); /* 0x171C7FEE: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(eax + 0x68)); /* 0x171C7FF1: push dword ptr [eax + 0x68] */
    RECOMP_CALL(sub_171C9F48); /* 0x171C7FF4: call 0x171c9f48 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x171C7FF9: push esi */
    RECOMP_CALL(sub_1721B224); /* 0x171C7FFA: call 0x1721b224 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x171C7FFF: pop ecx */
    ebp = POP32_VAL(esp); /* 0x171C8000: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171C8001: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171C8009(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C8009u);

L_171C8009:
    edi = edi; /* 0x171C8009: mov edi, edi */
    PUSH32(esp, esi); /* 0x171C800B: push esi */
    esi = eax; /* 0x171C800C: mov esi, eax */
    eax = MEM32(esi); /* 0x171C800E: mov eax, dword ptr [esi] */
    eax = MEM32(eax + 0x10); /* 0x171C8010: mov eax, dword ptr [eax + 0x10] */
L_171C8013:
    ecx = MEM32(esi + 0x4); /* 0x171C8013: mov ecx, dword ptr [esi + 4] */
    ecx = MEM32(ecx + 0x4); /* 0x171C8016: mov ecx, dword ptr [ecx + 4] */
    esi = MEM32(ecx); /* 0x171C8019: mov esi, dword ptr [ecx] */
    ecx = MEM32(esi); /* 0x171C801B: mov ecx, dword ptr [esi] */
    /* cmp MEM32(ecx + 0x10), eax */ /* 0x171C801D: cmp dword ptr [ecx + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ecx + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C8013; /* 0x171C8020: je 0x171c8013 */
L_171C8022:
    /* cmp MEM8(esi + 0xF), 0 */ /* 0x171C8022: cmp byte ptr [esi + 0xf], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xF)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C805B; /* 0x171C8026: je 0x171c805b */
L_171C8028:
    PUSH32(esp, edi); /* 0x171C8028: push edi */
    eax = ecx; /* 0x171C8029: mov eax, ecx */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x171C802B: push dword ptr [eax + 0xc] */
    eax = MEM32(esi + 0x4); /* 0x171C802E: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x8); /* 0x171C8031: mov eax, dword ptr [eax + 8] */
    eax = MEM32(eax); /* 0x171C8034: mov eax, dword ptr [eax] */
    eax = MEM32(eax); /* 0x171C8036: mov eax, dword ptr [eax] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x171C8038: push dword ptr [eax + 4] */
    RECOMP_CALL(sub_171C707E); /* 0x171C803B: call 0x171c707e */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi)); /* 0x171C8040: push dword ptr [esi] */
    edi = eax; /* 0x171C8042: mov edi, eax */
    RECOMP_CALL(sub_171C6F1B); /* 0x171C8044: call 0x171c6f1b */
    RECOMP_FLAGS_IN();
    MEM32(esi) = edi; /* 0x171C8049: mov dword ptr [esi], edi */
    MEM8(esi + 0xF) = (uint8_t)(0); /* 0x171C804B: mov byte ptr [esi + 0xf], 0 */
    MEM32(edi + 0x18) = esi; /* 0x171C804F: mov dword ptr [edi + 0x18], esi */
    eax = MEM32(esi + 0x4); /* 0x171C8052: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x4); /* 0x171C8055: mov eax, dword ptr [eax + 4] */
    esi = MEM32(eax); /* 0x171C8058: mov esi, dword ptr [eax] */
    edi = POP32_VAL(esp); /* 0x171C805A: pop edi */
L_171C805B:
    eax = esi; /* 0x171C805B: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x171C805D: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171C805E: ret  */
    RECOMP_REGS_OUT();
}

void sub_171C8064(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C8064u);

L_171C8064:
    ecx = MEM32(eax); /* 0x171C8064: mov ecx, dword ptr [eax] */
    ecx = MEM32(ecx + 0x4); /* 0x171C8066: mov ecx, dword ptr [ecx + 4] */
    ecx = MEM32(ecx + 0x10); /* 0x171C8069: mov ecx, dword ptr [ecx + 0x10] */
L_171C806C:
    eax = MEM32(eax + 0x4); /* 0x171C806C: mov eax, dword ptr [eax + 4] */
    eax = MEM32(eax + 0x4); /* 0x171C806F: mov eax, dword ptr [eax + 4] */
    eax = MEM32(eax); /* 0x171C8072: mov eax, dword ptr [eax] */
    edx = MEM32(eax); /* 0x171C8074: mov edx, dword ptr [eax] */
    edx = MEM32(edx + 0x4); /* 0x171C8076: mov edx, dword ptr [edx + 4] */
    /* cmp MEM32(edx + 0x10), ecx */ /* 0x171C8079: cmp dword ptr [edx + 0x10], ecx */
    _flag_a = (uint32_t)(MEM32(edx + 0x10)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C806C; /* 0x171C807C: je 0x171c806c */
L_171C807E:
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171C807E: ret  */
    RECOMP_REGS_OUT();
}

void sub_171C8084(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C8084u);

L_171C8084:
    edi = edi; /* 0x171C8084: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C8086: push ebp */
    ebp = esp; /* 0x171C8087: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171C8089: push esi */
    PUSH32(esp, 0x10u); /* 0x171C808A: push 0x10 */
    RECOMP_CALL(sub_1721B254); /* 0x171C808C: call 0x1721b254 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x171C8091: mov esi, eax */
    /* test esi, esi */ /* 0x171C8093: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x171C8095: pop ecx */
    if (TEST_Z(_flag_a, _flag_b)) goto L_171C80C0; /* 0x171C8096: je 0x171c80c0 */
L_171C8098:
    eax = MEM32(ebp + 0xC); /* 0x171C8098: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x171C809B: push esi */
    MEM32(esi) = edi; /* 0x171C809C: mov dword ptr [esi], edi */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x171C809E: push dword ptr [eax + 4] */
    eax = MEM32(ebp + 0x8); /* 0x171C80A1: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(eax + 0x68)); /* 0x171C80A4: push dword ptr [eax + 0x68] */
    RECOMP_CALL(sub_171C9EF6); /* 0x171C80A7: call 0x171c9ef6 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x4) = eax; /* 0x171C80AC: mov dword ptr [esi + 4], eax */
    MEM8(esi + 0xF) = (uint8_t)(0); /* 0x171C80AF: mov byte ptr [esi + 0xf], 0 */
    MEM8(esi + 0xD) = (uint8_t)(0); /* 0x171C80B3: mov byte ptr [esi + 0xd], 0 */
    MEM8(esi + 0xE) = (uint8_t)(0); /* 0x171C80B7: mov byte ptr [esi + 0xe], 0 */
    MEM32(edi + 0x18) = esi; /* 0x171C80BB: mov dword ptr [edi + 0x18], esi */
    eax = esi; /* 0x171C80BE: mov eax, esi */
L_171C80C0:
    esi = POP32_VAL(esp); /* 0x171C80C0: pop esi */
    ebp = POP32_VAL(esp); /* 0x171C80C1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171C80C2: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171C80CA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C80CAu);

L_171C80CA:
    ecx = MEM32(ecx + 0x60); /* 0x171C80CA: mov ecx, dword ptr [ecx + 0x60] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x00018722u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 0x00018722u; /* 0x171C80CD: sub ecx, 0x18722 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_171C8103; /* 0x171C80D3: je 0x171c8103 */
L_171C80D5:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x171C80D5: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_171C80FD; /* 0x171C80D6: je 0x171c80fd */
L_171C80D8:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x171C80D8: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_171C80F7; /* 0x171C80D9: je 0x171c80f7 */
L_171C80DB:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x171C80DB: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_171C80F1; /* 0x171C80DC: je 0x171c80f1 */
L_171C80DE:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x171C80DE: dec ecx */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_171C80EB; /* 0x171C80DF: jne 0x171c80eb */
L_171C80E1:
    /* cmp eax, 2 */ /* 0x171C80E1: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_171C80EE; /* 0x171C80E4: jge 0x171c80ee */
L_171C80E6:
    /* cmp eax, 0xFFFFFFFEu */ /* 0x171C80E6: cmp eax, -2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFEu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_171C80EE; /* 0x171C80E9: jle 0x171c80ee */
L_171C80EB:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x171C80EB: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171C80ED: ret  */
L_171C80EE:
    SET_LO8(eax, 1); /* 0x171C80EE: mov al, 1 */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171C80F0: ret  */
L_171C80F1:
    /* test eax, eax */ /* 0x171C80F1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) ? 1 : 0); /* 0x171C80F3: setl al */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171C80F6: ret  */
L_171C80F7:
    /* test eax, eax */ /* 0x171C80F7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) ? 1 : 0); /* 0x171C80F9: setg al */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171C80FC: ret  */
L_171C80FD:
    /* test eax, eax */ /* 0x171C80FD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x171C80FF: setne al */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171C8102: ret  */
L_171C8103:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax & 1; /* 0x171C8103: and eax, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171C8106: ret  */
    RECOMP_REGS_OUT();
}

void sub_171C810C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C810Cu);

L_171C810C:
    edi = edi; /* 0x171C810C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C810E: push ebp */
    ebp = esp; /* 0x171C810F: mov ebp, esp */
    PUSH32(esp, esi); /* 0x171C8111: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171C8112: push dword ptr [ebp + 8] */
    esi = eax; /* 0x171C8115: mov esi, eax */
    eax = MEM32(esi); /* 0x171C8117: mov eax, dword ptr [esi] */
    ecx = MEM32(eax + 0x14); /* 0x171C8119: mov ecx, dword ptr [eax + 0x14] */
    SET_LO8(edx, MEM8(esi + 0xC)); /* 0x171C811C: mov dl, byte ptr [esi + 0xc] */
    MEM8(ecx + 0x15) = (uint8_t)(LO8(edx)); /* 0x171C811F: mov byte ptr [ecx + 0x15], dl */
    MEM32(ecx + 0x8) = eax; /* 0x171C8122: mov dword ptr [ecx + 8], eax */
    RECOMP_CALL(sub_171C7FE0); /* 0x171C8125: call 0x171c7fe0 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x171C812A: pop esi */
    ebp = POP32_VAL(esp); /* 0x171C812B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171C812C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171C8134(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C8134u);

L_171C8134:
    edi = edi; /* 0x171C8134: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C8136: push ebp */
    ebp = esp; /* 0x171C8137: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171C8139: push ecx */
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x171C813A: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x171C813D: push ebx */
    ebx = MEM32(eax); /* 0x171C813E: mov ebx, dword ptr [eax] */
    MEM32(ebp + (-0x4)) = eax; /* 0x171C8140: mov dword ptr [ebp - 4], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C81BF; /* 0x171C8143: je 0x171c81bf */
L_171C8145:
    PUSH32(esp, esi); /* 0x171C8145: push esi */
    PUSH32(esp, edi); /* 0x171C8146: push edi */
L_171C8147:
    eax = MEM32(ebp + (-0x4)); /* 0x171C8147: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax + 0x4); /* 0x171C814A: mov ecx, dword ptr [eax + 4] */
    MEM8(eax + 0xF) = (uint8_t)(0); /* 0x171C814D: mov byte ptr [eax + 0xf], 0 */
    ecx = MEM32(ecx + 0x8); /* 0x171C8151: mov ecx, dword ptr [ecx + 8] */
    esi = MEM32(ecx); /* 0x171C8154: mov esi, dword ptr [ecx] */
    edi = MEM32(esi); /* 0x171C8156: mov edi, dword ptr [esi] */
    ecx = MEM32(edi + 0x10); /* 0x171C8158: mov ecx, dword ptr [edi + 0x10] */
    /* cmp ecx, MEM32(ebx + 0x10) */ /* 0x171C815B: cmp ecx, dword ptr [ebx + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C8186; /* 0x171C815E: je 0x171c8186 */
L_171C8160:
    /* cmp MEM8(esi + 0xF), 0 */ /* 0x171C8160: cmp byte ptr [esi + 0xf], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xF)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C81B5; /* 0x171C8164: je 0x171c81b5 */
L_171C8166:
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x171C8166: push dword ptr [edi + 4] */
    eax = MEM32(ebx + 0x8); /* 0x171C8169: mov eax, dword ptr [ebx + 8] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x171C816C: push dword ptr [eax + 4] */
    RECOMP_CALL(sub_171C707E); /* 0x171C816F: call 0x171c707e */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi)); /* 0x171C8174: push dword ptr [esi] */
    edi = eax; /* 0x171C8176: mov edi, eax */
    RECOMP_CALL(sub_171C6F1B); /* 0x171C8178: call 0x171c6f1b */
    RECOMP_FLAGS_IN();
    MEM8(esi + 0xF) = (uint8_t)(0); /* 0x171C817D: mov byte ptr [esi + 0xf], 0 */
    MEM32(esi) = edi; /* 0x171C8181: mov dword ptr [esi], edi */
    MEM32(edi + 0x18) = esi; /* 0x171C8183: mov dword ptr [edi + 0x18], esi */
L_171C8186:
    /* cmp MEM32(ebx + 0x8), edi */ /* 0x171C8186: cmp dword ptr [ebx + 8], edi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C819E; /* 0x171C8189: je 0x171c819e */
L_171C818B:
    eax = MEM32(edi + 0x4); /* 0x171C818B: mov eax, dword ptr [edi + 4] */
    PUSH32(esp, edi); /* 0x171C818E: push edi */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x171C818F: push dword ptr [eax + 0xc] */
    RECOMP_CALL(sub_171C6E99); /* 0x171C8192: call 0x171c6e99 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x171C8197: push edi */
    PUSH32(esp, ebx); /* 0x171C8198: push ebx */
    RECOMP_CALL(sub_171C6E99); /* 0x171C8199: call 0x171c6e99 */
    RECOMP_FLAGS_IN();
L_171C819E:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171C819E: push dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x4)); /* 0x171C81A1: mov eax, dword ptr [ebp - 4] */
    RECOMP_CALL(sub_171C810C); /* 0x171C81A4: call 0x171c810c */
    RECOMP_FLAGS_IN();
    /* cmp esi, MEM32(ebp + 0xC) */ /* 0x171C81A9: cmp esi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = MEM32(esi); /* 0x171C81AC: mov ebx, dword ptr [esi] */
    MEM32(ebp + (-0x4)) = esi; /* 0x171C81AE: mov dword ptr [ebp - 4], esi */
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C8147; /* 0x171C81B1: jne 0x171c8147 */
L_171C81B3:
    goto L_171C81BD; /* 0x171C81B3: jmp 0x171c81bd */
L_171C81B5:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171C81B5: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171C810C); /* 0x171C81B8: call 0x171c810c */
    RECOMP_FLAGS_IN();
L_171C81BD:
    edi = POP32_VAL(esp); /* 0x171C81BD: pop edi */
    esi = POP32_VAL(esp); /* 0x171C81BE: pop esi */
L_171C81BF:
    eax = ebx; /* 0x171C81BF: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x171C81C1: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171C81C2: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171C81C3: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171C81CB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C81CBu);

L_171C81CB:
    edi = edi; /* 0x171C81CB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C81CD: push ebp */
    ebp = esp; /* 0x171C81CE: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x171C81D0: sub esp, 0x18 */
    _flag_k = FK_CMP;
    fp_push(*(double*)ADDR(eax + 0x10)); /* 0x171C81D3: fld qword ptr [eax + 0x10] */
    PUSH32(esp, esi); /* 0x171C81D6: push esi */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x18)) = _v; } /* 0x171C81D7: fstp qword ptr [ebp - 0x18] */
    esi = eax + 0xC; /* 0x171C81DA: lea esi, [eax + 0xc] */
    fp_push(*(double*)ADDR(eax + 0x18)); /* 0x171C81DD: fld qword ptr [eax + 0x18] */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x171C81E0: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x10)) = _v; } /* 0x171C81E3: fstp qword ptr [ebp - 0x10] */
    fp_push(*(double*)ADDR(eax + 0x20)); /* 0x171C81E6: fld qword ptr [eax + 0x20] */
    eax = MEM32(edi + 0xD34); /* 0x171C81E9: mov eax, dword ptr [edi + 0xd34] */
    /* cmp eax, 0x171C6498u */ /* 0x171C81EF: cmp eax, 0x171c6498 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x171C6498u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x171C81F4: fstp qword ptr [ebp - 8] */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C820C; /* 0x171C81F7: je 0x171c820c */
L_171C81F9:
    PUSH32(esp, MEM32(edi + 0xD38)); /* 0x171C81F9: push dword ptr [edi + 0xd38] */
    ecx = ebp + (-0x18); /* 0x171C81FF: lea ecx, [ebp - 0x18] */
    PUSH32(esp, esi); /* 0x171C8202: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171C8203: push dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x171C8206: push ebx */
    PUSH32(esp, ecx); /* 0x171C8207: push ecx */
    RECOMP_ICALL(eax); /* 0x171C8208: call eax */
    RECOMP_FLAGS_IN();
    goto L_171C8218; /* 0x171C820A: jmp 0x171c8218 */
L_171C820C:
    PUSH32(esp, esi); /* 0x171C820C: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171C820D: push dword ptr [ebp + 8] */
    eax = ebp + (-0x18); /* 0x171C8210: lea eax, [ebp - 0x18] */
    PUSH32(esp, ebx); /* 0x171C8213: push ebx */
    PUSH32(esp, eax); /* 0x171C8214: push eax */
    RECOMP_ICALL(MEM32(edi + 0x74)); /* 0x171C8215: call dword ptr [edi + 0x74] */
    RECOMP_FLAGS_IN();
L_171C8218:
    /* cmp MEM32(esi), 0 */ /* 0x171C8218: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C8233; /* 0x171C821B: jne 0x171c8233 */
L_171C821D:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x171C821D: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C8229; /* 0x171C8221: jne 0x171c8229 */
L_171C8223:
    eax = MEM32(ebx); /* 0x171C8223: mov eax, dword ptr [ebx] */
    MEM32(esi) = eax; /* 0x171C8225: mov dword ptr [esi], eax */
    goto L_171C8233; /* 0x171C8227: jmp 0x171c8233 */
L_171C8229:
    /* cmp MEM8(edi + 0x64), 0 */ /* 0x171C8229: cmp byte ptr [edi + 0x64], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0x64)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_171C8233; /* 0x171C822D: jne 0x171c8233 */
L_171C822F:
    MEM8(edi + 0x64) = (uint8_t)(1); /* 0x171C822F: mov byte ptr [edi + 0x64], 1 */
L_171C8233:
    esi = POP32_VAL(esp); /* 0x171C8233: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171C8234: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x171C8235: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_171C823D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C823Du);

L_171C823D:
    edi = edi; /* 0x171C823D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C823F: push ebp */
    ebp = esp; /* 0x171C8240: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x171C8242: sub esp, 0x20 */
    _flag_k = FK_CMP;
    fp_push(*(float*)&MEM32(0x1700141C)); /* 0x171C8245: fld dword ptr [0x1700141c] */
    eax = MEM32(ebp + 0x8); /* 0x171C824B: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x10); /* 0x171C824E: mov eax, dword ptr [eax + 0x10] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x20)) = _v; } /* 0x171C8251: fst dword ptr [ebp - 0x20] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x1C)) = _v; } /* 0x171C8254: fstp dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x171C8257: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(0.0); /* 0x171C8259: fldz  */
    MEM32(ebp + (-0x10)) = ecx; /* 0x171C825B: mov dword ptr [ebp - 0x10], ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x171C825E: fstp dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0xC)) = ecx; /* 0x171C8261: mov dword ptr [ebp - 0xc], ecx */
    MEM32(ebp + (-0x8)) = ecx; /* 0x171C8264: mov dword ptr [ebp - 8], ecx */
    fp_push(0.0); /* 0x171C8267: fldz  */
    MEM32(ebp + (-0x4)) = ecx; /* 0x171C8269: mov dword ptr [ebp - 4], ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x171C826C: fstp dword ptr [ebp - 0x14] */
    PUSH32(esp, ebx); /* 0x171C826F: push ebx */
    edx = MEM32(eax + 0xC); /* 0x171C8270: mov edx, dword ptr [eax + 0xc] */
    MEM32(ebp + (-0x10)) = edx; /* 0x171C8273: mov dword ptr [ebp - 0x10], edx */
    edx = MEM32(esi + 0x10); /* 0x171C8276: mov edx, dword ptr [esi + 0x10] */
    edx = MEM32(edx + 0xC); /* 0x171C8279: mov edx, dword ptr [edx + 0xc] */
    PUSH32(esp, ecx); /* 0x171C827C: push ecx */
    ecx = ebp + (-0x20); /* 0x171C827D: lea ecx, [ebp - 0x20] */
    PUSH32(esp, ecx); /* 0x171C8280: push ecx */
    ebx = ebp + (-0x10); /* 0x171C8281: lea ebx, [ebp - 0x10] */
    MEM32(ebp + (-0xC)) = edx; /* 0x171C8284: mov dword ptr [ebp - 0xc], edx */
    RECOMP_CALL(sub_171C81CB); /* 0x171C8287: call 0x171c81cb */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x171C828C: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x171C828D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_171C6E99); /* 0x171C8290: call 0x171c6e99 */
    RECOMP_FLAGS_IN();
    ebx = POP32_VAL(esp); /* 0x171C8295: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171C8296: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171C8297: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_171C829F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C829Fu);

L_171C829F:
    edi = edi; /* 0x171C829F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C82A1: push ebp */
    ebp = esp; /* 0x171C82A2: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171C82A4: push ecx */
    fp_push(*(double*)ADDR(esi + 0x28)); /* 0x171C82A5: fld qword ptr [esi + 0x28] */
    _st[0] -= *(double*)ADDR(ecx + 0x28); /* 0x171C82A8: fsub qword ptr [ecx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x171C82AB: fcom qword ptr [0x17001d90] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C82B1: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171C82B3: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C82BA; /* 0x171C82B6: jp 0x171c82ba */
L_171C82B8:
    _st[0] = -_st[0]; /* 0x171C82B8: fchs  */
L_171C82BA:
    fp_push(*(double*)ADDR(esi + 0x30)); /* 0x171C82BA: fld qword ptr [esi + 0x30] */
    _st[0] -= *(double*)ADDR(ecx + 0x30); /* 0x171C82BD: fsub qword ptr [ecx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x171C82C0: fcom qword ptr [0x17001d90] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C82C6: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171C82C8: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C82CF; /* 0x171C82CB: jp 0x171c82cf */
L_171C82CD:
    _st[0] = -_st[0]; /* 0x171C82CD: fchs  */
L_171C82CF:
    _st[0] += _st[1]; /* 0x171C82CF: fadd st(1) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x171C82D1: fstp st(1) */
    fp_push(*(double*)ADDR(edi + 0x28)); /* 0x171C82D3: fld qword ptr [edi + 0x28] */
    _st[0] -= *(double*)ADDR(ecx + 0x28); /* 0x171C82D6: fsub qword ptr [ecx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x171C82D9: fcom qword ptr [0x17001d90] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C82DF: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171C82E1: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C82E8; /* 0x171C82E4: jp 0x171c82e8 */
L_171C82E6:
    _st[0] = -_st[0]; /* 0x171C82E6: fchs  */
L_171C82E8:
    fp_push(*(double*)ADDR(edi + 0x30)); /* 0x171C82E8: fld qword ptr [edi + 0x30] */
    _st[0] -= *(double*)ADDR(ecx + 0x30); /* 0x171C82EB: fsub qword ptr [ecx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x171C82EE: fcom qword ptr [0x17001d90] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C82F4: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171C82F6: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C82FD; /* 0x171C82F9: jp 0x171c82fd */
L_171C82FB:
    _st[0] = -_st[0]; /* 0x171C82FB: fchs  */
L_171C82FD:
    _st[0] += _st[1]; /* 0x171C82FD: fadd st(1) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x171C82FF: fstp st(1) */
    fp_push(_st[0]); /* 0x171C8301: fld st(0) */
    _st[0] += _st[2]; /* 0x171C8303: fadd st(2) */
    fp_push(_st[1]); /* 0x171C8305: fld st(1) */
    _st[0] *= *(double*)ADDR(0x17001938); /* 0x171C8307: fmul qword ptr [0x17001938] */
    _st[0] /= _st[1]; /* 0x171C830D: fdiv st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x171C830F: fst dword ptr [ebp - 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx) = _v; } /* 0x171C8312: fstp dword ptr [edx] */
    fp_push(_st[2]); /* 0x171C8314: fld st(2) */
    _st[0] *= *(double*)ADDR(0x17001938); /* 0x171C8316: fmul qword ptr [0x17001938] */
    _st[0] /= _st[1]; /* 0x171C831C: fdiv st(1) */
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x171C831E: fstp st(3) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171C8320: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x171C8322: fstp st(0) */
    { float _v = (float)_st[0]; *(float*)ADDR(edx + 0x4) = _v; } /* 0x171C8324: fst dword ptr [edx + 4] */
    _st[0] *= *(double*)ADDR(edi + 0x10); /* 0x171C8327: fmul qword ptr [edi + 0x10] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x171C832A: fld dword ptr [ebp - 4] */
    _st[0] *= *(double*)ADDR(esi + 0x10); /* 0x171C832D: fmul qword ptr [esi + 0x10] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x171C8330: faddp st(1) */
    _st[0] += *(double*)ADDR(ecx + 0x10); /* 0x171C8332: fadd qword ptr [ecx + 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(ecx + 0x10) = _v; } /* 0x171C8335: fstp qword ptr [ecx + 0x10] */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x171C8338: fld dword ptr [edx + 4] */
    _st[0] *= *(double*)ADDR(edi + 0x18); /* 0x171C833B: fmul qword ptr [edi + 0x18] */
    fp_push(*(float*)&MEM32(edx)); /* 0x171C833E: fld dword ptr [edx] */
    _st[0] *= *(double*)ADDR(esi + 0x18); /* 0x171C8340: fmul qword ptr [esi + 0x18] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x171C8343: faddp st(1) */
    _st[0] += *(double*)ADDR(ecx + 0x18); /* 0x171C8345: fadd qword ptr [ecx + 0x18] */
    { double _v = fp_pop(); *(double*)ADDR(ecx + 0x18) = _v; } /* 0x171C8348: fstp qword ptr [ecx + 0x18] */
    fp_push(*(float*)&MEM32(edx + 0x4)); /* 0x171C834B: fld dword ptr [edx + 4] */
    _st[0] *= *(double*)ADDR(edi + 0x20); /* 0x171C834E: fmul qword ptr [edi + 0x20] */
    fp_push(*(float*)&MEM32(edx)); /* 0x171C8351: fld dword ptr [edx] */
    _st[0] *= *(double*)ADDR(esi + 0x20); /* 0x171C8353: fmul qword ptr [esi + 0x20] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x171C8356: faddp st(1) */
    _st[0] += *(double*)ADDR(ecx + 0x20); /* 0x171C8358: fadd qword ptr [ecx + 0x20] */
    { double _v = fp_pop(); *(double*)ADDR(ecx + 0x20) = _v; } /* 0x171C835B: fstp qword ptr [ecx + 0x20] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171C835E: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x171C835F: ret  */
    RECOMP_REGS_OUT();
}

void sub_171C8365(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C8365u);

L_171C8365:
    edi = edi; /* 0x171C8365: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C8367: push ebp */
    ebp = esp; /* 0x171C8368: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x20u; /* 0x171C836A: sub esp, 0x20 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x171C836D: push ebx */
    fp_push(0.0); /* 0x171C836E: fldz  */
    ebx = eax; /* 0x171C8370: mov ebx, eax */
    PUSH32(esp, esi); /* 0x171C8372: push esi */
    esi = MEM32(ebp + 0xC); /* 0x171C8373: mov esi, dword ptr [ebp + 0xc] */
    eax = MEM32(esi + 0xC); /* 0x171C8376: mov eax, dword ptr [esi + 0xc] */
    MEM32(ebp + (-0x10)) = eax; /* 0x171C8379: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, edi); /* 0x171C837C: push edi */
    edi = edx; /* 0x171C837D: mov edi, edx */
    eax = MEM32(edi + 0xC); /* 0x171C837F: mov eax, dword ptr [edi + 0xc] */
    MEM32(ebp + (-0xC)) = eax; /* 0x171C8382: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ebp + 0x10); /* 0x171C8385: mov eax, dword ptr [ebp + 0x10] */
    eax = MEM32(eax + 0xC); /* 0x171C8388: mov eax, dword ptr [eax + 0xc] */
    MEM32(ebp + (-0x8)) = eax; /* 0x171C838B: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ebx + 0xC); /* 0x171C838E: mov eax, dword ptr [ebx + 0xc] */
    { double _v = fp_pop(); *(double*)ADDR(ecx + 0x20) = _v; } /* 0x171C8391: fstp qword ptr [ecx + 0x20] */
    fp_push(0.0); /* 0x171C8394: fldz  */
    edx = ebp + (-0x20); /* 0x171C8396: lea edx, [ebp - 0x20] */
    { double _v = fp_pop(); *(double*)ADDR(ecx + 0x18) = _v; } /* 0x171C8399: fstp qword ptr [ecx + 0x18] */
    MEM32(ebp + (-0x4)) = eax; /* 0x171C839C: mov dword ptr [ebp - 4], eax */
    fp_push(0.0); /* 0x171C839F: fldz  */
    { double _v = fp_pop(); *(double*)ADDR(ecx + 0x10) = _v; } /* 0x171C83A1: fstp qword ptr [ecx + 0x10] */
    RECOMP_CALL(sub_171C829F); /* 0x171C83A4: call 0x171c829f */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x10); /* 0x171C83A9: mov esi, dword ptr [ebp + 0x10] */
    edx = ebp + (-0x18); /* 0x171C83AC: lea edx, [ebp - 0x18] */
    edi = ebx; /* 0x171C83AF: mov edi, ebx */
    RECOMP_CALL(sub_171C829F); /* 0x171C83B1: call 0x171c829f */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + 0x8); /* 0x171C83B6: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, 1); /* 0x171C83B9: push 1 */
    eax = ebp + (-0x20); /* 0x171C83BB: lea eax, [ebp - 0x20] */
    PUSH32(esp, eax); /* 0x171C83BE: push eax */
    ebx = ebp + (-0x10); /* 0x171C83BF: lea ebx, [ebp - 0x10] */
    eax = ecx; /* 0x171C83C2: mov eax, ecx */
    RECOMP_CALL(sub_171C81CB); /* 0x171C83C4: call 0x171c81cb */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x171C83C9: pop edi */
    esi = POP32_VAL(esp); /* 0x171C83CA: pop esi */
    ebx = POP32_VAL(esp); /* 0x171C83CB: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171C83CC: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x171C83CD: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_171C83D5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x171C83D5u);

L_171C83D5:
    edi = edi; /* 0x171C83D5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x171C83D7: push ebp */
    ebp = esp; /* 0x171C83D8: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x171C83DA: push ecx */
    PUSH32(esp, ebx); /* 0x171C83DB: push ebx */
    PUSH32(esp, esi); /* 0x171C83DC: push esi */
    PUSH32(esp, edi); /* 0x171C83DD: push edi */
    edi = eax; /* 0x171C83DE: mov edi, eax */
    eax = MEM32(edi + 0x4); /* 0x171C83E0: mov eax, dword ptr [edi + 4] */
    eax = MEM32(eax + 0x8); /* 0x171C83E3: mov eax, dword ptr [eax + 8] */
    eax = MEM32(eax); /* 0x171C83E6: mov eax, dword ptr [eax] */
    esi = MEM32(edi); /* 0x171C83E8: mov esi, dword ptr [edi] */
    ebx = MEM32(eax); /* 0x171C83EA: mov ebx, dword ptr [eax] */
    ecx = MEM32(esi + 0x10); /* 0x171C83EC: mov ecx, dword ptr [esi + 0x10] */
    edx = MEM32(ebx + 0x10); /* 0x171C83EF: mov edx, dword ptr [ebx + 0x10] */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x171C83F2: fld qword ptr [ecx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edx + 0x28)); /* 0x171C83F5: fcomp qword ptr [edx + 0x28] */
    fp_pop();
    MEM32(ebp + (-0x4)) = eax; /* 0x171C83F8: mov dword ptr [ebp - 4], eax */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C83FB: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171C83FD: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171C8465; /* 0x171C8400: jnp 0x171c8465 */
L_171C8402:
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x171C8402: fld qword ptr [edx + 0x28] */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x171C8405: fld qword ptr [ecx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C8408: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C840A: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C840C: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C841E; /* 0x171C840F: jp 0x171c841e */
L_171C8411:
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x171C8411: fld qword ptr [ecx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edx + 0x30)); /* 0x171C8414: fcomp qword ptr [edx + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C8417: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171C8419: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_171C8465; /* 0x171C841C: jnp 0x171c8465 */
L_171C841E:
    eax = MEM32(esi + 0x4); /* 0x171C841E: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, ecx); /* 0x171C8421: push ecx */
    PUSH32(esp, edx); /* 0x171C8422: push edx */
    PUSH32(esp, MEM32(eax + 0x10)); /* 0x171C8423: push dword ptr [eax + 0x10] */
    RECOMP_CALL(sub_171C9869); /* 0x171C8426: call 0x171c9869 */
    RECOMP_FLAGS_IN();
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x171C842B: fcomp qword ptr [0x17001d90] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C8431: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x171C8433: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C843F; /* 0x171C8436: jp 0x171c843f */
L_171C8438:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171C8438: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_171C84E4; /* 0x171C843A: jmp 0x171c84e4 */
L_171C843F:
    eax = MEM32(edi + 0x4); /* 0x171C843F: mov eax, dword ptr [edi + 4] */
    MEM8(edi + 0xE) = (uint8_t)(1); /* 0x171C8442: mov byte ptr [edi + 0xe], 1 */
    eax = MEM32(eax + 0x4); /* 0x171C8446: mov eax, dword ptr [eax + 4] */
    eax = MEM32(eax); /* 0x171C8449: mov eax, dword ptr [eax] */
    MEM8(eax + 0xE) = (uint8_t)(1); /* 0x171C844B: mov byte ptr [eax + 0xe], 1 */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x171C844F: push dword ptr [esi + 4] */
    RECOMP_CALL(sub_171C7016); /* 0x171C8452: call 0x171c7016 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x4); /* 0x171C8457: mov eax, dword ptr [ebx + 4] */
    PUSH32(esp, esi); /* 0x171C845A: push esi */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x171C845B: push dword ptr [eax + 0xc] */
    RECOMP_CALL(sub_171C6E99); /* 0x171C845E: call 0x171c6e99 */
    RECOMP_FLAGS_IN();
    goto L_171C84E1; /* 0x171C8463: jmp 0x171c84e1 */
L_171C8465:
    eax = MEM32(ebx + 0x4); /* 0x171C8465: mov eax, dword ptr [ebx + 4] */
    PUSH32(esp, edx); /* 0x171C8468: push edx */
    PUSH32(esp, ecx); /* 0x171C8469: push ecx */
    PUSH32(esp, MEM32(eax + 0x10)); /* 0x171C846A: push dword ptr [eax + 0x10] */
    RECOMP_CALL(sub_171C9869); /* 0x171C846D: call 0x171c9869 */
    RECOMP_FLAGS_IN();
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x17001D90)); /* 0x171C8472: fcomp qword ptr [0x17001d90] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C8478: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x171C847A: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_171C8438; /* 0x171C847D: je 0x171c8438 */
L_171C847F:
    edx = MEM32(ebx + 0x10); /* 0x171C847F: mov edx, dword ptr [ebx + 0x10] */
    ecx = MEM32(esi + 0x10); /* 0x171C8482: mov ecx, dword ptr [esi + 0x10] */
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x171C8485: fld qword ptr [edx + 0x28] */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x171C8488: fld qword ptr [ecx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C848B: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C848D: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C848F: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C84C2; /* 0x171C8492: jp 0x171c84c2 */
L_171C8494:
    fp_push(*(double*)ADDR(edx + 0x30)); /* 0x171C8494: fld qword ptr [edx + 0x30] */
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x171C8497: fld qword ptr [ecx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x171C849A: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x171C849C: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x171C849E: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_171C84C2; /* 0x171C84A1: jp 0x171c84c2 */
L_171C84A3:
    /* cmp ecx, edx */ /* 0x171C84A3: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_171C84E1; /* 0x171C84A5: je 0x171c84e1 */
L_171C84A7:
    PUSH32(esp, MEM32(ecx + 0x38)); /* 0x171C84A7: push dword ptr [ecx + 0x38] */
    edi = MEM32(ebp + 0x8); /* 0x171C84AA: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(edi + 0x6C)); /* 0x171C84AD: push dword ptr [edi + 0x6c] */
    RECOMP_CALL(sub_171CA754); /* 0x171C84B0: call 0x171ca754 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x4); /* 0x171C84B5: mov eax, dword ptr [ebx + 4] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x171C84B8: push dword ptr [eax + 0xc] */
    RECOMP_CALL(sub_171C823D); /* 0x171C84BB: call 0x171c823d */
    RECOMP_FLAGS_IN();
    goto L_171C84E1; /* 0x171C84C0: jmp 0x171c84e1 */
L_171C84C2:
    PUSH32(esp, MEM32(ebx + 0x4)); /* 0x171C84C2: push dword ptr [ebx + 4] */
    RECOMP_CALL(sub_171C7016); /* 0x171C84C5: call 0x171c7016 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x4); /* 0x171C84CA: mov eax, dword ptr [ebx + 4] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x171C84CD: push dword ptr [eax + 0xc] */
    PUSH32(esp, esi); /* 0x171C84D0: push esi */
    RECOMP_CALL(sub_171C6E99); /* 0x171C84D1: call 0x171c6e99 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x171C84D6: mov eax, dword ptr [ebp - 4] */
    MEM8(eax + 0xE) = (uint8_t)(1); /* 0x171C84D9: mov byte ptr [eax + 0xe], 1 */
    MEM8(edi + 0xE) = (uint8_t)(1); /* 0x171C84DD: mov byte ptr [edi + 0xe], 1 */
L_171C84E1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x171C84E1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x171C84E3: inc eax */
    _flag_k = FK_INC;
L_171C84E4:
    edi = POP32_VAL(esp); /* 0x171C84E4: pop edi */
    esi = POP32_VAL(esp); /* 0x171C84E5: pop esi */
    ebx = POP32_VAL(esp); /* 0x171C84E6: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x171C84E7: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x171C84E8: ret 4 */
    RECOMP_REGS_OUT();
}
