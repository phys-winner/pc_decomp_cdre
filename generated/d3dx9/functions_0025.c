#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_120E7C63(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E7C63u);

L_120E7C63:
    edi = edi; /* 0x120E7C63: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E7C65: push ebp */
    ebp = esp; /* 0x120E7C66: mov ebp, esp */
    edx = MEM32(ebp + 0x18); /* 0x120E7C68: mov edx, dword ptr [ebp + 0x18] */
    ecx = edx; /* 0x120E7C6B: mov ecx, edx */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x120E7C6D: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x120E7C6D: shl ecx, 2 */
    /* test ecx, ecx */ /* 0x120E7C70: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E7C96; /* 0x120E7C72: je 0x120e7c96 */
L_120E7C74:
    PUSH32(esp, esi); /* 0x120E7C74: push esi */
    esi = MEM32(ebp + 0x14); /* 0x120E7C75: mov esi, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x120E7C78: push edi */
    edi = MEM32(ebp + 0x10); /* 0x120E7C79: mov edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - esi; /* 0x120E7C7C: sub edi, esi */
    _flag_k = FK_CMP;
L_120E7C7E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E7C7E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + esi), eax */ /* 0x120E7C80: cmp dword ptr [edi + esi], eax */
    _flag_a = (uint32_t)(MEM32(edi + esi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x120E7C83: setne al */
    MEM32(ebp + 0x18) = eax; /* 0x120E7C86: mov dword ptr [ebp + 0x18], eax */
    fp_push((double)(int32_t)MEM32(ebp + 0x18)); /* 0x120E7C89: fild dword ptr [ebp + 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi) = _v; } /* 0x120E7C8C: fstp dword ptr [esi] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x120E7C8E: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x120E7C91: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E7C7E; /* 0x120E7C92: jne 0x120e7c7e */
L_120E7C94:
    edi = POP32_VAL(esp); /* 0x120E7C94: pop edi */
    esi = POP32_VAL(esp); /* 0x120E7C95: pop esi */
L_120E7C96:
    eax = MEM32(ebp + 0x8); /* 0x120E7C96: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x120E7C99: mov ecx, dword ptr [eax] */
    PUSH32(esp, edx); /* 0x120E7C9B: push edx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120E7C9C: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120E7C9F: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x120E7CA2: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1B4)); /* 0x120E7CA3: call dword ptr [ecx + 0x1b4] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120E7CA9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x120E7CAA: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_120E7CB2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E7CB2u);

L_120E7CB2:
    edi = edi; /* 0x120E7CB2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E7CB4: push ebp */
    ebp = esp; /* 0x120E7CB5: mov ebp, esp */
    edx = MEM32(ebp + 0x18); /* 0x120E7CB7: mov edx, dword ptr [ebp + 0x18] */
    eax = edx; /* 0x120E7CBA: mov eax, edx */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x120E7CBC: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x120E7CBC: shl eax, 2 */
    /* test eax, eax */ /* 0x120E7CBF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E7CD8; /* 0x120E7CC1: je 0x120e7cd8 */
L_120E7CC3:
    ecx = MEM32(ebp + 0x14); /* 0x120E7CC3: mov ecx, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x120E7CC6: push esi */
    esi = MEM32(ebp + 0x10); /* 0x120E7CC7: mov esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - ecx; /* 0x120E7CCA: sub esi, ecx */
    _flag_k = FK_CMP;
L_120E7CCC:
    fp_push((double)(int32_t)MEM32(esi + ecx)); /* 0x120E7CCC: fild dword ptr [esi + ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x120E7CCF: fstp dword ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x120E7CD1: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E7CD4: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E7CCC; /* 0x120E7CD5: jne 0x120e7ccc */
L_120E7CD7:
    esi = POP32_VAL(esp); /* 0x120E7CD7: pop esi */
L_120E7CD8:
    eax = MEM32(ebp + 0x8); /* 0x120E7CD8: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x120E7CDB: mov ecx, dword ptr [eax] */
    PUSH32(esp, edx); /* 0x120E7CDD: push edx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120E7CDE: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120E7CE1: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x120E7CE4: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x1B4)); /* 0x120E7CE5: call dword ptr [ecx + 0x1b4] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120E7CEB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x120E7CEC: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_120E7CF4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E7CF4u);

L_120E7CF4:
    edi = edi; /* 0x120E7CF4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E7CF6: push ebp */
    ebp = esp; /* 0x120E7CF7: mov ebp, esp */
    eax = MEM32(ebp + 0x18); /* 0x120E7CF9: mov eax, dword ptr [ebp + 0x18] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x120E7CFC: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x120E7CFC: shl eax, 4 */
    PUSH32(esp, eax); /* 0x120E7CFF: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120E7D00: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x120E7D03: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x120E7D06: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120E7D08: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x120E7D09: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x120E7D0C: mov ecx, dword ptr [ebp + 0xc] */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x120E7D0F: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x120E7D0F: shl ecx, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x120E7D12: add eax, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x120E7D14: push eax */
    RECOMP_CALL(sub_121BF440); /* 0x120E7D15: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120E7D1A: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E7D1D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x120E7D1F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x120E7D20: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_120E7D28(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E7D28u);

L_120E7D28:
    edi = edi; /* 0x120E7D28: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E7D2A: push ebp */
    ebp = esp; /* 0x120E7D2B: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120E7D2D: push esi */
    esi = MEM32(ebp + 0x18); /* 0x120E7D2E: mov esi, dword ptr [ebp + 0x18] */
    edx = esi; /* 0x120E7D31: mov edx, esi */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x120E7D33: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x120E7D33: shl edx, 2 */
    /* test edx, edx */ /* 0x120E7D36: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E7D5A; /* 0x120E7D38: je 0x120e7d5a */
L_120E7D3A:
    ecx = MEM32(ebp + 0x14); /* 0x120E7D3A: mov ecx, dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x120E7D3D: push edi */
    edi = MEM32(ebp + 0x10); /* 0x120E7D3E: mov edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x120E7D41: sub edi, ecx */
    _flag_k = FK_CMP;
L_120E7D43:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E7D43: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(edi + ecx), eax */ /* 0x120E7D45: cmp dword ptr [edi + ecx], eax */
    _flag_a = (uint32_t)(MEM32(edi + ecx)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x120E7D48: setne al */
    MEM32(ebp + 0x18) = eax; /* 0x120E7D4B: mov dword ptr [ebp + 0x18], eax */
    fp_push((double)(int32_t)MEM32(ebp + 0x18)); /* 0x120E7D4E: fild dword ptr [ebp + 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx) = _v; } /* 0x120E7D51: fstp dword ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x120E7D53: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x120E7D56: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E7D43; /* 0x120E7D57: jne 0x120e7d43 */
L_120E7D59:
    edi = POP32_VAL(esp); /* 0x120E7D59: pop edi */
L_120E7D5A:
    eax = MEM32(ebp + 0x8); /* 0x120E7D5A: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x120E7D5D: mov ecx, dword ptr [eax] */
    if (4u) _cf = (((esi) >> 28) & 1u); /* 0x120E7D5F: shl esi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((esi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 4u; /* 0x120E7D5F: shl esi, 4 */
    PUSH32(esp, esi); /* 0x120E7D62: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120E7D63: push dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x120E7D66: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x120E7D67: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x120E7D6A: mov ecx, dword ptr [ebp + 0xc] */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x120E7D6D: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x120E7D6D: shl ecx, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x120E7D70: add eax, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x120E7D72: push eax */
    RECOMP_CALL(sub_121BF440); /* 0x120E7D73: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120E7D78: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E7D7B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x120E7D7D: pop esi */
    ebp = POP32_VAL(esp); /* 0x120E7D7E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x120E7D7F: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_120E7D87(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E7D87u);

L_120E7D87:
    edi = edi; /* 0x120E7D87: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E7D89: push ebp */
    ebp = esp; /* 0x120E7D8A: mov ebp, esp */
    edx = MEM32(ebp + 0x18); /* 0x120E7D8C: mov edx, dword ptr [ebp + 0x18] */
    ecx = edx; /* 0x120E7D8F: mov ecx, edx */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x120E7D91: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x120E7D91: shl ecx, 2 */
    /* test ecx, ecx */ /* 0x120E7D94: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E7DAD; /* 0x120E7D96: je 0x120e7dad */
L_120E7D98:
    eax = MEM32(ebp + 0x14); /* 0x120E7D98: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x120E7D9B: push esi */
    esi = MEM32(ebp + 0x10); /* 0x120E7D9C: mov esi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x120E7D9F: sub esi, eax */
    _flag_k = FK_CMP;
L_120E7DA1:
    fp_push((double)(int32_t)MEM32(esi + eax)); /* 0x120E7DA1: fild dword ptr [esi + eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x120E7DA4: fstp dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x120E7DA6: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x120E7DA9: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E7DA1; /* 0x120E7DAA: jne 0x120e7da1 */
L_120E7DAC:
    esi = POP32_VAL(esp); /* 0x120E7DAC: pop esi */
L_120E7DAD:
    eax = MEM32(ebp + 0x8); /* 0x120E7DAD: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax); /* 0x120E7DB0: mov ecx, dword ptr [eax] */
    if (4u) _cf = (((edx) >> 28) & 1u); /* 0x120E7DB2: shl edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 4u; /* 0x120E7DB2: shl edx, 4 */
    PUSH32(esp, edx); /* 0x120E7DB5: push edx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120E7DB6: push dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x120E7DB9: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x120E7DBA: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x120E7DBD: mov ecx, dword ptr [ebp + 0xc] */
    if (4u) _cf = (((ecx) >> 28) & 1u); /* 0x120E7DC0: shl ecx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((ecx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 4u; /* 0x120E7DC0: shl ecx, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x120E7DC3: add eax, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x120E7DC5: push eax */
    RECOMP_CALL(sub_121BF440); /* 0x120E7DC6: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120E7DCB: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E7DCE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x120E7DD0: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x120E7DD1: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_120E7DD9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E7DD9u);

L_120E7DD9:
    edi = edi; /* 0x120E7DD9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E7DDB: push ebp */
    ebp = esp; /* 0x120E7DDC: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x120E7DDE: sub esp, 0x24 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x120E7DE1: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x120E7DE2: mov ebx, dword ptr [ebp + 8] */
    eax = MEM32(ebx + 0x20); /* 0x120E7DE5: mov eax, dword ptr [ebx + 0x20] */
    PUSH32(esp, esi); /* 0x120E7DE8: push esi */
    esi = MEM32(ebx + 0x18); /* 0x120E7DE9: mov esi, dword ptr [ebx + 0x18] */
    MEM32(ebp + (-0x4)) = eax; /* 0x120E7DEC: mov dword ptr [ebp - 4], eax */
    eax = (uint32_t)MEM16(esi); /* 0x120E7DEF: movzx eax, word ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x120E7DF2: sub eax, 0 */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x120E7DF5: push edi */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_120E7F59; /* 0x120E7DF6: je 0x120e7f59 */
L_120E7DFC:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E7DFC: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120E7F4A; /* 0x120E7DFD: je 0x120e7f4a */
L_120E7E03:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E7E03: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120E7F3D; /* 0x120E7E04: je 0x120e7f3d */
L_120E7E0A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E7E0A: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120E7E96; /* 0x120E7E0B: je 0x120e7e96 */
L_120E7E11:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E7E11: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E7E12: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120E7E1F; /* 0x120E7E13: je 0x120e7e1f */
L_120E7E15:
    eax = 0x80004001u; /* 0x120E7E15: mov eax, 0x80004001 */
    goto L_120E80B0; /* 0x120E7E1A: jmp 0x120e80b0 */
L_120E7E1F:
    eax = MEM32(ebp + 0x14); /* 0x120E7E1F: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120E7E22: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ebx + 0x34); /* 0x120E7E24: div dword ptr [ebx + 0x34] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    edi = eax; /* 0x120E7E27: mov edi, eax */
    eax = (uint32_t)MEM16(esi + 0x8); /* 0x120E7E29: movzx eax, word ptr [esi + 8] */
    /* cmp edi, eax */ /* 0x120E7E2D: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E7E33; /* 0x120E7E2F: jbe 0x120e7e33 */
L_120E7E31:
    edi = eax; /* 0x120E7E31: mov edi, eax */
L_120E7E33:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120E7E33: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x120E7E35: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E80AE; /* 0x120E7E37: je 0x120e80ae */
L_120E7E3D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E7E3D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120E7E3F: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(eax), MEM16(esi + 0xA) */ /* 0x120E7E41: cmp ax, word ptr [esi + 0xa] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(esi + 0xA)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    goto L_120E7E87; /* 0x120E7E45: jmp 0x120e7e87 */
L_120E7E47:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120E7E47: push dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + 0x8); /* 0x120E7E4A: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x38); /* 0x120E7E4D: mov eax, dword ptr [eax + 0x38] */
    eax = MEM32(eax + ecx * 4); /* 0x120E7E50: mov eax, dword ptr [eax + ecx*4] */
    PUSH32(esp, MEM32(eax + 0x30)); /* 0x120E7E53: push dword ptr [eax + 0x30] */
    edx = MEM32(ebp + 0x10); /* 0x120E7E56: mov edx, dword ptr [ebp + 0x10] */
    PUSH32(esp, edx); /* 0x120E7E59: push edx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120E7E5A: push dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x18)) = eax; /* 0x120E7E5D: mov dword ptr [ebp - 0x18], eax */
    PUSH32(esp, eax); /* 0x120E7E60: push eax */
    RECOMP_CALL(sub_120E7DD9); /* 0x120E7E61: call 0x120e7dd9 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120E7E66: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E80B0; /* 0x120E7E68: js 0x120e80b0 */
L_120E7E6E:
    eax = MEM32(ebp + (-0x18)); /* 0x120E7E6E: mov eax, dword ptr [ebp - 0x18] */
    eax = MEM32(eax + 0x30); /* 0x120E7E71: mov eax, dword ptr [eax + 0x30] */
    ecx = MEM32(ebp + 0x10); /* 0x120E7E74: mov ecx, dword ptr [ebp + 0x10] */
    ecx = ecx + eax * 4; /* 0x120E7E77: lea ecx, [ecx + eax*4] */
    eax = (uint32_t)MEM16(esi + 0xA); /* 0x120E7E7A: movzx eax, word ptr [esi + 0xa] */
    MEM32(ebp + 0x10) = ecx; /* 0x120E7E7E: mov dword ptr [ebp + 0x10], ecx */
    ecx = MEM32(ebp + 0x14); /* 0x120E7E81: mov ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120E7E84: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, eax */ /* 0x120E7E85: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_120E7E87:
    MEM32(ebp + 0x14) = ecx; /* 0x120E7E87: mov dword ptr [ebp + 0x14], ecx */
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_B, _cf)) goto L_120E7E47; /* 0x120E7E8A: jb 0x120e7e47 */
L_120E7E8C:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x120E7E8C: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, edi */ /* 0x120E7E8D: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E7E3D; /* 0x120E7E8F: jb 0x120e7e3d */
L_120E7E91:
    goto L_120E80AE; /* 0x120E7E91: jmp 0x120e80ae */
L_120E7E96:
    edi = (uint32_t)MEM16(esi + 0x4); /* 0x120E7E96: movzx edi, word ptr [esi + 4] */
    eax = (uint32_t)MEM16(esi + 0x6); /* 0x120E7E9A: movzx eax, word ptr [esi + 6] */
    ecx = edi; /* 0x120E7E9E: mov ecx, edi */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x120E7EA0: imul ecx, eax */
    eax = MEM32(ebp + 0x14); /* 0x120E7EA3: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120E7EA6: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x120E7EA8: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ecx = eax; /* 0x120E7EAA: mov ecx, eax */
    eax = (uint32_t)MEM16(esi + 0x8); /* 0x120E7EAC: movzx eax, word ptr [esi + 8] */
    MEM32(ebp + 0x14) = ecx; /* 0x120E7EB0: mov dword ptr [ebp + 0x14], ecx */
    /* cmp ecx, eax */ /* 0x120E7EB3: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E7EBC; /* 0x120E7EB5: jbe 0x120e7ebc */
L_120E7EB7:
    ecx = eax; /* 0x120E7EB7: mov ecx, eax */
    MEM32(ebp + 0x14) = eax; /* 0x120E7EB9: mov dword ptr [ebp + 0x14], eax */
L_120E7EBC:
    eax = MEM32(ebp + (-0x4)); /* 0x120E7EBC: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x120E7EBF: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x120E7EC3: mov dword ptr [ebp - 0x10], eax */
    /* test ecx, ecx */ /* 0x120E7EC6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E7F39; /* 0x120E7EC8: je 0x120e7f39 */
L_120E7ECA:
    edx = MEM32(ebp + 0x10); /* 0x120E7ECA: mov edx, dword ptr [ebp + 0x10] */
    ebx = (uint32_t)MEM16(esi + 0x6); /* 0x120E7ECD: movzx ebx, word ptr [esi + 6] */
L_120E7ED1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E7ED1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = eax; /* 0x120E7ED3: mov dword ptr [ebp - 8], eax */
    /* test ebx, ebx */ /* 0x120E7ED6: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E7F28; /* 0x120E7ED8: je 0x120e7f28 */
L_120E7EDA:
    ecx = MEM32(ebp + (-0xC)); /* 0x120E7EDA: mov ecx, dword ptr [ebp - 0xc] */
L_120E7EDD:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0; /* 0x120E7EDD: and dword ptr [ebp + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x120E7EE1: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E7F19; /* 0x120E7EE3: je 0x120e7f19 */
L_120E7EE5:
    ebx = MEM32(ebp + (-0x8)); /* 0x120E7EE5: mov ebx, dword ptr [ebp - 8] */
    eax = MEM32(ebp + 0x10); /* 0x120E7EE8: mov eax, dword ptr [ebp + 0x10] */
L_120E7EEB:
    edi = (uint32_t)((int32_t)edi * (int32_t)ecx); /* 0x120E7EEB: imul edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + eax; /* 0x120E7EEE: add edi, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM16(esi + 0x6); /* 0x120E7EF0: movzx eax, word ptr [esi + 6] */
    edi = (uint32_t)((int32_t)edi * (int32_t)eax); /* 0x120E7EF4: imul edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ebx; /* 0x120E7EF7: add edi, ebx */
    _flag_k = FK_ADD;
    eax = MEM32(edx + edi * 4); /* 0x120E7EF9: mov eax, dword ptr [edx + edi*4] */
    edi = MEM32(ebp + (-0x10)); /* 0x120E7EFC: mov edi, dword ptr [ebp - 0x10] */
    MEM32(edi) = eax; /* 0x120E7EFF: mov dword ptr [edi], eax */
    eax = MEM32(ebp + 0x10); /* 0x120E7F01: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x120E7F04: add edi, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = edi; /* 0x120E7F07: mov dword ptr [ebp - 0x10], edi */
    edi = (uint32_t)MEM16(esi + 0x4); /* 0x120E7F0A: movzx edi, word ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120E7F0E: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + 0x10) = eax; /* 0x120E7F0F: mov dword ptr [ebp + 0x10], eax */
    /* cmp eax, edi */ /* 0x120E7F12: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E7EEB; /* 0x120E7F14: jb 0x120e7eeb */
L_120E7F16:
    eax = MEM32(ebp + (-0x8)); /* 0x120E7F16: mov eax, dword ptr [ebp - 8] */
L_120E7F19:
    ebx = (uint32_t)MEM16(esi + 0x6); /* 0x120E7F19: movzx ebx, word ptr [esi + 6] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120E7F1D: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x8)) = eax; /* 0x120E7F1E: mov dword ptr [ebp - 8], eax */
    /* cmp eax, ebx */ /* 0x120E7F21: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E7EDD; /* 0x120E7F23: jb 0x120e7edd */
L_120E7F25:
    ecx = MEM32(ebp + 0x14); /* 0x120E7F25: mov ecx, dword ptr [ebp + 0x14] */
L_120E7F28:
    eax = MEM32(ebp + (-0xC)); /* 0x120E7F28: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120E7F2B: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0xC)) = eax; /* 0x120E7F2C: mov dword ptr [ebp - 0xc], eax */
    /* cmp eax, ecx */ /* 0x120E7F2F: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E7ED1; /* 0x120E7F31: jb 0x120e7ed1 */
L_120E7F33:
    ebx = MEM32(ebp + 0x8); /* 0x120E7F33: mov ebx, dword ptr [ebp + 8] */
    eax = MEM32(ebp + (-0x4)); /* 0x120E7F36: mov eax, dword ptr [ebp - 4] */
L_120E7F39:
    edi = eax; /* 0x120E7F39: mov edi, eax */
    goto L_120E7F6F; /* 0x120E7F3B: jmp 0x120e7f6f */
L_120E7F3D:
    ecx = (uint32_t)MEM16(esi + 0x6); /* 0x120E7F3D: movzx ecx, word ptr [esi + 6] */
    eax = (uint32_t)MEM16(esi + 0x4); /* 0x120E7F41: movzx eax, word ptr [esi + 4] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x120E7F45: imul ecx, eax */
    goto L_120E7F4E; /* 0x120E7F48: jmp 0x120e7f4e */
L_120E7F4A:
    ecx = (uint32_t)MEM16(esi + 0x6); /* 0x120E7F4A: movzx ecx, word ptr [esi + 6] */
L_120E7F4E:
    eax = MEM32(ebp + 0x14); /* 0x120E7F4E: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120E7F51: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x120E7F53: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ecx = eax; /* 0x120E7F55: mov ecx, eax */
    goto L_120E7F5C; /* 0x120E7F57: jmp 0x120e7f5c */
L_120E7F59:
    ecx = MEM32(ebp + 0x14); /* 0x120E7F59: mov ecx, dword ptr [ebp + 0x14] */
L_120E7F5C:
    eax = (uint32_t)MEM16(esi + 0x8); /* 0x120E7F5C: movzx eax, word ptr [esi + 8] */
    edi = MEM32(ebp + 0x10); /* 0x120E7F60: mov edi, dword ptr [ebp + 0x10] */
    MEM32(ebp + 0x14) = ecx; /* 0x120E7F63: mov dword ptr [ebp + 0x14], ecx */
    /* cmp ecx, eax */ /* 0x120E7F66: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E7F6F; /* 0x120E7F68: jbe 0x120e7f6f */
L_120E7F6A:
    ecx = eax; /* 0x120E7F6A: mov ecx, eax */
    MEM32(ebp + 0x14) = ecx; /* 0x120E7F6C: mov dword ptr [ebp + 0x14], ecx */
L_120E7F6F:
    eax = (uint32_t)MEM16(ebx + 0x8); /* 0x120E7F6F: movzx eax, word ptr [ebx + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120E7F73: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(edx), LO16(eax) */ /* 0x120E7F75: cmp dx, ax */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E8079; /* 0x120E7F78: je 0x120e8079 */
L_120E7F7E:
    /* cmp MEM16(esi), 3 */ /* 0x120E7F7E: cmp word ptr [esi], 3 */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(3) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E7F8E; /* 0x120E7F82: je 0x120e7f8e */
L_120E7F84:
    edx = (uint32_t)MEM16(esi + 0x6); /* 0x120E7F84: movzx edx, word ptr [esi + 6] */
    esi = (uint32_t)MEM16(esi + 0x4); /* 0x120E7F88: movzx esi, word ptr [esi + 4] */
    goto L_120E7F96; /* 0x120E7F8C: jmp 0x120e7f96 */
L_120E7F8E:
    edx = (uint32_t)MEM16(esi + 0x4); /* 0x120E7F8E: movzx edx, word ptr [esi + 4] */
    esi = (uint32_t)MEM16(esi + 0x6); /* 0x120E7F92: movzx esi, word ptr [esi + 6] */
L_120E7F96:
    MEM32(ebp + 0x10) = edx; /* 0x120E7F96: mov dword ptr [ebp + 0x10], edx */
    /* test LO8(edx), 3 */ /* 0x120E7F99: test dl, 3 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E8079; /* 0x120E7F9C: je 0x120e8079 */
L_120E7FA2:
    MEM32(ebp + (-0x18)) = 1; /* 0x120E7FA2: mov dword ptr [ebp - 0x18], 1 */
    /* cmp MEM16(ebp + (-0x18)), LO16(eax) */ /* 0x120E7FA9: cmp word ptr [ebp - 0x18], ax */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x18))) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    eax = 0x12008A44u; /* 0x120E7FAD: mov eax, 0x12008a44 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E7FB9; /* 0x120E7FB2: je 0x120e7fb9 */
L_120E7FB4:
    eax = 0x12008A34u; /* 0x120E7FB4: mov eax, 0x12008a34 */
L_120E7FB9:
    esi = (uint32_t)((int32_t)esi * (int32_t)ecx); /* 0x120E7FB9: imul esi, ecx */
    MEM32(ebp + (-0x8)) = eax; /* 0x120E7FBC: mov dword ptr [ebp - 8], eax */
    eax = edx + 0x3; /* 0x120E7FBF: lea eax, [edx + 3] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    eax = eax & 0xFFFFFFFCu; /* 0x120E7FC2: and eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = eax; /* 0x120E7FC5: mov dword ptr [ebp - 0xc], eax */
    /* test esi, esi */ /* 0x120E7FC8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E8072; /* 0x120E7FCA: je 0x120e8072 */
L_120E7FD0:
    ecx = edx; /* 0x120E7FD0: mov ecx, edx */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x120E7FD2: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x120E7FD2: shl ecx, 2 */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x120E7FD5: mov dword ptr [ebp - 0x1c], ecx */
    ecx = esi * 4 + 0x4; /* 0x120E7FD8: lea ecx, [esi*4 + 4] */
    ebx = ecx; /* 0x120E7FDF: mov ebx, ecx */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edx); /* 0x120E7FE1: imul ebx, edx */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x120E7FE4: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x120E7FE4: shl eax, 2 */
    MEM32(ebp + (-0x10)) = eax; /* 0x120E7FE7: mov dword ptr [ebp - 0x10], eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edi; /* 0x120E7FEA: add ebx, edi */
    _flag_k = FK_ADD;
    edi = MEM32(ebp + (-0xC)); /* 0x120E7FEC: mov edi, dword ptr [ebp - 0xc] */
    eax = esi; /* 0x120E7FEF: mov eax, esi */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edi); /* 0x120E7FF1: imul ecx, edi */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x120E7FF4: imul eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x120E7FF7: add eax, edx */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + (-0x4)); /* 0x120E7FF9: mov edx, dword ptr [ebp - 4] */
    eax = edx + eax * 4; /* 0x120E7FFC: lea eax, [edx + eax*4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x120E7FFF: add ecx, edx */
    _flag_k = FK_ADD;
    edx = MEM32(ebp + 0x10); /* 0x120E8001: mov edx, dword ptr [ebp + 0x10] */
L_120E8004:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - MEM32(ebp + (-0x1C)); /* 0x120E8004: sub ebx, dword ptr [ebp - 0x1c] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x10)); /* 0x120E8007: sub eax, dword ptr [ebp - 0x10] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(ebp + (-0x10)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(ebp + (-0x10)); /* 0x120E800A: sub ecx, dword ptr [ebp - 0x10] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x120E800D: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x14)) = ebx; /* 0x120E800E: mov dword ptr [ebp - 0x14], ebx */
    MEM32(ebp + (-0x20)) = esi; /* 0x120E8011: mov dword ptr [ebp - 0x20], esi */
    MEM32(ebp + (-0x18)) = eax; /* 0x120E8014: mov dword ptr [ebp - 0x18], eax */
    MEM32(ebp + (-0x24)) = ecx; /* 0x120E8017: mov dword ptr [ebp - 0x24], ecx */
    ebx = edi; /* 0x120E801A: mov ebx, edi */
    /* cmp edi, edx */ /* 0x120E801C: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E8043; /* 0x120E801E: jbe 0x120e8043 */
L_120E8020:
    esi = MEM32(ebp + (-0x8)); /* 0x120E8020: mov esi, dword ptr [ebp - 8] */
    edi = ecx; /* 0x120E8023: mov edi, ecx */
L_120E8025:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x120E8025: dec ebx */
    _flag_k = FK_DEC;
    eax = ebx; /* 0x120E8026: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x120E8028: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi + eax * 4); /* 0x120E802B: mov eax, dword ptr [esi + eax*4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 4; /* 0x120E802E: sub edi, 4 */
    _flag_k = FK_CMP;
    MEM32(edi) = eax; /* 0x120E8031: mov dword ptr [edi], eax */
    /* cmp ebx, edx */ /* 0x120E8033: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_120E8025; /* 0x120E8035: ja 0x120e8025 */
L_120E8037:
    esi = MEM32(ebp + (-0x20)); /* 0x120E8037: mov esi, dword ptr [ebp - 0x20] */
    edi = MEM32(ebp + (-0xC)); /* 0x120E803A: mov edi, dword ptr [ebp - 0xc] */
    ecx = MEM32(ebp + (-0x24)); /* 0x120E803D: mov ecx, dword ptr [ebp - 0x24] */
    eax = MEM32(ebp + (-0x18)); /* 0x120E8040: mov eax, dword ptr [ebp - 0x18] */
L_120E8043:
    MEM32(ebp + (-0x24)) = edx; /* 0x120E8043: mov dword ptr [ebp - 0x24], edx */
    /* test edx, edx */ /* 0x120E8046: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E8062; /* 0x120E8048: je 0x120e8062 */
L_120E804A:
    edi = MEM32(ebp + (-0x14)); /* 0x120E804A: mov edi, dword ptr [ebp - 0x14] */
    ebx = eax; /* 0x120E804D: mov ebx, eax */
L_120E804F:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 4; /* 0x120E804F: sub edi, 4 */
    _flag_k = FK_CMP;
    eax = MEM32(edi); /* 0x120E8052: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 4; /* 0x120E8054: sub ebx, 4 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x120E8057: dec edx */
    _flag_k = FK_DEC;
    MEM32(ebx) = eax; /* 0x120E8058: mov dword ptr [ebx], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E804F; /* 0x120E805A: jne 0x120e804f */
L_120E805C:
    edx = MEM32(ebp + 0x10); /* 0x120E805C: mov edx, dword ptr [ebp + 0x10] */
    edi = MEM32(ebp + (-0xC)); /* 0x120E805F: mov edi, dword ptr [ebp - 0xc] */
L_120E8062:
    ebx = MEM32(ebp + (-0x14)); /* 0x120E8062: mov ebx, dword ptr [ebp - 0x14] */
    eax = MEM32(ebp + (-0x18)); /* 0x120E8065: mov eax, dword ptr [ebp - 0x18] */
    /* test esi, esi */ /* 0x120E8068: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E8004; /* 0x120E806A: jne 0x120e8004 */
L_120E806C:
    ecx = MEM32(ebp + 0x14); /* 0x120E806C: mov ecx, dword ptr [ebp + 0x14] */
    ebx = MEM32(ebp + 0x8); /* 0x120E806F: mov ebx, dword ptr [ebp + 8] */
L_120E8072:
    edx = MEM32(ebp + (-0x4)); /* 0x120E8072: mov edx, dword ptr [ebp - 4] */
    edi = edx; /* 0x120E8075: mov edi, edx */
    goto L_120E807C; /* 0x120E8077: jmp 0x120e807c */
L_120E8079:
    edx = MEM32(ebp + (-0x4)); /* 0x120E8079: mov edx, dword ptr [ebp - 4] */
L_120E807C:
    eax = MEM32(ebx + 0x2C); /* 0x120E807C: mov eax, dword ptr [ebx + 0x2c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x120E807F: imul eax, ecx */
    ecx = (uint32_t)MEM16(ebx + 0xC); /* 0x120E8082: movzx ecx, word ptr [ebx + 0xc] */
    /* cmp eax, ecx */ /* 0x120E8086: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E808C; /* 0x120E8088: jbe 0x120e808c */
L_120E808A:
    eax = ecx; /* 0x120E808A: mov eax, ecx */
L_120E808C:
    ecx = MEM32(ebx + 0x1C); /* 0x120E808C: mov ecx, dword ptr [ebx + 0x1c] */
    /* test ecx, ecx */ /* 0x120E808F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E809A; /* 0x120E8091: jne 0x120e809a */
L_120E8093:
    eax = 0x80004005u; /* 0x120E8093: mov eax, 0x80004005 */
    goto L_120E80B0; /* 0x120E8098: jmp 0x120e80b0 */
L_120E809A:
    PUSH32(esp, eax); /* 0x120E809A: push eax */
    eax = (uint32_t)MEM16(ebx + 0xA); /* 0x120E809B: movzx eax, word ptr [ebx + 0xa] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x18); /* 0x120E809F: add eax, dword ptr [ebp + 0x18] */
    _flag_k = FK_ADD;
    PUSH32(esp, edx); /* 0x120E80A2: push edx */
    PUSH32(esp, edi); /* 0x120E80A3: push edi */
    PUSH32(esp, eax); /* 0x120E80A4: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120E80A5: push dword ptr [ebp + 0xc] */
    RECOMP_ICALL(ecx); /* 0x120E80A8: call ecx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120E80AA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E80B0; /* 0x120E80AC: js 0x120e80b0 */
L_120E80AE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E80AE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E80B0:
    edi = POP32_VAL(esp); /* 0x120E80B0: pop edi */
    esi = POP32_VAL(esp); /* 0x120E80B1: pop esi */
    ebx = POP32_VAL(esp); /* 0x120E80B2: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E80B3: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x120E80B4: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_120E80BC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E80BCu);

L_120E80BC:
    edi = edi; /* 0x120E80BC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E80BE: push ebp */
    ebp = esp; /* 0x120E80BF: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x120E80C1: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x120E80C4: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x120E80C5: mov ebx, dword ptr [ebp + 8] */
    eax = MEM32(ebx + 0x20); /* 0x120E80C8: mov eax, dword ptr [ebx + 0x20] */
    PUSH32(esp, esi); /* 0x120E80CB: push esi */
    esi = MEM32(ebx + 0x18); /* 0x120E80CC: mov esi, dword ptr [ebx + 0x18] */
    MEM32(ebp + (-0x4)) = eax; /* 0x120E80CF: mov dword ptr [ebp - 4], eax */
    eax = (uint32_t)MEM16(esi); /* 0x120E80D2: movzx eax, word ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x120E80D5: sub eax, 0 */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x120E80D8: push edi */
    edi = MEM32(ebp + 0x10); /* 0x120E80D9: mov edi, dword ptr [ebp + 0x10] */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_120E822A; /* 0x120E80DC: je 0x120e822a */
L_120E80E2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E80E2: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120E8224; /* 0x120E80E3: je 0x120e8224 */
L_120E80E9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E80E9: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120E820E; /* 0x120E80EA: je 0x120e820e */
L_120E80F0:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E80F0: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120E817F; /* 0x120E80F1: je 0x120e817f */
L_120E80F7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E80F7: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E80F8: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120E8105; /* 0x120E80F9: je 0x120e8105 */
L_120E80FB:
    eax = 0x80004001u; /* 0x120E80FB: mov eax, 0x80004001 */
    goto L_120E83E4; /* 0x120E8100: jmp 0x120e83e4 */
L_120E8105:
    eax = MEM32(ebp + 0x14); /* 0x120E8105: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120E8108: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ebx + 0x34); /* 0x120E810A: div dword ptr [ebx + 0x34] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ebx = eax; /* 0x120E810D: mov ebx, eax */
    eax = (uint32_t)MEM16(esi + 0x8); /* 0x120E810F: movzx eax, word ptr [esi + 8] */
    /* cmp ebx, eax */ /* 0x120E8113: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E8119; /* 0x120E8115: jbe 0x120e8119 */
L_120E8117:
    ebx = eax; /* 0x120E8117: mov ebx, eax */
L_120E8119:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E8119: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = eax; /* 0x120E811B: mov dword ptr [ebp + 0x10], eax */
    /* test ebx, ebx */ /* 0x120E811E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E83E2; /* 0x120E8120: je 0x120e83e2 */
L_120E8126:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120E8126: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120E8128: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x14) = ecx; /* 0x120E812A: mov dword ptr [ebp + 0x14], ecx */
    /* cmp LO16(edx), MEM16(esi + 0xA) */ /* 0x120E812D: cmp dx, word ptr [esi + 0xa] */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(MEM16(esi + 0xA)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_120E8172; /* 0x120E8131: jae 0x120e8172 */
L_120E8133:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120E8133: push dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + 0x8); /* 0x120E8136: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x38); /* 0x120E8139: mov eax, dword ptr [eax + 0x38] */
    eax = MEM32(eax + ecx * 4); /* 0x120E813C: mov eax, dword ptr [eax + ecx*4] */
    PUSH32(esp, MEM32(eax + 0x30)); /* 0x120E813F: push dword ptr [eax + 0x30] */
    MEM32(ebp + (-0x10)) = eax; /* 0x120E8142: mov dword ptr [ebp - 0x10], eax */
    PUSH32(esp, edi); /* 0x120E8145: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120E8146: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x120E8149: push eax */
    RECOMP_CALL(sub_120E80BC); /* 0x120E814A: call 0x120e80bc */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120E814F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E83E4; /* 0x120E8151: js 0x120e83e4 */
L_120E8157:
    eax = MEM32(ebp + (-0x10)); /* 0x120E8157: mov eax, dword ptr [ebp - 0x10] */
    eax = MEM32(eax + 0x30); /* 0x120E815A: mov eax, dword ptr [eax + 0x30] */
    ecx = MEM32(ebp + 0x14); /* 0x120E815D: mov ecx, dword ptr [ebp + 0x14] */
    edi = edi + eax * 4; /* 0x120E8160: lea edi, [edi + eax*4] */
    eax = (uint32_t)MEM16(esi + 0xA); /* 0x120E8163: movzx eax, word ptr [esi + 0xa] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120E8167: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + 0x14) = ecx; /* 0x120E8168: mov dword ptr [ebp + 0x14], ecx */
    /* cmp ecx, eax */ /* 0x120E816B: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E8133; /* 0x120E816D: jb 0x120e8133 */
L_120E816F:
    eax = MEM32(ebp + 0x10); /* 0x120E816F: mov eax, dword ptr [ebp + 0x10] */
L_120E8172:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120E8172: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + 0x10) = eax; /* 0x120E8173: mov dword ptr [ebp + 0x10], eax */
    /* cmp eax, ebx */ /* 0x120E8176: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E8126; /* 0x120E8178: jb 0x120e8126 */
L_120E817A:
    goto L_120E83E2; /* 0x120E817A: jmp 0x120e83e2 */
L_120E817F:
    ebx = (uint32_t)MEM16(esi + 0x4); /* 0x120E817F: movzx ebx, word ptr [esi + 4] */
    eax = (uint32_t)MEM16(esi + 0x6); /* 0x120E8183: movzx eax, word ptr [esi + 6] */
    ecx = ebx; /* 0x120E8187: mov ecx, ebx */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x120E8189: imul ecx, eax */
    eax = MEM32(ebp + 0x14); /* 0x120E818C: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120E818F: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x120E8191: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    edx = eax; /* 0x120E8193: mov edx, eax */
    eax = (uint32_t)MEM16(esi + 0x8); /* 0x120E8195: movzx eax, word ptr [esi + 8] */
    MEM32(ebp + 0x14) = edx; /* 0x120E8199: mov dword ptr [ebp + 0x14], edx */
    /* cmp edx, eax */ /* 0x120E819C: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E81A5; /* 0x120E819E: jbe 0x120e81a5 */
L_120E81A0:
    edx = eax; /* 0x120E81A0: mov edx, eax */
    MEM32(ebp + 0x14) = eax; /* 0x120E81A2: mov dword ptr [ebp + 0x14], eax */
L_120E81A5:
    eax = MEM32(ebp + (-0x4)); /* 0x120E81A5: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0; /* 0x120E81A8: and dword ptr [ebp + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = eax; /* 0x120E81AC: mov dword ptr [ebp - 0xc], eax */
    /* test edx, edx */ /* 0x120E81AF: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E8207; /* 0x120E81B1: je 0x120e8207 */
L_120E81B3:
    eax = (uint32_t)MEM16(esi + 0x6); /* 0x120E81B3: movzx eax, word ptr [esi + 6] */
L_120E81B7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120E81B7: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x120E81B9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E81F9; /* 0x120E81BB: je 0x120e81f9 */
L_120E81BD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120E81BD: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x120E81BF: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E81E9; /* 0x120E81C1: je 0x120e81e9 */
L_120E81C3:
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(ebp + 0x10)); /* 0x120E81C3: imul ebx, dword ptr [ebp + 0x10] */
    eax = (uint32_t)MEM16(esi + 0x6); /* 0x120E81C7: movzx eax, word ptr [esi + 6] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edx; /* 0x120E81CB: add ebx, edx */
    _flag_k = FK_ADD;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax); /* 0x120E81CD: imul ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x120E81D0: add ebx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edi + ebx * 4); /* 0x120E81D2: mov eax, dword ptr [edi + ebx*4] */
    ebx = MEM32(ebp + (-0xC)); /* 0x120E81D5: mov ebx, dword ptr [ebp - 0xc] */
    MEM32(ebx) = eax; /* 0x120E81D8: mov dword ptr [ebx], eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x120E81DA: add ebx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = ebx; /* 0x120E81DD: mov dword ptr [ebp - 0xc], ebx */
    ebx = (uint32_t)MEM16(esi + 0x4); /* 0x120E81E0: movzx ebx, word ptr [esi + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120E81E4: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, ebx */ /* 0x120E81E5: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E81C3; /* 0x120E81E7: jb 0x120e81c3 */
L_120E81E9:
    edx = (uint32_t)MEM16(esi + 0x6); /* 0x120E81E9: movzx edx, word ptr [esi + 6] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120E81ED: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, edx */ /* 0x120E81EE: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E81BD; /* 0x120E81F0: jb 0x120e81bd */
L_120E81F2:
    edx = MEM32(ebp + 0x14); /* 0x120E81F2: mov edx, dword ptr [ebp + 0x14] */
    eax = (uint32_t)MEM16(esi + 0x6); /* 0x120E81F5: movzx eax, word ptr [esi + 6] */
L_120E81F9:
    ecx = MEM32(ebp + 0x10); /* 0x120E81F9: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120E81FC: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + 0x10) = ecx; /* 0x120E81FD: mov dword ptr [ebp + 0x10], ecx */
    /* cmp ecx, edx */ /* 0x120E8200: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E81B7; /* 0x120E8202: jb 0x120e81b7 */
L_120E8204:
    eax = MEM32(ebp + (-0x4)); /* 0x120E8204: mov eax, dword ptr [ebp - 4] */
L_120E8207:
    ebx = MEM32(ebp + 0x8); /* 0x120E8207: mov ebx, dword ptr [ebp + 8] */
    edi = eax; /* 0x120E820A: mov edi, eax */
    goto L_120E823D; /* 0x120E820C: jmp 0x120e823d */
L_120E820E:
    ecx = (uint32_t)MEM16(esi + 0x6); /* 0x120E820E: movzx ecx, word ptr [esi + 6] */
    eax = (uint32_t)MEM16(esi + 0x4); /* 0x120E8212: movzx eax, word ptr [esi + 4] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x120E8216: imul ecx, eax */
L_120E8219:
    eax = MEM32(ebp + 0x14); /* 0x120E8219: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120E821C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x120E821E: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    edx = eax; /* 0x120E8220: mov edx, eax */
    goto L_120E822D; /* 0x120E8222: jmp 0x120e822d */
L_120E8224:
    ecx = (uint32_t)MEM16(esi + 0x6); /* 0x120E8224: movzx ecx, word ptr [esi + 6] */
    RECOMP_BACKEDGE();
    goto L_120E8219; /* 0x120E8228: jmp 0x120e8219 */
L_120E822A:
    edx = MEM32(ebp + 0x14); /* 0x120E822A: mov edx, dword ptr [ebp + 0x14] */
L_120E822D:
    eax = (uint32_t)MEM16(esi + 0x8); /* 0x120E822D: movzx eax, word ptr [esi + 8] */
    MEM32(ebp + 0x14) = edx; /* 0x120E8231: mov dword ptr [ebp + 0x14], edx */
    /* cmp edx, eax */ /* 0x120E8234: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E823D; /* 0x120E8236: jbe 0x120e823d */
L_120E8238:
    edx = eax; /* 0x120E8238: mov edx, eax */
    MEM32(ebp + 0x14) = edx; /* 0x120E823A: mov dword ptr [ebp + 0x14], edx */
L_120E823D:
    eax = (uint32_t)MEM16(esi + 0x2); /* 0x120E823D: movzx eax, word ptr [esi + 2] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120E8241: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120E8243: inc ecx */
    _flag_k = FK_INC;
    /* cmp LO16(ecx), LO16(eax) */ /* 0x120E8244: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E82AD; /* 0x120E8247: je 0x120e82ad */
L_120E8249:
    ecx = MEM32(ebx + 0x34); /* 0x120E8249: mov ecx, dword ptr [ebx + 0x34] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx); /* 0x120E824C: imul ecx, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E824F: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120E82AA; /* 0x120E8250: je 0x120e82aa */
L_120E8252:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E8252: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120E828C; /* 0x120E8253: je 0x120e828c */
L_120E8255:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E8255: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E82AA; /* 0x120E8256: jne 0x120e82aa */
L_120E8258:
    /* test ecx, ecx */ /* 0x120E8258: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E82AA; /* 0x120E825A: je 0x120e82aa */
L_120E825C:
    eax = MEM32(ebp + (-0x4)); /* 0x120E825C: mov eax, dword ptr [ebp - 4] */
    fp_push(1.0); /* 0x120E825F: fld1  */
    fp_push(0.0); /* 0x120E8261: fldz  */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x120E8263: sub edi, eax */
    _flag_k = FK_CMP;
    goto L_120E8269; /* 0x120E8265: jmp 0x120e8269 */
L_120E8267:
    fp_xch(1); /* 0x120E8267: fxch st(1) */
L_120E8269:
    /* cmp MEM32(edi + eax), 0 */ /* 0x120E8269: cmp dword ptr [edi + eax], 0 */
    _flag_a = (uint32_t)(MEM32(edi + eax)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E8276; /* 0x120E826D: je 0x120e8276 */
L_120E826F:
    fp_xch(1); /* 0x120E826F: fxch st(1) */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + 0x10) = _v; } /* 0x120E8271: fst dword ptr [ebp + 0x10] */
    goto L_120E827B; /* 0x120E8274: jmp 0x120e827b */
L_120E8276:
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + 0x10) = _v; } /* 0x120E8276: fst dword ptr [ebp + 0x10] */
    fp_xch(1); /* 0x120E8279: fxch st(1) */
L_120E827B:
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x120E827B: fld dword ptr [ebp + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x120E827E: fstp dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x120E8280: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x120E8283: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E8267; /* 0x120E8284: jne 0x120e8267 */
L_120E8286:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E8286: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E8288: fstp st(0) */
    goto L_120E82AA; /* 0x120E828A: jmp 0x120e82aa */
L_120E828C:
    /* test ecx, ecx */ /* 0x120E828C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E82AA; /* 0x120E828E: je 0x120e82aa */
L_120E8290:
    eax = MEM32(ebp + (-0x4)); /* 0x120E8290: mov eax, dword ptr [ebp - 4] */
    ebx = eax; /* 0x120E8293: mov ebx, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - eax; /* 0x120E8295: sub edi, eax */
    _flag_k = FK_CMP;
L_120E8297:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E8297: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + edi), eax */ /* 0x120E8299: cmp dword ptr [ebx + edi], eax */
    _flag_a = (uint32_t)(MEM32(ebx + edi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x120E829C: setne al */
    MEM32(ebx) = eax; /* 0x120E829F: mov dword ptr [ebx], eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x120E82A1: add ebx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x120E82A4: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E8297; /* 0x120E82A5: jne 0x120e8297 */
L_120E82A7:
    ebx = MEM32(ebp + 0x8); /* 0x120E82A7: mov ebx, dword ptr [ebp + 8] */
L_120E82AA:
    edi = MEM32(ebp + (-0x4)); /* 0x120E82AA: mov edi, dword ptr [ebp - 4] */
L_120E82AD:
    eax = (uint32_t)MEM16(ebx + 0x8); /* 0x120E82AD: movzx eax, word ptr [ebx + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120E82B1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(ecx), LO16(eax) */ /* 0x120E82B3: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E83AD; /* 0x120E82B6: je 0x120e83ad */
L_120E82BC:
    /* cmp MEM16(esi), 3 */ /* 0x120E82BC: cmp word ptr [esi], 3 */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(3) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E82CC; /* 0x120E82C0: je 0x120e82cc */
L_120E82C2:
    ebx = (uint32_t)MEM16(esi + 0x6); /* 0x120E82C2: movzx ebx, word ptr [esi + 6] */
    esi = (uint32_t)MEM16(esi + 0x4); /* 0x120E82C6: movzx esi, word ptr [esi + 4] */
    goto L_120E82D4; /* 0x120E82CA: jmp 0x120e82d4 */
L_120E82CC:
    ebx = (uint32_t)MEM16(esi + 0x4); /* 0x120E82CC: movzx ebx, word ptr [esi + 4] */
    esi = (uint32_t)MEM16(esi + 0x6); /* 0x120E82D0: movzx esi, word ptr [esi + 6] */
L_120E82D4:
    /* test LO8(ebx), 3 */ /* 0x120E82D4: test bl, 3 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E83AA; /* 0x120E82D7: je 0x120e83aa */
L_120E82DD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120E82DD: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120E82DF: inc ecx */
    _flag_k = FK_INC;
    /* cmp LO16(ecx), LO16(eax) */ /* 0x120E82E0: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E82EF; /* 0x120E82E3: jne 0x120e82ef */
L_120E82E5:
    ecx = 0x12008A44u; /* 0x120E82E5: mov ecx, 0x12008a44 */
    MEM32(ebp + (-0x10)) = ecx; /* 0x120E82EA: mov dword ptr [ebp - 0x10], ecx */
    goto L_120E82F7; /* 0x120E82ED: jmp 0x120e82f7 */
L_120E82EF:
    eax = 0x12008A34u; /* 0x120E82EF: mov eax, 0x12008a34 */
    MEM32(ebp + (-0x10)) = eax; /* 0x120E82F4: mov dword ptr [ebp - 0x10], eax */
L_120E82F7:
    esi = (uint32_t)((int32_t)esi * (int32_t)edx); /* 0x120E82F7: imul esi, edx */
    eax = ebx + 0x3; /* 0x120E82FA: lea eax, [ebx + 3] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    eax = eax & 0xFFFFFFFCu; /* 0x120E82FD: and eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = eax; /* 0x120E8300: mov dword ptr [ebp - 0xc], eax */
    /* test esi, esi */ /* 0x120E8303: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E83A0; /* 0x120E8305: je 0x120e83a0 */
L_120E830B:
    edx = MEM32(ebp + (-0xC)); /* 0x120E830B: mov edx, dword ptr [ebp - 0xc] */
    ecx = esi * 4 + 0x4; /* 0x120E830E: lea ecx, [esi*4 + 4] */
    eax = ebx; /* 0x120E8315: mov eax, ebx */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x120E8317: imul eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x120E831A: add eax, edi */
    _flag_k = FK_ADD;
    edi = MEM32(ebp + (-0x4)); /* 0x120E831C: mov edi, dword ptr [ebp - 4] */
    MEM32(ebp + 0x10) = eax; /* 0x120E831F: mov dword ptr [ebp + 0x10], eax */
    eax = esi; /* 0x120E8322: mov eax, esi */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx); /* 0x120E8324: imul eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x120E8327: add eax, ebx */
    _flag_k = FK_ADD;
    eax = edi + eax * 4; /* 0x120E8329: lea eax, [edi + eax*4] */
    MEM32(ebp + (-0x8)) = eax; /* 0x120E832C: mov dword ptr [ebp - 8], eax */
    eax = edx; /* 0x120E832F: mov eax, edx */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x120E8331: imul eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x120E8334: add eax, edi */
    _flag_k = FK_ADD;
L_120E8336:
    edi = MEM32(ebp + 0x10); /* 0x120E8336: mov edi, dword ptr [ebp + 0x10] */
    ecx = edx; /* 0x120E8339: mov ecx, edx */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x120E833B: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x120E833B: shl ecx, 2 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) - ecx; /* 0x120E833E: sub dword ptr [ebp - 8], ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x120E8341: sub eax, ecx */
    _flag_k = FK_CMP;
    ecx = ebx; /* 0x120E8343: mov ecx, ebx */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x120E8345: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x120E8345: shl ecx, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x120E8348: sub edi, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x120E834A: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x14)) = esi; /* 0x120E834B: mov dword ptr [ebp - 0x14], esi */
    MEM32(ebp + (-0x18)) = eax; /* 0x120E834E: mov dword ptr [ebp - 0x18], eax */
    MEM32(ebp + 0x10) = edi; /* 0x120E8351: mov dword ptr [ebp + 0x10], edi */
    ecx = edx; /* 0x120E8354: mov ecx, edx */
    /* cmp edx, ebx */ /* 0x120E8356: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E837A; /* 0x120E8358: jbe 0x120e837a */
L_120E835A:
    esi = MEM32(ebp + (-0x10)); /* 0x120E835A: mov esi, dword ptr [ebp - 0x10] */
    edi = eax; /* 0x120E835D: mov edi, eax */
L_120E835F:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x120E835F: dec ecx */
    _flag_k = FK_DEC;
    eax = ecx; /* 0x120E8360: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x120E8362: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi + eax * 4); /* 0x120E8365: mov eax, dword ptr [esi + eax*4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 4; /* 0x120E8368: sub edi, 4 */
    _flag_k = FK_CMP;
    MEM32(edi) = eax; /* 0x120E836B: mov dword ptr [edi], eax */
    /* cmp ecx, ebx */ /* 0x120E836D: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_120E835F; /* 0x120E836F: ja 0x120e835f */
L_120E8371:
    esi = MEM32(ebp + (-0x14)); /* 0x120E8371: mov esi, dword ptr [ebp - 0x14] */
    edx = MEM32(ebp + (-0xC)); /* 0x120E8374: mov edx, dword ptr [ebp - 0xc] */
    edi = MEM32(ebp + 0x10); /* 0x120E8377: mov edi, dword ptr [ebp + 0x10] */
L_120E837A:
    MEM32(ebp + (-0x14)) = ebx; /* 0x120E837A: mov dword ptr [ebp - 0x14], ebx */
    /* test ebx, ebx */ /* 0x120E837D: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E8396; /* 0x120E837F: je 0x120e8396 */
L_120E8381:
    ecx = MEM32(ebp + (-0x8)); /* 0x120E8381: mov ecx, dword ptr [ebp - 8] */
    edx = ebx; /* 0x120E8384: mov edx, ebx */
L_120E8386:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 4; /* 0x120E8386: sub edi, 4 */
    _flag_k = FK_CMP;
    eax = MEM32(edi); /* 0x120E8389: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 4; /* 0x120E838B: sub ecx, 4 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x120E838E: dec edx */
    _flag_k = FK_DEC;
    MEM32(ecx) = eax; /* 0x120E838F: mov dword ptr [ecx], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E8386; /* 0x120E8391: jne 0x120e8386 */
L_120E8393:
    edx = MEM32(ebp + (-0xC)); /* 0x120E8393: mov edx, dword ptr [ebp - 0xc] */
L_120E8396:
    eax = MEM32(ebp + (-0x18)); /* 0x120E8396: mov eax, dword ptr [ebp - 0x18] */
    /* test esi, esi */ /* 0x120E8399: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E8336; /* 0x120E839B: jne 0x120e8336 */
L_120E839D:
    edx = MEM32(ebp + 0x14); /* 0x120E839D: mov edx, dword ptr [ebp + 0x14] */
L_120E83A0:
    esi = MEM32(ebp + (-0x4)); /* 0x120E83A0: mov esi, dword ptr [ebp - 4] */
    ebx = MEM32(ebp + 0x8); /* 0x120E83A3: mov ebx, dword ptr [ebp + 8] */
    edi = esi; /* 0x120E83A6: mov edi, esi */
    goto L_120E83B0; /* 0x120E83A8: jmp 0x120e83b0 */
L_120E83AA:
    ebx = MEM32(ebp + 0x8); /* 0x120E83AA: mov ebx, dword ptr [ebp + 8] */
L_120E83AD:
    esi = MEM32(ebp + (-0x4)); /* 0x120E83AD: mov esi, dword ptr [ebp - 4] */
L_120E83B0:
    eax = MEM32(ebx + 0x2C); /* 0x120E83B0: mov eax, dword ptr [ebx + 0x2c] */
    ecx = (uint32_t)MEM16(ebx + 0xC); /* 0x120E83B3: movzx ecx, word ptr [ebx + 0xc] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx); /* 0x120E83B7: imul eax, edx */
    /* cmp eax, ecx */ /* 0x120E83BA: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E83C0; /* 0x120E83BC: jbe 0x120e83c0 */
L_120E83BE:
    eax = ecx; /* 0x120E83BE: mov eax, ecx */
L_120E83C0:
    ecx = MEM32(ebx + 0x1C); /* 0x120E83C0: mov ecx, dword ptr [ebx + 0x1c] */
    /* test ecx, ecx */ /* 0x120E83C3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E83CE; /* 0x120E83C5: jne 0x120e83ce */
L_120E83C7:
    eax = 0x80004005u; /* 0x120E83C7: mov eax, 0x80004005 */
    goto L_120E83E4; /* 0x120E83CC: jmp 0x120e83e4 */
L_120E83CE:
    PUSH32(esp, eax); /* 0x120E83CE: push eax */
    eax = (uint32_t)MEM16(ebx + 0xA); /* 0x120E83CF: movzx eax, word ptr [ebx + 0xa] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x18); /* 0x120E83D3: add eax, dword ptr [ebp + 0x18] */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x120E83D6: push esi */
    PUSH32(esp, edi); /* 0x120E83D7: push edi */
    PUSH32(esp, eax); /* 0x120E83D8: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120E83D9: push dword ptr [ebp + 0xc] */
    RECOMP_ICALL(ecx); /* 0x120E83DC: call ecx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120E83DE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E83E4; /* 0x120E83E0: js 0x120e83e4 */
L_120E83E2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E83E2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E83E4:
    edi = POP32_VAL(esp); /* 0x120E83E4: pop edi */
    esi = POP32_VAL(esp); /* 0x120E83E5: pop esi */
    ebx = POP32_VAL(esp); /* 0x120E83E6: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E83E7: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x120E83E8: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_120E83F0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E83F0u);

L_120E83F0:
    edi = edi; /* 0x120E83F0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E83F2: push ebp */
    ebp = esp; /* 0x120E83F3: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x120E83F5: sub esp, 0x1c */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x8); /* 0x120E83F8: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x120E83FB: push ebx */
    ebx = MEM32(ecx + 0x20); /* 0x120E83FC: mov ebx, dword ptr [ecx + 0x20] */
    PUSH32(esp, esi); /* 0x120E83FF: push esi */
    esi = MEM32(ecx + 0x18); /* 0x120E8400: mov esi, dword ptr [ecx + 0x18] */
    eax = (uint32_t)MEM16(esi); /* 0x120E8403: movzx eax, word ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x120E8406: sub eax, 0 */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x120E8409: push edi */
    edi = MEM32(ebp + 0x10); /* 0x120E840A: mov edi, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x120E840D: mov dword ptr [ebp - 4], ebx */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_120E85E2; /* 0x120E8410: je 0x120e85e2 */
L_120E8416:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E8416: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120E85BD; /* 0x120E8417: je 0x120e85bd */
L_120E841D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E841D: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120E8597; /* 0x120E841E: je 0x120e8597 */
L_120E8424:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E8424: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120E84B3; /* 0x120E8425: je 0x120e84b3 */
L_120E842B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E842B: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E842C: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120E8439; /* 0x120E842D: je 0x120e8439 */
L_120E842F:
    eax = 0x80004001u; /* 0x120E842F: mov eax, 0x80004001 */
    goto L_120E8740; /* 0x120E8434: jmp 0x120e8740 */
L_120E8439:
    eax = MEM32(ebp + 0x14); /* 0x120E8439: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120E843C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ecx + 0x34); /* 0x120E843E: div dword ptr [ecx + 0x34] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ebx = eax; /* 0x120E8441: mov ebx, eax */
    eax = (uint32_t)MEM16(esi + 0x8); /* 0x120E8443: movzx eax, word ptr [esi + 8] */
    /* cmp ebx, eax */ /* 0x120E8447: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E844D; /* 0x120E8449: jbe 0x120e844d */
L_120E844B:
    ebx = eax; /* 0x120E844B: mov ebx, eax */
L_120E844D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E844D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = eax; /* 0x120E844F: mov dword ptr [ebp + 0x10], eax */
    /* test ebx, ebx */ /* 0x120E8452: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E873E; /* 0x120E8454: je 0x120e873e */
L_120E845A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120E845A: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120E845C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x14) = ecx; /* 0x120E845E: mov dword ptr [ebp + 0x14], ecx */
    /* cmp LO16(edx), MEM16(esi + 0xA) */ /* 0x120E8461: cmp dx, word ptr [esi + 0xa] */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(MEM16(esi + 0xA)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_120E84A6; /* 0x120E8465: jae 0x120e84a6 */
L_120E8467:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120E8467: push dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + 0x8); /* 0x120E846A: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x38); /* 0x120E846D: mov eax, dword ptr [eax + 0x38] */
    eax = MEM32(eax + ecx * 4); /* 0x120E8470: mov eax, dword ptr [eax + ecx*4] */
    PUSH32(esp, MEM32(eax + 0x30)); /* 0x120E8473: push dword ptr [eax + 0x30] */
    MEM32(ebp + (-0x18)) = eax; /* 0x120E8476: mov dword ptr [ebp - 0x18], eax */
    PUSH32(esp, edi); /* 0x120E8479: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120E847A: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x120E847D: push eax */
    RECOMP_CALL(sub_120E83F0); /* 0x120E847E: call 0x120e83f0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120E8483: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E8740; /* 0x120E8485: js 0x120e8740 */
L_120E848B:
    eax = MEM32(ebp + (-0x18)); /* 0x120E848B: mov eax, dword ptr [ebp - 0x18] */
    eax = MEM32(eax + 0x30); /* 0x120E848E: mov eax, dword ptr [eax + 0x30] */
    ecx = MEM32(ebp + 0x14); /* 0x120E8491: mov ecx, dword ptr [ebp + 0x14] */
    edi = edi + eax * 4; /* 0x120E8494: lea edi, [edi + eax*4] */
    eax = (uint32_t)MEM16(esi + 0xA); /* 0x120E8497: movzx eax, word ptr [esi + 0xa] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120E849B: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + 0x14) = ecx; /* 0x120E849C: mov dword ptr [ebp + 0x14], ecx */
    /* cmp ecx, eax */ /* 0x120E849F: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E8467; /* 0x120E84A1: jb 0x120e8467 */
L_120E84A3:
    eax = MEM32(ebp + 0x10); /* 0x120E84A3: mov eax, dword ptr [ebp + 0x10] */
L_120E84A6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120E84A6: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + 0x10) = eax; /* 0x120E84A7: mov dword ptr [ebp + 0x10], eax */
    /* cmp eax, ebx */ /* 0x120E84AA: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E845A; /* 0x120E84AC: jb 0x120e845a */
L_120E84AE:
    goto L_120E873E; /* 0x120E84AE: jmp 0x120e873e */
L_120E84B3:
    ecx = (uint32_t)MEM16(esi + 0x4); /* 0x120E84B3: movzx ecx, word ptr [esi + 4] */
    eax = (uint32_t)MEM16(esi + 0x6); /* 0x120E84B7: movzx eax, word ptr [esi + 6] */
    MEM32(ebp + (-0x14)) = ecx; /* 0x120E84BB: mov dword ptr [ebp - 0x14], ecx */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x120E84BE: imul ecx, eax */
    eax = MEM32(ebp + 0x14); /* 0x120E84C1: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120E84C4: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x120E84C6: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    edx = eax; /* 0x120E84C8: mov edx, eax */
    eax = (uint32_t)MEM16(esi + 0x8); /* 0x120E84CA: movzx eax, word ptr [esi + 8] */
    MEM32(ebp + 0x14) = edx; /* 0x120E84CE: mov dword ptr [ebp + 0x14], edx */
    /* cmp edx, eax */ /* 0x120E84D1: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E84DA; /* 0x120E84D3: jbe 0x120e84da */
L_120E84D5:
    edx = eax; /* 0x120E84D5: mov edx, eax */
    MEM32(ebp + 0x14) = eax; /* 0x120E84D7: mov dword ptr [ebp + 0x14], eax */
L_120E84DA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120E84DA: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ebx; /* 0x120E84DC: mov dword ptr [ebp - 0x10], ebx */
    MEM32(ebp + (-0xC)) = ecx; /* 0x120E84DF: mov dword ptr [ebp - 0xc], ecx */
    /* test edx, edx */ /* 0x120E84E2: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E8555; /* 0x120E84E4: je 0x120e8555 */
L_120E84E6:
    ebx = (uint32_t)MEM16(esi + 0x6); /* 0x120E84E6: movzx ebx, word ptr [esi + 6] */
L_120E84EA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E84EA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = eax; /* 0x120E84EC: mov dword ptr [ebp - 8], eax */
    /* test ebx, ebx */ /* 0x120E84EF: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E854A; /* 0x120E84F1: je 0x120e854a */
L_120E84F3:
    ecx = MEM32(ebp + (-0x14)); /* 0x120E84F3: mov ecx, dword ptr [ebp - 0x14] */
    edx = MEM32(ebp + (-0xC)); /* 0x120E84F6: mov edx, dword ptr [ebp - 0xc] */
L_120E84F9:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0; /* 0x120E84F9: and dword ptr [ebp + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x120E84FD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E8538; /* 0x120E84FF: je 0x120e8538 */
L_120E8501:
    ebx = MEM32(ebp + (-0x8)); /* 0x120E8501: mov ebx, dword ptr [ebp - 8] */
    eax = MEM32(ebp + 0x10); /* 0x120E8504: mov eax, dword ptr [ebp + 0x10] */
L_120E8507:
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx); /* 0x120E8507: imul ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x120E850A: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM16(esi + 0x6); /* 0x120E850C: movzx eax, word ptr [esi + 6] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x120E8510: imul ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + ebx; /* 0x120E8513: add ecx, ebx */
    _flag_k = FK_ADD;
    eax = MEM32(edi + ecx * 4); /* 0x120E8515: mov eax, dword ptr [edi + ecx*4] */
    ecx = MEM32(ebp + (-0x10)); /* 0x120E8518: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(ecx) = eax; /* 0x120E851B: mov dword ptr [ecx], eax */
    eax = MEM32(ebp + 0x10); /* 0x120E851D: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x120E8520: add ecx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = ecx; /* 0x120E8523: mov dword ptr [ebp - 0x10], ecx */
    ecx = (uint32_t)MEM16(esi + 0x4); /* 0x120E8526: movzx ecx, word ptr [esi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120E852A: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + 0x10) = eax; /* 0x120E852B: mov dword ptr [ebp + 0x10], eax */
    /* cmp eax, ecx */ /* 0x120E852E: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E8507; /* 0x120E8530: jb 0x120e8507 */
L_120E8532:
    eax = MEM32(ebp + (-0x8)); /* 0x120E8532: mov eax, dword ptr [ebp - 8] */
    MEM32(ebp + (-0x14)) = ecx; /* 0x120E8535: mov dword ptr [ebp - 0x14], ecx */
L_120E8538:
    ebx = (uint32_t)MEM16(esi + 0x6); /* 0x120E8538: movzx ebx, word ptr [esi + 6] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120E853C: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x8)) = eax; /* 0x120E853D: mov dword ptr [ebp - 8], eax */
    /* cmp eax, ebx */ /* 0x120E8540: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E84F9; /* 0x120E8542: jb 0x120e84f9 */
L_120E8544:
    edx = MEM32(ebp + 0x14); /* 0x120E8544: mov edx, dword ptr [ebp + 0x14] */
    ecx = MEM32(ebp + (-0xC)); /* 0x120E8547: mov ecx, dword ptr [ebp - 0xc] */
L_120E854A:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120E854A: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0xC)) = ecx; /* 0x120E854B: mov dword ptr [ebp - 0xc], ecx */
    /* cmp ecx, edx */ /* 0x120E854E: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E84EA; /* 0x120E8550: jb 0x120e84ea */
L_120E8552:
    ebx = MEM32(ebp + (-0x4)); /* 0x120E8552: mov ebx, dword ptr [ebp - 4] */
L_120E8555:
    edi = ebx; /* 0x120E8555: mov edi, ebx */
L_120E8557:
    ecx = MEM32(ebp + 0x8); /* 0x120E8557: mov ecx, dword ptr [ebp + 8] */
L_120E855A:
    eax = (uint32_t)MEM16(esi + 0x2); /* 0x120E855A: movzx eax, word ptr [esi + 2] */
    MEM32(ebp + 0x10) = 2; /* 0x120E855E: mov dword ptr [ebp + 0x10], 2 */
    /* cmp MEM16(ebp + 0x10), LO16(eax) */ /* 0x120E8565: cmp word ptr [ebp + 0x10], ax */
    _flag_a = (uint32_t)(MEM16(ebp + 0x10)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E8603; /* 0x120E8569: je 0x120e8603 */
L_120E856F:
    ecx = MEM32(ecx + 0x34); /* 0x120E856F: mov ecx, dword ptr [ecx + 0x34] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx); /* 0x120E8572: imul ecx, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E8575: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120E85E7; /* 0x120E8576: je 0x120e85e7 */
L_120E8578:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E8578: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120E8601; /* 0x120E8579: je 0x120e8601 */
L_120E857F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E857F: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E8601; /* 0x120E8580: jne 0x120e8601 */
L_120E8582:
    /* test ecx, ecx */ /* 0x120E8582: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E8601; /* 0x120E8584: je 0x120e8601 */
L_120E8586:
    eax = ebx; /* 0x120E8586: mov eax, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x120E8588: sub edi, ebx */
    _flag_k = FK_CMP;
L_120E858A:
    fp_push((double)(int32_t)MEM32(edi + eax)); /* 0x120E858A: fild dword ptr [edi + eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax) = _v; } /* 0x120E858D: fstp dword ptr [eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x120E858F: add eax, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x120E8592: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E858A; /* 0x120E8593: jne 0x120e858a */
L_120E8595:
    goto L_120E8601; /* 0x120E8595: jmp 0x120e8601 */
L_120E8597:
    eax = (uint32_t)MEM16(esi + 0x4); /* 0x120E8597: movzx eax, word ptr [esi + 4] */
    ecx = (uint32_t)MEM16(esi + 0x6); /* 0x120E859B: movzx ecx, word ptr [esi + 6] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x120E859F: imul ecx, eax */
    eax = MEM32(ebp + 0x14); /* 0x120E85A2: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120E85A5: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x120E85A7: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    edx = eax; /* 0x120E85A9: mov edx, eax */
    eax = (uint32_t)MEM16(esi + 0x8); /* 0x120E85AB: movzx eax, word ptr [esi + 8] */
    MEM32(ebp + 0x14) = edx; /* 0x120E85AF: mov dword ptr [ebp + 0x14], edx */
    /* cmp edx, eax */ /* 0x120E85B2: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E8557; /* 0x120E85B4: jbe 0x120e8557 */
L_120E85B6:
    edx = eax; /* 0x120E85B6: mov edx, eax */
    MEM32(ebp + 0x14) = edx; /* 0x120E85B8: mov dword ptr [ebp + 0x14], edx */
    RECOMP_BACKEDGE();
    goto L_120E8557; /* 0x120E85BB: jmp 0x120e8557 */
L_120E85BD:
    ecx = (uint32_t)MEM16(esi + 0x6); /* 0x120E85BD: movzx ecx, word ptr [esi + 6] */
    eax = MEM32(ebp + 0x14); /* 0x120E85C1: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120E85C4: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x120E85C6: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ecx = MEM32(ebp + 0x8); /* 0x120E85C8: mov ecx, dword ptr [ebp + 8] */
    edx = eax; /* 0x120E85CB: mov edx, eax */
L_120E85CD:
    eax = (uint32_t)MEM16(esi + 0x8); /* 0x120E85CD: movzx eax, word ptr [esi + 8] */
    MEM32(ebp + 0x14) = edx; /* 0x120E85D1: mov dword ptr [ebp + 0x14], edx */
    /* cmp edx, eax */ /* 0x120E85D4: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E855A; /* 0x120E85D6: jbe 0x120e855a */
L_120E85D8:
    edx = eax; /* 0x120E85D8: mov edx, eax */
    MEM32(ebp + 0x14) = edx; /* 0x120E85DA: mov dword ptr [ebp + 0x14], edx */
    RECOMP_BACKEDGE();
    goto L_120E855A; /* 0x120E85DD: jmp 0x120e855a */
L_120E85E2:
    edx = MEM32(ebp + 0x14); /* 0x120E85E2: mov edx, dword ptr [ebp + 0x14] */
    RECOMP_BACKEDGE();
    goto L_120E85CD; /* 0x120E85E5: jmp 0x120e85cd */
L_120E85E7:
    /* test ecx, ecx */ /* 0x120E85E7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E8601; /* 0x120E85E9: je 0x120e8601 */
L_120E85EB:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(ebp + (-0x4)); /* 0x120E85EB: sub edi, dword ptr [ebp - 4] */
    _flag_k = FK_CMP;
L_120E85EE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E85EE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + edi), eax */ /* 0x120E85F0: cmp dword ptr [ebx + edi], eax */
    _flag_a = (uint32_t)(MEM32(ebx + edi)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x120E85F3: setne al */
    MEM32(ebx) = eax; /* 0x120E85F6: mov dword ptr [ebx], eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x120E85F8: add ebx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x120E85FB: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E85EE; /* 0x120E85FC: jne 0x120e85ee */
L_120E85FE:
    ebx = MEM32(ebp + (-0x4)); /* 0x120E85FE: mov ebx, dword ptr [ebp - 4] */
L_120E8601:
    edi = ebx; /* 0x120E8601: mov edi, ebx */
L_120E8603:
    eax = MEM32(ebp + 0x8); /* 0x120E8603: mov eax, dword ptr [ebp + 8] */
    ecx = (uint32_t)MEM16(eax + 0x8); /* 0x120E8606: movzx ecx, word ptr [eax + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E860A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(eax), LO16(ecx) */ /* 0x120E860C: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E8709; /* 0x120E860F: je 0x120e8709 */
L_120E8615:
    /* cmp MEM16(esi), 3 */ /* 0x120E8615: cmp word ptr [esi], 3 */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(3) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E8625; /* 0x120E8619: je 0x120e8625 */
L_120E861B:
    eax = (uint32_t)MEM16(esi + 0x6); /* 0x120E861B: movzx eax, word ptr [esi + 6] */
    esi = (uint32_t)MEM16(esi + 0x4); /* 0x120E861F: movzx esi, word ptr [esi + 4] */
    goto L_120E862D; /* 0x120E8623: jmp 0x120e862d */
L_120E8625:
    eax = (uint32_t)MEM16(esi + 0x4); /* 0x120E8625: movzx eax, word ptr [esi + 4] */
    esi = (uint32_t)MEM16(esi + 0x6); /* 0x120E8629: movzx esi, word ptr [esi + 6] */
L_120E862D:
    MEM32(ebp + (-0x8)) = eax; /* 0x120E862D: mov dword ptr [ebp - 8], eax */
    /* test LO8(eax), 3 */ /* 0x120E8630: test al, 3 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E8709; /* 0x120E8632: je 0x120e8709 */
L_120E8638:
    MEM32(ebp + 0x10) = 1; /* 0x120E8638: mov dword ptr [ebp + 0x10], 1 */
    /* cmp MEM16(ebp + 0x10), LO16(ecx) */ /* 0x120E863F: cmp word ptr [ebp + 0x10], cx */
    _flag_a = (uint32_t)(MEM16(ebp + 0x10)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    ecx = 0x12008A44u; /* 0x120E8643: mov ecx, 0x12008a44 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E864F; /* 0x120E8648: je 0x120e864f */
L_120E864A:
    ecx = 0x12008A34u; /* 0x120E864A: mov ecx, 0x12008a34 */
L_120E864F:
    esi = (uint32_t)((int32_t)esi * (int32_t)edx); /* 0x120E864F: imul esi, edx */
    MEM32(ebp + (-0x14)) = ecx; /* 0x120E8652: mov dword ptr [ebp - 0x14], ecx */
    ecx = eax + 0x3; /* 0x120E8655: lea ecx, [eax + 3] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFCu);
    ecx = ecx & 0xFFFFFFFCu; /* 0x120E8658: and ecx, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ecx; /* 0x120E865B: mov dword ptr [ebp - 0x10], ecx */
    MEM32(ebp + 0x10) = esi; /* 0x120E865E: mov dword ptr [ebp + 0x10], esi */
    /* test esi, esi */ /* 0x120E8661: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E8707; /* 0x120E8663: je 0x120e8707 */
L_120E8669:
    ecx = esi * 4 + 0x4; /* 0x120E8669: lea ecx, [esi*4 + 4] */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x120E8670: imul eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x120E8673: add eax, edi */
    _flag_k = FK_ADD;
    edi = MEM32(ebp + (-0x10)); /* 0x120E8675: mov edi, dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0xC)) = eax; /* 0x120E8678: mov dword ptr [ebp - 0xc], eax */
    eax = esi; /* 0x120E867B: mov eax, esi */
    esi = MEM32(ebp + (-0x8)); /* 0x120E867D: mov esi, dword ptr [ebp - 8] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x120E8680: imul eax, edi */
    edx = edi; /* 0x120E8683: mov edx, edi */
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx); /* 0x120E8685: imul edx, ecx */
    ecx = MEM32(ebp + 0x10); /* 0x120E8688: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + esi; /* 0x120E868B: add eax, esi */
    _flag_k = FK_ADD;
    eax = ebx + eax * 4; /* 0x120E868D: lea eax, [ebx + eax*4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ebx; /* 0x120E8690: add edx, ebx */
    _flag_k = FK_ADD;
L_120E8692:
    ebx = edi; /* 0x120E8692: mov ebx, edi */
    if (2u) _cf = (((ebx) >> 30) & 1u); /* 0x120E8694: shl ebx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ebx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 2u; /* 0x120E8694: shl ebx, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x120E8697: sub eax, ebx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - ebx; /* 0x120E8699: sub edx, ebx */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x18)) = eax; /* 0x120E869B: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(ebp + (-0xC)); /* 0x120E869E: mov eax, dword ptr [ebp - 0xc] */
    ebx = esi; /* 0x120E86A1: mov ebx, esi */
    if (2u) _cf = (((ebx) >> 30) & 1u); /* 0x120E86A3: shl ebx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ebx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 2u; /* 0x120E86A3: shl ebx, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x120E86A6: sub eax, ebx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x120E86A8: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x10) = ecx; /* 0x120E86A9: mov dword ptr [ebp + 0x10], ecx */
    MEM32(ebp + (-0x1C)) = edx; /* 0x120E86AC: mov dword ptr [ebp - 0x1c], edx */
    MEM32(ebp + (-0xC)) = eax; /* 0x120E86AF: mov dword ptr [ebp - 0xc], eax */
    ebx = edi; /* 0x120E86B2: mov ebx, edi */
    /* cmp edi, esi */ /* 0x120E86B4: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E86DB; /* 0x120E86B6: jbe 0x120e86db */
L_120E86B8:
    ecx = MEM32(ebp + (-0x14)); /* 0x120E86B8: mov ecx, dword ptr [ebp - 0x14] */
    edi = edx; /* 0x120E86BB: mov edi, edx */
L_120E86BD:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x120E86BD: dec ebx */
    _flag_k = FK_DEC;
    eax = ebx; /* 0x120E86BE: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x120E86C0: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx + eax * 4); /* 0x120E86C3: mov eax, dword ptr [ecx + eax*4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 4; /* 0x120E86C6: sub edi, 4 */
    _flag_k = FK_CMP;
    MEM32(edi) = eax; /* 0x120E86C9: mov dword ptr [edi], eax */
    /* cmp ebx, esi */ /* 0x120E86CB: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_120E86BD; /* 0x120E86CD: ja 0x120e86bd */
L_120E86CF:
    ecx = MEM32(ebp + 0x10); /* 0x120E86CF: mov ecx, dword ptr [ebp + 0x10] */
    edi = MEM32(ebp + (-0x10)); /* 0x120E86D2: mov edi, dword ptr [ebp - 0x10] */
    edx = MEM32(ebp + (-0x1C)); /* 0x120E86D5: mov edx, dword ptr [ebp - 0x1c] */
    eax = MEM32(ebp + (-0xC)); /* 0x120E86D8: mov eax, dword ptr [ebp - 0xc] */
L_120E86DB:
    MEM32(ebp + 0x10) = esi; /* 0x120E86DB: mov dword ptr [ebp + 0x10], esi */
    /* test esi, esi */ /* 0x120E86DE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E86FA; /* 0x120E86E0: je 0x120e86fa */
L_120E86E2:
    ebx = MEM32(ebp + (-0x18)); /* 0x120E86E2: mov ebx, dword ptr [ebp - 0x18] */
    edi = eax; /* 0x120E86E5: mov edi, eax */
L_120E86E7:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 4; /* 0x120E86E7: sub edi, 4 */
    _flag_k = FK_CMP;
    eax = MEM32(edi); /* 0x120E86EA: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 4; /* 0x120E86EC: sub ebx, 4 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x120E86EF: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebx) = eax; /* 0x120E86F0: mov dword ptr [ebx], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E86E7; /* 0x120E86F2: jne 0x120e86e7 */
L_120E86F4:
    esi = MEM32(ebp + (-0x8)); /* 0x120E86F4: mov esi, dword ptr [ebp - 8] */
    edi = MEM32(ebp + (-0x10)); /* 0x120E86F7: mov edi, dword ptr [ebp - 0x10] */
L_120E86FA:
    eax = MEM32(ebp + (-0x18)); /* 0x120E86FA: mov eax, dword ptr [ebp - 0x18] */
    /* test ecx, ecx */ /* 0x120E86FD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E8692; /* 0x120E86FF: jne 0x120e8692 */
L_120E8701:
    edx = MEM32(ebp + 0x14); /* 0x120E8701: mov edx, dword ptr [ebp + 0x14] */
    ebx = MEM32(ebp + (-0x4)); /* 0x120E8704: mov ebx, dword ptr [ebp - 4] */
L_120E8707:
    edi = ebx; /* 0x120E8707: mov edi, ebx */
L_120E8709:
    esi = MEM32(ebp + 0x8); /* 0x120E8709: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x2C); /* 0x120E870C: mov eax, dword ptr [esi + 0x2c] */
    ecx = (uint32_t)MEM16(esi + 0xC); /* 0x120E870F: movzx ecx, word ptr [esi + 0xc] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx); /* 0x120E8713: imul eax, edx */
    /* cmp eax, ecx */ /* 0x120E8716: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E871C; /* 0x120E8718: jbe 0x120e871c */
L_120E871A:
    eax = ecx; /* 0x120E871A: mov eax, ecx */
L_120E871C:
    ecx = MEM32(esi + 0x1C); /* 0x120E871C: mov ecx, dword ptr [esi + 0x1c] */
    /* test ecx, ecx */ /* 0x120E871F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E872A; /* 0x120E8721: jne 0x120e872a */
L_120E8723:
    eax = 0x80004005u; /* 0x120E8723: mov eax, 0x80004005 */
    goto L_120E8740; /* 0x120E8728: jmp 0x120e8740 */
L_120E872A:
    PUSH32(esp, eax); /* 0x120E872A: push eax */
    eax = (uint32_t)MEM16(esi + 0xA); /* 0x120E872B: movzx eax, word ptr [esi + 0xa] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x18); /* 0x120E872F: add eax, dword ptr [ebp + 0x18] */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x120E8732: push ebx */
    PUSH32(esp, edi); /* 0x120E8733: push edi */
    PUSH32(esp, eax); /* 0x120E8734: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120E8735: push dword ptr [ebp + 0xc] */
    RECOMP_ICALL(ecx); /* 0x120E8738: call ecx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120E873A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E8740; /* 0x120E873C: js 0x120e8740 */
L_120E873E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E873E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E8740:
    edi = POP32_VAL(esp); /* 0x120E8740: pop edi */
    esi = POP32_VAL(esp); /* 0x120E8741: pop esi */
    ebx = POP32_VAL(esp); /* 0x120E8742: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E8743: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x120E8744: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_120E874C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E874Cu);

L_120E874C:
    edi = edi; /* 0x120E874C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E874E: push ebp */
    ebp = esp; /* 0x120E874F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x120E8751: sub esp, 0x1c */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x8); /* 0x120E8754: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x120E8757: push ebx */
    ebx = MEM32(ecx + 0x20); /* 0x120E8758: mov ebx, dword ptr [ecx + 0x20] */
    PUSH32(esp, esi); /* 0x120E875B: push esi */
    esi = MEM32(ecx + 0x18); /* 0x120E875C: mov esi, dword ptr [ecx + 0x18] */
    eax = (uint32_t)MEM16(esi); /* 0x120E875F: movzx eax, word ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x120E8762: sub eax, 0 */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x120E8765: push edi */
    edi = MEM32(ebp + 0x10); /* 0x120E8766: mov edi, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x4)) = ebx; /* 0x120E8769: mov dword ptr [ebp - 4], ebx */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_120E895F; /* 0x120E876C: je 0x120e895f */
L_120E8772:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E8772: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120E8936; /* 0x120E8773: je 0x120e8936 */
L_120E8779:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E8779: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120E8909; /* 0x120E877A: je 0x120e8909 */
L_120E8780:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E8780: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120E880F; /* 0x120E8781: je 0x120e880f */
L_120E8787:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E8787: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E8788: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120E8795; /* 0x120E8789: je 0x120e8795 */
L_120E878B:
    eax = 0x80004001u; /* 0x120E878B: mov eax, 0x80004001 */
    goto L_120E8ACD; /* 0x120E8790: jmp 0x120e8acd */
L_120E8795:
    eax = MEM32(ebp + 0x14); /* 0x120E8795: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120E8798: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ecx + 0x34); /* 0x120E879A: div dword ptr [ecx + 0x34] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ebx = eax; /* 0x120E879D: mov ebx, eax */
    eax = (uint32_t)MEM16(esi + 0x8); /* 0x120E879F: movzx eax, word ptr [esi + 8] */
    /* cmp ebx, eax */ /* 0x120E87A3: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E87A9; /* 0x120E87A5: jbe 0x120e87a9 */
L_120E87A7:
    ebx = eax; /* 0x120E87A7: mov ebx, eax */
L_120E87A9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E87A9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = eax; /* 0x120E87AB: mov dword ptr [ebp + 0x10], eax */
    /* test ebx, ebx */ /* 0x120E87AE: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E8ACB; /* 0x120E87B0: je 0x120e8acb */
L_120E87B6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120E87B6: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120E87B8: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x14) = ecx; /* 0x120E87BA: mov dword ptr [ebp + 0x14], ecx */
    /* cmp LO16(edx), MEM16(esi + 0xA) */ /* 0x120E87BD: cmp dx, word ptr [esi + 0xa] */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(MEM16(esi + 0xA)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_120E8802; /* 0x120E87C1: jae 0x120e8802 */
L_120E87C3:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120E87C3: push dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + 0x8); /* 0x120E87C6: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x38); /* 0x120E87C9: mov eax, dword ptr [eax + 0x38] */
    eax = MEM32(eax + ecx * 4); /* 0x120E87CC: mov eax, dword ptr [eax + ecx*4] */
    PUSH32(esp, MEM32(eax + 0x30)); /* 0x120E87CF: push dword ptr [eax + 0x30] */
    MEM32(ebp + (-0x14)) = eax; /* 0x120E87D2: mov dword ptr [ebp - 0x14], eax */
    PUSH32(esp, edi); /* 0x120E87D5: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120E87D6: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x120E87D9: push eax */
    RECOMP_CALL(sub_120E874C); /* 0x120E87DA: call 0x120e874c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120E87DF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E8ACD; /* 0x120E87E1: js 0x120e8acd */
L_120E87E7:
    eax = MEM32(ebp + (-0x14)); /* 0x120E87E7: mov eax, dword ptr [ebp - 0x14] */
    eax = MEM32(eax + 0x30); /* 0x120E87EA: mov eax, dword ptr [eax + 0x30] */
    ecx = MEM32(ebp + 0x14); /* 0x120E87ED: mov ecx, dword ptr [ebp + 0x14] */
    edi = edi + eax * 4; /* 0x120E87F0: lea edi, [edi + eax*4] */
    eax = (uint32_t)MEM16(esi + 0xA); /* 0x120E87F3: movzx eax, word ptr [esi + 0xa] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120E87F7: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + 0x14) = ecx; /* 0x120E87F8: mov dword ptr [ebp + 0x14], ecx */
    /* cmp ecx, eax */ /* 0x120E87FB: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E87C3; /* 0x120E87FD: jb 0x120e87c3 */
L_120E87FF:
    eax = MEM32(ebp + 0x10); /* 0x120E87FF: mov eax, dword ptr [ebp + 0x10] */
L_120E8802:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120E8802: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + 0x10) = eax; /* 0x120E8803: mov dword ptr [ebp + 0x10], eax */
    /* cmp eax, ebx */ /* 0x120E8806: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E87B6; /* 0x120E8808: jb 0x120e87b6 */
L_120E880A:
    goto L_120E8ACB; /* 0x120E880A: jmp 0x120e8acb */
L_120E880F:
    ebx = (uint32_t)MEM16(esi + 0x4); /* 0x120E880F: movzx ebx, word ptr [esi + 4] */
    eax = (uint32_t)MEM16(esi + 0x6); /* 0x120E8813: movzx eax, word ptr [esi + 6] */
    ecx = ebx; /* 0x120E8817: mov ecx, ebx */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x120E8819: imul ecx, eax */
    eax = MEM32(ebp + 0x14); /* 0x120E881C: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120E881F: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x120E8821: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    edx = eax; /* 0x120E8823: mov edx, eax */
    eax = (uint32_t)MEM16(esi + 0x8); /* 0x120E8825: movzx eax, word ptr [esi + 8] */
    MEM32(ebp + 0x14) = edx; /* 0x120E8829: mov dword ptr [ebp + 0x14], edx */
    /* cmp edx, eax */ /* 0x120E882C: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E8835; /* 0x120E882E: jbe 0x120e8835 */
L_120E8830:
    edx = eax; /* 0x120E8830: mov edx, eax */
    MEM32(ebp + 0x14) = eax; /* 0x120E8832: mov dword ptr [ebp + 0x14], eax */
L_120E8835:
    eax = MEM32(ebp + (-0x4)); /* 0x120E8835: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0; /* 0x120E8838: and dword ptr [ebp + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x120E883C: mov dword ptr [ebp - 0x10], eax */
    /* test edx, edx */ /* 0x120E883F: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E8894; /* 0x120E8841: je 0x120e8894 */
L_120E8843:
    eax = (uint32_t)MEM16(esi + 0x6); /* 0x120E8843: movzx eax, word ptr [esi + 6] */
L_120E8847:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120E8847: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x120E8849: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E8889; /* 0x120E884B: je 0x120e8889 */
L_120E884D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120E884D: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x120E884F: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E8879; /* 0x120E8851: je 0x120e8879 */
L_120E8853:
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(ebp + 0x10)); /* 0x120E8853: imul ebx, dword ptr [ebp + 0x10] */
    eax = (uint32_t)MEM16(esi + 0x6); /* 0x120E8857: movzx eax, word ptr [esi + 6] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edx; /* 0x120E885B: add ebx, edx */
    _flag_k = FK_ADD;
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax); /* 0x120E885D: imul ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x120E8860: add ebx, ecx */
    _flag_k = FK_ADD;
    eax = MEM32(edi + ebx * 4); /* 0x120E8862: mov eax, dword ptr [edi + ebx*4] */
    ebx = MEM32(ebp + (-0x10)); /* 0x120E8865: mov ebx, dword ptr [ebp - 0x10] */
    MEM32(ebx) = eax; /* 0x120E8868: mov dword ptr [ebx], eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x120E886A: add ebx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x10)) = ebx; /* 0x120E886D: mov dword ptr [ebp - 0x10], ebx */
    ebx = (uint32_t)MEM16(esi + 0x4); /* 0x120E8870: movzx ebx, word ptr [esi + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120E8874: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, ebx */ /* 0x120E8875: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E8853; /* 0x120E8877: jb 0x120e8853 */
L_120E8879:
    edx = (uint32_t)MEM16(esi + 0x6); /* 0x120E8879: movzx edx, word ptr [esi + 6] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120E887D: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, edx */ /* 0x120E887E: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E884D; /* 0x120E8880: jb 0x120e884d */
L_120E8882:
    edx = MEM32(ebp + 0x14); /* 0x120E8882: mov edx, dword ptr [ebp + 0x14] */
    eax = (uint32_t)MEM16(esi + 0x6); /* 0x120E8885: movzx eax, word ptr [esi + 6] */
L_120E8889:
    ecx = MEM32(ebp + 0x10); /* 0x120E8889: mov ecx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120E888C: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + 0x10) = ecx; /* 0x120E888D: mov dword ptr [ebp + 0x10], ecx */
    /* cmp ecx, edx */ /* 0x120E8890: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E8847; /* 0x120E8892: jb 0x120e8847 */
L_120E8894:
    ebx = MEM32(ebp + (-0x4)); /* 0x120E8894: mov ebx, dword ptr [ebp - 4] */
    edi = ebx; /* 0x120E8897: mov edi, ebx */
L_120E8899:
    ecx = MEM32(ebp + 0x8); /* 0x120E8899: mov ecx, dword ptr [ebp + 8] */
L_120E889C:
    eax = (uint32_t)MEM16(esi + 0x2); /* 0x120E889C: movzx eax, word ptr [esi + 2] */
    MEM32(ebp + 0x10) = 3; /* 0x120E88A0: mov dword ptr [ebp + 0x10], 3 */
    MEM32(ebp + (-0x8)) = 1; /* 0x120E88A7: mov dword ptr [ebp - 8], 1 */
    /* cmp MEM16(ebp + 0x10), LO16(eax) */ /* 0x120E88AE: cmp word ptr [ebp + 0x10], ax */
    _flag_a = (uint32_t)(MEM16(ebp + 0x10)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E8994; /* 0x120E88B2: je 0x120e8994 */
L_120E88B8:
    ecx = MEM32(ecx + 0x34); /* 0x120E88B8: mov ecx, dword ptr [ecx + 0x34] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx); /* 0x120E88BB: imul ecx, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E88BE: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120E8964; /* 0x120E88BF: je 0x120e8964 */
L_120E88C5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E88C5: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E8992; /* 0x120E88C6: jne 0x120e8992 */
L_120E88CC:
    MEM16(ebp + (-0x10)) = _fpu_cw; /* 0x120E88CC: fnstcw word ptr [ebp - 0x10] */
    eax = MEM32(ebp + (-0x10)); /* 0x120E88CF: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)((eax | 0xC00u)); _flag_b = (uint32_t)((eax | 0xC00u));
    eax = eax | 0xC00u; /* 0x120E88D2: or eax, 0xc00 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x120E88D7: mov dword ptr [ebp - 0x14], eax */
    _fpu_cw = MEM16(ebp + (-0x14)); /* 0x120E88DA: fldcw word ptr [ebp - 0x14] */
    eax = MEM32(ebp + (-0x10)); /* 0x120E88DD: mov eax, dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x120E88E0: mov dword ptr [ebp - 0x1c], eax */
    /* test ecx, ecx */ /* 0x120E88E3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E8901; /* 0x120E88E5: je 0x120e8901 */
L_120E88E7:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(ebp + (-0x4)); /* 0x120E88E7: sub edi, dword ptr [ebp - 4] */
    _flag_k = FK_CMP;
L_120E88EA:
    fp_push(*(float*)&MEM32(edi + ebx)); /* 0x120E88EA: fld dword ptr [edi + ebx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x120E88ED: fstp dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x120E88F0: fld dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0xC)) = (uint32_t)(int32_t)fp_to_int(fp_pop()); /* 0x120E88F3: fistp dword ptr [ebp - 0xc] */
    eax = MEM32(ebp + (-0xC)); /* 0x120E88F6: mov eax, dword ptr [ebp - 0xc] */
    MEM32(ebx) = eax; /* 0x120E88F9: mov dword ptr [ebx], eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x120E88FB: add ebx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x120E88FE: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E88EA; /* 0x120E88FF: jne 0x120e88ea */
L_120E8901:
    _fpu_cw = MEM16(ebp + (-0x1C)); /* 0x120E8901: fldcw word ptr [ebp - 0x1c] */
    goto L_120E898F; /* 0x120E8904: jmp 0x120e898f */
L_120E8909:
    eax = (uint32_t)MEM16(esi + 0x4); /* 0x120E8909: movzx eax, word ptr [esi + 4] */
    ecx = (uint32_t)MEM16(esi + 0x6); /* 0x120E890D: movzx ecx, word ptr [esi + 6] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x120E8911: imul ecx, eax */
    eax = MEM32(ebp + 0x14); /* 0x120E8914: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120E8917: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x120E8919: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    edx = eax; /* 0x120E891B: mov edx, eax */
    eax = (uint32_t)MEM16(esi + 0x8); /* 0x120E891D: movzx eax, word ptr [esi + 8] */
    MEM32(ebp + 0x14) = edx; /* 0x120E8921: mov dword ptr [ebp + 0x14], edx */
    /* cmp edx, eax */ /* 0x120E8924: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E8899; /* 0x120E8926: jbe 0x120e8899 */
L_120E892C:
    edx = eax; /* 0x120E892C: mov edx, eax */
    MEM32(ebp + 0x14) = edx; /* 0x120E892E: mov dword ptr [ebp + 0x14], edx */
    RECOMP_BACKEDGE();
    goto L_120E8899; /* 0x120E8931: jmp 0x120e8899 */
L_120E8936:
    ecx = (uint32_t)MEM16(esi + 0x6); /* 0x120E8936: movzx ecx, word ptr [esi + 6] */
    eax = MEM32(ebp + 0x14); /* 0x120E893A: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120E893D: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x120E893F: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ecx = MEM32(ebp + 0x8); /* 0x120E8941: mov ecx, dword ptr [ebp + 8] */
    edx = eax; /* 0x120E8944: mov edx, eax */
L_120E8946:
    eax = (uint32_t)MEM16(esi + 0x8); /* 0x120E8946: movzx eax, word ptr [esi + 8] */
    MEM32(ebp + 0x14) = edx; /* 0x120E894A: mov dword ptr [ebp + 0x14], edx */
    /* cmp edx, eax */ /* 0x120E894D: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E889C; /* 0x120E894F: jbe 0x120e889c */
L_120E8955:
    edx = eax; /* 0x120E8955: mov edx, eax */
    MEM32(ebp + 0x14) = edx; /* 0x120E8957: mov dword ptr [ebp + 0x14], edx */
    RECOMP_BACKEDGE();
    goto L_120E889C; /* 0x120E895A: jmp 0x120e889c */
L_120E895F:
    edx = MEM32(ebp + 0x14); /* 0x120E895F: mov edx, dword ptr [ebp + 0x14] */
    RECOMP_BACKEDGE();
    goto L_120E8946; /* 0x120E8962: jmp 0x120e8946 */
L_120E8964:
    /* test ecx, ecx */ /* 0x120E8964: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E8992; /* 0x120E8966: je 0x120e8992 */
L_120E8968:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(ebp + (-0x4)); /* 0x120E8968: sub edi, dword ptr [ebp - 4] */
    _flag_k = FK_CMP;
    fp_push(0.0); /* 0x120E896B: fldz  */
    edx = MEM32(ebp + (-0x8)); /* 0x120E896D: mov edx, dword ptr [ebp - 8] */
L_120E8970:
    fp_push(*(float*)&MEM32(ebx + edi)); /* 0x120E8970: fld dword ptr [ebx + edi] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120E8973: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E8975: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x120E8977: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_120E8980; /* 0x120E897A: jnp 0x120e8980 */
L_120E897C:
    eax = edx; /* 0x120E897C: mov eax, edx */
    goto L_120E8982; /* 0x120E897E: jmp 0x120e8982 */
L_120E8980:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E8980: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E8982:
    MEM32(ebx) = eax; /* 0x120E8982: mov dword ptr [ebx], eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x120E8984: add ebx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x120E8987: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E8970; /* 0x120E8988: jne 0x120e8970 */
L_120E898A:
    edx = MEM32(ebp + 0x14); /* 0x120E898A: mov edx, dword ptr [ebp + 0x14] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E898D: fstp st(0) */
L_120E898F:
    ebx = MEM32(ebp + (-0x4)); /* 0x120E898F: mov ebx, dword ptr [ebp - 4] */
L_120E8992:
    edi = ebx; /* 0x120E8992: mov edi, ebx */
L_120E8994:
    eax = MEM32(ebp + 0x8); /* 0x120E8994: mov eax, dword ptr [ebp + 8] */
    eax = (uint32_t)MEM16(eax + 0x8); /* 0x120E8997: movzx eax, word ptr [eax + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120E899B: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(ecx), LO16(eax) */ /* 0x120E899D: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E8A96; /* 0x120E89A0: je 0x120e8a96 */
L_120E89A6:
    ecx = MEM32(ebp + 0x10); /* 0x120E89A6: mov ecx, dword ptr [ebp + 0x10] */
    /* cmp MEM16(esi), LO16(ecx) */ /* 0x120E89A9: cmp word ptr [esi], cx */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E89B8; /* 0x120E89AC: je 0x120e89b8 */
L_120E89AE:
    ebx = (uint32_t)MEM16(esi + 0x6); /* 0x120E89AE: movzx ebx, word ptr [esi + 6] */
    esi = (uint32_t)MEM16(esi + 0x4); /* 0x120E89B2: movzx esi, word ptr [esi + 4] */
    goto L_120E89C0; /* 0x120E89B6: jmp 0x120e89c0 */
L_120E89B8:
    ebx = (uint32_t)MEM16(esi + 0x4); /* 0x120E89B8: movzx ebx, word ptr [esi + 4] */
    esi = (uint32_t)MEM16(esi + 0x6); /* 0x120E89BC: movzx esi, word ptr [esi + 6] */
L_120E89C0:
    /* test LO8(ebx), 3 */ /* 0x120E89C0: test bl, 3 */
    _flag_a = (uint32_t)(LO8(ebx)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E8A93; /* 0x120E89C3: je 0x120e8a93 */
L_120E89C9:
    /* cmp MEM16(ebp + (-0x8)), LO16(eax) */ /* 0x120E89C9: cmp word ptr [ebp - 8], ax */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x8))) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E89D9; /* 0x120E89CD: jne 0x120e89d9 */
L_120E89CF:
    ecx = 0x12008A44u; /* 0x120E89CF: mov ecx, 0x12008a44 */
    MEM32(ebp + (-0x14)) = ecx; /* 0x120E89D4: mov dword ptr [ebp - 0x14], ecx */
    goto L_120E89E1; /* 0x120E89D7: jmp 0x120e89e1 */
L_120E89D9:
    eax = 0x12008A34u; /* 0x120E89D9: mov eax, 0x12008a34 */
    MEM32(ebp + (-0x14)) = eax; /* 0x120E89DE: mov dword ptr [ebp - 0x14], eax */
L_120E89E1:
    esi = (uint32_t)((int32_t)esi * (int32_t)edx); /* 0x120E89E1: imul esi, edx */
    eax = ebx + 0x3; /* 0x120E89E4: lea eax, [ebx + 3] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    eax = eax & 0xFFFFFFFCu; /* 0x120E89E7: and eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x120E89EA: mov dword ptr [ebp - 0x10], eax */
    /* test esi, esi */ /* 0x120E89ED: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E8A8C; /* 0x120E89EF: je 0x120e8a8c */
L_120E89F5:
    edx = MEM32(ebp + (-0x10)); /* 0x120E89F5: mov edx, dword ptr [ebp - 0x10] */
    ecx = esi * 4 + 0x4; /* 0x120E89F8: lea ecx, [esi*4 + 4] */
    eax = ebx; /* 0x120E89FF: mov eax, ebx */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x120E8A01: imul eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x120E8A04: add eax, edi */
    _flag_k = FK_ADD;
    edi = MEM32(ebp + (-0x4)); /* 0x120E8A06: mov edi, dword ptr [ebp - 4] */
    MEM32(ebp + (-0x8)) = eax; /* 0x120E8A09: mov dword ptr [ebp - 8], eax */
    eax = esi; /* 0x120E8A0C: mov eax, esi */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx); /* 0x120E8A0E: imul eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x120E8A11: add eax, ebx */
    _flag_k = FK_ADD;
    eax = edi + eax * 4; /* 0x120E8A13: lea eax, [edi + eax*4] */
    MEM32(ebp + (-0xC)) = eax; /* 0x120E8A16: mov dword ptr [ebp - 0xc], eax */
    eax = edx; /* 0x120E8A19: mov eax, edx */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x120E8A1B: imul eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x120E8A1E: add eax, edi */
    _flag_k = FK_ADD;
L_120E8A20:
    edi = MEM32(ebp + (-0x8)); /* 0x120E8A20: mov edi, dword ptr [ebp - 8] */
    ecx = edx; /* 0x120E8A23: mov ecx, edx */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x120E8A25: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x120E8A25: shl ecx, 2 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) - ecx; /* 0x120E8A28: sub dword ptr [ebp - 0xc], ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x120E8A2B: sub eax, ecx */
    _flag_k = FK_CMP;
    ecx = ebx; /* 0x120E8A2D: mov ecx, ebx */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x120E8A2F: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x120E8A2F: shl ecx, 2 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ecx; /* 0x120E8A32: sub edi, ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x120E8A34: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x1C)) = esi; /* 0x120E8A35: mov dword ptr [ebp - 0x1c], esi */
    MEM32(ebp + (-0x18)) = eax; /* 0x120E8A38: mov dword ptr [ebp - 0x18], eax */
    MEM32(ebp + (-0x8)) = edi; /* 0x120E8A3B: mov dword ptr [ebp - 8], edi */
    ecx = edx; /* 0x120E8A3E: mov ecx, edx */
    /* cmp edx, ebx */ /* 0x120E8A40: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E8A66; /* 0x120E8A42: jbe 0x120e8a66 */
L_120E8A44:
    esi = MEM32(ebp + (-0x14)); /* 0x120E8A44: mov esi, dword ptr [ebp - 0x14] */
    edx = MEM32(ebp + 0x10); /* 0x120E8A47: mov edx, dword ptr [ebp + 0x10] */
    edi = eax; /* 0x120E8A4A: mov edi, eax */
L_120E8A4C:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x120E8A4C: dec ecx */
    _flag_k = FK_DEC;
    eax = ecx; /* 0x120E8A4D: mov eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x120E8A4F: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi + eax * 4); /* 0x120E8A51: mov eax, dword ptr [esi + eax*4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 4; /* 0x120E8A54: sub edi, 4 */
    _flag_k = FK_CMP;
    MEM32(edi) = eax; /* 0x120E8A57: mov dword ptr [edi], eax */
    /* cmp ecx, ebx */ /* 0x120E8A59: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_120E8A4C; /* 0x120E8A5B: ja 0x120e8a4c */
L_120E8A5D:
    esi = MEM32(ebp + (-0x1C)); /* 0x120E8A5D: mov esi, dword ptr [ebp - 0x1c] */
    edx = MEM32(ebp + (-0x10)); /* 0x120E8A60: mov edx, dword ptr [ebp - 0x10] */
    edi = MEM32(ebp + (-0x8)); /* 0x120E8A63: mov edi, dword ptr [ebp - 8] */
L_120E8A66:
    MEM32(ebp + (-0x1C)) = ebx; /* 0x120E8A66: mov dword ptr [ebp - 0x1c], ebx */
    /* test ebx, ebx */ /* 0x120E8A69: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E8A82; /* 0x120E8A6B: je 0x120e8a82 */
L_120E8A6D:
    ecx = MEM32(ebp + (-0xC)); /* 0x120E8A6D: mov ecx, dword ptr [ebp - 0xc] */
    edx = ebx; /* 0x120E8A70: mov edx, ebx */
L_120E8A72:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 4; /* 0x120E8A72: sub edi, 4 */
    _flag_k = FK_CMP;
    eax = MEM32(edi); /* 0x120E8A75: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 4; /* 0x120E8A77: sub ecx, 4 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x120E8A7A: dec edx */
    _flag_k = FK_DEC;
    MEM32(ecx) = eax; /* 0x120E8A7B: mov dword ptr [ecx], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E8A72; /* 0x120E8A7D: jne 0x120e8a72 */
L_120E8A7F:
    edx = MEM32(ebp + (-0x10)); /* 0x120E8A7F: mov edx, dword ptr [ebp - 0x10] */
L_120E8A82:
    eax = MEM32(ebp + (-0x18)); /* 0x120E8A82: mov eax, dword ptr [ebp - 0x18] */
    /* test esi, esi */ /* 0x120E8A85: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E8A20; /* 0x120E8A87: jne 0x120e8a20 */
L_120E8A89:
    edx = MEM32(ebp + 0x14); /* 0x120E8A89: mov edx, dword ptr [ebp + 0x14] */
L_120E8A8C:
    ebx = MEM32(ebp + (-0x4)); /* 0x120E8A8C: mov ebx, dword ptr [ebp - 4] */
    edi = ebx; /* 0x120E8A8F: mov edi, ebx */
    goto L_120E8A96; /* 0x120E8A91: jmp 0x120e8a96 */
L_120E8A93:
    ebx = MEM32(ebp + (-0x4)); /* 0x120E8A93: mov ebx, dword ptr [ebp - 4] */
L_120E8A96:
    esi = MEM32(ebp + 0x8); /* 0x120E8A96: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x2C); /* 0x120E8A99: mov eax, dword ptr [esi + 0x2c] */
    ecx = (uint32_t)MEM16(esi + 0xC); /* 0x120E8A9C: movzx ecx, word ptr [esi + 0xc] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx); /* 0x120E8AA0: imul eax, edx */
    /* cmp eax, ecx */ /* 0x120E8AA3: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E8AA9; /* 0x120E8AA5: jbe 0x120e8aa9 */
L_120E8AA7:
    eax = ecx; /* 0x120E8AA7: mov eax, ecx */
L_120E8AA9:
    ecx = MEM32(esi + 0x1C); /* 0x120E8AA9: mov ecx, dword ptr [esi + 0x1c] */
    /* test ecx, ecx */ /* 0x120E8AAC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E8AB7; /* 0x120E8AAE: jne 0x120e8ab7 */
L_120E8AB0:
    eax = 0x80004005u; /* 0x120E8AB0: mov eax, 0x80004005 */
    goto L_120E8ACD; /* 0x120E8AB5: jmp 0x120e8acd */
L_120E8AB7:
    PUSH32(esp, eax); /* 0x120E8AB7: push eax */
    eax = (uint32_t)MEM16(esi + 0xA); /* 0x120E8AB8: movzx eax, word ptr [esi + 0xa] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x18); /* 0x120E8ABC: add eax, dword ptr [ebp + 0x18] */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x120E8ABF: push ebx */
    PUSH32(esp, edi); /* 0x120E8AC0: push edi */
    PUSH32(esp, eax); /* 0x120E8AC1: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120E8AC2: push dword ptr [ebp + 0xc] */
    RECOMP_ICALL(ecx); /* 0x120E8AC5: call ecx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120E8AC7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E8ACD; /* 0x120E8AC9: js 0x120e8acd */
L_120E8ACB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E8ACB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E8ACD:
    edi = POP32_VAL(esp); /* 0x120E8ACD: pop edi */
    esi = POP32_VAL(esp); /* 0x120E8ACE: pop esi */
    ebx = POP32_VAL(esp); /* 0x120E8ACF: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E8AD0: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x120E8AD1: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_120E8AD9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E8AD9u);

L_120E8AD9:
    edi = edi; /* 0x120E8AD9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E8ADB: push ebp */
    ebp = esp; /* 0x120E8ADC: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x120E8ADE: sub esp, 0x1c */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x8); /* 0x120E8AE1: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x120E8AE4: push ebx */
    ebx = MEM32(ecx + 0x20); /* 0x120E8AE5: mov ebx, dword ptr [ecx + 0x20] */
    PUSH32(esp, esi); /* 0x120E8AE8: push esi */
    esi = MEM32(ecx + 0x18); /* 0x120E8AE9: mov esi, dword ptr [ecx + 0x18] */
    eax = (uint32_t)MEM16(esi); /* 0x120E8AEC: movzx eax, word ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x120E8AEF: sub eax, 0 */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x120E8AF2: push edi */
    edi = MEM32(ebp + 0x10); /* 0x120E8AF3: mov edi, dword ptr [ebp + 0x10] */
    PUSH32(esp, 4); /* 0x120E8AF6: push 4 */
    MEM32(ebp + (-0x10)) = esi; /* 0x120E8AF8: mov dword ptr [ebp - 0x10], esi */
    MEM32(ebp + (-0x4)) = ebx; /* 0x120E8AFB: mov dword ptr [ebp - 4], ebx */
    edx = POP32_VAL(esp); /* 0x120E8AFE: pop edx */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_120E8D38; /* 0x120E8AFF: je 0x120e8d38 */
L_120E8B05:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E8B05: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120E8CD7; /* 0x120E8B06: je 0x120e8cd7 */
L_120E8B0C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E8B0C: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120E8C2F; /* 0x120E8B0D: je 0x120e8c2f */
L_120E8B13:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E8B13: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120E8BA5; /* 0x120E8B14: je 0x120e8ba5 */
L_120E8B1A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E8B1A: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E8B1B: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120E8B28; /* 0x120E8B1C: je 0x120e8b28 */
L_120E8B1E:
    eax = 0x80004001u; /* 0x120E8B1E: mov eax, 0x80004001 */
    goto L_120E8F1A; /* 0x120E8B23: jmp 0x120e8f1a */
L_120E8B28:
    eax = MEM32(ebp + 0x14); /* 0x120E8B28: mov eax, dword ptr [ebp + 0x14] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x120E8B2B: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x120E8B2B: shl eax, 2 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120E8B2E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ecx + 0x34); /* 0x120E8B30: div dword ptr [ecx + 0x34] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ebx = eax; /* 0x120E8B33: mov ebx, eax */
    eax = (uint32_t)MEM16(esi + 0x8); /* 0x120E8B35: movzx eax, word ptr [esi + 8] */
    /* cmp ebx, eax */ /* 0x120E8B39: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E8B3F; /* 0x120E8B3B: jbe 0x120e8b3f */
L_120E8B3D:
    ebx = eax; /* 0x120E8B3D: mov ebx, eax */
L_120E8B3F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E8B3F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = eax; /* 0x120E8B41: mov dword ptr [ebp + 0x10], eax */
    /* test ebx, ebx */ /* 0x120E8B44: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E8F18; /* 0x120E8B46: je 0x120e8f18 */
L_120E8B4C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120E8B4C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120E8B4E: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x14) = ecx; /* 0x120E8B50: mov dword ptr [ebp + 0x14], ecx */
    /* cmp LO16(edx), MEM16(esi + 0xA) */ /* 0x120E8B53: cmp dx, word ptr [esi + 0xa] */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(MEM16(esi + 0xA)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_120E8B98; /* 0x120E8B57: jae 0x120e8b98 */
L_120E8B59:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120E8B59: push dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + 0x8); /* 0x120E8B5C: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x38); /* 0x120E8B5F: mov eax, dword ptr [eax + 0x38] */
    eax = MEM32(eax + ecx * 4); /* 0x120E8B62: mov eax, dword ptr [eax + ecx*4] */
    PUSH32(esp, MEM32(eax + 0x30)); /* 0x120E8B65: push dword ptr [eax + 0x30] */
    MEM32(ebp + (-0x14)) = eax; /* 0x120E8B68: mov dword ptr [ebp - 0x14], eax */
    PUSH32(esp, edi); /* 0x120E8B6B: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120E8B6C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x120E8B6F: push eax */
    RECOMP_CALL(sub_120E874C); /* 0x120E8B70: call 0x120e874c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120E8B75: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E8F1A; /* 0x120E8B77: js 0x120e8f1a */
L_120E8B7D:
    eax = MEM32(ebp + (-0x14)); /* 0x120E8B7D: mov eax, dword ptr [ebp - 0x14] */
    eax = MEM32(eax + 0x30); /* 0x120E8B80: mov eax, dword ptr [eax + 0x30] */
    ecx = MEM32(ebp + 0x14); /* 0x120E8B83: mov ecx, dword ptr [ebp + 0x14] */
    edi = edi + eax * 4; /* 0x120E8B86: lea edi, [edi + eax*4] */
    eax = (uint32_t)MEM16(esi + 0xA); /* 0x120E8B89: movzx eax, word ptr [esi + 0xa] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120E8B8D: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + 0x14) = ecx; /* 0x120E8B8E: mov dword ptr [ebp + 0x14], ecx */
    /* cmp ecx, eax */ /* 0x120E8B91: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E8B59; /* 0x120E8B93: jb 0x120e8b59 */
L_120E8B95:
    eax = MEM32(ebp + 0x10); /* 0x120E8B95: mov eax, dword ptr [ebp + 0x10] */
L_120E8B98:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120E8B98: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + 0x10) = eax; /* 0x120E8B99: mov dword ptr [ebp + 0x10], eax */
    /* cmp eax, ebx */ /* 0x120E8B9C: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E8B4C; /* 0x120E8B9E: jb 0x120e8b4c */
L_120E8BA0:
    goto L_120E8F18; /* 0x120E8BA0: jmp 0x120e8f18 */
L_120E8BA5:
    ebx = (uint32_t)MEM16(esi + 0x6); /* 0x120E8BA5: movzx ebx, word ptr [esi + 6] */
    eax = MEM32(ebp + 0x14); /* 0x120E8BA9: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120E8BAC: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ebx; /* 0x120E8BAE: div ebx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ecx = eax; /* 0x120E8BB0: mov ecx, eax */
    eax = (uint32_t)MEM16(esi + 0x8); /* 0x120E8BB2: movzx eax, word ptr [esi + 8] */
    MEM32(ebp + 0x14) = ecx; /* 0x120E8BB6: mov dword ptr [ebp + 0x14], ecx */
    /* cmp ecx, eax */ /* 0x120E8BB9: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E8BC2; /* 0x120E8BBB: jbe 0x120e8bc2 */
L_120E8BBD:
    ecx = eax; /* 0x120E8BBD: mov ecx, eax */
    MEM32(ebp + 0x14) = eax; /* 0x120E8BBF: mov dword ptr [ebp + 0x14], eax */
L_120E8BC2:
    eax = MEM32(ebp + (-0x4)); /* 0x120E8BC2: mov eax, dword ptr [ebp - 4] */
    MEM32(ebp + (-0x8)) = eax; /* 0x120E8BC5: mov dword ptr [ebp - 8], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E8BC8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = eax; /* 0x120E8BCA: mov dword ptr [ebp - 0xc], eax */
    /* test ecx, ecx */ /* 0x120E8BCD: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E8D31; /* 0x120E8BCF: je 0x120e8d31 */
L_120E8BD5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120E8BD5: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x120E8BD7: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E8C22; /* 0x120E8BD9: je 0x120e8c22 */
L_120E8BDB:
    eax = (uint32_t)MEM16(esi + 0x4); /* 0x120E8BDB: movzx eax, word ptr [esi + 4] */
    ecx = MEM32(ebp + (-0xC)); /* 0x120E8BDF: mov ecx, dword ptr [ebp - 0xc] */
L_120E8BE2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120E8BE2: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x120E8BE4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E8C13; /* 0x120E8BE6: je 0x120e8c13 */
L_120E8BE8:
    /* cmp edx, 4 */ /* 0x120E8BE8: cmp edx, 4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E8BF1; /* 0x120E8BEB: jbe 0x120e8bf1 */
L_120E8BED:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E8BED: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120E8BFC; /* 0x120E8BEF: jmp 0x120e8bfc */
L_120E8BF1:
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x120E8BF1: imul eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x120E8BF4: add eax, ebx */
    _flag_k = FK_ADD;
    eax = edx + eax * 4; /* 0x120E8BF6: lea eax, [edx + eax*4] */
    eax = MEM32(edi + eax * 4); /* 0x120E8BF9: mov eax, dword ptr [edi + eax*4] */
L_120E8BFC:
    edi = MEM32(ebp + (-0x8)); /* 0x120E8BFC: mov edi, dword ptr [ebp - 8] */
    MEM32(edi) = eax; /* 0x120E8BFF: mov dword ptr [edi], eax */
    edi = MEM32(ebp + 0x10); /* 0x120E8C01: mov edi, dword ptr [ebp + 0x10] */
    PUSH32(esp, 4); /* 0x120E8C04: push 4 */
    eax = POP32_VAL(esp); /* 0x120E8C06: pop eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) + eax; /* 0x120E8C07: add dword ptr [ebp - 8], eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM16(esi + 0x4); /* 0x120E8C0A: movzx eax, word ptr [esi + 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x120E8C0E: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, eax */ /* 0x120E8C0F: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E8BE8; /* 0x120E8C11: jb 0x120e8be8 */
L_120E8C13:
    ebx = (uint32_t)MEM16(esi + 0x6); /* 0x120E8C13: movzx ebx, word ptr [esi + 6] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120E8C17: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, ebx */ /* 0x120E8C18: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E8BE2; /* 0x120E8C1A: jb 0x120e8be2 */
L_120E8C1C:
    ecx = MEM32(ebp + 0x14); /* 0x120E8C1C: mov ecx, dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + (-0xC)); /* 0x120E8C1F: mov eax, dword ptr [ebp - 0xc] */
L_120E8C22:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120E8C22: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0xC)) = eax; /* 0x120E8C23: mov dword ptr [ebp - 0xc], eax */
    /* cmp eax, ecx */ /* 0x120E8C26: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E8BD5; /* 0x120E8C28: jb 0x120e8bd5 */
L_120E8C2A:
    goto L_120E8D31; /* 0x120E8C2A: jmp 0x120e8d31 */
L_120E8C2F:
    ebx = (uint32_t)MEM16(esi + 0x4); /* 0x120E8C2F: movzx ebx, word ptr [esi + 4] */
    eax = MEM32(ebp + 0x14); /* 0x120E8C33: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120E8C36: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ebx; /* 0x120E8C38: div ebx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ecx = eax; /* 0x120E8C3A: mov ecx, eax */
    eax = (uint32_t)MEM16(esi + 0x8); /* 0x120E8C3C: movzx eax, word ptr [esi + 8] */
    MEM32(ebp + 0x14) = ecx; /* 0x120E8C40: mov dword ptr [ebp + 0x14], ecx */
    /* cmp ecx, eax */ /* 0x120E8C43: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E8C4C; /* 0x120E8C45: jbe 0x120e8c4c */
L_120E8C47:
    ecx = eax; /* 0x120E8C47: mov ecx, eax */
    MEM32(ebp + 0x14) = eax; /* 0x120E8C49: mov dword ptr [ebp + 0x14], eax */
L_120E8C4C:
    eax = (uint32_t)MEM16(esi + 0x6); /* 0x120E8C4C: movzx eax, word ptr [esi + 6] */
    PUSH32(esp, 4); /* 0x120E8C50: push 4 */
    edx = POP32_VAL(esp); /* 0x120E8C52: pop edx */
    /* cmp LO16(edx), LO16(eax) */ /* 0x120E8C53: cmp dx, ax */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E8D50; /* 0x120E8C56: je 0x120e8d50 */
L_120E8C5C:
    edx = MEM32(ebp + (-0x4)); /* 0x120E8C5C: mov edx, dword ptr [ebp - 4] */
    MEM32(ebp + (-0x8)) = edx; /* 0x120E8C5F: mov dword ptr [ebp - 8], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120E8C62: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = edx; /* 0x120E8C64: mov dword ptr [ebp - 0xc], edx */
    /* test ecx, ecx */ /* 0x120E8C67: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E8D31; /* 0x120E8C69: je 0x120e8d31 */
L_120E8C6F:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0; /* 0x120E8C6F: and dword ptr [ebp + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x120E8C73: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E8CCD; /* 0x120E8C75: je 0x120e8ccd */
L_120E8C77:
    ecx = MEM32(ebp + (-0xC)); /* 0x120E8C77: mov ecx, dword ptr [ebp - 0xc] */
    eax = (uint32_t)LO16(eax); /* 0x120E8C7A: movzx eax, ax */
L_120E8C7D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120E8C7D: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x120E8C7F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E8CB4; /* 0x120E8C81: je 0x120e8cb4 */
L_120E8C83:
    ebx = MEM32(ebp + (-0x8)); /* 0x120E8C83: mov ebx, dword ptr [ebp - 8] */
L_120E8C86:
    PUSH32(esp, 4); /* 0x120E8C86: push 4 */
    eax = POP32_VAL(esp); /* 0x120E8C88: pop eax */
    /* cmp edx, eax */ /* 0x120E8C89: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E8C91; /* 0x120E8C8B: jbe 0x120e8c91 */
L_120E8C8D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E8C8D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120E8CA1; /* 0x120E8C8F: jmp 0x120e8ca1 */
L_120E8C91:
    eax = (uint32_t)MEM16(esi + 0x4); /* 0x120E8C91: movzx eax, word ptr [esi + 4] */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x120E8C95: imul eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x10); /* 0x120E8C98: add eax, dword ptr [ebp + 0x10] */
    _flag_k = FK_ADD;
    eax = edx + eax * 4; /* 0x120E8C9B: lea eax, [edx + eax*4] */
    eax = MEM32(edi + eax * 4); /* 0x120E8C9E: mov eax, dword ptr [edi + eax*4] */
L_120E8CA1:
    MEM32(ebx) = eax; /* 0x120E8CA1: mov dword ptr [ebx], eax */
    PUSH32(esp, 4); /* 0x120E8CA3: push 4 */
    eax = POP32_VAL(esp); /* 0x120E8CA5: pop eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + eax; /* 0x120E8CA6: add ebx, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM16(esi + 0x6); /* 0x120E8CA8: movzx eax, word ptr [esi + 6] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120E8CAC: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, eax */ /* 0x120E8CAD: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E8C86; /* 0x120E8CAF: jb 0x120e8c86 */
L_120E8CB1:
    MEM32(ebp + (-0x8)) = ebx; /* 0x120E8CB1: mov dword ptr [ebp - 8], ebx */
L_120E8CB4:
    edx = MEM32(ebp + 0x10); /* 0x120E8CB4: mov edx, dword ptr [ebp + 0x10] */
    ebx = (uint32_t)MEM16(esi + 0x4); /* 0x120E8CB7: movzx ebx, word ptr [esi + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120E8CBB: inc edx */
    _flag_k = FK_INC;
    MEM32(ebp + 0x10) = edx; /* 0x120E8CBC: mov dword ptr [ebp + 0x10], edx */
    /* cmp edx, ebx */ /* 0x120E8CBF: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E8C7D; /* 0x120E8CC1: jb 0x120e8c7d */
L_120E8CC3:
    ecx = MEM32(ebp + 0x14); /* 0x120E8CC3: mov ecx, dword ptr [ebp + 0x14] */
    eax = (uint32_t)MEM16(esi + 0x6); /* 0x120E8CC6: movzx eax, word ptr [esi + 6] */
    edx = MEM32(ebp + (-0xC)); /* 0x120E8CCA: mov edx, dword ptr [ebp - 0xc] */
L_120E8CCD:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120E8CCD: inc edx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0xC)) = edx; /* 0x120E8CCE: mov dword ptr [ebp - 0xc], edx */
    /* cmp edx, ecx */ /* 0x120E8CD1: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E8C6F; /* 0x120E8CD3: jb 0x120e8c6f */
L_120E8CD5:
    goto L_120E8D31; /* 0x120E8CD5: jmp 0x120e8d31 */
L_120E8CD7:
    eax = (uint32_t)MEM16(esi + 0x8); /* 0x120E8CD7: movzx eax, word ptr [esi + 8] */
    ecx = MEM32(ebp + 0x14); /* 0x120E8CDB: mov ecx, dword ptr [ebp + 0x14] */
    MEM32(ebp + 0x14) = ecx; /* 0x120E8CDE: mov dword ptr [ebp + 0x14], ecx */
    /* cmp ecx, eax */ /* 0x120E8CE1: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E8CEA; /* 0x120E8CE3: jbe 0x120e8cea */
L_120E8CE5:
    ecx = eax; /* 0x120E8CE5: mov ecx, eax */
    MEM32(ebp + 0x14) = eax; /* 0x120E8CE7: mov dword ptr [ebp + 0x14], eax */
L_120E8CEA:
    eax = (uint32_t)MEM16(esi + 0x6); /* 0x120E8CEA: movzx eax, word ptr [esi + 6] */
    /* cmp LO16(edx), LO16(eax) */ /* 0x120E8CEE: cmp dx, ax */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E8D53; /* 0x120E8CF1: je 0x120e8d53 */
L_120E8CF3:
    MEM32(ebp + 0x10) = ebx; /* 0x120E8CF3: mov dword ptr [ebp + 0x10], ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120E8CF6: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x120E8CF8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E8D31; /* 0x120E8CFA: je 0x120e8d31 */
L_120E8CFC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120E8CFC: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x120E8CFE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E8D2C; /* 0x120E8D00: je 0x120e8d2c */
L_120E8D02:
    ecx = MEM32(ebp + 0x10); /* 0x120E8D02: mov ecx, dword ptr [ebp + 0x10] */
L_120E8D05:
    PUSH32(esp, 4); /* 0x120E8D05: push 4 */
    eax = POP32_VAL(esp); /* 0x120E8D07: pop eax */
    /* cmp edx, eax */ /* 0x120E8D08: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E8D10; /* 0x120E8D0A: jbe 0x120e8d10 */
L_120E8D0C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E8D0C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120E8D16; /* 0x120E8D0E: jmp 0x120e8d16 */
L_120E8D10:
    eax = edx + ebx * 4; /* 0x120E8D10: lea eax, [edx + ebx*4] */
    eax = MEM32(edi + eax * 4); /* 0x120E8D13: mov eax, dword ptr [edi + eax*4] */
L_120E8D16:
    MEM32(ecx) = eax; /* 0x120E8D16: mov dword ptr [ecx], eax */
    PUSH32(esp, 4); /* 0x120E8D18: push 4 */
    eax = POP32_VAL(esp); /* 0x120E8D1A: pop eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x120E8D1B: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM16(esi + 0x6); /* 0x120E8D1D: movzx eax, word ptr [esi + 6] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120E8D21: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, eax */ /* 0x120E8D22: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E8D05; /* 0x120E8D24: jb 0x120e8d05 */
L_120E8D26:
    MEM32(ebp + 0x10) = ecx; /* 0x120E8D26: mov dword ptr [ebp + 0x10], ecx */
    ecx = MEM32(ebp + 0x14); /* 0x120E8D29: mov ecx, dword ptr [ebp + 0x14] */
L_120E8D2C:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x120E8D2C: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, ecx */ /* 0x120E8D2D: cmp ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E8CFC; /* 0x120E8D2F: jb 0x120e8cfc */
L_120E8D31:
    ebx = MEM32(ebp + (-0x4)); /* 0x120E8D31: mov ebx, dword ptr [ebp - 4] */
    edi = ebx; /* 0x120E8D34: mov edi, ebx */
    goto L_120E8D53; /* 0x120E8D36: jmp 0x120e8d53 */
L_120E8D38:
    ecx = MEM32(ebp + 0x14); /* 0x120E8D38: mov ecx, dword ptr [ebp + 0x14] */
    eax = (uint32_t)MEM16(esi + 0x8); /* 0x120E8D3B: movzx eax, word ptr [esi + 8] */
    if (2u) _cf = (((ecx) >> 30) & 1u); /* 0x120E8D3F: shl ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx << 2u; /* 0x120E8D3F: shl ecx, 2 */
    MEM32(ebp + 0x14) = ecx; /* 0x120E8D42: mov dword ptr [ebp + 0x14], ecx */
    /* cmp ecx, eax */ /* 0x120E8D45: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E8D53; /* 0x120E8D47: jbe 0x120e8d53 */
L_120E8D49:
    ecx = eax; /* 0x120E8D49: mov ecx, eax */
    MEM32(ebp + 0x14) = ecx; /* 0x120E8D4B: mov dword ptr [ebp + 0x14], ecx */
    goto L_120E8D53; /* 0x120E8D4E: jmp 0x120e8d53 */
L_120E8D50:
    ebx = MEM32(ebp + (-0x4)); /* 0x120E8D50: mov ebx, dword ptr [ebp - 4] */
L_120E8D53:
    eax = (uint32_t)MEM16(esi + 0x2); /* 0x120E8D53: movzx eax, word ptr [esi + 2] */
    PUSH32(esp, 3); /* 0x120E8D57: push 3 */
    edx = POP32_VAL(esp); /* 0x120E8D59: pop edx */
    /* cmp LO16(edx), LO16(eax) */ /* 0x120E8D5A: cmp dx, ax */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E8DE6; /* 0x120E8D5D: je 0x120e8de6 */
L_120E8D63:
    edx = MEM32(ebp + 0x8); /* 0x120E8D63: mov edx, dword ptr [ebp + 8] */
    edx = MEM32(edx + 0x34); /* 0x120E8D66: mov edx, dword ptr [edx + 0x34] */
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx); /* 0x120E8D69: imul edx, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E8D6C: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120E8DB1; /* 0x120E8D6D: je 0x120e8db1 */
L_120E8D6F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E8D6F: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E8DE4; /* 0x120E8D70: jne 0x120e8de4 */
L_120E8D72:
    MEM16(ebp + 0x10) = _fpu_cw; /* 0x120E8D72: fnstcw word ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x10); /* 0x120E8D75: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)((eax | 0xC00u)); _flag_b = (uint32_t)((eax | 0xC00u));
    eax = eax | 0xC00u; /* 0x120E8D78: or eax, 0xc00 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x120E8D7D: mov dword ptr [ebp - 0x14], eax */
    _fpu_cw = MEM16(ebp + (-0x14)); /* 0x120E8D80: fldcw word ptr [ebp - 0x14] */
    eax = MEM32(ebp + 0x10); /* 0x120E8D83: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x18)) = eax; /* 0x120E8D86: mov dword ptr [ebp - 0x18], eax */
    /* test edx, edx */ /* 0x120E8D89: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E8DAC; /* 0x120E8D8B: je 0x120e8dac */
L_120E8D8D:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(ebp + (-0x4)); /* 0x120E8D8D: sub edi, dword ptr [ebp - 4] */
    _flag_k = FK_CMP;
    PUSH32(esp, 4); /* 0x120E8D90: push 4 */
    esi = POP32_VAL(esp); /* 0x120E8D92: pop esi */
L_120E8D93:
    fp_push(*(float*)&MEM32(edi + ebx)); /* 0x120E8D93: fld dword ptr [edi + ebx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x120E8D96: fstp dword ptr [ebp - 8] */
    fp_push(*(float*)&MEM32(ebp + (-0x8))); /* 0x120E8D99: fld dword ptr [ebp - 8] */
    MEM32(ebp + (-0xC)) = (uint32_t)(int32_t)fp_to_int(fp_pop()); /* 0x120E8D9C: fistp dword ptr [ebp - 0xc] */
    eax = MEM32(ebp + (-0xC)); /* 0x120E8D9F: mov eax, dword ptr [ebp - 0xc] */
    MEM32(ebx) = eax; /* 0x120E8DA2: mov dword ptr [ebx], eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + esi; /* 0x120E8DA4: add ebx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x120E8DA6: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E8D93; /* 0x120E8DA7: jne 0x120e8d93 */
L_120E8DA9:
    esi = MEM32(ebp + (-0x10)); /* 0x120E8DA9: mov esi, dword ptr [ebp - 0x10] */
L_120E8DAC:
    _fpu_cw = MEM16(ebp + (-0x18)); /* 0x120E8DAC: fldcw word ptr [ebp - 0x18] */
    goto L_120E8DE1; /* 0x120E8DAF: jmp 0x120e8de1 */
L_120E8DB1:
    /* test edx, edx */ /* 0x120E8DB1: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E8DE4; /* 0x120E8DB3: je 0x120e8de4 */
L_120E8DB5:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - MEM32(ebp + (-0x4)); /* 0x120E8DB5: sub edi, dword ptr [ebp - 4] */
    _flag_k = FK_CMP;
    fp_push(0.0); /* 0x120E8DB8: fldz  */
    PUSH32(esp, 4); /* 0x120E8DBA: push 4 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120E8DBC: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x120E8DBE: pop esi */
L_120E8DBF:
    fp_push(*(float*)&MEM32(ebx + edi)); /* 0x120E8DBF: fld dword ptr [ebx + edi] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120E8DC2: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E8DC4: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x120E8DC6: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_120E8DD0; /* 0x120E8DC9: jnp 0x120e8dd0 */
L_120E8DCB:
    eax = ecx + 0x1; /* 0x120E8DCB: lea eax, [ecx + 1] */
    goto L_120E8DD2; /* 0x120E8DCE: jmp 0x120e8dd2 */
L_120E8DD0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E8DD0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E8DD2:
    MEM32(ebx) = eax; /* 0x120E8DD2: mov dword ptr [ebx], eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + esi; /* 0x120E8DD4: add ebx, esi */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x120E8DD6: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E8DBF; /* 0x120E8DD7: jne 0x120e8dbf */
L_120E8DD9:
    esi = MEM32(ebp + (-0x10)); /* 0x120E8DD9: mov esi, dword ptr [ebp - 0x10] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E8DDC: fstp st(0) */
    ecx = MEM32(ebp + 0x14); /* 0x120E8DDE: mov ecx, dword ptr [ebp + 0x14] */
L_120E8DE1:
    ebx = MEM32(ebp + (-0x4)); /* 0x120E8DE1: mov ebx, dword ptr [ebp - 4] */
L_120E8DE4:
    edi = ebx; /* 0x120E8DE4: mov edi, ebx */
L_120E8DE6:
    eax = MEM32(ebp + 0x8); /* 0x120E8DE6: mov eax, dword ptr [ebp + 8] */
    eax = (uint32_t)MEM16(eax + 0x8); /* 0x120E8DE9: movzx eax, word ptr [eax + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120E8DED: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(edx), LO16(eax) */ /* 0x120E8DEF: cmp dx, ax */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E8EE3; /* 0x120E8DF2: je 0x120e8ee3 */
L_120E8DF8:
    PUSH32(esp, 3); /* 0x120E8DF8: push 3 */
    edx = POP32_VAL(esp); /* 0x120E8DFA: pop edx */
    /* cmp MEM16(esi), LO16(edx) */ /* 0x120E8DFB: cmp word ptr [esi], dx */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E8E0A; /* 0x120E8DFE: je 0x120e8e0a */
L_120E8E00:
    edx = (uint32_t)MEM16(esi + 0x6); /* 0x120E8E00: movzx edx, word ptr [esi + 6] */
    esi = (uint32_t)MEM16(esi + 0x4); /* 0x120E8E04: movzx esi, word ptr [esi + 4] */
    goto L_120E8E12; /* 0x120E8E08: jmp 0x120e8e12 */
L_120E8E0A:
    edx = (uint32_t)MEM16(esi + 0x4); /* 0x120E8E0A: movzx edx, word ptr [esi + 4] */
    esi = (uint32_t)MEM16(esi + 0x6); /* 0x120E8E0E: movzx esi, word ptr [esi + 6] */
L_120E8E12:
    MEM32(ebp + (-0xC)) = edx; /* 0x120E8E12: mov dword ptr [ebp - 0xc], edx */
    /* test LO8(edx), 3 */ /* 0x120E8E15: test dl, 3 */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E8EE3; /* 0x120E8E18: je 0x120e8ee3 */
L_120E8E1E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120E8E1E: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x120E8E20: inc ebx */
    _flag_k = FK_INC;
    /* cmp LO16(ebx), LO16(eax) */ /* 0x120E8E21: cmp bx, ax */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    eax = 0x12008A44u; /* 0x120E8E24: mov eax, 0x12008a44 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E8E30; /* 0x120E8E29: je 0x120e8e30 */
L_120E8E2B:
    eax = 0x12008A34u; /* 0x120E8E2B: mov eax, 0x12008a34 */
L_120E8E30:
    esi = (uint32_t)((int32_t)esi * (int32_t)ecx); /* 0x120E8E30: imul esi, ecx */
    ebx = edx + 0x3; /* 0x120E8E33: lea ebx, [edx + 3] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFCu);
    ebx = ebx & 0xFFFFFFFCu; /* 0x120E8E36: and ebx, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = eax; /* 0x120E8E39: mov dword ptr [ebp - 0x10], eax */
    MEM32(ebp + (-0x8)) = ebx; /* 0x120E8E3C: mov dword ptr [ebp - 8], ebx */
    /* test esi, esi */ /* 0x120E8E3F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E8EDE; /* 0x120E8E41: je 0x120e8ede */
L_120E8E47:
    ecx = esi * 4 + 0x4; /* 0x120E8E47: lea ecx, [esi*4 + 4] */
    eax = ecx; /* 0x120E8E4E: mov eax, ecx */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx); /* 0x120E8E50: imul ecx, ebx */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx); /* 0x120E8E53: imul eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x120E8E56: add eax, edi */
    _flag_k = FK_ADD;
    edi = MEM32(ebp + (-0x4)); /* 0x120E8E58: mov edi, dword ptr [ebp - 4] */
    MEM32(ebp + 0x10) = eax; /* 0x120E8E5B: mov dword ptr [ebp + 0x10], eax */
    eax = esi; /* 0x120E8E5E: mov eax, esi */
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx); /* 0x120E8E60: imul eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x120E8E63: add eax, edx */
    _flag_k = FK_ADD;
    eax = edi + eax * 4; /* 0x120E8E65: lea eax, [edi + eax*4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edi; /* 0x120E8E68: add ecx, edi */
    _flag_k = FK_ADD;
L_120E8E6A:
    edi = ebx; /* 0x120E8E6A: mov edi, ebx */
    if (2u) _cf = (((edi) >> 30) & 1u); /* 0x120E8E6C: shl edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 2u; /* 0x120E8E6C: shl edi, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x120E8E6F: sub eax, edi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edi; /* 0x120E8E71: sub ecx, edi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x14)) = eax; /* 0x120E8E73: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(ebp + 0x10); /* 0x120E8E76: mov eax, dword ptr [ebp + 0x10] */
    edi = edx; /* 0x120E8E79: mov edi, edx */
    if (2u) _cf = (((edi) >> 30) & 1u); /* 0x120E8E7B: shl edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 2u; /* 0x120E8E7B: shl edi, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x120E8E7E: sub eax, edi */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x120E8E80: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x18)) = esi; /* 0x120E8E81: mov dword ptr [ebp - 0x18], esi */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x120E8E84: mov dword ptr [ebp - 0x1c], ecx */
    MEM32(ebp + 0x10) = eax; /* 0x120E8E87: mov dword ptr [ebp + 0x10], eax */
    edi = ebx; /* 0x120E8E8A: mov edi, ebx */
    /* cmp ebx, edx */ /* 0x120E8E8C: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E8EB2; /* 0x120E8E8E: jbe 0x120e8eb2 */
L_120E8E90:
    PUSH32(esp, 4); /* 0x120E8E90: push 4 */
    ebx = ecx; /* 0x120E8E92: mov ebx, ecx */
    ecx = MEM32(ebp + (-0x10)); /* 0x120E8E94: mov ecx, dword ptr [ebp - 0x10] */
    esi = POP32_VAL(esp); /* 0x120E8E97: pop esi */
L_120E8E98:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x120E8E98: dec edi */
    _flag_k = FK_DEC;
    eax = edi; /* 0x120E8E99: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x120E8E9B: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(ecx + eax * 4); /* 0x120E8E9E: mov eax, dword ptr [ecx + eax*4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - esi; /* 0x120E8EA1: sub ebx, esi */
    _flag_k = FK_CMP;
    MEM32(ebx) = eax; /* 0x120E8EA3: mov dword ptr [ebx], eax */
    /* cmp edi, edx */ /* 0x120E8EA5: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_120E8E98; /* 0x120E8EA7: ja 0x120e8e98 */
L_120E8EA9:
    esi = MEM32(ebp + (-0x18)); /* 0x120E8EA9: mov esi, dword ptr [ebp - 0x18] */
    ebx = MEM32(ebp + (-0x8)); /* 0x120E8EAC: mov ebx, dword ptr [ebp - 8] */
    eax = MEM32(ebp + 0x10); /* 0x120E8EAF: mov eax, dword ptr [ebp + 0x10] */
L_120E8EB2:
    ecx = edx; /* 0x120E8EB2: mov ecx, edx */
    /* test edx, edx */ /* 0x120E8EB4: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E8ED1; /* 0x120E8EB6: je 0x120e8ed1 */
L_120E8EB8:
    edi = MEM32(ebp + (-0x14)); /* 0x120E8EB8: mov edi, dword ptr [ebp - 0x14] */
    PUSH32(esp, 4); /* 0x120E8EBB: push 4 */
    ebx = eax; /* 0x120E8EBD: mov ebx, eax */
    edx = POP32_VAL(esp); /* 0x120E8EBF: pop edx */
L_120E8EC0:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edx; /* 0x120E8EC0: sub ebx, edx */
    _flag_k = FK_CMP;
    eax = MEM32(ebx); /* 0x120E8EC2: mov eax, dword ptr [ebx] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - edx; /* 0x120E8EC4: sub edi, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x120E8EC6: dec ecx */
    _flag_k = FK_DEC;
    MEM32(edi) = eax; /* 0x120E8EC7: mov dword ptr [edi], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E8EC0; /* 0x120E8EC9: jne 0x120e8ec0 */
L_120E8ECB:
    edx = MEM32(ebp + (-0xC)); /* 0x120E8ECB: mov edx, dword ptr [ebp - 0xc] */
    ebx = MEM32(ebp + (-0x8)); /* 0x120E8ECE: mov ebx, dword ptr [ebp - 8] */
L_120E8ED1:
    ecx = MEM32(ebp + (-0x1C)); /* 0x120E8ED1: mov ecx, dword ptr [ebp - 0x1c] */
    eax = MEM32(ebp + (-0x14)); /* 0x120E8ED4: mov eax, dword ptr [ebp - 0x14] */
    /* test esi, esi */ /* 0x120E8ED7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E8E6A; /* 0x120E8ED9: jne 0x120e8e6a */
L_120E8EDB:
    ecx = MEM32(ebp + 0x14); /* 0x120E8EDB: mov ecx, dword ptr [ebp + 0x14] */
L_120E8EDE:
    ebx = MEM32(ebp + (-0x4)); /* 0x120E8EDE: mov ebx, dword ptr [ebp - 4] */
    edi = ebx; /* 0x120E8EE1: mov edi, ebx */
L_120E8EE3:
    esi = MEM32(ebp + 0x8); /* 0x120E8EE3: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x2C); /* 0x120E8EE6: mov eax, dword ptr [esi + 0x2c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x120E8EE9: imul eax, ecx */
    ecx = (uint32_t)MEM16(esi + 0xC); /* 0x120E8EEC: movzx ecx, word ptr [esi + 0xc] */
    /* cmp eax, ecx */ /* 0x120E8EF0: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E8EF6; /* 0x120E8EF2: jbe 0x120e8ef6 */
L_120E8EF4:
    eax = ecx; /* 0x120E8EF4: mov eax, ecx */
L_120E8EF6:
    ecx = MEM32(esi + 0x1C); /* 0x120E8EF6: mov ecx, dword ptr [esi + 0x1c] */
    /* test ecx, ecx */ /* 0x120E8EF9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E8F04; /* 0x120E8EFB: jne 0x120e8f04 */
L_120E8EFD:
    eax = 0x80004005u; /* 0x120E8EFD: mov eax, 0x80004005 */
    goto L_120E8F1A; /* 0x120E8F02: jmp 0x120e8f1a */
L_120E8F04:
    PUSH32(esp, eax); /* 0x120E8F04: push eax */
    eax = (uint32_t)MEM16(esi + 0xA); /* 0x120E8F05: movzx eax, word ptr [esi + 0xa] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x18); /* 0x120E8F09: add eax, dword ptr [ebp + 0x18] */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x120E8F0C: push ebx */
    PUSH32(esp, edi); /* 0x120E8F0D: push edi */
    PUSH32(esp, eax); /* 0x120E8F0E: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120E8F0F: push dword ptr [ebp + 0xc] */
    RECOMP_ICALL(ecx); /* 0x120E8F12: call ecx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120E8F14: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E8F1A; /* 0x120E8F16: js 0x120e8f1a */
L_120E8F18:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E8F18: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E8F1A:
    edi = POP32_VAL(esp); /* 0x120E8F1A: pop edi */
    esi = POP32_VAL(esp); /* 0x120E8F1B: pop esi */
    ebx = POP32_VAL(esp); /* 0x120E8F1C: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E8F1D: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x120E8F1E: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_120E8F26(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E8F26u);

L_120E8F26:
    edi = edi; /* 0x120E8F26: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E8F28: push ebp */
    ebp = esp; /* 0x120E8F29: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x120E8F2B: sub esp, 0x2c */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x8); /* 0x120E8F2E: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x120E8F31: push ebx */
    ebx = MEM32(ecx + 0x20); /* 0x120E8F32: mov ebx, dword ptr [ecx + 0x20] */
    PUSH32(esp, esi); /* 0x120E8F35: push esi */
    esi = MEM32(ecx + 0x18); /* 0x120E8F36: mov esi, dword ptr [ecx + 0x18] */
    eax = (uint32_t)MEM16(esi); /* 0x120E8F39: movzx eax, word ptr [esi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x120E8F3C: sub eax, 0 */
    _flag_k = FK_CMP;
    PUSH32(esp, edi); /* 0x120E8F3F: push edi */
    edi = MEM32(ebp + 0x10); /* 0x120E8F40: mov edi, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x8)) = esi; /* 0x120E8F43: mov dword ptr [ebp - 8], esi */
    MEM32(ebp + (-0x4)) = ebx; /* 0x120E8F46: mov dword ptr [ebp - 4], ebx */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_120E9248; /* 0x120E8F49: je 0x120e9248 */
L_120E8F4F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E8F4F: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120E91C1; /* 0x120E8F50: je 0x120e91c1 */
L_120E8F56:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E8F56: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120E9121; /* 0x120E8F57: je 0x120e9121 */
L_120E8F5D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E8F5D: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120E8FEF; /* 0x120E8F5E: je 0x120e8fef */
L_120E8F64:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E8F64: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E8F65: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120E8F72; /* 0x120E8F66: je 0x120e8f72 */
L_120E8F68:
    eax = 0x80004001u; /* 0x120E8F68: mov eax, 0x80004001 */
    goto L_120E944F; /* 0x120E8F6D: jmp 0x120e944f */
L_120E8F72:
    eax = MEM32(ebp + 0x14); /* 0x120E8F72: mov eax, dword ptr [ebp + 0x14] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x120E8F75: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x120E8F75: shl eax, 4 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120E8F78: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ecx + 0x34); /* 0x120E8F7A: div dword ptr [ecx + 0x34] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    ebx = eax; /* 0x120E8F7D: mov ebx, eax */
    eax = (uint32_t)MEM16(esi + 0x8); /* 0x120E8F7F: movzx eax, word ptr [esi + 8] */
    /* cmp ebx, eax */ /* 0x120E8F83: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E8F89; /* 0x120E8F85: jbe 0x120e8f89 */
L_120E8F87:
    ebx = eax; /* 0x120E8F87: mov ebx, eax */
L_120E8F89:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E8F89: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = eax; /* 0x120E8F8B: mov dword ptr [ebp + 0x10], eax */
    /* test ebx, ebx */ /* 0x120E8F8E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E944D; /* 0x120E8F90: je 0x120e944d */
L_120E8F96:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120E8F96: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120E8F98: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x14) = ecx; /* 0x120E8F9A: mov dword ptr [ebp + 0x14], ecx */
    /* cmp LO16(edx), MEM16(esi + 0xA) */ /* 0x120E8F9D: cmp dx, word ptr [esi + 0xa] */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(MEM16(esi + 0xA)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_120E8FE2; /* 0x120E8FA1: jae 0x120e8fe2 */
L_120E8FA3:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120E8FA3: push dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + 0x8); /* 0x120E8FA6: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x38); /* 0x120E8FA9: mov eax, dword ptr [eax + 0x38] */
    eax = MEM32(eax + ecx * 4); /* 0x120E8FAC: mov eax, dword ptr [eax + ecx*4] */
    PUSH32(esp, MEM32(eax + 0x30)); /* 0x120E8FAF: push dword ptr [eax + 0x30] */
    MEM32(ebp + (-0x1C)) = eax; /* 0x120E8FB2: mov dword ptr [ebp - 0x1c], eax */
    PUSH32(esp, edi); /* 0x120E8FB5: push edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120E8FB6: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x120E8FB9: push eax */
    RECOMP_CALL(sub_120E874C); /* 0x120E8FBA: call 0x120e874c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120E8FBF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E944F; /* 0x120E8FC1: js 0x120e944f */
L_120E8FC7:
    eax = MEM32(ebp + (-0x1C)); /* 0x120E8FC7: mov eax, dword ptr [ebp - 0x1c] */
    eax = MEM32(eax + 0x30); /* 0x120E8FCA: mov eax, dword ptr [eax + 0x30] */
    ecx = MEM32(ebp + 0x14); /* 0x120E8FCD: mov ecx, dword ptr [ebp + 0x14] */
    edi = edi + eax * 4; /* 0x120E8FD0: lea edi, [edi + eax*4] */
    eax = (uint32_t)MEM16(esi + 0xA); /* 0x120E8FD3: movzx eax, word ptr [esi + 0xa] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120E8FD7: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + 0x14) = ecx; /* 0x120E8FD8: mov dword ptr [ebp + 0x14], ecx */
    /* cmp ecx, eax */ /* 0x120E8FDB: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E8FA3; /* 0x120E8FDD: jb 0x120e8fa3 */
L_120E8FDF:
    eax = MEM32(ebp + 0x10); /* 0x120E8FDF: mov eax, dword ptr [ebp + 0x10] */
L_120E8FE2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120E8FE2: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + 0x10) = eax; /* 0x120E8FE3: mov dword ptr [ebp + 0x10], eax */
    /* cmp eax, ebx */ /* 0x120E8FE6: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E8F96; /* 0x120E8FE8: jb 0x120e8f96 */
L_120E8FEA:
    goto L_120E944D; /* 0x120E8FEA: jmp 0x120e944d */
L_120E8FEF:
    eax = (uint32_t)MEM16(esi + 0x8); /* 0x120E8FEF: movzx eax, word ptr [esi + 8] */
    edx = MEM32(ebp + 0x14); /* 0x120E8FF3: mov edx, dword ptr [ebp + 0x14] */
    MEM32(ebp + 0x14) = edx; /* 0x120E8FF6: mov dword ptr [ebp + 0x14], edx */
    /* cmp edx, eax */ /* 0x120E8FF9: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E9002; /* 0x120E8FFB: jbe 0x120e9002 */
L_120E8FFD:
    edx = eax; /* 0x120E8FFD: mov edx, eax */
    MEM32(ebp + 0x14) = eax; /* 0x120E8FFF: mov dword ptr [ebp + 0x14], eax */
L_120E9002:
    ecx = (uint32_t)MEM16(esi + 0x4); /* 0x120E9002: movzx ecx, word ptr [esi + 4] */
    PUSH32(esp, 4); /* 0x120E9006: push 4 */
    eax = POP32_VAL(esp); /* 0x120E9008: pop eax */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x120E9009: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E909F; /* 0x120E900C: jne 0x120e909f */
L_120E9012:
    /* cmp LO16(eax), MEM16(esi + 0x6) */ /* 0x120E9012: cmp ax, word ptr [esi + 6] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(esi + 0x6)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E909F; /* 0x120E9016: jne 0x120e909f */
L_120E901C:
    /* test edx, edx */ /* 0x120E901C: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E9244; /* 0x120E901E: je 0x120e9244 */
L_120E9024:
    eax = ebx; /* 0x120E9024: mov eax, ebx */
    ecx = edi + 0x20; /* 0x120E9026: lea ecx, [edi + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x120E9029: sub eax, edi */
    _flag_k = FK_CMP;
    MEM32(ebp + 0x10) = edx; /* 0x120E902B: mov dword ptr [ebp + 0x10], edx */
    edi = ebx + 0x8; /* 0x120E902E: lea edi, [ebx + 8] */
L_120E9031:
    fp_push(*(float*)&MEM32(ecx + (-0x20))); /* 0x120E9031: fld dword ptr [ecx - 0x20] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + (-0x8)) = _v; } /* 0x120E9034: fstp dword ptr [edi - 8] */
    fp_push(*(float*)&MEM32(ecx + (-0x10))); /* 0x120E9037: fld dword ptr [ecx - 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + (-0x4)) = _v; } /* 0x120E903A: fstp dword ptr [edi - 4] */
    fp_push(*(float*)&MEM32(ecx)); /* 0x120E903D: fld dword ptr [ecx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi) = _v; } /* 0x120E903F: fstp dword ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x40u; /* 0x120E9041: add edi, 0x40 */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(ecx + 0x10)); /* 0x120E9044: fld dword ptr [ecx + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + (-0x3C)) = _v; } /* 0x120E9047: fstp dword ptr [edi - 0x3c] */
    fp_push(*(float*)&MEM32(ecx + (-0x1C))); /* 0x120E904A: fld dword ptr [ecx - 0x1c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + (-0x38)) = _v; } /* 0x120E904D: fstp dword ptr [edi - 0x38] */
    fp_push(*(float*)&MEM32(ecx + (-0xC))); /* 0x120E9050: fld dword ptr [ecx - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + (-0x34)) = _v; } /* 0x120E9053: fstp dword ptr [edi - 0x34] */
    fp_push(*(float*)&MEM32(ecx + 0x4)); /* 0x120E9056: fld dword ptr [ecx + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + (-0x30)) = _v; } /* 0x120E9059: fstp dword ptr [edi - 0x30] */
    fp_push(*(float*)&MEM32(ecx + 0x14)); /* 0x120E905C: fld dword ptr [ecx + 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + (-0x2C)) = _v; } /* 0x120E905F: fstp dword ptr [edi - 0x2c] */
    fp_push(*(float*)&MEM32(ecx + (-0x18))); /* 0x120E9062: fld dword ptr [ecx - 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(eax + ecx) = _v; } /* 0x120E9065: fstp dword ptr [eax + ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x40u; /* 0x120E9068: add ecx, 0x40 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1; /* 0x120E906B: dec dword ptr [ebp + 0x10] */
    _flag_k = FK_DEC;
    fp_push(*(float*)&MEM32(ecx + (-0x48))); /* 0x120E906E: fld dword ptr [ecx - 0x48] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + (-0x24)) = _v; } /* 0x120E9071: fstp dword ptr [edi - 0x24] */
    fp_push(*(float*)&MEM32(ecx + (-0x38))); /* 0x120E9074: fld dword ptr [ecx - 0x38] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + (-0x20)) = _v; } /* 0x120E9077: fstp dword ptr [edi - 0x20] */
    fp_push(*(float*)&MEM32(ecx + (-0x28))); /* 0x120E907A: fld dword ptr [ecx - 0x28] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + (-0x1C)) = _v; } /* 0x120E907D: fstp dword ptr [edi - 0x1c] */
    fp_push(*(float*)&MEM32(ecx + (-0x54))); /* 0x120E9080: fld dword ptr [ecx - 0x54] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + (-0x18)) = _v; } /* 0x120E9083: fstp dword ptr [edi - 0x18] */
    fp_push(*(float*)&MEM32(ecx + (-0x44))); /* 0x120E9086: fld dword ptr [ecx - 0x44] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + (-0x14)) = _v; } /* 0x120E9089: fstp dword ptr [edi - 0x14] */
    fp_push(*(float*)&MEM32(ecx + (-0x34))); /* 0x120E908C: fld dword ptr [ecx - 0x34] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + (-0x10)) = _v; } /* 0x120E908F: fstp dword ptr [edi - 0x10] */
    fp_push(*(float*)&MEM32(ecx + (-0x24))); /* 0x120E9092: fld dword ptr [ecx - 0x24] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + (-0xC)) = _v; } /* 0x120E9095: fstp dword ptr [edi - 0xc] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E9031; /* 0x120E9098: jne 0x120e9031 */
L_120E909A:
    goto L_120E9244; /* 0x120E909A: jmp 0x120e9244 */
L_120E909F:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x120E909F: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = ebx; /* 0x120E90A3: mov dword ptr [ebp - 0xc], ebx */
    /* test edx, edx */ /* 0x120E90A6: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E9244; /* 0x120E90A8: je 0x120e9244 */
L_120E90AE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E90AE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120E90B0: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = eax; /* 0x120E90B2: mov dword ptr [ebp + 0x10], eax */
    /* cmp LO16(ebx), MEM16(esi + 0x6) */ /* 0x120E90B5: cmp bx, word ptr [esi + 6] */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(MEM16(esi + 0x6)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_120E9111; /* 0x120E90B9: jae 0x120e9111 */
L_120E90BB:
    edx = MEM32(ebp + (-0x10)); /* 0x120E90BB: mov edx, dword ptr [ebp - 0x10] */
    ebx = (uint32_t)LO16(ecx); /* 0x120E90BE: movzx ebx, cx */
L_120E90C1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120E90C1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ebx, ebx */ /* 0x120E90C3: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E90FA; /* 0x120E90C5: je 0x120e90fa */
L_120E90C7:
    PUSH32(esp, 4); /* 0x120E90C7: push 4 */
    ebx = POP32_VAL(esp); /* 0x120E90C9: pop ebx */
    /* cmp ecx, ebx */ /* 0x120E90CA: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120E90E3; /* 0x120E90CC: ja 0x120e90e3 */
L_120E90CE:
    /* cmp eax, ebx */ /* 0x120E90CE: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120E90E3; /* 0x120E90D0: ja 0x120e90e3 */
L_120E90D2:
    ebx = MEM32(ebp + 0x10); /* 0x120E90D2: mov ebx, dword ptr [ebp + 0x10] */
    eax = ecx + edx * 4; /* 0x120E90D5: lea eax, [ecx + edx*4] */
    eax = ebx + eax * 4; /* 0x120E90D8: lea eax, [ebx + eax*4] */
    ebx = MEM32(edi + eax * 4); /* 0x120E90DB: mov ebx, dword ptr [edi + eax*4] */
    eax = MEM32(ebp + 0x10); /* 0x120E90DE: mov eax, dword ptr [ebp + 0x10] */
    goto L_120E90E5; /* 0x120E90E1: jmp 0x120e90e5 */
L_120E90E3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120E90E3: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E90E5:
    esi = MEM32(ebp + (-0xC)); /* 0x120E90E5: mov esi, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 4; /* 0x120E90E8: add dword ptr [ebp - 0xc], 4 */
    _flag_k = FK_ADD;
    MEM32(esi) = ebx; /* 0x120E90EC: mov dword ptr [esi], ebx */
    esi = MEM32(ebp + (-0x8)); /* 0x120E90EE: mov esi, dword ptr [ebp - 8] */
    ebx = (uint32_t)MEM16(esi + 0x4); /* 0x120E90F1: movzx ebx, word ptr [esi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120E90F5: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, ebx */ /* 0x120E90F6: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E90C7; /* 0x120E90F8: jb 0x120e90c7 */
L_120E90FA:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120E90FA: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + 0x10) = eax; /* 0x120E90FB: mov dword ptr [ebp + 0x10], eax */
    eax = (uint32_t)MEM16(esi + 0x6); /* 0x120E90FE: movzx eax, word ptr [esi + 6] */
    /* cmp MEM32(ebp + 0x10), eax */ /* 0x120E9102: cmp dword ptr [ebp + 0x10], eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x10); /* 0x120E9105: mov eax, dword ptr [ebp + 0x10] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E90C1; /* 0x120E9108: jb 0x120e90c1 */
L_120E910A:
    edx = MEM32(ebp + 0x14); /* 0x120E910A: mov edx, dword ptr [ebp + 0x14] */
    ecx = (uint32_t)MEM16(esi + 0x4); /* 0x120E910D: movzx ecx, word ptr [esi + 4] */
L_120E9111:
    eax = MEM32(ebp + (-0x10)); /* 0x120E9111: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120E9114: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x10)) = eax; /* 0x120E9115: mov dword ptr [ebp - 0x10], eax */
    /* cmp eax, edx */ /* 0x120E9118: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E90AE; /* 0x120E911A: jb 0x120e90ae */
L_120E911C:
    goto L_120E9241; /* 0x120E911C: jmp 0x120e9241 */
L_120E9121:
    eax = (uint32_t)MEM16(esi + 0x8); /* 0x120E9121: movzx eax, word ptr [esi + 8] */
    edx = MEM32(ebp + 0x14); /* 0x120E9125: mov edx, dword ptr [ebp + 0x14] */
    MEM32(ebp + 0x14) = edx; /* 0x120E9128: mov dword ptr [ebp + 0x14], edx */
    /* cmp edx, eax */ /* 0x120E912B: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E9134; /* 0x120E912D: jbe 0x120e9134 */
L_120E912F:
    edx = eax; /* 0x120E912F: mov edx, eax */
    MEM32(ebp + 0x14) = eax; /* 0x120E9131: mov dword ptr [ebp + 0x14], eax */
L_120E9134:
    ecx = (uint32_t)MEM16(esi + 0x4); /* 0x120E9134: movzx ecx, word ptr [esi + 4] */
    PUSH32(esp, 4); /* 0x120E9138: push 4 */
    eax = POP32_VAL(esp); /* 0x120E913A: pop eax */
    /* cmp LO16(eax), LO16(ecx) */ /* 0x120E913B: cmp ax, cx */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E914A; /* 0x120E913E: jne 0x120e914a */
L_120E9140:
    /* cmp LO16(eax), MEM16(esi + 0x6) */ /* 0x120E9140: cmp ax, word ptr [esi + 6] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(esi + 0x6)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E925E; /* 0x120E9144: je 0x120e925e */
L_120E914A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E914A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = ebx; /* 0x120E914C: mov dword ptr [ebp + 0x10], ebx */
    MEM32(ebp + (-0x10)) = eax; /* 0x120E914F: mov dword ptr [ebp - 0x10], eax */
    /* test edx, edx */ /* 0x120E9152: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E9244; /* 0x120E9154: je 0x120e9244 */
L_120E915A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120E915A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & ebx; /* 0x120E915C: and dword ptr [ebp - 0x1c], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(ebp + (-0x1C)), LO16(ecx) */ /* 0x120E915F: cmp word ptr [ebp - 0x1c], cx */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x1C))) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_120E91B4; /* 0x120E9163: jae 0x120e91b4 */
L_120E9165:
    eax = (uint32_t)MEM16(esi + 0x6); /* 0x120E9165: movzx eax, word ptr [esi + 6] */
    edx = MEM32(ebp + (-0x10)); /* 0x120E9169: mov edx, dword ptr [ebp - 0x10] */
L_120E916C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120E916C: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x120E916E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E91A1; /* 0x120E9170: je 0x120e91a1 */
L_120E9172:
    PUSH32(esp, 4); /* 0x120E9172: push 4 */
    eax = POP32_VAL(esp); /* 0x120E9174: pop eax */
    /* cmp ebx, eax */ /* 0x120E9175: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120E9188; /* 0x120E9177: ja 0x120e9188 */
L_120E9179:
    /* cmp ecx, eax */ /* 0x120E9179: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120E9188; /* 0x120E917B: ja 0x120e9188 */
L_120E917D:
    eax = ebx + edx * 4; /* 0x120E917D: lea eax, [ebx + edx*4] */
    eax = ecx + eax * 4; /* 0x120E9180: lea eax, [ecx + eax*4] */
    eax = MEM32(edi + eax * 4); /* 0x120E9183: mov eax, dword ptr [edi + eax*4] */
    goto L_120E918A; /* 0x120E9186: jmp 0x120e918a */
L_120E9188:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E9188: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E918A:
    esi = MEM32(ebp + 0x10); /* 0x120E918A: mov esi, dword ptr [ebp + 0x10] */
    MEM32(esi) = eax; /* 0x120E918D: mov dword ptr [esi], eax */
    esi = MEM32(ebp + (-0x8)); /* 0x120E918F: mov esi, dword ptr [ebp - 8] */
    PUSH32(esp, 4); /* 0x120E9192: push 4 */
    eax = POP32_VAL(esp); /* 0x120E9194: pop eax */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + eax; /* 0x120E9195: add dword ptr [ebp + 0x10], eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)MEM16(esi + 0x6); /* 0x120E9198: movzx eax, word ptr [esi + 6] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120E919C: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, eax */ /* 0x120E919D: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E9172; /* 0x120E919F: jb 0x120e9172 */
L_120E91A1:
    ecx = (uint32_t)MEM16(esi + 0x4); /* 0x120E91A1: movzx ecx, word ptr [esi + 4] */
    eax = (uint32_t)MEM16(esi + 0x6); /* 0x120E91A5: movzx eax, word ptr [esi + 6] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x120E91A9: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, ecx */ /* 0x120E91AA: cmp ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E916C; /* 0x120E91AC: jb 0x120e916c */
L_120E91AE:
    edx = MEM32(ebp + 0x14); /* 0x120E91AE: mov edx, dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + (-0x10)); /* 0x120E91B1: mov eax, dword ptr [ebp - 0x10] */
L_120E91B4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120E91B4: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x10)) = eax; /* 0x120E91B5: mov dword ptr [ebp - 0x10], eax */
    /* cmp eax, edx */ /* 0x120E91B8: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E915A; /* 0x120E91BA: jb 0x120e915a */
L_120E91BC:
    goto L_120E9241; /* 0x120E91BC: jmp 0x120e9241 */
L_120E91C1:
    edx = MEM32(ebp + 0x14); /* 0x120E91C1: mov edx, dword ptr [ebp + 0x14] */
    eax = (uint32_t)MEM16(esi + 0x8); /* 0x120E91C4: movzx eax, word ptr [esi + 8] */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x120E91C8: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x120E91C8: shl edx, 2 */
    MEM32(ebp + 0x14) = edx; /* 0x120E91CB: mov dword ptr [ebp + 0x14], edx */
    /* cmp edx, eax */ /* 0x120E91CE: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E91D7; /* 0x120E91D0: jbe 0x120e91d7 */
L_120E91D2:
    edx = eax; /* 0x120E91D2: mov edx, eax */
    MEM32(ebp + 0x14) = eax; /* 0x120E91D4: mov dword ptr [ebp + 0x14], eax */
L_120E91D7:
    eax = (uint32_t)MEM16(esi + 0x6); /* 0x120E91D7: movzx eax, word ptr [esi + 6] */
    PUSH32(esp, 4); /* 0x120E91DB: push 4 */
    ecx = POP32_VAL(esp); /* 0x120E91DD: pop ecx */
    /* cmp LO16(ecx), LO16(eax) */ /* 0x120E91DE: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E925E; /* 0x120E91E1: je 0x120e925e */
L_120E91E3:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0; /* 0x120E91E3: and dword ptr [ebp + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ebx; /* 0x120E91E7: mov dword ptr [ebp - 0x10], ebx */
    /* test edx, edx */ /* 0x120E91EA: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E9244; /* 0x120E91EC: je 0x120e9244 */
L_120E91EE:
    ebx = MEM32(ebp + 0x10); /* 0x120E91EE: mov ebx, dword ptr [ebp + 0x10] */
    ecx = eax; /* 0x120E91F1: mov ecx, eax */
L_120E91F3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E91F3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = eax; /* 0x120E91F5: mov dword ptr [ebp + 0x10], eax */
    /* test ecx, ecx */ /* 0x120E91F8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E923C; /* 0x120E91FA: je 0x120e923c */
L_120E91FC:
    edx = MEM32(ebp + (-0x10)); /* 0x120E91FC: mov edx, dword ptr [ebp - 0x10] */
L_120E91FF:
    PUSH32(esp, 4); /* 0x120E91FF: push 4 */
    ecx = POP32_VAL(esp); /* 0x120E9201: pop ecx */
    /* cmp eax, ecx */ /* 0x120E9202: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E920A; /* 0x120E9204: jbe 0x120e920a */
L_120E9206:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120E9206: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120E9223; /* 0x120E9208: jmp 0x120e9223 */
L_120E920A:
    ecx = ebx; /* 0x120E920A: mov ecx, ebx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x120E920C: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x120E920C: shr ecx, 2 */
    eax = ebx; /* 0x120E920F: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x120E9211: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = eax + ecx * 4; /* 0x120E9214: lea eax, [eax + ecx*4] */
    ecx = MEM32(ebp + 0x10); /* 0x120E9217: mov ecx, dword ptr [ebp + 0x10] */
    eax = ecx + eax * 4; /* 0x120E921A: lea eax, [ecx + eax*4] */
    ecx = MEM32(edi + eax * 4); /* 0x120E921D: mov ecx, dword ptr [edi + eax*4] */
    eax = MEM32(ebp + 0x10); /* 0x120E9220: mov eax, dword ptr [ebp + 0x10] */
L_120E9223:
    MEM32(edx) = ecx; /* 0x120E9223: mov dword ptr [edx], ecx */
    PUSH32(esp, 4); /* 0x120E9225: push 4 */
    ecx = POP32_VAL(esp); /* 0x120E9227: pop ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x120E9228: add edx, ecx */
    _flag_k = FK_ADD;
    ecx = (uint32_t)MEM16(esi + 0x6); /* 0x120E922A: movzx ecx, word ptr [esi + 6] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120E922E: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + 0x10) = eax; /* 0x120E922F: mov dword ptr [ebp + 0x10], eax */
    /* cmp eax, ecx */ /* 0x120E9232: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E91FF; /* 0x120E9234: jb 0x120e91ff */
L_120E9236:
    MEM32(ebp + (-0x10)) = edx; /* 0x120E9236: mov dword ptr [ebp - 0x10], edx */
    edx = MEM32(ebp + 0x14); /* 0x120E9239: mov edx, dword ptr [ebp + 0x14] */
L_120E923C:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x120E923C: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, edx */ /* 0x120E923D: cmp ebx, edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E91F3; /* 0x120E923F: jb 0x120e91f3 */
L_120E9241:
    ebx = MEM32(ebp + (-0x4)); /* 0x120E9241: mov ebx, dword ptr [ebp - 4] */
L_120E9244:
    edi = ebx; /* 0x120E9244: mov edi, ebx */
    goto L_120E925E; /* 0x120E9246: jmp 0x120e925e */
L_120E9248:
    edx = MEM32(ebp + 0x14); /* 0x120E9248: mov edx, dword ptr [ebp + 0x14] */
    eax = (uint32_t)MEM16(esi + 0x8); /* 0x120E924B: movzx eax, word ptr [esi + 8] */
    if (4u) _cf = (((edx) >> 28) & 1u); /* 0x120E924F: shl edx, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edx << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 4u; /* 0x120E924F: shl edx, 4 */
    MEM32(ebp + 0x14) = edx; /* 0x120E9252: mov dword ptr [ebp + 0x14], edx */
    /* cmp edx, eax */ /* 0x120E9255: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E925E; /* 0x120E9257: jbe 0x120e925e */
L_120E9259:
    edx = eax; /* 0x120E9259: mov edx, eax */
    MEM32(ebp + 0x14) = edx; /* 0x120E925B: mov dword ptr [ebp + 0x14], edx */
L_120E925E:
    eax = (uint32_t)MEM16(esi + 0x2); /* 0x120E925E: movzx eax, word ptr [esi + 2] */
    PUSH32(esp, 3); /* 0x120E9262: push 3 */
    ecx = POP32_VAL(esp); /* 0x120E9264: pop ecx */
    MEM32(ebp + (-0xC)) = 1; /* 0x120E9265: mov dword ptr [ebp - 0xc], 1 */
    /* cmp LO16(ecx), LO16(eax) */ /* 0x120E926C: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E92FD; /* 0x120E926F: je 0x120e92fd */
L_120E9275:
    ecx = MEM32(ebp + 0x8); /* 0x120E9275: mov ecx, dword ptr [ebp + 8] */
    ecx = MEM32(ecx + 0x34); /* 0x120E9278: mov ecx, dword ptr [ecx + 0x34] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx); /* 0x120E927B: imul ecx, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E927E: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120E92C7; /* 0x120E927F: je 0x120e92c7 */
L_120E9281:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E9281: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E92FB; /* 0x120E9282: jne 0x120e92fb */
L_120E9284:
    MEM16(ebp + 0x10) = _fpu_cw; /* 0x120E9284: fnstcw word ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x10); /* 0x120E9287: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)((eax | 0xC00u)); _flag_b = (uint32_t)((eax | 0xC00u));
    eax = eax | 0xC00u; /* 0x120E928A: or eax, 0xc00 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = eax; /* 0x120E928F: mov dword ptr [ebp - 0x1c], eax */
    _fpu_cw = MEM16(ebp + (-0x1C)); /* 0x120E9292: fldcw word ptr [ebp - 0x1c] */
    eax = MEM32(ebp + 0x10); /* 0x120E9295: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x14)) = eax; /* 0x120E9298: mov dword ptr [ebp - 0x14], eax */
    /* test ecx, ecx */ /* 0x120E929B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E92C2; /* 0x120E929D: je 0x120e92c2 */
L_120E929F:
    PUSH32(esp, 4); /* 0x120E929F: push 4 */
    esi = ebx; /* 0x120E92A1: mov esi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x120E92A3: sub edi, ebx */
    _flag_k = FK_CMP;
    edx = POP32_VAL(esp); /* 0x120E92A5: pop edx */
L_120E92A6:
    fp_push(*(float*)&MEM32(edi + esi)); /* 0x120E92A6: fld dword ptr [edi + esi] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x18)) = _v; } /* 0x120E92A9: fstp dword ptr [ebp - 0x18] */
    fp_push(*(float*)&MEM32(ebp + (-0x18))); /* 0x120E92AC: fld dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x10)) = (uint32_t)(int32_t)fp_to_int(fp_pop()); /* 0x120E92AF: fistp dword ptr [ebp - 0x10] */
    eax = MEM32(ebp + (-0x10)); /* 0x120E92B2: mov eax, dword ptr [ebp - 0x10] */
    MEM32(esi) = eax; /* 0x120E92B5: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x120E92B7: add esi, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x120E92B9: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E92A6; /* 0x120E92BA: jne 0x120e92a6 */
L_120E92BC:
    esi = MEM32(ebp + (-0x8)); /* 0x120E92BC: mov esi, dword ptr [ebp - 8] */
    edx = MEM32(ebp + 0x14); /* 0x120E92BF: mov edx, dword ptr [ebp + 0x14] */
L_120E92C2:
    _fpu_cw = MEM16(ebp + (-0x14)); /* 0x120E92C2: fldcw word ptr [ebp - 0x14] */
    goto L_120E92FB; /* 0x120E92C5: jmp 0x120e92fb */
L_120E92C7:
    /* test ecx, ecx */ /* 0x120E92C7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E92FB; /* 0x120E92C9: je 0x120e92fb */
L_120E92CB:
    fp_push(0.0); /* 0x120E92CB: fldz  */
    PUSH32(esp, 4); /* 0x120E92CD: push 4 */
    esi = ebx; /* 0x120E92CF: mov esi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - ebx; /* 0x120E92D1: sub edi, ebx */
    _flag_k = FK_CMP;
    edx = POP32_VAL(esp); /* 0x120E92D3: pop edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120E92D4: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E92D6:
    fp_push(*(float*)&MEM32(esi + edi)); /* 0x120E92D6: fld dword ptr [esi + edi] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120E92D9: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E92DB: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x120E92DD: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_120E92E7; /* 0x120E92E0: jnp 0x120e92e7 */
L_120E92E2:
    eax = ebx + 0x1; /* 0x120E92E2: lea eax, [ebx + 1] */
    goto L_120E92E9; /* 0x120E92E5: jmp 0x120e92e9 */
L_120E92E7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E92E7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E92E9:
    MEM32(esi) = eax; /* 0x120E92E9: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x120E92EB: add esi, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x120E92ED: dec ecx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E92D6; /* 0x120E92EE: jne 0x120e92d6 */
L_120E92F0:
    esi = MEM32(ebp + (-0x8)); /* 0x120E92F0: mov esi, dword ptr [ebp - 8] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E92F3: fstp st(0) */
    edx = MEM32(ebp + 0x14); /* 0x120E92F5: mov edx, dword ptr [ebp + 0x14] */
    ebx = MEM32(ebp + (-0x4)); /* 0x120E92F8: mov ebx, dword ptr [ebp - 4] */
L_120E92FB:
    edi = ebx; /* 0x120E92FB: mov edi, ebx */
L_120E92FD:
    eax = MEM32(ebp + 0x8); /* 0x120E92FD: mov eax, dword ptr [ebp + 8] */
    eax = (uint32_t)MEM16(eax + 0x8); /* 0x120E9300: movzx eax, word ptr [eax + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120E9304: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(ecx), LO16(eax) */ /* 0x120E9306: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E9418; /* 0x120E9309: je 0x120e9418 */
L_120E930F:
    PUSH32(esp, 3); /* 0x120E930F: push 3 */
    ecx = POP32_VAL(esp); /* 0x120E9311: pop ecx */
    /* cmp MEM16(esi), LO16(ecx) */ /* 0x120E9312: cmp word ptr [esi], cx */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E9321; /* 0x120E9315: je 0x120e9321 */
L_120E9317:
    ecx = (uint32_t)MEM16(esi + 0x6); /* 0x120E9317: movzx ecx, word ptr [esi + 6] */
    esi = (uint32_t)MEM16(esi + 0x4); /* 0x120E931B: movzx esi, word ptr [esi + 4] */
    goto L_120E9329; /* 0x120E931F: jmp 0x120e9329 */
L_120E9321:
    ecx = (uint32_t)MEM16(esi + 0x4); /* 0x120E9321: movzx ecx, word ptr [esi + 4] */
    esi = (uint32_t)MEM16(esi + 0x6); /* 0x120E9325: movzx esi, word ptr [esi + 6] */
L_120E9329:
    MEM32(ebp + (-0x1C)) = ecx; /* 0x120E9329: mov dword ptr [ebp - 0x1c], ecx */
    /* test LO8(ecx), 3 */ /* 0x120E932C: test cl, 3 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E9418; /* 0x120E932F: je 0x120e9418 */
L_120E9335:
    /* cmp MEM16(ebp + (-0xC)), LO16(eax) */ /* 0x120E9335: cmp word ptr [ebp - 0xc], ax */
    _flag_a = (uint32_t)(MEM16(ebp + (-0xC))) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    eax = 0x12008A44u; /* 0x120E9339: mov eax, 0x12008a44 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E9345; /* 0x120E933E: je 0x120e9345 */
L_120E9340:
    eax = 0x12008A34u; /* 0x120E9340: mov eax, 0x12008a34 */
L_120E9345:
    esi = (uint32_t)((int32_t)esi * (int32_t)edx); /* 0x120E9345: imul esi, edx */
    MEM32(ebp + (-0x18)) = eax; /* 0x120E9348: mov dword ptr [ebp - 0x18], eax */
    eax = ecx + 0x3; /* 0x120E934B: lea eax, [ecx + 3] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    eax = eax & 0xFFFFFFFCu; /* 0x120E934E: and eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = eax; /* 0x120E9351: mov dword ptr [ebp - 0xc], eax */
    /* test esi, esi */ /* 0x120E9354: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E9416; /* 0x120E9356: je 0x120e9416 */
L_120E935C:
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x120E935C: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x120E935C: shl eax, 2 */
    MEM32(ebp + (-0x14)) = eax; /* 0x120E935F: mov dword ptr [ebp - 0x14], eax */
    eax = esi * 4 + 0x4; /* 0x120E9362: lea eax, [esi*4 + 4] */
    MEM32(ebp + 0x10) = eax; /* 0x120E9369: mov dword ptr [ebp + 0x10], eax */
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx); /* 0x120E936C: imul eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edi; /* 0x120E936F: add eax, edi */
    _flag_k = FK_ADD;
    edi = MEM32(ebp + (-0xC)); /* 0x120E9371: mov edi, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x8)) = eax; /* 0x120E9374: mov dword ptr [ebp - 8], eax */
    eax = esi; /* 0x120E9377: mov eax, esi */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x120E9379: imul eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x120E937C: add eax, ecx */
    _flag_k = FK_ADD;
    eax = ebx + eax * 4; /* 0x120E937E: lea eax, [ebx + eax*4] */
    MEM32(ebp + (-0x10)) = eax; /* 0x120E9381: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(ebp + 0x10); /* 0x120E9384: mov eax, dword ptr [ebp + 0x10] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x120E9387: imul eax, edi */
    edx = ecx; /* 0x120E938A: mov edx, ecx */
    if (2u) _cf = (((edx) >> 30) & 1u); /* 0x120E938C: shl edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx << 2u; /* 0x120E938C: shl edx, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x120E938F: add eax, ebx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x20)) = edx; /* 0x120E9391: mov dword ptr [ebp - 0x20], edx */
    edx = MEM32(ebp + (-0x8)); /* 0x120E9394: mov edx, dword ptr [ebp - 8] */
    MEM32(ebp + 0x10) = eax; /* 0x120E9397: mov dword ptr [ebp + 0x10], eax */
    ebx = eax; /* 0x120E939A: mov ebx, eax */
L_120E939C:
    eax = MEM32(ebp + (-0x10)); /* 0x120E939C: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x14)); /* 0x120E939F: sub eax, dword ptr [ebp - 0x14] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - MEM32(ebp + (-0x14)); /* 0x120E93A2: sub ebx, dword ptr [ebp - 0x14] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edx = edx - MEM32(ebp + (-0x20)); /* 0x120E93A5: sub edx, dword ptr [ebp - 0x20] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x120E93A8: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x2C)) = esi; /* 0x120E93A9: mov dword ptr [ebp - 0x2c], esi */
    MEM32(ebp + (-0x10)) = eax; /* 0x120E93AC: mov dword ptr [ebp - 0x10], eax */
    MEM32(ebp + 0x10) = ebx; /* 0x120E93AF: mov dword ptr [ebp + 0x10], ebx */
    MEM32(ebp + (-0x8)) = edx; /* 0x120E93B2: mov dword ptr [ebp - 8], edx */
    MEM32(ebp + (-0x24)) = edi; /* 0x120E93B5: mov dword ptr [ebp - 0x24], edi */
    /* cmp edi, ecx */ /* 0x120E93B8: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E93E7; /* 0x120E93BA: jbe 0x120e93e7 */
L_120E93BC:
    esi = MEM32(ebp + (-0x18)); /* 0x120E93BC: mov esi, dword ptr [ebp - 0x18] */
    PUSH32(esp, 3); /* 0x120E93BF: push 3 */
    MEM32(ebp + (-0x28)) = ebx; /* 0x120E93C1: mov dword ptr [ebp - 0x28], ebx */
    edx = POP32_VAL(esp); /* 0x120E93C4: pop edx */
L_120E93C5:
    PUSH32(esp, 4); /* 0x120E93C5: push 4 */
    eax = POP32_VAL(esp); /* 0x120E93C7: pop eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - eax; /* 0x120E93C8: sub ebx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x120E93CA: dec edi */
    _flag_k = FK_DEC;
    eax = edi; /* 0x120E93CB: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    eax = eax & edx; /* 0x120E93CD: and eax, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi + eax * 4); /* 0x120E93CF: mov eax, dword ptr [esi + eax*4] */
    MEM32(ebx) = eax; /* 0x120E93D2: mov dword ptr [ebx], eax */
    /* cmp edi, ecx */ /* 0x120E93D4: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_120E93C5; /* 0x120E93D6: ja 0x120e93c5 */
L_120E93D8:
    esi = MEM32(ebp + (-0x2C)); /* 0x120E93D8: mov esi, dword ptr [ebp - 0x2c] */
    edi = MEM32(ebp + (-0xC)); /* 0x120E93DB: mov edi, dword ptr [ebp - 0xc] */
    ebx = MEM32(ebp + 0x10); /* 0x120E93DE: mov ebx, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + (-0x8)); /* 0x120E93E1: mov edx, dword ptr [ebp - 8] */
    eax = MEM32(ebp + (-0x10)); /* 0x120E93E4: mov eax, dword ptr [ebp - 0x10] */
L_120E93E7:
    MEM32(ebp + (-0x2C)) = ecx; /* 0x120E93E7: mov dword ptr [ebp - 0x2c], ecx */
    /* test ecx, ecx */ /* 0x120E93EA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E940C; /* 0x120E93EC: je 0x120e940c */
L_120E93EE:
    PUSH32(esp, 4); /* 0x120E93EE: push 4 */
    ebx = edx; /* 0x120E93F0: mov ebx, edx */
    edi = eax; /* 0x120E93F2: mov edi, eax */
    edx = POP32_VAL(esp); /* 0x120E93F4: pop edx */
L_120E93F5:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edx; /* 0x120E93F5: sub ebx, edx */
    _flag_k = FK_CMP;
    eax = MEM32(ebx); /* 0x120E93F7: mov eax, dword ptr [ebx] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - edx; /* 0x120E93F9: sub edi, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x120E93FB: dec ecx */
    _flag_k = FK_DEC;
    MEM32(edi) = eax; /* 0x120E93FC: mov dword ptr [edi], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E93F5; /* 0x120E93FE: jne 0x120e93f5 */
L_120E9400:
    ecx = MEM32(ebp + (-0x1C)); /* 0x120E9400: mov ecx, dword ptr [ebp - 0x1c] */
    edi = MEM32(ebp + (-0xC)); /* 0x120E9403: mov edi, dword ptr [ebp - 0xc] */
    ebx = MEM32(ebp + 0x10); /* 0x120E9406: mov ebx, dword ptr [ebp + 0x10] */
    edx = MEM32(ebp + (-0x8)); /* 0x120E9409: mov edx, dword ptr [ebp - 8] */
L_120E940C:
    /* test esi, esi */ /* 0x120E940C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E939C; /* 0x120E940E: jne 0x120e939c */
L_120E9410:
    edx = MEM32(ebp + 0x14); /* 0x120E9410: mov edx, dword ptr [ebp + 0x14] */
    ebx = MEM32(ebp + (-0x4)); /* 0x120E9413: mov ebx, dword ptr [ebp - 4] */
L_120E9416:
    edi = ebx; /* 0x120E9416: mov edi, ebx */
L_120E9418:
    esi = MEM32(ebp + 0x8); /* 0x120E9418: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x2C); /* 0x120E941B: mov eax, dword ptr [esi + 0x2c] */
    ecx = (uint32_t)MEM16(esi + 0xC); /* 0x120E941E: movzx ecx, word ptr [esi + 0xc] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx); /* 0x120E9422: imul eax, edx */
    /* cmp eax, ecx */ /* 0x120E9425: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E942B; /* 0x120E9427: jbe 0x120e942b */
L_120E9429:
    eax = ecx; /* 0x120E9429: mov eax, ecx */
L_120E942B:
    ecx = MEM32(esi + 0x1C); /* 0x120E942B: mov ecx, dword ptr [esi + 0x1c] */
    /* test ecx, ecx */ /* 0x120E942E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E9439; /* 0x120E9430: jne 0x120e9439 */
L_120E9432:
    eax = 0x80004005u; /* 0x120E9432: mov eax, 0x80004005 */
    goto L_120E944F; /* 0x120E9437: jmp 0x120e944f */
L_120E9439:
    PUSH32(esp, eax); /* 0x120E9439: push eax */
    eax = (uint32_t)MEM16(esi + 0xA); /* 0x120E943A: movzx eax, word ptr [esi + 0xa] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x18); /* 0x120E943E: add eax, dword ptr [ebp + 0x18] */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x120E9441: push ebx */
    PUSH32(esp, edi); /* 0x120E9442: push edi */
    PUSH32(esp, eax); /* 0x120E9443: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120E9444: push dword ptr [ebp + 0xc] */
    RECOMP_ICALL(ecx); /* 0x120E9447: call ecx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120E9449: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E944F; /* 0x120E944B: js 0x120e944f */
L_120E944D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E944D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E944F:
    edi = POP32_VAL(esp); /* 0x120E944F: pop edi */
    esi = POP32_VAL(esp); /* 0x120E9450: pop esi */
    ebx = POP32_VAL(esp); /* 0x120E9451: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E9452: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x120E9453: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_120E945B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E945Bu);

L_120E945B:
    edi = edi; /* 0x120E945B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E945D: push ebp */
    ebp = esp; /* 0x120E945E: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x120E9460: sub esp, 0x1c */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x8); /* 0x120E9463: mov ecx, dword ptr [ebp + 8] */
    edx = MEM32(ecx + 0x20); /* 0x120E9466: mov edx, dword ptr [ecx + 0x20] */
    PUSH32(esp, ebx); /* 0x120E9469: push ebx */
    ebx = MEM32(ecx + 0x18); /* 0x120E946A: mov ebx, dword ptr [ecx + 0x18] */
    eax = (uint32_t)MEM16(ebx); /* 0x120E946D: movzx eax, word ptr [ebx] */
    PUSH32(esp, esi); /* 0x120E9470: push esi */
    PUSH32(esp, edi); /* 0x120E9471: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120E9472: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x120E9474: sub eax, edi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = ebx; /* 0x120E9476: mov dword ptr [ebp - 8], ebx */
    MEM32(ebp + (-0x4)) = edx; /* 0x120E9479: mov dword ptr [ebp - 4], edx */
    MEM32(ebp + (-0x14)) = 3; /* 0x120E947C: mov dword ptr [ebp - 0x14], 3 */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_120E9720; /* 0x120E9483: je 0x120e9720 */
L_120E9489:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E9489: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120E96A7; /* 0x120E948A: je 0x120e96a7 */
L_120E9490:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E9490: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120E9615; /* 0x120E9491: je 0x120e9615 */
L_120E9497:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E9497: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120E9586; /* 0x120E9498: je 0x120e9586 */
L_120E949E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E949E: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E949F: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120E94AC; /* 0x120E94A0: je 0x120e94ac */
L_120E94A2:
    eax = 0x80004001u; /* 0x120E94A2: mov eax, 0x80004001 */
    goto L_120E9924; /* 0x120E94A7: jmp 0x120e9924 */
L_120E94AC:
    eax = MEM32(ebp + 0x14); /* 0x120E94AC: mov eax, dword ptr [ebp + 0x14] */
    ecx = MEM32(ecx + 0x34); /* 0x120E94AF: mov ecx, dword ptr [ecx + 0x34] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x120E94B2: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x120E94B2: shl eax, 4 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120E94B5: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x120E94B7: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    esi = eax; /* 0x120E94B9: mov esi, eax */
    eax = (uint32_t)MEM16(ebx + 0x8); /* 0x120E94BB: movzx eax, word ptr [ebx + 8] */
    MEM32(ebp + 0x14) = esi; /* 0x120E94BF: mov dword ptr [ebp + 0x14], esi */
    /* cmp esi, eax */ /* 0x120E94C2: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E94CB; /* 0x120E94C4: jbe 0x120e94cb */
L_120E94C6:
    esi = eax; /* 0x120E94C6: mov esi, eax */
    MEM32(ebp + 0x14) = eax; /* 0x120E94C8: mov dword ptr [ebp + 0x14], eax */
L_120E94CB:
    edx = MEM32(ebp + (-0x4)); /* 0x120E94CB: mov edx, dword ptr [ebp - 4] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)esi); /* 0x120E94CE: imul ecx, esi */
    MEM32(ebp + (-0x18)) = ecx; /* 0x120E94D1: mov dword ptr [ebp - 0x18], ecx */
    /* test ecx, ecx */ /* 0x120E94D4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E9517; /* 0x120E94D6: je 0x120e9517 */
L_120E94D8:
    PUSH32(esp, 3); /* 0x120E94D8: push 3 */
    eax = POP32_VAL(esp); /* 0x120E94DA: pop eax */
    MEM32(ebp + (-0x14)) = eax; /* 0x120E94DB: mov dword ptr [ebp - 0x14], eax */
    ebx = ecx; /* 0x120E94DE: mov ebx, ecx */
    esi = edx; /* 0x120E94E0: mov esi, edx */
L_120E94E2:
    edx = edi; /* 0x120E94E2: mov edx, edi */
    if (2u) _cf = (((edx) >> 1) & 1u); /* 0x120E94E4: shr edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 2u; /* 0x120E94E4: shr edx, 2 */
    ecx = edx; /* 0x120E94E7: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x120E94E9: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edi; /* 0x120E94EB: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    eax = eax & MEM32(ebp + (-0x14)); /* 0x120E94ED: and eax, dword ptr [ebp - 0x14] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (2u) _cf = (((edx) >> 1) & 1u); /* 0x120E94F0: shr edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 2u; /* 0x120E94F0: shr edx, 2 */
    ecx = eax + ecx * 4; /* 0x120E94F3: lea ecx, [eax + ecx*4] */
    eax = MEM32(ebp + 0x10); /* 0x120E94F6: mov eax, dword ptr [ebp + 0x10] */
    eax = MEM32(eax + edx * 4); /* 0x120E94F9: mov eax, dword ptr [eax + edx*4] */
    eax = MEM32(eax + ecx * 4); /* 0x120E94FC: mov eax, dword ptr [eax + ecx*4] */
    MEM32(esi) = eax; /* 0x120E94FF: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x120E9501: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120E9504: inc edi */
    _flag_k = FK_INC;
    PUSH32(esp, 3); /* 0x120E9505: push 3 */
    eax = POP32_VAL(esp); /* 0x120E9507: pop eax */
    /* cmp edi, ebx */ /* 0x120E9508: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E94E2; /* 0x120E950A: jb 0x120e94e2 */
L_120E950C:
    ebx = MEM32(ebp + (-0x8)); /* 0x120E950C: mov ebx, dword ptr [ebp - 8] */
    esi = MEM32(ebp + 0x14); /* 0x120E950F: mov esi, dword ptr [ebp + 0x14] */
    edx = MEM32(ebp + (-0x4)); /* 0x120E9512: mov edx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120E9515: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E9517:
    eax = edi; /* 0x120E9517: mov eax, edi */
    MEM32(ebp + (-0x14)) = eax; /* 0x120E9519: mov dword ptr [ebp - 0x14], eax */
    /* test esi, esi */ /* 0x120E951C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E9922; /* 0x120E951E: je 0x120e9922 */
L_120E9524:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120E9524: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(esi), MEM16(ebx + 0xA) */ /* 0x120E9526: cmp si, word ptr [ebx + 0xa] */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(MEM16(ebx + 0xA)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    esi = MEM32(ebp + 0x14); /* 0x120E952A: mov esi, dword ptr [ebp + 0x14] */
    ecx = edi; /* 0x120E952D: mov ecx, edi */
    MEM32(ebp + 0x10) = ecx; /* 0x120E952F: mov dword ptr [ebp + 0x10], ecx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_120E9579; /* 0x120E9532: jae 0x120e9579 */
L_120E9534:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120E9534: push dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + 0x8); /* 0x120E9537: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x38); /* 0x120E953A: mov eax, dword ptr [eax + 0x38] */
    eax = MEM32(eax + ecx * 4); /* 0x120E953D: mov eax, dword ptr [eax + ecx*4] */
    PUSH32(esp, MEM32(eax + 0x30)); /* 0x120E9540: push dword ptr [eax + 0x30] */
    MEM32(ebp + (-0x18)) = eax; /* 0x120E9543: mov dword ptr [ebp - 0x18], eax */
    PUSH32(esp, edx); /* 0x120E9546: push edx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120E9547: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x120E954A: push eax */
    RECOMP_CALL(sub_120E874C); /* 0x120E954B: call 0x120e874c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120E9550: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E9924; /* 0x120E9552: js 0x120e9924 */
L_120E9558:
    eax = MEM32(ebp + (-0x18)); /* 0x120E9558: mov eax, dword ptr [ebp - 0x18] */
    eax = MEM32(eax + 0x30); /* 0x120E955B: mov eax, dword ptr [eax + 0x30] */
    edx = MEM32(ebp + (-0x4)); /* 0x120E955E: mov edx, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + 0x10); /* 0x120E9561: mov ecx, dword ptr [ebp + 0x10] */
    edx = edx + eax * 4; /* 0x120E9564: lea edx, [edx + eax*4] */
    eax = (uint32_t)MEM16(ebx + 0xA); /* 0x120E9567: movzx eax, word ptr [ebx + 0xa] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120E956B: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = edx; /* 0x120E956C: mov dword ptr [ebp - 4], edx */
    MEM32(ebp + 0x10) = ecx; /* 0x120E956F: mov dword ptr [ebp + 0x10], ecx */
    /* cmp ecx, eax */ /* 0x120E9572: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E9534; /* 0x120E9574: jb 0x120e9534 */
L_120E9576:
    eax = MEM32(ebp + (-0x14)); /* 0x120E9576: mov eax, dword ptr [ebp - 0x14] */
L_120E9579:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120E9579: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x14)) = eax; /* 0x120E957A: mov dword ptr [ebp - 0x14], eax */
    /* cmp eax, esi */ /* 0x120E957D: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E9524; /* 0x120E957F: jb 0x120e9524 */
L_120E9581:
    goto L_120E9922; /* 0x120E9581: jmp 0x120e9922 */
L_120E9586:
    eax = (uint32_t)MEM16(ebx + 0x8); /* 0x120E9586: movzx eax, word ptr [ebx + 8] */
    esi = MEM32(ebp + 0x14); /* 0x120E958A: mov esi, dword ptr [ebp + 0x14] */
    MEM32(ebp + 0x14) = esi; /* 0x120E958D: mov dword ptr [ebp + 0x14], esi */
    /* cmp esi, eax */ /* 0x120E9590: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E9599; /* 0x120E9592: jbe 0x120e9599 */
L_120E9594:
    esi = eax; /* 0x120E9594: mov esi, eax */
    MEM32(ebp + 0x14) = eax; /* 0x120E9596: mov dword ptr [ebp + 0x14], eax */
L_120E9599:
    MEM32(ebp + (-0xC)) = edx; /* 0x120E9599: mov dword ptr [ebp - 0xc], edx */
    ecx = edi; /* 0x120E959C: mov ecx, edi */
    /* test esi, esi */ /* 0x120E959E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E9773; /* 0x120E95A0: je 0x120e9773 */
L_120E95A6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E95A6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = edi; /* 0x120E95A8: mov edx, edi */
    /* cmp LO16(eax), MEM16(ebx + 0x6) */ /* 0x120E95AA: cmp ax, word ptr [ebx + 6] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebx + 0x6)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_120E960B; /* 0x120E95AE: jae 0x120e960b */
L_120E95B0:
    esi = (uint32_t)MEM16(ebx + 0x4); /* 0x120E95B0: movzx esi, word ptr [ebx + 4] */
L_120E95B4:
    eax = edi; /* 0x120E95B4: mov eax, edi */
    MEM32(ebp + (-0x10)) = eax; /* 0x120E95B6: mov dword ptr [ebp - 0x10], eax */
    /* test esi, esi */ /* 0x120E95B9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E95FF; /* 0x120E95BB: je 0x120e95ff */
L_120E95BD:
    esi = edx; /* 0x120E95BD: mov esi, edx */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x120E95BF: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x120E95BF: shl esi, 2 */
    goto L_120E95C7; /* 0x120E95C2: jmp 0x120e95c7 */
L_120E95C4:
    esi = MEM32(ebp + (-0x18)); /* 0x120E95C4: mov esi, dword ptr [ebp - 0x18] */
L_120E95C7:
    /* cmp eax, 4 */ /* 0x120E95C7: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120E95DC; /* 0x120E95CA: ja 0x120e95dc */
L_120E95CC:
    /* cmp edx, 4 */ /* 0x120E95CC: cmp edx, 4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120E95DC; /* 0x120E95CF: ja 0x120e95dc */
L_120E95D1:
    eax = MEM32(ebp + 0x10); /* 0x120E95D1: mov eax, dword ptr [ebp + 0x10] */
    eax = MEM32(eax + ecx * 4); /* 0x120E95D4: mov eax, dword ptr [eax + ecx*4] */
    eax = MEM32(esi + eax); /* 0x120E95D7: mov eax, dword ptr [esi + eax] */
    goto L_120E95DE; /* 0x120E95DA: jmp 0x120e95de */
L_120E95DC:
    eax = edi; /* 0x120E95DC: mov eax, edi */
L_120E95DE:
    ebx = MEM32(ebp + (-0xC)); /* 0x120E95DE: mov ebx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 4; /* 0x120E95E1: add dword ptr [ebp - 0xc], 4 */
    _flag_k = FK_ADD;
    MEM32(ebx) = eax; /* 0x120E95E5: mov dword ptr [ebx], eax */
    ebx = MEM32(ebp + (-0x8)); /* 0x120E95E7: mov ebx, dword ptr [ebp - 8] */
    eax = MEM32(ebp + (-0x10)); /* 0x120E95EA: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x120E95ED: add esi, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = esi; /* 0x120E95F0: mov dword ptr [ebp - 0x18], esi */
    esi = (uint32_t)MEM16(ebx + 0x4); /* 0x120E95F3: movzx esi, word ptr [ebx + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120E95F7: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x10)) = eax; /* 0x120E95F8: mov dword ptr [ebp - 0x10], eax */
    /* cmp eax, esi */ /* 0x120E95FB: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E95C4; /* 0x120E95FD: jb 0x120e95c4 */
L_120E95FF:
    eax = (uint32_t)MEM16(ebx + 0x6); /* 0x120E95FF: movzx eax, word ptr [ebx + 6] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120E9603: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, eax */ /* 0x120E9604: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E95B4; /* 0x120E9606: jb 0x120e95b4 */
L_120E9608:
    esi = MEM32(ebp + 0x14); /* 0x120E9608: mov esi, dword ptr [ebp + 0x14] */
L_120E960B:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120E960B: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, esi */ /* 0x120E960C: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E95A6; /* 0x120E960E: jb 0x120e95a6 */
L_120E9610:
    goto L_120E9770; /* 0x120E9610: jmp 0x120e9770 */
L_120E9615:
    eax = (uint32_t)MEM16(ebx + 0x8); /* 0x120E9615: movzx eax, word ptr [ebx + 8] */
    esi = MEM32(ebp + 0x14); /* 0x120E9619: mov esi, dword ptr [ebp + 0x14] */
    MEM32(ebp + 0x14) = esi; /* 0x120E961C: mov dword ptr [ebp + 0x14], esi */
    /* cmp esi, eax */ /* 0x120E961F: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E9628; /* 0x120E9621: jbe 0x120e9628 */
L_120E9623:
    esi = eax; /* 0x120E9623: mov esi, eax */
    MEM32(ebp + 0x14) = eax; /* 0x120E9625: mov dword ptr [ebp + 0x14], eax */
L_120E9628:
    eax = edi; /* 0x120E9628: mov eax, edi */
    MEM32(ebp + (-0xC)) = edx; /* 0x120E962A: mov dword ptr [ebp - 0xc], edx */
    MEM32(ebp + (-0x10)) = eax; /* 0x120E962D: mov dword ptr [ebp - 0x10], eax */
    /* test esi, esi */ /* 0x120E9630: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E9776; /* 0x120E9632: je 0x120e9776 */
L_120E9638:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120E9638: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi; /* 0x120E963A: mov ecx, edi */
    MEM32(ebp + (-0x18)) = ecx; /* 0x120E963C: mov dword ptr [ebp - 0x18], ecx */
    /* cmp LO16(edx), MEM16(ebx + 0x4) */ /* 0x120E963F: cmp dx, word ptr [ebx + 4] */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(MEM16(ebx + 0x4)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_120E969A; /* 0x120E9643: jae 0x120e969a */
L_120E9645:
    eax = (uint32_t)MEM16(ebx + 0x6); /* 0x120E9645: movzx eax, word ptr [ebx + 6] */
    esi = MEM32(ebp + (-0x10)); /* 0x120E9649: mov esi, dword ptr [ebp - 0x10] */
L_120E964C:
    edx = edi; /* 0x120E964C: mov edx, edi */
    /* test eax, eax */ /* 0x120E964E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E9684; /* 0x120E9650: je 0x120e9684 */
L_120E9652:
    /* cmp ecx, 4 */ /* 0x120E9652: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120E966D; /* 0x120E9655: ja 0x120e966d */
L_120E9657:
    /* cmp edx, 4 */ /* 0x120E9657: cmp edx, 4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120E966D; /* 0x120E965A: ja 0x120e966d */
L_120E965C:
    eax = MEM32(ebp + 0x10); /* 0x120E965C: mov eax, dword ptr [ebp + 0x10] */
    eax = MEM32(eax + esi * 4); /* 0x120E965F: mov eax, dword ptr [eax + esi*4] */
    ecx = edx + ecx * 4; /* 0x120E9662: lea ecx, [edx + ecx*4] */
    eax = MEM32(eax + ecx * 4); /* 0x120E9665: mov eax, dword ptr [eax + ecx*4] */
    ecx = MEM32(ebp + (-0x18)); /* 0x120E9668: mov ecx, dword ptr [ebp - 0x18] */
    goto L_120E966F; /* 0x120E966B: jmp 0x120e966f */
L_120E966D:
    eax = edi; /* 0x120E966D: mov eax, edi */
L_120E966F:
    ebx = MEM32(ebp + (-0xC)); /* 0x120E966F: mov ebx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 4; /* 0x120E9672: add dword ptr [ebp - 0xc], 4 */
    _flag_k = FK_ADD;
    MEM32(ebx) = eax; /* 0x120E9676: mov dword ptr [ebx], eax */
    ebx = MEM32(ebp + (-0x8)); /* 0x120E9678: mov ebx, dword ptr [ebp - 8] */
    eax = (uint32_t)MEM16(ebx + 0x6); /* 0x120E967B: movzx eax, word ptr [ebx + 6] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120E967F: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, eax */ /* 0x120E9680: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E9652; /* 0x120E9682: jb 0x120e9652 */
L_120E9684:
    eax = (uint32_t)MEM16(ebx + 0x4); /* 0x120E9684: movzx eax, word ptr [ebx + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120E9688: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, eax */ /* 0x120E9689: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = (uint32_t)MEM16(ebx + 0x6); /* 0x120E968B: movzx eax, word ptr [ebx + 6] */
    MEM32(ebp + (-0x18)) = ecx; /* 0x120E968F: mov dword ptr [ebp - 0x18], ecx */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E964C; /* 0x120E9692: jb 0x120e964c */
L_120E9694:
    esi = MEM32(ebp + 0x14); /* 0x120E9694: mov esi, dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + (-0x10)); /* 0x120E9697: mov eax, dword ptr [ebp - 0x10] */
L_120E969A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120E969A: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x10)) = eax; /* 0x120E969B: mov dword ptr [ebp - 0x10], eax */
    /* cmp eax, esi */ /* 0x120E969E: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E9638; /* 0x120E96A0: jb 0x120e9638 */
L_120E96A2:
    goto L_120E9770; /* 0x120E96A2: jmp 0x120e9770 */
L_120E96A7:
    esi = MEM32(ebp + 0x14); /* 0x120E96A7: mov esi, dword ptr [ebp + 0x14] */
    eax = (uint32_t)MEM16(ebx + 0x8); /* 0x120E96AA: movzx eax, word ptr [ebx + 8] */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x120E96AE: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x120E96AE: shl esi, 2 */
    MEM32(ebp + 0x14) = esi; /* 0x120E96B1: mov dword ptr [ebp + 0x14], esi */
    /* cmp esi, eax */ /* 0x120E96B4: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E96BD; /* 0x120E96B6: jbe 0x120e96bd */
L_120E96B8:
    esi = eax; /* 0x120E96B8: mov esi, eax */
    MEM32(ebp + 0x14) = eax; /* 0x120E96BA: mov dword ptr [ebp + 0x14], eax */
L_120E96BD:
    eax = edi; /* 0x120E96BD: mov eax, edi */
    MEM32(ebp + (-0x18)) = edx; /* 0x120E96BF: mov dword ptr [ebp - 0x18], edx */
    MEM32(ebp + (-0x10)) = eax; /* 0x120E96C2: mov dword ptr [ebp - 0x10], eax */
    /* test esi, esi */ /* 0x120E96C5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E9776; /* 0x120E96C7: je 0x120e9776 */
L_120E96CD:
    ecx = (uint32_t)MEM16(ebx + 0x6); /* 0x120E96CD: movzx ecx, word ptr [ebx + 6] */
L_120E96D1:
    edx = edi; /* 0x120E96D1: mov edx, edi */
    /* test ecx, ecx */ /* 0x120E96D3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E9716; /* 0x120E96D5: je 0x120e9716 */
L_120E96D7:
    esi = MEM32(ebp + (-0x10)); /* 0x120E96D7: mov esi, dword ptr [ebp - 0x10] */
L_120E96DA:
    /* cmp edx, 4 */ /* 0x120E96DA: cmp edx, 4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E96E3; /* 0x120E96DD: jbe 0x120e96e3 */
L_120E96DF:
    eax = edi; /* 0x120E96DF: mov eax, edi */
    goto L_120E96FC; /* 0x120E96E1: jmp 0x120e96fc */
L_120E96E3:
    ebx = MEM32(ebp + 0x10); /* 0x120E96E3: mov ebx, dword ptr [ebp + 0x10] */
    eax = esi; /* 0x120E96E6: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x120E96E8: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edx + eax * 4; /* 0x120E96EB: lea ecx, [edx + eax*4] */
    eax = esi; /* 0x120E96EE: mov eax, esi */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x120E96F0: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x120E96F0: shr eax, 2 */
    eax = MEM32(ebx + eax * 4); /* 0x120E96F3: mov eax, dword ptr [ebx + eax*4] */
    eax = MEM32(eax + ecx * 4); /* 0x120E96F6: mov eax, dword ptr [eax + ecx*4] */
    ebx = MEM32(ebp + (-0x8)); /* 0x120E96F9: mov ebx, dword ptr [ebp - 8] */
L_120E96FC:
    ecx = MEM32(ebp + (-0x18)); /* 0x120E96FC: mov ecx, dword ptr [ebp - 0x18] */
    MEM32(ecx) = eax; /* 0x120E96FF: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x120E9701: add ecx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = ecx; /* 0x120E9704: mov dword ptr [ebp - 0x18], ecx */
    ecx = (uint32_t)MEM16(ebx + 0x6); /* 0x120E9707: movzx ecx, word ptr [ebx + 6] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120E970B: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, ecx */ /* 0x120E970C: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E96DA; /* 0x120E970E: jb 0x120e96da */
L_120E9710:
    esi = MEM32(ebp + 0x14); /* 0x120E9710: mov esi, dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + (-0x10)); /* 0x120E9713: mov eax, dword ptr [ebp - 0x10] */
L_120E9716:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120E9716: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x10)) = eax; /* 0x120E9717: mov dword ptr [ebp - 0x10], eax */
    /* cmp eax, esi */ /* 0x120E971A: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E96D1; /* 0x120E971C: jb 0x120e96d1 */
L_120E971E:
    goto L_120E9770; /* 0x120E971E: jmp 0x120e9770 */
L_120E9720:
    esi = MEM32(ebp + 0x14); /* 0x120E9720: mov esi, dword ptr [ebp + 0x14] */
    eax = (uint32_t)MEM16(ebx + 0x8); /* 0x120E9723: movzx eax, word ptr [ebx + 8] */
    if (4u) _cf = (((esi) >> 28) & 1u); /* 0x120E9727: shl esi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((esi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 4u; /* 0x120E9727: shl esi, 4 */
    MEM32(ebp + 0x14) = esi; /* 0x120E972A: mov dword ptr [ebp + 0x14], esi */
    /* cmp esi, eax */ /* 0x120E972D: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E9736; /* 0x120E972F: jbe 0x120e9736 */
L_120E9731:
    esi = eax; /* 0x120E9731: mov esi, eax */
    MEM32(ebp + 0x14) = eax; /* 0x120E9733: mov dword ptr [ebp + 0x14], eax */
L_120E9736:
    MEM32(ebp + (-0x18)) = edx; /* 0x120E9736: mov dword ptr [ebp - 0x18], edx */
    /* test esi, esi */ /* 0x120E9739: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E9776; /* 0x120E973B: je 0x120e9776 */
L_120E973D:
    ebx = edi; /* 0x120E973D: mov ebx, edi */
L_120E973F:
    edx = ebx; /* 0x120E973F: mov edx, ebx */
    if (2u) _cf = (((edx) >> 1) & 1u); /* 0x120E9741: shr edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 2u; /* 0x120E9741: shr edx, 2 */
    ecx = edx; /* 0x120E9744: mov ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x120E9746: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebx; /* 0x120E9749: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x120E974B: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax + ecx * 4; /* 0x120E974E: lea ecx, [eax + ecx*4] */
    eax = MEM32(ebp + 0x10); /* 0x120E9751: mov eax, dword ptr [ebp + 0x10] */
    if (2u) _cf = (((edx) >> 1) & 1u); /* 0x120E9754: shr edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 2u; /* 0x120E9754: shr edx, 2 */
    eax = MEM32(eax + edx * 4); /* 0x120E9757: mov eax, dword ptr [eax + edx*4] */
    eax = MEM32(eax + ecx * 4); /* 0x120E975A: mov eax, dword ptr [eax + ecx*4] */
    ecx = MEM32(ebp + (-0x18)); /* 0x120E975D: mov ecx, dword ptr [ebp - 0x18] */
    MEM32(ecx) = eax; /* 0x120E9760: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x120E9762: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x120E9765: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x18)) = ecx; /* 0x120E9766: mov dword ptr [ebp - 0x18], ecx */
    /* cmp ebx, esi */ /* 0x120E9769: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E973F; /* 0x120E976B: jb 0x120e973f */
L_120E976D:
    ebx = MEM32(ebp + (-0x8)); /* 0x120E976D: mov ebx, dword ptr [ebp - 8] */
L_120E9770:
    edx = MEM32(ebp + (-0x4)); /* 0x120E9770: mov edx, dword ptr [ebp - 4] */
L_120E9773:
    ecx = MEM32(ebp + 0x8); /* 0x120E9773: mov ecx, dword ptr [ebp + 8] */
L_120E9776:
    eax = (uint32_t)MEM16(ebx + 0x2); /* 0x120E9776: movzx eax, word ptr [ebx + 2] */
    MEM32(ebp + (-0x10)) = 1; /* 0x120E977A: mov dword ptr [ebp - 0x10], 1 */
    /* cmp MEM16(ebp + (-0x14)), LO16(eax) */ /* 0x120E9781: cmp word ptr [ebp - 0x14], ax */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x14))) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E97F8; /* 0x120E9785: je 0x120e97f8 */
L_120E9787:
    ecx = MEM32(ecx + 0x34); /* 0x120E9787: mov ecx, dword ptr [ecx + 0x34] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)esi); /* 0x120E978A: imul ecx, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E978D: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120E97CA; /* 0x120E978E: je 0x120e97ca */
L_120E9790:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E9790: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E97F8; /* 0x120E9791: jne 0x120e97f8 */
L_120E9793:
    MEM16(ebp + 0x10) = _fpu_cw; /* 0x120E9793: fnstcw word ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x10); /* 0x120E9796: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)((eax | 0xC00u)); _flag_b = (uint32_t)((eax | 0xC00u));
    eax = eax | 0xC00u; /* 0x120E9799: or eax, 0xc00 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x120E979E: mov dword ptr [ebp - 0x14], eax */
    _fpu_cw = MEM16(ebp + (-0x14)); /* 0x120E97A1: fldcw word ptr [ebp - 0x14] */
    eax = MEM32(ebp + 0x10); /* 0x120E97A4: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x8)) = eax; /* 0x120E97A7: mov dword ptr [ebp - 8], eax */
    /* test ecx, ecx */ /* 0x120E97AA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E97C5; /* 0x120E97AC: je 0x120e97c5 */
L_120E97AE:
    fp_push(*(float*)&MEM32(edx + edi * 4)); /* 0x120E97AE: fld dword ptr [edx + edi*4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x120E97B1: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x120E97B4: fld dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x18)) = (uint32_t)(int32_t)fp_to_int(fp_pop()); /* 0x120E97B7: fistp dword ptr [ebp - 0x18] */
    eax = MEM32(ebp + (-0x18)); /* 0x120E97BA: mov eax, dword ptr [ebp - 0x18] */
    MEM32(edx + edi * 4) = eax; /* 0x120E97BD: mov dword ptr [edx + edi*4], eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120E97C0: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, ecx */ /* 0x120E97C1: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E97AE; /* 0x120E97C3: jb 0x120e97ae */
L_120E97C5:
    _fpu_cw = MEM16(ebp + (-0x8)); /* 0x120E97C5: fldcw word ptr [ebp - 8] */
    goto L_120E97F8; /* 0x120E97C8: jmp 0x120e97f8 */
L_120E97CA:
    edx = edi; /* 0x120E97CA: mov edx, edi */
    /* test ecx, ecx */ /* 0x120E97CC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E97F8; /* 0x120E97CE: je 0x120e97f8 */
L_120E97D0:
    fp_push(0.0); /* 0x120E97D0: fldz  */
    esi = MEM32(ebp + (-0x4)); /* 0x120E97D2: mov esi, dword ptr [ebp - 4] */
    ebx = MEM32(ebp + (-0x10)); /* 0x120E97D5: mov ebx, dword ptr [ebp - 0x10] */
L_120E97D8:
    fp_push(*(float*)&MEM32(esi + edx * 4)); /* 0x120E97D8: fld dword ptr [esi + edx*4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120E97DB: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E97DD: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x120E97DF: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = ebx; /* 0x120E97E2: mov eax, ebx */
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120E97E8; /* 0x120E97E4: jp 0x120e97e8 */
L_120E97E6:
    eax = edi; /* 0x120E97E6: mov eax, edi */
L_120E97E8:
    MEM32(esi + edx * 4) = eax; /* 0x120E97E8: mov dword ptr [esi + edx*4], eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120E97EB: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, ecx */ /* 0x120E97EC: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E97D8; /* 0x120E97EE: jb 0x120e97d8 */
L_120E97F0:
    esi = MEM32(ebp + 0x14); /* 0x120E97F0: mov esi, dword ptr [ebp + 0x14] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E97F3: fstp st(0) */
    ebx = MEM32(ebp + (-0x8)); /* 0x120E97F5: mov ebx, dword ptr [ebp - 8] */
L_120E97F8:
    eax = MEM32(ebp + 0x8); /* 0x120E97F8: mov eax, dword ptr [ebp + 8] */
    eax = (uint32_t)MEM16(eax + 0x8); /* 0x120E97FB: movzx eax, word ptr [eax + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120E97FF: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(ecx), LO16(eax) */ /* 0x120E9801: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E98EA; /* 0x120E9804: je 0x120e98ea */
L_120E980A:
    /* cmp MEM16(ebx), 3 */ /* 0x120E980A: cmp word ptr [ebx], 3 */
    _flag_a = (uint32_t)(MEM16(ebx)) << 16; _flag_b = (uint32_t)(3) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E981A; /* 0x120E980E: je 0x120e981a */
L_120E9810:
    ecx = (uint32_t)MEM16(ebx + 0x6); /* 0x120E9810: movzx ecx, word ptr [ebx + 6] */
    edx = (uint32_t)MEM16(ebx + 0x4); /* 0x120E9814: movzx edx, word ptr [ebx + 4] */
    goto L_120E9822; /* 0x120E9818: jmp 0x120e9822 */
L_120E981A:
    ecx = (uint32_t)MEM16(ebx + 0x4); /* 0x120E981A: movzx ecx, word ptr [ebx + 4] */
    edx = (uint32_t)MEM16(ebx + 0x6); /* 0x120E981E: movzx edx, word ptr [ebx + 6] */
L_120E9822:
    /* test LO8(ecx), 3 */ /* 0x120E9822: test cl, 3 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E98EA; /* 0x120E9825: je 0x120e98ea */
L_120E982B:
    /* cmp MEM16(ebp + (-0x10)), LO16(eax) */ /* 0x120E982B: cmp word ptr [ebp - 0x10], ax */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x10))) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    eax = 0x12008A44u; /* 0x120E982F: mov eax, 0x12008a44 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E983B; /* 0x120E9834: je 0x120e983b */
L_120E9836:
    eax = 0x12008A34u; /* 0x120E9836: mov eax, 0x12008a34 */
L_120E983B:
    edx = (uint32_t)((int32_t)edx * (int32_t)esi); /* 0x120E983B: imul edx, esi */
    edi = ecx + 0x3; /* 0x120E983E: lea edi, [ecx + 3] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFCu);
    edi = edi & 0xFFFFFFFCu; /* 0x120E9841: and edi, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x120E9844: mov dword ptr [ebp - 0x14], eax */
    MEM32(ebp + (-0x10)) = edi; /* 0x120E9847: mov dword ptr [ebp - 0x10], edi */
    /* test edx, edx */ /* 0x120E984A: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E98EA; /* 0x120E984C: je 0x120e98ea */
L_120E9852:
    eax = ecx; /* 0x120E9852: mov eax, ecx */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x120E9854: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x120E9854: shl eax, 2 */
    MEM32(ebp + (-0x8)) = eax; /* 0x120E9857: mov dword ptr [ebp - 8], eax */
    esi = edx * 4 + 0x4; /* 0x120E985A: lea esi, [edx*4 + 4] */
    ebx = esi; /* 0x120E9861: mov ebx, esi */
    esi = (uint32_t)((int32_t)esi * (int32_t)edi); /* 0x120E9863: imul esi, edi */
    eax = edi; /* 0x120E9866: mov eax, edi */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx); /* 0x120E9868: imul ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + (-0x4)); /* 0x120E986B: add ebx, dword ptr [ebp - 4] */
    _flag_k = FK_ADD;
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x120E986E: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x120E986E: shl eax, 2 */
    MEM32(ebp + (-0x18)) = eax; /* 0x120E9871: mov dword ptr [ebp - 0x18], eax */
    eax = edx; /* 0x120E9874: mov eax, edx */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x120E9876: imul eax, edi */
    MEM32(ebp + 0x10) = ebx; /* 0x120E9879: mov dword ptr [ebp + 0x10], ebx */
    ebx = MEM32(ebp + (-0x4)); /* 0x120E987C: mov ebx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x120E987F: add eax, ecx */
    _flag_k = FK_ADD;
    eax = ebx + eax * 4; /* 0x120E9881: lea eax, [ebx + eax*4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ebx; /* 0x120E9884: add esi, ebx */
    _flag_k = FK_ADD;
    ebx = MEM32(ebp + 0x10); /* 0x120E9886: mov ebx, dword ptr [ebp + 0x10] */
L_120E9889:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - MEM32(ebp + (-0x8)); /* 0x120E9889: sub ebx, dword ptr [ebp - 8] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x18)); /* 0x120E988C: sub eax, dword ptr [ebp - 0x18] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebp + (-0x18)); /* 0x120E988F: sub esi, dword ptr [ebp - 0x18] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x120E9892: dec edx */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x10) = ebx; /* 0x120E9893: mov dword ptr [ebp + 0x10], ebx */
    MEM32(ebp + (-0xC)) = eax; /* 0x120E9896: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x120E9899: mov dword ptr [ebp - 0x1c], esi */
    ebx = edi; /* 0x120E989C: mov ebx, edi */
    /* cmp edi, ecx */ /* 0x120E989E: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E98BF; /* 0x120E98A0: jbe 0x120e98bf */
L_120E98A2:
    edi = esi; /* 0x120E98A2: mov edi, esi */
    esi = MEM32(ebp + (-0x14)); /* 0x120E98A4: mov esi, dword ptr [ebp - 0x14] */
L_120E98A7:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x120E98A7: dec ebx */
    _flag_k = FK_DEC;
    eax = ebx; /* 0x120E98A8: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x120E98AA: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi + eax * 4); /* 0x120E98AD: mov eax, dword ptr [esi + eax*4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 4; /* 0x120E98B0: sub edi, 4 */
    _flag_k = FK_CMP;
    MEM32(edi) = eax; /* 0x120E98B3: mov dword ptr [edi], eax */
    /* cmp ebx, ecx */ /* 0x120E98B5: cmp ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_120E98A7; /* 0x120E98B7: ja 0x120e98a7 */
L_120E98B9:
    edi = MEM32(ebp + (-0x10)); /* 0x120E98B9: mov edi, dword ptr [ebp - 0x10] */
    eax = MEM32(ebp + (-0xC)); /* 0x120E98BC: mov eax, dword ptr [ebp - 0xc] */
L_120E98BF:
    esi = ecx; /* 0x120E98BF: mov esi, ecx */
    /* test ecx, ecx */ /* 0x120E98C1: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E98DA; /* 0x120E98C3: je 0x120e98da */
L_120E98C5:
    edi = MEM32(ebp + 0x10); /* 0x120E98C5: mov edi, dword ptr [ebp + 0x10] */
    ebx = eax; /* 0x120E98C8: mov ebx, eax */
L_120E98CA:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 4; /* 0x120E98CA: sub edi, 4 */
    _flag_k = FK_CMP;
    eax = MEM32(edi); /* 0x120E98CD: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 4; /* 0x120E98CF: sub ebx, 4 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x120E98D2: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebx) = eax; /* 0x120E98D3: mov dword ptr [ebx], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E98CA; /* 0x120E98D5: jne 0x120e98ca */
L_120E98D7:
    edi = MEM32(ebp + (-0x10)); /* 0x120E98D7: mov edi, dword ptr [ebp - 0x10] */
L_120E98DA:
    esi = MEM32(ebp + (-0x1C)); /* 0x120E98DA: mov esi, dword ptr [ebp - 0x1c] */
    ebx = MEM32(ebp + 0x10); /* 0x120E98DD: mov ebx, dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + (-0xC)); /* 0x120E98E0: mov eax, dword ptr [ebp - 0xc] */
    /* test edx, edx */ /* 0x120E98E3: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E9889; /* 0x120E98E5: jne 0x120e9889 */
L_120E98E7:
    esi = MEM32(ebp + 0x14); /* 0x120E98E7: mov esi, dword ptr [ebp + 0x14] */
L_120E98EA:
    ebx = MEM32(ebp + 0x8); /* 0x120E98EA: mov ebx, dword ptr [ebp + 8] */
    eax = MEM32(ebx + 0x2C); /* 0x120E98ED: mov eax, dword ptr [ebx + 0x2c] */
    ecx = (uint32_t)MEM16(ebx + 0xC); /* 0x120E98F0: movzx ecx, word ptr [ebx + 0xc] */
    eax = (uint32_t)((int32_t)eax * (int32_t)esi); /* 0x120E98F4: imul eax, esi */
    /* cmp eax, ecx */ /* 0x120E98F7: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E98FD; /* 0x120E98F9: jbe 0x120e98fd */
L_120E98FB:
    eax = ecx; /* 0x120E98FB: mov eax, ecx */
L_120E98FD:
    ecx = MEM32(ebx + 0x1C); /* 0x120E98FD: mov ecx, dword ptr [ebx + 0x1c] */
    /* test ecx, ecx */ /* 0x120E9900: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E990B; /* 0x120E9902: jne 0x120e990b */
L_120E9904:
    eax = 0x80004005u; /* 0x120E9904: mov eax, 0x80004005 */
    goto L_120E9924; /* 0x120E9909: jmp 0x120e9924 */
L_120E990B:
    PUSH32(esp, eax); /* 0x120E990B: push eax */
    eax = MEM32(ebp + (-0x4)); /* 0x120E990C: mov eax, dword ptr [ebp - 4] */
    PUSH32(esp, eax); /* 0x120E990F: push eax */
    PUSH32(esp, eax); /* 0x120E9910: push eax */
    eax = (uint32_t)MEM16(ebx + 0xA); /* 0x120E9911: movzx eax, word ptr [ebx + 0xa] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x18); /* 0x120E9915: add eax, dword ptr [ebp + 0x18] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x120E9918: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120E9919: push dword ptr [ebp + 0xc] */
    RECOMP_ICALL(ecx); /* 0x120E991C: call ecx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120E991E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E9924; /* 0x120E9920: js 0x120e9924 */
L_120E9922:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E9922: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E9924:
    edi = POP32_VAL(esp); /* 0x120E9924: pop edi */
    esi = POP32_VAL(esp); /* 0x120E9925: pop esi */
    ebx = POP32_VAL(esp); /* 0x120E9926: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E9927: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x120E9928: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_120E9930(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E9930u);

L_120E9930:
    edi = edi; /* 0x120E9930: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E9932: push ebp */
    ebp = esp; /* 0x120E9933: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x120E9935: sub esp, 0x2c */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x8); /* 0x120E9938: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x120E993B: push ebx */
    ebx = MEM32(ecx + 0x20); /* 0x120E993C: mov ebx, dword ptr [ecx + 0x20] */
    PUSH32(esp, esi); /* 0x120E993F: push esi */
    PUSH32(esp, edi); /* 0x120E9940: push edi */
    edi = MEM32(ecx + 0x18); /* 0x120E9941: mov edi, dword ptr [ecx + 0x18] */
    eax = (uint32_t)MEM16(edi); /* 0x120E9944: movzx eax, word ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0; /* 0x120E9947: sub eax, 0 */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = edi; /* 0x120E994A: mov dword ptr [ebp - 8], edi */
    MEM32(ebp + (-0x4)) = ebx; /* 0x120E994D: mov dword ptr [ebp - 4], ebx */
    MEM32(ebp + (-0x14)) = 3; /* 0x120E9950: mov dword ptr [ebp - 0x14], 3 */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_120E9CBA; /* 0x120E9957: je 0x120e9cba */
L_120E995D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E995D: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120E9C36; /* 0x120E995E: je 0x120e9c36 */
L_120E9964:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E9964: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120E9B02; /* 0x120E9965: je 0x120e9b02 */
L_120E996B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E996B: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120E9A59; /* 0x120E996C: je 0x120e9a59 */
L_120E9972:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E9972: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E9973: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120E9980; /* 0x120E9974: je 0x120e9980 */
L_120E9976:
    eax = 0x80004001u; /* 0x120E9976: mov eax, 0x80004001 */
    goto L_120E9F1B; /* 0x120E997B: jmp 0x120e9f1b */
L_120E9980:
    eax = MEM32(ebp + 0x14); /* 0x120E9980: mov eax, dword ptr [ebp + 0x14] */
    ecx = MEM32(ecx + 0x34); /* 0x120E9983: mov ecx, dword ptr [ecx + 0x34] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x120E9986: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x120E9986: shl eax, 4 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120E9989: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x120E998B: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    esi = eax; /* 0x120E998D: mov esi, eax */
    eax = (uint32_t)MEM16(edi + 0x8); /* 0x120E998F: movzx eax, word ptr [edi + 8] */
    MEM32(ebp + (-0x10)) = esi; /* 0x120E9993: mov dword ptr [ebp - 0x10], esi */
    /* cmp esi, eax */ /* 0x120E9996: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E999F; /* 0x120E9998: jbe 0x120e999f */
L_120E999A:
    esi = eax; /* 0x120E999A: mov esi, eax */
    MEM32(ebp + (-0x10)) = eax; /* 0x120E999C: mov dword ptr [ebp - 0x10], eax */
L_120E999F:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x120E999F: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)esi); /* 0x120E99A3: imul ecx, esi */
    MEM32(ebp + (-0x18)) = ecx; /* 0x120E99A6: mov dword ptr [ebp - 0x18], ecx */
    MEM32(ebp + 0x14) = ebx; /* 0x120E99A9: mov dword ptr [ebp + 0x14], ebx */
    /* test ecx, ecx */ /* 0x120E99AC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E99F3; /* 0x120E99AE: je 0x120e99f3 */
L_120E99B0:
    esi = MEM32(ebp + 0x10); /* 0x120E99B0: mov esi, dword ptr [ebp + 0x10] */
    edi = MEM32(ebp + (-0xC)); /* 0x120E99B3: mov edi, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x14)) = 3; /* 0x120E99B6: mov dword ptr [ebp - 0x14], 3 */
    ebx = ecx; /* 0x120E99BD: mov ebx, ecx */
L_120E99BF:
    edx = edi; /* 0x120E99BF: mov edx, edi */
    if (2u) _cf = (((edx) >> 1) & 1u); /* 0x120E99C1: shr edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 2u; /* 0x120E99C1: shr edx, 2 */
    eax = edi; /* 0x120E99C4: mov eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    eax = eax & MEM32(ebp + (-0x14)); /* 0x120E99C6: and eax, dword ptr [ebp - 0x14] */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edx; /* 0x120E99C9: mov ecx, edx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x120E99CB: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x120E99CB: shr ecx, 2 */
    eax = eax + ecx * 4; /* 0x120E99CE: lea eax, [eax + ecx*4] */
    ecx = MEM32(ebp + 0x14); /* 0x120E99D1: mov ecx, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    edx = edx & 3; /* 0x120E99D4: and edx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx + eax * 4; /* 0x120E99D7: lea eax, [edx + eax*4] */
    eax = MEM32(esi + eax * 4); /* 0x120E99DA: mov eax, dword ptr [esi + eax*4] */
    MEM32(ecx) = eax; /* 0x120E99DD: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x120E99DF: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120E99E2: inc edi */
    _flag_k = FK_INC;
    MEM32(ebp + 0x14) = ecx; /* 0x120E99E3: mov dword ptr [ebp + 0x14], ecx */
    /* cmp edi, ebx */ /* 0x120E99E6: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E99BF; /* 0x120E99E8: jb 0x120e99bf */
L_120E99EA:
    edi = MEM32(ebp + (-0x8)); /* 0x120E99EA: mov edi, dword ptr [ebp - 8] */
    ebx = MEM32(ebp + (-0x4)); /* 0x120E99ED: mov ebx, dword ptr [ebp - 4] */
    esi = MEM32(ebp + (-0x10)); /* 0x120E99F0: mov esi, dword ptr [ebp - 0x10] */
L_120E99F3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E99F3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x14) = eax; /* 0x120E99F5: mov dword ptr [ebp + 0x14], eax */
    /* test esi, esi */ /* 0x120E99F8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E9F19; /* 0x120E99FA: je 0x120e9f19 */
L_120E9A00:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120E9A00: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120E9A02: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = ecx; /* 0x120E9A04: mov dword ptr [ebp + 0x10], ecx */
    /* cmp LO16(edx), MEM16(edi + 0xA) */ /* 0x120E9A07: cmp dx, word ptr [edi + 0xa] */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(MEM16(edi + 0xA)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_120E9A4C; /* 0x120E9A0B: jae 0x120e9a4c */
L_120E9A0D:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120E9A0D: push dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + 0x8); /* 0x120E9A10: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x38); /* 0x120E9A13: mov eax, dword ptr [eax + 0x38] */
    eax = MEM32(eax + ecx * 4); /* 0x120E9A16: mov eax, dword ptr [eax + ecx*4] */
    PUSH32(esp, MEM32(eax + 0x30)); /* 0x120E9A19: push dword ptr [eax + 0x30] */
    MEM32(ebp + (-0x18)) = eax; /* 0x120E9A1C: mov dword ptr [ebp - 0x18], eax */
    PUSH32(esp, ebx); /* 0x120E9A1F: push ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120E9A20: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x120E9A23: push eax */
    RECOMP_CALL(sub_120E874C); /* 0x120E9A24: call 0x120e874c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120E9A29: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E9F1B; /* 0x120E9A2B: js 0x120e9f1b */
L_120E9A31:
    eax = MEM32(ebp + (-0x18)); /* 0x120E9A31: mov eax, dword ptr [ebp - 0x18] */
    eax = MEM32(eax + 0x30); /* 0x120E9A34: mov eax, dword ptr [eax + 0x30] */
    ecx = MEM32(ebp + 0x10); /* 0x120E9A37: mov ecx, dword ptr [ebp + 0x10] */
    ebx = ebx + eax * 4; /* 0x120E9A3A: lea ebx, [ebx + eax*4] */
    eax = (uint32_t)MEM16(edi + 0xA); /* 0x120E9A3D: movzx eax, word ptr [edi + 0xa] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120E9A41: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + 0x10) = ecx; /* 0x120E9A42: mov dword ptr [ebp + 0x10], ecx */
    /* cmp ecx, eax */ /* 0x120E9A45: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E9A0D; /* 0x120E9A47: jb 0x120e9a0d */
L_120E9A49:
    eax = MEM32(ebp + 0x14); /* 0x120E9A49: mov eax, dword ptr [ebp + 0x14] */
L_120E9A4C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120E9A4C: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + 0x14) = eax; /* 0x120E9A4D: mov dword ptr [ebp + 0x14], eax */
    /* cmp eax, esi */ /* 0x120E9A50: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E9A00; /* 0x120E9A52: jb 0x120e9a00 */
L_120E9A54:
    goto L_120E9F19; /* 0x120E9A54: jmp 0x120e9f19 */
L_120E9A59:
    eax = (uint32_t)MEM16(edi + 0x8); /* 0x120E9A59: movzx eax, word ptr [edi + 8] */
    esi = MEM32(ebp + 0x14); /* 0x120E9A5D: mov esi, dword ptr [ebp + 0x14] */
    MEM32(ebp + 0x14) = esi; /* 0x120E9A60: mov dword ptr [ebp + 0x14], esi */
    /* cmp esi, eax */ /* 0x120E9A63: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E9A6C; /* 0x120E9A65: jbe 0x120e9a6c */
L_120E9A67:
    esi = eax; /* 0x120E9A67: mov esi, eax */
    MEM32(ebp + 0x14) = eax; /* 0x120E9A69: mov dword ptr [ebp + 0x14], eax */
L_120E9A6C:
    eax = (uint32_t)MEM16(edi + 0x4); /* 0x120E9A6C: movzx eax, word ptr [edi + 4] */
    PUSH32(esp, 4); /* 0x120E9A70: push 4 */
    edx = POP32_VAL(esp); /* 0x120E9A72: pop edx */
    /* cmp LO16(edx), LO16(eax) */ /* 0x120E9A73: cmp dx, ax */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E9A82; /* 0x120E9A76: jne 0x120e9a82 */
L_120E9A78:
    /* cmp LO16(edx), MEM16(edi + 0x6) */ /* 0x120E9A78: cmp dx, word ptr [edi + 6] */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(MEM16(edi + 0x6)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E9D16; /* 0x120E9A7C: je 0x120e9d16 */
L_120E9A82:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120E9A82: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0xC)) = ebx; /* 0x120E9A84: mov dword ptr [ebp - 0xc], ebx */
    MEM32(ebp + (-0x10)) = ecx; /* 0x120E9A87: mov dword ptr [ebp - 0x10], ecx */
    /* test esi, esi */ /* 0x120E9A8A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E9CB6; /* 0x120E9A8C: je 0x120e9cb6 */
L_120E9A92:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x120E9A92: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120E9A96: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(ebx), MEM16(edi + 0x6) */ /* 0x120E9A98: cmp bx, word ptr [edi + 6] */
    _flag_a = (uint32_t)(LO16(ebx)) << 16; _flag_b = (uint32_t)(MEM16(edi + 0x6)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    ebx = MEM32(ebp + 0x10); /* 0x120E9A9C: mov ebx, dword ptr [ebp + 0x10] */
    if (CMP_AE(_flag_a, _flag_b)) goto L_120E9AF5; /* 0x120E9A9F: jae 0x120e9af5 */
L_120E9AA1:
    esi = MEM32(ebp + (-0x1C)); /* 0x120E9AA1: mov esi, dword ptr [ebp - 0x1c] */
    eax = (uint32_t)LO16(eax); /* 0x120E9AA4: movzx eax, ax */
    MEM32(ebp + (-0x18)) = eax; /* 0x120E9AA7: mov dword ptr [ebp - 0x18], eax */
L_120E9AAA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120E9AAA: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x120E9AAC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E9ADF; /* 0x120E9AAE: je 0x120e9adf */
L_120E9AB0:
    /* cmp ecx, edx */ /* 0x120E9AB0: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120E9AC6; /* 0x120E9AB2: ja 0x120e9ac6 */
L_120E9AB4:
    /* cmp esi, edx */ /* 0x120E9AB4: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120E9AC6; /* 0x120E9AB6: ja 0x120e9ac6 */
L_120E9AB8:
    eax = MEM32(ebp + (-0x10)); /* 0x120E9AB8: mov eax, dword ptr [ebp - 0x10] */
    eax = esi + eax * 4; /* 0x120E9ABB: lea eax, [esi + eax*4] */
    eax = ecx + eax * 4; /* 0x120E9ABE: lea eax, [ecx + eax*4] */
    eax = MEM32(ebx + eax * 4); /* 0x120E9AC1: mov eax, dword ptr [ebx + eax*4] */
    goto L_120E9AC8; /* 0x120E9AC4: jmp 0x120e9ac8 */
L_120E9AC6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E9AC6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E9AC8:
    edi = MEM32(ebp + (-0xC)); /* 0x120E9AC8: mov edi, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + edx; /* 0x120E9ACB: add dword ptr [ebp - 0xc], edx */
    _flag_k = FK_ADD;
    MEM32(edi) = eax; /* 0x120E9ACE: mov dword ptr [edi], eax */
    edi = MEM32(ebp + (-0x8)); /* 0x120E9AD0: mov edi, dword ptr [ebp - 8] */
    eax = (uint32_t)MEM16(edi + 0x4); /* 0x120E9AD3: movzx eax, word ptr [edi + 4] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120E9AD7: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x18)) = eax; /* 0x120E9AD8: mov dword ptr [ebp - 0x18], eax */
    /* cmp ecx, eax */ /* 0x120E9ADB: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E9AB0; /* 0x120E9ADD: jb 0x120e9ab0 */
L_120E9ADF:
    eax = (uint32_t)MEM16(edi + 0x6); /* 0x120E9ADF: movzx eax, word ptr [edi + 6] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120E9AE3: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, eax */ /* 0x120E9AE4: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x18)); /* 0x120E9AE6: mov eax, dword ptr [ebp - 0x18] */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E9AAA; /* 0x120E9AE9: jb 0x120e9aaa */
L_120E9AEB:
    esi = MEM32(ebp + 0x14); /* 0x120E9AEB: mov esi, dword ptr [ebp + 0x14] */
    eax = (uint32_t)MEM16(edi + 0x4); /* 0x120E9AEE: movzx eax, word ptr [edi + 4] */
    ecx = MEM32(ebp + (-0x10)); /* 0x120E9AF2: mov ecx, dword ptr [ebp - 0x10] */
L_120E9AF5:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120E9AF5: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x10)) = ecx; /* 0x120E9AF6: mov dword ptr [ebp - 0x10], ecx */
    /* cmp ecx, esi */ /* 0x120E9AF9: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E9A92; /* 0x120E9AFB: jb 0x120e9a92 */
L_120E9AFD:
    goto L_120E9CB3; /* 0x120E9AFD: jmp 0x120e9cb3 */
L_120E9B02:
    eax = (uint32_t)MEM16(edi + 0x8); /* 0x120E9B02: movzx eax, word ptr [edi + 8] */
    esi = MEM32(ebp + 0x14); /* 0x120E9B06: mov esi, dword ptr [ebp + 0x14] */
    MEM32(ebp + 0x14) = esi; /* 0x120E9B09: mov dword ptr [ebp + 0x14], esi */
    /* cmp esi, eax */ /* 0x120E9B0C: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E9B15; /* 0x120E9B0E: jbe 0x120e9b15 */
L_120E9B10:
    esi = eax; /* 0x120E9B10: mov esi, eax */
    MEM32(ebp + 0x14) = eax; /* 0x120E9B12: mov dword ptr [ebp + 0x14], eax */
L_120E9B15:
    ecx = (uint32_t)MEM16(edi + 0x4); /* 0x120E9B15: movzx ecx, word ptr [edi + 4] */
    PUSH32(esp, 4); /* 0x120E9B19: push 4 */
    edx = POP32_VAL(esp); /* 0x120E9B1B: pop edx */
    /* cmp LO16(edx), LO16(ecx) */ /* 0x120E9B1C: cmp dx, cx */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E9BBE; /* 0x120E9B1F: jne 0x120e9bbe */
L_120E9B25:
    /* cmp LO16(edx), MEM16(edi + 0x6) */ /* 0x120E9B25: cmp dx, word ptr [edi + 6] */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(MEM16(edi + 0x6)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_120E9BBE; /* 0x120E9B29: jne 0x120e9bbe */
L_120E9B2F:
    /* test esi, esi */ /* 0x120E9B2F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E9CB6; /* 0x120E9B31: je 0x120e9cb6 */
L_120E9B37:
    eax = MEM32(ebp + 0x10); /* 0x120E9B37: mov eax, dword ptr [ebp + 0x10] */
    ecx = eax + 0x20; /* 0x120E9B3A: lea ecx, [eax + 0x20] */
    MEM32(ebp + (-0x1C)) = ecx; /* 0x120E9B3D: mov dword ptr [ebp - 0x1c], ecx */
    ecx = ebx; /* 0x120E9B40: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x120E9B42: sub ecx, eax */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x1C)); /* 0x120E9B44: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(ebp + 0x10) = esi; /* 0x120E9B47: mov dword ptr [ebp + 0x10], esi */
    edi = ebx + 0x8; /* 0x120E9B4A: lea edi, [ebx + 8] */
L_120E9B4D:
    fp_push(*(float*)&MEM32(eax + (-0x20))); /* 0x120E9B4D: fld dword ptr [eax - 0x20] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + (-0x8)) = _v; } /* 0x120E9B50: fstp dword ptr [edi - 8] */
    fp_push(*(float*)&MEM32(eax + (-0x10))); /* 0x120E9B53: fld dword ptr [eax - 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + (-0x4)) = _v; } /* 0x120E9B56: fstp dword ptr [edi - 4] */
    fp_push(*(float*)&MEM32(eax)); /* 0x120E9B59: fld dword ptr [eax] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi) = _v; } /* 0x120E9B5B: fstp dword ptr [edi] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x40u; /* 0x120E9B5D: add edi, 0x40 */
    _flag_k = FK_ADD;
    fp_push(*(float*)&MEM32(eax + 0x10)); /* 0x120E9B60: fld dword ptr [eax + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + (-0x3C)) = _v; } /* 0x120E9B63: fstp dword ptr [edi - 0x3c] */
    fp_push(*(float*)&MEM32(eax + (-0x1C))); /* 0x120E9B66: fld dword ptr [eax - 0x1c] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + (-0x38)) = _v; } /* 0x120E9B69: fstp dword ptr [edi - 0x38] */
    fp_push(*(float*)&MEM32(eax + (-0xC))); /* 0x120E9B6C: fld dword ptr [eax - 0xc] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + (-0x34)) = _v; } /* 0x120E9B6F: fstp dword ptr [edi - 0x34] */
    fp_push(*(float*)&MEM32(eax + 0x4)); /* 0x120E9B72: fld dword ptr [eax + 4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + (-0x30)) = _v; } /* 0x120E9B75: fstp dword ptr [edi - 0x30] */
    fp_push(*(float*)&MEM32(eax + 0x14)); /* 0x120E9B78: fld dword ptr [eax + 0x14] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + (-0x2C)) = _v; } /* 0x120E9B7B: fstp dword ptr [edi - 0x2c] */
    fp_push(*(float*)&MEM32(eax + (-0x18))); /* 0x120E9B7E: fld dword ptr [eax - 0x18] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ecx + eax) = _v; } /* 0x120E9B81: fstp dword ptr [ecx + eax] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x40u; /* 0x120E9B84: add eax, 0x40 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(1);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1; /* 0x120E9B87: dec dword ptr [ebp + 0x10] */
    _flag_k = FK_DEC;
    fp_push(*(float*)&MEM32(eax + (-0x48))); /* 0x120E9B8A: fld dword ptr [eax - 0x48] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + (-0x24)) = _v; } /* 0x120E9B8D: fstp dword ptr [edi - 0x24] */
    fp_push(*(float*)&MEM32(eax + (-0x38))); /* 0x120E9B90: fld dword ptr [eax - 0x38] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + (-0x20)) = _v; } /* 0x120E9B93: fstp dword ptr [edi - 0x20] */
    fp_push(*(float*)&MEM32(eax + (-0x28))); /* 0x120E9B96: fld dword ptr [eax - 0x28] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + (-0x1C)) = _v; } /* 0x120E9B99: fstp dword ptr [edi - 0x1c] */
    fp_push(*(float*)&MEM32(eax + (-0x54))); /* 0x120E9B9C: fld dword ptr [eax - 0x54] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + (-0x18)) = _v; } /* 0x120E9B9F: fstp dword ptr [edi - 0x18] */
    fp_push(*(float*)&MEM32(eax + (-0x44))); /* 0x120E9BA2: fld dword ptr [eax - 0x44] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + (-0x14)) = _v; } /* 0x120E9BA5: fstp dword ptr [edi - 0x14] */
    fp_push(*(float*)&MEM32(eax + (-0x34))); /* 0x120E9BA8: fld dword ptr [eax - 0x34] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + (-0x10)) = _v; } /* 0x120E9BAB: fstp dword ptr [edi - 0x10] */
    fp_push(*(float*)&MEM32(eax + (-0x24))); /* 0x120E9BAE: fld dword ptr [eax - 0x24] */
    { float _v = (float)fp_pop(); *(float*)ADDR(edi + (-0xC)) = _v; } /* 0x120E9BB1: fstp dword ptr [edi - 0xc] */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E9B4D; /* 0x120E9BB4: jne 0x120e9b4d */
L_120E9BB6:
    edi = MEM32(ebp + (-0x8)); /* 0x120E9BB6: mov edi, dword ptr [ebp - 8] */
    goto L_120E9CB6; /* 0x120E9BB9: jmp 0x120e9cb6 */
L_120E9BBE:
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x120E9BBE: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = ebx; /* 0x120E9BC2: mov dword ptr [ebp - 0x10], ebx */
    /* test esi, esi */ /* 0x120E9BC5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E9CB6; /* 0x120E9BC7: je 0x120e9cb6 */
L_120E9BCD:
    ebx = MEM32(ebp + 0x10); /* 0x120E9BCD: mov ebx, dword ptr [ebp + 0x10] */
L_120E9BD0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E9BD0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(eax);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & eax; /* 0x120E9BD2: and dword ptr [ebp - 0x1c], eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = eax; /* 0x120E9BD5: mov dword ptr [ebp + 0x10], eax */
    /* cmp MEM16(ebp + (-0x1C)), LO16(ecx) */ /* 0x120E9BD8: cmp word ptr [ebp - 0x1c], cx */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x1C))) << 16; _flag_b = (uint32_t)(LO16(ecx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_120E9C29; /* 0x120E9BDC: jae 0x120e9c29 */
L_120E9BDE:
    esi = (uint32_t)MEM16(edi + 0x6); /* 0x120E9BDE: movzx esi, word ptr [edi + 6] */
L_120E9BE2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120E9BE2: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x120E9BE4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E9C1A; /* 0x120E9BE6: je 0x120e9c1a */
L_120E9BE8:
    /* cmp eax, edx */ /* 0x120E9BE8: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120E9C04; /* 0x120E9BEA: ja 0x120e9c04 */
L_120E9BEC:
    /* cmp ecx, edx */ /* 0x120E9BEC: cmp ecx, edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120E9C04; /* 0x120E9BEE: ja 0x120e9c04 */
L_120E9BF0:
    eax = MEM32(ebp + (-0xC)); /* 0x120E9BF0: mov eax, dword ptr [ebp - 0xc] */
    esi = MEM32(ebp + 0x10); /* 0x120E9BF3: mov esi, dword ptr [ebp + 0x10] */
    eax = ecx + eax * 4; /* 0x120E9BF6: lea eax, [ecx + eax*4] */
    eax = esi + eax * 4; /* 0x120E9BF9: lea eax, [esi + eax*4] */
    esi = MEM32(ebx + eax * 4); /* 0x120E9BFC: mov esi, dword ptr [ebx + eax*4] */
    eax = MEM32(ebp + 0x10); /* 0x120E9BFF: mov eax, dword ptr [ebp + 0x10] */
    goto L_120E9C06; /* 0x120E9C02: jmp 0x120e9c06 */
L_120E9C04:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120E9C04: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E9C06:
    edi = MEM32(ebp + (-0x10)); /* 0x120E9C06: mov edi, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + edx; /* 0x120E9C09: add dword ptr [ebp - 0x10], edx */
    _flag_k = FK_ADD;
    MEM32(edi) = esi; /* 0x120E9C0C: mov dword ptr [edi], esi */
    edi = MEM32(ebp + (-0x8)); /* 0x120E9C0E: mov edi, dword ptr [ebp - 8] */
    esi = (uint32_t)MEM16(edi + 0x6); /* 0x120E9C11: movzx esi, word ptr [edi + 6] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120E9C15: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, esi */ /* 0x120E9C16: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E9BE8; /* 0x120E9C18: jb 0x120e9be8 */
L_120E9C1A:
    ecx = (uint32_t)MEM16(edi + 0x4); /* 0x120E9C1A: movzx ecx, word ptr [edi + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120E9C1E: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + 0x10) = eax; /* 0x120E9C1F: mov dword ptr [ebp + 0x10], eax */
    /* cmp eax, ecx */ /* 0x120E9C22: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E9BE2; /* 0x120E9C24: jb 0x120e9be2 */
L_120E9C26:
    esi = MEM32(ebp + 0x14); /* 0x120E9C26: mov esi, dword ptr [ebp + 0x14] */
L_120E9C29:
    eax = MEM32(ebp + (-0xC)); /* 0x120E9C29: mov eax, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120E9C2C: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0xC)) = eax; /* 0x120E9C2D: mov dword ptr [ebp - 0xc], eax */
    /* cmp eax, esi */ /* 0x120E9C30: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E9BD0; /* 0x120E9C32: jb 0x120e9bd0 */
L_120E9C34:
    goto L_120E9CB3; /* 0x120E9C34: jmp 0x120e9cb3 */
L_120E9C36:
    esi = MEM32(ebp + 0x14); /* 0x120E9C36: mov esi, dword ptr [ebp + 0x14] */
    eax = (uint32_t)MEM16(edi + 0x8); /* 0x120E9C39: movzx eax, word ptr [edi + 8] */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x120E9C3D: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x120E9C3D: shl esi, 2 */
    MEM32(ebp + 0x14) = esi; /* 0x120E9C40: mov dword ptr [ebp + 0x14], esi */
    /* cmp esi, eax */ /* 0x120E9C43: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E9C4C; /* 0x120E9C45: jbe 0x120e9c4c */
L_120E9C47:
    esi = eax; /* 0x120E9C47: mov esi, eax */
    MEM32(ebp + 0x14) = eax; /* 0x120E9C49: mov dword ptr [ebp + 0x14], eax */
L_120E9C4C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E9C4C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x120E9C4E: push 4 */
    MEM32(ebp + (-0x18)) = ebx; /* 0x120E9C50: mov dword ptr [ebp - 0x18], ebx */
    MEM32(ebp + (-0x10)) = eax; /* 0x120E9C53: mov dword ptr [ebp - 0x10], eax */
    edx = POP32_VAL(esp); /* 0x120E9C56: pop edx */
    /* test esi, esi */ /* 0x120E9C57: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E9CB6; /* 0x120E9C59: je 0x120e9cb6 */
L_120E9C5B:
    ecx = (uint32_t)MEM16(edi + 0x6); /* 0x120E9C5B: movzx ecx, word ptr [edi + 6] */
    ebx = MEM32(ebp + 0x10); /* 0x120E9C5F: mov ebx, dword ptr [ebp + 0x10] */
L_120E9C62:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0; /* 0x120E9C62: and dword ptr [ebp + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x120E9C66: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E9CAB; /* 0x120E9C68: je 0x120e9cab */
L_120E9C6A:
    esi = MEM32(ebp + 0x10); /* 0x120E9C6A: mov esi, dword ptr [ebp + 0x10] */
L_120E9C6D:
    /* cmp esi, edx */ /* 0x120E9C6D: cmp esi, edx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E9C77; /* 0x120E9C6F: jbe 0x120e9c77 */
L_120E9C71:
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0; /* 0x120E9C71: and dword ptr [ebp + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120E9C8F; /* 0x120E9C75: jmp 0x120e9c8f */
L_120E9C77:
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x120E9C77: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x120E9C77: shr eax, 2 */
    ecx = esi + eax * 4; /* 0x120E9C7A: lea ecx, [esi + eax*4] */
    eax = MEM32(ebp + (-0x10)); /* 0x120E9C7D: mov eax, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x120E9C80: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = eax + ecx * 4; /* 0x120E9C83: lea eax, [eax + ecx*4] */
    eax = MEM32(ebx + eax * 4); /* 0x120E9C86: mov eax, dword ptr [ebx + eax*4] */
    MEM32(ebp + 0x10) = eax; /* 0x120E9C89: mov dword ptr [ebp + 0x10], eax */
    eax = MEM32(ebp + (-0x10)); /* 0x120E9C8C: mov eax, dword ptr [ebp - 0x10] */
L_120E9C8F:
    ecx = MEM32(ebp + (-0x18)); /* 0x120E9C8F: mov ecx, dword ptr [ebp - 0x18] */
    edi = MEM32(ebp + 0x10); /* 0x120E9C92: mov edi, dword ptr [ebp + 0x10] */
    MEM32(ecx) = edi; /* 0x120E9C95: mov dword ptr [ecx], edi */
    edi = MEM32(ebp + (-0x8)); /* 0x120E9C97: mov edi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x120E9C9A: add ecx, edx */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = ecx; /* 0x120E9C9C: mov dword ptr [ebp - 0x18], ecx */
    ecx = (uint32_t)MEM16(edi + 0x6); /* 0x120E9C9F: movzx ecx, word ptr [edi + 6] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120E9CA3: inc esi */
    _flag_k = FK_INC;
    /* cmp esi, ecx */ /* 0x120E9CA4: cmp esi, ecx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E9C6D; /* 0x120E9CA6: jb 0x120e9c6d */
L_120E9CA8:
    esi = MEM32(ebp + 0x14); /* 0x120E9CA8: mov esi, dword ptr [ebp + 0x14] */
L_120E9CAB:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120E9CAB: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x10)) = eax; /* 0x120E9CAC: mov dword ptr [ebp - 0x10], eax */
    /* cmp eax, esi */ /* 0x120E9CAF: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E9C62; /* 0x120E9CB1: jb 0x120e9c62 */
L_120E9CB3:
    ebx = MEM32(ebp + (-0x4)); /* 0x120E9CB3: mov ebx, dword ptr [ebp - 4] */
L_120E9CB6:
    ecx = ebx; /* 0x120E9CB6: mov ecx, ebx */
    goto L_120E9D19; /* 0x120E9CB8: jmp 0x120e9d19 */
L_120E9CBA:
    esi = MEM32(ebp + 0x14); /* 0x120E9CBA: mov esi, dword ptr [ebp + 0x14] */
    eax = (uint32_t)MEM16(edi + 0x8); /* 0x120E9CBD: movzx eax, word ptr [edi + 8] */
    if (4u) _cf = (((esi) >> 28) & 1u); /* 0x120E9CC1: shl esi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((esi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 4u; /* 0x120E9CC1: shl esi, 4 */
    MEM32(ebp + 0x14) = esi; /* 0x120E9CC4: mov dword ptr [ebp + 0x14], esi */
    /* cmp esi, eax */ /* 0x120E9CC7: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E9CD0; /* 0x120E9CC9: jbe 0x120e9cd0 */
L_120E9CCB:
    esi = eax; /* 0x120E9CCB: mov esi, eax */
    MEM32(ebp + 0x14) = eax; /* 0x120E9CCD: mov dword ptr [ebp + 0x14], eax */
L_120E9CD0:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x1C)) = MEM32(ebp + (-0x1C)) & 0; /* 0x120E9CD0: and dword ptr [ebp - 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x120E9CD4: push 4 */
    MEM32(ebp + (-0x18)) = ebx; /* 0x120E9CD6: mov dword ptr [ebp - 0x18], ebx */
    edx = POP32_VAL(esp); /* 0x120E9CD9: pop edx */
    /* test esi, esi */ /* 0x120E9CDA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E9CB6; /* 0x120E9CDC: je 0x120e9cb6 */
L_120E9CDE:
    edi = MEM32(ebp + 0x10); /* 0x120E9CDE: mov edi, dword ptr [ebp + 0x10] */
    ebx = MEM32(ebp + (-0x1C)); /* 0x120E9CE1: mov ebx, dword ptr [ebp - 0x1c] */
L_120E9CE4:
    edx = ebx; /* 0x120E9CE4: mov edx, ebx */
    if (2u) _cf = (((edx) >> 1) & 1u); /* 0x120E9CE6: shr edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 2u; /* 0x120E9CE6: shr edx, 2 */
    ecx = edx; /* 0x120E9CE9: mov ecx, edx */
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x120E9CEB: shr ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ecx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = ecx >> 2u; /* 0x120E9CEB: shr ecx, 2 */
    eax = ebx; /* 0x120E9CEE: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x120E9CF0: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = eax + ecx * 4; /* 0x120E9CF3: lea eax, [eax + ecx*4] */
    ecx = MEM32(ebp + (-0x18)); /* 0x120E9CF6: mov ecx, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(3);
    edx = edx & 3; /* 0x120E9CF9: and edx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx + eax * 4; /* 0x120E9CFC: lea eax, [edx + eax*4] */
    eax = MEM32(edi + eax * 4); /* 0x120E9CFF: mov eax, dword ptr [edi + eax*4] */
    PUSH32(esp, 4); /* 0x120E9D02: push 4 */
    edx = POP32_VAL(esp); /* 0x120E9D04: pop edx */
    MEM32(ecx) = eax; /* 0x120E9D05: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + edx; /* 0x120E9D07: add ecx, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x120E9D09: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x18)) = ecx; /* 0x120E9D0A: mov dword ptr [ebp - 0x18], ecx */
    /* cmp ebx, esi */ /* 0x120E9D0D: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E9CE4; /* 0x120E9D0F: jb 0x120e9ce4 */
L_120E9D11:
    edi = MEM32(ebp + (-0x8)); /* 0x120E9D11: mov edi, dword ptr [ebp - 8] */
    RECOMP_BACKEDGE();
    goto L_120E9CB3; /* 0x120E9D14: jmp 0x120e9cb3 */
L_120E9D16:
    ecx = MEM32(ebp + 0x10); /* 0x120E9D16: mov ecx, dword ptr [ebp + 0x10] */
L_120E9D19:
    eax = (uint32_t)MEM16(edi + 0x2); /* 0x120E9D19: movzx eax, word ptr [edi + 2] */
    MEM32(ebp + (-0xC)) = 1; /* 0x120E9D1D: mov dword ptr [ebp - 0xc], 1 */
    /* cmp MEM16(ebp + (-0x14)), LO16(eax) */ /* 0x120E9D24: cmp word ptr [ebp - 0x14], ax */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x14))) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E9DC6; /* 0x120E9D28: je 0x120e9dc6 */
L_120E9D2E:
    eax = MEM32(ebp + 0x8); /* 0x120E9D2E: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x34); /* 0x120E9D31: mov eax, dword ptr [eax + 0x34] */
    ebx = (uint32_t)MEM16(edi + 0x2); /* 0x120E9D34: movzx ebx, word ptr [edi + 2] */
    eax = (uint32_t)((int32_t)eax * (int32_t)esi); /* 0x120E9D38: imul eax, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x120E9D3B: dec ebx */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x1C)) = ebx; /* 0x120E9D3C: mov dword ptr [ebp - 0x1c], ebx */
    ebx = MEM32(ebp + (-0x4)); /* 0x120E9D3F: mov ebx, dword ptr [ebp - 4] */
    MEM32(ebp + 0x10) = eax; /* 0x120E9D42: mov dword ptr [ebp + 0x10], eax */
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120E9D90; /* 0x120E9D45: je 0x120e9d90 */
L_120E9D47:
    eax = MEM32(ebp + (-0x1C)); /* 0x120E9D47: mov eax, dword ptr [ebp - 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E9D4A: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E9DC4; /* 0x120E9D4B: jne 0x120e9dc4 */
L_120E9D4D:
    MEM16(ebp + (-0x18)) = _fpu_cw; /* 0x120E9D4D: fnstcw word ptr [ebp - 0x18] */
    eax = MEM32(ebp + (-0x18)); /* 0x120E9D50: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)((eax | 0xC00u)); _flag_b = (uint32_t)((eax | 0xC00u));
    eax = eax | 0xC00u; /* 0x120E9D53: or eax, 0xc00 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x1C)) = eax; /* 0x120E9D58: mov dword ptr [ebp - 0x1c], eax */
    _fpu_cw = MEM16(ebp + (-0x1C)); /* 0x120E9D5B: fldcw word ptr [ebp - 0x1c] */
    /* cmp MEM32(ebp + 0x10), 0 */ /* 0x120E9D5E: cmp dword ptr [ebp + 0x10], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x18)); /* 0x120E9D62: mov eax, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x10)) = eax; /* 0x120E9D65: mov dword ptr [ebp - 0x10], eax */
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E9D8B; /* 0x120E9D68: jbe 0x120e9d8b */
L_120E9D6A:
    edi = MEM32(ebp + 0x10); /* 0x120E9D6A: mov edi, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x120E9D6D: sub ecx, ebx */
    _flag_k = FK_CMP;
L_120E9D6F:
    fp_push(*(float*)&MEM32(ecx + ebx)); /* 0x120E9D6F: fld dword ptr [ecx + ebx] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x120E9D72: fstp dword ptr [ebp - 0x14] */
    fp_push(*(float*)&MEM32(ebp + (-0x14))); /* 0x120E9D75: fld dword ptr [ebp - 0x14] */
    MEM32(ebp + 0x10) = (uint32_t)(int32_t)fp_to_int(fp_pop()); /* 0x120E9D78: fistp dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x10); /* 0x120E9D7B: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebx) = eax; /* 0x120E9D7E: mov dword ptr [ebx], eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + edx; /* 0x120E9D80: add ebx, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x120E9D82: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E9D6F; /* 0x120E9D83: jne 0x120e9d6f */
L_120E9D85:
    edi = MEM32(ebp + (-0x8)); /* 0x120E9D85: mov edi, dword ptr [ebp - 8] */
    ebx = MEM32(ebp + (-0x4)); /* 0x120E9D88: mov ebx, dword ptr [ebp - 4] */
L_120E9D8B:
    _fpu_cw = MEM16(ebp + (-0x10)); /* 0x120E9D8B: fldcw word ptr [ebp - 0x10] */
    goto L_120E9DC4; /* 0x120E9D8E: jmp 0x120e9dc4 */
L_120E9D90:
    /* test eax, eax */ /* 0x120E9D90: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E9DC4; /* 0x120E9D92: je 0x120e9dc4 */
L_120E9D94:
    fp_push(0.0); /* 0x120E9D94: fldz  */
    edi = MEM32(ebp + 0x10); /* 0x120E9D96: mov edi, dword ptr [ebp + 0x10] */
    esi = ebx; /* 0x120E9D99: mov esi, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x120E9D9B: sub ecx, ebx */
    _flag_k = FK_CMP;
    ebx = MEM32(ebp + (-0xC)); /* 0x120E9D9D: mov ebx, dword ptr [ebp - 0xc] */
L_120E9DA0:
    fp_push(*(float*)&MEM32(esi + ecx)); /* 0x120E9DA0: fld dword ptr [esi + ecx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120E9DA3: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120E9DA5: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x120E9DA7: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_120E9DB0; /* 0x120E9DAA: jnp 0x120e9db0 */
L_120E9DAC:
    eax = ebx; /* 0x120E9DAC: mov eax, ebx */
    goto L_120E9DB2; /* 0x120E9DAE: jmp 0x120e9db2 */
L_120E9DB0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E9DB0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E9DB2:
    MEM32(esi) = eax; /* 0x120E9DB2: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x120E9DB4: add esi, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x120E9DB6: dec edi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E9DA0; /* 0x120E9DB7: jne 0x120e9da0 */
L_120E9DB9:
    esi = MEM32(ebp + 0x14); /* 0x120E9DB9: mov esi, dword ptr [ebp + 0x14] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120E9DBC: fstp st(0) */
    edi = MEM32(ebp + (-0x8)); /* 0x120E9DBE: mov edi, dword ptr [ebp - 8] */
    ebx = MEM32(ebp + (-0x4)); /* 0x120E9DC1: mov ebx, dword ptr [ebp - 4] */
L_120E9DC4:
    ecx = ebx; /* 0x120E9DC4: mov ecx, ebx */
L_120E9DC6:
    eax = MEM32(ebp + 0x8); /* 0x120E9DC6: mov eax, dword ptr [ebp + 8] */
    eax = (uint32_t)MEM16(eax + 0x8); /* 0x120E9DC9: movzx eax, word ptr [eax + 8] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0; /* 0x120E9DCD: and dword ptr [ebp + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(ebp + 0x10), LO16(eax) */ /* 0x120E9DD1: cmp word ptr [ebp + 0x10], ax */
    _flag_a = (uint32_t)(MEM16(ebp + 0x10)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E9EE4; /* 0x120E9DD5: je 0x120e9ee4 */
L_120E9DDB:
    /* cmp MEM16(edi), 3 */ /* 0x120E9DDB: cmp word ptr [edi], 3 */
    _flag_a = (uint32_t)(MEM16(edi)) << 16; _flag_b = (uint32_t)(3) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E9DEB; /* 0x120E9DDF: je 0x120e9deb */
L_120E9DE1:
    eax = (uint32_t)MEM16(edi + 0x6); /* 0x120E9DE1: movzx eax, word ptr [edi + 6] */
    edi = (uint32_t)MEM16(edi + 0x4); /* 0x120E9DE5: movzx edi, word ptr [edi + 4] */
    goto L_120E9DF3; /* 0x120E9DE9: jmp 0x120e9df3 */
L_120E9DEB:
    eax = (uint32_t)MEM16(edi + 0x4); /* 0x120E9DEB: movzx eax, word ptr [edi + 4] */
    edi = (uint32_t)MEM16(edi + 0x6); /* 0x120E9DEF: movzx edi, word ptr [edi + 6] */
L_120E9DF3:
    MEM32(ebp + (-0x10)) = eax; /* 0x120E9DF3: mov dword ptr [ebp - 0x10], eax */
    /* test LO8(eax), 3 */ /* 0x120E9DF6: test al, 3 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E9EE4; /* 0x120E9DF8: je 0x120e9ee4 */
L_120E9DFE:
    esi = MEM32(ebp + 0x8); /* 0x120E9DFE: mov esi, dword ptr [ebp + 8] */
    ebx = (uint32_t)MEM16(esi + 0x8); /* 0x120E9E01: movzx ebx, word ptr [esi + 8] */
    /* cmp MEM16(ebp + (-0xC)), LO16(ebx) */ /* 0x120E9E05: cmp word ptr [ebp - 0xc], bx */
    _flag_a = (uint32_t)(MEM16(ebp + (-0xC))) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    ebx = 0x12008A44u; /* 0x120E9E09: mov ebx, 0x12008a44 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120E9E15; /* 0x120E9E0E: je 0x120e9e15 */
L_120E9E10:
    ebx = 0x12008A34u; /* 0x120E9E10: mov ebx, 0x12008a34 */
L_120E9E15:
    esi = MEM32(ebp + 0x14); /* 0x120E9E15: mov esi, dword ptr [ebp + 0x14] */
    edi = (uint32_t)((int32_t)edi * (int32_t)esi); /* 0x120E9E18: imul edi, esi */
    MEM32(ebp + (-0x18)) = ebx; /* 0x120E9E1B: mov dword ptr [ebp - 0x18], ebx */
    ebx = eax + 0x3; /* 0x120E9E1E: lea ebx, [eax + 3] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFCu);
    ebx = ebx & 0xFFFFFFFCu; /* 0x120E9E21: and ebx, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x10) = ebx; /* 0x120E9E24: mov dword ptr [ebp + 0x10], ebx */
    ebx = MEM32(ebp + (-0x4)); /* 0x120E9E27: mov ebx, dword ptr [ebp - 4] */
    /* test edi, edi */ /* 0x120E9E2A: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E9EE2; /* 0x120E9E2C: je 0x120e9ee2 */
L_120E9E32:
    ebx = eax; /* 0x120E9E32: mov ebx, eax */
    if (2u) _cf = (((ebx) >> 30) & 1u); /* 0x120E9E34: shl ebx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ebx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 2u; /* 0x120E9E34: shl ebx, 2 */
    MEM32(ebp + (-0x20)) = ebx; /* 0x120E9E37: mov dword ptr [ebp - 0x20], ebx */
    ebx = MEM32(ebp + 0x10); /* 0x120E9E3A: mov ebx, dword ptr [ebp + 0x10] */
    if (2u) _cf = (((ebx) >> 30) & 1u); /* 0x120E9E3D: shl ebx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ebx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 2u; /* 0x120E9E3D: shl ebx, 2 */
    MEM32(ebp + (-0x1C)) = ebx; /* 0x120E9E40: mov dword ptr [ebp - 0x1c], ebx */
    esi = edi * 4 + 0x4; /* 0x120E9E43: lea esi, [edi*4 + 4] */
    ebx = esi; /* 0x120E9E4A: mov ebx, esi */
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ebp + 0x10)); /* 0x120E9E4C: imul esi, dword ptr [ebp + 0x10] */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)eax); /* 0x120E9E50: imul ebx, eax */
    eax = edi; /* 0x120E9E53: mov eax, edi */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x10)); /* 0x120E9E55: imul eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + ecx; /* 0x120E9E59: add ebx, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x10)); /* 0x120E9E5B: mov ecx, dword ptr [ebp - 0x10] */
    MEM32(ebp + (-0x14)) = ebx; /* 0x120E9E5E: mov dword ptr [ebp - 0x14], ebx */
    ebx = MEM32(ebp + (-0x4)); /* 0x120E9E61: mov ebx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x120E9E64: add eax, ecx */
    _flag_k = FK_ADD;
    eax = ebx + eax * 4; /* 0x120E9E66: lea eax, [ebx + eax*4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ebx; /* 0x120E9E69: add esi, ebx */
    _flag_k = FK_ADD;
    ebx = MEM32(ebp + 0x10); /* 0x120E9E6B: mov ebx, dword ptr [ebp + 0x10] */
L_120E9E6E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x1C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x1C)); /* 0x120E9E6E: sub eax, dword ptr [ebp - 0x1c] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x120E9E71: dec edi */
    _flag_k = FK_DEC;
    MEM32(ebp + (-0x8)) = eax; /* 0x120E9E72: mov dword ptr [ebp - 8], eax */
    eax = ebx; /* 0x120E9E75: mov eax, ebx */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x120E9E77: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x120E9E77: shl eax, 2 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - eax; /* 0x120E9E7A: sub esi, eax */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x14)); /* 0x120E9E7C: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x20)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x20)); /* 0x120E9E7F: sub eax, dword ptr [ebp - 0x20] */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x2C)) = edi; /* 0x120E9E82: mov dword ptr [ebp - 0x2c], edi */
    MEM32(ebp + (-0xC)) = esi; /* 0x120E9E85: mov dword ptr [ebp - 0xc], esi */
    MEM32(ebp + (-0x14)) = eax; /* 0x120E9E88: mov dword ptr [ebp - 0x14], eax */
    MEM32(ebp + (-0x24)) = ebx; /* 0x120E9E8B: mov dword ptr [ebp - 0x24], ebx */
    /* cmp ebx, ecx */ /* 0x120E9E8E: cmp ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E9EB5; /* 0x120E9E90: jbe 0x120e9eb5 */
L_120E9E92:
    edi = MEM32(ebp + (-0x18)); /* 0x120E9E92: mov edi, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0x28)) = esi; /* 0x120E9E95: mov dword ptr [ebp - 0x28], esi */
L_120E9E98:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x120E9E98: dec ebx */
    _flag_k = FK_DEC;
    eax = ebx; /* 0x120E9E99: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x120E9E9B: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edi + eax * 4); /* 0x120E9E9E: mov eax, dword ptr [edi + eax*4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x120E9EA1: sub esi, edx */
    _flag_k = FK_CMP;
    MEM32(esi) = eax; /* 0x120E9EA3: mov dword ptr [esi], eax */
    /* cmp ebx, ecx */ /* 0x120E9EA5: cmp ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_120E9E98; /* 0x120E9EA7: ja 0x120e9e98 */
L_120E9EA9:
    edi = MEM32(ebp + (-0x2C)); /* 0x120E9EA9: mov edi, dword ptr [ebp - 0x2c] */
    ebx = MEM32(ebp + 0x10); /* 0x120E9EAC: mov ebx, dword ptr [ebp + 0x10] */
    esi = MEM32(ebp + (-0xC)); /* 0x120E9EAF: mov esi, dword ptr [ebp - 0xc] */
    eax = MEM32(ebp + (-0x14)); /* 0x120E9EB2: mov eax, dword ptr [ebp - 0x14] */
L_120E9EB5:
    MEM32(ebp + (-0x2C)) = ecx; /* 0x120E9EB5: mov dword ptr [ebp - 0x2c], ecx */
    /* test ecx, ecx */ /* 0x120E9EB8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E9ED5; /* 0x120E9EBA: je 0x120e9ed5 */
L_120E9EBC:
    ebx = MEM32(ebp + (-0x8)); /* 0x120E9EBC: mov ebx, dword ptr [ebp - 8] */
    esi = eax; /* 0x120E9EBF: mov esi, eax */
L_120E9EC1:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - edx; /* 0x120E9EC1: sub esi, edx */
    _flag_k = FK_CMP;
    eax = MEM32(esi); /* 0x120E9EC3: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - edx; /* 0x120E9EC5: sub ebx, edx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x120E9EC7: dec ecx */
    _flag_k = FK_DEC;
    MEM32(ebx) = eax; /* 0x120E9EC8: mov dword ptr [ebx], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120E9EC1; /* 0x120E9ECA: jne 0x120e9ec1 */
L_120E9ECC:
    ecx = MEM32(ebp + (-0x10)); /* 0x120E9ECC: mov ecx, dword ptr [ebp - 0x10] */
    ebx = MEM32(ebp + 0x10); /* 0x120E9ECF: mov ebx, dword ptr [ebp + 0x10] */
    esi = MEM32(ebp + (-0xC)); /* 0x120E9ED2: mov esi, dword ptr [ebp - 0xc] */
L_120E9ED5:
    eax = MEM32(ebp + (-0x8)); /* 0x120E9ED5: mov eax, dword ptr [ebp - 8] */
    /* test edi, edi */ /* 0x120E9ED8: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E9E6E; /* 0x120E9EDA: jne 0x120e9e6e */
L_120E9EDC:
    esi = MEM32(ebp + 0x14); /* 0x120E9EDC: mov esi, dword ptr [ebp + 0x14] */
    ebx = MEM32(ebp + (-0x4)); /* 0x120E9EDF: mov ebx, dword ptr [ebp - 4] */
L_120E9EE2:
    ecx = ebx; /* 0x120E9EE2: mov ecx, ebx */
L_120E9EE4:
    edi = MEM32(ebp + 0x8); /* 0x120E9EE4: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi + 0x2C); /* 0x120E9EE7: mov eax, dword ptr [edi + 0x2c] */
    edx = (uint32_t)MEM16(edi + 0xC); /* 0x120E9EEA: movzx edx, word ptr [edi + 0xc] */
    eax = (uint32_t)((int32_t)eax * (int32_t)esi); /* 0x120E9EEE: imul eax, esi */
    /* cmp eax, edx */ /* 0x120E9EF1: cmp eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E9EF7; /* 0x120E9EF3: jbe 0x120e9ef7 */
L_120E9EF5:
    eax = edx; /* 0x120E9EF5: mov eax, edx */
L_120E9EF7:
    edx = MEM32(edi + 0x1C); /* 0x120E9EF7: mov edx, dword ptr [edi + 0x1c] */
    /* test edx, edx */ /* 0x120E9EFA: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120E9F05; /* 0x120E9EFC: jne 0x120e9f05 */
L_120E9EFE:
    eax = 0x80004005u; /* 0x120E9EFE: mov eax, 0x80004005 */
    goto L_120E9F1B; /* 0x120E9F03: jmp 0x120e9f1b */
L_120E9F05:
    PUSH32(esp, eax); /* 0x120E9F05: push eax */
    eax = (uint32_t)MEM16(edi + 0xA); /* 0x120E9F06: movzx eax, word ptr [edi + 0xa] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x18); /* 0x120E9F0A: add eax, dword ptr [ebp + 0x18] */
    _flag_k = FK_ADD;
    PUSH32(esp, ebx); /* 0x120E9F0D: push ebx */
    PUSH32(esp, ecx); /* 0x120E9F0E: push ecx */
    PUSH32(esp, eax); /* 0x120E9F0F: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120E9F10: push dword ptr [ebp + 0xc] */
    RECOMP_ICALL(edx); /* 0x120E9F13: call edx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120E9F15: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120E9F1B; /* 0x120E9F17: js 0x120e9f1b */
L_120E9F19:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120E9F19: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E9F1B:
    edi = POP32_VAL(esp); /* 0x120E9F1B: pop edi */
    esi = POP32_VAL(esp); /* 0x120E9F1C: pop esi */
    ebx = POP32_VAL(esp); /* 0x120E9F1D: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120E9F1E: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x120E9F1F: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_120E9F27(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120E9F27u);

L_120E9F27:
    edi = edi; /* 0x120E9F27: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120E9F29: push ebp */
    ebp = esp; /* 0x120E9F2A: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x120E9F2C: sub esp, 0x1c */
    _flag_k = FK_CMP;
    ecx = MEM32(ebp + 0x8); /* 0x120E9F2F: mov ecx, dword ptr [ebp + 8] */
    edx = MEM32(ecx + 0x20); /* 0x120E9F32: mov edx, dword ptr [ecx + 0x20] */
    PUSH32(esp, ebx); /* 0x120E9F35: push ebx */
    ebx = MEM32(ecx + 0x18); /* 0x120E9F36: mov ebx, dword ptr [ecx + 0x18] */
    eax = (uint32_t)MEM16(ebx); /* 0x120E9F39: movzx eax, word ptr [ebx] */
    PUSH32(esp, esi); /* 0x120E9F3C: push esi */
    PUSH32(esp, edi); /* 0x120E9F3D: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120E9F3E: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x120E9F40: sub eax, edi */
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = ebx; /* 0x120E9F42: mov dword ptr [ebp - 8], ebx */
    MEM32(ebp + (-0x4)) = edx; /* 0x120E9F45: mov dword ptr [ebp - 4], edx */
    MEM32(ebp + (-0x14)) = 3; /* 0x120E9F48: mov dword ptr [ebp - 0x14], 3 */
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_120EA1EC; /* 0x120E9F4F: je 0x120ea1ec */
L_120E9F55:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E9F55: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120EA173; /* 0x120E9F56: je 0x120ea173 */
L_120E9F5C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E9F5C: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120EA0E4; /* 0x120E9F5D: je 0x120ea0e4 */
L_120E9F63:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E9F63: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120EA052; /* 0x120E9F64: je 0x120ea052 */
L_120E9F6A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E9F6A: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120E9F6B: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120E9F78; /* 0x120E9F6C: je 0x120e9f78 */
L_120E9F6E:
    eax = 0x80004001u; /* 0x120E9F6E: mov eax, 0x80004001 */
    goto L_120EA3F0; /* 0x120E9F73: jmp 0x120ea3f0 */
L_120E9F78:
    eax = MEM32(ebp + 0x14); /* 0x120E9F78: mov eax, dword ptr [ebp + 0x14] */
    ecx = MEM32(ecx + 0x34); /* 0x120E9F7B: mov ecx, dword ptr [ecx + 0x34] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x120E9F7E: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x120E9F7E: shl eax, 4 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120E9F81: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x120E9F83: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    esi = eax; /* 0x120E9F85: mov esi, eax */
    eax = (uint32_t)MEM16(ebx + 0x8); /* 0x120E9F87: movzx eax, word ptr [ebx + 8] */
    MEM32(ebp + 0x14) = esi; /* 0x120E9F8B: mov dword ptr [ebp + 0x14], esi */
    /* cmp esi, eax */ /* 0x120E9F8E: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120E9F97; /* 0x120E9F90: jbe 0x120e9f97 */
L_120E9F92:
    esi = eax; /* 0x120E9F92: mov esi, eax */
    MEM32(ebp + 0x14) = eax; /* 0x120E9F94: mov dword ptr [ebp + 0x14], eax */
L_120E9F97:
    edx = MEM32(ebp + (-0x4)); /* 0x120E9F97: mov edx, dword ptr [ebp - 4] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)esi); /* 0x120E9F9A: imul ecx, esi */
    MEM32(ebp + (-0x18)) = ecx; /* 0x120E9F9D: mov dword ptr [ebp - 0x18], ecx */
    /* test ecx, ecx */ /* 0x120E9FA0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120E9FE3; /* 0x120E9FA2: je 0x120e9fe3 */
L_120E9FA4:
    PUSH32(esp, 3); /* 0x120E9FA4: push 3 */
    eax = POP32_VAL(esp); /* 0x120E9FA6: pop eax */
    MEM32(ebp + (-0x14)) = eax; /* 0x120E9FA7: mov dword ptr [ebp - 0x14], eax */
    ebx = ecx; /* 0x120E9FAA: mov ebx, ecx */
    esi = edx; /* 0x120E9FAC: mov esi, edx */
L_120E9FAE:
    edx = edi; /* 0x120E9FAE: mov edx, edi */
    if (2u) _cf = (((edx) >> 1) & 1u); /* 0x120E9FB0: shr edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 2u; /* 0x120E9FB0: shr edx, 2 */
    ecx = edi; /* 0x120E9FB3: mov ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x120E9FB5: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx; /* 0x120E9FB7: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    eax = eax & MEM32(ebp + (-0x14)); /* 0x120E9FB9: and eax, dword ptr [ebp - 0x14] */
    _cf = 0;
    _flag_k = FK_TEST;
    if (2u) _cf = (((edx) >> 1) & 1u); /* 0x120E9FBC: shr edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 2u; /* 0x120E9FBC: shr edx, 2 */
    ecx = eax + ecx * 4; /* 0x120E9FBF: lea ecx, [eax + ecx*4] */
    eax = MEM32(ebp + 0x10); /* 0x120E9FC2: mov eax, dword ptr [ebp + 0x10] */
    eax = MEM32(eax + edx * 4); /* 0x120E9FC5: mov eax, dword ptr [eax + edx*4] */
    eax = MEM32(eax + ecx * 4); /* 0x120E9FC8: mov eax, dword ptr [eax + ecx*4] */
    MEM32(esi) = eax; /* 0x120E9FCB: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 4; /* 0x120E9FCD: add esi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120E9FD0: inc edi */
    _flag_k = FK_INC;
    PUSH32(esp, 3); /* 0x120E9FD1: push 3 */
    eax = POP32_VAL(esp); /* 0x120E9FD3: pop eax */
    /* cmp edi, ebx */ /* 0x120E9FD4: cmp edi, ebx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E9FAE; /* 0x120E9FD6: jb 0x120e9fae */
L_120E9FD8:
    ebx = MEM32(ebp + (-0x8)); /* 0x120E9FD8: mov ebx, dword ptr [ebp - 8] */
    esi = MEM32(ebp + 0x14); /* 0x120E9FDB: mov esi, dword ptr [ebp + 0x14] */
    edx = MEM32(ebp + (-0x4)); /* 0x120E9FDE: mov edx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120E9FE1: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_120E9FE3:
    eax = edi; /* 0x120E9FE3: mov eax, edi */
    MEM32(ebp + (-0x14)) = eax; /* 0x120E9FE5: mov dword ptr [ebp - 0x14], eax */
    /* test esi, esi */ /* 0x120E9FE8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EA3EE; /* 0x120E9FEA: je 0x120ea3ee */
L_120E9FF0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120E9FF0: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(esi), MEM16(ebx + 0xA) */ /* 0x120E9FF2: cmp si, word ptr [ebx + 0xa] */
    _flag_a = (uint32_t)(LO16(esi)) << 16; _flag_b = (uint32_t)(MEM16(ebx + 0xA)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    esi = MEM32(ebp + 0x14); /* 0x120E9FF6: mov esi, dword ptr [ebp + 0x14] */
    ecx = edi; /* 0x120E9FF9: mov ecx, edi */
    MEM32(ebp + 0x10) = ecx; /* 0x120E9FFB: mov dword ptr [ebp + 0x10], ecx */
    if (CMP_AE(_flag_a, _flag_b)) goto L_120EA045; /* 0x120E9FFE: jae 0x120ea045 */
L_120EA000:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120EA000: push dword ptr [ebp + 0x18] */
    eax = MEM32(ebp + 0x8); /* 0x120EA003: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x38); /* 0x120EA006: mov eax, dword ptr [eax + 0x38] */
    eax = MEM32(eax + ecx * 4); /* 0x120EA009: mov eax, dword ptr [eax + ecx*4] */
    PUSH32(esp, MEM32(eax + 0x30)); /* 0x120EA00C: push dword ptr [eax + 0x30] */
    MEM32(ebp + (-0x18)) = eax; /* 0x120EA00F: mov dword ptr [ebp - 0x18], eax */
    PUSH32(esp, edx); /* 0x120EA012: push edx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EA013: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x120EA016: push eax */
    RECOMP_CALL(sub_120E874C); /* 0x120EA017: call 0x120e874c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EA01C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EA3F0; /* 0x120EA01E: js 0x120ea3f0 */
L_120EA024:
    eax = MEM32(ebp + (-0x18)); /* 0x120EA024: mov eax, dword ptr [ebp - 0x18] */
    eax = MEM32(eax + 0x30); /* 0x120EA027: mov eax, dword ptr [eax + 0x30] */
    edx = MEM32(ebp + (-0x4)); /* 0x120EA02A: mov edx, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + 0x10); /* 0x120EA02D: mov ecx, dword ptr [ebp + 0x10] */
    edx = edx + eax * 4; /* 0x120EA030: lea edx, [edx + eax*4] */
    eax = (uint32_t)MEM16(ebx + 0xA); /* 0x120EA033: movzx eax, word ptr [ebx + 0xa] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120EA037: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x4)) = edx; /* 0x120EA038: mov dword ptr [ebp - 4], edx */
    MEM32(ebp + 0x10) = ecx; /* 0x120EA03B: mov dword ptr [ebp + 0x10], ecx */
    /* cmp ecx, eax */ /* 0x120EA03E: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120EA000; /* 0x120EA040: jb 0x120ea000 */
L_120EA042:
    eax = MEM32(ebp + (-0x14)); /* 0x120EA042: mov eax, dword ptr [ebp - 0x14] */
L_120EA045:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120EA045: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x14)) = eax; /* 0x120EA046: mov dword ptr [ebp - 0x14], eax */
    /* cmp eax, esi */ /* 0x120EA049: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120E9FF0; /* 0x120EA04B: jb 0x120e9ff0 */
L_120EA04D:
    goto L_120EA3EE; /* 0x120EA04D: jmp 0x120ea3ee */
L_120EA052:
    eax = (uint32_t)MEM16(ebx + 0x8); /* 0x120EA052: movzx eax, word ptr [ebx + 8] */
    esi = MEM32(ebp + 0x14); /* 0x120EA056: mov esi, dword ptr [ebp + 0x14] */
    MEM32(ebp + 0x14) = esi; /* 0x120EA059: mov dword ptr [ebp + 0x14], esi */
    /* cmp esi, eax */ /* 0x120EA05C: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120EA065; /* 0x120EA05E: jbe 0x120ea065 */
L_120EA060:
    esi = eax; /* 0x120EA060: mov esi, eax */
    MEM32(ebp + 0x14) = eax; /* 0x120EA062: mov dword ptr [ebp + 0x14], eax */
L_120EA065:
    eax = edi; /* 0x120EA065: mov eax, edi */
    MEM32(ebp + (-0xC)) = edx; /* 0x120EA067: mov dword ptr [ebp - 0xc], edx */
    MEM32(ebp + (-0x10)) = eax; /* 0x120EA06A: mov dword ptr [ebp - 0x10], eax */
    /* test esi, esi */ /* 0x120EA06D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EA242; /* 0x120EA06F: je 0x120ea242 */
L_120EA075:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120EA075: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = edi; /* 0x120EA077: mov ecx, edi */
    MEM32(ebp + (-0x18)) = ecx; /* 0x120EA079: mov dword ptr [ebp - 0x18], ecx */
    /* cmp LO16(edx), MEM16(ebx + 0x6) */ /* 0x120EA07C: cmp dx, word ptr [ebx + 6] */
    _flag_a = (uint32_t)(LO16(edx)) << 16; _flag_b = (uint32_t)(MEM16(ebx + 0x6)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_120EA0D7; /* 0x120EA080: jae 0x120ea0d7 */
L_120EA082:
    eax = (uint32_t)MEM16(ebx + 0x4); /* 0x120EA082: movzx eax, word ptr [ebx + 4] */
    esi = MEM32(ebp + (-0x10)); /* 0x120EA086: mov esi, dword ptr [ebp - 0x10] */
L_120EA089:
    edx = edi; /* 0x120EA089: mov edx, edi */
    /* test eax, eax */ /* 0x120EA08B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EA0C1; /* 0x120EA08D: je 0x120ea0c1 */
L_120EA08F:
    /* cmp edx, 4 */ /* 0x120EA08F: cmp edx, 4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120EA0AA; /* 0x120EA092: ja 0x120ea0aa */
L_120EA094:
    /* cmp ecx, 4 */ /* 0x120EA094: cmp ecx, 4 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120EA0AA; /* 0x120EA097: ja 0x120ea0aa */
L_120EA099:
    eax = MEM32(ebp + 0x10); /* 0x120EA099: mov eax, dword ptr [ebp + 0x10] */
    eax = MEM32(eax + esi * 4); /* 0x120EA09C: mov eax, dword ptr [eax + esi*4] */
    ecx = edx + ecx * 4; /* 0x120EA09F: lea ecx, [edx + ecx*4] */
    eax = MEM32(eax + ecx * 4); /* 0x120EA0A2: mov eax, dword ptr [eax + ecx*4] */
    ecx = MEM32(ebp + (-0x18)); /* 0x120EA0A5: mov ecx, dword ptr [ebp - 0x18] */
    goto L_120EA0AC; /* 0x120EA0A8: jmp 0x120ea0ac */
L_120EA0AA:
    eax = edi; /* 0x120EA0AA: mov eax, edi */
L_120EA0AC:
    ebx = MEM32(ebp + (-0xC)); /* 0x120EA0AC: mov ebx, dword ptr [ebp - 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) + 4; /* 0x120EA0AF: add dword ptr [ebp - 0xc], 4 */
    _flag_k = FK_ADD;
    MEM32(ebx) = eax; /* 0x120EA0B3: mov dword ptr [ebx], eax */
    ebx = MEM32(ebp + (-0x8)); /* 0x120EA0B5: mov ebx, dword ptr [ebp - 8] */
    eax = (uint32_t)MEM16(ebx + 0x4); /* 0x120EA0B8: movzx eax, word ptr [ebx + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120EA0BC: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, eax */ /* 0x120EA0BD: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120EA08F; /* 0x120EA0BF: jb 0x120ea08f */
L_120EA0C1:
    eax = (uint32_t)MEM16(ebx + 0x6); /* 0x120EA0C1: movzx eax, word ptr [ebx + 6] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120EA0C5: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, eax */ /* 0x120EA0C6: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = (uint32_t)MEM16(ebx + 0x4); /* 0x120EA0C8: movzx eax, word ptr [ebx + 4] */
    MEM32(ebp + (-0x18)) = ecx; /* 0x120EA0CC: mov dword ptr [ebp - 0x18], ecx */
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120EA089; /* 0x120EA0CF: jb 0x120ea089 */
L_120EA0D1:
    esi = MEM32(ebp + 0x14); /* 0x120EA0D1: mov esi, dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + (-0x10)); /* 0x120EA0D4: mov eax, dword ptr [ebp - 0x10] */
L_120EA0D7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120EA0D7: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x10)) = eax; /* 0x120EA0D8: mov dword ptr [ebp - 0x10], eax */
    /* cmp eax, esi */ /* 0x120EA0DB: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120EA075; /* 0x120EA0DD: jb 0x120ea075 */
L_120EA0DF:
    goto L_120EA23C; /* 0x120EA0DF: jmp 0x120ea23c */
L_120EA0E4:
    eax = (uint32_t)MEM16(ebx + 0x8); /* 0x120EA0E4: movzx eax, word ptr [ebx + 8] */
    esi = MEM32(ebp + 0x14); /* 0x120EA0E8: mov esi, dword ptr [ebp + 0x14] */
    MEM32(ebp + 0x14) = esi; /* 0x120EA0EB: mov dword ptr [ebp + 0x14], esi */
    /* cmp esi, eax */ /* 0x120EA0EE: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120EA0F7; /* 0x120EA0F0: jbe 0x120ea0f7 */
L_120EA0F2:
    esi = eax; /* 0x120EA0F2: mov esi, eax */
    MEM32(ebp + 0x14) = eax; /* 0x120EA0F4: mov dword ptr [ebp + 0x14], eax */
L_120EA0F7:
    MEM32(ebp + (-0x10)) = edx; /* 0x120EA0F7: mov dword ptr [ebp - 0x10], edx */
    ecx = edi; /* 0x120EA0FA: mov ecx, edi */
    /* test esi, esi */ /* 0x120EA0FC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EA23F; /* 0x120EA0FE: je 0x120ea23f */
L_120EA104:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EA104: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    edx = edi; /* 0x120EA106: mov edx, edi */
    /* cmp LO16(eax), MEM16(ebx + 0x4) */ /* 0x120EA108: cmp ax, word ptr [ebx + 4] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebx + 0x4)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_120EA169; /* 0x120EA10C: jae 0x120ea169 */
L_120EA10E:
    esi = (uint32_t)MEM16(ebx + 0x6); /* 0x120EA10E: movzx esi, word ptr [ebx + 6] */
L_120EA112:
    eax = edi; /* 0x120EA112: mov eax, edi */
    MEM32(ebp + (-0x18)) = eax; /* 0x120EA114: mov dword ptr [ebp - 0x18], eax */
    /* test esi, esi */ /* 0x120EA117: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EA15D; /* 0x120EA119: je 0x120ea15d */
L_120EA11B:
    esi = edx; /* 0x120EA11B: mov esi, edx */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x120EA11D: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x120EA11D: shl esi, 2 */
    goto L_120EA125; /* 0x120EA120: jmp 0x120ea125 */
L_120EA122:
    esi = MEM32(ebp + (-0xC)); /* 0x120EA122: mov esi, dword ptr [ebp - 0xc] */
L_120EA125:
    /* cmp edx, 4 */ /* 0x120EA125: cmp edx, 4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120EA13A; /* 0x120EA128: ja 0x120ea13a */
L_120EA12A:
    /* cmp eax, 4 */ /* 0x120EA12A: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120EA13A; /* 0x120EA12D: ja 0x120ea13a */
L_120EA12F:
    eax = MEM32(ebp + 0x10); /* 0x120EA12F: mov eax, dword ptr [ebp + 0x10] */
    eax = MEM32(eax + ecx * 4); /* 0x120EA132: mov eax, dword ptr [eax + ecx*4] */
    eax = MEM32(esi + eax); /* 0x120EA135: mov eax, dword ptr [esi + eax] */
    goto L_120EA13C; /* 0x120EA138: jmp 0x120ea13c */
L_120EA13A:
    eax = edi; /* 0x120EA13A: mov eax, edi */
L_120EA13C:
    ebx = MEM32(ebp + (-0x10)); /* 0x120EA13C: mov ebx, dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) + 4; /* 0x120EA13F: add dword ptr [ebp - 0x10], 4 */
    _flag_k = FK_ADD;
    MEM32(ebx) = eax; /* 0x120EA143: mov dword ptr [ebx], eax */
    ebx = MEM32(ebp + (-0x8)); /* 0x120EA145: mov ebx, dword ptr [ebp - 8] */
    eax = MEM32(ebp + (-0x18)); /* 0x120EA148: mov eax, dword ptr [ebp - 0x18] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x10u; /* 0x120EA14B: add esi, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0xC)) = esi; /* 0x120EA14E: mov dword ptr [ebp - 0xc], esi */
    esi = (uint32_t)MEM16(ebx + 0x6); /* 0x120EA151: movzx esi, word ptr [ebx + 6] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120EA155: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x18)) = eax; /* 0x120EA156: mov dword ptr [ebp - 0x18], eax */
    /* cmp eax, esi */ /* 0x120EA159: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120EA122; /* 0x120EA15B: jb 0x120ea122 */
L_120EA15D:
    eax = (uint32_t)MEM16(ebx + 0x4); /* 0x120EA15D: movzx eax, word ptr [ebx + 4] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120EA161: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, eax */ /* 0x120EA162: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120EA112; /* 0x120EA164: jb 0x120ea112 */
L_120EA166:
    esi = MEM32(ebp + 0x14); /* 0x120EA166: mov esi, dword ptr [ebp + 0x14] */
L_120EA169:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120EA169: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, esi */ /* 0x120EA16A: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120EA104; /* 0x120EA16C: jb 0x120ea104 */
L_120EA16E:
    goto L_120EA23C; /* 0x120EA16E: jmp 0x120ea23c */
L_120EA173:
    esi = MEM32(ebp + 0x14); /* 0x120EA173: mov esi, dword ptr [ebp + 0x14] */
    eax = (uint32_t)MEM16(ebx + 0x8); /* 0x120EA176: movzx eax, word ptr [ebx + 8] */
    if (2u) _cf = (((esi) >> 30) & 1u); /* 0x120EA17A: shl esi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((esi << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 2u; /* 0x120EA17A: shl esi, 2 */
    MEM32(ebp + 0x14) = esi; /* 0x120EA17D: mov dword ptr [ebp + 0x14], esi */
    /* cmp esi, eax */ /* 0x120EA180: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120EA189; /* 0x120EA182: jbe 0x120ea189 */
L_120EA184:
    esi = eax; /* 0x120EA184: mov esi, eax */
    MEM32(ebp + 0x14) = eax; /* 0x120EA186: mov dword ptr [ebp + 0x14], eax */
L_120EA189:
    eax = edi; /* 0x120EA189: mov eax, edi */
    MEM32(ebp + (-0x18)) = edx; /* 0x120EA18B: mov dword ptr [ebp - 0x18], edx */
    MEM32(ebp + (-0x10)) = eax; /* 0x120EA18E: mov dword ptr [ebp - 0x10], eax */
    /* test esi, esi */ /* 0x120EA191: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EA242; /* 0x120EA193: je 0x120ea242 */
L_120EA199:
    ecx = (uint32_t)MEM16(ebx + 0x6); /* 0x120EA199: movzx ecx, word ptr [ebx + 6] */
L_120EA19D:
    edx = edi; /* 0x120EA19D: mov edx, edi */
    /* test ecx, ecx */ /* 0x120EA19F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EA1E2; /* 0x120EA1A1: je 0x120ea1e2 */
L_120EA1A3:
    esi = MEM32(ebp + (-0x10)); /* 0x120EA1A3: mov esi, dword ptr [ebp - 0x10] */
L_120EA1A6:
    /* cmp edx, 4 */ /* 0x120EA1A6: cmp edx, 4 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120EA1AF; /* 0x120EA1A9: jbe 0x120ea1af */
L_120EA1AB:
    eax = edi; /* 0x120EA1AB: mov eax, edi */
    goto L_120EA1C8; /* 0x120EA1AD: jmp 0x120ea1c8 */
L_120EA1AF:
    ebx = MEM32(ebp + 0x10); /* 0x120EA1AF: mov ebx, dword ptr [ebp + 0x10] */
    eax = esi; /* 0x120EA1B2: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x120EA1B4: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax + edx * 4; /* 0x120EA1B7: lea ecx, [eax + edx*4] */
    eax = esi; /* 0x120EA1BA: mov eax, esi */
    if (2u) _cf = (((eax) >> 1) & 1u); /* 0x120EA1BC: shr eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 2u; /* 0x120EA1BC: shr eax, 2 */
    eax = MEM32(ebx + eax * 4); /* 0x120EA1BF: mov eax, dword ptr [ebx + eax*4] */
    eax = MEM32(eax + ecx * 4); /* 0x120EA1C2: mov eax, dword ptr [eax + ecx*4] */
    ebx = MEM32(ebp + (-0x8)); /* 0x120EA1C5: mov ebx, dword ptr [ebp - 8] */
L_120EA1C8:
    ecx = MEM32(ebp + (-0x18)); /* 0x120EA1C8: mov ecx, dword ptr [ebp - 0x18] */
    MEM32(ecx) = eax; /* 0x120EA1CB: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x120EA1CD: add ecx, 4 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x18)) = ecx; /* 0x120EA1D0: mov dword ptr [ebp - 0x18], ecx */
    ecx = (uint32_t)MEM16(ebx + 0x6); /* 0x120EA1D3: movzx ecx, word ptr [ebx + 6] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120EA1D7: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, ecx */ /* 0x120EA1D8: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120EA1A6; /* 0x120EA1DA: jb 0x120ea1a6 */
L_120EA1DC:
    esi = MEM32(ebp + 0x14); /* 0x120EA1DC: mov esi, dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + (-0x10)); /* 0x120EA1DF: mov eax, dword ptr [ebp - 0x10] */
L_120EA1E2:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120EA1E2: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x10)) = eax; /* 0x120EA1E3: mov dword ptr [ebp - 0x10], eax */
    /* cmp eax, esi */ /* 0x120EA1E6: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120EA19D; /* 0x120EA1E8: jb 0x120ea19d */
L_120EA1EA:
    goto L_120EA23C; /* 0x120EA1EA: jmp 0x120ea23c */
L_120EA1EC:
    esi = MEM32(ebp + 0x14); /* 0x120EA1EC: mov esi, dword ptr [ebp + 0x14] */
    eax = (uint32_t)MEM16(ebx + 0x8); /* 0x120EA1EF: movzx eax, word ptr [ebx + 8] */
    if (4u) _cf = (((esi) >> 28) & 1u); /* 0x120EA1F3: shl esi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((esi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    esi = esi << 4u; /* 0x120EA1F3: shl esi, 4 */
    MEM32(ebp + 0x14) = esi; /* 0x120EA1F6: mov dword ptr [ebp + 0x14], esi */
    /* cmp esi, eax */ /* 0x120EA1F9: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120EA202; /* 0x120EA1FB: jbe 0x120ea202 */
L_120EA1FD:
    esi = eax; /* 0x120EA1FD: mov esi, eax */
    MEM32(ebp + 0x14) = eax; /* 0x120EA1FF: mov dword ptr [ebp + 0x14], eax */
L_120EA202:
    MEM32(ebp + (-0x18)) = edx; /* 0x120EA202: mov dword ptr [ebp - 0x18], edx */
    /* test esi, esi */ /* 0x120EA205: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EA242; /* 0x120EA207: je 0x120ea242 */
L_120EA209:
    ebx = edi; /* 0x120EA209: mov ebx, edi */
L_120EA20B:
    edx = ebx; /* 0x120EA20B: mov edx, ebx */
    if (2u) _cf = (((edx) >> 1) & 1u); /* 0x120EA20D: shr edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 2u; /* 0x120EA20D: shr edx, 2 */
    ecx = ebx; /* 0x120EA210: mov ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(3);
    ecx = ecx & 3; /* 0x120EA212: and ecx, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx; /* 0x120EA215: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x120EA217: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = eax + ecx * 4; /* 0x120EA21A: lea ecx, [eax + ecx*4] */
    eax = MEM32(ebp + 0x10); /* 0x120EA21D: mov eax, dword ptr [ebp + 0x10] */
    if (2u) _cf = (((edx) >> 1) & 1u); /* 0x120EA220: shr edx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edx >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = edx >> 2u; /* 0x120EA220: shr edx, 2 */
    eax = MEM32(eax + edx * 4); /* 0x120EA223: mov eax, dword ptr [eax + edx*4] */
    eax = MEM32(eax + ecx * 4); /* 0x120EA226: mov eax, dword ptr [eax + ecx*4] */
    ecx = MEM32(ebp + (-0x18)); /* 0x120EA229: mov ecx, dword ptr [ebp - 0x18] */
    MEM32(ecx) = eax; /* 0x120EA22C: mov dword ptr [ecx], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x120EA22E: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x120EA231: inc ebx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x18)) = ecx; /* 0x120EA232: mov dword ptr [ebp - 0x18], ecx */
    /* cmp ebx, esi */ /* 0x120EA235: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120EA20B; /* 0x120EA237: jb 0x120ea20b */
L_120EA239:
    ebx = MEM32(ebp + (-0x8)); /* 0x120EA239: mov ebx, dword ptr [ebp - 8] */
L_120EA23C:
    edx = MEM32(ebp + (-0x4)); /* 0x120EA23C: mov edx, dword ptr [ebp - 4] */
L_120EA23F:
    ecx = MEM32(ebp + 0x8); /* 0x120EA23F: mov ecx, dword ptr [ebp + 8] */
L_120EA242:
    eax = (uint32_t)MEM16(ebx + 0x2); /* 0x120EA242: movzx eax, word ptr [ebx + 2] */
    MEM32(ebp + (-0x10)) = 1; /* 0x120EA246: mov dword ptr [ebp - 0x10], 1 */
    /* cmp MEM16(ebp + (-0x14)), LO16(eax) */ /* 0x120EA24D: cmp word ptr [ebp - 0x14], ax */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x14))) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EA2C4; /* 0x120EA251: je 0x120ea2c4 */
L_120EA253:
    ecx = MEM32(ecx + 0x34); /* 0x120EA253: mov ecx, dword ptr [ecx + 0x34] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)esi); /* 0x120EA256: imul ecx, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120EA259: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120EA296; /* 0x120EA25A: je 0x120ea296 */
L_120EA25C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120EA25C: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EA2C4; /* 0x120EA25D: jne 0x120ea2c4 */
L_120EA25F:
    MEM16(ebp + 0x10) = _fpu_cw; /* 0x120EA25F: fnstcw word ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x10); /* 0x120EA262: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)((eax | 0xC00u)); _flag_b = (uint32_t)((eax | 0xC00u));
    eax = eax | 0xC00u; /* 0x120EA265: or eax, 0xc00 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x120EA26A: mov dword ptr [ebp - 0x14], eax */
    _fpu_cw = MEM16(ebp + (-0x14)); /* 0x120EA26D: fldcw word ptr [ebp - 0x14] */
    eax = MEM32(ebp + 0x10); /* 0x120EA270: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x8)) = eax; /* 0x120EA273: mov dword ptr [ebp - 8], eax */
    /* test ecx, ecx */ /* 0x120EA276: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EA291; /* 0x120EA278: je 0x120ea291 */
L_120EA27A:
    fp_push(*(float*)&MEM32(edx + edi * 4)); /* 0x120EA27A: fld dword ptr [edx + edi*4] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x120EA27D: fstp dword ptr [ebp - 0xc] */
    fp_push(*(float*)&MEM32(ebp + (-0xC))); /* 0x120EA280: fld dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x18)) = (uint32_t)(int32_t)fp_to_int(fp_pop()); /* 0x120EA283: fistp dword ptr [ebp - 0x18] */
    eax = MEM32(ebp + (-0x18)); /* 0x120EA286: mov eax, dword ptr [ebp - 0x18] */
    MEM32(edx + edi * 4) = eax; /* 0x120EA289: mov dword ptr [edx + edi*4], eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120EA28C: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, ecx */ /* 0x120EA28D: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120EA27A; /* 0x120EA28F: jb 0x120ea27a */
L_120EA291:
    _fpu_cw = MEM16(ebp + (-0x8)); /* 0x120EA291: fldcw word ptr [ebp - 8] */
    goto L_120EA2C4; /* 0x120EA294: jmp 0x120ea2c4 */
L_120EA296:
    edx = edi; /* 0x120EA296: mov edx, edi */
    /* test ecx, ecx */ /* 0x120EA298: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EA2C4; /* 0x120EA29A: je 0x120ea2c4 */
L_120EA29C:
    fp_push(0.0); /* 0x120EA29C: fldz  */
    esi = MEM32(ebp + (-0x4)); /* 0x120EA29E: mov esi, dword ptr [ebp - 4] */
    ebx = MEM32(ebp + (-0x10)); /* 0x120EA2A1: mov ebx, dword ptr [ebp - 0x10] */
L_120EA2A4:
    fp_push(*(float*)&MEM32(esi + edx * 4)); /* 0x120EA2A4: fld dword ptr [esi + edx*4] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x120EA2A7: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x120EA2A9: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x120EA2AB: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = ebx; /* 0x120EA2AE: mov eax, ebx */
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_120EA2B4; /* 0x120EA2B0: jp 0x120ea2b4 */
L_120EA2B2:
    eax = edi; /* 0x120EA2B2: mov eax, edi */
L_120EA2B4:
    MEM32(esi + edx * 4) = eax; /* 0x120EA2B4: mov dword ptr [esi + edx*4], eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120EA2B7: inc edx */
    _flag_k = FK_INC;
    /* cmp edx, ecx */ /* 0x120EA2B8: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120EA2A4; /* 0x120EA2BA: jb 0x120ea2a4 */
L_120EA2BC:
    esi = MEM32(ebp + 0x14); /* 0x120EA2BC: mov esi, dword ptr [ebp + 0x14] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x120EA2BF: fstp st(0) */
    ebx = MEM32(ebp + (-0x8)); /* 0x120EA2C1: mov ebx, dword ptr [ebp - 8] */
L_120EA2C4:
    eax = MEM32(ebp + 0x8); /* 0x120EA2C4: mov eax, dword ptr [ebp + 8] */
    eax = (uint32_t)MEM16(eax + 0x8); /* 0x120EA2C7: movzx eax, word ptr [eax + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120EA2CB: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(ecx), LO16(eax) */ /* 0x120EA2CD: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EA3B6; /* 0x120EA2D0: je 0x120ea3b6 */
L_120EA2D6:
    /* cmp MEM16(ebx), 3 */ /* 0x120EA2D6: cmp word ptr [ebx], 3 */
    _flag_a = (uint32_t)(MEM16(ebx)) << 16; _flag_b = (uint32_t)(3) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EA2E6; /* 0x120EA2DA: je 0x120ea2e6 */
L_120EA2DC:
    ecx = (uint32_t)MEM16(ebx + 0x6); /* 0x120EA2DC: movzx ecx, word ptr [ebx + 6] */
    edx = (uint32_t)MEM16(ebx + 0x4); /* 0x120EA2E0: movzx edx, word ptr [ebx + 4] */
    goto L_120EA2EE; /* 0x120EA2E4: jmp 0x120ea2ee */
L_120EA2E6:
    ecx = (uint32_t)MEM16(ebx + 0x4); /* 0x120EA2E6: movzx ecx, word ptr [ebx + 4] */
    edx = (uint32_t)MEM16(ebx + 0x6); /* 0x120EA2EA: movzx edx, word ptr [ebx + 6] */
L_120EA2EE:
    /* test LO8(ecx), 3 */ /* 0x120EA2EE: test cl, 3 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EA3B6; /* 0x120EA2F1: je 0x120ea3b6 */
L_120EA2F7:
    /* cmp MEM16(ebp + (-0x10)), LO16(eax) */ /* 0x120EA2F7: cmp word ptr [ebp - 0x10], ax */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x10))) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    eax = 0x12008A44u; /* 0x120EA2FB: mov eax, 0x12008a44 */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EA307; /* 0x120EA300: je 0x120ea307 */
L_120EA302:
    eax = 0x12008A34u; /* 0x120EA302: mov eax, 0x12008a34 */
L_120EA307:
    edx = (uint32_t)((int32_t)edx * (int32_t)esi); /* 0x120EA307: imul edx, esi */
    edi = ecx + 0x3; /* 0x120EA30A: lea edi, [ecx + 3] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0xFFFFFFFCu);
    edi = edi & 0xFFFFFFFCu; /* 0x120EA30D: and edi, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x120EA310: mov dword ptr [ebp - 0x14], eax */
    MEM32(ebp + (-0x10)) = edi; /* 0x120EA313: mov dword ptr [ebp - 0x10], edi */
    /* test edx, edx */ /* 0x120EA316: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EA3B6; /* 0x120EA318: je 0x120ea3b6 */
L_120EA31E:
    eax = ecx; /* 0x120EA31E: mov eax, ecx */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x120EA320: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x120EA320: shl eax, 2 */
    MEM32(ebp + (-0x8)) = eax; /* 0x120EA323: mov dword ptr [ebp - 8], eax */
    esi = edx * 4 + 0x4; /* 0x120EA326: lea esi, [edx*4 + 4] */
    ebx = esi; /* 0x120EA32D: mov ebx, esi */
    esi = (uint32_t)((int32_t)esi * (int32_t)edi); /* 0x120EA32F: imul esi, edi */
    eax = edi; /* 0x120EA332: mov eax, edi */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx); /* 0x120EA334: imul ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x4)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + MEM32(ebp + (-0x4)); /* 0x120EA337: add ebx, dword ptr [ebp - 4] */
    _flag_k = FK_ADD;
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x120EA33A: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x120EA33A: shl eax, 2 */
    MEM32(ebp + (-0x18)) = eax; /* 0x120EA33D: mov dword ptr [ebp - 0x18], eax */
    eax = edx; /* 0x120EA340: mov eax, edx */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x120EA342: imul eax, edi */
    MEM32(ebp + 0x10) = ebx; /* 0x120EA345: mov dword ptr [ebp + 0x10], ebx */
    ebx = MEM32(ebp + (-0x4)); /* 0x120EA348: mov ebx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x120EA34B: add eax, ecx */
    _flag_k = FK_ADD;
    eax = ebx + eax * 4; /* 0x120EA34D: lea eax, [ebx + eax*4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + ebx; /* 0x120EA350: add esi, ebx */
    _flag_k = FK_ADD;
    ebx = MEM32(ebp + 0x10); /* 0x120EA352: mov ebx, dword ptr [ebp + 0x10] */
L_120EA355:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - MEM32(ebp + (-0x8)); /* 0x120EA355: sub ebx, dword ptr [ebp - 8] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x18)); /* 0x120EA358: sub eax, dword ptr [ebp - 0x18] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x18)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - MEM32(ebp + (-0x18)); /* 0x120EA35B: sub esi, dword ptr [ebp - 0x18] */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x120EA35E: dec edx */
    _flag_k = FK_DEC;
    MEM32(ebp + 0x10) = ebx; /* 0x120EA35F: mov dword ptr [ebp + 0x10], ebx */
    MEM32(ebp + (-0xC)) = eax; /* 0x120EA362: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x1C)) = esi; /* 0x120EA365: mov dword ptr [ebp - 0x1c], esi */
    ebx = edi; /* 0x120EA368: mov ebx, edi */
    /* cmp edi, ecx */ /* 0x120EA36A: cmp edi, ecx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120EA38B; /* 0x120EA36C: jbe 0x120ea38b */
L_120EA36E:
    edi = esi; /* 0x120EA36E: mov edi, esi */
    esi = MEM32(ebp + (-0x14)); /* 0x120EA370: mov esi, dword ptr [ebp - 0x14] */
L_120EA373:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x120EA373: dec ebx */
    _flag_k = FK_DEC;
    eax = ebx; /* 0x120EA374: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    eax = eax & 3; /* 0x120EA376: and eax, 3 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi + eax * 4); /* 0x120EA379: mov eax, dword ptr [esi + eax*4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 4; /* 0x120EA37C: sub edi, 4 */
    _flag_k = FK_CMP;
    MEM32(edi) = eax; /* 0x120EA37F: mov dword ptr [edi], eax */
    /* cmp ebx, ecx */ /* 0x120EA381: cmp ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_120EA373; /* 0x120EA383: ja 0x120ea373 */
L_120EA385:
    edi = MEM32(ebp + (-0x10)); /* 0x120EA385: mov edi, dword ptr [ebp - 0x10] */
    eax = MEM32(ebp + (-0xC)); /* 0x120EA388: mov eax, dword ptr [ebp - 0xc] */
L_120EA38B:
    esi = ecx; /* 0x120EA38B: mov esi, ecx */
    /* test ecx, ecx */ /* 0x120EA38D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EA3A6; /* 0x120EA38F: je 0x120ea3a6 */
L_120EA391:
    edi = MEM32(ebp + 0x10); /* 0x120EA391: mov edi, dword ptr [ebp + 0x10] */
    ebx = eax; /* 0x120EA394: mov ebx, eax */
L_120EA396:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 4; /* 0x120EA396: sub edi, 4 */
    _flag_k = FK_CMP;
    eax = MEM32(edi); /* 0x120EA399: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 4; /* 0x120EA39B: sub ebx, 4 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x120EA39E: dec esi */
    _flag_k = FK_DEC;
    MEM32(ebx) = eax; /* 0x120EA39F: mov dword ptr [ebx], eax */
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EA396; /* 0x120EA3A1: jne 0x120ea396 */
L_120EA3A3:
    edi = MEM32(ebp + (-0x10)); /* 0x120EA3A3: mov edi, dword ptr [ebp - 0x10] */
L_120EA3A6:
    esi = MEM32(ebp + (-0x1C)); /* 0x120EA3A6: mov esi, dword ptr [ebp - 0x1c] */
    ebx = MEM32(ebp + 0x10); /* 0x120EA3A9: mov ebx, dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + (-0xC)); /* 0x120EA3AC: mov eax, dword ptr [ebp - 0xc] */
    /* test edx, edx */ /* 0x120EA3AF: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EA355; /* 0x120EA3B1: jne 0x120ea355 */
L_120EA3B3:
    esi = MEM32(ebp + 0x14); /* 0x120EA3B3: mov esi, dword ptr [ebp + 0x14] */
L_120EA3B6:
    ebx = MEM32(ebp + 0x8); /* 0x120EA3B6: mov ebx, dword ptr [ebp + 8] */
    eax = MEM32(ebx + 0x2C); /* 0x120EA3B9: mov eax, dword ptr [ebx + 0x2c] */
    ecx = (uint32_t)MEM16(ebx + 0xC); /* 0x120EA3BC: movzx ecx, word ptr [ebx + 0xc] */
    eax = (uint32_t)((int32_t)eax * (int32_t)esi); /* 0x120EA3C0: imul eax, esi */
    /* cmp eax, ecx */ /* 0x120EA3C3: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120EA3C9; /* 0x120EA3C5: jbe 0x120ea3c9 */
L_120EA3C7:
    eax = ecx; /* 0x120EA3C7: mov eax, ecx */
L_120EA3C9:
    ecx = MEM32(ebx + 0x1C); /* 0x120EA3C9: mov ecx, dword ptr [ebx + 0x1c] */
    /* test ecx, ecx */ /* 0x120EA3CC: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EA3D7; /* 0x120EA3CE: jne 0x120ea3d7 */
L_120EA3D0:
    eax = 0x80004005u; /* 0x120EA3D0: mov eax, 0x80004005 */
    goto L_120EA3F0; /* 0x120EA3D5: jmp 0x120ea3f0 */
L_120EA3D7:
    PUSH32(esp, eax); /* 0x120EA3D7: push eax */
    eax = MEM32(ebp + (-0x4)); /* 0x120EA3D8: mov eax, dword ptr [ebp - 4] */
    PUSH32(esp, eax); /* 0x120EA3DB: push eax */
    PUSH32(esp, eax); /* 0x120EA3DC: push eax */
    eax = (uint32_t)MEM16(ebx + 0xA); /* 0x120EA3DD: movzx eax, word ptr [ebx + 0xa] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x18));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ebp + 0x18); /* 0x120EA3E1: add eax, dword ptr [ebp + 0x18] */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x120EA3E4: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EA3E5: push dword ptr [ebp + 0xc] */
    RECOMP_ICALL(ecx); /* 0x120EA3E8: call ecx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EA3EA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EA3F0; /* 0x120EA3EC: js 0x120ea3f0 */
L_120EA3EE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EA3EE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EA3F0:
    edi = POP32_VAL(esp); /* 0x120EA3F0: pop edi */
    esi = POP32_VAL(esp); /* 0x120EA3F1: pop esi */
    ebx = POP32_VAL(esp); /* 0x120EA3F2: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120EA3F3: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x120EA3F4: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_120EA3FC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EA3FCu);

L_120EA3FC:
    edi = edi; /* 0x120EA3FC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EA3FE: push ebp */
    ebp = esp; /* 0x120EA3FF: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x120EA401: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x14); /* 0x120EA404: mov eax, dword ptr [eax + 0x14] */
    eax = MEM32(eax + 0x8); /* 0x120EA407: mov eax, dword ptr [eax + 8] */
    PUSH32(esp, ebx); /* 0x120EA40A: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x120EA40B: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x120EA40E: push esi */
    PUSH32(esp, edi); /* 0x120EA40F: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120EA410: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = 0xFFFF0000u; /* 0x120EA412: mov ecx, 0xffff0000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x120EA417: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = edi; /* 0x120EA419: mov esi, edi */
    /* cmp MEM16(ebx + 0xA), LO16(edi) */ /* 0x120EA41B: cmp word ptr [ebx + 0xa], di */
    _flag_a = (uint32_t)(MEM16(ebx + 0xA)) << 16; _flag_b = (uint32_t)(LO16(edi)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EA5F8; /* 0x120EA41F: jne 0x120ea5f8 */
L_120EA425:
    /* cmp eax, 0x54580000u */ /* 0x120EA425: cmp eax, 0x54580000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x54580000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EA5C0; /* 0x120EA42A: je 0x120ea5c0 */
L_120EA430:
    /* cmp eax, 0xFFFE0000u */ /* 0x120EA430: cmp eax, 0xfffe0000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFE0000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EA50D; /* 0x120EA435: je 0x120ea50d */
L_120EA43B:
    /* cmp eax, ecx */ /* 0x120EA43B: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EA645; /* 0x120EA43D: jne 0x120ea645 */
L_120EA443:
    eax = MEM32(ebp + 0xC); /* 0x120EA443: mov eax, dword ptr [ebp + 0xc] */
    eax = (uint32_t)MEM16(eax + 0x4); /* 0x120EA446: movzx eax, word ptr [eax + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x120EA44A: sub eax, edi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_120EA4D6; /* 0x120EA44C: je 0x120ea4d6 */
L_120EA452:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120EA452: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120EA499; /* 0x120EA453: je 0x120ea499 */
L_120EA455:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120EA455: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EA645; /* 0x120EA456: jne 0x120ea645 */
L_120EA45C:
    eax = (uint32_t)MEM16(ebx + 0x2); /* 0x120EA45C: movzx eax, word ptr [ebx + 2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x120EA460: sub eax, edi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_120EA48F; /* 0x120EA462: je 0x120ea48f */
L_120EA464:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120EA464: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120EA485; /* 0x120EA465: je 0x120ea485 */
L_120EA467:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120EA467: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120EA47B; /* 0x120EA468: je 0x120ea47b */
L_120EA46A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120EA46A: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EA645; /* 0x120EA46B: jne 0x120ea645 */
L_120EA471:
    esi = 0x120E7C40u; /* 0x120EA471: mov esi, 0x120e7c40 */
    goto L_120EA645; /* 0x120EA476: jmp 0x120ea645 */
L_120EA47B:
    esi = 0x120E7CB2u; /* 0x120EA47B: mov esi, 0x120e7cb2 */
    goto L_120EA645; /* 0x120EA480: jmp 0x120ea645 */
L_120EA485:
    esi = 0x120E7C63u; /* 0x120EA485: mov esi, 0x120e7c63 */
    goto L_120EA645; /* 0x120EA48A: jmp 0x120ea645 */
L_120EA48F:
    esi = 0x120E7C40u; /* 0x120EA48F: mov esi, 0x120e7c40 */
    goto L_120EA645; /* 0x120EA494: jmp 0x120ea645 */
L_120EA499:
    eax = (uint32_t)MEM16(ebx + 0x2); /* 0x120EA499: movzx eax, word ptr [ebx + 2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x120EA49D: sub eax, edi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_120EA4CC; /* 0x120EA49F: je 0x120ea4cc */
L_120EA4A1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120EA4A1: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120EA4C2; /* 0x120EA4A2: je 0x120ea4c2 */
L_120EA4A4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120EA4A4: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120EA4B8; /* 0x120EA4A5: je 0x120ea4b8 */
L_120EA4A7:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120EA4A7: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EA645; /* 0x120EA4A8: jne 0x120ea645 */
L_120EA4AE:
    esi = 0x120E7BD3u; /* 0x120EA4AE: mov esi, 0x120e7bd3 */
    goto L_120EA645; /* 0x120EA4B3: jmp 0x120ea645 */
L_120EA4B8:
    esi = 0x120E7BB0u; /* 0x120EA4B8: mov esi, 0x120e7bb0 */
    goto L_120EA645; /* 0x120EA4BD: jmp 0x120ea645 */
L_120EA4C2:
    esi = 0x120E7B67u; /* 0x120EA4C2: mov esi, 0x120e7b67 */
    goto L_120EA645; /* 0x120EA4C7: jmp 0x120ea645 */
L_120EA4CC:
    esi = 0x120E7BB0u; /* 0x120EA4CC: mov esi, 0x120e7bb0 */
    goto L_120EA645; /* 0x120EA4D1: jmp 0x120ea645 */
L_120EA4D6:
    eax = (uint32_t)MEM16(ebx + 0x2); /* 0x120EA4D6: movzx eax, word ptr [ebx + 2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x120EA4DA: sub eax, edi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_120EA503; /* 0x120EA4DC: je 0x120ea503 */
L_120EA4DE:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120EA4DE: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120EA61A; /* 0x120EA4DF: je 0x120ea61a */
L_120EA4E5:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120EA4E5: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120EA4F9; /* 0x120EA4E6: je 0x120ea4f9 */
L_120EA4E8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120EA4E8: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EA645; /* 0x120EA4E9: jne 0x120ea645 */
L_120EA4EF:
    esi = 0x120E7B12u; /* 0x120EA4EF: mov esi, 0x120e7b12 */
    goto L_120EA645; /* 0x120EA4F4: jmp 0x120ea645 */
L_120EA4F9:
    esi = 0x120E7ACCu; /* 0x120EA4F9: mov esi, 0x120e7acc */
    goto L_120EA645; /* 0x120EA4FE: jmp 0x120ea645 */
L_120EA503:
    esi = 0x120E7AA9u; /* 0x120EA503: mov esi, 0x120e7aa9 */
    goto L_120EA645; /* 0x120EA508: jmp 0x120ea645 */
L_120EA50D:
    eax = MEM32(ebp + 0xC); /* 0x120EA50D: mov eax, dword ptr [ebp + 0xc] */
    eax = (uint32_t)MEM16(eax + 0x4); /* 0x120EA510: movzx eax, word ptr [eax + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x120EA514: sub eax, edi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_120EA589; /* 0x120EA516: je 0x120ea589 */
L_120EA518:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120EA518: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120EA552; /* 0x120EA519: je 0x120ea552 */
L_120EA51B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120EA51B: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EA645; /* 0x120EA51C: jne 0x120ea645 */
L_120EA522:
    eax = (uint32_t)MEM16(ebx + 0x2); /* 0x120EA522: movzx eax, word ptr [ebx + 2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x120EA526: sub eax, edi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_120EA548; /* 0x120EA528: je 0x120ea548 */
L_120EA52A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120EA52A: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120EA53E; /* 0x120EA52B: je 0x120ea53e */
L_120EA52D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120EA52D: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EA62F; /* 0x120EA52E: jne 0x120ea62f */
L_120EA534:
    esi = 0x120E7A67u; /* 0x120EA534: mov esi, 0x120e7a67 */
    goto L_120EA645; /* 0x120EA539: jmp 0x120ea645 */
L_120EA53E:
    esi = 0x120E7A18u; /* 0x120EA53E: mov esi, 0x120e7a18 */
    goto L_120EA645; /* 0x120EA543: jmp 0x120ea645 */
L_120EA548:
    esi = 0x120E79F5u; /* 0x120EA548: mov esi, 0x120e79f5 */
    goto L_120EA645; /* 0x120EA54D: jmp 0x120ea645 */
L_120EA552:
    eax = (uint32_t)MEM16(ebx + 0x2); /* 0x120EA552: movzx eax, word ptr [ebx + 2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x120EA556: sub eax, edi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_120EA57F; /* 0x120EA558: je 0x120ea57f */
L_120EA55A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120EA55A: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120EA575; /* 0x120EA55B: je 0x120ea575 */
L_120EA55D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120EA55D: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120EA639; /* 0x120EA55E: je 0x120ea639 */
L_120EA564:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120EA564: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EA645; /* 0x120EA565: jne 0x120ea645 */
L_120EA56B:
    esi = 0x120E7988u; /* 0x120EA56B: mov esi, 0x120e7988 */
    goto L_120EA645; /* 0x120EA570: jmp 0x120ea645 */
L_120EA575:
    esi = 0x120E793Fu; /* 0x120EA575: mov esi, 0x120e793f */
    goto L_120EA645; /* 0x120EA57A: jmp 0x120ea645 */
L_120EA57F:
    esi = 0x120E791Cu; /* 0x120EA57F: mov esi, 0x120e791c */
    goto L_120EA645; /* 0x120EA584: jmp 0x120ea645 */
L_120EA589:
    eax = (uint32_t)MEM16(ebx + 0x2); /* 0x120EA589: movzx eax, word ptr [ebx + 2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x120EA58D: sub eax, edi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_120EA5B6; /* 0x120EA58F: je 0x120ea5b6 */
L_120EA591:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120EA591: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120EA640; /* 0x120EA592: je 0x120ea640 */
L_120EA598:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120EA598: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120EA5AC; /* 0x120EA599: je 0x120ea5ac */
L_120EA59B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120EA59B: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EA645; /* 0x120EA59C: jne 0x120ea645 */
L_120EA5A2:
    esi = 0x120E78C7u; /* 0x120EA5A2: mov esi, 0x120e78c7 */
    goto L_120EA645; /* 0x120EA5A7: jmp 0x120ea645 */
L_120EA5AC:
    esi = 0x120E7881u; /* 0x120EA5AC: mov esi, 0x120e7881 */
    goto L_120EA645; /* 0x120EA5B1: jmp 0x120ea645 */
L_120EA5B6:
    esi = 0x120E785Eu; /* 0x120EA5B6: mov esi, 0x120e785e */
    goto L_120EA645; /* 0x120EA5BB: jmp 0x120ea645 */
L_120EA5C0:
    eax = MEM32(ebp + 0xC); /* 0x120EA5C0: mov eax, dword ptr [ebp + 0xc] */
    eax = (uint32_t)MEM16(eax + 0x4); /* 0x120EA5C3: movzx eax, word ptr [eax + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120EA5C7: dec eax */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120EA5C8: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EA645; /* 0x120EA5C9: jne 0x120ea645 */
L_120EA5CB:
    eax = (uint32_t)MEM16(ebx + 0x2); /* 0x120EA5CB: movzx eax, word ptr [ebx + 2] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x120EA5CF: sub eax, edi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_120EA5F1; /* 0x120EA5D1: je 0x120ea5f1 */
L_120EA5D3:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120EA5D3: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120EA5EA; /* 0x120EA5D4: je 0x120ea5ea */
L_120EA5D6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120EA5D6: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120EA5E3; /* 0x120EA5D7: je 0x120ea5e3 */
L_120EA5D9:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120EA5D9: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EA645; /* 0x120EA5DA: jne 0x120ea645 */
L_120EA5DC:
    esi = 0x120E7CF4u; /* 0x120EA5DC: mov esi, 0x120e7cf4 */
    goto L_120EA645; /* 0x120EA5E1: jmp 0x120ea645 */
L_120EA5E3:
    esi = 0x120E7D87u; /* 0x120EA5E3: mov esi, 0x120e7d87 */
    goto L_120EA645; /* 0x120EA5E8: jmp 0x120ea645 */
L_120EA5EA:
    esi = 0x120E7D28u; /* 0x120EA5EA: mov esi, 0x120e7d28 */
    goto L_120EA645; /* 0x120EA5EF: jmp 0x120ea645 */
L_120EA5F1:
    esi = 0x120E7CF4u; /* 0x120EA5F1: mov esi, 0x120e7cf4 */
    goto L_120EA645; /* 0x120EA5F6: jmp 0x120ea645 */
L_120EA5F8:
    /* cmp eax, 0xFFFE0000u */ /* 0x120EA5F8: cmp eax, 0xfffe0000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFE0000u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EA621; /* 0x120EA5FD: je 0x120ea621 */
L_120EA5FF:
    /* cmp eax, ecx */ /* 0x120EA5FF: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EA645; /* 0x120EA601: jne 0x120ea645 */
L_120EA603:
    eax = MEM32(ebp + 0xC); /* 0x120EA603: mov eax, dword ptr [ebp + 0xc] */
    eax = (uint32_t)MEM16(eax + 0x4); /* 0x120EA606: movzx eax, word ptr [eax + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x120EA60A: sub eax, edi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_120EA61A; /* 0x120EA60C: je 0x120ea61a */
L_120EA60E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120EA60E: dec eax */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120EA4B8; /* 0x120EA60F: je 0x120ea4b8 */
L_120EA615:
    RECOMP_BACKEDGE();
    goto L_120EA46A; /* 0x120EA615: jmp 0x120ea46a */
L_120EA61A:
    esi = 0x120E7AA9u; /* 0x120EA61A: mov esi, 0x120e7aa9 */
    goto L_120EA645; /* 0x120EA61F: jmp 0x120ea645 */
L_120EA621:
    eax = MEM32(ebp + 0xC); /* 0x120EA621: mov eax, dword ptr [ebp + 0xc] */
    eax = (uint32_t)MEM16(eax + 0x4); /* 0x120EA624: movzx eax, word ptr [eax + 4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x120EA628: sub eax, edi */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_120EA640; /* 0x120EA62A: je 0x120ea640 */
L_120EA62C:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120EA62C: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120EA639; /* 0x120EA62D: je 0x120ea639 */
L_120EA62F:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120EA62F: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EA645; /* 0x120EA630: jne 0x120ea645 */
L_120EA632:
    esi = 0x120E79F5u; /* 0x120EA632: mov esi, 0x120e79f5 */
    goto L_120EA645; /* 0x120EA637: jmp 0x120ea645 */
L_120EA639:
    esi = 0x120E791Cu; /* 0x120EA639: mov esi, 0x120e791c */
    goto L_120EA645; /* 0x120EA63E: jmp 0x120ea645 */
L_120EA640:
    esi = 0x120E785Eu; /* 0x120EA640: mov esi, 0x120e785e */
L_120EA645:
    PUSH32(esp, 0x120014BCu); /* 0x120EA645: push 0x120014bc */
    PUSH32(esp, 0x44u); /* 0x120EA64A: push 0x44 */
    RECOMP_CALL(sub_12018970); /* 0x120EA64C: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120EA651: pop ecx */
    ecx = POP32_VAL(esp); /* 0x120EA652: pop ecx */
    /* test eax, eax */ /* 0x120EA653: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EA66B; /* 0x120EA655: je 0x120ea66b */
L_120EA657:
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120EA657: push dword ptr [ebp + 0x14] */
    ecx = eax; /* 0x120EA65A: mov ecx, eax */
    PUSH32(esp, esi); /* 0x120EA65C: push esi */
    PUSH32(esp, ebx); /* 0x120EA65D: push ebx */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EA65E: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120EA661: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_120E7424); /* 0x120EA664: call 0x120e7424 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x120EA669: mov edi, eax */
L_120EA66B:
    /* test edi, edi */ /* 0x120EA66B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EA673; /* 0x120EA66D: jne 0x120ea673 */
L_120EA66F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EA66F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120EA690; /* 0x120EA671: jmp 0x120ea690 */
L_120EA673:
    ecx = edi; /* 0x120EA673: mov ecx, edi */
    RECOMP_CALL(sub_120EA69C); /* 0x120EA675: call 0x120ea69c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EA67A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120EA68E; /* 0x120EA67C: jns 0x120ea68e */
L_120EA67E:
    ecx = edi; /* 0x120EA67E: mov ecx, edi */
    RECOMP_CALL(sub_120E74A2); /* 0x120EA680: call 0x120e74a2 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x120EA685: push edi */
    RECOMP_CALL(sub_121BF388); /* 0x120EA686: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120EA68B: pop ecx */
    RECOMP_BACKEDGE();
    goto L_120EA66F; /* 0x120EA68C: jmp 0x120ea66f */
L_120EA68E:
    eax = edi; /* 0x120EA68E: mov eax, edi */
L_120EA690:
    edi = POP32_VAL(esp); /* 0x120EA690: pop edi */
    esi = POP32_VAL(esp); /* 0x120EA691: pop esi */
    ebx = POP32_VAL(esp); /* 0x120EA692: pop ebx */
    ebp = POP32_VAL(esp); /* 0x120EA693: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120EA694: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120EA69C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EA69Cu);

L_120EA69C:
    edi = edi; /* 0x120EA69C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EA69E: push ebp */
    ebp = esp; /* 0x120EA69F: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x2Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x2Cu; /* 0x120EA6A1: sub esp, 0x2c */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120EA6A4: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120EA6A9: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120EA6AB: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x120EA6AE: push ebx */
    ebx = ecx; /* 0x120EA6AF: mov ebx, ecx */
    eax = MEM32(ebx + 0x18); /* 0x120EA6B1: mov eax, dword ptr [ebx + 0x18] */
    /* cmp MEM16(eax + 0xA), 0 */ /* 0x120EA6B4: cmp word ptr [eax + 0xa], 0 */
    _flag_a = (uint32_t)(MEM16(eax + 0xA)) << 16; _flag_b = (uint32_t)(0) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    PUSH32(esp, esi); /* 0x120EA6B9: push esi */
    PUSH32(esp, edi); /* 0x120EA6BA: push edi */
    MEM32(ebp + (-0x28)) = ebx; /* 0x120EA6BB: mov dword ptr [ebp - 0x28], ebx */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EA843; /* 0x120EA6BE: je 0x120ea843 */
L_120EA6C4:
    eax = (uint32_t)MEM16(eax + 0xA); /* 0x120EA6C4: movzx eax, word ptr [eax + 0xa] */
    PUSH32(esp, 0x120014BCu); /* 0x120EA6C8: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120EA6CD: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x120EA6CF: push 4 */
    edx = POP32_VAL(esp); /* 0x120EA6D1: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x120EA6D2: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x120EA6D4: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x120EA6D7: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x120EA6D9: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x120EA6DB: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x120EA6DC: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120EA6E1: pop ecx */
    ecx = POP32_VAL(esp); /* 0x120EA6E2: pop ecx */
    ecx = eax; /* 0x120EA6E3: mov ecx, eax */
    MEM32(ebx + 0x38) = ecx; /* 0x120EA6E5: mov dword ptr [ebx + 0x38], ecx */
    /* test ecx, ecx */ /* 0x120EA6E8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EA6F6; /* 0x120EA6EA: jne 0x120ea6f6 */
L_120EA6EC:
    eax = 0x8007000Eu; /* 0x120EA6EC: mov eax, 0x8007000e */
    goto L_120EA845; /* 0x120EA6F1: jmp 0x120ea845 */
L_120EA6F6:
    eax = MEM32(ebx + 0x18); /* 0x120EA6F6: mov eax, dword ptr [ebx + 0x18] */
    eax = (uint32_t)MEM16(eax + 0xA); /* 0x120EA6F9: movzx eax, word ptr [eax + 0xa] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x120EA6FD: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x120EA6FD: shl eax, 2 */
    PUSH32(esp, eax); /* 0x120EA700: push eax */
    PUSH32(esp, 0); /* 0x120EA701: push 0 */
    PUSH32(esp, ecx); /* 0x120EA703: push ecx */
    RECOMP_CALL(sub_121BF434); /* 0x120EA704: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x20); /* 0x120EA709: mov eax, dword ptr [ebx + 0x20] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120EA70C: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, 5); /* 0x120EA70F: push 5 */
    MEM32(ebp + (-0x20)) = eax; /* 0x120EA711: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(ebx + 0x18); /* 0x120EA714: mov eax, dword ptr [ebx + 0x18] */
    esi = ebx + 0x4; /* 0x120EA717: lea esi, [ebx + 4] */
    ecx = POP32_VAL(esp); /* 0x120EA71A: pop ecx */
    edi = ebp + (-0x18); /* 0x120EA71B: lea edi, [ebp - 0x18] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x120EA71E: rep movsd dword ptr es:[edi], dword ptr [esi] */
    ecx = (uint32_t)MEM16(eax + 0xA); /* 0x120EA720: movzx ecx, word ptr [eax + 0xa] */
    edx = MEM32(eax + 0xC); /* 0x120EA724: mov edx, dword ptr [eax + 0xc] */
    esi = MEM32(ebx); /* 0x120EA727: mov esi, dword ptr [ebx] */
    eax = edx + ecx * 8; /* 0x120EA729: lea eax, [edx + ecx*8] */
    /* cmp eax, MEM32(esi + 0x10) */ /* 0x120EA72C: cmp eax, dword ptr [esi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120EA73B; /* 0x120EA72F: jbe 0x120ea73b */
L_120EA731:
    eax = 0x80004005u; /* 0x120EA731: mov eax, 0x80004005 */
    goto L_120EA845; /* 0x120EA736: jmp 0x120ea845 */
L_120EA73B:
    esi = MEM32(esi + 0xC); /* 0x120EA73B: mov esi, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x120EA73E: add esi, edx */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120EA740: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, ecx */ /* 0x120EA742: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EA843; /* 0x120EA744: je 0x120ea843 */
L_120EA74A:
    edx = MEM32(esi + 0x4); /* 0x120EA74A: mov edx, dword ptr [esi + 4] */
    ecx = MEM32(ebx); /* 0x120EA74D: mov ecx, dword ptr [ebx] */
    eax = edx + 0x10; /* 0x120EA74F: lea eax, [edx + 0x10] */
    /* cmp eax, MEM32(ecx + 0x10) */ /* 0x120EA752: cmp eax, dword ptr [ecx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_120EA731; /* 0x120EA755: ja 0x120ea731 */
L_120EA757:
    eax = MEM32(ecx + 0xC); /* 0x120EA757: mov eax, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x24)) = MEM32(ebp + (-0x24)) & 0; /* 0x120EA75A: and dword ptr [ebp - 0x24], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x2C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x2C)) = MEM32(ebp + (-0x2C)) & 0; /* 0x120EA75E: and dword ptr [ebp - 0x2c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x120EA762: add eax, edx */
    _flag_k = FK_ADD;
    edx = ebp + (-0x2C); /* 0x120EA764: lea edx, [ebp - 0x2c] */
    PUSH32(esp, edx); /* 0x120EA767: push edx */
    edx = ebp + (-0x24); /* 0x120EA768: lea edx, [ebp - 0x24] */
    PUSH32(esp, edx); /* 0x120EA76B: push edx */
    PUSH32(esp, 1); /* 0x120EA76C: push 1 */
    PUSH32(esp, eax); /* 0x120EA76E: push eax */
    MEM32(ebp + (-0x1C)) = eax; /* 0x120EA76F: mov dword ptr [ebp - 0x1c], eax */
    eax = ebp + (-0x18); /* 0x120EA772: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x120EA775: push eax */
    PUSH32(esp, ecx); /* 0x120EA776: push ecx */
    RECOMP_CALL(sub_120E7325); /* 0x120EA777: call 0x120e7325 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi); /* 0x120EA77C: mov eax, dword ptr [esi] */
    ecx = (uint32_t)MEM16(ebx + 0xC); /* 0x120EA77E: movzx ecx, word ptr [ebx + 0xc] */
    MEM32(ebp + (-0x18)) = eax; /* 0x120EA782: mov dword ptr [ebp - 0x18], eax */
    eax = MEM32(esi + 0x4); /* 0x120EA785: mov eax, dword ptr [esi + 4] */
    MEM32(ebp + (-0xC)) = eax; /* 0x120EA788: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ebp + (-0x1C)); /* 0x120EA78B: mov eax, dword ptr [ebp - 0x1c] */
    SET_LO16(edx, MEM16(eax + 0x8)); /* 0x120EA78E: mov dx, word ptr [eax + 8] */
    SET_LO16(edx, (uint32_t)((int32_t)LO16(edx) * (int32_t)MEM16(ebp + (-0x24)))); /* 0x120EA792: imul dx, word ptr [ebp - 0x24] */
    eax = (uint32_t)MEM16(ebx + 0xA); /* 0x120EA797: movzx eax, word ptr [ebx + 0xa] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x120EA79B: add ecx, eax */
    _flag_k = FK_ADD;
    eax = (uint32_t)LO16(edx); /* 0x120EA79D: movzx eax, dx */
    MEM16(ebp + (-0x10)) = (uint16_t)(LO16(edx)); /* 0x120EA7A0: mov word ptr [ebp - 0x10], dx */
    edx = (uint32_t)MEM16(ebp + (-0x12)); /* 0x120EA7A4: movzx edx, word ptr [ebp - 0x12] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x120EA7A8: add eax, edx */
    _flag_k = FK_ADD;
    /* cmp eax, ecx */ /* 0x120EA7AA: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_120EA7BD; /* 0x120EA7AC: jle 0x120ea7bd */
L_120EA7AE:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x120EA7AE: sub ecx, edx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_NS(_flag_a, _flag_b)) goto L_120EA7B9; /* 0x120EA7B0: jns 0x120ea7b9 */
L_120EA7B2:
    _flag_a = (uint32_t)(MEM16(ebp + (-0x10))) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(ebp + (-0x10)) = (uint16_t)(MEM16(ebp + (-0x10)) & 0); /* 0x120EA7B2: and word ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    goto L_120EA7BD; /* 0x120EA7B7: jmp 0x120ea7bd */
L_120EA7B9:
    MEM16(ebp + (-0x10)) = (uint16_t)(LO16(ecx)); /* 0x120EA7B9: mov word ptr [ebp - 0x10], cx */
L_120EA7BD:
    PUSH32(esp, MEM32(ebp + (-0x20))); /* 0x120EA7BD: push dword ptr [ebp - 0x20] */
    eax = ebp + (-0x18); /* 0x120EA7C0: lea eax, [ebp - 0x18] */
    PUSH32(esp, MEM32(ebp + (-0x1C))); /* 0x120EA7C3: push dword ptr [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x120EA7C6: push eax */
    PUSH32(esp, MEM32(ebx)); /* 0x120EA7C7: push dword ptr [ebx] */
    RECOMP_CALL(sub_120EA3FC); /* 0x120EA7C9: call 0x120ea3fc */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebx + 0x38); /* 0x120EA7CE: mov ecx, dword ptr [ebx + 0x38] */
    MEM32(ecx + edi * 4) = eax; /* 0x120EA7D1: mov dword ptr [ecx + edi*4], eax */
    /* test eax, eax */ /* 0x120EA7D4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EA6EC; /* 0x120EA7D6: je 0x120ea6ec */
L_120EA7DC:
    edx = MEM32(ebx + 0x38); /* 0x120EA7DC: mov edx, dword ptr [ebx + 0x38] */
    SET_LO16(eax, MEM16(ebp + (-0x10))); /* 0x120EA7DF: mov ax, word ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(MEM16(ebp + (-0x12))) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM16(ebp + (-0x12)) = (uint16_t)(MEM16(ebp + (-0x12)) + LO16(eax)); /* 0x120EA7E3: add word ptr [ebp - 0x12], ax */
    _flag_k = FK_NARROW(FK_ADD, 16);
    ecx = MEM32(ebp + (-0x1C)); /* 0x120EA7E7: mov ecx, dword ptr [ebp - 0x1c] */
    ecx = (uint32_t)MEM16(ecx + 0x8); /* 0x120EA7EA: movzx ecx, word ptr [ecx + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EA7EE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120EA7F0: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(eax), MEM16(ebp + (-0x14)) */ /* 0x120EA7F2: cmp ax, word ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebp + (-0x14))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    eax = MEM32(edx + edi * 4); /* 0x120EA7F6: mov eax, dword ptr [edx + edi*4] */
    SET_LO8(ebx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x120EA7F9: setne bl */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(eax + 0x2C)); /* 0x120EA7FC: imul ecx, dword ptr [eax + 0x2c] */
    eax = MEM32(ebp + (-0x8)); /* 0x120EA800: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx - 1; /* 0x120EA803: dec ebx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFDu);
    ebx = ebx & 0xFFFFFFFDu; /* 0x120EA804: and ebx, 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x120EA807: add ebx, 4 */
    _flag_k = FK_ADD;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx); /* 0x120EA80A: imul ecx, ebx */
    eax = eax + ecx * 4; /* 0x120EA80D: lea eax, [eax + ecx*4] */
    ecx = MEM32(ebp + (-0x1C)); /* 0x120EA810: mov ecx, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0x8)) = eax; /* 0x120EA813: mov dword ptr [ebp - 8], eax */
    ecx = (uint32_t)MEM16(ecx + 0x8); /* 0x120EA816: movzx ecx, word ptr [ecx + 8] */
    eax = MEM32(edx + edi * 4); /* 0x120EA81A: mov eax, dword ptr [edx + edi*4] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(eax + 0x2C)); /* 0x120EA81D: imul ecx, dword ptr [eax + 0x2c] */
    eax = MEM32(ebp + (-0x20)); /* 0x120EA821: mov eax, dword ptr [ebp - 0x20] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)ebx); /* 0x120EA824: imul ecx, ebx */
    ebx = MEM32(ebp + (-0x28)); /* 0x120EA827: mov ebx, dword ptr [ebp - 0x28] */
    eax = eax + ecx * 4; /* 0x120EA82A: lea eax, [eax + ecx*4] */
    MEM32(ebp + (-0x20)) = eax; /* 0x120EA82D: mov dword ptr [ebp - 0x20], eax */
    eax = MEM32(ebx + 0x18); /* 0x120EA830: mov eax, dword ptr [ebx + 0x18] */
    eax = (uint32_t)MEM16(eax + 0xA); /* 0x120EA833: movzx eax, word ptr [eax + 0xa] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x120EA837: add esi, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120EA83A: inc edi */
    _flag_k = FK_INC;
    /* cmp edi, eax */ /* 0x120EA83B: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120EA74A; /* 0x120EA83D: jb 0x120ea74a */
L_120EA843:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EA843: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EA845:
    ecx = MEM32(ebp + (-0x4)); /* 0x120EA845: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x120EA848: pop edi */
    esi = POP32_VAL(esp); /* 0x120EA849: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120EA84A: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x120EA84C: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x120EA84D: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120EA852: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x120EA853: ret  */
    RECOMP_REGS_OUT();
}

void sub_120EA859(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EA859u);

L_120EA859:
    edi = edi; /* 0x120EA859: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EA85B: push ebp */
    ebp = esp; /* 0x120EA85C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x120EA85E: sub esp, 0x1c */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120EA861: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120EA866: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120EA868: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x120EA86B: push ebx */
    ebx = ecx; /* 0x120EA86C: mov ebx, ecx */
    eax = MEM32(ebx + 0x18); /* 0x120EA86E: mov eax, dword ptr [ebx + 0x18] */
    eax = (uint32_t)MEM16(eax + 0x8); /* 0x120EA871: movzx eax, word ptr [eax + 8] */
    PUSH32(esp, edi); /* 0x120EA875: push edi */
    edi = MEM32(ebp + 0x8); /* 0x120EA876: mov edi, dword ptr [ebp + 8] */
    edx = eax; /* 0x120EA879: mov edx, eax */
    MEM32(ebp + (-0x1C)) = edi; /* 0x120EA87B: mov dword ptr [ebp - 0x1c], edi */
    /* cmp edi, edx */ /* 0x120EA87E: cmp edi, edx */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_120EA889; /* 0x120EA880: jb 0x120ea889 */
L_120EA882:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EA882: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120EAA0B; /* 0x120EA884: jmp 0x120eaa0b */
L_120EA889:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120EA889: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120EA88B: inc ecx */
    _flag_k = FK_INC;
    /* cmp LO16(ecx), LO16(eax) */ /* 0x120EA88C: cmp cx, ax */
    _flag_a = (uint32_t)(LO16(ecx)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EA898; /* 0x120EA88F: jne 0x120ea898 */
L_120EA891:
    eax = ebx; /* 0x120EA891: mov eax, ebx */
    goto L_120EAA0B; /* 0x120EA893: jmp 0x120eaa0b */
L_120EA898:
    PUSH32(esp, esi); /* 0x120EA898: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120EA899: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebx + 0x3C), esi */ /* 0x120EA89B: cmp dword ptr [ebx + 0x3c], esi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x3C)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EA8DD; /* 0x120EA89E: jne 0x120ea8dd */
L_120EA8A0:
    PUSH32(esp, 0x120014BCu); /* 0x120EA8A0: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120EA8A5: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x120EA8A7: push 4 */
    edx = POP32_VAL(esp); /* 0x120EA8A9: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x120EA8AA: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x120EA8AC: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x120EA8AF: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x120EA8B1: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x120EA8B3: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x120EA8B4: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120EA8B9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x120EA8BA: pop ecx */
    ecx = eax; /* 0x120EA8BB: mov ecx, eax */
    MEM32(ebx + 0x3C) = ecx; /* 0x120EA8BD: mov dword ptr [ebx + 0x3c], ecx */
    /* test ecx, ecx */ /* 0x120EA8C0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EAA00; /* 0x120EA8C2: je 0x120eaa00 */
L_120EA8C8:
    eax = MEM32(ebx + 0x18); /* 0x120EA8C8: mov eax, dword ptr [ebx + 0x18] */
    eax = (uint32_t)MEM16(eax + 0x8); /* 0x120EA8CB: movzx eax, word ptr [eax + 8] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x120EA8CF: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x120EA8CF: shl eax, 2 */
    PUSH32(esp, eax); /* 0x120EA8D2: push eax */
    PUSH32(esp, esi); /* 0x120EA8D3: push esi */
    PUSH32(esp, ecx); /* 0x120EA8D4: push ecx */
    RECOMP_CALL(sub_121BF434); /* 0x120EA8D5: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120EA8DA: add esp, 0xc */
    _flag_k = FK_ADD;
L_120EA8DD:
    eax = MEM32(ebx + 0x3C); /* 0x120EA8DD: mov eax, dword ptr [ebx + 0x3c] */
    /* cmp MEM32(eax + edi * 4), esi */ /* 0x120EA8E0: cmp dword ptr [eax + edi*4], esi */
    _flag_a = (uint32_t)(MEM32(eax + edi * 4)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EAA04; /* 0x120EA8E3: jne 0x120eaa04 */
L_120EA8E9:
    /* cmp MEM32(ebx + 0x40), esi */ /* 0x120EA8E9: cmp dword ptr [ebx + 0x40], esi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x40)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EA919; /* 0x120EA8EC: jne 0x120ea919 */
L_120EA8EE:
    PUSH32(esp, 0x120014BCu); /* 0x120EA8EE: push 0x120014bc */
    PUSH32(esp, 0x10u); /* 0x120EA8F3: push 0x10 */
    RECOMP_CALL(sub_12018970); /* 0x120EA8F5: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120EA8FA: pop ecx */
    ecx = POP32_VAL(esp); /* 0x120EA8FB: pop ecx */
    MEM32(ebx + 0x40) = eax; /* 0x120EA8FC: mov dword ptr [ebx + 0x40], eax */
    /* test eax, eax */ /* 0x120EA8FF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EAA00; /* 0x120EA901: je 0x120eaa00 */
L_120EA907:
    esi = MEM32(ebx + 0x18); /* 0x120EA907: mov esi, dword ptr [ebx + 0x18] */
    edi = eax; /* 0x120EA90A: mov edi, eax */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120EA90C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120EA90D: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120EA90E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x120EA90F: movsd dword ptr es:[edi], dword ptr [esi] */
    eax = MEM32(ebx + 0x40); /* 0x120EA910: mov eax, dword ptr [ebx + 0x40] */
    MEM16(eax + 0x8) = (uint16_t)(1); /* 0x120EA913: mov word ptr [eax + 8], 1 */
L_120EA919:
    SET_LO16(eax, MEM16(ebx + 0x2C)); /* 0x120EA919: mov ax, word ptr [ebx + 0x2c] */
    SET_LO16(edx, MEM16(ebx + 0x2C)); /* 0x120EA91D: mov dx, word ptr [ebx + 0x2c] */
    PUSH32(esp, 5); /* 0x120EA921: push 5 */
    esi = ebx + 0x4; /* 0x120EA923: lea esi, [ebx + 4] */
    ecx = POP32_VAL(esp); /* 0x120EA926: pop ecx */
    edi = ebp + (-0x18); /* 0x120EA927: lea edi, [ebp - 0x18] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x120EA92A: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = MEM32(ebp + (-0x1C)); /* 0x120EA92C: mov edi, dword ptr [ebp - 0x1c] */
    esi = (uint32_t)MEM16(ebx + 0xA); /* 0x120EA92F: movzx esi, word ptr [ebx + 0xa] */
    SET_LO16(eax, (uint32_t)((int32_t)LO16(eax) * (int32_t)LO16(edi))); /* 0x120EA933: imul ax, di */
    ecx = (uint32_t)MEM16(ebx + 0xC); /* 0x120EA937: movzx ecx, word ptr [ebx + 0xc] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    SET_LO16(eax, LO16(eax) + LO16(esi)); /* 0x120EA93B: add ax, si */
    _flag_k = FK_NARROW(FK_ADD, 16);
    MEM16(ebp + (-0x12)) = (uint16_t)(LO16(eax)); /* 0x120EA93E: mov word ptr [ebp - 0x12], ax */
    eax = (uint32_t)LO16(eax); /* 0x120EA942: movzx eax, ax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x120EA945: sub ecx, eax */
    _flag_k = FK_CMP;
    eax = (uint32_t)LO16(edx); /* 0x120EA947: movzx eax, dx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x120EA94A: add ecx, esi */
    _flag_k = FK_ADD;
    MEM16(ebp + (-0x10)) = (uint16_t)(LO16(edx)); /* 0x120EA94C: mov word ptr [ebp - 0x10], dx */
    /* cmp eax, ecx */ /* 0x120EA950: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_120EA963; /* 0x120EA952: jle 0x120ea963 */
L_120EA954:
    /* test ecx, ecx */ /* 0x120EA954: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120EA95F; /* 0x120EA956: jns 0x120ea95f */
L_120EA958:
    _flag_a = (uint32_t)(MEM16(ebp + (-0x10))) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(ebp + (-0x10)) = (uint16_t)(MEM16(ebp + (-0x10)) & 0); /* 0x120EA958: and word ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    goto L_120EA963; /* 0x120EA95D: jmp 0x120ea963 */
L_120EA95F:
    MEM16(ebp + (-0x10)) = (uint16_t)(LO16(ecx)); /* 0x120EA95F: mov word ptr [ebp - 0x10], cx */
L_120EA963:
    ecx = MEM32(ebx + 0x14); /* 0x120EA963: mov ecx, dword ptr [ebx + 0x14] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120EA966: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EA968: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(eax), MEM16(ebx + 0x8) */ /* 0x120EA96A: cmp ax, word ptr [ebx + 8] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ebx + 0x8)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    PUSH32(esp, 4); /* 0x120EA96E: push 4 */
    SET_LO8(edx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x120EA970: setne dl */
    eax = POP32_VAL(esp); /* 0x120EA973: pop eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x120EA974: dec edx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFFDu);
    edx = edx & 0xFFFFFFFDu; /* 0x120EA975: and edx, 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + eax; /* 0x120EA978: add edx, eax */
    _flag_k = FK_ADD;
    /* test ecx, ecx */ /* 0x120EA97A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EA98D; /* 0x120EA97C: je 0x120ea98d */
L_120EA97E:
    eax = MEM32(ebx + 0x2C); /* 0x120EA97E: mov eax, dword ptr [ebx + 0x2c] */
    eax = (uint32_t)((int32_t)eax * (int32_t)edi); /* 0x120EA981: imul eax, edi */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx); /* 0x120EA984: imul eax, edx */
    eax = ecx + eax * 4; /* 0x120EA987: lea eax, [ecx + eax*4] */
    MEM32(ebp + (-0x8)) = eax; /* 0x120EA98A: mov dword ptr [ebp - 8], eax */
L_120EA98D:
    ecx = MEM32(ebx + 0x2C); /* 0x120EA98D: mov ecx, dword ptr [ebx + 0x2c] */
    eax = MEM32(ebx + 0x20); /* 0x120EA990: mov eax, dword ptr [ebx + 0x20] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edi); /* 0x120EA993: imul ecx, edi */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx); /* 0x120EA996: imul ecx, edx */
    PUSH32(esp, 0x120014BCu); /* 0x120EA999: push 0x120014bc */
    PUSH32(esp, 0x44u); /* 0x120EA99E: push 0x44 */
    esi = eax + ecx * 4; /* 0x120EA9A0: lea esi, [eax + ecx*4] */
    RECOMP_CALL(sub_12018970); /* 0x120EA9A3: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120EA9A8: pop ecx */
    ecx = POP32_VAL(esp); /* 0x120EA9A9: pop ecx */
    /* test eax, eax */ /* 0x120EA9AA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EA9C6; /* 0x120EA9AC: je 0x120ea9c6 */
L_120EA9AE:
    PUSH32(esp, esi); /* 0x120EA9AE: push esi */
    PUSH32(esp, MEM32(ebx + 0x1C)); /* 0x120EA9AF: push dword ptr [ebx + 0x1c] */
    ecx = ebp + (-0x18); /* 0x120EA9B2: lea ecx, [ebp - 0x18] */
    PUSH32(esp, MEM32(ebx + 0x40)); /* 0x120EA9B5: push dword ptr [ebx + 0x40] */
    PUSH32(esp, ecx); /* 0x120EA9B8: push ecx */
    PUSH32(esp, MEM32(ebx)); /* 0x120EA9B9: push dword ptr [ebx] */
    ecx = eax; /* 0x120EA9BB: mov ecx, eax */
    RECOMP_CALL(sub_120E7424); /* 0x120EA9BD: call 0x120e7424 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x120EA9C2: mov ecx, eax */
    goto L_120EA9C8; /* 0x120EA9C4: jmp 0x120ea9c8 */
L_120EA9C6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120EA9C6: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EA9C8:
    eax = MEM32(ebx + 0x3C); /* 0x120EA9C8: mov eax, dword ptr [ebx + 0x3c] */
    MEM32(eax + edi * 4) = ecx; /* 0x120EA9CB: mov dword ptr [eax + edi*4], ecx */
    /* test ecx, ecx */ /* 0x120EA9CE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EAA00; /* 0x120EA9D0: je 0x120eaa00 */
L_120EA9D2:
    ecx = MEM32(ebx + 0x3C); /* 0x120EA9D2: mov ecx, dword ptr [ebx + 0x3c] */
    ecx = MEM32(ecx + edi * 4); /* 0x120EA9D5: mov ecx, dword ptr [ecx + edi*4] */
    RECOMP_CALL(sub_120EA69C); /* 0x120EA9D8: call 0x120ea69c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EA9DD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120EAA04; /* 0x120EA9DF: jns 0x120eaa04 */
L_120EA9E1:
    eax = MEM32(ebx + 0x3C); /* 0x120EA9E1: mov eax, dword ptr [ebx + 0x3c] */
    esi = MEM32(eax + edi * 4); /* 0x120EA9E4: mov esi, dword ptr [eax + edi*4] */
    /* test esi, esi */ /* 0x120EA9E7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EA9F9; /* 0x120EA9E9: je 0x120ea9f9 */
L_120EA9EB:
    ecx = esi; /* 0x120EA9EB: mov ecx, esi */
    RECOMP_CALL(sub_120E74A2); /* 0x120EA9ED: call 0x120e74a2 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x120EA9F2: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x120EA9F3: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120EA9F8: pop ecx */
L_120EA9F9:
    eax = MEM32(ebx + 0x3C); /* 0x120EA9F9: mov eax, dword ptr [ebx + 0x3c] */
    _flag_a = (uint32_t)(MEM32(eax + edi * 4)); _flag_b = (uint32_t)(0);
    MEM32(eax + edi * 4) = MEM32(eax + edi * 4) & 0; /* 0x120EA9FC: and dword ptr [eax + edi*4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EAA00:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EAA00: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120EAA0A; /* 0x120EAA02: jmp 0x120eaa0a */
L_120EAA04:
    eax = MEM32(ebx + 0x3C); /* 0x120EAA04: mov eax, dword ptr [ebx + 0x3c] */
    eax = MEM32(eax + edi * 4); /* 0x120EAA07: mov eax, dword ptr [eax + edi*4] */
L_120EAA0A:
    esi = POP32_VAL(esp); /* 0x120EAA0A: pop esi */
L_120EAA0B:
    ecx = MEM32(ebp + (-0x4)); /* 0x120EAA0B: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x120EAA0E: pop edi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120EAA0F: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x120EAA11: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x120EAA12: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120EAA17: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x120EAA18: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_120EAA20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EAA20u);

L_120EAA20:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EAA20: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x4) = eax; /* 0x120EAA22: mov dword ptr [ecx + 4], eax */
    MEM32(ecx + 0xC) = eax; /* 0x120EAA25: mov dword ptr [ecx + 0xc], eax */
    MEM32(ecx + 0x10) = eax; /* 0x120EAA28: mov dword ptr [ecx + 0x10], eax */
    MEM32(ecx + 0x18) = eax; /* 0x120EAA2B: mov dword ptr [ecx + 0x18], eax */
    MEM32(ecx + 0x1C) = eax; /* 0x120EAA2E: mov dword ptr [ecx + 0x1c], eax */
    MEM32(ecx + 0x20) = eax; /* 0x120EAA31: mov dword ptr [ecx + 0x20], eax */
    MEM32(ecx) = 0x120089C8u; /* 0x120EAA34: mov dword ptr [ecx], 0x120089c8 */
    MEM32(ecx + 0x8) = 1; /* 0x120EAA3A: mov dword ptr [ecx + 8], 1 */
    eax = ecx; /* 0x120EAA41: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x120EAA43: ret  */
    RECOMP_REGS_OUT();
}

void sub_120EAA49(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EAA49u);

L_120EAA49:
    edi = edi; /* 0x120EAA49: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EAA4B: push ebp */
    ebp = esp; /* 0x120EAA4C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x120EAA4E: sub esp, 0x10 */
    _flag_k = FK_CMP;
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x120EAA51: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x120EAA55: push esi */
    esi = ecx; /* 0x120EAA56: mov esi, ecx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EAA64; /* 0x120EAA58: jne 0x120eaa64 */
L_120EAA5A:
    eax = 0x8876086Cu; /* 0x120EAA5A: mov eax, 0x8876086c */
    goto L_120EAC78; /* 0x120EAA5F: jmp 0x120eac78 */
L_120EAA64:
    PUSH32(esp, ebx); /* 0x120EAA64: push ebx */
    ebx = esi + 0x10; /* 0x120EAA65: lea ebx, [esi + 0x10] */
    PUSH32(esp, ebx); /* 0x120EAA68: push ebx */
    eax = ebp + (-0xC); /* 0x120EAA69: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x120EAA6C: push eax */
    PUSH32(esp, 0x42415443u); /* 0x120EAA6D: push 0x42415443 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120EAA72: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_120E45E4); /* 0x120EAA75: call 0x120e45e4 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EAA7A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EAC77; /* 0x120EAA7C: js 0x120eac77 */
L_120EAA82:
    /* cmp eax, 1 */ /* 0x120EAA82: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EAA91; /* 0x120EAA85: jne 0x120eaa91 */
L_120EAA87:
    eax = 0x88760B59u; /* 0x120EAA87: mov eax, 0x88760b59 */
    goto L_120EAC77; /* 0x120EAA8C: jmp 0x120eac77 */
L_120EAA91:
    PUSH32(esp, edi); /* 0x120EAA91: push edi */
    edi = 0x120014BCu; /* 0x120EAA92: mov edi, 0x120014bc */
    PUSH32(esp, edi); /* 0x120EAA97: push edi */
    PUSH32(esp, MEM32(ebx)); /* 0x120EAA98: push dword ptr [ebx] */
    RECOMP_CALL(sub_12018970); /* 0x120EAA9A: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120EAA9F: pop ecx */
    ecx = POP32_VAL(esp); /* 0x120EAAA0: pop ecx */
    MEM32(esi + 0xC) = eax; /* 0x120EAAA1: mov dword ptr [esi + 0xc], eax */
    /* test eax, eax */ /* 0x120EAAA4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EABD0; /* 0x120EAAA6: je 0x120eabd0 */
L_120EAAAC:
    PUSH32(esp, MEM32(ebx)); /* 0x120EAAAC: push dword ptr [ebx] */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x120EAAAE: push dword ptr [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x120EAAB1: push eax */
    RECOMP_CALL(sub_121BF440); /* 0x120EAAB2: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xC); /* 0x120EAAB7: mov eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120EAABA: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM32(esi + 0x14) = eax; /* 0x120EAABD: mov dword ptr [esi + 0x14], eax */
    /* cmp MEM32(eax), 0x1Cu */ /* 0x120EAAC0: cmp dword ptr [eax], 0x1c */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_120EABDA; /* 0x120EAAC3: jb 0x120eabda */
L_120EAAC9:
    eax = MEM32(eax + 0xC); /* 0x120EAAC9: mov eax, dword ptr [eax + 0xc] */
    PUSH32(esp, edi); /* 0x120EAACC: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120EAACD: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 4); /* 0x120EAACF: push 4 */
    edx = POP32_VAL(esp); /* 0x120EAAD1: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x120EAAD2: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x120EAAD4: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x120EAAD7: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x120EAAD9: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x120EAADB: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x120EAADC: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120EAAE1: pop ecx */
    ecx = POP32_VAL(esp); /* 0x120EAAE2: pop ecx */
    ecx = eax; /* 0x120EAAE3: mov ecx, eax */
    MEM32(esi + 0x18) = ecx; /* 0x120EAAE5: mov dword ptr [esi + 0x18], ecx */
    /* test ecx, ecx */ /* 0x120EAAE8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EABD0; /* 0x120EAAEA: je 0x120eabd0 */
L_120EAAF0:
    eax = MEM32(esi + 0x14); /* 0x120EAAF0: mov eax, dword ptr [esi + 0x14] */
    eax = MEM32(eax + 0xC); /* 0x120EAAF3: mov eax, dword ptr [eax + 0xc] */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x120EAAF6: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x120EAAF6: shl eax, 2 */
    PUSH32(esp, eax); /* 0x120EAAF9: push eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120EAAFA: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x120EAAFC: push edi */
    PUSH32(esp, ecx); /* 0x120EAAFD: push ecx */
    RECOMP_CALL(sub_121BF434); /* 0x120EAAFE: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x14); /* 0x120EAB03: mov ecx, dword ptr [esi + 0x14] */
    eax = MEM32(ecx + 0xC); /* 0x120EAB06: mov eax, dword ptr [ecx + 0xc] */
    MEM32(esi + 0x1C) = eax; /* 0x120EAB09: mov dword ptr [esi + 0x1c], eax */
    eax = MEM32(ecx + 0xC); /* 0x120EAB0C: mov eax, dword ptr [ecx + 0xc] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x14u); /* 0x120EAB0F: imul eax, eax, 0x14 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x10); /* 0x120EAB12: add eax, dword ptr [ecx + 0x10] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120EAB15: add esp, 0xc */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebx) */ /* 0x120EAB18: cmp eax, dword ptr [ebx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120EABDA; /* 0x120EAB1A: ja 0x120eabda */
L_120EAB20:
    eax = MEM32(esi + 0xC); /* 0x120EAB20: mov eax, dword ptr [esi + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x10));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0x10); /* 0x120EAB23: add eax, dword ptr [ecx + 0x10] */
    _flag_k = FK_ADD;
    edx = edi; /* 0x120EAB26: mov edx, edi */
    MEM32(ebp + (-0x10)) = eax; /* 0x120EAB28: mov dword ptr [ebp - 0x10], eax */
    MEM32(ebp + (-0x4)) = edi; /* 0x120EAB2B: mov dword ptr [ebp - 4], edi */
    MEM32(ebp + 0x8) = edi; /* 0x120EAB2E: mov dword ptr [ebp + 8], edi */
    /* cmp MEM32(esi + 0x1C), edi */ /* 0x120EAB31: cmp dword ptr [esi + 0x1c], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120EABAC; /* 0x120EAB34: jbe 0x120eabac */
L_120EAB36:
    ecx = eax + 0xC; /* 0x120EAB36: lea ecx, [eax + 0xc] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x120EAB39: mov dword ptr [ebp - 8], ecx */
L_120EAB3C:
    edx = MEM32(ecx); /* 0x120EAB3C: mov edx, dword ptr [ecx] */
    eax = edx + 0x10; /* 0x120EAB3E: lea eax, [edx + 0x10] */
    /* cmp eax, MEM32(ebx) */ /* 0x120EAB41: cmp eax, dword ptr [ebx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120EABDA; /* 0x120EAB43: ja 0x120eabda */
L_120EAB49:
    eax = MEM32(esi + 0xC); /* 0x120EAB49: mov eax, dword ptr [esi + 0xc] */
    PUSH32(esp, edi); /* 0x120EAB4C: push edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + edx; /* 0x120EAB4D: add eax, edx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x120EAB4F: push eax */
    eax = ecx + (-0xC); /* 0x120EAB50: lea eax, [ecx - 0xc] */
    PUSH32(esp, eax); /* 0x120EAB53: push eax */
    PUSH32(esp, esi); /* 0x120EAB54: push esi */
    RECOMP_CALL(sub_120EA3FC); /* 0x120EAB55: call 0x120ea3fc */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x18); /* 0x120EAB5A: mov ecx, dword ptr [esi + 0x18] */
    edx = MEM32(ebp + 0x8); /* 0x120EAB5D: mov edx, dword ptr [ebp + 8] */
    MEM32(ecx + edx * 4) = eax; /* 0x120EAB60: mov dword ptr [ecx + edx*4], eax */
    /* test eax, eax */ /* 0x120EAB63: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EABD0; /* 0x120EAB65: je 0x120eabd0 */
L_120EAB67:
    eax = MEM32(esi + 0x18); /* 0x120EAB67: mov eax, dword ptr [esi + 0x18] */
    edx = MEM32(eax + edx * 4); /* 0x120EAB6A: mov edx, dword ptr [eax + edx*4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120EAB6D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EAB6F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(eax), MEM16(edx + 0x8) */ /* 0x120EAB71: cmp ax, word ptr [edx + 8] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(edx + 0x8)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    PUSH32(esp, 4); /* 0x120EAB75: push 4 */
    SET_LO8(ecx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x120EAB77: setne cl */
    eax = POP32_VAL(esp); /* 0x120EAB7A: pop eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x120EAB7B: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFDu);
    ecx = ecx & 0xFFFFFFFDu; /* 0x120EAB7C: and ecx, 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x120EAB7F: add ecx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0x18); /* 0x120EAB81: mov eax, dword ptr [edx + 0x18] */
    eax = (uint32_t)MEM16(eax + 0x8); /* 0x120EAB84: movzx eax, word ptr [eax + 8] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x120EAB88: imul ecx, eax */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(edx + 0x2C)); /* 0x120EAB8B: imul ecx, dword ptr [edx + 0x2c] */
    edx = MEM32(ebp + (-0x4)); /* 0x120EAB8F: mov edx, dword ptr [ebp - 4] */
    eax = MEM32(ebp + 0x8); /* 0x120EAB92: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + ecx; /* 0x120EAB95: add edx, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x8)); /* 0x120EAB97: mov ecx, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120EAB9A: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x14u; /* 0x120EAB9B: add ecx, 0x14 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x4)) = edx; /* 0x120EAB9E: mov dword ptr [ebp - 4], edx */
    MEM32(ebp + 0x8) = eax; /* 0x120EABA1: mov dword ptr [ebp + 8], eax */
    MEM32(ebp + (-0x8)) = ecx; /* 0x120EABA4: mov dword ptr [ebp - 8], ecx */
    /* cmp eax, MEM32(esi + 0x1C) */ /* 0x120EABA7: cmp eax, dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120EAB3C; /* 0x120EABAA: jb 0x120eab3c */
L_120EABAC:
    PUSH32(esp, 0x120014BCu); /* 0x120EABAC: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120EABB1: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = edx; /* 0x120EABB3: mov eax, edx */
    PUSH32(esp, 4); /* 0x120EABB5: push 4 */
    edx = POP32_VAL(esp); /* 0x120EABB7: pop edx */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x120EABB8: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x120EABBA: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x120EABBD: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x120EABBF: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x120EABC1: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x120EABC2: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120EABC7: pop ecx */
    ecx = POP32_VAL(esp); /* 0x120EABC8: pop ecx */
    MEM32(esi + 0x20) = eax; /* 0x120EABC9: mov dword ptr [esi + 0x20], eax */
    /* test eax, eax */ /* 0x120EABCC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EABE4; /* 0x120EABCE: jne 0x120eabe4 */
L_120EABD0:
    eax = 0x8007000Eu; /* 0x120EABD0: mov eax, 0x8007000e */
    goto L_120EAC76; /* 0x120EABD5: jmp 0x120eac76 */
L_120EABDA:
    eax = 0x88760B59u; /* 0x120EABDA: mov eax, 0x88760b59 */
    goto L_120EAC76; /* 0x120EABDF: jmp 0x120eac76 */
L_120EABE4:
    ebx = edi; /* 0x120EABE4: mov ebx, edi */
    /* cmp MEM32(esi + 0x1C), edi */ /* 0x120EABE6: cmp dword ptr [esi + 0x1c], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120EAC32; /* 0x120EABE9: jbe 0x120eac32 */
L_120EABEB:
    ecx = MEM32(esi + 0x18); /* 0x120EABEB: mov ecx, dword ptr [esi + 0x18] */
L_120EABEE:
    eax = MEM32(esi + 0x20); /* 0x120EABEE: mov eax, dword ptr [esi + 0x20] */
    ecx = MEM32(ecx + ebx * 4); /* 0x120EABF1: mov ecx, dword ptr [ecx + ebx*4] */
    eax = eax + edi * 4; /* 0x120EABF4: lea eax, [eax + edi*4] */
    PUSH32(esp, eax); /* 0x120EABF7: push eax */
    RECOMP_CALL(sub_120E7547); /* 0x120EABF8: call 0x120e7547 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x18); /* 0x120EABFD: mov eax, dword ptr [esi + 0x18] */
    edx = MEM32(eax + ebx * 4); /* 0x120EAC00: mov edx, dword ptr [eax + ebx*4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120EAC03: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EAC05: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(eax), MEM16(edx + 0x8) */ /* 0x120EAC07: cmp ax, word ptr [edx + 8] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(edx + 0x8)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    PUSH32(esp, 4); /* 0x120EAC0B: push 4 */
    SET_LO8(ecx, (CMP_NE(_flag_a, _flag_b)) ? 1 : 0); /* 0x120EAC0D: setne cl */
    eax = POP32_VAL(esp); /* 0x120EAC10: pop eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx - 1; /* 0x120EAC11: dec ecx */
    _flag_k = FK_DEC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFDu);
    ecx = ecx & 0xFFFFFFFDu; /* 0x120EAC12: and ecx, 0xfffffffd */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + eax; /* 0x120EAC15: add ecx, eax */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0x18); /* 0x120EAC17: mov eax, dword ptr [edx + 0x18] */
    eax = (uint32_t)MEM16(eax + 0x8); /* 0x120EAC1A: movzx eax, word ptr [eax + 8] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax); /* 0x120EAC1E: imul ecx, eax */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)MEM32(edx + 0x2C)); /* 0x120EAC21: imul ecx, dword ptr [edx + 0x2c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ecx; /* 0x120EAC25: add edi, ecx */
    _flag_k = FK_ADD;
    ecx = MEM32(esi + 0x18); /* 0x120EAC27: mov ecx, dword ptr [esi + 0x18] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x120EAC2A: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(esi + 0x1C) */ /* 0x120EAC2B: cmp ebx, dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120EABEE; /* 0x120EAC2E: jb 0x120eabee */
L_120EAC30:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120EAC30: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EAC32:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x120EAC32: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EAC74; /* 0x120EAC36: je 0x120eac74 */
L_120EAC38:
    /* cmp MEM32(esi + 0x1C), edi */ /* 0x120EAC38: cmp dword ptr [esi + 0x1c], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120EAC64; /* 0x120EAC3B: jbe 0x120eac64 */
L_120EAC3D:
    edx = MEM32(ebp + (-0x10)); /* 0x120EAC3D: mov edx, dword ptr [ebp - 0x10] */
    esi = MEM32(esi + 0x1C); /* 0x120EAC40: mov esi, dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 8; /* 0x120EAC43: add edx, 8 */
    _flag_k = FK_ADD;
L_120EAC46:
    PUSH32(esp, 2); /* 0x120EAC46: push 2 */
    eax = POP32_VAL(esp); /* 0x120EAC48: pop eax */
    /* cmp LO16(eax), MEM16(edx + (-0x4)) */ /* 0x120EAC49: cmp ax, word ptr [edx - 4] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(edx + (-0x4))) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EAC5E; /* 0x120EAC4D: jne 0x120eac5e */
L_120EAC4F:
    ecx = (uint32_t)MEM16(edx + (-0x2)); /* 0x120EAC4F: movzx ecx, word ptr [edx - 2] */
    eax = (uint32_t)MEM16(edx); /* 0x120EAC53: movzx eax, word ptr [edx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x120EAC56: add eax, ecx */
    _flag_k = FK_ADD;
    /* cmp edi, eax */ /* 0x120EAC58: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120EAC5E; /* 0x120EAC5A: jae 0x120eac5e */
L_120EAC5C:
    edi = eax; /* 0x120EAC5C: mov edi, eax */
L_120EAC5E:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 0x14u; /* 0x120EAC5E: add edx, 0x14 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x120EAC61: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EAC46; /* 0x120EAC62: jne 0x120eac46 */
L_120EAC64:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EAC64: push dword ptr [ebp + 0xc] */
    if (4u) _cf = (((edi) >> 28) & 1u); /* 0x120EAC67: shl edi, 4 */
    if (4u) { _flag_a = recomp_flags_pack((edi << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi << 4u; /* 0x120EAC67: shl edi, 4 */
    PUSH32(esp, edi); /* 0x120EAC6A: push edi */
    RECOMP_CALL(sub_120192FE); /* 0x120EAC6B: call 0x120192fe */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EAC70: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EAC76; /* 0x120EAC72: js 0x120eac76 */
L_120EAC74:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EAC74: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EAC76:
    edi = POP32_VAL(esp); /* 0x120EAC76: pop edi */
L_120EAC77:
    ebx = POP32_VAL(esp); /* 0x120EAC77: pop ebx */
L_120EAC78:
    esi = POP32_VAL(esp); /* 0x120EAC78: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120EAC79: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120EAC7A: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120EAC82(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EAC82u);

L_120EAC82:
    edi = edi; /* 0x120EAC82: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EAC84: push ebp */
    ebp = esp; /* 0x120EAC85: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120EAC87: push esi */
    esi = MEM32(ebp + 0x8); /* 0x120EAC88: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0x8); /* 0x120EAC8B: mov eax, dword ptr [esi + 8] */
    PUSH32(esp, edi); /* 0x120EAC8E: push edi */
    edi = eax + (-0x1); /* 0x120EAC8F: lea edi, [eax - 1] */
    MEM32(esi + 0x8) = edi; /* 0x120EAC92: mov dword ptr [esi + 8], edi */
    /* cmp eax, 1 */ /* 0x120EAC95: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EACA8; /* 0x120EAC98: jne 0x120eaca8 */
L_120EAC9A:
    ecx = esi; /* 0x120EAC9A: mov ecx, esi */
    RECOMP_CALL(sub_120E7803); /* 0x120EAC9C: call 0x120e7803 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x120EACA1: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x120EACA2: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120EACA7: pop ecx */
L_120EACA8:
    eax = edi; /* 0x120EACA8: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x120EACAA: pop edi */
    esi = POP32_VAL(esp); /* 0x120EACAB: pop esi */
    ebp = POP32_VAL(esp); /* 0x120EACAC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x120EACAD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_120EACB5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EACB5u);

L_120EACB5:
    edi = edi; /* 0x120EACB5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EACB7: push ebp */
    ebp = esp; /* 0x120EACB8: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x120EACBA: push ecx */
    PUSH32(esp, ebx); /* 0x120EACBB: push ebx */
    PUSH32(esp, esi); /* 0x120EACBC: push esi */
    esi = ecx; /* 0x120EACBD: mov esi, ecx */
    PUSH32(esp, edi); /* 0x120EACBF: push edi */
    edi = MEM32(ebp + 0x8); /* 0x120EACC0: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x4)) = esi; /* 0x120EACC3: mov dword ptr [ebp - 4], esi */
    goto L_120EADF3; /* 0x120EACC6: jmp 0x120eadf3 */
L_120EACCB:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120EACCB: inc edi */
    _flag_k = FK_INC;
L_120EACCC:
    eax = (int32_t)(int8_t)MEM8(edi); /* 0x120EACCC: movsx eax, byte ptr [edi] */
    PUSH32(esp, eax); /* 0x120EACCF: push eax */
    RECOMP_CALL(sub_121BF630); /* 0x120EACD0: call 0x121bf630 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120EACD5: pop ecx */
    /* test eax, eax */ /* 0x120EACD6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EACCB; /* 0x120EACD8: jne 0x120eaccb */
L_120EACDA:
    SET_LO8(eax, MEM8(edi)); /* 0x120EACDA: mov al, byte ptr [edi] */
    /* test LO8(eax), LO8(eax) */ /* 0x120EACDC: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EADFF; /* 0x120EACDE: je 0x120eadff */
L_120EACE4:
    /* cmp LO8(eax), 0x5Bu */ /* 0x120EACE4: cmp al, 0x5b */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x5Bu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EAD5C; /* 0x120EACE6: jne 0x120ead5c */
L_120EACE8:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120EACE8: inc edi */
    _flag_k = FK_INC;
    eax = (int32_t)(int8_t)MEM8(edi); /* 0x120EACE9: movsx eax, byte ptr [edi] */
    PUSH32(esp, eax); /* 0x120EACEC: push eax */
    RECOMP_CALL(sub_121BF630); /* 0x120EACED: call 0x121bf630 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120EACF2: pop ecx */
    /* test eax, eax */ /* 0x120EACF3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EACE8; /* 0x120EACF5: jne 0x120eace8 */
L_120EACF7:
    eax = (int32_t)(int8_t)MEM8(edi); /* 0x120EACF7: movsx eax, byte ptr [edi] */
    PUSH32(esp, eax); /* 0x120EACFA: push eax */
    RECOMP_CALL(sub_121BF624); /* 0x120EACFB: call 0x121bf624 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120EAD00: pop ecx */
    /* test eax, eax */ /* 0x120EAD01: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EADFB; /* 0x120EAD03: je 0x120eadfb */
L_120EAD09:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120EAD09: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120EAD15; /* 0x120EAD0B: jmp 0x120ead15 */
L_120EAD0D:
    ebx = (uint32_t)((int32_t)ebx * (int32_t)0xAu); /* 0x120EAD0D: imul ebx, ebx, 0xa */
    ebx = ebx + eax + (-0x30); /* 0x120EAD10: lea ebx, [ebx + eax - 0x30] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120EAD14: inc edi */
    _flag_k = FK_INC;
L_120EAD15:
    eax = (int32_t)(int8_t)MEM8(edi); /* 0x120EAD15: movsx eax, byte ptr [edi] */
    PUSH32(esp, eax); /* 0x120EAD18: push eax */
    RECOMP_CALL(sub_121BF624); /* 0x120EAD19: call 0x121bf624 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EAD1E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (int32_t)(int8_t)MEM8(edi); /* 0x120EAD20: movsx eax, byte ptr [edi] */
    ecx = POP32_VAL(esp); /* 0x120EAD23: pop ecx */
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EAD0D; /* 0x120EAD24: jne 0x120ead0d */
L_120EAD26:
    goto L_120EAD2C; /* 0x120EAD26: jmp 0x120ead2c */
L_120EAD28:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120EAD28: inc edi */
    _flag_k = FK_INC;
    eax = (int32_t)(int8_t)MEM8(edi); /* 0x120EAD29: movsx eax, byte ptr [edi] */
L_120EAD2C:
    PUSH32(esp, eax); /* 0x120EAD2C: push eax */
    RECOMP_CALL(sub_121BF630); /* 0x120EAD2D: call 0x121bf630 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120EAD32: pop ecx */
    /* test eax, eax */ /* 0x120EAD33: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EAD28; /* 0x120EAD35: jne 0x120ead28 */
L_120EAD37:
    /* cmp MEM8(edi), 0x5Du */ /* 0x120EAD37: cmp byte ptr [edi], 0x5d */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0x5Du) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EADFB; /* 0x120EAD3A: jne 0x120eadfb */
L_120EAD40:
    PUSH32(esp, ebx); /* 0x120EAD40: push ebx */
    ecx = esi; /* 0x120EAD41: mov ecx, esi */
    RECOMP_CALL(sub_120EA859); /* 0x120EAD43: call 0x120ea859 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120EAD48: mov esi, eax */
    MEM32(ebp + (-0x4)) = esi; /* 0x120EAD4A: mov dword ptr [ebp - 4], esi */
    /* test esi, esi */ /* 0x120EAD4D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EADFB; /* 0x120EAD4F: je 0x120eadfb */
L_120EAD55:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120EAD55: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_120EACCB; /* 0x120EAD57: jmp 0x120eaccb */
L_120EAD5C:
    /* cmp LO8(eax), 0x2Eu */ /* 0x120EAD5C: cmp al, 0x2e */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EAD6C; /* 0x120EAD5E: je 0x120ead6c */
L_120EAD60:
    /* test ebx, ebx */ /* 0x120EAD60: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EADFB; /* 0x120EAD62: je 0x120eadfb */
L_120EAD68:
    /* cmp LO8(eax), 0x2Eu */ /* 0x120EAD68: cmp al, 0x2e */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x2Eu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EAD6D; /* 0x120EAD6A: jne 0x120ead6d */
L_120EAD6C:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120EAD6C: inc edi */
    _flag_k = FK_INC;
L_120EAD6D:
    eax = (int32_t)(int8_t)MEM8(edi); /* 0x120EAD6D: movsx eax, byte ptr [edi] */
    PUSH32(esp, eax); /* 0x120EAD70: push eax */
    RECOMP_CALL(sub_121BF630); /* 0x120EAD71: call 0x121bf630 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120EAD76: pop ecx */
    /* test eax, eax */ /* 0x120EAD77: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EAD6C; /* 0x120EAD79: jne 0x120ead6c */
L_120EAD7B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120EAD7B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EAD7D:
    eax = (int32_t)(int8_t)MEM8(ebx + edi); /* 0x120EAD7D: movsx eax, byte ptr [ebx + edi] */
    PUSH32(esp, eax); /* 0x120EAD81: push eax */
    RECOMP_CALL(sub_121BF71C); /* 0x120EAD82: call 0x121bf71c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120EAD87: pop ecx */
    /* test eax, eax */ /* 0x120EAD88: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EAD92; /* 0x120EAD8A: jne 0x120ead92 */
L_120EAD8C:
    /* cmp MEM8(ebx + edi), 0x5Fu */ /* 0x120EAD8C: cmp byte ptr [ebx + edi], 0x5f */
    _flag_a = (uint32_t)(MEM8(ebx + edi)) << 24; _flag_b = (uint32_t)(0x5Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EAD95; /* 0x120EAD90: jne 0x120ead95 */
L_120EAD92:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x120EAD92: inc ebx */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_120EAD7D; /* 0x120EAD93: jmp 0x120ead7d */
L_120EAD95:
    /* test ebx, ebx */ /* 0x120EAD95: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EADFB; /* 0x120EAD97: je 0x120eadfb */
L_120EAD99:
    eax = MEM32(esi + 0x18); /* 0x120EAD99: mov eax, dword ptr [esi + 0x18] */
    eax = (uint32_t)MEM16(eax + 0xA); /* 0x120EAD9C: movzx eax, word ptr [eax + 0xa] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120EADA0: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = eax; /* 0x120EADA2: mov dword ptr [ebp + 8], eax */
L_120EADA5:
    MEM32(ebp + 0xC) = ecx; /* 0x120EADA5: mov dword ptr [ebp + 0xc], ecx */
    /* cmp ecx, eax */ /* 0x120EADA8: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120EADFB; /* 0x120EADAA: jae 0x120eadfb */
L_120EADAC:
    eax = MEM32(esi + 0x38); /* 0x120EADAC: mov eax, dword ptr [esi + 0x38] */
    eax = MEM32(eax + ecx * 4); /* 0x120EADAF: mov eax, dword ptr [eax + ecx*4] */
    edx = MEM32(eax + 0x4); /* 0x120EADB2: mov edx, dword ptr [eax + 4] */
    /* test edx, edx */ /* 0x120EADB5: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EADD3; /* 0x120EADB7: je 0x120eadd3 */
L_120EADB9:
    eax = MEM32(esi); /* 0x120EADB9: mov eax, dword ptr [esi] */
    esi = MEM32(eax + 0xC); /* 0x120EADBB: mov esi, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x120EADBE: add esi, edx */
    _flag_k = FK_ADD;
    ecx = ebx; /* 0x120EADC0: mov ecx, ebx */
    edx = edi; /* 0x120EADC2: mov edx, edi */
    RECOMP_CALL(sub_120E73E9); /* 0x120EADC4: call 0x120e73e9 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EADC9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EADD9; /* 0x120EADCB: je 0x120eadd9 */
L_120EADCD:
    esi = MEM32(ebp + (-0x4)); /* 0x120EADCD: mov esi, dword ptr [ebp - 4] */
    ecx = MEM32(ebp + 0xC); /* 0x120EADD0: mov ecx, dword ptr [ebp + 0xc] */
L_120EADD3:
    eax = MEM32(ebp + 0x8); /* 0x120EADD3: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120EADD6: inc ecx */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_120EADA5; /* 0x120EADD7: jmp 0x120eada5 */
L_120EADD9:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EADD9: push dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + (-0x4)); /* 0x120EADDC: mov ecx, dword ptr [ebp - 4] */
    RECOMP_CALL(sub_120E765F); /* 0x120EADDF: call 0x120e765f */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120EADE4: mov esi, eax */
    MEM32(ebp + (-0x4)) = eax; /* 0x120EADE6: mov dword ptr [ebp - 4], eax */
    /* test esi, esi */ /* 0x120EADE9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EADFB; /* 0x120EADEB: je 0x120eadfb */
L_120EADED:
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0; /* 0x120EADED: and dword ptr [ebp + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + ebx; /* 0x120EADF1: add edi, ebx */
    _flag_k = FK_ADD;
L_120EADF3:
    ebx = MEM32(ebp + 0xC); /* 0x120EADF3: mov ebx, dword ptr [ebp + 0xc] */
    RECOMP_BACKEDGE();
    goto L_120EACCC; /* 0x120EADF6: jmp 0x120eaccc */
L_120EADFB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EADFB: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120EAE01; /* 0x120EADFD: jmp 0x120eae01 */
L_120EADFF:
    eax = esi; /* 0x120EADFF: mov eax, esi */
L_120EAE01:
    edi = POP32_VAL(esp); /* 0x120EAE01: pop edi */
    esi = POP32_VAL(esp); /* 0x120EAE02: pop esi */
    ebx = POP32_VAL(esp); /* 0x120EAE03: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120EAE04: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120EAE05: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120EAE0D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EAE0Du);

L_120EAE0D:
    edi = edi; /* 0x120EAE0D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EAE0F: push ebp */
    ebp = esp; /* 0x120EAE10: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x120EAE12: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, esi); /* 0x120EAE15: push esi */
    PUSH32(esp, edi); /* 0x120EAE16: push edi */
    edi = MEM32(ebp + 0x8); /* 0x120EAE17: mov edi, dword ptr [ebp + 8] */
    eax = (int32_t)(int8_t)MEM8(edi); /* 0x120EAE1A: movsx eax, byte ptr [edi] */
    esi = ecx; /* 0x120EAE1D: mov esi, ecx */
    PUSH32(esp, eax); /* 0x120EAE1F: push eax */
    MEM32(ebp + (-0x4)) = esi; /* 0x120EAE20: mov dword ptr [ebp - 4], esi */
    RECOMP_CALL(sub_121BF630); /* 0x120EAE23: call 0x121bf630 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120EAE28: pop ecx */
    /* test eax, eax */ /* 0x120EAE29: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EAE3F; /* 0x120EAE2B: je 0x120eae3f */
L_120EAE2D:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120EAE2D: inc edi */
    _flag_k = FK_INC;
    eax = (int32_t)(int8_t)MEM8(edi); /* 0x120EAE2E: movsx eax, byte ptr [edi] */
    PUSH32(esp, eax); /* 0x120EAE31: push eax */
    RECOMP_CALL(sub_121BF630); /* 0x120EAE32: call 0x121bf630 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120EAE37: pop ecx */
    /* test eax, eax */ /* 0x120EAE38: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EAE2D; /* 0x120EAE3A: jne 0x120eae2d */
L_120EAE3C:
    MEM32(ebp + 0x8) = edi; /* 0x120EAE3C: mov dword ptr [ebp + 8], edi */
L_120EAE3F:
    eax = (int32_t)(int8_t)MEM8(edi); /* 0x120EAE3F: movsx eax, byte ptr [edi] */
    PUSH32(esp, eax); /* 0x120EAE42: push eax */
    RECOMP_CALL(sub_121BF71C); /* 0x120EAE43: call 0x121bf71c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120EAE48: pop ecx */
    /* test eax, eax */ /* 0x120EAE49: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EAE61; /* 0x120EAE4B: jne 0x120eae61 */
L_120EAE4D:
    /* cmp MEM8(edi), 0x5Fu */ /* 0x120EAE4D: cmp byte ptr [edi], 0x5f */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0x5Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EAE61; /* 0x120EAE50: je 0x120eae61 */
L_120EAE52:
    /* cmp MEM8(edi), 0x24u */ /* 0x120EAE52: cmp byte ptr [edi], 0x24 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0x24u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EAE61; /* 0x120EAE55: je 0x120eae61 */
L_120EAE57:
    eax = 0x8876086Cu; /* 0x120EAE57: mov eax, 0x8876086c */
    goto L_120EAFE1; /* 0x120EAE5C: jmp 0x120eafe1 */
L_120EAE61:
    PUSH32(esp, ebx); /* 0x120EAE61: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120EAE62: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x120EAE64: inc ebx */
    _flag_k = FK_INC;
L_120EAE65:
    eax = (int32_t)(int8_t)MEM8(ebx + edi); /* 0x120EAE65: movsx eax, byte ptr [ebx + edi] */
    PUSH32(esp, eax); /* 0x120EAE69: push eax */
    RECOMP_CALL(sub_121BF71C); /* 0x120EAE6A: call 0x121bf71c */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120EAE6F: pop ecx */
    /* test eax, eax */ /* 0x120EAE70: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EAE7A; /* 0x120EAE72: jne 0x120eae7a */
L_120EAE74:
    /* cmp MEM8(ebx + edi), 0x5Fu */ /* 0x120EAE74: cmp byte ptr [ebx + edi], 0x5f */
    _flag_a = (uint32_t)(MEM8(ebx + edi)) << 24; _flag_b = (uint32_t)(0x5Fu) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EAE7D; /* 0x120EAE78: jne 0x120eae7d */
L_120EAE7A:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x120EAE7A: inc ebx */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_120EAE65; /* 0x120EAE7B: jmp 0x120eae65 */
L_120EAE7D:
    eax = MEM32(esi + 0x14); /* 0x120EAE7D: mov eax, dword ptr [esi + 0x14] */
    edx = MEM32(eax + 0x10); /* 0x120EAE80: mov edx, dword ptr [eax + 0x10] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + MEM32(esi + 0xC); /* 0x120EAE83: add edx, dword ptr [esi + 0xc] */
    _flag_k = FK_ADD;
    eax = MEM32(eax + 0xC); /* 0x120EAE86: mov eax, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120EAE89: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120EAE8B: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x18)) = ebx; /* 0x120EAE8D: mov dword ptr [ebp - 0x18], ebx */
    MEM32(ebp + (-0x14)) = edx; /* 0x120EAE90: mov dword ptr [ebp - 0x14], edx */
    MEM32(ebp + (-0xC)) = ecx; /* 0x120EAE93: mov dword ptr [ebp - 0xc], ecx */
    MEM32(ebp + (-0x8)) = eax; /* 0x120EAE96: mov dword ptr [ebp - 8], eax */
    /* test eax, eax */ /* 0x120EAE99: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EAEE9; /* 0x120EAE9B: je 0x120eaee9 */
L_120EAE9D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x120EAE9D: add eax, ecx */
    _flag_k = FK_ADD;
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x120EAE9F: shr eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack((eax >> 1u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 1u; /* 0x120EAE9F: shr eax, 1 */
    MEM32(ebp + (-0x10)) = eax; /* 0x120EAEA1: mov dword ptr [ebp - 0x10], eax */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x14u); /* 0x120EAEA4: imul eax, eax, 0x14 */
    esi = MEM32(eax + edx); /* 0x120EAEA7: mov esi, dword ptr [eax + edx] */
    eax = MEM32(ebp + (-0x4)); /* 0x120EAEAA: mov eax, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + MEM32(eax + 0xC); /* 0x120EAEAD: add esi, dword ptr [eax + 0xc] */
    _flag_k = FK_ADD;
    ecx = ebx; /* 0x120EAEB0: mov ecx, ebx */
    edx = edi; /* 0x120EAEB2: mov edx, edi */
    RECOMP_CALL(sub_120E73E9); /* 0x120EAEB4: call 0x120e73e9 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EAEB9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EAEDD; /* 0x120EAEBB: je 0x120eaedd */
L_120EAEBD:
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120EAECB; /* 0x120EAEBD: jns 0x120eaecb */
L_120EAEBF:
    ecx = MEM32(ebp + (-0x10)); /* 0x120EAEBF: mov ecx, dword ptr [ebp - 0x10] */
    eax = MEM32(ebp + (-0x8)); /* 0x120EAEC2: mov eax, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120EAEC5: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0xC)) = ecx; /* 0x120EAEC6: mov dword ptr [ebp - 0xc], ecx */
    goto L_120EAED4; /* 0x120EAEC9: jmp 0x120eaed4 */
L_120EAECB:
    eax = MEM32(ebp + (-0x10)); /* 0x120EAECB: mov eax, dword ptr [ebp - 0x10] */
    ecx = MEM32(ebp + (-0xC)); /* 0x120EAECE: mov ecx, dword ptr [ebp - 0xc] */
    MEM32(ebp + (-0x8)) = eax; /* 0x120EAED1: mov dword ptr [ebp - 8], eax */
L_120EAED4:
    edx = MEM32(ebp + (-0x14)); /* 0x120EAED4: mov edx, dword ptr [ebp - 0x14] */
    /* cmp ecx, eax */ /* 0x120EAED7: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120EAE9D; /* 0x120EAED9: jb 0x120eae9d */
L_120EAEDB:
    goto L_120EAEE3; /* 0x120EAEDB: jmp 0x120eaee3 */
L_120EAEDD:
    eax = MEM32(ebp + (-0x8)); /* 0x120EAEDD: mov eax, dword ptr [ebp - 8] */
    ecx = MEM32(ebp + (-0xC)); /* 0x120EAEE0: mov ecx, dword ptr [ebp - 0xc] */
L_120EAEE3:
    esi = MEM32(ebp + (-0x10)); /* 0x120EAEE3: mov esi, dword ptr [ebp - 0x10] */
    edx = MEM32(ebp + (-0x14)); /* 0x120EAEE6: mov edx, dword ptr [ebp - 0x14] */
L_120EAEE9:
    /* cmp ecx, eax */ /* 0x120EAEE9: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EAFDB; /* 0x120EAEEB: je 0x120eafdb */
L_120EAEF1:
    edi = MEM32(ebp + (-0x4)); /* 0x120EAEF1: mov edi, dword ptr [ebp - 4] */
    eax = esi; /* 0x120EAEF4: mov eax, esi */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x14u); /* 0x120EAEF6: imul eax, eax, 0x14 */
    ecx = MEM32(eax + edx); /* 0x120EAEF9: mov ecx, dword ptr [eax + edx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(edi + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(edi + 0xC); /* 0x120EAEFC: add ecx, dword ptr [edi + 0xc] */
    _flag_k = FK_ADD;
    edi = MEM32(ebp + 0x8); /* 0x120EAEFF: mov edi, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x10)) = ecx; /* 0x120EAF02: mov dword ptr [ebp - 0x10], ecx */
    /* test esi, esi */ /* 0x120EAF05: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EAF55; /* 0x120EAF07: je 0x120eaf55 */
L_120EAF09:
    ebx = ecx; /* 0x120EAF09: mov ebx, ecx */
    ecx = MEM32(ebp + (-0x4)); /* 0x120EAF0B: mov ecx, dword ptr [ebp - 4] */
    edi = eax + edx + (-0x14); /* 0x120EAF0E: lea edi, [eax + edx - 0x14] */
L_120EAF12:
    eax = MEM32(edi); /* 0x120EAF12: mov eax, dword ptr [edi] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0xC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(ecx + 0xC); /* 0x120EAF14: add eax, dword ptr [ecx + 0xc] */
    _flag_k = FK_ADD;
    /* cmp ebx, eax */ /* 0x120EAF17: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EAF49; /* 0x120EAF19: je 0x120eaf49 */
L_120EAF1B:
    ecx = ebx; /* 0x120EAF1B: mov ecx, ebx */
L_120EAF1D:
    SET_LO8(edx, MEM8(ecx)); /* 0x120EAF1D: mov dl, byte ptr [ecx] */
    /* cmp LO8(edx), MEM8(eax) */ /* 0x120EAF1F: cmp dl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EAF3D; /* 0x120EAF21: jne 0x120eaf3d */
L_120EAF23:
    /* test LO8(edx), LO8(edx) */ /* 0x120EAF23: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EAF39; /* 0x120EAF25: je 0x120eaf39 */
L_120EAF27:
    SET_LO8(edx, MEM8(ecx + 0x1)); /* 0x120EAF27: mov dl, byte ptr [ecx + 1] */
    /* cmp LO8(edx), MEM8(eax + 0x1) */ /* 0x120EAF2A: cmp dl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EAF3D; /* 0x120EAF2D: jne 0x120eaf3d */
L_120EAF2F:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x120EAF2F: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x120EAF32: add eax, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x120EAF35: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EAF1D; /* 0x120EAF37: jne 0x120eaf1d */
L_120EAF39:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EAF39: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120EAF42; /* 0x120EAF3B: jmp 0x120eaf42 */
L_120EAF3D:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x120EAF3D: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x120EAF3F: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_120EAF42:
    /* test eax, eax */ /* 0x120EAF42: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EAF4F; /* 0x120EAF44: jne 0x120eaf4f */
L_120EAF46:
    ecx = MEM32(ebp + (-0x4)); /* 0x120EAF46: mov ecx, dword ptr [ebp - 4] */
L_120EAF49:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    edi = edi - 0x14u; /* 0x120EAF49: sub edi, 0x14 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x120EAF4C: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_120EAF12; /* 0x120EAF4D: jne 0x120eaf12 */
L_120EAF4F:
    edi = MEM32(ebp + 0x8); /* 0x120EAF4F: mov edi, dword ptr [ebp + 8] */
    ebx = MEM32(ebp + (-0x18)); /* 0x120EAF52: mov ebx, dword ptr [ebp - 0x18] */
L_120EAF55:
    eax = ebx + edi; /* 0x120EAF55: lea eax, [ebx + edi] */
    PUSH32(esp, 0); /* 0x120EAF58: push 0 */
    MEM32(ebp + 0x8) = eax; /* 0x120EAF5A: mov dword ptr [ebp + 8], eax */
    PUSH32(esp, eax); /* 0x120EAF5D: push eax */
    eax = MEM32(ebp + (-0x4)); /* 0x120EAF5E: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax + 0x18); /* 0x120EAF61: mov ecx, dword ptr [eax + 0x18] */
    ecx = MEM32(ecx + esi * 4); /* 0x120EAF64: mov ecx, dword ptr [ecx + esi*4] */
    RECOMP_CALL(sub_120EACB5); /* 0x120EAF67: call 0x120eacb5 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EAF6C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EAFDB; /* 0x120EAF6E: je 0x120eafdb */
L_120EAF70:
    ebx = MEM32(ebp + 0xC); /* 0x120EAF70: mov ebx, dword ptr [ebp + 0xc] */
    edi = esi; /* 0x120EAF73: mov edi, esi */
    edi = (uint32_t)((int32_t)edi * (int32_t)0x14u); /* 0x120EAF75: imul edi, edi, 0x14 */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + MEM32(ebp + (-0x14)); /* 0x120EAF78: add edi, dword ptr [ebp - 0x14] */
    _flag_k = FK_ADD;
L_120EAF7B:
    ecx = MEM32(ebp + (-0x4)); /* 0x120EAF7B: mov ecx, dword ptr [ebp - 4] */
    MEM32(ebx) = eax; /* 0x120EAF7E: mov dword ptr [ebx], eax */
    ebx = eax + 0x24; /* 0x120EAF80: lea ebx, [eax + 0x24] */
    eax = MEM32(ecx + 0x14); /* 0x120EAF83: mov eax, dword ptr [ecx + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x120EAF86: inc esi */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x14u; /* 0x120EAF87: add edi, 0x14 */
    _flag_k = FK_ADD;
    /* cmp esi, MEM32(eax + 0xC) */ /* 0x120EAF8A: cmp esi, dword ptr [eax + 0xc] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(eax + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120EAFE7; /* 0x120EAF8D: jae 0x120eafe7 */
L_120EAF8F:
    eax = MEM32(ecx + 0xC); /* 0x120EAF8F: mov eax, dword ptr [ecx + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + MEM32(edi); /* 0x120EAF92: add eax, dword ptr [edi] */
    _flag_k = FK_ADD;
    ecx = MEM32(ebp + (-0x10)); /* 0x120EAF94: mov ecx, dword ptr [ebp - 0x10] */
    /* cmp ecx, eax */ /* 0x120EAF97: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EAFC4; /* 0x120EAF99: je 0x120eafc4 */
L_120EAF9B:
    SET_LO8(edx, MEM8(ecx)); /* 0x120EAF9B: mov dl, byte ptr [ecx] */
    /* cmp LO8(edx), MEM8(eax) */ /* 0x120EAF9D: cmp dl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EAFBB; /* 0x120EAF9F: jne 0x120eafbb */
L_120EAFA1:
    /* test LO8(edx), LO8(edx) */ /* 0x120EAFA1: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EAFB7; /* 0x120EAFA3: je 0x120eafb7 */
L_120EAFA5:
    SET_LO8(edx, MEM8(ecx + 0x1)); /* 0x120EAFA5: mov dl, byte ptr [ecx + 1] */
    /* cmp LO8(edx), MEM8(eax + 0x1) */ /* 0x120EAFA8: cmp dl, byte ptr [eax + 1] */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x1)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EAFBB; /* 0x120EAFAB: jne 0x120eafbb */
L_120EAFAD:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x120EAFAD: add ecx, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x120EAFB0: add eax, 2 */
    _flag_k = FK_ADD;
    /* test LO8(edx), LO8(edx) */ /* 0x120EAFB3: test dl, dl */
    _flag_a = (uint32_t)(LO8(edx)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EAF9B; /* 0x120EAFB5: jne 0x120eaf9b */
L_120EAFB7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EAFB7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120EAFC0; /* 0x120EAFB9: jmp 0x120eafc0 */
L_120EAFBB:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x120EAFBB: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x120EAFBD: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_120EAFC0:
    /* test eax, eax */ /* 0x120EAFC0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EAFE7; /* 0x120EAFC2: jne 0x120eafe7 */
L_120EAFC4:
    eax = MEM32(ebp + (-0x4)); /* 0x120EAFC4: mov eax, dword ptr [ebp - 4] */
    ecx = MEM32(eax + 0x18); /* 0x120EAFC7: mov ecx, dword ptr [eax + 0x18] */
    ecx = MEM32(ecx + esi * 4); /* 0x120EAFCA: mov ecx, dword ptr [ecx + esi*4] */
    PUSH32(esp, 0); /* 0x120EAFCD: push 0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120EAFCF: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_120EACB5); /* 0x120EAFD2: call 0x120eacb5 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EAFD7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EAF7B; /* 0x120EAFD9: jne 0x120eaf7b */
L_120EAFDB:
    eax = 0x8876086Cu; /* 0x120EAFDB: mov eax, 0x8876086c */
L_120EAFE0:
    ebx = POP32_VAL(esp); /* 0x120EAFE0: pop ebx */
L_120EAFE1:
    edi = POP32_VAL(esp); /* 0x120EAFE1: pop edi */
    esi = POP32_VAL(esp); /* 0x120EAFE2: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120EAFE3: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120EAFE4: ret 8 */
L_120EAFE7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EAFE7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_120EAFE0; /* 0x120EAFE9: jmp 0x120eafe0 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_120EAFF0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EAFF0u);

L_120EAFF0:
    edi = edi; /* 0x120EAFF0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EAFF2: push ebp */
    ebp = esp; /* 0x120EAFF3: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120EAFF5: push esi */
    esi = MEM32(ebp + 0x10); /* 0x120EAFF6: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x120EAFF9: push edi */
    edi = MEM32(ebp + 0x14); /* 0x120EAFFA: mov edi, dword ptr [ebp + 0x14] */
    /* test esi, esi */ /* 0x120EAFFD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EB00C; /* 0x120EAFFF: jne 0x120eb00c */
L_120EB001:
    /* test edi, edi */ /* 0x120EB001: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EB00C; /* 0x120EB003: jne 0x120eb00c */
L_120EB005:
    eax = 0x8876086Cu; /* 0x120EB005: mov eax, 0x8876086c */
    goto L_120EB07D; /* 0x120EB00A: jmp 0x120eb07d */
L_120EB00C:
    ecx = MEM32(ebp + 0xC); /* 0x120EB00C: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x120EB00F: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EB005; /* 0x120EB011: je 0x120eb005 */
L_120EB013:
    edx = MEM32(ebp + 0x8); /* 0x120EB013: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(edx + 0x4); /* 0x120EB016: mov eax, dword ptr [edx + 4] */
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x120EB019: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120EB021; /* 0x120EB01B: jge 0x120eb021 */
L_120EB01D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x120EB01D: neg ecx */
    _flag_k = FK_CMP;
    goto L_120EB034; /* 0x120EB01F: jmp 0x120eb034 */
L_120EB021:
    eax = ebp + 0x10; /* 0x120EB021: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x120EB024: push eax */
    PUSH32(esp, ecx); /* 0x120EB025: push ecx */
    ecx = edx; /* 0x120EB026: mov ecx, edx */
    RECOMP_CALL(sub_120EAE0D); /* 0x120EB028: call 0x120eae0d */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EB02D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EB07D; /* 0x120EB02F: js 0x120eb07d */
L_120EB031:
    ecx = MEM32(ebp + 0x10); /* 0x120EB031: mov ecx, dword ptr [ebp + 0x10] */
L_120EB034:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120EB034: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EB036: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120EB038: inc edx */
    _flag_k = FK_INC;
    PUSH32(esp, ebx); /* 0x120EB039: push ebx */
    ebx = ecx; /* 0x120EB03A: mov ebx, ecx */
    /* test ecx, ecx */ /* 0x120EB03C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EB048; /* 0x120EB03E: je 0x120eb048 */
L_120EB040:
    ebx = MEM32(ebx + 0x24); /* 0x120EB040: mov ebx, dword ptr [ebx + 0x24] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120EB043: inc eax */
    _flag_k = FK_INC;
    /* test ebx, ebx */ /* 0x120EB044: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EB040; /* 0x120EB046: jne 0x120eb040 */
L_120EB048:
    ebx = POP32_VAL(esp); /* 0x120EB048: pop ebx */
    /* test edi, edi */ /* 0x120EB049: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EB05C; /* 0x120EB04B: je 0x120eb05c */
L_120EB04D:
    /* cmp MEM32(edi), 0 */ /* 0x120EB04D: cmp dword ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EB054; /* 0x120EB050: je 0x120eb054 */
L_120EB052:
    edx = MEM32(edi); /* 0x120EB052: mov edx, dword ptr [edi] */
L_120EB054:
    /* cmp edx, eax */ /* 0x120EB054: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120EB05A; /* 0x120EB056: jbe 0x120eb05a */
L_120EB058:
    edx = eax; /* 0x120EB058: mov edx, eax */
L_120EB05A:
    MEM32(edi) = eax; /* 0x120EB05A: mov dword ptr [edi], eax */
L_120EB05C:
    /* test esi, esi */ /* 0x120EB05C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EB07B; /* 0x120EB05E: je 0x120eb07b */
L_120EB060:
    goto L_120EB077; /* 0x120EB060: jmp 0x120eb077 */
L_120EB062:
    /* test edx, edx */ /* 0x120EB062: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EB07B; /* 0x120EB064: je 0x120eb07b */
L_120EB066:
    PUSH32(esp, esi); /* 0x120EB066: push esi */
    RECOMP_CALL(sub_120E75B6); /* 0x120EB067: call 0x120e75b6 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EB06C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EB07D; /* 0x120EB06E: js 0x120eb07d */
L_120EB070:
    ecx = MEM32(ecx + 0x24); /* 0x120EB070: mov ecx, dword ptr [ecx + 0x24] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x30u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x30u; /* 0x120EB073: add esi, 0x30 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x120EB076: dec edx */
    _flag_k = FK_DEC;
L_120EB077:
    /* test ecx, ecx */ /* 0x120EB077: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EB062; /* 0x120EB079: jne 0x120eb062 */
L_120EB07B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EB07B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EB07D:
    edi = POP32_VAL(esp); /* 0x120EB07D: pop edi */
    esi = POP32_VAL(esp); /* 0x120EB07E: pop esi */
    ebp = POP32_VAL(esp); /* 0x120EB07F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120EB080: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120EB088(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EB088u);

L_120EB088:
    edi = edi; /* 0x120EB088: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EB08A: push ebp */
    ebp = esp; /* 0x120EB08B: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x120EB08D: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x120EB090: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EB0C4; /* 0x120EB092: je 0x120eb0c4 */
L_120EB094:
    edx = MEM32(ebp + 0x8); /* 0x120EB094: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(edx + 0x4); /* 0x120EB097: mov eax, dword ptr [edx + 4] */
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x120EB09A: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120EB0A2; /* 0x120EB09C: jge 0x120eb0a2 */
L_120EB09E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x120EB09E: neg ecx */
    _flag_k = FK_CMP;
    goto L_120EB0B5; /* 0x120EB0A0: jmp 0x120eb0b5 */
L_120EB0A2:
    eax = ebp + 0xC; /* 0x120EB0A2: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x120EB0A5: push eax */
    PUSH32(esp, ecx); /* 0x120EB0A6: push ecx */
    ecx = edx; /* 0x120EB0A7: mov ecx, edx */
    RECOMP_CALL(sub_120EAE0D); /* 0x120EB0A9: call 0x120eae0d */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EB0AE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EB0C4; /* 0x120EB0B0: js 0x120eb0c4 */
L_120EB0B2:
    ecx = MEM32(ebp + 0xC); /* 0x120EB0B2: mov ecx, dword ptr [ebp + 0xc] */
L_120EB0B5:
    PUSH32(esp, 3); /* 0x120EB0B5: push 3 */
    eax = POP32_VAL(esp); /* 0x120EB0B7: pop eax */
    /* cmp LO16(eax), MEM16(ecx + 0x8) */ /* 0x120EB0B8: cmp ax, word ptr [ecx + 8] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(ecx + 0x8)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EB0C4; /* 0x120EB0BC: jne 0x120eb0c4 */
L_120EB0BE:
    eax = (uint32_t)MEM16(ecx + 0xA); /* 0x120EB0BE: movzx eax, word ptr [ecx + 0xa] */
    goto L_120EB0C7; /* 0x120EB0C2: jmp 0x120eb0c7 */
L_120EB0C4:
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x120EB0C4: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EB0C7:
    ebp = POP32_VAL(esp); /* 0x120EB0C7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120EB0C8: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120EB0D0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EB0D0u);

L_120EB0D0:
    edi = edi; /* 0x120EB0D0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EB0D2: push ebp */
    ebp = esp; /* 0x120EB0D3: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x120EB0D5: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x120EB0D8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EB0F3; /* 0x120EB0DA: jne 0x120eb0f3 */
L_120EB0DC:
    ecx = MEM32(ebp + 0x10); /* 0x120EB0DC: mov ecx, dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x120EB0DF: mov eax, dword ptr [ebp + 8] */
    /* cmp ecx, MEM32(eax + 0x1C) */ /* 0x120EB0E2: cmp ecx, dword ptr [eax + 0x1c] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_B(_flag_a, _flag_b)) goto L_120EB0EB; /* 0x120EB0E5: jb 0x120eb0eb */
L_120EB0E7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EB0E7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120EB122; /* 0x120EB0E9: jmp 0x120eb122 */
L_120EB0EB:
    eax = MEM32(eax + 0x18); /* 0x120EB0EB: mov eax, dword ptr [eax + 0x18] */
    eax = MEM32(eax + ecx * 4); /* 0x120EB0EE: mov eax, dword ptr [eax + ecx*4] */
    goto L_120EB120; /* 0x120EB0F1: jmp 0x120eb120 */
L_120EB0F3:
    edx = MEM32(ebp + 0x8); /* 0x120EB0F3: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(edx + 0x4); /* 0x120EB0F6: mov eax, dword ptr [edx + 4] */
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x120EB0F9: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120EB101; /* 0x120EB0FB: jge 0x120eb101 */
L_120EB0FD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x120EB0FD: neg ecx */
    _flag_k = FK_CMP;
    goto L_120EB114; /* 0x120EB0FF: jmp 0x120eb114 */
L_120EB101:
    eax = ebp + 0x8; /* 0x120EB101: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x120EB104: push eax */
    PUSH32(esp, ecx); /* 0x120EB105: push ecx */
    ecx = edx; /* 0x120EB106: mov ecx, edx */
    RECOMP_CALL(sub_120EAE0D); /* 0x120EB108: call 0x120eae0d */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EB10D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EB0E7; /* 0x120EB10F: js 0x120eb0e7 */
L_120EB111:
    ecx = MEM32(ebp + 0x8); /* 0x120EB111: mov ecx, dword ptr [ebp + 8] */
L_120EB114:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120EB114: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_120E765F); /* 0x120EB117: call 0x120e765f */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EB11C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EB0E7; /* 0x120EB11E: je 0x120eb0e7 */
L_120EB120:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x120EB120: neg eax */
    _flag_k = FK_CMP;
L_120EB122:
    ebp = POP32_VAL(esp); /* 0x120EB122: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120EB123: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120EB12B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EB12Bu);

L_120EB12B:
    edi = edi; /* 0x120EB12B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EB12D: push ebp */
    ebp = esp; /* 0x120EB12E: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x120EB130: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x120EB133: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EB153; /* 0x120EB135: jne 0x120eb153 */
L_120EB137:
    ecx = MEM32(ebp + 0x8); /* 0x120EB137: mov ecx, dword ptr [ebp + 8] */
    eax = ebp + 0xC; /* 0x120EB13A: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x120EB13D: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120EB13E: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_120EAE0D); /* 0x120EB141: call 0x120eae0d */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EB146: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120EB14E; /* 0x120EB148: jns 0x120eb14e */
L_120EB14A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EB14A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120EB184; /* 0x120EB14C: jmp 0x120eb184 */
L_120EB14E:
    eax = MEM32(ebp + 0xC); /* 0x120EB14E: mov eax, dword ptr [ebp + 0xc] */
    goto L_120EB182; /* 0x120EB151: jmp 0x120eb182 */
L_120EB153:
    edx = MEM32(ebp + 0x8); /* 0x120EB153: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(edx + 0x4); /* 0x120EB156: mov eax, dword ptr [edx + 4] */
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x120EB159: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120EB161; /* 0x120EB15B: jge 0x120eb161 */
L_120EB15D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x120EB15D: neg ecx */
    _flag_k = FK_CMP;
    goto L_120EB174; /* 0x120EB15F: jmp 0x120eb174 */
L_120EB161:
    eax = ebp + 0xC; /* 0x120EB161: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x120EB164: push eax */
    PUSH32(esp, ecx); /* 0x120EB165: push ecx */
    ecx = edx; /* 0x120EB166: mov ecx, edx */
    RECOMP_CALL(sub_120EAE0D); /* 0x120EB168: call 0x120eae0d */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EB16D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EB14A; /* 0x120EB16F: js 0x120eb14a */
L_120EB171:
    ecx = MEM32(ebp + 0xC); /* 0x120EB171: mov ecx, dword ptr [ebp + 0xc] */
L_120EB174:
    PUSH32(esp, 1); /* 0x120EB174: push 1 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120EB176: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_120EACB5); /* 0x120EB179: call 0x120eacb5 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EB17E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EB14A; /* 0x120EB180: je 0x120eb14a */
L_120EB182:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x120EB182: neg eax */
    _flag_k = FK_CMP;
L_120EB184:
    ebp = POP32_VAL(esp); /* 0x120EB184: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120EB185: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120EB18D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EB18Du);

L_120EB18D:
    edi = edi; /* 0x120EB18D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EB18F: push ebp */
    ebp = esp; /* 0x120EB190: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x120EB192: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x120EB195: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EB1CA; /* 0x120EB197: je 0x120eb1ca */
L_120EB199:
    edx = MEM32(ebp + 0x8); /* 0x120EB199: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(edx + 0x4); /* 0x120EB19C: mov eax, dword ptr [edx + 4] */
    _flag_a = (uint32_t)((eax | ecx)); _flag_b = (uint32_t)((eax | ecx));
    eax = eax | ecx; /* 0x120EB19F: or eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120EB1A7; /* 0x120EB1A1: jge 0x120eb1a7 */
L_120EB1A3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x120EB1A3: neg ecx */
    _flag_k = FK_CMP;
    goto L_120EB1BA; /* 0x120EB1A5: jmp 0x120eb1ba */
L_120EB1A7:
    eax = ebp + 0xC; /* 0x120EB1A7: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x120EB1AA: push eax */
    PUSH32(esp, ecx); /* 0x120EB1AB: push ecx */
    ecx = edx; /* 0x120EB1AC: mov ecx, edx */
    RECOMP_CALL(sub_120EAE0D); /* 0x120EB1AE: call 0x120eae0d */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EB1B3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EB1CA; /* 0x120EB1B5: js 0x120eb1ca */
L_120EB1B7:
    ecx = MEM32(ebp + 0xC); /* 0x120EB1B7: mov ecx, dword ptr [ebp + 0xc] */
L_120EB1BA:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120EB1BA: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_120EA859); /* 0x120EB1BD: call 0x120ea859 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EB1C2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EB1CA; /* 0x120EB1C4: je 0x120eb1ca */
L_120EB1C6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(eax);
    _cf = (eax) != 0;
    eax = (uint32_t)(-(int32_t)eax); /* 0x120EB1C6: neg eax */
    _flag_k = FK_CMP;
    goto L_120EB1CC; /* 0x120EB1C8: jmp 0x120eb1cc */
L_120EB1CA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EB1CA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EB1CC:
    ebp = POP32_VAL(esp); /* 0x120EB1CC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120EB1CD: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120EB1D5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EB1D5u);

L_120EB1D5:
    edi = edi; /* 0x120EB1D5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EB1D7: push ebp */
    ebp = esp; /* 0x120EB1D8: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120EB1DA: push esi */
    esi = MEM32(ebp + 0x10); /* 0x120EB1DB: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x120EB1DE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EB1E9; /* 0x120EB1E0: jne 0x120eb1e9 */
L_120EB1E2:
    eax = 0x8876086Cu; /* 0x120EB1E2: mov eax, 0x8876086c */
    goto L_120EB230; /* 0x120EB1E7: jmp 0x120eb230 */
L_120EB1E9:
    ecx = MEM32(ebp + 0x8); /* 0x120EB1E9: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x4); /* 0x120EB1EC: mov eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)((eax | esi)); _flag_b = (uint32_t)((eax | esi));
    eax = eax | esi; /* 0x120EB1EF: or eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120EB1F7; /* 0x120EB1F1: jge 0x120eb1f7 */
L_120EB1F3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x120EB1F3: neg esi */
    _flag_k = FK_CMP;
    goto L_120EB208; /* 0x120EB1F5: jmp 0x120eb208 */
L_120EB1F7:
    eax = ebp + 0x10; /* 0x120EB1F7: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x120EB1FA: push eax */
    PUSH32(esp, esi); /* 0x120EB1FB: push esi */
    RECOMP_CALL(sub_120EAE0D); /* 0x120EB1FC: call 0x120eae0d */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EB201: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EB230; /* 0x120EB203: js 0x120eb230 */
L_120EB205:
    esi = MEM32(ebp + 0x10); /* 0x120EB205: mov esi, dword ptr [ebp + 0x10] */
L_120EB208:
    PUSH32(esp, edi); /* 0x120EB208: push edi */
    edi = MEM32(ebp + 0x18); /* 0x120EB209: mov edi, dword ptr [ebp + 0x18] */
    if (2u) _cf = (((edi) >> 1) & 1u); /* 0x120EB20C: shr edi, 2 */
    if (2u) { _flag_a = recomp_flags_pack((edi >> 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edi = edi >> 2u; /* 0x120EB20C: shr edi, 2 */
    goto L_120EB218; /* 0x120EB20F: jmp 0x120eb218 */
L_120EB211:
    esi = MEM32(esi + 0x24); /* 0x120EB211: mov esi, dword ptr [esi + 0x24] */
    /* test esi, esi */ /* 0x120EB214: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EB22D; /* 0x120EB216: je 0x120eb22d */
L_120EB218:
    PUSH32(esp, 0); /* 0x120EB218: push 0 */
    PUSH32(esp, edi); /* 0x120EB21A: push edi */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120EB21B: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EB21E: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x120EB221: push esi */
    RECOMP_CALL(sub_120E7DD9); /* 0x120EB222: call 0x120e7dd9 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EB227: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120EB211; /* 0x120EB229: jns 0x120eb211 */
L_120EB22B:
    goto L_120EB22F; /* 0x120EB22B: jmp 0x120eb22f */
L_120EB22D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EB22D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EB22F:
    edi = POP32_VAL(esp); /* 0x120EB22F: pop edi */
L_120EB230:
    esi = POP32_VAL(esp); /* 0x120EB230: pop esi */
    ebp = POP32_VAL(esp); /* 0x120EB231: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x120EB232: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_120EB23A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EB23Au);

L_120EB23A:
    edi = edi; /* 0x120EB23A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EB23C: push ebp */
    ebp = esp; /* 0x120EB23D: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120EB23F: push esi */
    esi = MEM32(ebp + 0x10); /* 0x120EB240: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x120EB243: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EB24E; /* 0x120EB245: jne 0x120eb24e */
L_120EB247:
    eax = 0x8876086Cu; /* 0x120EB247: mov eax, 0x8876086c */
    goto L_120EB28F; /* 0x120EB24C: jmp 0x120eb28f */
L_120EB24E:
    ecx = MEM32(ebp + 0x8); /* 0x120EB24E: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x4); /* 0x120EB251: mov eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)((eax | esi)); _flag_b = (uint32_t)((eax | esi));
    eax = eax | esi; /* 0x120EB254: or eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120EB25C; /* 0x120EB256: jge 0x120eb25c */
L_120EB258:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x120EB258: neg esi */
    _flag_k = FK_CMP;
    goto L_120EB276; /* 0x120EB25A: jmp 0x120eb276 */
L_120EB25C:
    eax = ebp + 0x10; /* 0x120EB25C: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x120EB25F: push eax */
    PUSH32(esp, esi); /* 0x120EB260: push esi */
    RECOMP_CALL(sub_120EAE0D); /* 0x120EB261: call 0x120eae0d */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EB266: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EB28F; /* 0x120EB268: js 0x120eb28f */
L_120EB26A:
    esi = MEM32(ebp + 0x10); /* 0x120EB26A: mov esi, dword ptr [ebp + 0x10] */
    goto L_120EB276; /* 0x120EB26D: jmp 0x120eb276 */
L_120EB26F:
    esi = MEM32(esi + 0x24); /* 0x120EB26F: mov esi, dword ptr [esi + 0x24] */
    /* test esi, esi */ /* 0x120EB272: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EB28D; /* 0x120EB274: je 0x120eb28d */
L_120EB276:
    PUSH32(esp, 0); /* 0x120EB276: push 0 */
    PUSH32(esp, 1); /* 0x120EB278: push 1 */
    eax = ebp + 0x14; /* 0x120EB27A: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x120EB27D: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EB27E: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x120EB281: push esi */
    RECOMP_CALL(sub_120E80BC); /* 0x120EB282: call 0x120e80bc */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EB287: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120EB26F; /* 0x120EB289: jns 0x120eb26f */
L_120EB28B:
    goto L_120EB28F; /* 0x120EB28B: jmp 0x120eb28f */
L_120EB28D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EB28D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EB28F:
    esi = POP32_VAL(esp); /* 0x120EB28F: pop esi */
    ebp = POP32_VAL(esp); /* 0x120EB290: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120EB291: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120EB299(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EB299u);

L_120EB299:
    edi = edi; /* 0x120EB299: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EB29B: push ebp */
    ebp = esp; /* 0x120EB29C: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120EB29E: push esi */
    esi = MEM32(ebp + 0x10); /* 0x120EB29F: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x120EB2A2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EB2AD; /* 0x120EB2A4: jne 0x120eb2ad */
L_120EB2A6:
    eax = 0x8876086Cu; /* 0x120EB2A6: mov eax, 0x8876086c */
    goto L_120EB2EE; /* 0x120EB2AB: jmp 0x120eb2ee */
L_120EB2AD:
    ecx = MEM32(ebp + 0x8); /* 0x120EB2AD: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x4); /* 0x120EB2B0: mov eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)((eax | esi)); _flag_b = (uint32_t)((eax | esi));
    eax = eax | esi; /* 0x120EB2B3: or eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120EB2BB; /* 0x120EB2B5: jge 0x120eb2bb */
L_120EB2B7:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x120EB2B7: neg esi */
    _flag_k = FK_CMP;
    goto L_120EB2D5; /* 0x120EB2B9: jmp 0x120eb2d5 */
L_120EB2BB:
    eax = ebp + 0x10; /* 0x120EB2BB: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x120EB2BE: push eax */
    PUSH32(esp, esi); /* 0x120EB2BF: push esi */
    RECOMP_CALL(sub_120EAE0D); /* 0x120EB2C0: call 0x120eae0d */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EB2C5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EB2EE; /* 0x120EB2C7: js 0x120eb2ee */
L_120EB2C9:
    esi = MEM32(ebp + 0x10); /* 0x120EB2C9: mov esi, dword ptr [ebp + 0x10] */
    goto L_120EB2D5; /* 0x120EB2CC: jmp 0x120eb2d5 */
L_120EB2CE:
    esi = MEM32(esi + 0x24); /* 0x120EB2CE: mov esi, dword ptr [esi + 0x24] */
    /* test esi, esi */ /* 0x120EB2D1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EB2EC; /* 0x120EB2D3: je 0x120eb2ec */
L_120EB2D5:
    PUSH32(esp, 0); /* 0x120EB2D5: push 0 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120EB2D7: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120EB2DA: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EB2DD: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x120EB2E0: push esi */
    RECOMP_CALL(sub_120E80BC); /* 0x120EB2E1: call 0x120e80bc */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EB2E6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120EB2CE; /* 0x120EB2E8: jns 0x120eb2ce */
L_120EB2EA:
    goto L_120EB2EE; /* 0x120EB2EA: jmp 0x120eb2ee */
L_120EB2EC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EB2EC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EB2EE:
    esi = POP32_VAL(esp); /* 0x120EB2EE: pop esi */
    ebp = POP32_VAL(esp); /* 0x120EB2EF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x120EB2F0: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_120EB2F8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EB2F8u);

L_120EB2F8:
    edi = edi; /* 0x120EB2F8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EB2FA: push ebp */
    ebp = esp; /* 0x120EB2FB: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120EB2FD: push esi */
    esi = MEM32(ebp + 0x10); /* 0x120EB2FE: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x120EB301: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EB30C; /* 0x120EB303: jne 0x120eb30c */
L_120EB305:
    eax = 0x8876086Cu; /* 0x120EB305: mov eax, 0x8876086c */
    goto L_120EB34D; /* 0x120EB30A: jmp 0x120eb34d */
L_120EB30C:
    ecx = MEM32(ebp + 0x8); /* 0x120EB30C: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x4); /* 0x120EB30F: mov eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)((eax | esi)); _flag_b = (uint32_t)((eax | esi));
    eax = eax | esi; /* 0x120EB312: or eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120EB31A; /* 0x120EB314: jge 0x120eb31a */
L_120EB316:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x120EB316: neg esi */
    _flag_k = FK_CMP;
    goto L_120EB334; /* 0x120EB318: jmp 0x120eb334 */
L_120EB31A:
    eax = ebp + 0x10; /* 0x120EB31A: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x120EB31D: push eax */
    PUSH32(esp, esi); /* 0x120EB31E: push esi */
    RECOMP_CALL(sub_120EAE0D); /* 0x120EB31F: call 0x120eae0d */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EB324: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EB34D; /* 0x120EB326: js 0x120eb34d */
L_120EB328:
    esi = MEM32(ebp + 0x10); /* 0x120EB328: mov esi, dword ptr [ebp + 0x10] */
    goto L_120EB334; /* 0x120EB32B: jmp 0x120eb334 */
L_120EB32D:
    esi = MEM32(esi + 0x24); /* 0x120EB32D: mov esi, dword ptr [esi + 0x24] */
    /* test esi, esi */ /* 0x120EB330: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EB34B; /* 0x120EB332: je 0x120eb34b */
L_120EB334:
    PUSH32(esp, 0); /* 0x120EB334: push 0 */
    PUSH32(esp, 1); /* 0x120EB336: push 1 */
    eax = ebp + 0x14; /* 0x120EB338: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x120EB33B: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EB33C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x120EB33F: push esi */
    RECOMP_CALL(sub_120E83F0); /* 0x120EB340: call 0x120e83f0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EB345: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120EB32D; /* 0x120EB347: jns 0x120eb32d */
L_120EB349:
    goto L_120EB34D; /* 0x120EB349: jmp 0x120eb34d */
L_120EB34B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EB34B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EB34D:
    esi = POP32_VAL(esp); /* 0x120EB34D: pop esi */
    ebp = POP32_VAL(esp); /* 0x120EB34E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120EB34F: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120EB357(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EB357u);

L_120EB357:
    edi = edi; /* 0x120EB357: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EB359: push ebp */
    ebp = esp; /* 0x120EB35A: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120EB35C: push esi */
    esi = MEM32(ebp + 0x10); /* 0x120EB35D: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x120EB360: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EB36B; /* 0x120EB362: jne 0x120eb36b */
L_120EB364:
    eax = 0x8876086Cu; /* 0x120EB364: mov eax, 0x8876086c */
    goto L_120EB3AC; /* 0x120EB369: jmp 0x120eb3ac */
L_120EB36B:
    ecx = MEM32(ebp + 0x8); /* 0x120EB36B: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x4); /* 0x120EB36E: mov eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)((eax | esi)); _flag_b = (uint32_t)((eax | esi));
    eax = eax | esi; /* 0x120EB371: or eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120EB379; /* 0x120EB373: jge 0x120eb379 */
L_120EB375:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x120EB375: neg esi */
    _flag_k = FK_CMP;
    goto L_120EB393; /* 0x120EB377: jmp 0x120eb393 */
L_120EB379:
    eax = ebp + 0x10; /* 0x120EB379: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x120EB37C: push eax */
    PUSH32(esp, esi); /* 0x120EB37D: push esi */
    RECOMP_CALL(sub_120EAE0D); /* 0x120EB37E: call 0x120eae0d */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EB383: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EB3AC; /* 0x120EB385: js 0x120eb3ac */
L_120EB387:
    esi = MEM32(ebp + 0x10); /* 0x120EB387: mov esi, dword ptr [ebp + 0x10] */
    goto L_120EB393; /* 0x120EB38A: jmp 0x120eb393 */
L_120EB38C:
    esi = MEM32(esi + 0x24); /* 0x120EB38C: mov esi, dword ptr [esi + 0x24] */
    /* test esi, esi */ /* 0x120EB38F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EB3AA; /* 0x120EB391: je 0x120eb3aa */
L_120EB393:
    PUSH32(esp, 0); /* 0x120EB393: push 0 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120EB395: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120EB398: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EB39B: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x120EB39E: push esi */
    RECOMP_CALL(sub_120E83F0); /* 0x120EB39F: call 0x120e83f0 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EB3A4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120EB38C; /* 0x120EB3A6: jns 0x120eb38c */
L_120EB3A8:
    goto L_120EB3AC; /* 0x120EB3A8: jmp 0x120eb3ac */
L_120EB3AA:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EB3AA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EB3AC:
    esi = POP32_VAL(esp); /* 0x120EB3AC: pop esi */
    ebp = POP32_VAL(esp); /* 0x120EB3AD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x120EB3AE: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_120EB3B6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EB3B6u);

L_120EB3B6:
    edi = edi; /* 0x120EB3B6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EB3B8: push ebp */
    ebp = esp; /* 0x120EB3B9: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120EB3BB: push esi */
    esi = MEM32(ebp + 0x10); /* 0x120EB3BC: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x120EB3BF: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EB3CA; /* 0x120EB3C1: jne 0x120eb3ca */
L_120EB3C3:
    eax = 0x8876086Cu; /* 0x120EB3C3: mov eax, 0x8876086c */
    goto L_120EB40B; /* 0x120EB3C8: jmp 0x120eb40b */
L_120EB3CA:
    ecx = MEM32(ebp + 0x8); /* 0x120EB3CA: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x4); /* 0x120EB3CD: mov eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)((eax | esi)); _flag_b = (uint32_t)((eax | esi));
    eax = eax | esi; /* 0x120EB3D0: or eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120EB3D8; /* 0x120EB3D2: jge 0x120eb3d8 */
L_120EB3D4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x120EB3D4: neg esi */
    _flag_k = FK_CMP;
    goto L_120EB3F2; /* 0x120EB3D6: jmp 0x120eb3f2 */
L_120EB3D8:
    eax = ebp + 0x10; /* 0x120EB3D8: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x120EB3DB: push eax */
    PUSH32(esp, esi); /* 0x120EB3DC: push esi */
    RECOMP_CALL(sub_120EAE0D); /* 0x120EB3DD: call 0x120eae0d */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EB3E2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EB40B; /* 0x120EB3E4: js 0x120eb40b */
L_120EB3E6:
    esi = MEM32(ebp + 0x10); /* 0x120EB3E6: mov esi, dword ptr [ebp + 0x10] */
    goto L_120EB3F2; /* 0x120EB3E9: jmp 0x120eb3f2 */
L_120EB3EB:
    esi = MEM32(esi + 0x24); /* 0x120EB3EB: mov esi, dword ptr [esi + 0x24] */
    /* test esi, esi */ /* 0x120EB3EE: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EB409; /* 0x120EB3F0: je 0x120eb409 */
L_120EB3F2:
    PUSH32(esp, 0); /* 0x120EB3F2: push 0 */
    PUSH32(esp, 1); /* 0x120EB3F4: push 1 */
    eax = ebp + 0x14; /* 0x120EB3F6: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x120EB3F9: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EB3FA: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x120EB3FD: push esi */
    RECOMP_CALL(sub_120E874C); /* 0x120EB3FE: call 0x120e874c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EB403: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120EB3EB; /* 0x120EB405: jns 0x120eb3eb */
L_120EB407:
    goto L_120EB40B; /* 0x120EB407: jmp 0x120eb40b */
L_120EB409:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EB409: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EB40B:
    esi = POP32_VAL(esp); /* 0x120EB40B: pop esi */
    ebp = POP32_VAL(esp); /* 0x120EB40C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120EB40D: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120EB415(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EB415u);

L_120EB415:
    edi = edi; /* 0x120EB415: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EB417: push ebp */
    ebp = esp; /* 0x120EB418: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120EB41A: push esi */
    esi = MEM32(ebp + 0x10); /* 0x120EB41B: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x120EB41E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EB429; /* 0x120EB420: jne 0x120eb429 */
L_120EB422:
    eax = 0x8876086Cu; /* 0x120EB422: mov eax, 0x8876086c */
    goto L_120EB46A; /* 0x120EB427: jmp 0x120eb46a */
L_120EB429:
    ecx = MEM32(ebp + 0x8); /* 0x120EB429: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x4); /* 0x120EB42C: mov eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)((eax | esi)); _flag_b = (uint32_t)((eax | esi));
    eax = eax | esi; /* 0x120EB42F: or eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120EB437; /* 0x120EB431: jge 0x120eb437 */
L_120EB433:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x120EB433: neg esi */
    _flag_k = FK_CMP;
    goto L_120EB451; /* 0x120EB435: jmp 0x120eb451 */
L_120EB437:
    eax = ebp + 0x10; /* 0x120EB437: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x120EB43A: push eax */
    PUSH32(esp, esi); /* 0x120EB43B: push esi */
    RECOMP_CALL(sub_120EAE0D); /* 0x120EB43C: call 0x120eae0d */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EB441: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EB46A; /* 0x120EB443: js 0x120eb46a */
L_120EB445:
    esi = MEM32(ebp + 0x10); /* 0x120EB445: mov esi, dword ptr [ebp + 0x10] */
    goto L_120EB451; /* 0x120EB448: jmp 0x120eb451 */
L_120EB44A:
    esi = MEM32(esi + 0x24); /* 0x120EB44A: mov esi, dword ptr [esi + 0x24] */
    /* test esi, esi */ /* 0x120EB44D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EB468; /* 0x120EB44F: je 0x120eb468 */
L_120EB451:
    PUSH32(esp, 0); /* 0x120EB451: push 0 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120EB453: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120EB456: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EB459: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x120EB45C: push esi */
    RECOMP_CALL(sub_120E874C); /* 0x120EB45D: call 0x120e874c */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EB462: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120EB44A; /* 0x120EB464: jns 0x120eb44a */
L_120EB466:
    goto L_120EB46A; /* 0x120EB466: jmp 0x120eb46a */
L_120EB468:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EB468: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EB46A:
    esi = POP32_VAL(esp); /* 0x120EB46A: pop esi */
    ebp = POP32_VAL(esp); /* 0x120EB46B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x120EB46C: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_120EB474(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EB474u);

L_120EB474:
    edi = edi; /* 0x120EB474: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EB476: push ebp */
    ebp = esp; /* 0x120EB477: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120EB479: push esi */
    esi = MEM32(ebp + 0x10); /* 0x120EB47A: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x120EB47D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EB488; /* 0x120EB47F: jne 0x120eb488 */
L_120EB481:
    eax = 0x8876086Cu; /* 0x120EB481: mov eax, 0x8876086c */
    goto L_120EB4C8; /* 0x120EB486: jmp 0x120eb4c8 */
L_120EB488:
    ecx = MEM32(ebp + 0x8); /* 0x120EB488: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x4); /* 0x120EB48B: mov eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)((eax | esi)); _flag_b = (uint32_t)((eax | esi));
    eax = eax | esi; /* 0x120EB48E: or eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120EB496; /* 0x120EB490: jge 0x120eb496 */
L_120EB492:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x120EB492: neg esi */
    _flag_k = FK_CMP;
    goto L_120EB4B0; /* 0x120EB494: jmp 0x120eb4b0 */
L_120EB496:
    eax = ebp + 0x10; /* 0x120EB496: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x120EB499: push eax */
    PUSH32(esp, esi); /* 0x120EB49A: push esi */
    RECOMP_CALL(sub_120EAE0D); /* 0x120EB49B: call 0x120eae0d */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EB4A0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EB4C8; /* 0x120EB4A2: js 0x120eb4c8 */
L_120EB4A4:
    esi = MEM32(ebp + 0x10); /* 0x120EB4A4: mov esi, dword ptr [ebp + 0x10] */
    goto L_120EB4B0; /* 0x120EB4A7: jmp 0x120eb4b0 */
L_120EB4A9:
    esi = MEM32(esi + 0x24); /* 0x120EB4A9: mov esi, dword ptr [esi + 0x24] */
    /* test esi, esi */ /* 0x120EB4AC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EB4C6; /* 0x120EB4AE: je 0x120eb4c6 */
L_120EB4B0:
    PUSH32(esp, 0); /* 0x120EB4B0: push 0 */
    PUSH32(esp, 1); /* 0x120EB4B2: push 1 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120EB4B4: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EB4B7: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x120EB4BA: push esi */
    RECOMP_CALL(sub_120E8AD9); /* 0x120EB4BB: call 0x120e8ad9 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EB4C0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120EB4A9; /* 0x120EB4C2: jns 0x120eb4a9 */
L_120EB4C4:
    goto L_120EB4C8; /* 0x120EB4C4: jmp 0x120eb4c8 */
L_120EB4C6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EB4C6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EB4C8:
    esi = POP32_VAL(esp); /* 0x120EB4C8: pop esi */
    ebp = POP32_VAL(esp); /* 0x120EB4C9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120EB4CA: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120EB4D2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EB4D2u);

L_120EB4D2:
    edi = edi; /* 0x120EB4D2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EB4D4: push ebp */
    ebp = esp; /* 0x120EB4D5: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120EB4D7: push esi */
    esi = MEM32(ebp + 0x10); /* 0x120EB4D8: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x120EB4DB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EB4E6; /* 0x120EB4DD: jne 0x120eb4e6 */
L_120EB4DF:
    eax = 0x8876086Cu; /* 0x120EB4DF: mov eax, 0x8876086c */
    goto L_120EB527; /* 0x120EB4E4: jmp 0x120eb527 */
L_120EB4E6:
    ecx = MEM32(ebp + 0x8); /* 0x120EB4E6: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x4); /* 0x120EB4E9: mov eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)((eax | esi)); _flag_b = (uint32_t)((eax | esi));
    eax = eax | esi; /* 0x120EB4EC: or eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120EB4F4; /* 0x120EB4EE: jge 0x120eb4f4 */
L_120EB4F0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x120EB4F0: neg esi */
    _flag_k = FK_CMP;
    goto L_120EB50E; /* 0x120EB4F2: jmp 0x120eb50e */
L_120EB4F4:
    eax = ebp + 0x10; /* 0x120EB4F4: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x120EB4F7: push eax */
    PUSH32(esp, esi); /* 0x120EB4F8: push esi */
    RECOMP_CALL(sub_120EAE0D); /* 0x120EB4F9: call 0x120eae0d */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EB4FE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EB527; /* 0x120EB500: js 0x120eb527 */
L_120EB502:
    esi = MEM32(ebp + 0x10); /* 0x120EB502: mov esi, dword ptr [ebp + 0x10] */
    goto L_120EB50E; /* 0x120EB505: jmp 0x120eb50e */
L_120EB507:
    esi = MEM32(esi + 0x24); /* 0x120EB507: mov esi, dword ptr [esi + 0x24] */
    /* test esi, esi */ /* 0x120EB50A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EB525; /* 0x120EB50C: je 0x120eb525 */
L_120EB50E:
    PUSH32(esp, 0); /* 0x120EB50E: push 0 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120EB510: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120EB513: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EB516: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x120EB519: push esi */
    RECOMP_CALL(sub_120E8AD9); /* 0x120EB51A: call 0x120e8ad9 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EB51F: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120EB507; /* 0x120EB521: jns 0x120eb507 */
L_120EB523:
    goto L_120EB527; /* 0x120EB523: jmp 0x120eb527 */
L_120EB525:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EB525: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EB527:
    esi = POP32_VAL(esp); /* 0x120EB527: pop esi */
    ebp = POP32_VAL(esp); /* 0x120EB528: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x120EB529: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_120EB531(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EB531u);

L_120EB531:
    edi = edi; /* 0x120EB531: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EB533: push ebp */
    ebp = esp; /* 0x120EB534: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120EB536: push esi */
    esi = MEM32(ebp + 0x10); /* 0x120EB537: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x120EB53A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EB545; /* 0x120EB53C: jne 0x120eb545 */
L_120EB53E:
    eax = 0x8876086Cu; /* 0x120EB53E: mov eax, 0x8876086c */
    goto L_120EB585; /* 0x120EB543: jmp 0x120eb585 */
L_120EB545:
    ecx = MEM32(ebp + 0x8); /* 0x120EB545: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x4); /* 0x120EB548: mov eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)((eax | esi)); _flag_b = (uint32_t)((eax | esi));
    eax = eax | esi; /* 0x120EB54B: or eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120EB553; /* 0x120EB54D: jge 0x120eb553 */
L_120EB54F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x120EB54F: neg esi */
    _flag_k = FK_CMP;
    goto L_120EB56D; /* 0x120EB551: jmp 0x120eb56d */
L_120EB553:
    eax = ebp + 0x10; /* 0x120EB553: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x120EB556: push eax */
    PUSH32(esp, esi); /* 0x120EB557: push esi */
    RECOMP_CALL(sub_120EAE0D); /* 0x120EB558: call 0x120eae0d */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EB55D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EB585; /* 0x120EB55F: js 0x120eb585 */
L_120EB561:
    esi = MEM32(ebp + 0x10); /* 0x120EB561: mov esi, dword ptr [ebp + 0x10] */
    goto L_120EB56D; /* 0x120EB564: jmp 0x120eb56d */
L_120EB566:
    esi = MEM32(esi + 0x24); /* 0x120EB566: mov esi, dword ptr [esi + 0x24] */
    /* test esi, esi */ /* 0x120EB569: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EB583; /* 0x120EB56B: je 0x120eb583 */
L_120EB56D:
    PUSH32(esp, 0); /* 0x120EB56D: push 0 */
    PUSH32(esp, 1); /* 0x120EB56F: push 1 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120EB571: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EB574: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x120EB577: push esi */
    RECOMP_CALL(sub_120E8F26); /* 0x120EB578: call 0x120e8f26 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EB57D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120EB566; /* 0x120EB57F: jns 0x120eb566 */
L_120EB581:
    goto L_120EB585; /* 0x120EB581: jmp 0x120eb585 */
L_120EB583:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EB583: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EB585:
    esi = POP32_VAL(esp); /* 0x120EB585: pop esi */
    ebp = POP32_VAL(esp); /* 0x120EB586: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120EB587: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120EB58F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EB58Fu);

L_120EB58F:
    edi = edi; /* 0x120EB58F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EB591: push ebp */
    ebp = esp; /* 0x120EB592: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120EB594: push esi */
    esi = MEM32(ebp + 0x10); /* 0x120EB595: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x120EB598: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EB5A3; /* 0x120EB59A: jne 0x120eb5a3 */
L_120EB59C:
    eax = 0x8876086Cu; /* 0x120EB59C: mov eax, 0x8876086c */
    goto L_120EB5E4; /* 0x120EB5A1: jmp 0x120eb5e4 */
L_120EB5A3:
    ecx = MEM32(ebp + 0x8); /* 0x120EB5A3: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x4); /* 0x120EB5A6: mov eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)((eax | esi)); _flag_b = (uint32_t)((eax | esi));
    eax = eax | esi; /* 0x120EB5A9: or eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120EB5B1; /* 0x120EB5AB: jge 0x120eb5b1 */
L_120EB5AD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x120EB5AD: neg esi */
    _flag_k = FK_CMP;
    goto L_120EB5CB; /* 0x120EB5AF: jmp 0x120eb5cb */
L_120EB5B1:
    eax = ebp + 0x10; /* 0x120EB5B1: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x120EB5B4: push eax */
    PUSH32(esp, esi); /* 0x120EB5B5: push esi */
    RECOMP_CALL(sub_120EAE0D); /* 0x120EB5B6: call 0x120eae0d */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EB5BB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EB5E4; /* 0x120EB5BD: js 0x120eb5e4 */
L_120EB5BF:
    esi = MEM32(ebp + 0x10); /* 0x120EB5BF: mov esi, dword ptr [ebp + 0x10] */
    goto L_120EB5CB; /* 0x120EB5C2: jmp 0x120eb5cb */
L_120EB5C4:
    esi = MEM32(esi + 0x24); /* 0x120EB5C4: mov esi, dword ptr [esi + 0x24] */
    /* test esi, esi */ /* 0x120EB5C7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EB5E2; /* 0x120EB5C9: je 0x120eb5e2 */
L_120EB5CB:
    PUSH32(esp, 0); /* 0x120EB5CB: push 0 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120EB5CD: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120EB5D0: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EB5D3: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x120EB5D6: push esi */
    RECOMP_CALL(sub_120E8F26); /* 0x120EB5D7: call 0x120e8f26 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EB5DC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120EB5C4; /* 0x120EB5DE: jns 0x120eb5c4 */
L_120EB5E0:
    goto L_120EB5E4; /* 0x120EB5E0: jmp 0x120eb5e4 */
L_120EB5E2:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EB5E2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EB5E4:
    esi = POP32_VAL(esp); /* 0x120EB5E4: pop esi */
    ebp = POP32_VAL(esp); /* 0x120EB5E5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x120EB5E6: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_120EB5EE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EB5EEu);

L_120EB5EE:
    edi = edi; /* 0x120EB5EE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EB5F0: push ebp */
    ebp = esp; /* 0x120EB5F1: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120EB5F3: push esi */
    esi = MEM32(ebp + 0x10); /* 0x120EB5F4: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x120EB5F7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EB602; /* 0x120EB5F9: jne 0x120eb602 */
L_120EB5FB:
    eax = 0x8876086Cu; /* 0x120EB5FB: mov eax, 0x8876086c */
    goto L_120EB643; /* 0x120EB600: jmp 0x120eb643 */
L_120EB602:
    ecx = MEM32(ebp + 0x8); /* 0x120EB602: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x4); /* 0x120EB605: mov eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)((eax | esi)); _flag_b = (uint32_t)((eax | esi));
    eax = eax | esi; /* 0x120EB608: or eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120EB610; /* 0x120EB60A: jge 0x120eb610 */
L_120EB60C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x120EB60C: neg esi */
    _flag_k = FK_CMP;
    goto L_120EB62A; /* 0x120EB60E: jmp 0x120eb62a */
L_120EB610:
    eax = ebp + 0x10; /* 0x120EB610: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x120EB613: push eax */
    PUSH32(esp, esi); /* 0x120EB614: push esi */
    RECOMP_CALL(sub_120EAE0D); /* 0x120EB615: call 0x120eae0d */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EB61A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EB643; /* 0x120EB61C: js 0x120eb643 */
L_120EB61E:
    esi = MEM32(ebp + 0x10); /* 0x120EB61E: mov esi, dword ptr [ebp + 0x10] */
    goto L_120EB62A; /* 0x120EB621: jmp 0x120eb62a */
L_120EB623:
    esi = MEM32(esi + 0x24); /* 0x120EB623: mov esi, dword ptr [esi + 0x24] */
    /* test esi, esi */ /* 0x120EB626: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EB641; /* 0x120EB628: je 0x120eb641 */
L_120EB62A:
    PUSH32(esp, 0); /* 0x120EB62A: push 0 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120EB62C: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120EB62F: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EB632: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x120EB635: push esi */
    RECOMP_CALL(sub_120E945B); /* 0x120EB636: call 0x120e945b */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EB63B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120EB623; /* 0x120EB63D: jns 0x120eb623 */
L_120EB63F:
    goto L_120EB643; /* 0x120EB63F: jmp 0x120eb643 */
L_120EB641:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EB641: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EB643:
    esi = POP32_VAL(esp); /* 0x120EB643: pop esi */
    ebp = POP32_VAL(esp); /* 0x120EB644: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x120EB645: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_120EB64D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EB64Du);

L_120EB64D:
    edi = edi; /* 0x120EB64D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EB64F: push ebp */
    ebp = esp; /* 0x120EB650: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120EB652: push esi */
    esi = MEM32(ebp + 0x10); /* 0x120EB653: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x120EB656: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EB661; /* 0x120EB658: jne 0x120eb661 */
L_120EB65A:
    eax = 0x8876086Cu; /* 0x120EB65A: mov eax, 0x8876086c */
    goto L_120EB6A1; /* 0x120EB65F: jmp 0x120eb6a1 */
L_120EB661:
    ecx = MEM32(ebp + 0x8); /* 0x120EB661: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x4); /* 0x120EB664: mov eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)((eax | esi)); _flag_b = (uint32_t)((eax | esi));
    eax = eax | esi; /* 0x120EB667: or eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120EB66F; /* 0x120EB669: jge 0x120eb66f */
L_120EB66B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x120EB66B: neg esi */
    _flag_k = FK_CMP;
    goto L_120EB689; /* 0x120EB66D: jmp 0x120eb689 */
L_120EB66F:
    eax = ebp + 0x10; /* 0x120EB66F: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x120EB672: push eax */
    PUSH32(esp, esi); /* 0x120EB673: push esi */
    RECOMP_CALL(sub_120EAE0D); /* 0x120EB674: call 0x120eae0d */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EB679: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EB6A1; /* 0x120EB67B: js 0x120eb6a1 */
L_120EB67D:
    esi = MEM32(ebp + 0x10); /* 0x120EB67D: mov esi, dword ptr [ebp + 0x10] */
    goto L_120EB689; /* 0x120EB680: jmp 0x120eb689 */
L_120EB682:
    esi = MEM32(esi + 0x24); /* 0x120EB682: mov esi, dword ptr [esi + 0x24] */
    /* test esi, esi */ /* 0x120EB685: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EB69F; /* 0x120EB687: je 0x120eb69f */
L_120EB689:
    PUSH32(esp, 0); /* 0x120EB689: push 0 */
    PUSH32(esp, 1); /* 0x120EB68B: push 1 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120EB68D: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EB690: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x120EB693: push esi */
    RECOMP_CALL(sub_120E9930); /* 0x120EB694: call 0x120e9930 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EB699: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120EB682; /* 0x120EB69B: jns 0x120eb682 */
L_120EB69D:
    goto L_120EB6A1; /* 0x120EB69D: jmp 0x120eb6a1 */
L_120EB69F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EB69F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EB6A1:
    esi = POP32_VAL(esp); /* 0x120EB6A1: pop esi */
    ebp = POP32_VAL(esp); /* 0x120EB6A2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120EB6A3: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120EB6AB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EB6ABu);

L_120EB6AB:
    edi = edi; /* 0x120EB6AB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EB6AD: push ebp */
    ebp = esp; /* 0x120EB6AE: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120EB6B0: push esi */
    esi = MEM32(ebp + 0x10); /* 0x120EB6B1: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x120EB6B4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EB6BF; /* 0x120EB6B6: jne 0x120eb6bf */
L_120EB6B8:
    eax = 0x8876086Cu; /* 0x120EB6B8: mov eax, 0x8876086c */
    goto L_120EB700; /* 0x120EB6BD: jmp 0x120eb700 */
L_120EB6BF:
    ecx = MEM32(ebp + 0x8); /* 0x120EB6BF: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x4); /* 0x120EB6C2: mov eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)((eax | esi)); _flag_b = (uint32_t)((eax | esi));
    eax = eax | esi; /* 0x120EB6C5: or eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120EB6CD; /* 0x120EB6C7: jge 0x120eb6cd */
L_120EB6C9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x120EB6C9: neg esi */
    _flag_k = FK_CMP;
    goto L_120EB6E7; /* 0x120EB6CB: jmp 0x120eb6e7 */
L_120EB6CD:
    eax = ebp + 0x10; /* 0x120EB6CD: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x120EB6D0: push eax */
    PUSH32(esp, esi); /* 0x120EB6D1: push esi */
    RECOMP_CALL(sub_120EAE0D); /* 0x120EB6D2: call 0x120eae0d */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EB6D7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EB700; /* 0x120EB6D9: js 0x120eb700 */
L_120EB6DB:
    esi = MEM32(ebp + 0x10); /* 0x120EB6DB: mov esi, dword ptr [ebp + 0x10] */
    goto L_120EB6E7; /* 0x120EB6DE: jmp 0x120eb6e7 */
L_120EB6E0:
    esi = MEM32(esi + 0x24); /* 0x120EB6E0: mov esi, dword ptr [esi + 0x24] */
    /* test esi, esi */ /* 0x120EB6E3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EB6FE; /* 0x120EB6E5: je 0x120eb6fe */
L_120EB6E7:
    PUSH32(esp, 0); /* 0x120EB6E7: push 0 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120EB6E9: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120EB6EC: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EB6EF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x120EB6F2: push esi */
    RECOMP_CALL(sub_120E9930); /* 0x120EB6F3: call 0x120e9930 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EB6F8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120EB6E0; /* 0x120EB6FA: jns 0x120eb6e0 */
L_120EB6FC:
    goto L_120EB700; /* 0x120EB6FC: jmp 0x120eb700 */
L_120EB6FE:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EB6FE: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EB700:
    esi = POP32_VAL(esp); /* 0x120EB700: pop esi */
    ebp = POP32_VAL(esp); /* 0x120EB701: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x120EB702: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_120EB70A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EB70Au);

L_120EB70A:
    edi = edi; /* 0x120EB70A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EB70C: push ebp */
    ebp = esp; /* 0x120EB70D: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120EB70F: push esi */
    esi = MEM32(ebp + 0x10); /* 0x120EB710: mov esi, dword ptr [ebp + 0x10] */
    /* test esi, esi */ /* 0x120EB713: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EB71E; /* 0x120EB715: jne 0x120eb71e */
L_120EB717:
    eax = 0x8876086Cu; /* 0x120EB717: mov eax, 0x8876086c */
    goto L_120EB75F; /* 0x120EB71C: jmp 0x120eb75f */
L_120EB71E:
    ecx = MEM32(ebp + 0x8); /* 0x120EB71E: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x4); /* 0x120EB721: mov eax, dword ptr [ecx + 4] */
    _flag_a = (uint32_t)((eax | esi)); _flag_b = (uint32_t)((eax | esi));
    eax = eax | esi; /* 0x120EB724: or eax, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120EB72C; /* 0x120EB726: jge 0x120eb72c */
L_120EB728:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x120EB728: neg esi */
    _flag_k = FK_CMP;
    goto L_120EB746; /* 0x120EB72A: jmp 0x120eb746 */
L_120EB72C:
    eax = ebp + 0x10; /* 0x120EB72C: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x120EB72F: push eax */
    PUSH32(esp, esi); /* 0x120EB730: push esi */
    RECOMP_CALL(sub_120EAE0D); /* 0x120EB731: call 0x120eae0d */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EB736: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EB75F; /* 0x120EB738: js 0x120eb75f */
L_120EB73A:
    esi = MEM32(ebp + 0x10); /* 0x120EB73A: mov esi, dword ptr [ebp + 0x10] */
    goto L_120EB746; /* 0x120EB73D: jmp 0x120eb746 */
L_120EB73F:
    esi = MEM32(esi + 0x24); /* 0x120EB73F: mov esi, dword ptr [esi + 0x24] */
    /* test esi, esi */ /* 0x120EB742: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EB75D; /* 0x120EB744: je 0x120eb75d */
L_120EB746:
    PUSH32(esp, 0); /* 0x120EB746: push 0 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120EB748: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120EB74B: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EB74E: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x120EB751: push esi */
    RECOMP_CALL(sub_120E9F27); /* 0x120EB752: call 0x120e9f27 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EB757: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120EB73F; /* 0x120EB759: jns 0x120eb73f */
L_120EB75B:
    goto L_120EB75F; /* 0x120EB75B: jmp 0x120eb75f */
L_120EB75D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EB75D: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EB75F:
    esi = POP32_VAL(esp); /* 0x120EB75F: pop esi */
    ebp = POP32_VAL(esp); /* 0x120EB760: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x120EB761: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_120EB769(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EB769u);

L_120EB769:
    edi = edi; /* 0x120EB769: mov edi, edi */
    PUSH32(esp, esi); /* 0x120EB76B: push esi */
    esi = ecx; /* 0x120EB76C: mov esi, ecx */
    ecx = MEM32(esi + 0x8); /* 0x120EB76E: mov ecx, dword ptr [esi + 8] */
    MEM32(esi) = 0x12008A58u; /* 0x120EB771: mov dword ptr [esi], 0x12008a58 */
    /* test ecx, ecx */ /* 0x120EB777: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EB785; /* 0x120EB779: je 0x120eb785 */
L_120EB77B:
    eax = MEM32(ecx); /* 0x120EB77B: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120EB77D: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120EB77E: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0; /* 0x120EB781: and dword ptr [esi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EB785:
    ecx = MEM32(esi + 0xC); /* 0x120EB785: mov ecx, dword ptr [esi + 0xc] */
    /* test ecx, ecx */ /* 0x120EB788: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EB796; /* 0x120EB78A: je 0x120eb796 */
L_120EB78C:
    eax = MEM32(ecx); /* 0x120EB78C: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120EB78E: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120EB78F: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0; /* 0x120EB792: and dword ptr [esi + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EB796:
    ecx = MEM32(esi + 0x10); /* 0x120EB796: mov ecx, dword ptr [esi + 0x10] */
    /* test ecx, ecx */ /* 0x120EB799: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EB7A7; /* 0x120EB79B: je 0x120eb7a7 */
L_120EB79D:
    eax = MEM32(ecx); /* 0x120EB79D: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120EB79F: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120EB7A0: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x10) = MEM32(esi + 0x10) & 0; /* 0x120EB7A3: and dword ptr [esi + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EB7A7:
    esi = POP32_VAL(esp); /* 0x120EB7A7: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x120EB7A8: ret  */
    RECOMP_REGS_OUT();
}

void sub_120EB7AE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EB7AEu);

L_120EB7AE:
    edi = edi; /* 0x120EB7AE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EB7B0: push ebp */
    ebp = esp; /* 0x120EB7B1: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x120EB7B3: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x120EB7B6: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EB7C1; /* 0x120EB7B8: jne 0x120eb7c1 */
L_120EB7BA:
    eax = 0x8876086Cu; /* 0x120EB7BA: mov eax, 0x8876086c */
    goto L_120EB7D4; /* 0x120EB7BF: jmp 0x120eb7d4 */
L_120EB7C1:
    ecx = MEM32(ebp + 0x8); /* 0x120EB7C1: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0xC); /* 0x120EB7C4: mov eax, dword ptr [ecx + 0xc] */
    MEM32(edx) = eax; /* 0x120EB7C7: mov dword ptr [edx], eax */
    eax = MEM32(ecx + 0xC); /* 0x120EB7C9: mov eax, dword ptr [ecx + 0xc] */
    ecx = MEM32(eax); /* 0x120EB7CC: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120EB7CE: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x120EB7CF: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EB7D2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EB7D4:
    ebp = POP32_VAL(esp); /* 0x120EB7D4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120EB7D5: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120EB7DD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EB7DDu);

L_120EB7DD:
    edi = edi; /* 0x120EB7DD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EB7DF: push ebp */
    ebp = esp; /* 0x120EB7E0: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x120EB7E2: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x10); /* 0x120EB7E5: mov eax, dword ptr [eax + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EB7E8: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x120EB7EB: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120EB7ED: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x14)); /* 0x120EB7EE: call dword ptr [ecx + 0x14] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120EB7F1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120EB7F2: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120EB7FA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EB7FAu);

L_120EB7FA:
    edi = edi; /* 0x120EB7FA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EB7FC: push ebp */
    ebp = esp; /* 0x120EB7FD: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120EB7FF: push dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0x8); /* 0x120EB802: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120EB805: push dword ptr [ebp + 0x10] */
    eax = MEM32(eax + 0x10); /* 0x120EB808: mov eax, dword ptr [eax + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EB80B: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x120EB80E: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120EB810: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x18)); /* 0x120EB811: call dword ptr [ecx + 0x18] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120EB814: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120EB815: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120EB81D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EB81Du);

L_120EB81D:
    edi = edi; /* 0x120EB81D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EB81F: push ebp */
    ebp = esp; /* 0x120EB820: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120EB822: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x120EB825: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x10); /* 0x120EB828: mov eax, dword ptr [eax + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EB82B: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x120EB82E: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120EB830: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x20)); /* 0x120EB831: call dword ptr [ecx + 0x20] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120EB834: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120EB835: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120EB83D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EB83Du);

L_120EB83D:
    edi = edi; /* 0x120EB83D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EB83F: push ebp */
    ebp = esp; /* 0x120EB840: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120EB842: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x120EB845: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x10); /* 0x120EB848: mov eax, dword ptr [eax + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EB84B: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x120EB84E: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120EB850: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x24)); /* 0x120EB851: call dword ptr [ecx + 0x24] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120EB854: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120EB855: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120EB85D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EB85Du);

L_120EB85D:
    edi = edi; /* 0x120EB85D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EB85F: push ebp */
    ebp = esp; /* 0x120EB860: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120EB862: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x120EB865: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x10); /* 0x120EB868: mov eax, dword ptr [eax + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EB86B: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x120EB86E: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120EB870: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x28)); /* 0x120EB871: call dword ptr [ecx + 0x28] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120EB874: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120EB875: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120EB87D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EB87Du);

L_120EB87D:
    edi = edi; /* 0x120EB87D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EB87F: push ebp */
    ebp = esp; /* 0x120EB880: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x120EB882: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x10); /* 0x120EB885: mov ecx, dword ptr [eax + 0x10] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x120EB888: push dword ptr [eax + 0xc] */
    edx = MEM32(ecx); /* 0x120EB88B: mov edx, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120EB88D: push ecx */
    RECOMP_ICALL(MEM32(edx + 0x2C)); /* 0x120EB88E: call dword ptr [edx + 0x2c] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120EB891: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x120EB892: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_120EB89A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EB89Au);

L_120EB89A:
    edi = edi; /* 0x120EB89A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EB89C: push ebp */
    ebp = esp; /* 0x120EB89D: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120EB89F: push dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0x8); /* 0x120EB8A2: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120EB8A5: push dword ptr [ebp + 0x10] */
    ecx = MEM32(eax + 0x10); /* 0x120EB8A8: mov ecx, dword ptr [eax + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EB8AB: push dword ptr [ebp + 0xc] */
    edx = MEM32(ecx); /* 0x120EB8AE: mov edx, dword ptr [ecx] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x120EB8B0: push dword ptr [eax + 0xc] */
    PUSH32(esp, ecx); /* 0x120EB8B3: push ecx */
    RECOMP_ICALL(MEM32(edx + 0x30)); /* 0x120EB8B4: call dword ptr [edx + 0x30] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120EB8B7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120EB8B8: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120EB8C0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EB8C0u);

L_120EB8C0:
    edi = edi; /* 0x120EB8C0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EB8C2: push ebp */
    ebp = esp; /* 0x120EB8C3: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120EB8C5: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x120EB8C8: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EB8CB: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax + 0x10); /* 0x120EB8CE: mov ecx, dword ptr [eax + 0x10] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x120EB8D1: push dword ptr [eax + 0xc] */
    edx = MEM32(ecx); /* 0x120EB8D4: mov edx, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120EB8D6: push ecx */
    RECOMP_ICALL(MEM32(edx + 0x34)); /* 0x120EB8D7: call dword ptr [edx + 0x34] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120EB8DA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120EB8DB: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120EB8E3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EB8E3u);

L_120EB8E3:
    edi = edi; /* 0x120EB8E3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EB8E5: push ebp */
    ebp = esp; /* 0x120EB8E6: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120EB8E8: push dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0x8); /* 0x120EB8EB: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120EB8EE: push dword ptr [ebp + 0x10] */
    ecx = MEM32(eax + 0x10); /* 0x120EB8F1: mov ecx, dword ptr [eax + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EB8F4: push dword ptr [ebp + 0xc] */
    edx = MEM32(ecx); /* 0x120EB8F7: mov edx, dword ptr [ecx] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x120EB8F9: push dword ptr [eax + 0xc] */
    PUSH32(esp, ecx); /* 0x120EB8FC: push ecx */
    RECOMP_ICALL(MEM32(edx + 0x38)); /* 0x120EB8FD: call dword ptr [edx + 0x38] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120EB900: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120EB901: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120EB909(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EB909u);

L_120EB909:
    edi = edi; /* 0x120EB909: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EB90B: push ebp */
    ebp = esp; /* 0x120EB90C: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120EB90E: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x120EB911: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EB914: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax + 0x10); /* 0x120EB917: mov ecx, dword ptr [eax + 0x10] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x120EB91A: push dword ptr [eax + 0xc] */
    edx = MEM32(ecx); /* 0x120EB91D: mov edx, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120EB91F: push ecx */
    RECOMP_ICALL(MEM32(edx + 0x3C)); /* 0x120EB920: call dword ptr [edx + 0x3c] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120EB923: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120EB924: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120EB92C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EB92Cu);

L_120EB92C:
    edi = edi; /* 0x120EB92C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EB92E: push ebp */
    ebp = esp; /* 0x120EB92F: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120EB931: push dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0x8); /* 0x120EB934: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120EB937: push dword ptr [ebp + 0x10] */
    ecx = MEM32(eax + 0x10); /* 0x120EB93A: mov ecx, dword ptr [eax + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EB93D: push dword ptr [ebp + 0xc] */
    edx = MEM32(ecx); /* 0x120EB940: mov edx, dword ptr [ecx] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x120EB942: push dword ptr [eax + 0xc] */
    PUSH32(esp, ecx); /* 0x120EB945: push ecx */
    RECOMP_ICALL(MEM32(edx + 0x40)); /* 0x120EB946: call dword ptr [edx + 0x40] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120EB949: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120EB94A: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120EB952(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EB952u);

L_120EB952:
    edi = edi; /* 0x120EB952: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EB954: push ebp */
    ebp = esp; /* 0x120EB955: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x120EB957: mov eax, dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x10)); /* 0x120EB95A: fld dword ptr [ebp + 0x10] */
    ecx = MEM32(eax + 0x10); /* 0x120EB95D: mov ecx, dword ptr [eax + 0x10] */
    edx = MEM32(ecx); /* 0x120EB960: mov edx, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120EB962: push ecx */
    { float _v = (float)fp_pop(); *(float*)ADDR(esp) = _v; } /* 0x120EB963: fstp dword ptr [esp] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EB966: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x120EB969: push dword ptr [eax + 0xc] */
    PUSH32(esp, ecx); /* 0x120EB96C: push ecx */
    RECOMP_ICALL(MEM32(edx + 0x44)); /* 0x120EB96D: call dword ptr [edx + 0x44] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120EB970: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120EB971: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120EB979(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EB979u);

L_120EB979:
    edi = edi; /* 0x120EB979: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EB97B: push ebp */
    ebp = esp; /* 0x120EB97C: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120EB97E: push dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0x8); /* 0x120EB981: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120EB984: push dword ptr [ebp + 0x10] */
    ecx = MEM32(eax + 0x10); /* 0x120EB987: mov ecx, dword ptr [eax + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EB98A: push dword ptr [ebp + 0xc] */
    edx = MEM32(ecx); /* 0x120EB98D: mov edx, dword ptr [ecx] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x120EB98F: push dword ptr [eax + 0xc] */
    PUSH32(esp, ecx); /* 0x120EB992: push ecx */
    RECOMP_ICALL(MEM32(edx + 0x48)); /* 0x120EB993: call dword ptr [edx + 0x48] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120EB996: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120EB997: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120EB99F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EB99Fu);

L_120EB99F:
    edi = edi; /* 0x120EB99F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EB9A1: push ebp */
    ebp = esp; /* 0x120EB9A2: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120EB9A4: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x120EB9A7: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EB9AA: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax + 0x10); /* 0x120EB9AD: mov ecx, dword ptr [eax + 0x10] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x120EB9B0: push dword ptr [eax + 0xc] */
    edx = MEM32(ecx); /* 0x120EB9B3: mov edx, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120EB9B5: push ecx */
    RECOMP_ICALL(MEM32(edx + 0x4C)); /* 0x120EB9B6: call dword ptr [edx + 0x4c] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120EB9B9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120EB9BA: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120EB9C2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EB9C2u);

L_120EB9C2:
    edi = edi; /* 0x120EB9C2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EB9C4: push ebp */
    ebp = esp; /* 0x120EB9C5: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120EB9C7: push dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0x8); /* 0x120EB9CA: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120EB9CD: push dword ptr [ebp + 0x10] */
    ecx = MEM32(eax + 0x10); /* 0x120EB9D0: mov ecx, dword ptr [eax + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EB9D3: push dword ptr [ebp + 0xc] */
    edx = MEM32(ecx); /* 0x120EB9D6: mov edx, dword ptr [ecx] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x120EB9D8: push dword ptr [eax + 0xc] */
    PUSH32(esp, ecx); /* 0x120EB9DB: push ecx */
    RECOMP_ICALL(MEM32(edx + 0x50)); /* 0x120EB9DC: call dword ptr [edx + 0x50] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120EB9DF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120EB9E0: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120EB9E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EB9E8u);

L_120EB9E8:
    edi = edi; /* 0x120EB9E8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EB9EA: push ebp */
    ebp = esp; /* 0x120EB9EB: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120EB9ED: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x120EB9F0: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EB9F3: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax + 0x10); /* 0x120EB9F6: mov ecx, dword ptr [eax + 0x10] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x120EB9F9: push dword ptr [eax + 0xc] */
    edx = MEM32(ecx); /* 0x120EB9FC: mov edx, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120EB9FE: push ecx */
    RECOMP_ICALL(MEM32(edx + 0x54)); /* 0x120EB9FF: call dword ptr [edx + 0x54] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120EBA02: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120EBA03: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120EBA0B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EBA0Bu);

L_120EBA0B:
    edi = edi; /* 0x120EBA0B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EBA0D: push ebp */
    ebp = esp; /* 0x120EBA0E: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120EBA10: push dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0x8); /* 0x120EBA13: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120EBA16: push dword ptr [ebp + 0x10] */
    ecx = MEM32(eax + 0x10); /* 0x120EBA19: mov ecx, dword ptr [eax + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EBA1C: push dword ptr [ebp + 0xc] */
    edx = MEM32(ecx); /* 0x120EBA1F: mov edx, dword ptr [ecx] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x120EBA21: push dword ptr [eax + 0xc] */
    PUSH32(esp, ecx); /* 0x120EBA24: push ecx */
    RECOMP_ICALL(MEM32(edx + 0x58)); /* 0x120EBA25: call dword ptr [edx + 0x58] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120EBA28: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120EBA29: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120EBA31(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EBA31u);

L_120EBA31:
    edi = edi; /* 0x120EBA31: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EBA33: push ebp */
    ebp = esp; /* 0x120EBA34: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120EBA36: push dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0x8); /* 0x120EBA39: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120EBA3C: push dword ptr [ebp + 0x10] */
    ecx = MEM32(eax + 0x10); /* 0x120EBA3F: mov ecx, dword ptr [eax + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EBA42: push dword ptr [ebp + 0xc] */
    edx = MEM32(ecx); /* 0x120EBA45: mov edx, dword ptr [ecx] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x120EBA47: push dword ptr [eax + 0xc] */
    PUSH32(esp, ecx); /* 0x120EBA4A: push ecx */
    RECOMP_ICALL(MEM32(edx + 0x5C)); /* 0x120EBA4B: call dword ptr [edx + 0x5c] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120EBA4E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120EBA4F: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120EBA57(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EBA57u);

L_120EBA57:
    edi = edi; /* 0x120EBA57: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EBA59: push ebp */
    ebp = esp; /* 0x120EBA5A: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120EBA5C: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x120EBA5F: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EBA62: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax + 0x10); /* 0x120EBA65: mov ecx, dword ptr [eax + 0x10] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x120EBA68: push dword ptr [eax + 0xc] */
    edx = MEM32(ecx); /* 0x120EBA6B: mov edx, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120EBA6D: push ecx */
    RECOMP_ICALL(MEM32(edx + 0x60)); /* 0x120EBA6E: call dword ptr [edx + 0x60] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120EBA71: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120EBA72: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120EBA7A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EBA7Au);

L_120EBA7A:
    edi = edi; /* 0x120EBA7A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EBA7C: push ebp */
    ebp = esp; /* 0x120EBA7D: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120EBA7F: push dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0x8); /* 0x120EBA82: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120EBA85: push dword ptr [ebp + 0x10] */
    ecx = MEM32(eax + 0x10); /* 0x120EBA88: mov ecx, dword ptr [eax + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EBA8B: push dword ptr [ebp + 0xc] */
    edx = MEM32(ecx); /* 0x120EBA8E: mov edx, dword ptr [ecx] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x120EBA90: push dword ptr [eax + 0xc] */
    PUSH32(esp, ecx); /* 0x120EBA93: push ecx */
    RECOMP_ICALL(MEM32(edx + 0x64)); /* 0x120EBA94: call dword ptr [edx + 0x64] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120EBA97: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120EBA98: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120EBAA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EBAA0u);

L_120EBAA0:
    edi = edi; /* 0x120EBAA0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EBAA2: push ebp */
    ebp = esp; /* 0x120EBAA3: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120EBAA5: push dword ptr [ebp + 0x14] */
    eax = MEM32(ebp + 0x8); /* 0x120EBAA8: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120EBAAB: push dword ptr [ebp + 0x10] */
    ecx = MEM32(eax + 0x10); /* 0x120EBAAE: mov ecx, dword ptr [eax + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EBAB1: push dword ptr [ebp + 0xc] */
    edx = MEM32(ecx); /* 0x120EBAB4: mov edx, dword ptr [ecx] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x120EBAB6: push dword ptr [eax + 0xc] */
    PUSH32(esp, ecx); /* 0x120EBAB9: push ecx */
    RECOMP_ICALL(MEM32(edx + 0x68)); /* 0x120EBABA: call dword ptr [edx + 0x68] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120EBABD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x120EBABE: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_120EBAC6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EBAC6u);

L_120EBAC6:
    edi = edi; /* 0x120EBAC6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EBAC8: push ebp */
    ebp = esp; /* 0x120EBAC9: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120EBACB: push esi */
    PUSH32(esp, edi); /* 0x120EBACC: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120EBACD: push dword ptr [ebp + 8] */
    edi = ecx; /* 0x120EBAD0: mov edi, ecx */
    RECOMP_CALL(sub_120E46CB); /* 0x120EBAD2: call 0x120e46cb */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120EBAD7: mov esi, eax */
    /* test esi, esi */ /* 0x120EBAD9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EBAE4; /* 0x120EBADB: jne 0x120ebae4 */
L_120EBADD:
    eax = 0x88760B59u; /* 0x120EBADD: mov eax, 0x88760b59 */
    goto L_120EBB62; /* 0x120EBAE2: jmp 0x120ebb62 */
L_120EBAE4:
    PUSH32(esp, ebx); /* 0x120EBAE4: push ebx */
    ebx = edi + 0x8; /* 0x120EBAE5: lea ebx, [edi + 8] */
    PUSH32(esp, ebx); /* 0x120EBAE8: push ebx */
    PUSH32(esp, esi); /* 0x120EBAE9: push esi */
    RECOMP_CALL(sub_120192FE); /* 0x120EBAEA: call 0x120192fe */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EBAEF: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EBB61; /* 0x120EBAF1: js 0x120ebb61 */
L_120EBAF3:
    ecx = MEM32(ebx); /* 0x120EBAF3: mov ecx, dword ptr [ebx] */
    eax = MEM32(ecx); /* 0x120EBAF5: mov eax, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x120EBAF7: push esi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120EBAF8: push dword ptr [ebp + 8] */
    PUSH32(esp, ecx); /* 0x120EBAFB: push ecx */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x120EBAFC: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x120EBAFF: push eax */
    RECOMP_CALL(sub_121BF440); /* 0x120EBB00: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x120014BCu); /* 0x120EBB05: push 0x120014bc */
    PUSH32(esp, 0x24u); /* 0x120EBB0A: push 0x24 */
    RECOMP_CALL(sub_12018970); /* 0x120EBB0C: call 0x12018970 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x120EBB11: add esp, 0x14 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x120EBB14: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EBB23; /* 0x120EBB16: je 0x120ebb23 */
L_120EBB18:
    ecx = eax; /* 0x120EBB18: mov ecx, eax */
    RECOMP_CALL(sub_120EAA20); /* 0x120EBB1A: call 0x120eaa20 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120EBB1F: mov esi, eax */
    goto L_120EBB25; /* 0x120EBB21: jmp 0x120ebb25 */
L_120EBB23:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120EBB23: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EBB25:
    /* test esi, esi */ /* 0x120EBB25: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EBB30; /* 0x120EBB27: jne 0x120ebb30 */
L_120EBB29:
    eax = 0x8007000Eu; /* 0x120EBB29: mov eax, 0x8007000e */
    goto L_120EBB61; /* 0x120EBB2E: jmp 0x120ebb61 */
L_120EBB30:
    ecx = MEM32(ebx); /* 0x120EBB30: mov ecx, dword ptr [ebx] */
    eax = edi + 0xC; /* 0x120EBB32: lea eax, [edi + 0xc] */
    PUSH32(esp, eax); /* 0x120EBB35: push eax */
    eax = MEM32(ecx); /* 0x120EBB36: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120EBB38: push ecx */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x120EBB39: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x120EBB3C: push eax */
    ecx = esi; /* 0x120EBB3D: mov ecx, esi */
    RECOMP_CALL(sub_120EAA49); /* 0x120EBB3F: call 0x120eaa49 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x120EBB44: mov ebx, eax */
    /* test ebx, ebx */ /* 0x120EBB46: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_120EBB5C; /* 0x120EBB48: jns 0x120ebb5c */
L_120EBB4A:
    ecx = esi; /* 0x120EBB4A: mov ecx, esi */
    RECOMP_CALL(sub_120E7803); /* 0x120EBB4C: call 0x120e7803 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x120EBB51: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x120EBB52: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120EBB57: pop ecx */
    eax = ebx; /* 0x120EBB58: mov eax, ebx */
    goto L_120EBB61; /* 0x120EBB5A: jmp 0x120ebb61 */
L_120EBB5C:
    MEM32(edi + 0x10) = esi; /* 0x120EBB5C: mov dword ptr [edi + 0x10], esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EBB5F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EBB61:
    ebx = POP32_VAL(esp); /* 0x120EBB61: pop ebx */
L_120EBB62:
    edi = POP32_VAL(esp); /* 0x120EBB62: pop edi */
    esi = POP32_VAL(esp); /* 0x120EBB63: pop esi */
    ebp = POP32_VAL(esp); /* 0x120EBB64: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x120EBB65: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_120EBB6D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EBB6Du);

L_120EBB6D:
    edi = edi; /* 0x120EBB6D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EBB6F: push ebp */
    ebp = esp; /* 0x120EBB70: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120EBB72: push esi */
    esi = MEM32(ebp + 0xC); /* 0x120EBB73: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x120EBB76: push edi */
    PUSH32(esp, 4); /* 0x120EBB77: push 4 */
    ecx = POP32_VAL(esp); /* 0x120EBB79: pop ecx */
    edi = 0x12001D78u; /* 0x120EBB7A: mov edi, 0x12001d78 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EBB7F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x120EBB81: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_120EBB96; /* 0x120EBB83: je 0x120ebb96 */
L_120EBB85:
    esi = MEM32(ebp + 0xC); /* 0x120EBB85: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, 4); /* 0x120EBB88: push 4 */
    ecx = POP32_VAL(esp); /* 0x120EBB8A: pop ecx */
    edi = 0x12018314u; /* 0x120EBB8B: mov edi, 0x12018314 */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EBB90: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM32(esi); _b = MEM32(edi); esi += (_df * 4); edi += (_df * 4); ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x120EBB92: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_120EBBA8; /* 0x120EBB94: jne 0x120ebba8 */
L_120EBB96:
    ecx = MEM32(ebp + 0x8); /* 0x120EBB96: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ebp + 0x10); /* 0x120EBB99: mov eax, dword ptr [ebp + 0x10] */
    MEM32(eax) = ecx; /* 0x120EBB9C: mov dword ptr [eax], ecx */
    eax = MEM32(ecx); /* 0x120EBB9E: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120EBBA0: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x120EBBA1: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EBBA4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120EBBAD; /* 0x120EBBA6: jmp 0x120ebbad */
L_120EBBA8:
    eax = 0x80004002u; /* 0x120EBBA8: mov eax, 0x80004002 */
L_120EBBAD:
    edi = POP32_VAL(esp); /* 0x120EBBAD: pop edi */
    esi = POP32_VAL(esp); /* 0x120EBBAE: pop esi */
    ebp = POP32_VAL(esp); /* 0x120EBBAF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x120EBBB0: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_120EBBB8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EBBB8u);

L_120EBBB8:
    edi = edi; /* 0x120EBBB8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EBBBA: push ebp */
    ebp = esp; /* 0x120EBBBB: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120EBBBD: push esi */
    esi = MEM32(ebp + 0x8); /* 0x120EBBBE: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(esi + 0x4)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x4) = MEM32(esi + 0x4) - 1; /* 0x120EBBC1: dec dword ptr [esi + 4] */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120EBBCB; /* 0x120EBBC4: je 0x120ebbcb */
L_120EBBC6:
    eax = MEM32(esi + 0x4); /* 0x120EBBC6: mov eax, dword ptr [esi + 4] */
    goto L_120EBBDB; /* 0x120EBBC9: jmp 0x120ebbdb */
L_120EBBCB:
    ecx = esi; /* 0x120EBBCB: mov ecx, esi */
    RECOMP_CALL(sub_120EB769); /* 0x120EBBCD: call 0x120eb769 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x120EBBD2: push esi */
    RECOMP_CALL(sub_121BF388); /* 0x120EBBD3: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120EBBD8: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EBBD9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EBBDB:
    esi = POP32_VAL(esp); /* 0x120EBBDB: pop esi */
    ebp = POP32_VAL(esp); /* 0x120EBBDC: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x120EBBDD: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_120EBBE5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EBBE5u);

L_120EBBE5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EBBE5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x8) = eax; /* 0x120EBBE7: mov dword ptr [ecx + 8], eax */
    MEM32(ecx + 0xC) = eax; /* 0x120EBBEA: mov dword ptr [ecx + 0xc], eax */
    MEM32(ecx + 0x10) = eax; /* 0x120EBBED: mov dword ptr [ecx + 0x10], eax */
    MEM32(ecx) = 0x12008A58u; /* 0x120EBBF0: mov dword ptr [ecx], 0x12008a58 */
    MEM32(ecx + 0x4) = 1; /* 0x120EBBF6: mov dword ptr [ecx + 4], 1 */
    eax = ecx; /* 0x120EBBFD: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x120EBBFF: ret  */
    RECOMP_REGS_OUT();
}

void sub_120EBC05(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EBC05u);

L_120EBC05:
    edi = edi; /* 0x120EBC05: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EBC07: push ebp */
    ebp = esp; /* 0x120EBC08: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120EBC0A: push esi */
    esi = MEM32(ebp + 0xC); /* 0x120EBC0B: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x120EBC0E: push edi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120EBC0F: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test esi, esi */ /* 0x120EBC11: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EBC53; /* 0x120EBC13: je 0x120ebc53 */
L_120EBC15:
    PUSH32(esp, ebx); /* 0x120EBC15: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x120EBC16: mov ebx, dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x120EBC19: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EBC50; /* 0x120EBC1B: je 0x120ebc50 */
L_120EBC1D:
    eax = MEM32(ebx); /* 0x120EBC1D: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x120EBC1F: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x10)); /* 0x120EBC20: call dword ptr [eax + 0x10] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x120EBC23: push esi */
    PUSH32(esp, eax); /* 0x120EBC24: push eax */
    MEM32(ebp + 0xC) = eax; /* 0x120EBC25: mov dword ptr [ebp + 0xc], eax */
    RECOMP_CALL(sub_120192FE); /* 0x120EBC28: call 0x120192fe */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x120EBC2D: mov edi, eax */
    /* test edi, edi */ /* 0x120EBC2F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EBC52; /* 0x120EBC31: js 0x120ebc52 */
L_120EBC33:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EBC33: push dword ptr [ebp + 0xc] */
    ecx = MEM32(ebx); /* 0x120EBC36: mov ecx, dword ptr [ebx] */
    esi = MEM32(esi); /* 0x120EBC38: mov esi, dword ptr [esi] */
    PUSH32(esp, ebx); /* 0x120EBC3A: push ebx */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x120EBC3B: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x120EBC3E: push eax */
    eax = MEM32(esi); /* 0x120EBC3F: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x120EBC41: push esi */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x120EBC42: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x120EBC45: push eax */
    RECOMP_CALL(sub_121BF440); /* 0x120EBC46: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120EBC4B: add esp, 0xc */
    _flag_k = FK_ADD;
    goto L_120EBC52; /* 0x120EBC4E: jmp 0x120ebc52 */
L_120EBC50:
    MEM32(esi) = edi; /* 0x120EBC50: mov dword ptr [esi], edi */
L_120EBC52:
    ebx = POP32_VAL(esp); /* 0x120EBC52: pop ebx */
L_120EBC53:
    eax = edi; /* 0x120EBC53: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x120EBC55: pop edi */
    esi = POP32_VAL(esp); /* 0x120EBC56: pop esi */
    ebp = POP32_VAL(esp); /* 0x120EBC57: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120EBC58: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120EBC77(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EBC77u);

L_120EBC77:
    edi = edi; /* 0x120EBC77: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EBC79: push ebp */
    ebp = esp; /* 0x120EBC7A: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x120EBC7C: push ecx */
    PUSH32(esp, esi); /* 0x120EBC7D: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120EBC7E: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = ecx; /* 0x120EBC80: mov dword ptr [ebp - 4], ecx */
    /* cmp MEM32(ecx), esi */ /* 0x120EBC83: cmp dword ptr [ecx], esi */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EBC8E; /* 0x120EBC85: je 0x120ebc8e */
L_120EBC87:
    esi = 0x80004005u; /* 0x120EBC87: mov esi, 0x80004005 */
    goto L_120EBD0C; /* 0x120EBC8C: jmp 0x120ebd0c */
L_120EBC8E:
    PUSH32(esp, ebx); /* 0x120EBC8E: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x120EBC8F: mov ebx, dword ptr [ebp + 8] */
    /* test ebx, ebx */ /* 0x120EBC92: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EBD0B; /* 0x120EBC94: je 0x120ebd0b */
L_120EBC96:
    PUSH32(esp, edi); /* 0x120EBC96: push edi */
    edi = esi; /* 0x120EBC97: mov edi, esi */
    /* cmp MEM32(ebx), esi */ /* 0x120EBC99: cmp dword ptr [ebx], esi */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EBCA3; /* 0x120EBC9B: je 0x120ebca3 */
L_120EBC9D:
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi + 1; /* 0x120EBC9D: inc edi */
    _flag_k = FK_INC;
    /* cmp MEM32(ebx + edi * 8), esi */ /* 0x120EBC9E: cmp dword ptr [ebx + edi*8], esi */
    _flag_a = (uint32_t)(MEM32(ebx + edi * 8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EBC9D; /* 0x120EBCA1: jne 0x120ebc9d */
L_120EBCA3:
    PUSH32(esp, 0x120014BCu); /* 0x120EBCA3: push 0x120014bc */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120EBCA8: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 8); /* 0x120EBCAA: push 8 */
    edx = POP32_VAL(esp); /* 0x120EBCAC: pop edx */
    eax = edi + 0x1; /* 0x120EBCAD: lea eax, [edi + 1] */
    { uint64_t _r = (uint64_t)eax * (uint32_t)(edx); /* 0x120EBCB0: mul edx */
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); uint32_t _ov = edx != 0;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    SET_LO8(ecx, (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_O, _cf)) ? 1 : 0); /* 0x120EBCB2: seto cl */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x120EBCB5: neg ecx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)((ecx | eax)); _flag_b = (uint32_t)((ecx | eax));
    ecx = ecx | eax; /* 0x120EBCB7: or ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x120EBCB9: push ecx */
    RECOMP_CALL(sub_12018970); /* 0x120EBCBA: call 0x12018970 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x4)); /* 0x120EBCBF: mov edx, dword ptr [ebp - 4] */
    ecx = POP32_VAL(esp); /* 0x120EBCC2: pop ecx */
    ecx = POP32_VAL(esp); /* 0x120EBCC3: pop ecx */
    MEM32(edx) = eax; /* 0x120EBCC4: mov dword ptr [edx], eax */
    /* test eax, eax */ /* 0x120EBCC6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EBCD1; /* 0x120EBCC8: jne 0x120ebcd1 */
L_120EBCCA:
    esi = 0x8007000Eu; /* 0x120EBCCA: mov esi, 0x8007000e */
    goto L_120EBD0A; /* 0x120EBCCF: jmp 0x120ebd0a */
L_120EBCD1:
    eax = edi; /* 0x120EBCD1: mov eax, edi */
    MEM32(ebp + 0x8) = esi; /* 0x120EBCD3: mov dword ptr [ebp + 8], esi */
    /* test eax, eax */ /* 0x120EBCD6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EBCFF; /* 0x120EBCD8: je 0x120ebcff */
L_120EBCDA:
    eax = esi; /* 0x120EBCDA: mov eax, esi */
L_120EBCDC:
    eax = MEM32(ebx + eax * 8 + 0x4); /* 0x120EBCDC: mov eax, dword ptr [ebx + eax*8 + 4] */
    esi = MEM32(ebp + 0x8); /* 0x120EBCE0: mov esi, dword ptr [ebp + 8] */
    ecx = MEM32(edx); /* 0x120EBCE3: mov ecx, dword ptr [edx] */
    MEM32(ecx + esi * 8 + 0x4) = eax; /* 0x120EBCE5: mov dword ptr [ecx + esi*8 + 4], eax */
    ecx = MEM32(edx); /* 0x120EBCE9: mov ecx, dword ptr [edx] */
    eax = esi; /* 0x120EBCEB: mov eax, esi */
    eax = MEM32(ebx + eax * 8); /* 0x120EBCED: mov eax, dword ptr [ebx + eax*8] */
    MEM32(ecx + esi * 8) = eax; /* 0x120EBCF0: mov dword ptr [ecx + esi*8], eax */
    eax = esi; /* 0x120EBCF3: mov eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x120EBCF5: inc eax */
    _flag_k = FK_INC;
    MEM32(ebp + 0x8) = eax; /* 0x120EBCF6: mov dword ptr [ebp + 8], eax */
    /* cmp eax, edi */ /* 0x120EBCF9: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120EBCDC; /* 0x120EBCFB: jb 0x120ebcdc */
L_120EBCFD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120EBCFD: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EBCFF:
    ecx = MEM32(edx); /* 0x120EBCFF: mov ecx, dword ptr [edx] */
    MEM32(ecx + edi * 8 + 0x4) = esi; /* 0x120EBD01: mov dword ptr [ecx + edi*8 + 4], esi */
    ecx = MEM32(edx); /* 0x120EBD05: mov ecx, dword ptr [edx] */
    MEM32(ecx + edi * 8) = esi; /* 0x120EBD07: mov dword ptr [ecx + edi*8], esi */
L_120EBD0A:
    edi = POP32_VAL(esp); /* 0x120EBD0A: pop edi */
L_120EBD0B:
    ebx = POP32_VAL(esp); /* 0x120EBD0B: pop ebx */
L_120EBD0C:
    eax = esi; /* 0x120EBD0C: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120EBD0E: pop esi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120EBD0F: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x120EBD10: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_120EBD18(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EBD18u);

L_120EBD18:
    eax = MEM32(ecx); /* 0x120EBD18: mov eax, dword ptr [ecx] */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x120EBD1A: ret  */
    RECOMP_REGS_OUT();
}

void sub_120EBD20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EBD20u);

L_120EBD20:
    edi = edi; /* 0x120EBD20: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EBD22: push ebp */
    ebp = esp; /* 0x120EBD23: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x120EBD25: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120EBD28: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edx; /* 0x120EBD2A: sub eax, edx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_120EBD3B; /* 0x120EBD2C: je 0x120ebd3b */
L_120EBD2E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x120EBD2E: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_120EBD38; /* 0x120EBD2F: je 0x120ebd38 */
L_120EBD31:
    eax = 0x80004005u; /* 0x120EBD31: mov eax, 0x80004005 */
    goto L_120EBD53; /* 0x120EBD36: jmp 0x120ebd53 */
L_120EBD38:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120EBD38: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x120EBD3A: inc edx */
    _flag_k = FK_INC;
L_120EBD3B:
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120EBD3B: push dword ptr [ebp + 0x1c] */
    eax = MEM32(ebp + 0x8); /* 0x120EBD3E: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120EBD41: push dword ptr [ebp + 0x18] */
    eax = MEM32(eax + 0x4); /* 0x120EBD44: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120EBD47: push dword ptr [ebp + 0x14] */
    ecx = MEM32(eax); /* 0x120EBD4A: mov ecx, dword ptr [eax] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120EBD4C: push dword ptr [ebp + 0x10] */
    PUSH32(esp, edx); /* 0x120EBD4F: push edx */
    PUSH32(esp, eax); /* 0x120EBD50: push eax */
    RECOMP_ICALL(MEM32(ecx)); /* 0x120EBD51: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
L_120EBD53:
    ebp = POP32_VAL(esp); /* 0x120EBD53: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x120EBD54: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_120EBD5C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EBD5Cu);

L_120EBD5C:
    edi = edi; /* 0x120EBD5C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EBD5E: push ebp */
    ebp = esp; /* 0x120EBD5F: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x120EBD61: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x4); /* 0x120EBD64: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EBD67: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x120EBD6A: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120EBD6C: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x120EBD6D: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120EBD70: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120EBD71: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120EBD79(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EBD79u);

    goto L_120EBD79;
L_120EBC60:
    edi = edi; /* 0x120EBC60: mov edi, edi */
    PUSH32(esp, esi); /* 0x120EBC62: push esi */
    esi = ecx; /* 0x120EBC63: mov esi, ecx */
    PUSH32(esp, MEM32(esi)); /* 0x120EBC65: push dword ptr [esi] */
    RECOMP_CALL(sub_121BF388); /* 0x120EBC67: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x120EBC6C: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x120EBC6F: pop ecx */
    esi = POP32_VAL(esp); /* 0x120EBC70: pop esi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x120EBC71: ret  */
L_120EBD79:
    edi = edi; /* 0x120EBD79: mov edi, edi */
    PUSH32(esp, esi); /* 0x120EBD7B: push esi */
    esi = ecx; /* 0x120EBD7C: mov esi, ecx */
    ecx = MEM32(esi + 0x21C); /* 0x120EBD7E: mov ecx, dword ptr [esi + 0x21c] */
    /* test ecx, ecx */ /* 0x120EBD84: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EBD95; /* 0x120EBD86: je 0x120ebd95 */
L_120EBD88:
    eax = MEM32(ecx); /* 0x120EBD88: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120EBD8A: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120EBD8B: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x21C)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x21C) = MEM32(esi + 0x21C) & 0; /* 0x120EBD8E: and dword ptr [esi + 0x21c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EBD95:
    ecx = MEM32(esi + 0x220); /* 0x120EBD95: mov ecx, dword ptr [esi + 0x220] */
    /* test ecx, ecx */ /* 0x120EBD9B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EBDAC; /* 0x120EBD9D: je 0x120ebdac */
L_120EBD9F:
    eax = MEM32(ecx); /* 0x120EBD9F: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120EBDA1: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120EBDA2: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x220)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x220) = MEM32(esi + 0x220) & 0; /* 0x120EBDA5: and dword ptr [esi + 0x220], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EBDAC:
    edx = MEM32(esi + 0x234); /* 0x120EBDAC: mov edx, dword ptr [esi + 0x234] */
    /* test edx, edx */ /* 0x120EBDB2: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EBDC3; /* 0x120EBDB4: je 0x120ebdc3 */
L_120EBDB6:
    eax = MEM32(esi + 0x218); /* 0x120EBDB6: mov eax, dword ptr [esi + 0x218] */
    ecx = MEM32(eax); /* 0x120EBDBC: mov ecx, dword ptr [eax] */
    PUSH32(esp, edx); /* 0x120EBDBE: push edx */
    PUSH32(esp, eax); /* 0x120EBDBF: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x4)); /* 0x120EBDC0: call dword ptr [ecx + 4] */
    RECOMP_FLAGS_IN();
L_120EBDC3:
    /* cmp MEM8(esi + 0x23C), 0 */ /* 0x120EBDC3: cmp byte ptr [esi + 0x23c], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x23C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EBDD8; /* 0x120EBDCA: je 0x120ebdd8 */
L_120EBDCC:
    PUSH32(esp, MEM32(esi + 0x238)); /* 0x120EBDCC: push dword ptr [esi + 0x238] */
    RECOMP_CALL(sub_121BF388); /* 0x120EBDD2: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120EBDD7: pop ecx */
L_120EBDD8:
    MEM32(esi + 0x4) = 0x12008AC0u; /* 0x120EBDD8: mov dword ptr [esi + 4], 0x12008ac0 */
    ecx = esi; /* 0x120EBDDF: mov ecx, esi */
    esi = POP32_VAL(esp); /* 0x120EBDE1: pop esi */
    RECOMP_BACKEDGE();
    goto L_120EBC60; /* 0x120EBDE2: jmp 0x120ebc60 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_120EBDEC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EBDECu);

L_120EBDEC:
    edi = edi; /* 0x120EBDEC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EBDEE: push ebp */
    ebp = esp; /* 0x120EBDEF: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120EBDF1: push esi */
    esi = ecx; /* 0x120EBDF2: mov esi, ecx */
    PUSH32(esp, MEM32(esi + 0x224)); /* 0x120EBDF4: push dword ptr [esi + 0x224] */
    PUSH32(esp, MEM32(esi + 0x21C)); /* 0x120EBDFA: push dword ptr [esi + 0x21c] */
    RECOMP_CALL(sub_120EBC05); /* 0x120EBE00: call 0x120ebc05 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EBE05: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EBE49; /* 0x120EBE07: js 0x120ebe49 */
L_120EBE09:
    PUSH32(esp, MEM32(esi + 0x228)); /* 0x120EBE09: push dword ptr [esi + 0x228] */
    PUSH32(esp, MEM32(esi + 0x220)); /* 0x120EBE0F: push dword ptr [esi + 0x220] */
    RECOMP_CALL(sub_120EBC05); /* 0x120EBE15: call 0x120ebc05 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EBE1A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EBE49; /* 0x120EBE1C: js 0x120ebe49 */
L_120EBE1E:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x120EBE1E: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EBE46; /* 0x120EBE22: je 0x120ebe46 */
L_120EBE24:
    /* cmp MEM32(esi + 0x21C), 0 */ /* 0x120EBE24: cmp dword ptr [esi + 0x21c], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x21C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EBE46; /* 0x120EBE2B: je 0x120ebe46 */
L_120EBE2D:
    ecx = MEM32(esi + 0x21C); /* 0x120EBE2D: mov ecx, dword ptr [esi + 0x21c] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EBE33: push dword ptr [ebp + 0xc] */
    eax = MEM32(ecx); /* 0x120EBE36: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120EBE38: push ecx */
    RECOMP_ICALL(MEM32(eax + 0xC)); /* 0x120EBE39: call dword ptr [eax + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x120EBE3C: push eax */
    RECOMP_CALL(sub_120E61C8); /* 0x120EBE3D: call 0x120e61c8 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EBE42: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EBE49; /* 0x120EBE44: js 0x120ebe49 */
L_120EBE46:
    eax = MEM32(ebp + 0x8); /* 0x120EBE46: mov eax, dword ptr [ebp + 8] */
L_120EBE49:
    esi = POP32_VAL(esp); /* 0x120EBE49: pop esi */
    ebp = POP32_VAL(esp); /* 0x120EBE4A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120EBE4B: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120EBE53(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EBE53u);

L_120EBE53:
    edi = edi; /* 0x120EBE53: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EBE55: push ebp */
    ebp = esp; /* 0x120EBE56: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x210u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x210u; /* 0x120EBE58: sub esp, 0x210 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120EBE5E: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120EBE63: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120EBE65: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x120EBE68: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x120EBE6B: push esi */
    esi = ecx + 0x4; /* 0x120EBE6C: lea esi, [ecx + 4] */
    _flag_a = (uint32_t)(MEM16(esi)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(esi) = (uint16_t)(MEM16(esi) & 0); /* 0x120EBE6F: and word ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    /* test eax, eax */ /* 0x120EBE73: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EBEE0; /* 0x120EBE75: je 0x120ebee0 */
L_120EBE77:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x210))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x210)) = MEM32(ebp + (-0x210)) & 0; /* 0x120EBE77: and dword ptr [ebp - 0x210], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x120EBE7E: push edi */
    edi = 0x104u; /* 0x120EBE7F: mov edi, 0x104 */
    PUSH32(esp, edi); /* 0x120EBE84: push edi */
    ecx = ebp + (-0x20C); /* 0x120EBE85: lea ecx, [ebp - 0x20c] */
    PUSH32(esp, ecx); /* 0x120EBE8B: push ecx */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x120EBE8C: push -1 */
    PUSH32(esp, eax); /* 0x120EBE8E: push eax */
    PUSH32(esp, 0); /* 0x120EBE8F: push 0 */
    PUSH32(esp, 0xFDE9u); /* 0x120EBE91: push 0xfde9 */
    RECOMP_ICALL(MEM32(0x12001110)); /* 0x120EBE96: call dword ptr [0x12001110] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM16(ebp + (-0x6))) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(ebp + (-0x6)) = (uint16_t)(MEM16(ebp + (-0x6)) & 0); /* 0x120EBE9C: and word ptr [ebp - 6], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = ebp + (-0x210); /* 0x120EBEA1: lea eax, [ebp - 0x210] */
    PUSH32(esp, eax); /* 0x120EBEA7: push eax */
    PUSH32(esp, esi); /* 0x120EBEA8: push esi */
    PUSH32(esp, edi); /* 0x120EBEA9: push edi */
    eax = ebp + (-0x20C); /* 0x120EBEAA: lea eax, [ebp - 0x20c] */
    PUSH32(esp, eax); /* 0x120EBEB0: push eax */
    RECOMP_ICALL(MEM32(0x120010D0)); /* 0x120EBEB1: call dword ptr [0x120010d0] */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x120EBEB7: pop edi */
    /* test eax, eax */ /* 0x120EBEB8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EBED2; /* 0x120EBEBA: jne 0x120ebed2 */
L_120EBEBC:
    RECOMP_ICALL(MEM32(0x120010D4)); /* 0x120EBEBC: call dword ptr [0x120010d4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EBEC2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EBEE2; /* 0x120EBEC4: jle 0x120ebee2 */
L_120EBEC6:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFu);
    eax = eax & 0xFFFFu; /* 0x120EBEC6: and eax, 0xffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x80070000u)); _flag_b = (uint32_t)((eax | 0x80070000u));
    eax = eax | 0x80070000u; /* 0x120EBECB: or eax, 0x80070000 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120EBEE2; /* 0x120EBED0: jmp 0x120ebee2 */
L_120EBED2:
    eax = MEM32(ebp + (-0x210)); /* 0x120EBED2: mov eax, dword ptr [ebp - 0x210] */
    /* test eax, eax */ /* 0x120EBED8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EBEE0; /* 0x120EBEDA: je 0x120ebee0 */
L_120EBEDC:
    _flag_a = (uint32_t)(MEM16(eax)) << 16; _flag_b = (uint32_t)(0) << 16;
    MEM16(eax) = (uint16_t)(MEM16(eax) & 0); /* 0x120EBEDC: and word ptr [eax], 0 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
L_120EBEE0:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EBEE0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EBEE2:
    ecx = MEM32(ebp + (-0x4)); /* 0x120EBEE2: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120EBEE5: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x120EBEE7: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x120EBEE8: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120EBEED: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x120EBEEE: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_120EBEF6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EBEF6u);

L_120EBEF6:
    edi = edi; /* 0x120EBEF6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EBEF8: push ebp */
    ebp = esp; /* 0x120EBEF9: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x120EBEFB: push ebx */
    PUSH32(esp, esi); /* 0x120EBEFC: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120EBEFD: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x120EBEFF: push edi */
    esi = ecx; /* 0x120EBF00: mov esi, ecx */
    /* cmp MEM8(ebp + 0xC), LO8(ebx) */ /* 0x120EBF02: cmp byte ptr [ebp + 0xc], bl */
    _flag_a = (uint32_t)(MEM8(ebp + 0xC)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EBFAF; /* 0x120EBF05: je 0x120ebfaf */
L_120EBF0B:
    PUSH32(esp, ebx); /* 0x120EBF0B: push ebx */
    PUSH32(esp, ebx); /* 0x120EBF0C: push ebx */
    PUSH32(esp, ebx); /* 0x120EBF0D: push ebx */
    PUSH32(esp, ebx); /* 0x120EBF0E: push ebx */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x120EBF0F: push -1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120EBF11: push dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x120EBF14: push ebx */
    ebx = MEM32(0x1200110C); /* 0x120EBF15: mov ebx, dword ptr [0x1200110c] */
    PUSH32(esp, 0xFDE9u); /* 0x120EBF1B: push 0xfde9 */
    RECOMP_ICALL(ebx); /* 0x120EBF20: call ebx */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x120EBF22: mov edi, eax */
    /* test edi, edi */ /* 0x120EBF24: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EBF45; /* 0x120EBF26: jne 0x120ebf45 */
L_120EBF28:
    RECOMP_ICALL(MEM32(0x120010D4)); /* 0x120EBF28: call dword ptr [0x120010d4] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EBF2E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EBFD7; /* 0x120EBF30: jle 0x120ebfd7 */
L_120EBF36:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFu);
    eax = eax & 0xFFFFu; /* 0x120EBF36: and eax, 0xffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | 0x80070000u)); _flag_b = (uint32_t)((eax | 0x80070000u));
    eax = eax | 0x80070000u; /* 0x120EBF3B: or eax, 0x80070000 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_120EBFD7; /* 0x120EBF40: jmp 0x120ebfd7 */
L_120EBF45:
    PUSH32(esp, 0x120014BCu); /* 0x120EBF45: push 0x120014bc */
    PUSH32(esp, edi); /* 0x120EBF4A: push edi */
    RECOMP_CALL(sub_12018970); /* 0x120EBF4B: call 0x12018970 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120EBF50: pop ecx */
    ecx = POP32_VAL(esp); /* 0x120EBF51: pop ecx */
    MEM32(esi + 0x238) = eax; /* 0x120EBF52: mov dword ptr [esi + 0x238], eax */
    /* test eax, eax */ /* 0x120EBF58: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EBF63; /* 0x120EBF5A: jne 0x120ebf63 */
L_120EBF5C:
    eax = 0x8007000Eu; /* 0x120EBF5C: mov eax, 0x8007000e */
    goto L_120EBFD7; /* 0x120EBF61: jmp 0x120ebfd7 */
L_120EBF63:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120EBF63: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ecx); /* 0x120EBF65: push ecx */
    PUSH32(esp, ecx); /* 0x120EBF66: push ecx */
    PUSH32(esp, edi); /* 0x120EBF67: push edi */
    PUSH32(esp, eax); /* 0x120EBF68: push eax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x120EBF69: push -1 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120EBF6B: push dword ptr [ebp + 8] */
    MEM8(esi + 0x23C) = (uint8_t)(1); /* 0x120EBF6E: mov byte ptr [esi + 0x23c], 1 */
    PUSH32(esp, ecx); /* 0x120EBF75: push ecx */
    PUSH32(esp, 0xFDE9u); /* 0x120EBF76: push 0xfde9 */
    RECOMP_ICALL(ebx); /* 0x120EBF7B: call ebx */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EBF7D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EBF28; /* 0x120EBF7F: je 0x120ebf28 */
L_120EBF81:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120EBF81: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EBF83:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120EBF83: push dword ptr [ebp + 0x10] */
    ecx = esi; /* 0x120EBF86: mov ecx, esi */
    RECOMP_CALL(sub_120EBC77); /* 0x120EBF88: call 0x120ebc77 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EBF8D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EBFD7; /* 0x120EBF8F: js 0x120ebfd7 */
L_120EBF91:
    eax = MEM32(ebp + 0x14); /* 0x120EBF91: mov eax, dword ptr [ebp + 0x14] */
    /* test eax, eax */ /* 0x120EBF94: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EBFBA; /* 0x120EBF96: je 0x120ebfba */
L_120EBF98:
    MEM32(esi + 0x8) = eax; /* 0x120EBF98: mov dword ptr [esi + 8], eax */
    eax = esi + 0x4; /* 0x120EBF9B: lea eax, [esi + 4] */
    ecx = MEM32(eax + 0x4); /* 0x120EBF9E: mov ecx, dword ptr [eax + 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(ecx);
    _cf = (ecx) != 0;
    ecx = (uint32_t)(-(int32_t)ecx); /* 0x120EBFA1: neg ecx */
    _flag_k = FK_CMP;
    { uint32_t _sa = ecx, _sb = ecx, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x120EBFA3: sbb ecx, ecx */
      ecx = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    ecx = ecx & eax; /* 0x120EBFA5: and ecx, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x218) = ecx; /* 0x120EBFA7: mov dword ptr [esi + 0x218], ecx */
    goto L_120EBFC3; /* 0x120EBFAD: jmp 0x120ebfc3 */
L_120EBFAF:
    eax = MEM32(ebp + 0x8); /* 0x120EBFAF: mov eax, dword ptr [ebp + 8] */
    MEM32(esi + 0x238) = eax; /* 0x120EBFB2: mov dword ptr [esi + 0x238], eax */
    RECOMP_BACKEDGE();
    goto L_120EBF83; /* 0x120EBFB8: jmp 0x120ebf83 */
L_120EBFBA:
    eax = esi + 0xC; /* 0x120EBFBA: lea eax, [esi + 0xc] */
    MEM32(esi + 0x218) = eax; /* 0x120EBFBD: mov dword ptr [esi + 0x218], eax */
L_120EBFC3:
    eax = MEM32(ebp + 0x18); /* 0x120EBFC3: mov eax, dword ptr [ebp + 0x18] */
    MEM32(esi + 0x224) = eax; /* 0x120EBFC6: mov dword ptr [esi + 0x224], eax */
    eax = MEM32(ebp + 0x1C); /* 0x120EBFCC: mov eax, dword ptr [ebp + 0x1c] */
    MEM32(esi + 0x228) = eax; /* 0x120EBFCF: mov dword ptr [esi + 0x228], eax */
    eax = ebx; /* 0x120EBFD5: mov eax, ebx */
L_120EBFD7:
    edi = POP32_VAL(esp); /* 0x120EBFD7: pop edi */
    esi = POP32_VAL(esp); /* 0x120EBFD8: pop esi */
    ebx = POP32_VAL(esp); /* 0x120EBFD9: pop ebx */
    ebp = POP32_VAL(esp); /* 0x120EBFDA: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x120EBFDB: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_120EBFE3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EBFE3u);

L_120EBFE3:
    edi = edi; /* 0x120EBFE3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EBFE5: push ebp */
    ebp = esp; /* 0x120EBFE6: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120EBFE8: push esi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120EBFE9: push dword ptr [ebp + 0x1c] */
    esi = ecx; /* 0x120EBFEC: mov esi, ecx */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120EBFEE: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120EBFF1: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120EBFF4: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EBFF7: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120EBFFA: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_120EBEF6); /* 0x120EBFFD: call 0x120ebef6 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EC002: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EC04B; /* 0x120EC004: js 0x120ec04b */
L_120EC006:
    PUSH32(esp, MEM32(esi + 0x238)); /* 0x120EC006: push dword ptr [esi + 0x238] */
    ecx = esi + 0xC; /* 0x120EC00C: lea ecx, [esi + 0xc] */
    RECOMP_CALL(sub_120EBE53); /* 0x120EC00F: call 0x120ebe53 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EC014: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EC04B; /* 0x120EC016: js 0x120ec04b */
L_120EC018:
    edx = MEM32(esi + 0x218); /* 0x120EC018: mov edx, dword ptr [esi + 0x218] */
    ecx = MEM32(edx); /* 0x120EC01E: mov ecx, dword ptr [edx] */
    PUSH32(esp, edi); /* 0x120EC020: push edi */
    eax = esi + 0x230; /* 0x120EC021: lea eax, [esi + 0x230] */
    PUSH32(esp, eax); /* 0x120EC027: push eax */
    edi = esi + 0x234; /* 0x120EC028: lea edi, [esi + 0x234] */
    PUSH32(esp, edi); /* 0x120EC02E: push edi */
    PUSH32(esp, 0); /* 0x120EC02F: push 0 */
    PUSH32(esp, MEM32(esi + 0x238)); /* 0x120EC031: push dword ptr [esi + 0x238] */
    PUSH32(esp, 0); /* 0x120EC037: push 0 */
    PUSH32(esp, edx); /* 0x120EC039: push edx */
    RECOMP_ICALL(MEM32(ecx)); /* 0x120EC03A: call dword ptr [ecx] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EC03C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EC04A; /* 0x120EC03E: js 0x120ec04a */
L_120EC040:
    eax = MEM32(edi); /* 0x120EC040: mov eax, dword ptr [edi] */
    MEM32(esi + 0x22C) = eax; /* 0x120EC042: mov dword ptr [esi + 0x22c], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EC048: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EC04A:
    edi = POP32_VAL(esp); /* 0x120EC04A: pop edi */
L_120EC04B:
    esi = POP32_VAL(esp); /* 0x120EC04B: pop esi */
    ebp = POP32_VAL(esp); /* 0x120EC04C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x120EC04D: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_120EC055(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EC055u);

L_120EC055:
    edi = edi; /* 0x120EC055: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EC057: push ebp */
    ebp = esp; /* 0x120EC058: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120EC05A: push esi */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x120EC05B: push dword ptr [ebp + 0x24] */
    esi = ecx; /* 0x120EC05E: mov esi, ecx */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x120EC060: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120EC063: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120EC066: push dword ptr [ebp + 0x18] */
    PUSH32(esp, 0); /* 0x120EC069: push 0 */
    PUSH32(esp, 0x12008AC8u); /* 0x120EC06B: push 0x12008ac8 */
    RECOMP_CALL(sub_120EBEF6); /* 0x120EC070: call 0x120ebef6 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EC075: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EC0AA; /* 0x120EC077: js 0x120ec0aa */
L_120EC079:
    eax = (uint32_t)MEM8(ebp + 0x14); /* 0x120EC079: movzx eax, byte ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x120EC07D: push edi */
    edi = MEM32(ebp + 0x8); /* 0x120EC07E: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x120EC081: push eax */
    PUSH32(esp, 0); /* 0x120EC082: push 0 */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120EC084: push dword ptr [ebp + 0x10] */
    ecx = edi; /* 0x120EC087: mov ecx, edi */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EC089: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_121C0F05); /* 0x120EC08C: call 0x121c0f05 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EC091: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EC0A9; /* 0x120EC093: js 0x120ec0a9 */
L_120EC095:
    eax = MEM32(edi + 0x4); /* 0x120EC095: mov eax, dword ptr [edi + 4] */
    MEM32(esi + 0x22C) = eax; /* 0x120EC098: mov dword ptr [esi + 0x22c], eax */
    eax = MEM32(edi + 0x8); /* 0x120EC09E: mov eax, dword ptr [edi + 8] */
    MEM32(esi + 0x230) = eax; /* 0x120EC0A1: mov dword ptr [esi + 0x230], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EC0A7: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EC0A9:
    edi = POP32_VAL(esp); /* 0x120EC0A9: pop edi */
L_120EC0AA:
    esi = POP32_VAL(esp); /* 0x120EC0AA: pop esi */
    ebp = POP32_VAL(esp); /* 0x120EC0AB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x120EC0AC: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_120EC0B4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EC0B4u);

L_120EC0B4:
    edi = edi; /* 0x120EC0B4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EC0B6: push ebp */
    ebp = esp; /* 0x120EC0B7: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120EC0B9: push esi */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120EC0BA: push dword ptr [ebp + 0x1c] */
    esi = ecx; /* 0x120EC0BD: mov esi, ecx */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120EC0BF: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120EC0C2: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120EC0C5: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 0); /* 0x120EC0C8: push 0 */
    PUSH32(esp, 0x12008AD4u); /* 0x120EC0CA: push 0x12008ad4 */
    RECOMP_CALL(sub_120EBEF6); /* 0x120EC0CF: call 0x120ebef6 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EC0D4: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EC0EC; /* 0x120EC0D6: js 0x120ec0ec */
L_120EC0D8:
    eax = MEM32(ebp + 0x8); /* 0x120EC0D8: mov eax, dword ptr [ebp + 8] */
    MEM32(esi + 0x22C) = eax; /* 0x120EC0DB: mov dword ptr [esi + 0x22c], eax */
    eax = MEM32(ebp + 0xC); /* 0x120EC0E1: mov eax, dword ptr [ebp + 0xc] */
    MEM32(esi + 0x230) = eax; /* 0x120EC0E4: mov dword ptr [esi + 0x230], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EC0EA: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EC0EC:
    esi = POP32_VAL(esp); /* 0x120EC0EC: pop esi */
    ebp = POP32_VAL(esp); /* 0x120EC0ED: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x120EC0EE: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_120EC0F6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EC0F6u);

L_120EC0F6:
    edi = edi; /* 0x120EC0F6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EC0F8: push ebp */
    ebp = esp; /* 0x120EC0F9: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EC0FB: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_121BF388); /* 0x120EC0FE: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120EC103: pop ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EC104: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    ebp = POP32_VAL(esp); /* 0x120EC106: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x120EC107: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_120EC10F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EC10Fu);

L_120EC10F:
    edi = edi; /* 0x120EC10F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EC111: push ebp */
    ebp = esp; /* 0x120EC112: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120EC114: push esi */
    PUSH32(esp, edi); /* 0x120EC115: push edi */
    edi = MEM32(ebp + 0xC); /* 0x120EC116: mov edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120EC119: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x120EC11B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EC127; /* 0x120EC11D: je 0x120ec127 */
L_120EC11F:
    /* cmp edi, 0x7FFFFFFFu */ /* 0x120EC11F: cmp edi, 0x7fffffff */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x7FFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_120EC12C; /* 0x120EC125: jbe 0x120ec12c */
L_120EC127:
    esi = 0x80070057u; /* 0x120EC127: mov esi, 0x80070057 */
L_120EC12C:
    /* test esi, esi */ /* 0x120EC12C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EC162; /* 0x120EC12E: js 0x120ec162 */
L_120EC130:
    PUSH32(esp, ebx); /* 0x120EC130: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x120EC131: mov ebx, dword ptr [ebp + 8] */
    eax = ebp + 0x14; /* 0x120EC134: lea eax, [ebp + 0x14] */
    PUSH32(esp, eax); /* 0x120EC137: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120EC138: push dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120EC13B: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(1);
    edi = edi - 1; /* 0x120EC13D: dec edi */
    _flag_k = FK_DEC;
    PUSH32(esp, edi); /* 0x120EC13E: push edi */
    PUSH32(esp, ebx); /* 0x120EC13F: push ebx */
    RECOMP_CALL(sub_121BED0A); /* 0x120EC140: call 0x121bed0a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x120EC145: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* test eax, eax */ /* 0x120EC148: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EC158; /* 0x120EC14A: js 0x120ec158 */
L_120EC14C:
    /* cmp eax, edi */ /* 0x120EC14C: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120EC158; /* 0x120EC14E: ja 0x120ec158 */
L_120EC150:
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EC161; /* 0x120EC150: jne 0x120ec161 */
L_120EC152:
    _flag_a = (uint32_t)(MEM16(ebx + edi * 2)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    MEM16(ebx + edi * 2) = (uint16_t)(MEM16(ebx + edi * 2) & LO16(esi)); /* 0x120EC152: and word ptr [ebx + edi*2], si */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    goto L_120EC161; /* 0x120EC156: jmp 0x120ec161 */
L_120EC158:
    _flag_a = (uint32_t)(MEM16(ebx + edi * 2)) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    MEM16(ebx + edi * 2) = (uint16_t)(MEM16(ebx + edi * 2) & LO16(esi)); /* 0x120EC158: and word ptr [ebx + edi*2], si */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    esi = 0x8007007Au; /* 0x120EC15C: mov esi, 0x8007007a */
L_120EC161:
    ebx = POP32_VAL(esp); /* 0x120EC161: pop ebx */
L_120EC162:
    edi = POP32_VAL(esp); /* 0x120EC162: pop edi */
    eax = esi; /* 0x120EC163: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120EC165: pop esi */
    ebp = POP32_VAL(esp); /* 0x120EC166: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x120EC167: ret  */
    RECOMP_REGS_OUT();
}

void sub_120EC16D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EC16Du);

L_120EC16D:
    edi = edi; /* 0x120EC16D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EC16F: push ebp */
    ebp = esp; /* 0x120EC170: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x42Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x42Cu; /* 0x120EC172: sub esp, 0x42c */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120EC178: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120EC17D: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120EC17F: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x120EC182: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(ebp + 0x18); /* 0x120EC185: mov ecx, dword ptr [ebp + 0x18] */
    edx = MEM32(ebp + 0x10); /* 0x120EC188: mov edx, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x120EC18B: push ebx */
    PUSH32(esp, esi); /* 0x120EC18C: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120EC18D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x418)) = eax; /* 0x120EC18F: mov dword ptr [ebp - 0x418], eax */
    eax = MEM32(ebp + 0x1C); /* 0x120EC195: mov eax, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)((ebx | 0xFFFFFFFFu)); _flag_b = (uint32_t)((ebx | 0xFFFFFFFFu));
    ebx = ebx | 0xFFFFFFFFu; /* 0x120EC198: or ebx, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x120EC19B: push edi */
    MEM32(ebp + (-0x42C)) = ecx; /* 0x120EC19C: mov dword ptr [ebp - 0x42c], ecx */
    MEM32(ebp + (-0x428)) = eax; /* 0x120EC1A2: mov dword ptr [ebp - 0x428], eax */
    edi = esi; /* 0x120EC1A8: mov edi, esi */
    MEM32(ebp + (-0x41C)) = esi; /* 0x120EC1AA: mov dword ptr [ebp - 0x41c], esi */
    /* test ecx, ecx */ /* 0x120EC1B0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EC267; /* 0x120EC1B2: je 0x120ec267 */
L_120EC1B8:
    /* test eax, eax */ /* 0x120EC1B8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EC267; /* 0x120EC1BA: je 0x120ec267 */
L_120EC1C0:
    ebx = 0x104u; /* 0x120EC1C0: mov ebx, 0x104 */
    PUSH32(esp, ebx); /* 0x120EC1C5: push ebx */
    eax = ebp + (-0x414); /* 0x120EC1C6: lea eax, [ebp - 0x414] */
    PUSH32(esp, eax); /* 0x120EC1CC: push eax */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x120EC1CD: push -1 */
    PUSH32(esp, edx); /* 0x120EC1CF: push edx */
    PUSH32(esp, esi); /* 0x120EC1D0: push esi */
    PUSH32(esp, 0xFDE9u); /* 0x120EC1D1: push 0xfde9 */
    RECOMP_ICALL(MEM32(0x12001110)); /* 0x120EC1D6: call dword ptr [0x12001110] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM16(ebp + (-0x20E))) << 16; _flag_b = (uint32_t)(LO16(esi)) << 16;
    MEM16(ebp + (-0x20E)) = (uint16_t)(MEM16(ebp + (-0x20E)) & LO16(esi)); /* 0x120EC1DC: and word ptr [ebp - 0x20e], si */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    eax = ebp + (-0x414); /* 0x120EC1E3: lea eax, [ebp - 0x414] */
    PUSH32(esp, eax); /* 0x120EC1E9: push eax */
    eax = MEM32(ebp + (-0x418)); /* 0x120EC1EA: mov eax, dword ptr [ebp - 0x418] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 4; /* 0x120EC1F0: add eax, 4 */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x120EC1F3: push eax */
    PUSH32(esp, 0x12008AE4u); /* 0x120EC1F4: push 0x12008ae4 */
    eax = ebp + (-0x20C); /* 0x120EC1F9: lea eax, [ebp - 0x20c] */
    PUSH32(esp, ebx); /* 0x120EC1FF: push ebx */
    PUSH32(esp, eax); /* 0x120EC200: push eax */
    RECOMP_CALL(sub_120EC10F); /* 0x120EC201: call 0x120ec10f */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x14u; /* 0x120EC206: add esp, 0x14 */
    _flag_k = FK_ADD;
    PUSH32(esp, esi); /* 0x120EC209: push esi */
    PUSH32(esp, esi); /* 0x120EC20A: push esi */
    PUSH32(esp, 3); /* 0x120EC20B: push 3 */
    PUSH32(esp, esi); /* 0x120EC20D: push esi */
    PUSH32(esp, 1); /* 0x120EC20E: push 1 */
    PUSH32(esp, 0x80000000u); /* 0x120EC210: push 0x80000000 */
    eax = ebp + (-0x20C); /* 0x120EC215: lea eax, [ebp - 0x20c] */
    PUSH32(esp, eax); /* 0x120EC21B: push eax */
    RECOMP_ICALL(MEM32(0x120010C8)); /* 0x120EC21C: call dword ptr [0x120010c8] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x120EC222: mov ebx, eax */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x120EC224: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EC2AD; /* 0x120EC227: jne 0x120ec2ad */
L_120EC22D:
    eax = ebp + (-0x418); /* 0x120EC22D: lea eax, [ebp - 0x418] */
    PUSH32(esp, eax); /* 0x120EC233: push eax */
    eax = ebp + (-0x20C); /* 0x120EC234: lea eax, [ebp - 0x20c] */
    PUSH32(esp, eax); /* 0x120EC23A: push eax */
    PUSH32(esp, 0x104u); /* 0x120EC23B: push 0x104 */
    eax = ebp + (-0x414); /* 0x120EC240: lea eax, [ebp - 0x414] */
    PUSH32(esp, eax); /* 0x120EC246: push eax */
    RECOMP_ICALL(MEM32(0x120010D0)); /* 0x120EC247: call dword ptr [0x120010d0] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EC24D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EC267; /* 0x120EC24F: je 0x120ec267 */
L_120EC251:
    /* cmp eax, 0x104u */ /* 0x120EC251: cmp eax, 0x104 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x104u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_120EC267; /* 0x120EC256: ja 0x120ec267 */
L_120EC258:
    /* cmp MEM32(ebp + (-0x418)), esi */ /* 0x120EC258: cmp dword ptr [ebp - 0x418], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x418))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EC28D; /* 0x120EC25E: jne 0x120ec28d */
L_120EC260:
    PUSH32(esp, ebx); /* 0x120EC260: push ebx */
    RECOMP_ICALL(MEM32(0x120010F0)); /* 0x120EC261: call dword ptr [0x120010f0] */
    RECOMP_FLAGS_IN();
L_120EC267:
    esi = 0x80004005u; /* 0x120EC267: mov esi, 0x80004005 */
L_120EC26C:
    PUSH32(esp, edi); /* 0x120EC26C: push edi */
    RECOMP_CALL(sub_121BF388); /* 0x120EC26D: call 0x121bf388 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120EC272: pop ecx */
    PUSH32(esp, ebx); /* 0x120EC273: push ebx */
    RECOMP_ICALL(MEM32(0x120010F0)); /* 0x120EC274: call dword ptr [0x120010f0] */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x120EC27A: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x120EC27D: pop edi */
    eax = esi; /* 0x120EC27E: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120EC280: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120EC281: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x120EC283: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x120EC284: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120EC289: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x120EC28A: ret 0x18 */
L_120EC28D:
    PUSH32(esp, esi); /* 0x120EC28D: push esi */
    PUSH32(esp, esi); /* 0x120EC28E: push esi */
    PUSH32(esp, 3); /* 0x120EC28F: push 3 */
    PUSH32(esp, esi); /* 0x120EC291: push esi */
    PUSH32(esp, 1); /* 0x120EC292: push 1 */
    PUSH32(esp, 0x80000000u); /* 0x120EC294: push 0x80000000 */
    eax = ebp + (-0x20C); /* 0x120EC299: lea eax, [ebp - 0x20c] */
    PUSH32(esp, eax); /* 0x120EC29F: push eax */
    RECOMP_ICALL(MEM32(0x120010C8)); /* 0x120EC2A0: call dword ptr [0x120010c8] */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x120EC2A6: mov ebx, eax */
    /* cmp ebx, 0xFFFFFFFFu */ /* 0x120EC2A8: cmp ebx, -1 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EC267; /* 0x120EC2AB: je 0x120ec267 */
L_120EC2AD:
    eax = ebp + (-0x424); /* 0x120EC2AD: lea eax, [ebp - 0x424] */
    PUSH32(esp, eax); /* 0x120EC2B3: push eax */
    PUSH32(esp, ebx); /* 0x120EC2B4: push ebx */
    RECOMP_ICALL(MEM32(0x120010CC)); /* 0x120EC2B5: call dword ptr [0x120010cc] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EC2BB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EC267; /* 0x120EC2BD: je 0x120ec267 */
L_120EC2BF:
    /* cmp MEM32(ebp + (-0x420)), esi */ /* 0x120EC2BF: cmp dword ptr [ebp - 0x420], esi */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x420))); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EC267; /* 0x120EC2C5: jne 0x120ec267 */
L_120EC2C7:
    PUSH32(esp, 0x120014BCu); /* 0x120EC2C7: push 0x120014bc */
    PUSH32(esp, MEM32(ebp + (-0x424))); /* 0x120EC2CC: push dword ptr [ebp - 0x424] */
    RECOMP_CALL(sub_12018970); /* 0x120EC2D2: call 0x12018970 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x120EC2D7: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x120EC2D9: pop ecx */
    ecx = POP32_VAL(esp); /* 0x120EC2DA: pop ecx */
    /* test edi, edi */ /* 0x120EC2DB: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EC2E6; /* 0x120EC2DD: jne 0x120ec2e6 */
L_120EC2DF:
    esi = 0x8007000Eu; /* 0x120EC2DF: mov esi, 0x8007000e */
    RECOMP_BACKEDGE();
    goto L_120EC26C; /* 0x120EC2E4: jmp 0x120ec26c */
L_120EC2E6:
    PUSH32(esp, esi); /* 0x120EC2E6: push esi */
    eax = ebp + (-0x41C); /* 0x120EC2E7: lea eax, [ebp - 0x41c] */
    PUSH32(esp, eax); /* 0x120EC2ED: push eax */
    PUSH32(esp, MEM32(ebp + (-0x424))); /* 0x120EC2EE: push dword ptr [ebp - 0x424] */
    PUSH32(esp, edi); /* 0x120EC2F4: push edi */
    PUSH32(esp, ebx); /* 0x120EC2F5: push ebx */
    RECOMP_ICALL(MEM32(0x120010EC)); /* 0x120EC2F6: call dword ptr [0x120010ec] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EC2FC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EC267; /* 0x120EC2FE: je 0x120ec267 */
L_120EC304:
    eax = MEM32(ebp + (-0x424)); /* 0x120EC304: mov eax, dword ptr [ebp - 0x424] */
    /* cmp MEM32(ebp + (-0x41C)), eax */ /* 0x120EC30A: cmp dword ptr [ebp - 0x41c], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x41C))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_120EC267; /* 0x120EC310: jne 0x120ec267 */
L_120EC316:
    ecx = MEM32(ebp + (-0x42C)); /* 0x120EC316: mov ecx, dword ptr [ebp - 0x42c] */
    MEM32(ecx) = edi; /* 0x120EC31C: mov dword ptr [ecx], edi */
    ecx = MEM32(ebp + (-0x428)); /* 0x120EC31E: mov ecx, dword ptr [ebp - 0x428] */
    MEM32(ecx) = eax; /* 0x120EC324: mov dword ptr [ecx], eax */
    edi = esi; /* 0x120EC326: mov edi, esi */
    RECOMP_BACKEDGE();
    goto L_120EC26C; /* 0x120EC328: jmp 0x120ec26c */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_120EC332(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EC332u);

L_120EC332:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120EC332: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = eax; /* 0x120EC334: mov dword ptr [ecx], eax */
    MEM32(ecx + 0x8) = eax; /* 0x120EC336: mov dword ptr [ecx + 8], eax */
    MEM32(ecx + 0x4) = 0x12008AC0u; /* 0x120EC339: mov dword ptr [ecx + 4], 0x12008ac0 */
    _flag_a = (uint32_t)(MEM16(ecx + 0x10)) << 16; _flag_b = (uint32_t)(LO16(eax)) << 16;
    MEM16(ecx + 0x10) = (uint16_t)(MEM16(ecx + 0x10) & LO16(eax)); /* 0x120EC340: and word ptr [ecx + 0x10], ax */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    MEM32(ecx + 0xC) = 0x12008ADCu; /* 0x120EC344: mov dword ptr [ecx + 0xc], 0x12008adc */
    MEM32(ecx + 0x218) = eax; /* 0x120EC34B: mov dword ptr [ecx + 0x218], eax */
    MEM32(ecx + 0x21C) = eax; /* 0x120EC351: mov dword ptr [ecx + 0x21c], eax */
    MEM32(ecx + 0x220) = eax; /* 0x120EC357: mov dword ptr [ecx + 0x220], eax */
    MEM32(ecx + 0x224) = eax; /* 0x120EC35D: mov dword ptr [ecx + 0x224], eax */
    MEM32(ecx + 0x228) = eax; /* 0x120EC363: mov dword ptr [ecx + 0x228], eax */
    MEM32(ecx + 0x22C) = eax; /* 0x120EC369: mov dword ptr [ecx + 0x22c], eax */
    MEM32(ecx + 0x230) = eax; /* 0x120EC36F: mov dword ptr [ecx + 0x230], eax */
    MEM32(ecx + 0x234) = eax; /* 0x120EC375: mov dword ptr [ecx + 0x234], eax */
    MEM8(ecx + 0x23C) = (uint8_t)(LO8(eax)); /* 0x120EC37B: mov byte ptr [ecx + 0x23c], al */
    MEM32(ecx + 0x238) = 0x12008AF0u; /* 0x120EC381: mov dword ptr [ecx + 0x238], 0x12008af0 */
    eax = ecx; /* 0x120EC38B: mov eax, ecx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x120EC38D: ret  */
    RECOMP_REGS_OUT();
}

void sub_120EC393(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EC393u);

L_120EC393:
    edi = edi; /* 0x120EC393: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EC395: push ebp */
    ebp = esp; /* 0x120EC396: mov ebp, esp */
    PUSH32(esp, esi); /* 0x120EC398: push esi */
    PUSH32(esp, edi); /* 0x120EC399: push edi */
    edi = MEM32(ebp + 0x8); /* 0x120EC39A: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120EC39D: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x120EC39F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EC3AA; /* 0x120EC3A1: jne 0x120ec3aa */
L_120EC3A3:
    esi = 0x8876086Cu; /* 0x120EC3A3: mov esi, 0x8876086c */
    goto L_120EC3CE; /* 0x120EC3A8: jmp 0x120ec3ce */
L_120EC3AA:
    PUSH32(esp, 0x28u); /* 0x120EC3AA: push 0x28 */
    RECOMP_CALL(sub_121BF394); /* 0x120EC3AC: call 0x121bf394 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120EC3B1: pop ecx */
    /* test eax, eax */ /* 0x120EC3B2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EC3BF; /* 0x120EC3B4: je 0x120ec3bf */
L_120EC3B6:
    ecx = eax; /* 0x120EC3B6: mov ecx, eax */
    RECOMP_CALL(sub_120EFA2A); /* 0x120EC3B8: call 0x120efa2a */
    RECOMP_FLAGS_IN();
    goto L_120EC3C1; /* 0x120EC3BD: jmp 0x120ec3c1 */
L_120EC3BF:
    eax = esi; /* 0x120EC3BF: mov eax, esi */
L_120EC3C1:
    /* test eax, eax */ /* 0x120EC3C1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EC3CC; /* 0x120EC3C3: jne 0x120ec3cc */
L_120EC3C5:
    esi = 0x8007000Eu; /* 0x120EC3C5: mov esi, 0x8007000e */
    goto L_120EC3CE; /* 0x120EC3CA: jmp 0x120ec3ce */
L_120EC3CC:
    MEM32(edi) = eax; /* 0x120EC3CC: mov dword ptr [edi], eax */
L_120EC3CE:
    edi = POP32_VAL(esp); /* 0x120EC3CE: pop edi */
    eax = esi; /* 0x120EC3CF: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120EC3D1: pop esi */
    ebp = POP32_VAL(esp); /* 0x120EC3D2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x120EC3D3: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_120EC3DB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EC3DBu);

L_120EC3DB:
    edi = edi; /* 0x120EC3DB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EC3DD: push ebp */
    ebp = esp; /* 0x120EC3DE: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x260u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x260u; /* 0x120EC3E0: sub esp, 0x260 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120EC3E6: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120EC3EB: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120EC3ED: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x120EC3F0: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x24C)) = eax; /* 0x120EC3F3: mov dword ptr [ebp - 0x24c], eax */
    eax = MEM32(ebp + 0xC); /* 0x120EC3F9: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x120EC3FC: push ebx */
    MEM32(ebp + (-0x248)) = eax; /* 0x120EC3FD: mov dword ptr [ebp - 0x248], eax */
    eax = MEM32(ebp + 0x10); /* 0x120EC403: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x120EC406: push esi */
    esi = MEM32(ebp + 0x18); /* 0x120EC407: mov esi, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x258)) = eax; /* 0x120EC40A: mov dword ptr [ebp - 0x258], eax */
    eax = MEM32(ebp + 0x1C); /* 0x120EC410: mov eax, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120EC413: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x25C))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0x25C)) = MEM32(ebp + (-0x25C)) & ebx; /* 0x120EC415: and dword ptr [ebp - 0x25c], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x120EC41B: push edi */
    ecx = ebp + (-0x244); /* 0x120EC41C: lea ecx, [ebp - 0x244] */
    MEM32(ebp + (-0x254)) = esi; /* 0x120EC422: mov dword ptr [ebp - 0x254], esi */
    MEM32(ebp + (-0x250)) = eax; /* 0x120EC428: mov dword ptr [ebp - 0x250], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120EC42E: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x260)) = ebx; /* 0x120EC430: mov dword ptr [ebp - 0x260], ebx */
    RECOMP_CALL(sub_120EC332); /* 0x120EC436: call 0x120ec332 */
    RECOMP_FLAGS_IN();
    /* test MEM32(ebp + 0x14), 0x00010000u */ /* 0x120EC43B: test dword ptr [ebp + 0x14], 0x10000 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0x00010000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EC4A7; /* 0x120EC442: je 0x120ec4a7 */
L_120EC444:
    edi = 0x121D9AF8u; /* 0x120EC444: mov edi, 0x121d9af8 */
    ecx = edi; /* 0x120EC449: mov ecx, edi */
    RECOMP_CALL(sub_120188AB); /* 0x120EC44B: call 0x120188ab */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120EC450: mov esi, eax */
    /* test esi, esi */ /* 0x120EC452: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EC5DC; /* 0x120EC454: js 0x120ec5dc */
L_120EC45A:
    PUSH32(esp, 0x12008B0Cu); /* 0x120EC45A: push 0x12008b0c */
    ecx = edi; /* 0x120EC45F: mov ecx, edi */
    RECOMP_CALL(sub_120188D5); /* 0x120EC461: call 0x120188d5 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x120EC466: mov ecx, eax */
    /* test ecx, ecx */ /* 0x120EC468: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EC476; /* 0x120EC46A: jne 0x120ec476 */
L_120EC46C:
    esi = 0x80004005u; /* 0x120EC46C: mov esi, 0x80004005 */
    goto L_120EC5DC; /* 0x120EC471: jmp 0x120ec5dc */
L_120EC476:
    PUSH32(esp, MEM32(ebp + (-0x250))); /* 0x120EC476: push dword ptr [ebp - 0x250] */
    eax = MEM32(ebp + (-0x254)); /* 0x120EC47C: mov eax, dword ptr [ebp - 0x254] */
    PUSH32(esp, eax); /* 0x120EC482: push eax */
    eax = MEM32(ebp + 0x14); /* 0x120EC483: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFEFFFFu);
    eax = eax & 0xFFFEFFFFu; /* 0x120EC486: and eax, 0xfffeffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x120EC48B: push eax */
    PUSH32(esp, MEM32(ebp + (-0x258))); /* 0x120EC48C: push dword ptr [ebp - 0x258] */
    PUSH32(esp, MEM32(ebp + (-0x248))); /* 0x120EC492: push dword ptr [ebp - 0x248] */
    PUSH32(esp, MEM32(ebp + (-0x24C))); /* 0x120EC498: push dword ptr [ebp - 0x24c] */
    RECOMP_ICALL(ecx); /* 0x120EC49E: call ecx */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120EC4A0: mov esi, eax */
    goto L_120EC5DC; /* 0x120EC4A2: jmp 0x120ec5dc */
L_120EC4A7:
    /* test esi, esi */ /* 0x120EC4A7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EC4AD; /* 0x120EC4A9: je 0x120ec4ad */
L_120EC4AB:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ebx);
    MEM32(esi) = MEM32(esi) & ebx; /* 0x120EC4AB: and dword ptr [esi], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EC4AD:
    eax = MEM32(ebp + (-0x250)); /* 0x120EC4AD: mov eax, dword ptr [ebp - 0x250] */
    /* test eax, eax */ /* 0x120EC4B3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EC4B9; /* 0x120EC4B5: je 0x120ec4b9 */
L_120EC4B7:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ebx);
    MEM32(eax) = MEM32(eax) & ebx; /* 0x120EC4B7: and dword ptr [eax], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EC4B9:
    /* cmp MEM32(ebp + (-0x24C)), ebx */ /* 0x120EC4B9: cmp dword ptr [ebp - 0x24c], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24C))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EC5CA; /* 0x120EC4BF: je 0x120ec5ca */
L_120EC4C5:
    /* test esi, esi */ /* 0x120EC4C5: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EC5CA; /* 0x120EC4C7: je 0x120ec5ca */
L_120EC4CD:
    PUSH32(esp, 0x7Cu); /* 0x120EC4CD: push 0x7c */
    RECOMP_CALL(sub_121BF394); /* 0x120EC4CF: call 0x121bf394 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120EC4D4: pop ecx */
    /* test eax, eax */ /* 0x120EC4D5: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EC4E4; /* 0x120EC4D7: je 0x120ec4e4 */
L_120EC4D9:
    ecx = eax; /* 0x120EC4D9: mov ecx, eax */
    RECOMP_CALL(sub_120F1826); /* 0x120EC4DB: call 0x120f1826 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x120EC4E0: mov edi, eax */
    goto L_120EC4E6; /* 0x120EC4E2: jmp 0x120ec4e6 */
L_120EC4E4:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120EC4E4: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EC4E6:
    /* test edi, edi */ /* 0x120EC4E6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EC4F4; /* 0x120EC4E8: jne 0x120ec4f4 */
L_120EC4EA:
    esi = 0x8007000Eu; /* 0x120EC4EA: mov esi, 0x8007000e */
    goto L_120EC5DC; /* 0x120EC4EF: jmp 0x120ec5dc */
L_120EC4F4:
    PUSH32(esp, MEM32(ebp + (-0x250))); /* 0x120EC4F4: push dword ptr [ebp - 0x250] */
    ecx = ebp + (-0x244); /* 0x120EC4FA: lea ecx, [ebp - 0x244] */
    PUSH32(esp, 0); /* 0x120EC500: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x258))); /* 0x120EC502: push dword ptr [ebp - 0x258] */
    PUSH32(esp, MEM32(ebp + (-0x248))); /* 0x120EC508: push dword ptr [ebp - 0x248] */
    PUSH32(esp, 0); /* 0x120EC50E: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x24C))); /* 0x120EC510: push dword ptr [ebp - 0x24c] */
    RECOMP_CALL(sub_120EBFE3); /* 0x120EC516: call 0x120ebfe3 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120EC51B: mov esi, eax */
    /* test esi, esi */ /* 0x120EC51D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EC5CF; /* 0x120EC51F: js 0x120ec5cf */
L_120EC525:
    ecx = ebp + (-0x260); /* 0x120EC525: lea ecx, [ebp - 0x260] */
    RECOMP_CALL(sub_120E4EC4); /* 0x120EC52B: call 0x120e4ec4 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x260)); /* 0x120EC530: mov ebx, dword ptr [ebp - 0x260] */
    esi = eax; /* 0x120EC536: mov esi, eax */
    /* test esi, esi */ /* 0x120EC538: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EC544; /* 0x120EC53A: je 0x120ec544 */
L_120EC53C:
    eax = MEM32(ebp + (-0x25C)); /* 0x120EC53C: mov eax, dword ptr [ebp - 0x25c] */
    goto L_120EC562; /* 0x120EC542: jmp 0x120ec562 */
L_120EC544:
    PUSH32(esp, 0x12008610u); /* 0x120EC544: push 0x12008610 */
    PUSH32(esp, ebx); /* 0x120EC549: push ebx */
    RECOMP_ICALL(MEM32(0x1200112C)); /* 0x120EC54A: call dword ptr [0x1200112c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120EC550: mov esi, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x120EC552: neg esi */
    _flag_k = FK_CMP;
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x120EC554: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x7FFFBFFBu);
    esi = esi & 0x7FFFBFFBu; /* 0x120EC556: and esi, 0x7fffbffb */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x80004005u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x80004005u; /* 0x120EC55C: add esi, 0x80004005 */
    _flag_k = FK_ADD;
L_120EC562:
    MEM32(ebp + (-0x248)) = eax; /* 0x120EC562: mov dword ptr [ebp - 0x248], eax */
    /* test esi, esi */ /* 0x120EC568: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EC5CF; /* 0x120EC56A: js 0x120ec5cf */
L_120EC56C:
    esi = MEM32(ebp + (-0x2C)); /* 0x120EC56C: mov esi, dword ptr [ebp - 0x2c] */
    ecx = ebp + (-0x244); /* 0x120EC56F: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBD18); /* 0x120EC575: call 0x120ebd18 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x24); /* 0x120EC57A: lea ecx, [ebp - 0x24] */
    PUSH32(esp, ecx); /* 0x120EC57D: push ecx */
    PUSH32(esp, edi); /* 0x120EC57E: push edi */
    PUSH32(esp, 0); /* 0x120EC57F: push 0 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120EC581: push dword ptr [ebp + 0x14] */
    PUSH32(esp, 0x12008B00u); /* 0x120EC584: push 0x12008b00 */
    PUSH32(esp, 0); /* 0x120EC589: push 0 */
    PUSH32(esp, esi); /* 0x120EC58B: push esi */
    PUSH32(esp, eax); /* 0x120EC58C: push eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x120EC58D: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x120EC590: push dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x120EC593: push dword ptr [ebp - 0x18] */
    RECOMP_ICALL(MEM32(ebp + (-0x248))); /* 0x120EC596: call dword ptr [ebp - 0x248] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x120EC59C: push 0 */
    PUSH32(esp, eax); /* 0x120EC59E: push eax */
    ecx = ebp + (-0x244); /* 0x120EC59F: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBDEC); /* 0x120EC5A5: call 0x120ebdec */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120EC5AA: mov esi, eax */
    /* test esi, esi */ /* 0x120EC5AC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EC5CF; /* 0x120EC5AE: js 0x120ec5cf */
L_120EC5B0:
    eax = ebx; /* 0x120EC5B0: mov eax, ebx */
    MEM32(edi + 0x78) = eax; /* 0x120EC5B2: mov dword ptr [edi + 0x78], eax */
    eax = MEM32(ebp + (-0x254)); /* 0x120EC5B5: mov eax, dword ptr [ebp - 0x254] */
    ecx = edi + 0x6C; /* 0x120EC5BB: lea ecx, [edi + 0x6c] */
    MEM32(eax) = ecx; /* 0x120EC5BE: mov dword ptr [eax], ecx */
    eax = MEM32(ecx); /* 0x120EC5C0: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120EC5C2: push ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120EC5C3: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x120EC5C5: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    goto L_120EC5CF; /* 0x120EC5C8: jmp 0x120ec5cf */
L_120EC5CA:
    esi = 0x8876086Cu; /* 0x120EC5CA: mov esi, 0x8876086c */
L_120EC5CF:
    /* test edi, edi */ /* 0x120EC5CF: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EC5DC; /* 0x120EC5D1: je 0x120ec5dc */
L_120EC5D3:
    eax = edi + 0x6C; /* 0x120EC5D3: lea eax, [edi + 0x6c] */
    ecx = MEM32(eax); /* 0x120EC5D6: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120EC5D8: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x120EC5D9: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_120EC5DC:
    ecx = ebp + (-0x244); /* 0x120EC5DC: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBD79); /* 0x120EC5E2: call 0x120ebd79 */
    RECOMP_FLAGS_IN();
    /* test ebx, ebx */ /* 0x120EC5E7: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EC5F2; /* 0x120EC5E9: je 0x120ec5f2 */
L_120EC5EB:
    PUSH32(esp, ebx); /* 0x120EC5EB: push ebx */
    RECOMP_ICALL(MEM32(0x1200111C)); /* 0x120EC5EC: call dword ptr [0x1200111c] */
    RECOMP_FLAGS_IN();
L_120EC5F2:
    ecx = MEM32(ebp + (-0x4)); /* 0x120EC5F2: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x120EC5F5: pop edi */
    eax = esi; /* 0x120EC5F6: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120EC5F8: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120EC5F9: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x120EC5FB: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x120EC5FC: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120EC601: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x120EC602: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_120EC60A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EC60Au);

L_120EC60A:
    edi = edi; /* 0x120EC60A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EC60C: push ebp */
    ebp = esp; /* 0x120EC60D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x260u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x260u; /* 0x120EC60F: sub esp, 0x260 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120EC615: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120EC61A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120EC61C: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x120EC61F: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x24C)) = eax; /* 0x120EC622: mov dword ptr [ebp - 0x24c], eax */
    eax = MEM32(ebp + 0xC); /* 0x120EC628: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x120EC62B: push ebx */
    MEM32(ebp + (-0x248)) = eax; /* 0x120EC62C: mov dword ptr [ebp - 0x248], eax */
    eax = MEM32(ebp + 0x10); /* 0x120EC632: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x120EC635: push esi */
    esi = MEM32(ebp + 0x18); /* 0x120EC636: mov esi, dword ptr [ebp + 0x18] */
    MEM32(ebp + (-0x258)) = eax; /* 0x120EC639: mov dword ptr [ebp - 0x258], eax */
    eax = MEM32(ebp + 0x1C); /* 0x120EC63F: mov eax, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120EC642: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x25C))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0x25C)) = MEM32(ebp + (-0x25C)) & ebx; /* 0x120EC644: and dword ptr [ebp - 0x25c], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x120EC64A: push edi */
    ecx = ebp + (-0x244); /* 0x120EC64B: lea ecx, [ebp - 0x244] */
    MEM32(ebp + (-0x254)) = esi; /* 0x120EC651: mov dword ptr [ebp - 0x254], esi */
    MEM32(ebp + (-0x250)) = eax; /* 0x120EC657: mov dword ptr [ebp - 0x250], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120EC65D: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x260)) = ebx; /* 0x120EC65F: mov dword ptr [ebp - 0x260], ebx */
    RECOMP_CALL(sub_120EC332); /* 0x120EC665: call 0x120ec332 */
    RECOMP_FLAGS_IN();
    /* test MEM32(ebp + 0x14), 0x00010000u */ /* 0x120EC66A: test dword ptr [ebp + 0x14], 0x10000 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0x00010000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EC6D6; /* 0x120EC671: je 0x120ec6d6 */
L_120EC673:
    edi = 0x121D9AF8u; /* 0x120EC673: mov edi, 0x121d9af8 */
    ecx = edi; /* 0x120EC678: mov ecx, edi */
    RECOMP_CALL(sub_120188AB); /* 0x120EC67A: call 0x120188ab */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120EC67F: mov esi, eax */
    /* test esi, esi */ /* 0x120EC681: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EC80B; /* 0x120EC683: js 0x120ec80b */
L_120EC689:
    PUSH32(esp, 0x12008B30u); /* 0x120EC689: push 0x12008b30 */
    ecx = edi; /* 0x120EC68E: mov ecx, edi */
    RECOMP_CALL(sub_120188D5); /* 0x120EC690: call 0x120188d5 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x120EC695: mov ecx, eax */
    /* test ecx, ecx */ /* 0x120EC697: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EC6A5; /* 0x120EC699: jne 0x120ec6a5 */
L_120EC69B:
    esi = 0x80004005u; /* 0x120EC69B: mov esi, 0x80004005 */
    goto L_120EC80B; /* 0x120EC6A0: jmp 0x120ec80b */
L_120EC6A5:
    PUSH32(esp, MEM32(ebp + (-0x250))); /* 0x120EC6A5: push dword ptr [ebp - 0x250] */
    eax = MEM32(ebp + (-0x254)); /* 0x120EC6AB: mov eax, dword ptr [ebp - 0x254] */
    PUSH32(esp, eax); /* 0x120EC6B1: push eax */
    eax = MEM32(ebp + 0x14); /* 0x120EC6B2: mov eax, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFEFFFFu);
    eax = eax & 0xFFFEFFFFu; /* 0x120EC6B5: and eax, 0xfffeffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x120EC6BA: push eax */
    PUSH32(esp, MEM32(ebp + (-0x258))); /* 0x120EC6BB: push dword ptr [ebp - 0x258] */
    PUSH32(esp, MEM32(ebp + (-0x248))); /* 0x120EC6C1: push dword ptr [ebp - 0x248] */
    PUSH32(esp, MEM32(ebp + (-0x24C))); /* 0x120EC6C7: push dword ptr [ebp - 0x24c] */
    RECOMP_ICALL(ecx); /* 0x120EC6CD: call ecx */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120EC6CF: mov esi, eax */
    goto L_120EC80B; /* 0x120EC6D1: jmp 0x120ec80b */
L_120EC6D6:
    /* test esi, esi */ /* 0x120EC6D6: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EC6DC; /* 0x120EC6D8: je 0x120ec6dc */
L_120EC6DA:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ebx);
    MEM32(esi) = MEM32(esi) & ebx; /* 0x120EC6DA: and dword ptr [esi], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EC6DC:
    eax = MEM32(ebp + (-0x250)); /* 0x120EC6DC: mov eax, dword ptr [ebp - 0x250] */
    /* test eax, eax */ /* 0x120EC6E2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EC6E8; /* 0x120EC6E4: je 0x120ec6e8 */
L_120EC6E6:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ebx);
    MEM32(eax) = MEM32(eax) & ebx; /* 0x120EC6E6: and dword ptr [eax], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EC6E8:
    /* cmp MEM32(ebp + (-0x24C)), ebx */ /* 0x120EC6E8: cmp dword ptr [ebp - 0x24c], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24C))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EC7F9; /* 0x120EC6EE: je 0x120ec7f9 */
L_120EC6F4:
    /* test esi, esi */ /* 0x120EC6F4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EC7F9; /* 0x120EC6F6: je 0x120ec7f9 */
L_120EC6FC:
    PUSH32(esp, 0x7Cu); /* 0x120EC6FC: push 0x7c */
    RECOMP_CALL(sub_121BF394); /* 0x120EC6FE: call 0x121bf394 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120EC703: pop ecx */
    /* test eax, eax */ /* 0x120EC704: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EC713; /* 0x120EC706: je 0x120ec713 */
L_120EC708:
    ecx = eax; /* 0x120EC708: mov ecx, eax */
    RECOMP_CALL(sub_120F1826); /* 0x120EC70A: call 0x120f1826 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x120EC70F: mov edi, eax */
    goto L_120EC715; /* 0x120EC711: jmp 0x120ec715 */
L_120EC713:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120EC713: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EC715:
    /* test edi, edi */ /* 0x120EC715: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EC723; /* 0x120EC717: jne 0x120ec723 */
L_120EC719:
    esi = 0x8007000Eu; /* 0x120EC719: mov esi, 0x8007000e */
    goto L_120EC80B; /* 0x120EC71E: jmp 0x120ec80b */
L_120EC723:
    PUSH32(esp, MEM32(ebp + (-0x250))); /* 0x120EC723: push dword ptr [ebp - 0x250] */
    ecx = ebp + (-0x244); /* 0x120EC729: lea ecx, [ebp - 0x244] */
    PUSH32(esp, 0); /* 0x120EC72F: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x258))); /* 0x120EC731: push dword ptr [ebp - 0x258] */
    PUSH32(esp, MEM32(ebp + (-0x248))); /* 0x120EC737: push dword ptr [ebp - 0x248] */
    PUSH32(esp, 1); /* 0x120EC73D: push 1 */
    PUSH32(esp, MEM32(ebp + (-0x24C))); /* 0x120EC73F: push dword ptr [ebp - 0x24c] */
    RECOMP_CALL(sub_120EBFE3); /* 0x120EC745: call 0x120ebfe3 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120EC74A: mov esi, eax */
    /* test esi, esi */ /* 0x120EC74C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EC7FE; /* 0x120EC74E: js 0x120ec7fe */
L_120EC754:
    ecx = ebp + (-0x260); /* 0x120EC754: lea ecx, [ebp - 0x260] */
    RECOMP_CALL(sub_120E4EC4); /* 0x120EC75A: call 0x120e4ec4 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x260)); /* 0x120EC75F: mov ebx, dword ptr [ebp - 0x260] */
    esi = eax; /* 0x120EC765: mov esi, eax */
    /* test esi, esi */ /* 0x120EC767: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EC773; /* 0x120EC769: je 0x120ec773 */
L_120EC76B:
    eax = MEM32(ebp + (-0x25C)); /* 0x120EC76B: mov eax, dword ptr [ebp - 0x25c] */
    goto L_120EC791; /* 0x120EC771: jmp 0x120ec791 */
L_120EC773:
    PUSH32(esp, 0x12008610u); /* 0x120EC773: push 0x12008610 */
    PUSH32(esp, ebx); /* 0x120EC778: push ebx */
    RECOMP_ICALL(MEM32(0x1200112C)); /* 0x120EC779: call dword ptr [0x1200112c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120EC77F: mov esi, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x120EC781: neg esi */
    _flag_k = FK_CMP;
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x120EC783: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x7FFFBFFBu);
    esi = esi & 0x7FFFBFFBu; /* 0x120EC785: and esi, 0x7fffbffb */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x80004005u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x80004005u; /* 0x120EC78B: add esi, 0x80004005 */
    _flag_k = FK_ADD;
L_120EC791:
    MEM32(ebp + (-0x248)) = eax; /* 0x120EC791: mov dword ptr [ebp - 0x248], eax */
    /* test esi, esi */ /* 0x120EC797: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EC7FE; /* 0x120EC799: js 0x120ec7fe */
L_120EC79B:
    esi = MEM32(ebp + (-0x2C)); /* 0x120EC79B: mov esi, dword ptr [ebp - 0x2c] */
    ecx = ebp + (-0x244); /* 0x120EC79E: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBD18); /* 0x120EC7A4: call 0x120ebd18 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x24); /* 0x120EC7A9: lea ecx, [ebp - 0x24] */
    PUSH32(esp, ecx); /* 0x120EC7AC: push ecx */
    PUSH32(esp, edi); /* 0x120EC7AD: push edi */
    PUSH32(esp, 0); /* 0x120EC7AE: push 0 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120EC7B0: push dword ptr [ebp + 0x14] */
    PUSH32(esp, 0x12008B00u); /* 0x120EC7B3: push 0x12008b00 */
    PUSH32(esp, 0); /* 0x120EC7B8: push 0 */
    PUSH32(esp, esi); /* 0x120EC7BA: push esi */
    PUSH32(esp, eax); /* 0x120EC7BB: push eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x120EC7BC: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x120EC7BF: push dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x120EC7C2: push dword ptr [ebp - 0x18] */
    RECOMP_ICALL(MEM32(ebp + (-0x248))); /* 0x120EC7C5: call dword ptr [ebp - 0x248] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x120EC7CB: push 0 */
    PUSH32(esp, eax); /* 0x120EC7CD: push eax */
    ecx = ebp + (-0x244); /* 0x120EC7CE: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBDEC); /* 0x120EC7D4: call 0x120ebdec */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120EC7D9: mov esi, eax */
    /* test esi, esi */ /* 0x120EC7DB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EC7FE; /* 0x120EC7DD: js 0x120ec7fe */
L_120EC7DF:
    eax = ebx; /* 0x120EC7DF: mov eax, ebx */
    MEM32(edi + 0x78) = eax; /* 0x120EC7E1: mov dword ptr [edi + 0x78], eax */
    eax = MEM32(ebp + (-0x254)); /* 0x120EC7E4: mov eax, dword ptr [ebp - 0x254] */
    ecx = edi + 0x6C; /* 0x120EC7EA: lea ecx, [edi + 0x6c] */
    MEM32(eax) = ecx; /* 0x120EC7ED: mov dword ptr [eax], ecx */
    eax = MEM32(ecx); /* 0x120EC7EF: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120EC7F1: push ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120EC7F2: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x120EC7F4: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    goto L_120EC7FE; /* 0x120EC7F7: jmp 0x120ec7fe */
L_120EC7F9:
    esi = 0x8876086Cu; /* 0x120EC7F9: mov esi, 0x8876086c */
L_120EC7FE:
    /* test edi, edi */ /* 0x120EC7FE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EC80B; /* 0x120EC800: je 0x120ec80b */
L_120EC802:
    eax = edi + 0x6C; /* 0x120EC802: lea eax, [edi + 0x6c] */
    ecx = MEM32(eax); /* 0x120EC805: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120EC807: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x120EC808: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_120EC80B:
    ecx = ebp + (-0x244); /* 0x120EC80B: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBD79); /* 0x120EC811: call 0x120ebd79 */
    RECOMP_FLAGS_IN();
    /* test ebx, ebx */ /* 0x120EC816: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EC821; /* 0x120EC818: je 0x120ec821 */
L_120EC81A:
    PUSH32(esp, ebx); /* 0x120EC81A: push ebx */
    RECOMP_ICALL(MEM32(0x1200111C)); /* 0x120EC81B: call dword ptr [0x1200111c] */
    RECOMP_FLAGS_IN();
L_120EC821:
    ecx = MEM32(ebp + (-0x4)); /* 0x120EC821: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x120EC824: pop edi */
    eax = esi; /* 0x120EC825: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120EC827: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120EC828: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x120EC82A: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x120EC82B: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120EC830: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x120EC831: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_120EC839(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EC839u);

L_120EC839:
    edi = edi; /* 0x120EC839: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EC83B: push ebp */
    ebp = esp; /* 0x120EC83C: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x270u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x270u; /* 0x120EC83E: sub esp, 0x270 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120EC844: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120EC849: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120EC84B: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x120EC84E: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x248)) = eax; /* 0x120EC851: mov dword ptr [ebp - 0x248], eax */
    eax = MEM32(ebp + 0xC); /* 0x120EC857: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x24C)) = eax; /* 0x120EC85A: mov dword ptr [ebp - 0x24c], eax */
    eax = MEM32(ebp + 0x10); /* 0x120EC860: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x120EC863: push ebx */
    MEM32(ebp + (-0x258)) = eax; /* 0x120EC864: mov dword ptr [ebp - 0x258], eax */
    eax = MEM32(ebp + 0x14); /* 0x120EC86A: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x120EC86D: push esi */
    esi = MEM32(ebp + 0x1C); /* 0x120EC86E: mov esi, dword ptr [ebp + 0x1c] */
    MEM32(ebp + (-0x25C)) = eax; /* 0x120EC871: mov dword ptr [ebp - 0x25c], eax */
    eax = MEM32(ebp + 0x20); /* 0x120EC877: mov eax, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120EC87A: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x260))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0x260)) = MEM32(ebp + (-0x260)) & ebx; /* 0x120EC87C: and dword ptr [ebp - 0x260], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x120EC882: push edi */
    ecx = ebp + (-0x244); /* 0x120EC883: lea ecx, [ebp - 0x244] */
    MEM32(ebp + (-0x254)) = esi; /* 0x120EC889: mov dword ptr [ebp - 0x254], esi */
    MEM32(ebp + (-0x250)) = eax; /* 0x120EC88F: mov dword ptr [ebp - 0x250], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120EC895: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x264)) = ebx; /* 0x120EC897: mov dword ptr [ebp - 0x264], ebx */
    RECOMP_CALL(sub_120EC332); /* 0x120EC89D: call 0x120ec332 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x270); /* 0x120EC8A2: lea ecx, [ebp - 0x270] */
    RECOMP_CALL(sub_121C1804); /* 0x120EC8A8: call 0x121c1804 */
    RECOMP_FLAGS_IN();
    /* test MEM32(ebp + 0x18), 0x00010000u */ /* 0x120EC8AD: test dword ptr [ebp + 0x18], 0x10000 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0x00010000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EC91F; /* 0x120EC8B4: je 0x120ec91f */
L_120EC8B6:
    edi = 0x121D9AF8u; /* 0x120EC8B6: mov edi, 0x121d9af8 */
    ecx = edi; /* 0x120EC8BB: mov ecx, edi */
    RECOMP_CALL(sub_120188AB); /* 0x120EC8BD: call 0x120188ab */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120EC8C2: mov esi, eax */
    /* test esi, esi */ /* 0x120EC8C4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120ECA61; /* 0x120EC8C6: js 0x120eca61 */
L_120EC8CC:
    PUSH32(esp, 0x12008B54u); /* 0x120EC8CC: push 0x12008b54 */
    ecx = edi; /* 0x120EC8D1: mov ecx, edi */
    RECOMP_CALL(sub_120188D5); /* 0x120EC8D3: call 0x120188d5 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x120EC8D8: mov ecx, eax */
    /* test ecx, ecx */ /* 0x120EC8DA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EC8E8; /* 0x120EC8DC: jne 0x120ec8e8 */
L_120EC8DE:
    esi = 0x80004005u; /* 0x120EC8DE: mov esi, 0x80004005 */
    goto L_120ECA61; /* 0x120EC8E3: jmp 0x120eca61 */
L_120EC8E8:
    PUSH32(esp, MEM32(ebp + (-0x250))); /* 0x120EC8E8: push dword ptr [ebp - 0x250] */
    eax = MEM32(ebp + (-0x254)); /* 0x120EC8EE: mov eax, dword ptr [ebp - 0x254] */
    PUSH32(esp, eax); /* 0x120EC8F4: push eax */
    eax = MEM32(ebp + 0x18); /* 0x120EC8F5: mov eax, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFEFFFFu);
    eax = eax & 0xFFFEFFFFu; /* 0x120EC8F8: and eax, 0xfffeffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x120EC8FD: push eax */
    PUSH32(esp, MEM32(ebp + (-0x25C))); /* 0x120EC8FE: push dword ptr [ebp - 0x25c] */
    PUSH32(esp, MEM32(ebp + (-0x258))); /* 0x120EC904: push dword ptr [ebp - 0x258] */
    PUSH32(esp, MEM32(ebp + (-0x24C))); /* 0x120EC90A: push dword ptr [ebp - 0x24c] */
    PUSH32(esp, MEM32(ebp + (-0x248))); /* 0x120EC910: push dword ptr [ebp - 0x248] */
    RECOMP_ICALL(ecx); /* 0x120EC916: call ecx */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120EC918: mov esi, eax */
    goto L_120ECA61; /* 0x120EC91A: jmp 0x120eca61 */
L_120EC91F:
    /* test esi, esi */ /* 0x120EC91F: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EC925; /* 0x120EC921: je 0x120ec925 */
L_120EC923:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ebx);
    MEM32(esi) = MEM32(esi) & ebx; /* 0x120EC923: and dword ptr [esi], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EC925:
    eax = MEM32(ebp + (-0x250)); /* 0x120EC925: mov eax, dword ptr [ebp - 0x250] */
    /* test eax, eax */ /* 0x120EC92B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EC931; /* 0x120EC92D: je 0x120ec931 */
L_120EC92F:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ebx);
    MEM32(eax) = MEM32(eax) & ebx; /* 0x120EC92F: and dword ptr [eax], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EC931:
    /* cmp MEM32(ebp + (-0x24C)), ebx */ /* 0x120EC931: cmp dword ptr [ebp - 0x24c], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24C))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120ECA4F; /* 0x120EC937: je 0x120eca4f */
L_120EC93D:
    /* test esi, esi */ /* 0x120EC93D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ECA4F; /* 0x120EC93F: je 0x120eca4f */
L_120EC945:
    PUSH32(esp, 0x7Cu); /* 0x120EC945: push 0x7c */
    RECOMP_CALL(sub_121BF394); /* 0x120EC947: call 0x121bf394 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120EC94C: pop ecx */
    /* test eax, eax */ /* 0x120EC94D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EC95C; /* 0x120EC94F: je 0x120ec95c */
L_120EC951:
    ecx = eax; /* 0x120EC951: mov ecx, eax */
    RECOMP_CALL(sub_120F1826); /* 0x120EC953: call 0x120f1826 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x120EC958: mov edi, eax */
    goto L_120EC95E; /* 0x120EC95A: jmp 0x120ec95e */
L_120EC95C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120EC95C: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EC95E:
    /* test edi, edi */ /* 0x120EC95E: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EC96C; /* 0x120EC960: jne 0x120ec96c */
L_120EC962:
    esi = 0x8007000Eu; /* 0x120EC962: mov esi, 0x8007000e */
    goto L_120ECA61; /* 0x120EC967: jmp 0x120eca61 */
L_120EC96C:
    PUSH32(esp, MEM32(ebp + (-0x250))); /* 0x120EC96C: push dword ptr [ebp - 0x250] */
    eax = ebp + (-0x270); /* 0x120EC972: lea eax, [ebp - 0x270] */
    PUSH32(esp, 0); /* 0x120EC978: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x25C))); /* 0x120EC97A: push dword ptr [ebp - 0x25c] */
    ecx = ebp + (-0x244); /* 0x120EC980: lea ecx, [ebp - 0x244] */
    PUSH32(esp, MEM32(ebp + (-0x258))); /* 0x120EC986: push dword ptr [ebp - 0x258] */
    PUSH32(esp, 0); /* 0x120EC98C: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x24C))); /* 0x120EC98E: push dword ptr [ebp - 0x24c] */
    PUSH32(esp, MEM32(ebp + (-0x248))); /* 0x120EC994: push dword ptr [ebp - 0x248] */
    PUSH32(esp, eax); /* 0x120EC99A: push eax */
    RECOMP_CALL(sub_120EC055); /* 0x120EC99B: call 0x120ec055 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120EC9A0: mov esi, eax */
    /* test esi, esi */ /* 0x120EC9A2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120ECA54; /* 0x120EC9A4: js 0x120eca54 */
L_120EC9AA:
    ecx = ebp + (-0x264); /* 0x120EC9AA: lea ecx, [ebp - 0x264] */
    RECOMP_CALL(sub_120E4EC4); /* 0x120EC9B0: call 0x120e4ec4 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x264)); /* 0x120EC9B5: mov ebx, dword ptr [ebp - 0x264] */
    esi = eax; /* 0x120EC9BB: mov esi, eax */
    /* test esi, esi */ /* 0x120EC9BD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EC9C9; /* 0x120EC9BF: je 0x120ec9c9 */
L_120EC9C1:
    eax = MEM32(ebp + (-0x260)); /* 0x120EC9C1: mov eax, dword ptr [ebp - 0x260] */
    goto L_120EC9E7; /* 0x120EC9C7: jmp 0x120ec9e7 */
L_120EC9C9:
    PUSH32(esp, 0x12008610u); /* 0x120EC9C9: push 0x12008610 */
    PUSH32(esp, ebx); /* 0x120EC9CE: push ebx */
    RECOMP_ICALL(MEM32(0x1200112C)); /* 0x120EC9CF: call dword ptr [0x1200112c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120EC9D5: mov esi, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x120EC9D7: neg esi */
    _flag_k = FK_CMP;
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x120EC9D9: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x7FFFBFFBu);
    esi = esi & 0x7FFFBFFBu; /* 0x120EC9DB: and esi, 0x7fffbffb */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x80004005u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x80004005u; /* 0x120EC9E1: add esi, 0x80004005 */
    _flag_k = FK_ADD;
L_120EC9E7:
    MEM32(ebp + (-0x248)) = eax; /* 0x120EC9E7: mov dword ptr [ebp - 0x248], eax */
    /* test esi, esi */ /* 0x120EC9ED: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120ECA54; /* 0x120EC9EF: js 0x120eca54 */
L_120EC9F1:
    esi = MEM32(ebp + (-0x2C)); /* 0x120EC9F1: mov esi, dword ptr [ebp - 0x2c] */
    ecx = ebp + (-0x244); /* 0x120EC9F4: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBD18); /* 0x120EC9FA: call 0x120ebd18 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x24); /* 0x120EC9FF: lea ecx, [ebp - 0x24] */
    PUSH32(esp, ecx); /* 0x120ECA02: push ecx */
    PUSH32(esp, edi); /* 0x120ECA03: push edi */
    PUSH32(esp, 0); /* 0x120ECA04: push 0 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120ECA06: push dword ptr [ebp + 0x18] */
    PUSH32(esp, 0x12008B00u); /* 0x120ECA09: push 0x12008b00 */
    PUSH32(esp, 0); /* 0x120ECA0E: push 0 */
    PUSH32(esp, esi); /* 0x120ECA10: push esi */
    PUSH32(esp, eax); /* 0x120ECA11: push eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x120ECA12: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x120ECA15: push dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x120ECA18: push dword ptr [ebp - 0x18] */
    RECOMP_ICALL(MEM32(ebp + (-0x248))); /* 0x120ECA1B: call dword ptr [ebp - 0x248] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x120ECA21: push 0 */
    PUSH32(esp, eax); /* 0x120ECA23: push eax */
    ecx = ebp + (-0x244); /* 0x120ECA24: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBDEC); /* 0x120ECA2A: call 0x120ebdec */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120ECA2F: mov esi, eax */
    /* test esi, esi */ /* 0x120ECA31: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120ECA54; /* 0x120ECA33: js 0x120eca54 */
L_120ECA35:
    eax = ebx; /* 0x120ECA35: mov eax, ebx */
    MEM32(edi + 0x78) = eax; /* 0x120ECA37: mov dword ptr [edi + 0x78], eax */
    eax = MEM32(ebp + (-0x254)); /* 0x120ECA3A: mov eax, dword ptr [ebp - 0x254] */
    ecx = edi + 0x6C; /* 0x120ECA40: lea ecx, [edi + 0x6c] */
    MEM32(eax) = ecx; /* 0x120ECA43: mov dword ptr [eax], ecx */
    eax = MEM32(ecx); /* 0x120ECA45: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120ECA47: push ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120ECA48: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x120ECA4A: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    goto L_120ECA54; /* 0x120ECA4D: jmp 0x120eca54 */
L_120ECA4F:
    esi = 0x8876086Cu; /* 0x120ECA4F: mov esi, 0x8876086c */
L_120ECA54:
    /* test edi, edi */ /* 0x120ECA54: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ECA61; /* 0x120ECA56: je 0x120eca61 */
L_120ECA58:
    eax = edi + 0x6C; /* 0x120ECA58: lea eax, [edi + 0x6c] */
    ecx = MEM32(eax); /* 0x120ECA5B: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120ECA5D: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x120ECA5E: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_120ECA61:
    ecx = ebp + (-0x270); /* 0x120ECA61: lea ecx, [ebp - 0x270] */
    RECOMP_CALL(sub_121C0EF2); /* 0x120ECA67: call 0x121c0ef2 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x244); /* 0x120ECA6C: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBD79); /* 0x120ECA72: call 0x120ebd79 */
    RECOMP_FLAGS_IN();
    /* test ebx, ebx */ /* 0x120ECA77: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ECA82; /* 0x120ECA79: je 0x120eca82 */
L_120ECA7B:
    PUSH32(esp, ebx); /* 0x120ECA7B: push ebx */
    RECOMP_ICALL(MEM32(0x1200111C)); /* 0x120ECA7C: call dword ptr [0x1200111c] */
    RECOMP_FLAGS_IN();
L_120ECA82:
    ecx = MEM32(ebp + (-0x4)); /* 0x120ECA82: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x120ECA85: pop edi */
    eax = esi; /* 0x120ECA86: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120ECA88: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120ECA89: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x120ECA8B: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x120ECA8C: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120ECA91: leave  */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x120ECA92: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_120ECA9A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120ECA9Au);

L_120ECA9A:
    edi = edi; /* 0x120ECA9A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120ECA9C: push ebp */
    ebp = esp; /* 0x120ECA9D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x270u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x270u; /* 0x120ECA9F: sub esp, 0x270 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120ECAA5: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120ECAAA: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120ECAAC: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x120ECAAF: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x248)) = eax; /* 0x120ECAB2: mov dword ptr [ebp - 0x248], eax */
    eax = MEM32(ebp + 0xC); /* 0x120ECAB8: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x24C)) = eax; /* 0x120ECABB: mov dword ptr [ebp - 0x24c], eax */
    eax = MEM32(ebp + 0x10); /* 0x120ECAC1: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x120ECAC4: push ebx */
    MEM32(ebp + (-0x258)) = eax; /* 0x120ECAC5: mov dword ptr [ebp - 0x258], eax */
    eax = MEM32(ebp + 0x14); /* 0x120ECACB: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x120ECACE: push esi */
    esi = MEM32(ebp + 0x1C); /* 0x120ECACF: mov esi, dword ptr [ebp + 0x1c] */
    MEM32(ebp + (-0x25C)) = eax; /* 0x120ECAD2: mov dword ptr [ebp - 0x25c], eax */
    eax = MEM32(ebp + 0x20); /* 0x120ECAD8: mov eax, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120ECADB: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x260))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0x260)) = MEM32(ebp + (-0x260)) & ebx; /* 0x120ECADD: and dword ptr [ebp - 0x260], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x120ECAE3: push edi */
    ecx = ebp + (-0x244); /* 0x120ECAE4: lea ecx, [ebp - 0x244] */
    MEM32(ebp + (-0x254)) = esi; /* 0x120ECAEA: mov dword ptr [ebp - 0x254], esi */
    MEM32(ebp + (-0x250)) = eax; /* 0x120ECAF0: mov dword ptr [ebp - 0x250], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120ECAF6: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x264)) = ebx; /* 0x120ECAF8: mov dword ptr [ebp - 0x264], ebx */
    RECOMP_CALL(sub_120EC332); /* 0x120ECAFE: call 0x120ec332 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x270); /* 0x120ECB03: lea ecx, [ebp - 0x270] */
    RECOMP_CALL(sub_121C1804); /* 0x120ECB09: call 0x121c1804 */
    RECOMP_FLAGS_IN();
    /* test MEM32(ebp + 0x18), 0x00010000u */ /* 0x120ECB0E: test dword ptr [ebp + 0x18], 0x10000 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0x00010000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ECB80; /* 0x120ECB15: je 0x120ecb80 */
L_120ECB17:
    edi = 0x121D9AF8u; /* 0x120ECB17: mov edi, 0x121d9af8 */
    ecx = edi; /* 0x120ECB1C: mov ecx, edi */
    RECOMP_CALL(sub_120188AB); /* 0x120ECB1E: call 0x120188ab */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120ECB23: mov esi, eax */
    /* test esi, esi */ /* 0x120ECB25: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120ECCC2; /* 0x120ECB27: js 0x120eccc2 */
L_120ECB2D:
    PUSH32(esp, 0x12008B7Cu); /* 0x120ECB2D: push 0x12008b7c */
    ecx = edi; /* 0x120ECB32: mov ecx, edi */
    RECOMP_CALL(sub_120188D5); /* 0x120ECB34: call 0x120188d5 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x120ECB39: mov ecx, eax */
    /* test ecx, ecx */ /* 0x120ECB3B: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120ECB49; /* 0x120ECB3D: jne 0x120ecb49 */
L_120ECB3F:
    esi = 0x80004005u; /* 0x120ECB3F: mov esi, 0x80004005 */
    goto L_120ECCC2; /* 0x120ECB44: jmp 0x120eccc2 */
L_120ECB49:
    PUSH32(esp, MEM32(ebp + (-0x250))); /* 0x120ECB49: push dword ptr [ebp - 0x250] */
    eax = MEM32(ebp + (-0x254)); /* 0x120ECB4F: mov eax, dword ptr [ebp - 0x254] */
    PUSH32(esp, eax); /* 0x120ECB55: push eax */
    eax = MEM32(ebp + 0x18); /* 0x120ECB56: mov eax, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFEFFFFu);
    eax = eax & 0xFFFEFFFFu; /* 0x120ECB59: and eax, 0xfffeffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x120ECB5E: push eax */
    PUSH32(esp, MEM32(ebp + (-0x25C))); /* 0x120ECB5F: push dword ptr [ebp - 0x25c] */
    PUSH32(esp, MEM32(ebp + (-0x258))); /* 0x120ECB65: push dword ptr [ebp - 0x258] */
    PUSH32(esp, MEM32(ebp + (-0x24C))); /* 0x120ECB6B: push dword ptr [ebp - 0x24c] */
    PUSH32(esp, MEM32(ebp + (-0x248))); /* 0x120ECB71: push dword ptr [ebp - 0x248] */
    RECOMP_ICALL(ecx); /* 0x120ECB77: call ecx */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120ECB79: mov esi, eax */
    goto L_120ECCC2; /* 0x120ECB7B: jmp 0x120eccc2 */
L_120ECB80:
    /* test esi, esi */ /* 0x120ECB80: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ECB86; /* 0x120ECB82: je 0x120ecb86 */
L_120ECB84:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ebx);
    MEM32(esi) = MEM32(esi) & ebx; /* 0x120ECB84: and dword ptr [esi], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_120ECB86:
    eax = MEM32(ebp + (-0x250)); /* 0x120ECB86: mov eax, dword ptr [ebp - 0x250] */
    /* test eax, eax */ /* 0x120ECB8C: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ECB92; /* 0x120ECB8E: je 0x120ecb92 */
L_120ECB90:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ebx);
    MEM32(eax) = MEM32(eax) & ebx; /* 0x120ECB90: and dword ptr [eax], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_120ECB92:
    /* cmp MEM32(ebp + (-0x24C)), ebx */ /* 0x120ECB92: cmp dword ptr [ebp - 0x24c], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24C))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120ECCB0; /* 0x120ECB98: je 0x120eccb0 */
L_120ECB9E:
    /* test esi, esi */ /* 0x120ECB9E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ECCB0; /* 0x120ECBA0: je 0x120eccb0 */
L_120ECBA6:
    PUSH32(esp, 0x7Cu); /* 0x120ECBA6: push 0x7c */
    RECOMP_CALL(sub_121BF394); /* 0x120ECBA8: call 0x121bf394 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120ECBAD: pop ecx */
    /* test eax, eax */ /* 0x120ECBAE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ECBBD; /* 0x120ECBB0: je 0x120ecbbd */
L_120ECBB2:
    ecx = eax; /* 0x120ECBB2: mov ecx, eax */
    RECOMP_CALL(sub_120F1826); /* 0x120ECBB4: call 0x120f1826 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x120ECBB9: mov edi, eax */
    goto L_120ECBBF; /* 0x120ECBBB: jmp 0x120ecbbf */
L_120ECBBD:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120ECBBD: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_120ECBBF:
    /* test edi, edi */ /* 0x120ECBBF: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120ECBCD; /* 0x120ECBC1: jne 0x120ecbcd */
L_120ECBC3:
    esi = 0x8007000Eu; /* 0x120ECBC3: mov esi, 0x8007000e */
    goto L_120ECCC2; /* 0x120ECBC8: jmp 0x120eccc2 */
L_120ECBCD:
    PUSH32(esp, MEM32(ebp + (-0x250))); /* 0x120ECBCD: push dword ptr [ebp - 0x250] */
    eax = ebp + (-0x270); /* 0x120ECBD3: lea eax, [ebp - 0x270] */
    PUSH32(esp, 0); /* 0x120ECBD9: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x25C))); /* 0x120ECBDB: push dword ptr [ebp - 0x25c] */
    ecx = ebp + (-0x244); /* 0x120ECBE1: lea ecx, [ebp - 0x244] */
    PUSH32(esp, MEM32(ebp + (-0x258))); /* 0x120ECBE7: push dword ptr [ebp - 0x258] */
    PUSH32(esp, 1); /* 0x120ECBED: push 1 */
    PUSH32(esp, MEM32(ebp + (-0x24C))); /* 0x120ECBEF: push dword ptr [ebp - 0x24c] */
    PUSH32(esp, MEM32(ebp + (-0x248))); /* 0x120ECBF5: push dword ptr [ebp - 0x248] */
    PUSH32(esp, eax); /* 0x120ECBFB: push eax */
    RECOMP_CALL(sub_120EC055); /* 0x120ECBFC: call 0x120ec055 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120ECC01: mov esi, eax */
    /* test esi, esi */ /* 0x120ECC03: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120ECCB5; /* 0x120ECC05: js 0x120eccb5 */
L_120ECC0B:
    ecx = ebp + (-0x264); /* 0x120ECC0B: lea ecx, [ebp - 0x264] */
    RECOMP_CALL(sub_120E4EC4); /* 0x120ECC11: call 0x120e4ec4 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x264)); /* 0x120ECC16: mov ebx, dword ptr [ebp - 0x264] */
    esi = eax; /* 0x120ECC1C: mov esi, eax */
    /* test esi, esi */ /* 0x120ECC1E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ECC2A; /* 0x120ECC20: je 0x120ecc2a */
L_120ECC22:
    eax = MEM32(ebp + (-0x260)); /* 0x120ECC22: mov eax, dword ptr [ebp - 0x260] */
    goto L_120ECC48; /* 0x120ECC28: jmp 0x120ecc48 */
L_120ECC2A:
    PUSH32(esp, 0x12008610u); /* 0x120ECC2A: push 0x12008610 */
    PUSH32(esp, ebx); /* 0x120ECC2F: push ebx */
    RECOMP_ICALL(MEM32(0x1200112C)); /* 0x120ECC30: call dword ptr [0x1200112c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120ECC36: mov esi, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x120ECC38: neg esi */
    _flag_k = FK_CMP;
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x120ECC3A: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x7FFFBFFBu);
    esi = esi & 0x7FFFBFFBu; /* 0x120ECC3C: and esi, 0x7fffbffb */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x80004005u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x80004005u; /* 0x120ECC42: add esi, 0x80004005 */
    _flag_k = FK_ADD;
L_120ECC48:
    MEM32(ebp + (-0x248)) = eax; /* 0x120ECC48: mov dword ptr [ebp - 0x248], eax */
    /* test esi, esi */ /* 0x120ECC4E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120ECCB5; /* 0x120ECC50: js 0x120eccb5 */
L_120ECC52:
    esi = MEM32(ebp + (-0x2C)); /* 0x120ECC52: mov esi, dword ptr [ebp - 0x2c] */
    ecx = ebp + (-0x244); /* 0x120ECC55: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBD18); /* 0x120ECC5B: call 0x120ebd18 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x24); /* 0x120ECC60: lea ecx, [ebp - 0x24] */
    PUSH32(esp, ecx); /* 0x120ECC63: push ecx */
    PUSH32(esp, edi); /* 0x120ECC64: push edi */
    PUSH32(esp, 0); /* 0x120ECC65: push 0 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120ECC67: push dword ptr [ebp + 0x18] */
    PUSH32(esp, 0x12008B00u); /* 0x120ECC6A: push 0x12008b00 */
    PUSH32(esp, 0); /* 0x120ECC6F: push 0 */
    PUSH32(esp, esi); /* 0x120ECC71: push esi */
    PUSH32(esp, eax); /* 0x120ECC72: push eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x120ECC73: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x120ECC76: push dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x120ECC79: push dword ptr [ebp - 0x18] */
    RECOMP_ICALL(MEM32(ebp + (-0x248))); /* 0x120ECC7C: call dword ptr [ebp - 0x248] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x120ECC82: push 0 */
    PUSH32(esp, eax); /* 0x120ECC84: push eax */
    ecx = ebp + (-0x244); /* 0x120ECC85: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBDEC); /* 0x120ECC8B: call 0x120ebdec */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120ECC90: mov esi, eax */
    /* test esi, esi */ /* 0x120ECC92: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120ECCB5; /* 0x120ECC94: js 0x120eccb5 */
L_120ECC96:
    eax = ebx; /* 0x120ECC96: mov eax, ebx */
    MEM32(edi + 0x78) = eax; /* 0x120ECC98: mov dword ptr [edi + 0x78], eax */
    eax = MEM32(ebp + (-0x254)); /* 0x120ECC9B: mov eax, dword ptr [ebp - 0x254] */
    ecx = edi + 0x6C; /* 0x120ECCA1: lea ecx, [edi + 0x6c] */
    MEM32(eax) = ecx; /* 0x120ECCA4: mov dword ptr [eax], ecx */
    eax = MEM32(ecx); /* 0x120ECCA6: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120ECCA8: push ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120ECCA9: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x120ECCAB: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    goto L_120ECCB5; /* 0x120ECCAE: jmp 0x120eccb5 */
L_120ECCB0:
    esi = 0x8876086Cu; /* 0x120ECCB0: mov esi, 0x8876086c */
L_120ECCB5:
    /* test edi, edi */ /* 0x120ECCB5: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ECCC2; /* 0x120ECCB7: je 0x120eccc2 */
L_120ECCB9:
    eax = edi + 0x6C; /* 0x120ECCB9: lea eax, [edi + 0x6c] */
    ecx = MEM32(eax); /* 0x120ECCBC: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120ECCBE: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x120ECCBF: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_120ECCC2:
    ecx = ebp + (-0x270); /* 0x120ECCC2: lea ecx, [ebp - 0x270] */
    RECOMP_CALL(sub_121C0EF2); /* 0x120ECCC8: call 0x121c0ef2 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x244); /* 0x120ECCCD: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBD79); /* 0x120ECCD3: call 0x120ebd79 */
    RECOMP_FLAGS_IN();
    /* test ebx, ebx */ /* 0x120ECCD8: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ECCE3; /* 0x120ECCDA: je 0x120ecce3 */
L_120ECCDC:
    PUSH32(esp, ebx); /* 0x120ECCDC: push ebx */
    RECOMP_ICALL(MEM32(0x1200111C)); /* 0x120ECCDD: call dword ptr [0x1200111c] */
    RECOMP_FLAGS_IN();
L_120ECCE3:
    ecx = MEM32(ebp + (-0x4)); /* 0x120ECCE3: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x120ECCE6: pop edi */
    eax = esi; /* 0x120ECCE7: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120ECCE9: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120ECCEA: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x120ECCEC: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x120ECCED: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120ECCF2: leave  */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x120ECCF3: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_120ECCFB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120ECCFBu);

L_120ECCFB:
    edi = edi; /* 0x120ECCFB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120ECCFD: push ebp */
    ebp = esp; /* 0x120ECCFE: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x260u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x260u; /* 0x120ECD00: sub esp, 0x260 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120ECD06: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120ECD0B: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120ECD0D: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x120ECD10: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x24C)) = eax; /* 0x120ECD13: mov dword ptr [ebp - 0x24c], eax */
    eax = MEM32(ebp + 0x10); /* 0x120ECD19: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, ebx); /* 0x120ECD1C: push ebx */
    MEM32(ebp + (-0x248)) = eax; /* 0x120ECD1D: mov dword ptr [ebp - 0x248], eax */
    eax = MEM32(ebp + 0x14); /* 0x120ECD23: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, esi); /* 0x120ECD26: push esi */
    esi = MEM32(ebp + 0x1C); /* 0x120ECD27: mov esi, dword ptr [ebp + 0x1c] */
    MEM32(ebp + (-0x258)) = eax; /* 0x120ECD2A: mov dword ptr [ebp - 0x258], eax */
    eax = MEM32(ebp + 0x20); /* 0x120ECD30: mov eax, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120ECD33: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(ebp + (-0x25C))); _flag_b = (uint32_t)(ebx);
    MEM32(ebp + (-0x25C)) = MEM32(ebp + (-0x25C)) & ebx; /* 0x120ECD35: and dword ptr [ebp - 0x25c], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x120ECD3B: push edi */
    ecx = ebp + (-0x244); /* 0x120ECD3C: lea ecx, [ebp - 0x244] */
    MEM32(ebp + (-0x254)) = esi; /* 0x120ECD42: mov dword ptr [ebp - 0x254], esi */
    MEM32(ebp + (-0x250)) = eax; /* 0x120ECD48: mov dword ptr [ebp - 0x250], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120ECD4E: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x260)) = ebx; /* 0x120ECD50: mov dword ptr [ebp - 0x260], ebx */
    RECOMP_CALL(sub_120EC332); /* 0x120ECD56: call 0x120ec332 */
    RECOMP_FLAGS_IN();
    /* test MEM32(ebp + 0x18), 0x00010000u */ /* 0x120ECD5B: test dword ptr [ebp + 0x18], 0x10000 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0x00010000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ECDCA; /* 0x120ECD62: je 0x120ecdca */
L_120ECD64:
    edi = 0x121D9AF8u; /* 0x120ECD64: mov edi, 0x121d9af8 */
    ecx = edi; /* 0x120ECD69: mov ecx, edi */
    RECOMP_CALL(sub_120188AB); /* 0x120ECD6B: call 0x120188ab */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120ECD70: mov esi, eax */
    /* test esi, esi */ /* 0x120ECD72: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120ECF00; /* 0x120ECD74: js 0x120ecf00 */
L_120ECD7A:
    PUSH32(esp, 0x12008BA4u); /* 0x120ECD7A: push 0x12008ba4 */
    ecx = edi; /* 0x120ECD7F: mov ecx, edi */
    RECOMP_CALL(sub_120188D5); /* 0x120ECD81: call 0x120188d5 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x120ECD86: mov ecx, eax */
    /* test ecx, ecx */ /* 0x120ECD88: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120ECD96; /* 0x120ECD8A: jne 0x120ecd96 */
L_120ECD8C:
    esi = 0x80004005u; /* 0x120ECD8C: mov esi, 0x80004005 */
    goto L_120ECF00; /* 0x120ECD91: jmp 0x120ecf00 */
L_120ECD96:
    PUSH32(esp, MEM32(ebp + (-0x250))); /* 0x120ECD96: push dword ptr [ebp - 0x250] */
    eax = MEM32(ebp + (-0x254)); /* 0x120ECD9C: mov eax, dword ptr [ebp - 0x254] */
    PUSH32(esp, eax); /* 0x120ECDA2: push eax */
    eax = MEM32(ebp + 0x18); /* 0x120ECDA3: mov eax, dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFEFFFFu);
    eax = eax & 0xFFFEFFFFu; /* 0x120ECDA6: and eax, 0xfffeffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x120ECDAB: push eax */
    PUSH32(esp, MEM32(ebp + (-0x258))); /* 0x120ECDAC: push dword ptr [ebp - 0x258] */
    PUSH32(esp, MEM32(ebp + (-0x248))); /* 0x120ECDB2: push dword ptr [ebp - 0x248] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120ECDB8: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x24C))); /* 0x120ECDBB: push dword ptr [ebp - 0x24c] */
    RECOMP_ICALL(ecx); /* 0x120ECDC1: call ecx */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120ECDC3: mov esi, eax */
    goto L_120ECF00; /* 0x120ECDC5: jmp 0x120ecf00 */
L_120ECDCA:
    /* test esi, esi */ /* 0x120ECDCA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ECDD0; /* 0x120ECDCC: je 0x120ecdd0 */
L_120ECDCE:
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(ebx);
    MEM32(esi) = MEM32(esi) & ebx; /* 0x120ECDCE: and dword ptr [esi], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_120ECDD0:
    eax = MEM32(ebp + (-0x250)); /* 0x120ECDD0: mov eax, dword ptr [ebp - 0x250] */
    /* test eax, eax */ /* 0x120ECDD6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ECDDC; /* 0x120ECDD8: je 0x120ecddc */
L_120ECDDA:
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(ebx);
    MEM32(eax) = MEM32(eax) & ebx; /* 0x120ECDDA: and dword ptr [eax], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_120ECDDC:
    /* cmp MEM32(ebp + (-0x24C)), ebx */ /* 0x120ECDDC: cmp dword ptr [ebp - 0x24c], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24C))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120ECEEE; /* 0x120ECDE2: je 0x120eceee */
L_120ECDE8:
    /* test esi, esi */ /* 0x120ECDE8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ECEEE; /* 0x120ECDEA: je 0x120eceee */
L_120ECDF0:
    PUSH32(esp, 0x7Cu); /* 0x120ECDF0: push 0x7c */
    RECOMP_CALL(sub_121BF394); /* 0x120ECDF2: call 0x121bf394 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120ECDF7: pop ecx */
    /* test eax, eax */ /* 0x120ECDF8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ECE07; /* 0x120ECDFA: je 0x120ece07 */
L_120ECDFC:
    ecx = eax; /* 0x120ECDFC: mov ecx, eax */
    RECOMP_CALL(sub_120F1826); /* 0x120ECDFE: call 0x120f1826 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x120ECE03: mov edi, eax */
    goto L_120ECE09; /* 0x120ECE05: jmp 0x120ece09 */
L_120ECE07:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120ECE07: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_120ECE09:
    /* test edi, edi */ /* 0x120ECE09: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120ECE17; /* 0x120ECE0B: jne 0x120ece17 */
L_120ECE0D:
    esi = 0x8007000Eu; /* 0x120ECE0D: mov esi, 0x8007000e */
    goto L_120ECF00; /* 0x120ECE12: jmp 0x120ecf00 */
L_120ECE17:
    PUSH32(esp, MEM32(ebp + (-0x250))); /* 0x120ECE17: push dword ptr [ebp - 0x250] */
    ecx = ebp + (-0x244); /* 0x120ECE1D: lea ecx, [ebp - 0x244] */
    PUSH32(esp, 0); /* 0x120ECE23: push 0 */
    PUSH32(esp, MEM32(ebp + (-0x258))); /* 0x120ECE25: push dword ptr [ebp - 0x258] */
    PUSH32(esp, MEM32(ebp + (-0x248))); /* 0x120ECE2B: push dword ptr [ebp - 0x248] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120ECE31: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x24C))); /* 0x120ECE34: push dword ptr [ebp - 0x24c] */
    RECOMP_CALL(sub_120EC0B4); /* 0x120ECE3A: call 0x120ec0b4 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120ECE3F: mov esi, eax */
    /* test esi, esi */ /* 0x120ECE41: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120ECEF3; /* 0x120ECE43: js 0x120ecef3 */
L_120ECE49:
    ecx = ebp + (-0x260); /* 0x120ECE49: lea ecx, [ebp - 0x260] */
    RECOMP_CALL(sub_120E4EC4); /* 0x120ECE4F: call 0x120e4ec4 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x260)); /* 0x120ECE54: mov ebx, dword ptr [ebp - 0x260] */
    esi = eax; /* 0x120ECE5A: mov esi, eax */
    /* test esi, esi */ /* 0x120ECE5C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ECE68; /* 0x120ECE5E: je 0x120ece68 */
L_120ECE60:
    eax = MEM32(ebp + (-0x25C)); /* 0x120ECE60: mov eax, dword ptr [ebp - 0x25c] */
    goto L_120ECE86; /* 0x120ECE66: jmp 0x120ece86 */
L_120ECE68:
    PUSH32(esp, 0x12008610u); /* 0x120ECE68: push 0x12008610 */
    PUSH32(esp, ebx); /* 0x120ECE6D: push ebx */
    RECOMP_ICALL(MEM32(0x1200112C)); /* 0x120ECE6E: call dword ptr [0x1200112c] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120ECE74: mov esi, eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(esi);
    _cf = (esi) != 0;
    esi = (uint32_t)(-(int32_t)esi); /* 0x120ECE76: neg esi */
    _flag_k = FK_CMP;
    { uint32_t _sa = esi, _sb = esi, _sc = (uint32_t)CMP_B(_flag_a, _flag_b); /* 0x120ECE78: sbb esi, esi */
      esi = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x7FFFBFFBu);
    esi = esi & 0x7FFFBFFBu; /* 0x120ECE7A: and esi, 0x7fffbffb */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x80004005u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x80004005u; /* 0x120ECE80: add esi, 0x80004005 */
    _flag_k = FK_ADD;
L_120ECE86:
    MEM32(ebp + (-0x248)) = eax; /* 0x120ECE86: mov dword ptr [ebp - 0x248], eax */
    /* test esi, esi */ /* 0x120ECE8C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120ECEF3; /* 0x120ECE8E: js 0x120ecef3 */
L_120ECE90:
    esi = MEM32(ebp + (-0x2C)); /* 0x120ECE90: mov esi, dword ptr [ebp - 0x2c] */
    ecx = ebp + (-0x244); /* 0x120ECE93: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBD18); /* 0x120ECE99: call 0x120ebd18 */
    RECOMP_FLAGS_IN();
    ecx = ebp + (-0x24); /* 0x120ECE9E: lea ecx, [ebp - 0x24] */
    PUSH32(esp, ecx); /* 0x120ECEA1: push ecx */
    PUSH32(esp, edi); /* 0x120ECEA2: push edi */
    PUSH32(esp, 0); /* 0x120ECEA3: push 0 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120ECEA5: push dword ptr [ebp + 0x18] */
    PUSH32(esp, 0x12008B00u); /* 0x120ECEA8: push 0x12008b00 */
    PUSH32(esp, 0); /* 0x120ECEAD: push 0 */
    PUSH32(esp, esi); /* 0x120ECEAF: push esi */
    PUSH32(esp, eax); /* 0x120ECEB0: push eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x120ECEB1: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x120ECEB4: push dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x120ECEB7: push dword ptr [ebp - 0x18] */
    RECOMP_ICALL(MEM32(ebp + (-0x248))); /* 0x120ECEBA: call dword ptr [ebp - 0x248] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x120ECEC0: push 0 */
    PUSH32(esp, eax); /* 0x120ECEC2: push eax */
    ecx = ebp + (-0x244); /* 0x120ECEC3: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBDEC); /* 0x120ECEC9: call 0x120ebdec */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120ECECE: mov esi, eax */
    /* test esi, esi */ /* 0x120ECED0: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120ECEF3; /* 0x120ECED2: js 0x120ecef3 */
L_120ECED4:
    eax = ebx; /* 0x120ECED4: mov eax, ebx */
    MEM32(edi + 0x78) = eax; /* 0x120ECED6: mov dword ptr [edi + 0x78], eax */
    eax = MEM32(ebp + (-0x254)); /* 0x120ECED9: mov eax, dword ptr [ebp - 0x254] */
    ecx = edi + 0x6C; /* 0x120ECEDF: lea ecx, [edi + 0x6c] */
    MEM32(eax) = ecx; /* 0x120ECEE2: mov dword ptr [eax], ecx */
    eax = MEM32(ecx); /* 0x120ECEE4: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120ECEE6: push ecx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x120ECEE7: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x120ECEE9: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    goto L_120ECEF3; /* 0x120ECEEC: jmp 0x120ecef3 */
L_120ECEEE:
    esi = 0x8876086Cu; /* 0x120ECEEE: mov esi, 0x8876086c */
L_120ECEF3:
    /* test edi, edi */ /* 0x120ECEF3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ECF00; /* 0x120ECEF5: je 0x120ecf00 */
L_120ECEF7:
    eax = edi + 0x6C; /* 0x120ECEF7: lea eax, [edi + 0x6c] */
    ecx = MEM32(eax); /* 0x120ECEFA: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120ECEFC: push eax */
    RECOMP_ICALL(MEM32(ecx + 0x8)); /* 0x120ECEFD: call dword ptr [ecx + 8] */
    RECOMP_FLAGS_IN();
L_120ECF00:
    ecx = ebp + (-0x244); /* 0x120ECF00: lea ecx, [ebp - 0x244] */
    RECOMP_CALL(sub_120EBD79); /* 0x120ECF06: call 0x120ebd79 */
    RECOMP_FLAGS_IN();
    /* test ebx, ebx */ /* 0x120ECF0B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ECF16; /* 0x120ECF0D: je 0x120ecf16 */
L_120ECF0F:
    PUSH32(esp, ebx); /* 0x120ECF0F: push ebx */
    RECOMP_ICALL(MEM32(0x1200111C)); /* 0x120ECF10: call dword ptr [0x1200111c] */
    RECOMP_FLAGS_IN();
L_120ECF16:
    ecx = MEM32(ebp + (-0x4)); /* 0x120ECF16: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x120ECF19: pop edi */
    eax = esi; /* 0x120ECF1A: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120ECF1C: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120ECF1D: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x120ECF1F: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x120ECF20: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120ECF25: leave  */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x120ECF26: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_120ECF2E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120ECF2Eu);

L_120ECF2E:
    edi = edi; /* 0x120ECF2E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120ECF30: push ebp */
    ebp = esp; /* 0x120ECF31: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x24u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x24u; /* 0x120ECF33: sub esp, 0x24 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x120ECF36: push ebx */
    PUSH32(esp, esi); /* 0x120ECF37: push esi */
    PUSH32(esp, edi); /* 0x120ECF38: push edi */
    ecx = ebp + (-0x24); /* 0x120ECF39: lea ecx, [ebp - 0x24] */
    RECOMP_CALL(sub_121C0EDB); /* 0x120ECF3C: call 0x121c0edb */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x1C); /* 0x120ECF41: mov ebx, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120ECF44: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x10)) = esi; /* 0x120ECF46: mov dword ptr [ebp - 0x10], esi */
    edi = esi; /* 0x120ECF49: mov edi, esi */
    MEM32(ebp + (-0x8)) = esi; /* 0x120ECF4B: mov dword ptr [ebp - 8], esi */
    ecx = esi; /* 0x120ECF4E: mov ecx, esi */
    MEM32(ebp + (-0x4)) = esi; /* 0x120ECF50: mov dword ptr [ebp - 4], esi */
    /* test ebx, 0x00010000u */ /* 0x120ECF53: test ebx, 0x10000 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x00010000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ECFB4; /* 0x120ECF59: je 0x120ecfb4 */
L_120ECF5B:
    ecx = 0x121D9AF8u; /* 0x120ECF5B: mov ecx, 0x121d9af8 */
    RECOMP_CALL(sub_120188AB); /* 0x120ECF60: call 0x120188ab */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120ECF65: mov esi, eax */
    /* test esi, esi */ /* 0x120ECF67: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120ED195; /* 0x120ECF69: js 0x120ed195 */
L_120ECF6F:
    PUSH32(esp, 0x12008BC0u); /* 0x120ECF6F: push 0x12008bc0 */
    ecx = 0x121D9AF8u; /* 0x120ECF74: mov ecx, 0x121d9af8 */
    RECOMP_CALL(sub_120188D5); /* 0x120ECF79: call 0x120188d5 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120ECF7E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120ECF8C; /* 0x120ECF80: jne 0x120ecf8c */
L_120ECF82:
    esi = 0x80004005u; /* 0x120ECF82: mov esi, 0x80004005 */
    goto L_120ED195; /* 0x120ECF87: jmp 0x120ed195 */
L_120ECF8C:
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x120ECF8C: push dword ptr [ebp + 0x28] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFEFFFFu);
    ebx = ebx & 0xFFFEFFFFu; /* 0x120ECF8F: and ebx, 0xfffeffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x120ECF95: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x120ECF98: push dword ptr [ebp + 0x20] */
    PUSH32(esp, ebx); /* 0x120ECF9B: push ebx */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120ECF9C: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120ECF9F: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120ECFA2: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120ECFA5: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120ECFA8: push dword ptr [ebp + 8] */
    RECOMP_ICALL(eax); /* 0x120ECFAB: call eax */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120ECFAD: mov esi, eax */
    goto L_120ED195; /* 0x120ECFAF: jmp 0x120ed195 */
L_120ECFB4:
    eax = ebx; /* 0x120ECFB4: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00020800u);
    eax = eax & 0x00020800u; /* 0x120ECFB6: and eax, 0x20800 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x14)) = eax; /* 0x120ECFBB: mov dword ptr [ebp - 0x14], eax */
    eax = MEM32(ebp + 0x24); /* 0x120ECFBE: mov eax, dword ptr [ebp + 0x24] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFDF7FFu);
    ebx = ebx & 0xFFFDF7FFu; /* 0x120ECFC1: and ebx, 0xfffdf7ff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x120ECFC7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ECFCD; /* 0x120ECFC9: je 0x120ecfcd */
L_120ECFCB:
    MEM32(eax) = esi; /* 0x120ECFCB: mov dword ptr [eax], esi */
L_120ECFCD:
    eax = MEM32(ebp + 0x28); /* 0x120ECFCD: mov eax, dword ptr [ebp + 0x28] */
    /* test eax, eax */ /* 0x120ECFD0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ECFD6; /* 0x120ECFD2: je 0x120ecfd6 */
L_120ECFD4:
    MEM32(eax) = esi; /* 0x120ECFD4: mov dword ptr [eax], esi */
L_120ECFD6:
    /* cmp MEM32(ebp + 0x8), ecx */ /* 0x120ECFD6: cmp dword ptr [ebp + 8], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120ED172; /* 0x120ECFD9: je 0x120ed172 */
L_120ECFDF:
    edx = MEM32(ebp + 0xC); /* 0x120ECFDF: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x120ECFE2: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ED172; /* 0x120ECFE4: je 0x120ed172 */
L_120ECFEA:
    ecx = MEM32(ebp + 0x14); /* 0x120ECFEA: mov ecx, dword ptr [ebp + 0x14] */
    /* test ecx, ecx */ /* 0x120ECFED: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120ED013; /* 0x120ECFEF: jne 0x120ed013 */
L_120ECFF1:
    PUSH32(esp, esi); /* 0x120ECFF1: push esi */
    PUSH32(esp, edx); /* 0x120ECFF2: push edx */
    ecx = ebp + (-0x24); /* 0x120ECFF3: lea ecx, [ebp - 0x24] */
    RECOMP_CALL(sub_121C1531); /* 0x120ECFF6: call 0x121c1531 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120ECFFB: mov esi, eax */
    /* test esi, esi */ /* 0x120ECFFD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120ED195; /* 0x120ECFFF: js 0x120ed195 */
L_120ED005:
    eax = MEM32(ebp + (-0x18)); /* 0x120ED005: mov eax, dword ptr [ebp - 0x18] */
    MEM32(ebp + (-0xC)) = eax; /* 0x120ED008: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ebp + (-0x1C)); /* 0x120ED00B: mov eax, dword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0x4)) = eax; /* 0x120ED00E: mov dword ptr [ebp - 4], eax */
    goto L_120ED02F; /* 0x120ED011: jmp 0x120ed02f */
L_120ED013:
    eax = MEM32(ecx); /* 0x120ED013: mov eax, dword ptr [ecx] */
    esi = ebp + (-0xC); /* 0x120ED015: lea esi, [ebp - 0xc] */
    PUSH32(esp, esi); /* 0x120ED018: push esi */
    esi = ebp + (-0x4); /* 0x120ED019: lea esi, [ebp - 4] */
    PUSH32(esp, esi); /* 0x120ED01C: push esi */
    PUSH32(esp, 0); /* 0x120ED01D: push 0 */
    PUSH32(esp, edx); /* 0x120ED01F: push edx */
    PUSH32(esp, 0); /* 0x120ED020: push 0 */
    PUSH32(esp, ecx); /* 0x120ED022: push ecx */
    RECOMP_ICALL(MEM32(eax)); /* 0x120ED023: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120ED025: mov esi, eax */
    /* test esi, esi */ /* 0x120ED027: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120ED195; /* 0x120ED029: js 0x120ed195 */
L_120ED02F:
    PUSH32(esp, 0x15Cu); /* 0x120ED02F: push 0x15c */
    MEM32(ebp + 0x1C) = 1; /* 0x120ED034: mov dword ptr [ebp + 0x1c], 1 */
    RECOMP_CALL(sub_121BF394); /* 0x120ED03B: call 0x121bf394 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120ED040: pop ecx */
    /* test eax, eax */ /* 0x120ED041: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ED050; /* 0x120ED043: je 0x120ed050 */
L_120ED045:
    ecx = eax; /* 0x120ED045: mov ecx, eax */
    RECOMP_CALL(sub_120FAE36); /* 0x120ED047: call 0x120fae36 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x120ED04C: mov edi, eax */
    goto L_120ED052; /* 0x120ED04E: jmp 0x120ed052 */
L_120ED050:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120ED050: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_120ED052:
    /* test edi, edi */ /* 0x120ED052: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120ED060; /* 0x120ED054: jne 0x120ed060 */
L_120ED056:
    esi = 0x8007000Eu; /* 0x120ED056: mov esi, 0x8007000e */
    goto L_120ED17B; /* 0x120ED05B: jmp 0x120ed17b */
L_120ED060:
    /* cmp MEM32(ebp + (-0xC)), 4 */ /* 0x120ED060: cmp dword ptr [ebp - 0xc], 4 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120ED070; /* 0x120ED064: jae 0x120ed070 */
L_120ED066:
    esi = 0x80004005u; /* 0x120ED066: mov esi, 0x80004005 */
    goto L_120ED17B; /* 0x120ED06B: jmp 0x120ed17b */
L_120ED070:
    eax = MEM32(ebp + (-0x4)); /* 0x120ED070: mov eax, dword ptr [ebp - 4] */
    /* cmp MEM32(eax), 0xFEFF0901u */ /* 0x120ED073: cmp dword ptr [eax], 0xfeff0901 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xFEFF0901u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120ED0FF; /* 0x120ED079: je 0x120ed0ff */
L_120ED07F:
    esi = MEM32(ebp + 0x14); /* 0x120ED07F: mov esi, dword ptr [ebp + 0x14] */
    /* test esi, esi */ /* 0x120ED082: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120ED090; /* 0x120ED084: jne 0x120ed090 */
L_120ED086:
    ecx = ebp + (-0x24); /* 0x120ED086: lea ecx, [ebp - 0x24] */
    RECOMP_CALL(sub_121C17AC); /* 0x120ED089: call 0x121c17ac */
    RECOMP_FLAGS_IN();
    goto L_120ED099; /* 0x120ED08E: jmp 0x120ed099 */
L_120ED090:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x120ED090: push dword ptr [ebp - 4] */
    eax = MEM32(esi); /* 0x120ED093: mov eax, dword ptr [esi] */
    PUSH32(esp, esi); /* 0x120ED095: push esi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x120ED096: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_120ED099:
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x120ED099: push dword ptr [ebp + 0x28] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x1C) = MEM32(ebp + 0x1C) & 0; /* 0x120ED09C: and dword ptr [ebp + 0x1c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x10); /* 0x120ED0A0: lea eax, [ebp - 0x10] */
    PUSH32(esp, eax); /* 0x120ED0A3: push eax */
    eax = MEM32(ebp + (-0x14)); /* 0x120ED0A4: mov eax, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00020000u);
    eax = eax & 0x00020000u; /* 0x120ED0A7: and eax, 0x20000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | ebx)); _flag_b = (uint32_t)((eax | ebx));
    eax = eax | ebx; /* 0x120ED0AC: or eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x120ED0AE: push eax */
    PUSH32(esp, esi); /* 0x120ED0AF: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120ED0B0: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120ED0B3: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_120EC3DB); /* 0x120ED0B6: call 0x120ec3db */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120ED0BB: mov esi, eax */
    /* test esi, esi */ /* 0x120ED0BD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120ED195; /* 0x120ED0BF: js 0x120ed195 */
L_120ED0C5:
    esi = MEM32(ebp + 0x28); /* 0x120ED0C5: mov esi, dword ptr [ebp + 0x28] */
    /* test esi, esi */ /* 0x120ED0C8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ED0DB; /* 0x120ED0CA: je 0x120ed0db */
L_120ED0CC:
    ecx = MEM32(esi); /* 0x120ED0CC: mov ecx, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x120ED0CE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ED0DB; /* 0x120ED0D0: je 0x120ed0db */
L_120ED0D2:
    eax = MEM32(ecx); /* 0x120ED0D2: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120ED0D4: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120ED0D5: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x120ED0D8: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120ED0DB:
    eax = MEM32(ebp + (-0x10)); /* 0x120ED0DB: mov eax, dword ptr [ebp - 0x10] */
    ecx = MEM32(eax); /* 0x120ED0DE: mov ecx, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x120ED0E0: push esi */
    edx = ebp + (-0x8); /* 0x120ED0E1: lea edx, [ebp - 8] */
    PUSH32(esp, edx); /* 0x120ED0E4: push edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFE7u);
    ebx = ebx & 0xFFFFFFE7u; /* 0x120ED0E5: and ebx, 0xffffffe7 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x120ED0E8: push ebx */
    PUSH32(esp, eax); /* 0x120ED0E9: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xEC)); /* 0x120ED0EA: call dword ptr [ecx + 0xec] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120ED0F0: mov esi, eax */
    /* test esi, esi */ /* 0x120ED0F2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120ED195; /* 0x120ED0F4: js 0x120ed195 */
L_120ED0FA:
    ebx = MEM32(ebp + 0x24); /* 0x120ED0FA: mov ebx, dword ptr [ebp + 0x24] */
    goto L_120ED130; /* 0x120ED0FD: jmp 0x120ed130 */
L_120ED0FF:
    ebx = MEM32(ebp + 0x24); /* 0x120ED0FF: mov ebx, dword ptr [ebp + 0x24] */
    /* test ebx, ebx */ /* 0x120ED102: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ED17B; /* 0x120ED104: je 0x120ed17b */
L_120ED106:
    eax = ebp + (-0x8); /* 0x120ED106: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x120ED109: push eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x120ED10A: push dword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_120192FE); /* 0x120ED10D: call 0x120192fe */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120ED112: mov esi, eax */
    /* test esi, esi */ /* 0x120ED114: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120ED17B; /* 0x120ED116: js 0x120ed17b */
L_120ED118:
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x120ED118: push dword ptr [ebp - 0xc] */
    eax = MEM32(ebp + (-0x8)); /* 0x120ED11B: mov eax, dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x120ED11E: push dword ptr [ebp - 4] */
    ecx = MEM32(eax); /* 0x120ED121: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120ED123: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x120ED124: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x120ED127: push eax */
    RECOMP_CALL(sub_121BF440); /* 0x120ED128: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120ED12D: add esp, 0xc */
    _flag_k = FK_ADD;
L_120ED130:
    /* test ebx, ebx */ /* 0x120ED130: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ED16D; /* 0x120ED132: je 0x120ed16d */
L_120ED134:
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120ED134: push dword ptr [ebp + 0x18] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x28)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x28) = MEM32(ebp + 0x28) & 0; /* 0x120ED137: and dword ptr [ebp + 0x28], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + 0x28; /* 0x120ED13B: lea eax, [ebp + 0x28] */
    PUSH32(esp, eax); /* 0x120ED13E: push eax */
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x120ED13F: push dword ptr [ebp - 8] */
    ecx = edi; /* 0x120ED142: mov ecx, edi */
    PUSH32(esp, MEM32(ebp + (-0x14))); /* 0x120ED144: push dword ptr [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x120ED147: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120ED14A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_120F9343); /* 0x120ED14D: call 0x120f9343 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120ED152: mov esi, eax */
    /* test esi, esi */ /* 0x120ED154: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120ED16D; /* 0x120ED156: js 0x120ed16d */
L_120ED158:
    ecx = edi; /* 0x120ED158: mov ecx, edi */
    RECOMP_CALL(sub_120F7636); /* 0x120ED15A: call 0x120f7636 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120ED15F: mov esi, eax */
    /* test esi, esi */ /* 0x120ED161: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120ED16D; /* 0x120ED163: js 0x120ed16d */
L_120ED165:
    MEM32(ebx) = edi; /* 0x120ED165: mov dword ptr [ebx], edi */
    eax = MEM32(edi); /* 0x120ED167: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x120ED169: push edi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x120ED16A: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_120ED16D:
    ecx = MEM32(ebp + 0x1C); /* 0x120ED16D: mov ecx, dword ptr [ebp + 0x1c] */
    goto L_120ED177; /* 0x120ED170: jmp 0x120ed177 */
L_120ED172:
    esi = 0x8876086Cu; /* 0x120ED172: mov esi, 0x8876086c */
L_120ED177:
    /* test ecx, ecx */ /* 0x120ED177: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ED195; /* 0x120ED179: je 0x120ed195 */
L_120ED17B:
    ecx = MEM32(ebp + 0x14); /* 0x120ED17B: mov ecx, dword ptr [ebp + 0x14] */
    /* test ecx, ecx */ /* 0x120ED17E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120ED18C; /* 0x120ED180: jne 0x120ed18c */
L_120ED182:
    ecx = ebp + (-0x24); /* 0x120ED182: lea ecx, [ebp - 0x24] */
    RECOMP_CALL(sub_121C17AC); /* 0x120ED185: call 0x121c17ac */
    RECOMP_FLAGS_IN();
    goto L_120ED195; /* 0x120ED18A: jmp 0x120ed195 */
L_120ED18C:
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x120ED18C: push dword ptr [ebp - 4] */
    eax = MEM32(ecx); /* 0x120ED18F: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120ED191: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x120ED192: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_120ED195:
    ecx = MEM32(ebp + (-0x10)); /* 0x120ED195: mov ecx, dword ptr [ebp - 0x10] */
    /* test ecx, ecx */ /* 0x120ED198: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ED1A6; /* 0x120ED19A: je 0x120ed1a6 */
L_120ED19C:
    eax = MEM32(ecx); /* 0x120ED19C: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120ED19E: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120ED19F: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10)) = MEM32(ebp + (-0x10)) & 0; /* 0x120ED1A2: and dword ptr [ebp - 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120ED1A6:
    ecx = MEM32(ebp + (-0x8)); /* 0x120ED1A6: mov ecx, dword ptr [ebp - 8] */
    /* test ecx, ecx */ /* 0x120ED1A9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ED1B7; /* 0x120ED1AB: je 0x120ed1b7 */
L_120ED1AD:
    eax = MEM32(ecx); /* 0x120ED1AD: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120ED1AF: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120ED1B0: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x120ED1B3: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120ED1B7:
    /* test edi, edi */ /* 0x120ED1B7: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ED1C1; /* 0x120ED1B9: je 0x120ed1c1 */
L_120ED1BB:
    eax = MEM32(edi); /* 0x120ED1BB: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x120ED1BD: push edi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120ED1BE: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_120ED1C1:
    ecx = ebp + (-0x24); /* 0x120ED1C1: lea ecx, [ebp - 0x24] */
    RECOMP_CALL(sub_121C17F4); /* 0x120ED1C4: call 0x121c17f4 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x120ED1C9: pop edi */
    eax = esi; /* 0x120ED1CA: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120ED1CC: pop esi */
    ebx = POP32_VAL(esp); /* 0x120ED1CD: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120ED1CE: leave  */
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x120ED1CF: ret 0x24 */
    RECOMP_REGS_OUT();
}

void sub_120ED1D7(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120ED1D7u);

L_120ED1D7:
    edi = edi; /* 0x120ED1D7: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120ED1D9: push ebp */
    ebp = esp; /* 0x120ED1DA: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14Cu; /* 0x120ED1DC: sub esp, 0x14c */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x120ED1E2: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x120ED1E7: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x120ED1E9: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x120ED1EC: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x124)) = eax; /* 0x120ED1EF: mov dword ptr [ebp - 0x124], eax */
    eax = MEM32(ebp + 0xC); /* 0x120ED1F5: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ebp + (-0x12C)) = eax; /* 0x120ED1F8: mov dword ptr [ebp - 0x12c], eax */
    eax = MEM32(ebp + 0x10); /* 0x120ED1FE: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x120)) = eax; /* 0x120ED201: mov dword ptr [ebp - 0x120], eax */
    eax = MEM32(ebp + 0x18); /* 0x120ED207: mov eax, dword ptr [ebp + 0x18] */
    PUSH32(esp, ebx); /* 0x120ED20A: push ebx */
    ebx = MEM32(ebp + 0x14); /* 0x120ED20B: mov ebx, dword ptr [ebp + 0x14] */
    MEM32(ebp + (-0x138)) = eax; /* 0x120ED20E: mov dword ptr [ebp - 0x138], eax */
    eax = MEM32(ebp + 0x20); /* 0x120ED214: mov eax, dword ptr [ebp + 0x20] */
    PUSH32(esp, esi); /* 0x120ED217: push esi */
    esi = MEM32(ebp + 0x28); /* 0x120ED218: mov esi, dword ptr [ebp + 0x28] */
    MEM32(ebp + (-0x13C)) = eax; /* 0x120ED21B: mov dword ptr [ebp - 0x13c], eax */
    eax = MEM32(ebp + 0x24); /* 0x120ED221: mov eax, dword ptr [ebp + 0x24] */
    PUSH32(esp, edi); /* 0x120ED224: push edi */
    ecx = ebp + (-0x14C); /* 0x120ED225: lea ecx, [ebp - 0x14c] */
    MEM32(ebp + (-0x114)) = eax; /* 0x120ED22B: mov dword ptr [ebp - 0x114], eax */
    MEM32(ebp + (-0x128)) = esi; /* 0x120ED231: mov dword ptr [ebp - 0x128], esi */
    RECOMP_CALL(sub_121C0EDB); /* 0x120ED237: call 0x121c0edb */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x120ED23C: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x11C)) = eax; /* 0x120ED23E: mov dword ptr [ebp - 0x11c], eax */
    edi = eax; /* 0x120ED244: mov edi, eax */
    MEM32(ebp + (-0x10C)) = eax; /* 0x120ED246: mov dword ptr [ebp - 0x10c], eax */
    ecx = eax; /* 0x120ED24C: mov ecx, eax */
    MEM32(ebp + (-0x110)) = eax; /* 0x120ED24E: mov dword ptr [ebp - 0x110], eax */
    eax = MEM32(ebp + 0x1C); /* 0x120ED254: mov eax, dword ptr [ebp + 0x1c] */
    /* test eax, 0x00010000u */ /* 0x120ED257: test eax, 0x10000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00010000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ED2CE; /* 0x120ED25C: je 0x120ed2ce */
L_120ED25E:
    ecx = 0x121D9AF8u; /* 0x120ED25E: mov ecx, 0x121d9af8 */
    RECOMP_CALL(sub_120188AB); /* 0x120ED263: call 0x120188ab */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120ED268: mov esi, eax */
    /* test esi, esi */ /* 0x120ED26A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120ED558; /* 0x120ED26C: js 0x120ed558 */
L_120ED272:
    PUSH32(esp, 0x12008BDCu); /* 0x120ED272: push 0x12008bdc */
    ecx = 0x121D9AF8u; /* 0x120ED277: mov ecx, 0x121d9af8 */
    RECOMP_CALL(sub_120188D5); /* 0x120ED27C: call 0x120188d5 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x120ED281: mov ecx, eax */
    /* test ecx, ecx */ /* 0x120ED283: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120ED291; /* 0x120ED285: jne 0x120ed291 */
L_120ED287:
    esi = 0x80004005u; /* 0x120ED287: mov esi, 0x80004005 */
    goto L_120ED558; /* 0x120ED28C: jmp 0x120ed558 */
L_120ED291:
    PUSH32(esp, MEM32(ebp + (-0x128))); /* 0x120ED291: push dword ptr [ebp - 0x128] */
    eax = MEM32(ebp + 0x1C); /* 0x120ED297: mov eax, dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + (-0x114))); /* 0x120ED29A: push dword ptr [ebp - 0x114] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFEFFFFu);
    eax = eax & 0xFFFEFFFFu; /* 0x120ED2A0: and eax, 0xfffeffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + (-0x13C))); /* 0x120ED2A5: push dword ptr [ebp - 0x13c] */
    PUSH32(esp, eax); /* 0x120ED2AB: push eax */
    PUSH32(esp, MEM32(ebp + (-0x138))); /* 0x120ED2AC: push dword ptr [ebp - 0x138] */
    PUSH32(esp, ebx); /* 0x120ED2B2: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x120))); /* 0x120ED2B3: push dword ptr [ebp - 0x120] */
    PUSH32(esp, MEM32(ebp + (-0x12C))); /* 0x120ED2B9: push dword ptr [ebp - 0x12c] */
    PUSH32(esp, MEM32(ebp + (-0x124))); /* 0x120ED2BF: push dword ptr [ebp - 0x124] */
    RECOMP_ICALL(ecx); /* 0x120ED2C5: call ecx */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120ED2C7: mov esi, eax */
    goto L_120ED558; /* 0x120ED2C9: jmp 0x120ed558 */
L_120ED2CE:
    edx = eax; /* 0x120ED2CE: mov edx, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFDF7FFu);
    eax = eax & 0xFFFDF7FFu; /* 0x120ED2D0: and eax, 0xfffdf7ff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0x00020800u);
    edx = edx & 0x00020800u; /* 0x120ED2D5: and edx, 0x20800 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x1C) = eax; /* 0x120ED2DB: mov dword ptr [ebp + 0x1c], eax */
    eax = MEM32(ebp + (-0x114)); /* 0x120ED2DE: mov eax, dword ptr [ebp - 0x114] */
    MEM32(ebp + (-0x134)) = edx; /* 0x120ED2E4: mov dword ptr [ebp - 0x134], edx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x120ED2EA: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x120ED2EC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ED2F2; /* 0x120ED2EE: je 0x120ed2f2 */
L_120ED2F0:
    MEM32(eax) = edx; /* 0x120ED2F0: mov dword ptr [eax], edx */
L_120ED2F2:
    /* test esi, esi */ /* 0x120ED2F2: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ED2F8; /* 0x120ED2F4: je 0x120ed2f8 */
L_120ED2F6:
    MEM32(esi) = edx; /* 0x120ED2F6: mov dword ptr [esi], edx */
L_120ED2F8:
    /* cmp MEM32(ebp + (-0x124)), ecx */ /* 0x120ED2F8: cmp dword ptr [ebp - 0x124], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x124))); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120ED532; /* 0x120ED2FE: je 0x120ed532 */
L_120ED304:
    eax = MEM32(ebp + (-0x12C)); /* 0x120ED304: mov eax, dword ptr [ebp - 0x12c] */
    /* test eax, eax */ /* 0x120ED30A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ED532; /* 0x120ED30C: je 0x120ed532 */
L_120ED312:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120ED312: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x120ED314: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x130)) = ecx; /* 0x120ED315: mov dword ptr [ebp - 0x130], ecx */
    /* test ebx, ebx */ /* 0x120ED31B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120ED350; /* 0x120ED31D: jne 0x120ed350 */
L_120ED31F:
    PUSH32(esp, ecx); /* 0x120ED31F: push ecx */
    PUSH32(esp, eax); /* 0x120ED320: push eax */
    ecx = ebp + (-0x14C); /* 0x120ED321: lea ecx, [ebp - 0x14c] */
    RECOMP_CALL(sub_121C1531); /* 0x120ED327: call 0x121c1531 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120ED32C: mov esi, eax */
    /* test esi, esi */ /* 0x120ED32E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120ED558; /* 0x120ED330: js 0x120ed558 */
L_120ED336:
    eax = MEM32(ebp + (-0x140)); /* 0x120ED336: mov eax, dword ptr [ebp - 0x140] */
    MEM32(ebp + (-0x118)) = eax; /* 0x120ED33C: mov dword ptr [ebp - 0x118], eax */
    eax = MEM32(ebp + (-0x144)); /* 0x120ED342: mov eax, dword ptr [ebp - 0x144] */
    MEM32(ebp + (-0x110)) = eax; /* 0x120ED348: mov dword ptr [ebp - 0x110], eax */
    goto L_120ED395; /* 0x120ED34E: jmp 0x120ed395 */
L_120ED350:
    PUSH32(esp, edx); /* 0x120ED350: push edx */
    PUSH32(esp, edx); /* 0x120ED351: push edx */
    PUSH32(esp, 0x104u); /* 0x120ED352: push 0x104 */
    ecx = ebp + (-0x108); /* 0x120ED357: lea ecx, [ebp - 0x108] */
    PUSH32(esp, ecx); /* 0x120ED35D: push ecx */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x120ED35E: push -1 */
    PUSH32(esp, eax); /* 0x120ED360: push eax */
    PUSH32(esp, edx); /* 0x120ED361: push edx */
    PUSH32(esp, 0xFDE9u); /* 0x120ED362: push 0xfde9 */
    RECOMP_ICALL(MEM32(0x1200110C)); /* 0x120ED367: call dword ptr [0x1200110c] */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx); /* 0x120ED36D: mov eax, dword ptr [ebx] */
    ecx = ebp + (-0x118); /* 0x120ED36F: lea ecx, [ebp - 0x118] */
    PUSH32(esp, ecx); /* 0x120ED375: push ecx */
    ecx = ebp + (-0x110); /* 0x120ED376: lea ecx, [ebp - 0x110] */
    PUSH32(esp, ecx); /* 0x120ED37C: push ecx */
    PUSH32(esp, 0); /* 0x120ED37D: push 0 */
    ecx = ebp + (-0x108); /* 0x120ED37F: lea ecx, [ebp - 0x108] */
    PUSH32(esp, ecx); /* 0x120ED385: push ecx */
    PUSH32(esp, 0); /* 0x120ED386: push 0 */
    PUSH32(esp, ebx); /* 0x120ED388: push ebx */
    RECOMP_ICALL(MEM32(eax)); /* 0x120ED389: call dword ptr [eax] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120ED38B: mov esi, eax */
    /* test esi, esi */ /* 0x120ED38D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120ED558; /* 0x120ED38F: js 0x120ed558 */
L_120ED395:
    PUSH32(esp, 0x15Cu); /* 0x120ED395: push 0x15c */
    RECOMP_CALL(sub_121BF394); /* 0x120ED39A: call 0x121bf394 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120ED39F: pop ecx */
    /* test eax, eax */ /* 0x120ED3A0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ED3AF; /* 0x120ED3A2: je 0x120ed3af */
L_120ED3A4:
    ecx = eax; /* 0x120ED3A4: mov ecx, eax */
    RECOMP_CALL(sub_120FAE36); /* 0x120ED3A6: call 0x120fae36 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x120ED3AB: mov edi, eax */
    goto L_120ED3B1; /* 0x120ED3AD: jmp 0x120ed3b1 */
L_120ED3AF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120ED3AF: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_120ED3B1:
    /* test edi, edi */ /* 0x120ED3B1: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120ED3BF; /* 0x120ED3B3: jne 0x120ed3bf */
L_120ED3B5:
    esi = 0x8007000Eu; /* 0x120ED3B5: mov esi, 0x8007000e */
    goto L_120ED53B; /* 0x120ED3BA: jmp 0x120ed53b */
L_120ED3BF:
    /* cmp MEM32(ebp + (-0x118)), 4 */ /* 0x120ED3BF: cmp dword ptr [ebp - 0x118], 4 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x118))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120ED3D2; /* 0x120ED3C6: jae 0x120ed3d2 */
L_120ED3C8:
    esi = 0x80004005u; /* 0x120ED3C8: mov esi, 0x80004005 */
    goto L_120ED53B; /* 0x120ED3CD: jmp 0x120ed53b */
L_120ED3D2:
    eax = MEM32(ebp + (-0x110)); /* 0x120ED3D2: mov eax, dword ptr [ebp - 0x110] */
    /* cmp MEM32(eax), 0xFEFF0901u */ /* 0x120ED3D8: cmp dword ptr [eax], 0xfeff0901 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xFEFF0901u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120ED483; /* 0x120ED3DE: je 0x120ed483 */
L_120ED3E4:
    /* test ebx, ebx */ /* 0x120ED3E4: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120ED3F5; /* 0x120ED3E6: jne 0x120ed3f5 */
L_120ED3E8:
    ecx = ebp + (-0x14C); /* 0x120ED3E8: lea ecx, [ebp - 0x14c] */
    RECOMP_CALL(sub_121C17AC); /* 0x120ED3EE: call 0x121c17ac */
    RECOMP_FLAGS_IN();
    goto L_120ED401; /* 0x120ED3F3: jmp 0x120ed401 */
L_120ED3F5:
    PUSH32(esp, MEM32(ebp + (-0x110))); /* 0x120ED3F5: push dword ptr [ebp - 0x110] */
    eax = MEM32(ebx); /* 0x120ED3FB: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x120ED3FD: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x120ED3FE: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_120ED401:
    PUSH32(esp, MEM32(ebp + (-0x128))); /* 0x120ED401: push dword ptr [ebp - 0x128] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x130))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x130)) = MEM32(ebp + (-0x130)) & 0; /* 0x120ED407: and dword ptr [ebp - 0x130], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x11C); /* 0x120ED40E: lea eax, [ebp - 0x11c] */
    PUSH32(esp, eax); /* 0x120ED414: push eax */
    eax = MEM32(ebp + (-0x134)); /* 0x120ED415: mov eax, dword ptr [ebp - 0x134] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00020000u);
    eax = eax & 0x00020000u; /* 0x120ED41B: and eax, 0x20000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | MEM32(ebp + 0x1C))); _flag_b = (uint32_t)((eax | MEM32(ebp + 0x1C)));
    eax = eax | MEM32(ebp + 0x1C); /* 0x120ED420: or eax, dword ptr [ebp + 0x1c] */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x120ED423: push eax */
    PUSH32(esp, ebx); /* 0x120ED424: push ebx */
    PUSH32(esp, MEM32(ebp + (-0x120))); /* 0x120ED425: push dword ptr [ebp - 0x120] */
    PUSH32(esp, MEM32(ebp + (-0x12C))); /* 0x120ED42B: push dword ptr [ebp - 0x12c] */
    RECOMP_CALL(sub_120EC60A); /* 0x120ED431: call 0x120ec60a */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120ED436: mov esi, eax */
    /* test esi, esi */ /* 0x120ED438: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120ED558; /* 0x120ED43A: js 0x120ed558 */
L_120ED440:
    esi = MEM32(ebp + (-0x128)); /* 0x120ED440: mov esi, dword ptr [ebp - 0x128] */
    /* test esi, esi */ /* 0x120ED446: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ED459; /* 0x120ED448: je 0x120ed459 */
L_120ED44A:
    ecx = MEM32(esi); /* 0x120ED44A: mov ecx, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x120ED44C: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ED459; /* 0x120ED44E: je 0x120ed459 */
L_120ED450:
    eax = MEM32(ecx); /* 0x120ED450: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120ED452: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120ED453: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x120ED456: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120ED459:
    eax = MEM32(ebp + (-0x11C)); /* 0x120ED459: mov eax, dword ptr [ebp - 0x11c] */
    ecx = MEM32(eax); /* 0x120ED45F: mov ecx, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x120ED461: push esi */
    edx = ebp + (-0x10C); /* 0x120ED462: lea edx, [ebp - 0x10c] */
    PUSH32(esp, edx); /* 0x120ED468: push edx */
    edx = MEM32(ebp + 0x1C); /* 0x120ED469: mov edx, dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(0xFFFFFFE7u);
    edx = edx & 0xFFFFFFE7u; /* 0x120ED46C: and edx, 0xffffffe7 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edx); /* 0x120ED46F: push edx */
    PUSH32(esp, eax); /* 0x120ED470: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xEC)); /* 0x120ED471: call dword ptr [ecx + 0xec] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120ED477: mov esi, eax */
    /* test esi, esi */ /* 0x120ED479: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120ED558; /* 0x120ED47B: js 0x120ed558 */
L_120ED481:
    goto L_120ED4CD; /* 0x120ED481: jmp 0x120ed4cd */
L_120ED483:
    /* cmp MEM32(ebp + (-0x114)), 0 */ /* 0x120ED483: cmp dword ptr [ebp - 0x114], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x114))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120ED53B; /* 0x120ED48A: je 0x120ed53b */
L_120ED490:
    eax = ebp + (-0x10C); /* 0x120ED490: lea eax, [ebp - 0x10c] */
    PUSH32(esp, eax); /* 0x120ED496: push eax */
    PUSH32(esp, MEM32(ebp + (-0x118))); /* 0x120ED497: push dword ptr [ebp - 0x118] */
    RECOMP_CALL(sub_120192FE); /* 0x120ED49D: call 0x120192fe */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120ED4A2: mov esi, eax */
    /* test esi, esi */ /* 0x120ED4A4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120ED53B; /* 0x120ED4A6: js 0x120ed53b */
L_120ED4AC:
    PUSH32(esp, MEM32(ebp + (-0x118))); /* 0x120ED4AC: push dword ptr [ebp - 0x118] */
    eax = MEM32(ebp + (-0x10C)); /* 0x120ED4B2: mov eax, dword ptr [ebp - 0x10c] */
    PUSH32(esp, MEM32(ebp + (-0x110))); /* 0x120ED4B8: push dword ptr [ebp - 0x110] */
    ecx = MEM32(eax); /* 0x120ED4BE: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120ED4C0: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x120ED4C1: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x120ED4C4: push eax */
    RECOMP_CALL(sub_121BF440); /* 0x120ED4C5: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120ED4CA: add esp, 0xc */
    _flag_k = FK_ADD;
L_120ED4CD:
    /* cmp MEM32(ebp + (-0x114)), 0 */ /* 0x120ED4CD: cmp dword ptr [ebp - 0x114], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x114))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120ED52A; /* 0x120ED4D4: je 0x120ed52a */
L_120ED4D6:
    PUSH32(esp, MEM32(ebp + (-0x138))); /* 0x120ED4D6: push dword ptr [ebp - 0x138] */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x120))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x120)) = MEM32(ebp + (-0x120)) & 0; /* 0x120ED4DC: and dword ptr [ebp - 0x120], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + (-0x120); /* 0x120ED4E3: lea eax, [ebp - 0x120] */
    PUSH32(esp, eax); /* 0x120ED4E9: push eax */
    PUSH32(esp, MEM32(ebp + (-0x10C))); /* 0x120ED4EA: push dword ptr [ebp - 0x10c] */
    ecx = edi; /* 0x120ED4F0: mov ecx, edi */
    PUSH32(esp, MEM32(ebp + (-0x134))); /* 0x120ED4F2: push dword ptr [ebp - 0x134] */
    PUSH32(esp, MEM32(ebp + (-0x13C))); /* 0x120ED4F8: push dword ptr [ebp - 0x13c] */
    PUSH32(esp, MEM32(ebp + (-0x124))); /* 0x120ED4FE: push dword ptr [ebp - 0x124] */
    RECOMP_CALL(sub_120F9343); /* 0x120ED504: call 0x120f9343 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120ED509: mov esi, eax */
    /* test esi, esi */ /* 0x120ED50B: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120ED52A; /* 0x120ED50D: js 0x120ed52a */
L_120ED50F:
    ecx = edi; /* 0x120ED50F: mov ecx, edi */
    RECOMP_CALL(sub_120F7636); /* 0x120ED511: call 0x120f7636 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120ED516: mov esi, eax */
    /* test esi, esi */ /* 0x120ED518: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120ED52A; /* 0x120ED51A: js 0x120ed52a */
L_120ED51C:
    eax = MEM32(ebp + (-0x114)); /* 0x120ED51C: mov eax, dword ptr [ebp - 0x114] */
    MEM32(eax) = edi; /* 0x120ED522: mov dword ptr [eax], edi */
    eax = MEM32(edi); /* 0x120ED524: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x120ED526: push edi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x120ED527: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_120ED52A:
    ecx = MEM32(ebp + (-0x130)); /* 0x120ED52A: mov ecx, dword ptr [ebp - 0x130] */
    goto L_120ED537; /* 0x120ED530: jmp 0x120ed537 */
L_120ED532:
    esi = 0x8876086Cu; /* 0x120ED532: mov esi, 0x8876086c */
L_120ED537:
    /* test ecx, ecx */ /* 0x120ED537: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ED558; /* 0x120ED539: je 0x120ed558 */
L_120ED53B:
    /* test ebx, ebx */ /* 0x120ED53B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120ED54C; /* 0x120ED53D: jne 0x120ed54c */
L_120ED53F:
    ecx = ebp + (-0x14C); /* 0x120ED53F: lea ecx, [ebp - 0x14c] */
    RECOMP_CALL(sub_121C17AC); /* 0x120ED545: call 0x121c17ac */
    RECOMP_FLAGS_IN();
    goto L_120ED558; /* 0x120ED54A: jmp 0x120ed558 */
L_120ED54C:
    PUSH32(esp, MEM32(ebp + (-0x110))); /* 0x120ED54C: push dword ptr [ebp - 0x110] */
    eax = MEM32(ebx); /* 0x120ED552: mov eax, dword ptr [ebx] */
    PUSH32(esp, ebx); /* 0x120ED554: push ebx */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x120ED555: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
L_120ED558:
    ecx = MEM32(ebp + (-0x11C)); /* 0x120ED558: mov ecx, dword ptr [ebp - 0x11c] */
    /* test ecx, ecx */ /* 0x120ED55E: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ED56F; /* 0x120ED560: je 0x120ed56f */
L_120ED562:
    eax = MEM32(ecx); /* 0x120ED562: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120ED564: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120ED565: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x11C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x11C)) = MEM32(ebp + (-0x11C)) & 0; /* 0x120ED568: and dword ptr [ebp - 0x11c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120ED56F:
    ecx = MEM32(ebp + (-0x10C)); /* 0x120ED56F: mov ecx, dword ptr [ebp - 0x10c] */
    /* test ecx, ecx */ /* 0x120ED575: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ED586; /* 0x120ED577: je 0x120ed586 */
L_120ED579:
    eax = MEM32(ecx); /* 0x120ED579: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120ED57B: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120ED57C: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x10C))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x10C)) = MEM32(ebp + (-0x10C)) & 0; /* 0x120ED57F: and dword ptr [ebp - 0x10c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120ED586:
    /* test edi, edi */ /* 0x120ED586: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ED590; /* 0x120ED588: je 0x120ed590 */
L_120ED58A:
    eax = MEM32(edi); /* 0x120ED58A: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x120ED58C: push edi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120ED58D: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_120ED590:
    ecx = ebp + (-0x14C); /* 0x120ED590: lea ecx, [ebp - 0x14c] */
    RECOMP_CALL(sub_121C17F4); /* 0x120ED596: call 0x121c17f4 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x120ED59B: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x120ED59E: pop edi */
    eax = esi; /* 0x120ED59F: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120ED5A1: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x120ED5A2: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x120ED5A4: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x120ED5A5: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120ED5AA: leave  */
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x120ED5AB: ret 0x24 */
    RECOMP_REGS_OUT();
}

void sub_120ED5B3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120ED5B3u);

L_120ED5B3:
    edi = edi; /* 0x120ED5B3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120ED5B5: push ebp */
    ebp = esp; /* 0x120ED5B6: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x120ED5B8: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x120ED5BB: push ebx */
    PUSH32(esp, esi); /* 0x120ED5BC: push esi */
    PUSH32(esp, edi); /* 0x120ED5BD: push edi */
    ecx = ebp + (-0x14); /* 0x120ED5BE: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_121C1804); /* 0x120ED5C1: call 0x121c1804 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x20); /* 0x120ED5C6: mov ebx, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x120ED5C9: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = esi; /* 0x120ED5CB: mov dword ptr [ebp - 8], esi */
    edi = esi; /* 0x120ED5CE: mov edi, esi */
    MEM32(ebp + (-0x4)) = esi; /* 0x120ED5D0: mov dword ptr [ebp - 4], esi */
    /* test ebx, 0x00010000u */ /* 0x120ED5D3: test ebx, 0x10000 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x00010000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ED637; /* 0x120ED5D9: je 0x120ed637 */
L_120ED5DB:
    ecx = 0x121D9AF8u; /* 0x120ED5DB: mov ecx, 0x121d9af8 */
    RECOMP_CALL(sub_120188AB); /* 0x120ED5E0: call 0x120188ab */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120ED5E5: mov esi, eax */
    /* test esi, esi */ /* 0x120ED5E7: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120ED7A0; /* 0x120ED5E9: js 0x120ed7a0 */
L_120ED5EF:
    PUSH32(esp, 0x12008BF8u); /* 0x120ED5EF: push 0x12008bf8 */
    ecx = 0x121D9AF8u; /* 0x120ED5F4: mov ecx, 0x121d9af8 */
    RECOMP_CALL(sub_120188D5); /* 0x120ED5F9: call 0x120188d5 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120ED5FE: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120ED60C; /* 0x120ED600: jne 0x120ed60c */
L_120ED602:
    esi = 0x80004005u; /* 0x120ED602: mov esi, 0x80004005 */
    goto L_120ED7A0; /* 0x120ED607: jmp 0x120ed7a0 */
L_120ED60C:
    PUSH32(esp, MEM32(ebp + 0x2C)); /* 0x120ED60C: push dword ptr [ebp + 0x2c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFEFFFFu);
    ebx = ebx & 0xFFFEFFFFu; /* 0x120ED60F: and ebx, 0xfffeffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x120ED615: push dword ptr [ebp + 0x28] */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x120ED618: push dword ptr [ebp + 0x24] */
    PUSH32(esp, ebx); /* 0x120ED61B: push ebx */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120ED61C: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120ED61F: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120ED622: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120ED625: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120ED628: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120ED62B: push dword ptr [ebp + 8] */
    RECOMP_ICALL(eax); /* 0x120ED62E: call eax */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120ED630: mov esi, eax */
    goto L_120ED7A0; /* 0x120ED632: jmp 0x120ed7a0 */
L_120ED637:
    eax = ebx; /* 0x120ED637: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00020800u);
    eax = eax & 0x00020800u; /* 0x120ED639: and eax, 0x20800 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x20) = eax; /* 0x120ED63E: mov dword ptr [ebp + 0x20], eax */
    eax = MEM32(ebp + 0x28); /* 0x120ED641: mov eax, dword ptr [ebp + 0x28] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFDF7FFu);
    ebx = ebx & 0xFFFDF7FFu; /* 0x120ED644: and ebx, 0xfffdf7ff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x120ED64A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ED650; /* 0x120ED64C: je 0x120ed650 */
L_120ED64E:
    MEM32(eax) = esi; /* 0x120ED64E: mov dword ptr [eax], esi */
L_120ED650:
    eax = MEM32(ebp + 0x2C); /* 0x120ED650: mov eax, dword ptr [ebp + 0x2c] */
    /* test eax, eax */ /* 0x120ED653: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ED659; /* 0x120ED655: je 0x120ed659 */
L_120ED657:
    MEM32(eax) = esi; /* 0x120ED657: mov dword ptr [eax], esi */
L_120ED659:
    /* cmp MEM32(ebp + 0x8), esi */ /* 0x120ED659: cmp dword ptr [ebp + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120ED79B; /* 0x120ED65C: je 0x120ed79b */
L_120ED662:
    /* cmp MEM32(ebp + 0x10), esi */ /* 0x120ED662: cmp dword ptr [ebp + 0x10], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120ED79B; /* 0x120ED665: je 0x120ed79b */
L_120ED66B:
    PUSH32(esp, 0x15Cu); /* 0x120ED66B: push 0x15c */
    RECOMP_CALL(sub_121BF394); /* 0x120ED670: call 0x121bf394 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120ED675: pop ecx */
    /* test eax, eax */ /* 0x120ED676: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ED683; /* 0x120ED678: je 0x120ed683 */
L_120ED67A:
    ecx = eax; /* 0x120ED67A: mov ecx, eax */
    RECOMP_CALL(sub_120FAE36); /* 0x120ED67C: call 0x120fae36 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x120ED681: mov edi, eax */
L_120ED683:
    /* test edi, edi */ /* 0x120ED683: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120ED691; /* 0x120ED685: jne 0x120ed691 */
L_120ED687:
    esi = 0x8007000Eu; /* 0x120ED687: mov esi, 0x8007000e */
    goto L_120ED7A0; /* 0x120ED68C: jmp 0x120ed7a0 */
L_120ED691:
    PUSH32(esp, esi); /* 0x120ED691: push esi */
    PUSH32(esp, esi); /* 0x120ED692: push esi */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120ED693: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x14); /* 0x120ED696: lea ecx, [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120ED699: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_121C0F05); /* 0x120ED69C: call 0x121c0f05 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120ED6A1: mov esi, eax */
    /* test esi, esi */ /* 0x120ED6A3: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120ED7A0; /* 0x120ED6A5: js 0x120ed7a0 */
L_120ED6AB:
    /* cmp MEM32(ebp + (-0xC)), 4 */ /* 0x120ED6AB: cmp dword ptr [ebp - 0xc], 4 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120ED602; /* 0x120ED6AF: jb 0x120ed602 */
L_120ED6B5:
    eax = MEM32(ebp + (-0x10)); /* 0x120ED6B5: mov eax, dword ptr [ebp - 0x10] */
    /* cmp MEM32(eax), 0xFEFF0901u */ /* 0x120ED6B8: cmp dword ptr [eax], 0xfeff0901 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xFEFF0901u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120ED72B; /* 0x120ED6BE: je 0x120ed72b */
L_120ED6C0:
    ecx = ebp + (-0x14); /* 0x120ED6C0: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_121C1816); /* 0x120ED6C3: call 0x121c1816 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x2C)); /* 0x120ED6C8: push dword ptr [ebp + 0x2c] */
    eax = ebp + (-0x8); /* 0x120ED6CB: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x120ED6CE: push eax */
    eax = MEM32(ebp + 0x20); /* 0x120ED6CF: mov eax, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00020000u);
    eax = eax & 0x00020000u; /* 0x120ED6D2: and eax, 0x20000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | ebx)); _flag_b = (uint32_t)((eax | ebx));
    eax = eax | ebx; /* 0x120ED6D7: or eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x120ED6D9: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120ED6DA: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120ED6DD: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120ED6E0: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120ED6E3: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_120EC839); /* 0x120ED6E6: call 0x120ec839 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120ED6EB: mov esi, eax */
    /* test esi, esi */ /* 0x120ED6ED: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120ED7A0; /* 0x120ED6EF: js 0x120ed7a0 */
L_120ED6F5:
    esi = MEM32(ebp + 0x2C); /* 0x120ED6F5: mov esi, dword ptr [ebp + 0x2c] */
    /* test esi, esi */ /* 0x120ED6F8: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ED70B; /* 0x120ED6FA: je 0x120ed70b */
L_120ED6FC:
    ecx = MEM32(esi); /* 0x120ED6FC: mov ecx, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x120ED6FE: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ED70B; /* 0x120ED700: je 0x120ed70b */
L_120ED702:
    eax = MEM32(ecx); /* 0x120ED702: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120ED704: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120ED705: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x120ED708: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120ED70B:
    eax = MEM32(ebp + (-0x8)); /* 0x120ED70B: mov eax, dword ptr [ebp - 8] */
    ecx = MEM32(eax); /* 0x120ED70E: mov ecx, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x120ED710: push esi */
    edx = ebp + (-0x4); /* 0x120ED711: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x120ED714: push edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFE7u);
    ebx = ebx & 0xFFFFFFE7u; /* 0x120ED715: and ebx, 0xffffffe7 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x120ED718: push ebx */
    PUSH32(esp, eax); /* 0x120ED719: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xEC)); /* 0x120ED71A: call dword ptr [ecx + 0xec] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120ED720: mov esi, eax */
    /* test esi, esi */ /* 0x120ED722: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120ED7A0; /* 0x120ED724: js 0x120ed7a0 */
L_120ED726:
    ebx = MEM32(ebp + 0x28); /* 0x120ED726: mov ebx, dword ptr [ebp + 0x28] */
    goto L_120ED75C; /* 0x120ED729: jmp 0x120ed75c */
L_120ED72B:
    ebx = MEM32(ebp + 0x28); /* 0x120ED72B: mov ebx, dword ptr [ebp + 0x28] */
    /* test ebx, ebx */ /* 0x120ED72E: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ED7A0; /* 0x120ED730: je 0x120ed7a0 */
L_120ED732:
    eax = ebp + (-0x4); /* 0x120ED732: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x120ED735: push eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x120ED736: push dword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_120192FE); /* 0x120ED739: call 0x120192fe */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120ED73E: mov esi, eax */
    /* test esi, esi */ /* 0x120ED740: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120ED7A0; /* 0x120ED742: js 0x120ed7a0 */
L_120ED744:
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x120ED744: push dword ptr [ebp - 0xc] */
    eax = MEM32(ebp + (-0x4)); /* 0x120ED747: mov eax, dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x120ED74A: push dword ptr [ebp - 0x10] */
    ecx = MEM32(eax); /* 0x120ED74D: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120ED74F: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x120ED750: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x120ED753: push eax */
    RECOMP_CALL(sub_121BF440); /* 0x120ED754: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120ED759: add esp, 0xc */
    _flag_k = FK_ADD;
L_120ED75C:
    /* test ebx, ebx */ /* 0x120ED75C: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ED7A0; /* 0x120ED75E: je 0x120ed7a0 */
L_120ED760:
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120ED760: push dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0; /* 0x120ED763: and dword ptr [ebp + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + 0x10; /* 0x120ED767: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x120ED76A: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x120ED76B: push dword ptr [ebp - 4] */
    ecx = edi; /* 0x120ED76E: mov ecx, edi */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x120ED770: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x120ED773: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120ED776: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_120F9343); /* 0x120ED779: call 0x120f9343 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120ED77E: mov esi, eax */
    /* test esi, esi */ /* 0x120ED780: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120ED7A0; /* 0x120ED782: js 0x120ed7a0 */
L_120ED784:
    ecx = edi; /* 0x120ED784: mov ecx, edi */
    RECOMP_CALL(sub_120F7636); /* 0x120ED786: call 0x120f7636 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120ED78B: mov esi, eax */
    /* test esi, esi */ /* 0x120ED78D: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120ED7A0; /* 0x120ED78F: js 0x120ed7a0 */
L_120ED791:
    MEM32(ebx) = edi; /* 0x120ED791: mov dword ptr [ebx], edi */
    eax = MEM32(edi); /* 0x120ED793: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x120ED795: push edi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x120ED796: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    goto L_120ED7A0; /* 0x120ED799: jmp 0x120ed7a0 */
L_120ED79B:
    esi = 0x8876086Cu; /* 0x120ED79B: mov esi, 0x8876086c */
L_120ED7A0:
    ecx = MEM32(ebp + (-0x8)); /* 0x120ED7A0: mov ecx, dword ptr [ebp - 8] */
    /* test ecx, ecx */ /* 0x120ED7A3: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ED7B1; /* 0x120ED7A5: je 0x120ed7b1 */
L_120ED7A7:
    eax = MEM32(ecx); /* 0x120ED7A7: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120ED7A9: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120ED7AA: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x120ED7AD: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120ED7B1:
    ecx = MEM32(ebp + (-0x4)); /* 0x120ED7B1: mov ecx, dword ptr [ebp - 4] */
    /* test ecx, ecx */ /* 0x120ED7B4: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ED7C2; /* 0x120ED7B6: je 0x120ed7c2 */
L_120ED7B8:
    eax = MEM32(ecx); /* 0x120ED7B8: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120ED7BA: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120ED7BB: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x120ED7BE: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120ED7C2:
    /* test edi, edi */ /* 0x120ED7C2: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ED7CC; /* 0x120ED7C4: je 0x120ed7cc */
L_120ED7C6:
    eax = MEM32(edi); /* 0x120ED7C6: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x120ED7C8: push edi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120ED7C9: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_120ED7CC:
    ecx = ebp + (-0x14); /* 0x120ED7CC: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_121C0EF2); /* 0x120ED7CF: call 0x121c0ef2 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x120ED7D4: pop edi */
    eax = esi; /* 0x120ED7D5: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120ED7D7: pop esi */
    ebx = POP32_VAL(esp); /* 0x120ED7D8: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120ED7D9: leave  */
    RECOMP_FLAGS_OUT(); esp += 44; { RECOMP_REGS_OUT(); return; } /* 0x120ED7DA: ret 0x28 */
    RECOMP_REGS_OUT();
}

void sub_120ED7E2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120ED7E2u);

L_120ED7E2:
    edi = edi; /* 0x120ED7E2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120ED7E4: push ebp */
    ebp = esp; /* 0x120ED7E5: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x120ED7E7: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x120ED7EA: push ebx */
    PUSH32(esp, esi); /* 0x120ED7EB: push esi */
    PUSH32(esp, edi); /* 0x120ED7EC: push edi */
    ecx = ebp + (-0x14); /* 0x120ED7ED: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_121C1804); /* 0x120ED7F0: call 0x121c1804 */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + 0x20); /* 0x120ED7F5: mov ebx, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120ED7F8: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x8)) = ecx; /* 0x120ED7FA: mov dword ptr [ebp - 8], ecx */
    edi = ecx; /* 0x120ED7FD: mov edi, ecx */
    MEM32(ebp + (-0x4)) = ecx; /* 0x120ED7FF: mov dword ptr [ebp - 4], ecx */
    /* test ebx, 0x00010000u */ /* 0x120ED802: test ebx, 0x10000 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x00010000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ED866; /* 0x120ED808: je 0x120ed866 */
L_120ED80A:
    ecx = 0x121D9AF8u; /* 0x120ED80A: mov ecx, 0x121d9af8 */
    RECOMP_CALL(sub_120188AB); /* 0x120ED80F: call 0x120188ab */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120ED814: mov esi, eax */
    /* test esi, esi */ /* 0x120ED816: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120ED9D4; /* 0x120ED818: js 0x120ed9d4 */
L_120ED81E:
    PUSH32(esp, 0x12008C18u); /* 0x120ED81E: push 0x12008c18 */
    ecx = 0x121D9AF8u; /* 0x120ED823: mov ecx, 0x121d9af8 */
    RECOMP_CALL(sub_120188D5); /* 0x120ED828: call 0x120188d5 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120ED82D: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120ED83B; /* 0x120ED82F: jne 0x120ed83b */
L_120ED831:
    esi = 0x80004005u; /* 0x120ED831: mov esi, 0x80004005 */
    goto L_120ED9D4; /* 0x120ED836: jmp 0x120ed9d4 */
L_120ED83B:
    PUSH32(esp, MEM32(ebp + 0x2C)); /* 0x120ED83B: push dword ptr [ebp + 0x2c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFEFFFFu);
    ebx = ebx & 0xFFFEFFFFu; /* 0x120ED83E: and ebx, 0xfffeffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x120ED844: push dword ptr [ebp + 0x28] */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x120ED847: push dword ptr [ebp + 0x24] */
    PUSH32(esp, ebx); /* 0x120ED84A: push ebx */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120ED84B: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120ED84E: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120ED851: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120ED854: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120ED857: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120ED85A: push dword ptr [ebp + 8] */
    RECOMP_ICALL(eax); /* 0x120ED85D: call eax */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120ED85F: mov esi, eax */
    goto L_120ED9D4; /* 0x120ED861: jmp 0x120ed9d4 */
L_120ED866:
    eax = ebx; /* 0x120ED866: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00020800u);
    eax = eax & 0x00020800u; /* 0x120ED868: and eax, 0x20800 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x20) = eax; /* 0x120ED86D: mov dword ptr [ebp + 0x20], eax */
    eax = MEM32(ebp + 0x28); /* 0x120ED870: mov eax, dword ptr [ebp + 0x28] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFDF7FFu);
    ebx = ebx & 0xFFFDF7FFu; /* 0x120ED873: and ebx, 0xfffdf7ff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x120ED879: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ED87F; /* 0x120ED87B: je 0x120ed87f */
L_120ED87D:
    MEM32(eax) = ecx; /* 0x120ED87D: mov dword ptr [eax], ecx */
L_120ED87F:
    eax = MEM32(ebp + 0x2C); /* 0x120ED87F: mov eax, dword ptr [ebp + 0x2c] */
    /* test eax, eax */ /* 0x120ED882: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ED888; /* 0x120ED884: je 0x120ed888 */
L_120ED886:
    MEM32(eax) = ecx; /* 0x120ED886: mov dword ptr [eax], ecx */
L_120ED888:
    /* cmp MEM32(ebp + 0x8), ecx */ /* 0x120ED888: cmp dword ptr [ebp + 8], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120ED9CF; /* 0x120ED88B: je 0x120ed9cf */
L_120ED891:
    /* cmp MEM32(ebp + 0x10), ecx */ /* 0x120ED891: cmp dword ptr [ebp + 0x10], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120ED9CF; /* 0x120ED894: je 0x120ed9cf */
L_120ED89A:
    PUSH32(esp, 1); /* 0x120ED89A: push 1 */
    PUSH32(esp, ecx); /* 0x120ED89C: push ecx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120ED89D: push dword ptr [ebp + 0x10] */
    ecx = ebp + (-0x14); /* 0x120ED8A0: lea ecx, [ebp - 0x14] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120ED8A3: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_121C0F05); /* 0x120ED8A6: call 0x121c0f05 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120ED8AB: mov esi, eax */
    /* test esi, esi */ /* 0x120ED8AD: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120ED9D4; /* 0x120ED8AF: js 0x120ed9d4 */
L_120ED8B5:
    PUSH32(esp, 0x15Cu); /* 0x120ED8B5: push 0x15c */
    RECOMP_CALL(sub_121BF394); /* 0x120ED8BA: call 0x121bf394 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120ED8BF: pop ecx */
    /* test eax, eax */ /* 0x120ED8C0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ED8CF; /* 0x120ED8C2: je 0x120ed8cf */
L_120ED8C4:
    ecx = eax; /* 0x120ED8C4: mov ecx, eax */
    RECOMP_CALL(sub_120FAE36); /* 0x120ED8C6: call 0x120fae36 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x120ED8CB: mov edi, eax */
    goto L_120ED8D1; /* 0x120ED8CD: jmp 0x120ed8d1 */
L_120ED8CF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120ED8CF: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_120ED8D1:
    /* test edi, edi */ /* 0x120ED8D1: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120ED8DF; /* 0x120ED8D3: jne 0x120ed8df */
L_120ED8D5:
    esi = 0x8007000Eu; /* 0x120ED8D5: mov esi, 0x8007000e */
    goto L_120ED9D4; /* 0x120ED8DA: jmp 0x120ed9d4 */
L_120ED8DF:
    /* cmp MEM32(ebp + (-0xC)), 4 */ /* 0x120ED8DF: cmp dword ptr [ebp - 0xc], 4 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_120ED831; /* 0x120ED8E3: jb 0x120ed831 */
L_120ED8E9:
    eax = MEM32(ebp + (-0x10)); /* 0x120ED8E9: mov eax, dword ptr [ebp - 0x10] */
    /* cmp MEM32(eax), 0xFEFF0901u */ /* 0x120ED8EC: cmp dword ptr [eax], 0xfeff0901 */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(0xFEFF0901u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120ED95F; /* 0x120ED8F2: je 0x120ed95f */
L_120ED8F4:
    ecx = ebp + (-0x14); /* 0x120ED8F4: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_121C1816); /* 0x120ED8F7: call 0x121c1816 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + 0x2C)); /* 0x120ED8FC: push dword ptr [ebp + 0x2c] */
    eax = ebp + (-0x8); /* 0x120ED8FF: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x120ED902: push eax */
    eax = MEM32(ebp + 0x20); /* 0x120ED903: mov eax, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00020000u);
    eax = eax & 0x00020000u; /* 0x120ED906: and eax, 0x20000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | ebx)); _flag_b = (uint32_t)((eax | ebx));
    eax = eax | ebx; /* 0x120ED90B: or eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x120ED90D: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120ED90E: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120ED911: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120ED914: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120ED917: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_120ECA9A); /* 0x120ED91A: call 0x120eca9a */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120ED91F: mov esi, eax */
    /* test esi, esi */ /* 0x120ED921: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120ED9D4; /* 0x120ED923: js 0x120ed9d4 */
L_120ED929:
    esi = MEM32(ebp + 0x2C); /* 0x120ED929: mov esi, dword ptr [ebp + 0x2c] */
    /* test esi, esi */ /* 0x120ED92C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ED93F; /* 0x120ED92E: je 0x120ed93f */
L_120ED930:
    ecx = MEM32(esi); /* 0x120ED930: mov ecx, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x120ED932: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ED93F; /* 0x120ED934: je 0x120ed93f */
L_120ED936:
    eax = MEM32(ecx); /* 0x120ED936: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120ED938: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120ED939: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x120ED93C: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120ED93F:
    eax = MEM32(ebp + (-0x8)); /* 0x120ED93F: mov eax, dword ptr [ebp - 8] */
    ecx = MEM32(eax); /* 0x120ED942: mov ecx, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x120ED944: push esi */
    edx = ebp + (-0x4); /* 0x120ED945: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x120ED948: push edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFE7u);
    ebx = ebx & 0xFFFFFFE7u; /* 0x120ED949: and ebx, 0xffffffe7 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x120ED94C: push ebx */
    PUSH32(esp, eax); /* 0x120ED94D: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xEC)); /* 0x120ED94E: call dword ptr [ecx + 0xec] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120ED954: mov esi, eax */
    /* test esi, esi */ /* 0x120ED956: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120ED9D4; /* 0x120ED958: js 0x120ed9d4 */
L_120ED95A:
    ebx = MEM32(ebp + 0x28); /* 0x120ED95A: mov ebx, dword ptr [ebp + 0x28] */
    goto L_120ED990; /* 0x120ED95D: jmp 0x120ed990 */
L_120ED95F:
    ebx = MEM32(ebp + 0x28); /* 0x120ED95F: mov ebx, dword ptr [ebp + 0x28] */
    /* test ebx, ebx */ /* 0x120ED962: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ED9D4; /* 0x120ED964: je 0x120ed9d4 */
L_120ED966:
    eax = ebp + (-0x4); /* 0x120ED966: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x120ED969: push eax */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x120ED96A: push dword ptr [ebp - 0xc] */
    RECOMP_CALL(sub_120192FE); /* 0x120ED96D: call 0x120192fe */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120ED972: mov esi, eax */
    /* test esi, esi */ /* 0x120ED974: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120ED9D4; /* 0x120ED976: js 0x120ed9d4 */
L_120ED978:
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x120ED978: push dword ptr [ebp - 0xc] */
    eax = MEM32(ebp + (-0x4)); /* 0x120ED97B: mov eax, dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x120ED97E: push dword ptr [ebp - 0x10] */
    ecx = MEM32(eax); /* 0x120ED981: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120ED983: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x120ED984: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x120ED987: push eax */
    RECOMP_CALL(sub_121BF440); /* 0x120ED988: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120ED98D: add esp, 0xc */
    _flag_k = FK_ADD;
L_120ED990:
    /* test ebx, ebx */ /* 0x120ED990: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ED9D4; /* 0x120ED992: je 0x120ed9d4 */
L_120ED994:
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120ED994: push dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0; /* 0x120ED997: and dword ptr [ebp + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + 0x10; /* 0x120ED99B: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x120ED99E: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x120ED99F: push dword ptr [ebp - 4] */
    ecx = edi; /* 0x120ED9A2: mov ecx, edi */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x120ED9A4: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x120ED9A7: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120ED9AA: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_120F9343); /* 0x120ED9AD: call 0x120f9343 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120ED9B2: mov esi, eax */
    /* test esi, esi */ /* 0x120ED9B4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120ED9D4; /* 0x120ED9B6: js 0x120ed9d4 */
L_120ED9B8:
    ecx = edi; /* 0x120ED9B8: mov ecx, edi */
    RECOMP_CALL(sub_120F7636); /* 0x120ED9BA: call 0x120f7636 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120ED9BF: mov esi, eax */
    /* test esi, esi */ /* 0x120ED9C1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120ED9D4; /* 0x120ED9C3: js 0x120ed9d4 */
L_120ED9C5:
    MEM32(ebx) = edi; /* 0x120ED9C5: mov dword ptr [ebx], edi */
    eax = MEM32(edi); /* 0x120ED9C7: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x120ED9C9: push edi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x120ED9CA: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    goto L_120ED9D4; /* 0x120ED9CD: jmp 0x120ed9d4 */
L_120ED9CF:
    esi = 0x8876086Cu; /* 0x120ED9CF: mov esi, 0x8876086c */
L_120ED9D4:
    ecx = MEM32(ebp + (-0x8)); /* 0x120ED9D4: mov ecx, dword ptr [ebp - 8] */
    /* test ecx, ecx */ /* 0x120ED9D7: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ED9E5; /* 0x120ED9D9: je 0x120ed9e5 */
L_120ED9DB:
    eax = MEM32(ecx); /* 0x120ED9DB: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120ED9DD: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120ED9DE: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x120ED9E1: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120ED9E5:
    ecx = MEM32(ebp + (-0x4)); /* 0x120ED9E5: mov ecx, dword ptr [ebp - 4] */
    /* test ecx, ecx */ /* 0x120ED9E8: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120ED9F6; /* 0x120ED9EA: je 0x120ed9f6 */
L_120ED9EC:
    eax = MEM32(ecx); /* 0x120ED9EC: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120ED9EE: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120ED9EF: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x120ED9F2: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120ED9F6:
    /* test edi, edi */ /* 0x120ED9F6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EDA00; /* 0x120ED9F8: je 0x120eda00 */
L_120ED9FA:
    eax = MEM32(edi); /* 0x120ED9FA: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x120ED9FC: push edi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120ED9FD: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_120EDA00:
    ecx = ebp + (-0x14); /* 0x120EDA00: lea ecx, [ebp - 0x14] */
    RECOMP_CALL(sub_121C0EF2); /* 0x120EDA03: call 0x121c0ef2 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x120EDA08: pop edi */
    eax = esi; /* 0x120EDA09: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120EDA0B: pop esi */
    ebx = POP32_VAL(esp); /* 0x120EDA0C: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120EDA0D: leave  */
    RECOMP_FLAGS_OUT(); esp += 44; { RECOMP_REGS_OUT(); return; } /* 0x120EDA0E: ret 0x28 */
    RECOMP_REGS_OUT();
}

void sub_120EDA16(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EDA16u);

L_120EDA16:
    edi = edi; /* 0x120EDA16: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EDA18: push ebp */
    ebp = esp; /* 0x120EDA19: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x120EDA1B: push ecx */
    PUSH32(esp, ecx); /* 0x120EDA1C: push ecx */
    PUSH32(esp, ebx); /* 0x120EDA1D: push ebx */
    ebx = MEM32(ebp + 0x20); /* 0x120EDA1E: mov ebx, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x120EDA21: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x120EDA23: push esi */
    PUSH32(esp, edi); /* 0x120EDA24: push edi */
    esi = ecx; /* 0x120EDA25: mov esi, ecx */
    MEM32(ebp + (-0x8)) = ecx; /* 0x120EDA27: mov dword ptr [ebp - 8], ecx */
    edi = ecx; /* 0x120EDA2A: mov edi, ecx */
    MEM32(ebp + (-0x4)) = ecx; /* 0x120EDA2C: mov dword ptr [ebp - 4], ecx */
    /* test ebx, 0x00010000u */ /* 0x120EDA2F: test ebx, 0x10000 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x00010000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EDA8D; /* 0x120EDA35: je 0x120eda8d */
L_120EDA37:
    ecx = 0x121D9AF8u; /* 0x120EDA37: mov ecx, 0x121d9af8 */
    RECOMP_CALL(sub_120188AB); /* 0x120EDA3C: call 0x120188ab */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120EDA41: mov esi, eax */
    /* test esi, esi */ /* 0x120EDA43: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EDBDC; /* 0x120EDA45: js 0x120edbdc */
L_120EDA4B:
    PUSH32(esp, 0x12008C38u); /* 0x120EDA4B: push 0x12008c38 */
    ecx = 0x121D9AF8u; /* 0x120EDA50: mov ecx, 0x121d9af8 */
    RECOMP_CALL(sub_120188D5); /* 0x120EDA55: call 0x120188d5 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x120EDA5A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EDAF1; /* 0x120EDA5C: je 0x120edaf1 */
L_120EDA62:
    PUSH32(esp, MEM32(ebp + 0x2C)); /* 0x120EDA62: push dword ptr [ebp + 0x2c] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFEFFFFu);
    ebx = ebx & 0xFFFEFFFFu; /* 0x120EDA65: and ebx, 0xfffeffff */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x120EDA6B: push dword ptr [ebp + 0x28] */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x120EDA6E: push dword ptr [ebp + 0x24] */
    PUSH32(esp, ebx); /* 0x120EDA71: push ebx */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120EDA72: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120EDA75: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120EDA78: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120EDA7B: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EDA7E: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120EDA81: push dword ptr [ebp + 8] */
    RECOMP_ICALL(eax); /* 0x120EDA84: call eax */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120EDA86: mov esi, eax */
    goto L_120EDBDC; /* 0x120EDA88: jmp 0x120edbdc */
L_120EDA8D:
    eax = ebx; /* 0x120EDA8D: mov eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00020800u);
    eax = eax & 0x00020800u; /* 0x120EDA8F: and eax, 0x20800 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x20) = eax; /* 0x120EDA94: mov dword ptr [ebp + 0x20], eax */
    eax = MEM32(ebp + 0x28); /* 0x120EDA97: mov eax, dword ptr [ebp + 0x28] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFDF7FFu);
    ebx = ebx & 0xFFFDF7FFu; /* 0x120EDA9A: and ebx, 0xfffdf7ff */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, eax */ /* 0x120EDAA0: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EDAA6; /* 0x120EDAA2: je 0x120edaa6 */
L_120EDAA4:
    MEM32(eax) = ecx; /* 0x120EDAA4: mov dword ptr [eax], ecx */
L_120EDAA6:
    eax = MEM32(ebp + 0x2C); /* 0x120EDAA6: mov eax, dword ptr [ebp + 0x2c] */
    /* test eax, eax */ /* 0x120EDAA9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EDAAF; /* 0x120EDAAB: je 0x120edaaf */
L_120EDAAD:
    MEM32(eax) = ecx; /* 0x120EDAAD: mov dword ptr [eax], ecx */
L_120EDAAF:
    /* cmp MEM32(ebp + 0x8), ecx */ /* 0x120EDAAF: cmp dword ptr [ebp + 8], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EDBD7; /* 0x120EDAB2: je 0x120edbd7 */
L_120EDAB8:
    /* cmp MEM32(ebp + 0xC), ecx */ /* 0x120EDAB8: cmp dword ptr [ebp + 0xc], ecx */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EDBD7; /* 0x120EDABB: je 0x120edbd7 */
L_120EDAC1:
    PUSH32(esp, 0x15Cu); /* 0x120EDAC1: push 0x15c */
    RECOMP_CALL(sub_121BF394); /* 0x120EDAC6: call 0x121bf394 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x120EDACB: pop ecx */
    /* test eax, eax */ /* 0x120EDACC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EDADB; /* 0x120EDACE: je 0x120edadb */
L_120EDAD0:
    ecx = eax; /* 0x120EDAD0: mov ecx, eax */
    RECOMP_CALL(sub_120FAE36); /* 0x120EDAD2: call 0x120fae36 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x120EDAD7: mov edi, eax */
    goto L_120EDADD; /* 0x120EDAD9: jmp 0x120edadd */
L_120EDADB:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x120EDADB: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EDADD:
    /* test edi, edi */ /* 0x120EDADD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_120EDAEB; /* 0x120EDADF: jne 0x120edaeb */
L_120EDAE1:
    esi = 0x8007000Eu; /* 0x120EDAE1: mov esi, 0x8007000e */
    goto L_120EDBDC; /* 0x120EDAE6: jmp 0x120edbdc */
L_120EDAEB:
    /* cmp MEM32(ebp + 0x10), 4 */ /* 0x120EDAEB: cmp dword ptr [ebp + 0x10], 4 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_120EDAFB; /* 0x120EDAEF: jae 0x120edafb */
L_120EDAF1:
    esi = 0x80004005u; /* 0x120EDAF1: mov esi, 0x80004005 */
    goto L_120EDBDC; /* 0x120EDAF6: jmp 0x120edbdc */
L_120EDAFB:
    ecx = MEM32(ebp + 0xC); /* 0x120EDAFB: mov ecx, dword ptr [ebp + 0xc] */
    /* cmp MEM32(ecx), 0xFEFF0901u */ /* 0x120EDAFE: cmp dword ptr [ecx], 0xfeff0901 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0xFEFF0901u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_120EDB67; /* 0x120EDB04: je 0x120edb67 */
L_120EDB06:
    PUSH32(esp, MEM32(ebp + 0x2C)); /* 0x120EDB06: push dword ptr [ebp + 0x2c] */
    eax = ebp + (-0x8); /* 0x120EDB09: lea eax, [ebp - 8] */
    PUSH32(esp, eax); /* 0x120EDB0C: push eax */
    eax = MEM32(ebp + 0x20); /* 0x120EDB0D: mov eax, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00020000u);
    eax = eax & 0x00020000u; /* 0x120EDB10: and eax, 0x20000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((eax | ebx)); _flag_b = (uint32_t)((eax | ebx));
    eax = eax | ebx; /* 0x120EDB15: or eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x120EDB17: push eax */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120EDB18: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120EDB1B: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120EDB1E: push dword ptr [ebp + 0x10] */
    PUSH32(esp, ecx); /* 0x120EDB21: push ecx */
    RECOMP_CALL(sub_120ECCFB); /* 0x120EDB22: call 0x120eccfb */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120EDB27: mov esi, eax */
    /* test esi, esi */ /* 0x120EDB29: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EDBDC; /* 0x120EDB2B: js 0x120edbdc */
L_120EDB31:
    esi = MEM32(ebp + 0x2C); /* 0x120EDB31: mov esi, dword ptr [ebp + 0x2c] */
    /* test esi, esi */ /* 0x120EDB34: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EDB47; /* 0x120EDB36: je 0x120edb47 */
L_120EDB38:
    ecx = MEM32(esi); /* 0x120EDB38: mov ecx, dword ptr [esi] */
    /* test ecx, ecx */ /* 0x120EDB3A: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EDB47; /* 0x120EDB3C: je 0x120edb47 */
L_120EDB3E:
    eax = MEM32(ecx); /* 0x120EDB3E: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120EDB40: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120EDB41: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    MEM32(esi) = MEM32(esi) & 0; /* 0x120EDB44: and dword ptr [esi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EDB47:
    eax = MEM32(ebp + (-0x8)); /* 0x120EDB47: mov eax, dword ptr [ebp - 8] */
    ecx = MEM32(eax); /* 0x120EDB4A: mov ecx, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x120EDB4C: push esi */
    edx = ebp + (-0x4); /* 0x120EDB4D: lea edx, [ebp - 4] */
    PUSH32(esp, edx); /* 0x120EDB50: push edx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFFFE7u);
    ebx = ebx & 0xFFFFFFE7u; /* 0x120EDB51: and ebx, 0xffffffe7 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x120EDB54: push ebx */
    PUSH32(esp, eax); /* 0x120EDB55: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xEC)); /* 0x120EDB56: call dword ptr [ecx + 0xec] */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120EDB5C: mov esi, eax */
    /* test esi, esi */ /* 0x120EDB5E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EDBDC; /* 0x120EDB60: js 0x120edbdc */
L_120EDB62:
    ebx = MEM32(ebp + 0x28); /* 0x120EDB62: mov ebx, dword ptr [ebp + 0x28] */
    goto L_120EDB98; /* 0x120EDB65: jmp 0x120edb98 */
L_120EDB67:
    ebx = MEM32(ebp + 0x28); /* 0x120EDB67: mov ebx, dword ptr [ebp + 0x28] */
    /* test ebx, ebx */ /* 0x120EDB6A: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EDBDC; /* 0x120EDB6C: je 0x120edbdc */
L_120EDB6E:
    eax = ebp + (-0x4); /* 0x120EDB6E: lea eax, [ebp - 4] */
    PUSH32(esp, eax); /* 0x120EDB71: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120EDB72: push dword ptr [ebp + 0x10] */
    RECOMP_CALL(sub_120192FE); /* 0x120EDB75: call 0x120192fe */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120EDB7A: mov esi, eax */
    /* test esi, esi */ /* 0x120EDB7C: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EDBDC; /* 0x120EDB7E: js 0x120edbdc */
L_120EDB80:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120EDB80: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + (-0x4)); /* 0x120EDB83: mov eax, dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EDB86: push dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x120EDB89: mov ecx, dword ptr [eax] */
    PUSH32(esp, eax); /* 0x120EDB8B: push eax */
    RECOMP_ICALL(MEM32(ecx + 0xC)); /* 0x120EDB8C: call dword ptr [ecx + 0xc] */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x120EDB8F: push eax */
    RECOMP_CALL(sub_121BF440); /* 0x120EDB90: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x120EDB95: add esp, 0xc */
    _flag_k = FK_ADD;
L_120EDB98:
    /* test ebx, ebx */ /* 0x120EDB98: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EDBDC; /* 0x120EDB9A: je 0x120edbdc */
L_120EDB9C:
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120EDB9C: push dword ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(MEM32(ebp + 0x10)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) & 0; /* 0x120EDB9F: and dword ptr [ebp + 0x10], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = ebp + 0x10; /* 0x120EDBA3: lea eax, [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x120EDBA6: push eax */
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x120EDBA7: push dword ptr [ebp - 4] */
    ecx = edi; /* 0x120EDBAA: mov ecx, edi */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x120EDBAC: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x120EDBAF: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120EDBB2: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_120F9343); /* 0x120EDBB5: call 0x120f9343 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120EDBBA: mov esi, eax */
    /* test esi, esi */ /* 0x120EDBBC: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EDBDC; /* 0x120EDBBE: js 0x120edbdc */
L_120EDBC0:
    ecx = edi; /* 0x120EDBC0: mov ecx, edi */
    RECOMP_CALL(sub_120F7636); /* 0x120EDBC2: call 0x120f7636 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x120EDBC7: mov esi, eax */
    /* test esi, esi */ /* 0x120EDBC9: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_120EDBDC; /* 0x120EDBCB: js 0x120edbdc */
L_120EDBCD:
    MEM32(ebx) = edi; /* 0x120EDBCD: mov dword ptr [ebx], edi */
    eax = MEM32(edi); /* 0x120EDBCF: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x120EDBD1: push edi */
    RECOMP_ICALL(MEM32(eax + 0x4)); /* 0x120EDBD2: call dword ptr [eax + 4] */
    RECOMP_FLAGS_IN();
    goto L_120EDBDC; /* 0x120EDBD5: jmp 0x120edbdc */
L_120EDBD7:
    esi = 0x8876086Cu; /* 0x120EDBD7: mov esi, 0x8876086c */
L_120EDBDC:
    ecx = MEM32(ebp + (-0x8)); /* 0x120EDBDC: mov ecx, dword ptr [ebp - 8] */
    /* test ecx, ecx */ /* 0x120EDBDF: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EDBED; /* 0x120EDBE1: je 0x120edbed */
L_120EDBE3:
    eax = MEM32(ecx); /* 0x120EDBE3: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120EDBE5: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120EDBE6: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x8))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x8)) = MEM32(ebp + (-0x8)) & 0; /* 0x120EDBE9: and dword ptr [ebp - 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EDBED:
    ecx = MEM32(ebp + (-0x4)); /* 0x120EDBED: mov ecx, dword ptr [ebp - 4] */
    /* test ecx, ecx */ /* 0x120EDBF0: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EDBFE; /* 0x120EDBF2: je 0x120edbfe */
L_120EDBF4:
    eax = MEM32(ecx); /* 0x120EDBF4: mov eax, dword ptr [ecx] */
    PUSH32(esp, ecx); /* 0x120EDBF6: push ecx */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120EDBF7: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x120EDBFA: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_120EDBFE:
    /* test edi, edi */ /* 0x120EDBFE: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_120EDC08; /* 0x120EDC00: je 0x120edc08 */
L_120EDC02:
    eax = MEM32(edi); /* 0x120EDC02: mov eax, dword ptr [edi] */
    PUSH32(esp, edi); /* 0x120EDC04: push edi */
    RECOMP_ICALL(MEM32(eax + 0x8)); /* 0x120EDC05: call dword ptr [eax + 8] */
    RECOMP_FLAGS_IN();
L_120EDC08:
    edi = POP32_VAL(esp); /* 0x120EDC08: pop edi */
    eax = esi; /* 0x120EDC09: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x120EDC0B: pop esi */
    ebx = POP32_VAL(esp); /* 0x120EDC0C: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x120EDC0D: leave  */
    RECOMP_FLAGS_OUT(); esp += 44; { RECOMP_REGS_OUT(); return; } /* 0x120EDC0E: ret 0x28 */
    RECOMP_REGS_OUT();
}

void sub_120EDC16(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EDC16u);

L_120EDC16:
    edi = edi; /* 0x120EDC16: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EDC18: push ebp */
    ebp = esp; /* 0x120EDC19: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x120EDC1B: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x120EDC1E: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120EDC21: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120EDC24: push dword ptr [ebp + 0x18] */
    PUSH32(esp, 0); /* 0x120EDC27: push 0 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120EDC29: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120EDC2C: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EDC2F: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120EDC32: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_120ECF2E); /* 0x120EDC35: call 0x120ecf2e */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120EDC3A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x120EDC3B: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_120EDC43(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EDC43u);

L_120EDC43:
    edi = edi; /* 0x120EDC43: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EDC45: push ebp */
    ebp = esp; /* 0x120EDC46: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x120EDC48: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x120EDC4B: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120EDC4E: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120EDC51: push dword ptr [ebp + 0x18] */
    PUSH32(esp, 0); /* 0x120EDC54: push 0 */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120EDC56: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120EDC59: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EDC5C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120EDC5F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_120ED1D7); /* 0x120EDC62: call 0x120ed1d7 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120EDC67: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 36; { RECOMP_REGS_OUT(); return; } /* 0x120EDC68: ret 0x20 */
    RECOMP_REGS_OUT();
}

void sub_120EDC70(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EDC70u);

L_120EDC70:
    edi = edi; /* 0x120EDC70: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EDC72: push ebp */
    ebp = esp; /* 0x120EDC73: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x120EDC75: push dword ptr [ebp + 0x28] */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x120EDC78: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x120EDC7B: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120EDC7E: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, 0); /* 0x120EDC81: push 0 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120EDC83: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120EDC86: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120EDC89: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EDC8C: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120EDC8F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_120ED5B3); /* 0x120EDC92: call 0x120ed5b3 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120EDC97: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x120EDC98: ret 0x24 */
    RECOMP_REGS_OUT();
}

void sub_120EDCA0(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x120EDCA0u);

L_120EDCA0:
    edi = edi; /* 0x120EDCA0: mov edi, edi */
    PUSH32(esp, ebp); /* 0x120EDCA2: push ebp */
    ebp = esp; /* 0x120EDCA3: mov ebp, esp */
    PUSH32(esp, MEM32(ebp + 0x28)); /* 0x120EDCA5: push dword ptr [ebp + 0x28] */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x120EDCA8: push dword ptr [ebp + 0x24] */
    PUSH32(esp, MEM32(ebp + 0x20)); /* 0x120EDCAB: push dword ptr [ebp + 0x20] */
    PUSH32(esp, MEM32(ebp + 0x1C)); /* 0x120EDCAE: push dword ptr [ebp + 0x1c] */
    PUSH32(esp, 0); /* 0x120EDCB1: push 0 */
    PUSH32(esp, MEM32(ebp + 0x18)); /* 0x120EDCB3: push dword ptr [ebp + 0x18] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x120EDCB6: push dword ptr [ebp + 0x14] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x120EDCB9: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x120EDCBC: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x120EDCBF: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_120ED7E2); /* 0x120EDCC2: call 0x120ed7e2 */
    RECOMP_FLAGS_IN();
    ebp = POP32_VAL(esp); /* 0x120EDCC7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x120EDCC8: ret 0x24 */
    RECOMP_REGS_OUT();
}
