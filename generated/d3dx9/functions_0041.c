#define RECOMP_GENERATED_CODE

#include "functions.h"

void sub_12165C56(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12165C56u);

L_12165C56:
    edi = edi; /* 0x12165C56: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12165C58: push ebp */
    ebp = esp; /* 0x12165C59: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x64u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x64u; /* 0x12165C5B: sub esp, 0x64 */
    _flag_k = FK_CMP;
    eax = MEM32(eax + 0x8); /* 0x12165C5E: mov eax, dword ptr [eax + 8] */
    ecx = MEM32(ebp + 0x8); /* 0x12165C61: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x12165C64: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x12165C65: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x12165C67: inc ebx */
    _flag_k = FK_INC;
    /* cmp MEM8(ecx + 0x78), 0 */ /* 0x12165C68: cmp byte ptr [ecx + 0x78], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0x78)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + (-0x4)) = eax; /* 0x12165C6C: mov dword ptr [ebp - 4], eax */
    MEM32(ebp + (-0x10)) = ebx; /* 0x12165C6F: mov dword ptr [ebp - 0x10], ebx */
    MEM32(ebp + (-0xC)) = eax; /* 0x12165C72: mov dword ptr [ebp - 0xc], eax */
    MEM32(ebp + (-0x8)) = 0x1216544Bu; /* 0x12165C75: mov dword ptr [ebp - 8], 0x1216544b */
    if (CMP_NE(_flag_a, _flag_b)) goto L_12165D6A; /* 0x12165C7C: jne 0x12165d6a */
L_12165C82:
    PUSH32(esp, esi); /* 0x12165C82: push esi */
    PUSH32(esp, edi); /* 0x12165C83: push edi */
    edx = ebp + (-0x28); /* 0x12165C84: lea edx, [ebp - 0x28] */
    RECOMP_CALL(sub_12165A9B); /* 0x12165C87: call 0x12165a9b */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12165C8C: mov esi, eax */
    edi = ebp + (-0x1C); /* 0x12165C8E: lea edi, [ebp - 0x1c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12165C91: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12165C92: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12165C93: movsd dword ptr es:[edi], dword ptr [esi] */
    /* cmp MEM32(ebp + (-0x1C)), ebx */ /* 0x12165C94: cmp dword ptr [ebp - 0x1c], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_12165CA4; /* 0x12165C97: jle 0x12165ca4 */
L_12165C99:
    esi = eax; /* 0x12165C99: mov esi, eax */
    edi = ebp + (-0x10); /* 0x12165C9B: lea edi, [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12165C9E: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12165C9F: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12165CA0: movsd dword ptr es:[edi], dword ptr [esi] */
    ebx = MEM32(ebp + (-0x10)); /* 0x12165CA1: mov ebx, dword ptr [ebp - 0x10] */
L_12165CA4:
    eax = MEM32(ebp + (-0x4)); /* 0x12165CA4: mov eax, dword ptr [ebp - 4] */
    eax = MEM32(eax + 0xC); /* 0x12165CA7: mov eax, dword ptr [eax + 0xc] */
    edx = ebp + (-0x34); /* 0x12165CAA: lea edx, [ebp - 0x34] */
    RECOMP_CALL(sub_12165A9B); /* 0x12165CAD: call 0x12165a9b */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12165CB2: mov esi, eax */
    edi = ebp + (-0x1C); /* 0x12165CB4: lea edi, [ebp - 0x1c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12165CB7: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12165CB8: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12165CB9: movsd dword ptr es:[edi], dword ptr [esi] */
    /* cmp MEM32(ebp + (-0x1C)), ebx */ /* 0x12165CBA: cmp dword ptr [ebp - 0x1c], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_12165CCA; /* 0x12165CBD: jle 0x12165cca */
L_12165CBF:
    esi = eax; /* 0x12165CBF: mov esi, eax */
    edi = ebp + (-0x10); /* 0x12165CC1: lea edi, [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12165CC4: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12165CC5: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12165CC6: movsd dword ptr es:[edi], dword ptr [esi] */
    ebx = MEM32(ebp + (-0x10)); /* 0x12165CC7: mov ebx, dword ptr [ebp - 0x10] */
L_12165CCA:
    eax = MEM32(ebp + (-0x4)); /* 0x12165CCA: mov eax, dword ptr [ebp - 4] */
    eax = MEM32(eax + 0x8); /* 0x12165CCD: mov eax, dword ptr [eax + 8] */
    eax = MEM32(eax + 0x4); /* 0x12165CD0: mov eax, dword ptr [eax + 4] */
    edx = ebp + (-0x40); /* 0x12165CD3: lea edx, [ebp - 0x40] */
    RECOMP_CALL(sub_12165A9B); /* 0x12165CD6: call 0x12165a9b */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12165CDB: mov esi, eax */
    edi = ebp + (-0x1C); /* 0x12165CDD: lea edi, [ebp - 0x1c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12165CE0: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12165CE1: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12165CE2: movsd dword ptr es:[edi], dword ptr [esi] */
    /* cmp MEM32(ebp + (-0x1C)), ebx */ /* 0x12165CE3: cmp dword ptr [ebp - 0x1c], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_12165CF3; /* 0x12165CE6: jle 0x12165cf3 */
L_12165CE8:
    esi = eax; /* 0x12165CE8: mov esi, eax */
    edi = ebp + (-0x10); /* 0x12165CEA: lea edi, [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12165CED: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12165CEE: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12165CEF: movsd dword ptr es:[edi], dword ptr [esi] */
    ebx = MEM32(ebp + (-0x10)); /* 0x12165CF0: mov ebx, dword ptr [ebp - 0x10] */
L_12165CF3:
    eax = ebp + (-0x4C); /* 0x12165CF3: lea eax, [ebp - 0x4c] */
    PUSH32(esp, eax); /* 0x12165CF6: push eax */
    eax = MEM32(ebp + (-0x4)); /* 0x12165CF7: mov eax, dword ptr [ebp - 4] */
    RECOMP_CALL(sub_12165B27); /* 0x12165CFA: call 0x12165b27 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12165CFF: mov esi, eax */
    edi = ebp + (-0x1C); /* 0x12165D01: lea edi, [ebp - 0x1c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12165D04: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12165D05: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12165D06: movsd dword ptr es:[edi], dword ptr [esi] */
    /* cmp MEM32(ebp + (-0x1C)), ebx */ /* 0x12165D07: cmp dword ptr [ebp - 0x1c], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_12165D17; /* 0x12165D0A: jle 0x12165d17 */
L_12165D0C:
    esi = eax; /* 0x12165D0C: mov esi, eax */
    edi = ebp + (-0x10); /* 0x12165D0E: lea edi, [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12165D11: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12165D12: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12165D13: movsd dword ptr es:[edi], dword ptr [esi] */
    ebx = MEM32(ebp + (-0x10)); /* 0x12165D14: mov ebx, dword ptr [ebp - 0x10] */
L_12165D17:
    eax = ebp + (-0x58); /* 0x12165D17: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x12165D1A: push eax */
    eax = MEM32(ebp + (-0x4)); /* 0x12165D1B: mov eax, dword ptr [ebp - 4] */
    eax = MEM32(eax + 0xC); /* 0x12165D1E: mov eax, dword ptr [eax + 0xc] */
    RECOMP_CALL(sub_12165B27); /* 0x12165D21: call 0x12165b27 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12165D26: mov esi, eax */
    edi = ebp + (-0x1C); /* 0x12165D28: lea edi, [ebp - 0x1c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12165D2B: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12165D2C: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12165D2D: movsd dword ptr es:[edi], dword ptr [esi] */
    /* cmp MEM32(ebp + (-0x1C)), ebx */ /* 0x12165D2E: cmp dword ptr [ebp - 0x1c], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_12165D3E; /* 0x12165D31: jle 0x12165d3e */
L_12165D33:
    esi = eax; /* 0x12165D33: mov esi, eax */
    edi = ebp + (-0x10); /* 0x12165D35: lea edi, [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12165D38: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12165D39: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12165D3A: movsd dword ptr es:[edi], dword ptr [esi] */
    ebx = MEM32(ebp + (-0x10)); /* 0x12165D3B: mov ebx, dword ptr [ebp - 0x10] */
L_12165D3E:
    eax = MEM32(ebp + (-0x4)); /* 0x12165D3E: mov eax, dword ptr [ebp - 4] */
    eax = MEM32(eax + 0x8); /* 0x12165D41: mov eax, dword ptr [eax + 8] */
    eax = MEM32(eax + 0x4); /* 0x12165D44: mov eax, dword ptr [eax + 4] */
    ecx = ebp + (-0x64); /* 0x12165D47: lea ecx, [ebp - 0x64] */
    PUSH32(esp, ecx); /* 0x12165D4A: push ecx */
    RECOMP_CALL(sub_12165B27); /* 0x12165D4B: call 0x12165b27 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12165D50: mov esi, eax */
    edi = ebp + (-0x1C); /* 0x12165D52: lea edi, [ebp - 0x1c] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12165D55: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12165D56: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12165D57: movsd dword ptr es:[edi], dword ptr [esi] */
    /* cmp MEM32(ebp + (-0x1C)), ebx */ /* 0x12165D58: cmp dword ptr [ebp - 0x1c], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x1C))); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_12165D68; /* 0x12165D5B: jle 0x12165d68 */
L_12165D5D:
    esi = eax; /* 0x12165D5D: mov esi, eax */
    edi = ebp + (-0x10); /* 0x12165D5F: lea edi, [ebp - 0x10] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12165D62: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12165D63: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12165D64: movsd dword ptr es:[edi], dword ptr [esi] */
    ebx = MEM32(ebp + (-0x10)); /* 0x12165D65: mov ebx, dword ptr [ebp - 0x10] */
L_12165D68:
    edi = POP32_VAL(esp); /* 0x12165D68: pop edi */
    esi = POP32_VAL(esp); /* 0x12165D69: pop esi */
L_12165D6A:
    PUSH32(esp, ebx); /* 0x12165D6A: push ebx */
    PUSH32(esp, MEM32(ebp + (-0xC))); /* 0x12165D6B: push dword ptr [ebp - 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12165D6E: push dword ptr [ebp + 8] */
    RECOMP_ICALL(MEM32(ebp + (-0x8))); /* 0x12165D71: call dword ptr [ebp - 8] */
    RECOMP_FLAGS_IN();
    ebx = POP32_VAL(esp); /* 0x12165D74: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12165D75: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12165D76: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12165D7E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12165D7Eu);

L_12165D7E:
    edi = edi; /* 0x12165D7E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12165D80: push ebp */
    ebp = esp; /* 0x12165D81: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x12165D83: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x12165D84: mov ebx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ebx + 0x7C)); _flag_b = (uint32_t)(0);
    MEM32(ebx + 0x7C) = MEM32(ebx + 0x7C) & 0; /* 0x12165D87: and dword ptr [ebx + 0x7c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x12165D8B: push esi */
    PUSH32(esp, edi); /* 0x12165D8C: push edi */
    edi = MEM32(ebp + 0xC); /* 0x12165D8D: mov edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 0x40u; /* 0x12165D90: add edi, 0x40 */
    _flag_k = FK_ADD;
    eax = MEM32(edi); /* 0x12165D93: mov eax, dword ptr [edi] */
    goto L_12165D9D; /* 0x12165D95: jmp 0x12165d9d */
L_12165D97:
    MEM8(eax + 0x14) = (uint8_t)(0); /* 0x12165D97: mov byte ptr [eax + 0x14], 0 */
    eax = MEM32(eax); /* 0x12165D9B: mov eax, dword ptr [eax] */
L_12165D9D:
    /* cmp eax, edi */ /* 0x12165D9D: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_12165D97; /* 0x12165D9F: jne 0x12165d97 */
L_12165DA1:
    esi = MEM32(edi); /* 0x12165DA1: mov esi, dword ptr [edi] */
    goto L_12165DBB; /* 0x12165DA3: jmp 0x12165dbb */
L_12165DA5:
    /* cmp MEM8(esi + 0x15), 0 */ /* 0x12165DA5: cmp byte ptr [esi + 0x15], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x15)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12165DB9; /* 0x12165DA9: je 0x12165db9 */
L_12165DAB:
    /* cmp MEM8(esi + 0x14), 0 */ /* 0x12165DAB: cmp byte ptr [esi + 0x14], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x14)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12165DB9; /* 0x12165DAF: jne 0x12165db9 */
L_12165DB1:
    PUSH32(esp, ebx); /* 0x12165DB1: push ebx */
    eax = esi; /* 0x12165DB2: mov eax, esi */
    RECOMP_CALL(sub_12165C56); /* 0x12165DB4: call 0x12165c56 */
    RECOMP_FLAGS_IN();
L_12165DB9:
    esi = MEM32(esi); /* 0x12165DB9: mov esi, dword ptr [esi] */
L_12165DBB:
    /* cmp esi, edi */ /* 0x12165DBB: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_12165DA5; /* 0x12165DBD: jne 0x12165da5 */
L_12165DBF:
    eax = MEM32(ebx + 0x7C); /* 0x12165DBF: mov eax, dword ptr [ebx + 0x7c] */
    /* test eax, eax */ /* 0x12165DC2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12165DD1; /* 0x12165DC4: je 0x12165dd1 */
L_12165DC6:
    esi = ebx; /* 0x12165DC6: mov esi, ebx */
    RECOMP_CALL(sub_12165477); /* 0x12165DC8: call 0x12165477 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebx + 0x7C)); _flag_b = (uint32_t)(0);
    MEM32(ebx + 0x7C) = MEM32(ebx + 0x7C) & 0; /* 0x12165DCD: and dword ptr [ebx + 0x7c], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_12165DD1:
    edi = POP32_VAL(esp); /* 0x12165DD1: pop edi */
    esi = POP32_VAL(esp); /* 0x12165DD2: pop esi */
    ebx = POP32_VAL(esp); /* 0x12165DD3: pop ebx */
    ebp = POP32_VAL(esp); /* 0x12165DD4: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12165DD5: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12165DDD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12165DDDu);

L_12165DDD:
    edi = edi; /* 0x12165DDD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12165DDF: push ebp */
    ebp = esp; /* 0x12165DE0: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12165DE2: push ecx */
    PUSH32(esp, ecx); /* 0x12165DE3: push ecx */
    eax = MEM32(ebp + 0x8); /* 0x12165DE4: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, ebx); /* 0x12165DE7: push ebx */
    PUSH32(esp, esi); /* 0x12165DE8: push esi */
    esi = MEM32(eax + 0x70); /* 0x12165DE9: mov esi, dword ptr [eax + 0x70] */
    eax = MEM32(ebp + 0xC); /* 0x12165DEC: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(eax); /* 0x12165DEF: mov ecx, dword ptr [eax] */
    eax = MEM32(ebp + 0x10); /* 0x12165DF1: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x12165DF4: push edi */
    edi = MEM32(eax); /* 0x12165DF5: mov edi, dword ptr [eax] */
    eax = MEM32(ecx + 0x4); /* 0x12165DF7: mov eax, dword ptr [ecx + 4] */
    edx = MEM32(eax + 0x10); /* 0x12165DFA: mov edx, dword ptr [eax + 0x10] */
    eax = MEM32(edi + 0x4); /* 0x12165DFD: mov eax, dword ptr [edi + 4] */
    MEM32(ebp + 0x8) = edx; /* 0x12165E00: mov dword ptr [ebp + 8], edx */
    /* cmp edx, esi */ /* 0x12165E03: cmp edx, esi */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12165E73; /* 0x12165E05: jne 0x12165e73 */
L_12165E07:
    ebx = MEM32(eax + 0x10); /* 0x12165E07: mov ebx, dword ptr [eax + 0x10] */
    /* cmp ebx, esi */ /* 0x12165E0A: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12165E6D; /* 0x12165E0C: jne 0x12165e6d */
L_12165E0E:
    edx = MEM32(edi + 0x10); /* 0x12165E0E: mov edx, dword ptr [edi + 0x10] */
    ecx = MEM32(ecx + 0x10); /* 0x12165E11: mov ecx, dword ptr [ecx + 0x10] */
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x12165E14: fld qword ptr [edx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0x28)); /* 0x12165E17: fcomp qword ptr [ecx + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12165E1A: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x12165E1C: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12165E5D; /* 0x12165E1F: je 0x12165e5d */
L_12165E21:
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x12165E21: fld qword ptr [ecx + 0x28] */
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x12165E24: fld qword ptr [edx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12165E27: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12165E29: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x12165E2B: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12165E3D; /* 0x12165E2E: jp 0x12165e3d */
L_12165E30:
    fp_push(*(double*)ADDR(edx + 0x30)); /* 0x12165E30: fld qword ptr [edx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0x30)); /* 0x12165E33: fcomp qword ptr [ecx + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12165E36: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x12165E38: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12165E5D; /* 0x12165E3B: je 0x12165e5d */
L_12165E3D:
    PUSH32(esp, ecx); /* 0x12165E3D: push ecx */
    PUSH32(esp, edx); /* 0x12165E3E: push edx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12165E3F: push dword ptr [ebp + 8] */
L_12165E42:
    RECOMP_CALL(sub_12167776); /* 0x12165E42: call 0x12167776 */
    RECOMP_FLAGS_IN();
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x12001A48)); /* 0x12165E47: fcomp qword ptr [0x12001a48] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12165E4D: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x12165E4F: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12165E9E; /* 0x12165E52: je 0x12165e9e */
L_12165E54:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12165E54: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_12165E56:
    edi = POP32_VAL(esp); /* 0x12165E56: pop edi */
    esi = POP32_VAL(esp); /* 0x12165E57: pop esi */
    ebx = POP32_VAL(esp); /* 0x12165E58: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12165E59: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12165E5A: ret 0xc */
L_12165E5D:
    PUSH32(esp, edx); /* 0x12165E5D: push edx */
    PUSH32(esp, ecx); /* 0x12165E5E: push ecx */
L_12165E5F:
    PUSH32(esp, ebx); /* 0x12165E5F: push ebx */
    RECOMP_CALL(sub_12167776); /* 0x12165E60: call 0x12167776 */
    RECOMP_FLAGS_IN();
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x12001A48)); /* 0x12165E65: fcomp qword ptr [0x12001a48] */
    fp_pop();
    goto L_12165E97; /* 0x12165E6B: jmp 0x12165e97 */
L_12165E6D:
    PUSH32(esp, MEM32(edi + 0x10)); /* 0x12165E6D: push dword ptr [edi + 0x10] */
    PUSH32(esp, esi); /* 0x12165E70: push esi */
    RECOMP_BACKEDGE();
    goto L_12165E5F; /* 0x12165E71: jmp 0x12165e5f */
L_12165E73:
    PUSH32(esp, MEM32(ecx + 0x10)); /* 0x12165E73: push dword ptr [ecx + 0x10] */
    PUSH32(esp, esi); /* 0x12165E76: push esi */
    PUSH32(esp, edx); /* 0x12165E77: push edx */
    /* cmp MEM32(eax + 0x10), esi */ /* 0x12165E78: cmp dword ptr [eax + 0x10], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12165E42; /* 0x12165E7B: je 0x12165e42 */
L_12165E7D:
    RECOMP_CALL(sub_12167701); /* 0x12165E7D: call 0x12167701 */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x12165E82: fstp qword ptr [ebp - 8] */
    PUSH32(esp, MEM32(edi + 0x10)); /* 0x12165E85: push dword ptr [edi + 0x10] */
    eax = MEM32(edi + 0x4); /* 0x12165E88: mov eax, dword ptr [edi + 4] */
    PUSH32(esp, esi); /* 0x12165E8B: push esi */
    PUSH32(esp, MEM32(eax + 0x10)); /* 0x12165E8C: push dword ptr [eax + 0x10] */
    RECOMP_CALL(sub_12167701); /* 0x12165E8F: call 0x12167701 */
    RECOMP_FLAGS_IN();
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + (-0x8))); /* 0x12165E94: fcomp qword ptr [ebp - 8] */
    fp_pop();
L_12165E97:
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12165E97: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x12165E99: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12165E54; /* 0x12165E9C: jp 0x12165e54 */
L_12165E9E:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12165E9E: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x12165EA0: inc eax */
    _flag_k = FK_INC;
    RECOMP_BACKEDGE();
    goto L_12165E56; /* 0x12165EA1: jmp 0x12165e56 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_12165EA8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12165EA8u);

L_12165EA8:
    edi = edi; /* 0x12165EA8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12165EAA: push ebp */
    ebp = esp; /* 0x12165EAB: mov ebp, esp */
    eax = MEM32(esi); /* 0x12165EAD: mov eax, dword ptr [esi] */
    _flag_a = (uint32_t)(MEM32(eax + 0x18)); _flag_b = (uint32_t)(0);
    MEM32(eax + 0x18) = MEM32(eax + 0x18) & 0; /* 0x12165EAF: and dword ptr [eax + 0x18], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x12165EB3: push dword ptr [esi + 4] */
    eax = MEM32(ebp + 0x8); /* 0x12165EB6: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(eax + 0x68)); /* 0x12165EB9: push dword ptr [eax + 0x68] */
    RECOMP_CALL(sub_12167E00); /* 0x12165EBC: call 0x12167e00 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x12165EC1: push esi */
    RECOMP_CALL(sub_121BF586); /* 0x12165EC2: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12165EC7: pop ecx */
    ebp = POP32_VAL(esp); /* 0x12165EC8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12165EC9: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12165ED1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12165ED1u);

L_12165ED1:
    edi = edi; /* 0x12165ED1: mov edi, edi */
    PUSH32(esp, edi); /* 0x12165ED3: push edi */
    edi = eax; /* 0x12165ED4: mov edi, eax */
    eax = MEM32(edi); /* 0x12165ED6: mov eax, dword ptr [edi] */
    ecx = MEM32(eax + 0x10); /* 0x12165ED8: mov ecx, dword ptr [eax + 0x10] */
L_12165EDB:
    eax = MEM32(edi + 0x4); /* 0x12165EDB: mov eax, dword ptr [edi + 4] */
    eax = MEM32(eax + 0x4); /* 0x12165EDE: mov eax, dword ptr [eax + 4] */
    edi = MEM32(eax); /* 0x12165EE1: mov edi, dword ptr [eax] */
    eax = MEM32(edi); /* 0x12165EE3: mov eax, dword ptr [edi] */
    /* cmp MEM32(eax + 0x10), ecx */ /* 0x12165EE5: cmp dword ptr [eax + 0x10], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12165EDB; /* 0x12165EE8: je 0x12165edb */
L_12165EEA:
    /* cmp MEM8(edi + 0xF), 0 */ /* 0x12165EEA: cmp byte ptr [edi + 0xf], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xF)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12165F21; /* 0x12165EEE: je 0x12165f21 */
L_12165EF0:
    PUSH32(esp, esi); /* 0x12165EF0: push esi */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x12165EF1: push dword ptr [eax + 0xc] */
    eax = MEM32(edi + 0x4); /* 0x12165EF4: mov eax, dword ptr [edi + 4] */
    eax = MEM32(eax + 0x8); /* 0x12165EF7: mov eax, dword ptr [eax + 8] */
    eax = MEM32(eax); /* 0x12165EFA: mov eax, dword ptr [eax] */
    eax = MEM32(eax); /* 0x12165EFC: mov eax, dword ptr [eax] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x12165EFE: push dword ptr [eax + 4] */
    RECOMP_CALL(sub_12164F6C); /* 0x12165F01: call 0x12164f6c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi)); /* 0x12165F06: push dword ptr [edi] */
    esi = eax; /* 0x12165F08: mov esi, eax */
    RECOMP_CALL(sub_12164DE9); /* 0x12165F0A: call 0x12164de9 */
    RECOMP_FLAGS_IN();
    MEM32(edi) = esi; /* 0x12165F0F: mov dword ptr [edi], esi */
    MEM8(edi + 0xF) = (uint8_t)(0); /* 0x12165F11: mov byte ptr [edi + 0xf], 0 */
    MEM32(esi + 0x18) = edi; /* 0x12165F15: mov dword ptr [esi + 0x18], edi */
    eax = MEM32(edi + 0x4); /* 0x12165F18: mov eax, dword ptr [edi + 4] */
    eax = MEM32(eax + 0x4); /* 0x12165F1B: mov eax, dword ptr [eax + 4] */
    edi = MEM32(eax); /* 0x12165F1E: mov edi, dword ptr [eax] */
    esi = POP32_VAL(esp); /* 0x12165F20: pop esi */
L_12165F21:
    eax = edi; /* 0x12165F21: mov eax, edi */
    edi = POP32_VAL(esp); /* 0x12165F23: pop edi */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12165F24: ret  */
    RECOMP_REGS_OUT();
}

void sub_12165F2A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12165F2Au);

L_12165F2A:
    edi = edi; /* 0x12165F2A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12165F2C: push ebp */
    ebp = esp; /* 0x12165F2D: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12165F2F: push esi */
    PUSH32(esp, 0x10u); /* 0x12165F30: push 0x10 */
    RECOMP_CALL(sub_121BF524); /* 0x12165F32: call 0x121bf524 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12165F37: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x12165F39: pop ecx */
    /* test esi, esi */ /* 0x12165F3A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12165F60; /* 0x12165F3C: je 0x12165f60 */
L_12165F3E:
    eax = MEM32(ebp + 0x8); /* 0x12165F3E: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x12165F41: push esi */
    MEM32(esi) = edi; /* 0x12165F42: mov dword ptr [esi], edi */
    PUSH32(esp, MEM32(ebx + 0x4)); /* 0x12165F44: push dword ptr [ebx + 4] */
    PUSH32(esp, MEM32(eax + 0x68)); /* 0x12165F47: push dword ptr [eax + 0x68] */
    RECOMP_CALL(sub_12167DAA); /* 0x12165F4A: call 0x12167daa */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x4) = eax; /* 0x12165F4F: mov dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12165F52: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(esi + 0xF) = (uint8_t)(LO8(eax)); /* 0x12165F54: mov byte ptr [esi + 0xf], al */
    MEM16(esi + 0xD) = (uint16_t)(LO16(eax)); /* 0x12165F57: mov word ptr [esi + 0xd], ax */
    MEM32(edi + 0x18) = esi; /* 0x12165F5B: mov dword ptr [edi + 0x18], esi */
    eax = esi; /* 0x12165F5E: mov eax, esi */
L_12165F60:
    esi = POP32_VAL(esp); /* 0x12165F60: pop esi */
    ebp = POP32_VAL(esp); /* 0x12165F61: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12165F62: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12165F6A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12165F6Au);

L_12165F6A:
    eax = MEM32(eax + 0x60); /* 0x12165F6A: mov eax, dword ptr [eax + 0x60] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x00018722u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - 0x00018722u; /* 0x12165F6D: sub eax, 0x18722 */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_12165F9F; /* 0x12165F72: je 0x12165f9f */
L_12165F74:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x12165F74: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_12165F99; /* 0x12165F75: je 0x12165f99 */
L_12165F77:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x12165F77: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_12165F93; /* 0x12165F78: je 0x12165f93 */
L_12165F7A:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x12165F7A: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_12165F8D; /* 0x12165F7B: je 0x12165f8d */
L_12165F7D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x12165F7D: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_12165F83; /* 0x12165F7E: je 0x12165f83 */
L_12165F80:
    _flag_a = (uint32_t)(0) << 24; _flag_b = (uint32_t)(0) << 24;
    SET_LO8(eax, 0); /* 0x12165F80: xor al, al */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12165F82: ret  */
L_12165F83:
    eax = ecx + 0x1; /* 0x12165F83: lea eax, [ecx + 1] */
    /* cmp eax, 2 */ /* 0x12165F86: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    SET_LO8(eax, (CMP_A(_flag_a, _flag_b)) ? 1 : 0); /* 0x12165F89: seta al */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12165F8C: ret  */
L_12165F8D:
    /* test ecx, ecx */ /* 0x12165F8D: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) ? 1 : 0); /* 0x12165F8F: sets al */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12165F92: ret  */
L_12165F93:
    /* test ecx, ecx */ /* 0x12165F93: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) != 0u && (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) ? 1 : 0); /* 0x12165F95: setg al */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12165F98: ret  */
L_12165F99:
    /* test ecx, ecx */ /* 0x12165F99: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, (TEST_NZ(_flag_a, _flag_b)) ? 1 : 0); /* 0x12165F9B: setne al */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12165F9E: ret  */
L_12165F9F:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx & 1; /* 0x12165F9F: and ecx, 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, LO8(ecx)); /* 0x12165FA2: mov al, cl */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12165FA4: ret  */
    RECOMP_REGS_OUT();
}

void sub_12165FAA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12165FAAu);

L_12165FAA:
    edi = edi; /* 0x12165FAA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12165FAC: push ebp */
    ebp = esp; /* 0x12165FAD: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12165FAF: push ecx */
    PUSH32(esp, ebx); /* 0x12165FB0: push ebx */
    PUSH32(esp, edi); /* 0x12165FB1: push edi */
    edi = eax; /* 0x12165FB2: mov edi, eax */
    ebx = MEM32(edi); /* 0x12165FB4: mov ebx, dword ptr [edi] */
    /* cmp edi, MEM32(ebp + 0xC) */ /* 0x12165FB6: cmp edi, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12166060; /* 0x12165FB9: je 0x12166060 */
L_12165FBF:
    PUSH32(esp, esi); /* 0x12165FBF: push esi */
L_12165FC0:
    eax = MEM32(edi + 0x4); /* 0x12165FC0: mov eax, dword ptr [edi + 4] */
    MEM8(edi + 0xF) = (uint8_t)(0); /* 0x12165FC3: mov byte ptr [edi + 0xf], 0 */
    eax = MEM32(eax + 0x8); /* 0x12165FC7: mov eax, dword ptr [eax + 8] */
    ecx = MEM32(eax); /* 0x12165FCA: mov ecx, dword ptr [eax] */
    esi = MEM32(ecx); /* 0x12165FCC: mov esi, dword ptr [ecx] */
    eax = MEM32(esi + 0x10); /* 0x12165FCE: mov eax, dword ptr [esi + 0x10] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x12165FD1: mov dword ptr [ebp - 4], ecx */
    /* cmp eax, MEM32(ebx + 0x10) */ /* 0x12165FD4: cmp eax, dword ptr [ebx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12166005; /* 0x12165FD7: je 0x12166005 */
L_12165FD9:
    /* cmp MEM8(ecx + 0xF), 0 */ /* 0x12165FD9: cmp byte ptr [ecx + 0xf], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xF)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12166047; /* 0x12165FDD: je 0x12166047 */
L_12165FDF:
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x12165FDF: push dword ptr [esi + 4] */
    eax = MEM32(ebx + 0x8); /* 0x12165FE2: mov eax, dword ptr [ebx + 8] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x12165FE5: push dword ptr [eax + 4] */
    RECOMP_CALL(sub_12164F6C); /* 0x12165FE8: call 0x12164f6c */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12165FED: mov esi, eax */
    eax = MEM32(ebp + (-0x4)); /* 0x12165FEF: mov eax, dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(eax)); /* 0x12165FF2: push dword ptr [eax] */
    RECOMP_CALL(sub_12164DE9); /* 0x12165FF4: call 0x12164de9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x12165FF9: mov ecx, dword ptr [ebp - 4] */
    MEM8(ecx + 0xF) = (uint8_t)(0); /* 0x12165FFC: mov byte ptr [ecx + 0xf], 0 */
    MEM32(ecx) = esi; /* 0x12166000: mov dword ptr [ecx], esi */
    MEM32(esi + 0x18) = ecx; /* 0x12166002: mov dword ptr [esi + 0x18], ecx */
L_12166005:
    /* cmp MEM32(ebx + 0x8), esi */ /* 0x12166005: cmp dword ptr [ebx + 8], esi */
    _flag_a = (uint32_t)(MEM32(ebx + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1216601D; /* 0x12166008: je 0x1216601d */
L_1216600A:
    eax = MEM32(esi + 0x4); /* 0x1216600A: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, esi); /* 0x1216600D: push esi */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x1216600E: push dword ptr [eax + 0xc] */
    RECOMP_CALL(sub_12164D63); /* 0x12166011: call 0x12164d63 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x12166016: push esi */
    PUSH32(esp, ebx); /* 0x12166017: push ebx */
    RECOMP_CALL(sub_12164D63); /* 0x12166018: call 0x12164d63 */
    RECOMP_FLAGS_IN();
L_1216601D:
    edx = MEM32(edi); /* 0x1216601D: mov edx, dword ptr [edi] */
    ecx = MEM32(edx + 0x14); /* 0x1216601F: mov ecx, dword ptr [edx + 0x14] */
    SET_LO8(eax, MEM8(edi + 0xC)); /* 0x12166022: mov al, byte ptr [edi + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12166025: push dword ptr [ebp + 8] */
    esi = edi; /* 0x12166028: mov esi, edi */
    MEM8(ecx + 0x15) = (uint8_t)(LO8(eax)); /* 0x1216602A: mov byte ptr [ecx + 0x15], al */
    MEM32(ecx + 0x8) = edx; /* 0x1216602D: mov dword ptr [ecx + 8], edx */
    RECOMP_CALL(sub_12165EA8); /* 0x12166030: call 0x12165ea8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x12166035: mov eax, dword ptr [ebp - 4] */
    ebx = MEM32(eax); /* 0x12166038: mov ebx, dword ptr [eax] */
    edi = eax; /* 0x1216603A: mov edi, eax */
    /* cmp eax, MEM32(ebp + 0xC) */ /* 0x1216603C: cmp eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0xC));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_12165FC0; /* 0x1216603F: jne 0x12165fc0 */
L_12166045:
    goto L_1216605F; /* 0x12166045: jmp 0x1216605f */
L_12166047:
    esi = MEM32(edi); /* 0x12166047: mov esi, dword ptr [edi] */
    edx = MEM32(esi + 0x14); /* 0x12166049: mov edx, dword ptr [esi + 0x14] */
    SET_LO8(ecx, MEM8(edi + 0xC)); /* 0x1216604C: mov cl, byte ptr [edi + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1216604F: push dword ptr [ebp + 8] */
    MEM32(edx + 0x8) = esi; /* 0x12166052: mov dword ptr [edx + 8], esi */
    esi = edi; /* 0x12166055: mov esi, edi */
    MEM8(edx + 0x15) = (uint8_t)(LO8(ecx)); /* 0x12166057: mov byte ptr [edx + 0x15], cl */
    RECOMP_CALL(sub_12165EA8); /* 0x1216605A: call 0x12165ea8 */
    RECOMP_FLAGS_IN();
L_1216605F:
    esi = POP32_VAL(esp); /* 0x1216605F: pop esi */
L_12166060:
    edi = POP32_VAL(esp); /* 0x12166060: pop edi */
    eax = ebx; /* 0x12166061: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x12166063: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12166064: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12166065: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1216606D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1216606Du);

L_1216606D:
    edi = edi; /* 0x1216606D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1216606F: push ebp */
    ebp = esp; /* 0x12166070: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1Cu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1Cu; /* 0x12166072: sub esp, 0x1c */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x12166075: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1216607A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1216607C: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x1216607F: mov eax, dword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(eax + 0x10)); /* 0x12166082: fld qword ptr [eax + 0x10] */
    PUSH32(esp, edi); /* 0x12166085: push edi */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x1C)) = _v; } /* 0x12166086: fstp qword ptr [ebp - 0x1c] */
    edi = eax + 0xC; /* 0x12166089: lea edi, [eax + 0xc] */
    fp_push(*(double*)ADDR(eax + 0x18)); /* 0x1216608C: fld qword ptr [eax + 0x18] */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    MEM32(edi) = MEM32(edi) & 0; /* 0x1216608F: and dword ptr [edi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x14)) = _v; } /* 0x12166092: fstp qword ptr [ebp - 0x14] */
    fp_push(*(double*)ADDR(eax + 0x20)); /* 0x12166095: fld qword ptr [eax + 0x20] */
    eax = MEM32(esi + 0xD34); /* 0x12166098: mov eax, dword ptr [esi + 0xd34] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0xC)) = _v; } /* 0x1216609E: fstp qword ptr [ebp - 0xc] */
    /* cmp eax, 0x1216436Fu */ /* 0x121660A1: cmp eax, 0x1216436f */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1216436Fu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121660B9; /* 0x121660A6: je 0x121660b9 */
L_121660A8:
    PUSH32(esp, MEM32(esi + 0xD38)); /* 0x121660A8: push dword ptr [esi + 0xd38] */
    PUSH32(esp, edi); /* 0x121660AE: push edi */
    PUSH32(esp, ecx); /* 0x121660AF: push ecx */
    PUSH32(esp, ebx); /* 0x121660B0: push ebx */
    ecx = ebp + (-0x1C); /* 0x121660B1: lea ecx, [ebp - 0x1c] */
    PUSH32(esp, ecx); /* 0x121660B4: push ecx */
    RECOMP_ICALL(eax); /* 0x121660B5: call eax */
    RECOMP_FLAGS_IN();
    goto L_121660C3; /* 0x121660B7: jmp 0x121660c3 */
L_121660B9:
    PUSH32(esp, edi); /* 0x121660B9: push edi */
    PUSH32(esp, ecx); /* 0x121660BA: push ecx */
    PUSH32(esp, ebx); /* 0x121660BB: push ebx */
    eax = ebp + (-0x1C); /* 0x121660BC: lea eax, [ebp - 0x1c] */
    PUSH32(esp, eax); /* 0x121660BF: push eax */
    RECOMP_ICALL(MEM32(esi + 0x74)); /* 0x121660C0: call dword ptr [esi + 0x74] */
    RECOMP_FLAGS_IN();
L_121660C3:
    /* cmp MEM32(edi), 0 */ /* 0x121660C3: cmp dword ptr [edi], 0 */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121660DE; /* 0x121660C6: jne 0x121660de */
L_121660C8:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x121660C8: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121660D4; /* 0x121660CC: jne 0x121660d4 */
L_121660CE:
    eax = MEM32(ebx); /* 0x121660CE: mov eax, dword ptr [ebx] */
    MEM32(edi) = eax; /* 0x121660D0: mov dword ptr [edi], eax */
    goto L_121660DE; /* 0x121660D2: jmp 0x121660de */
L_121660D4:
    /* cmp MEM8(esi + 0x64), 0 */ /* 0x121660D4: cmp byte ptr [esi + 0x64], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0x64)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_121660DE; /* 0x121660D8: jne 0x121660de */
L_121660DA:
    MEM8(esi + 0x64) = (uint8_t)(1); /* 0x121660DA: mov byte ptr [esi + 0x64], 1 */
L_121660DE:
    ecx = MEM32(ebp + (-0x4)); /* 0x121660DE: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x121660E1: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x121660E3: pop edi */
    RECOMP_CALL(sub_121BECF5); /* 0x121660E4: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121660E9: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121660EA: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_121660F2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121660F2u);

L_121660F2:
    edi = edi; /* 0x121660F2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121660F4: push ebp */
    ebp = esp; /* 0x121660F5: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x28u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x28u; /* 0x121660F7: sub esp, 0x28 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x121660FA: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x121660FF: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x12166101: mov dword ptr [ebp - 4], eax */
    fp_push(*(float*)&MEM32(0x120019B0)); /* 0x12166104: fld dword ptr [0x120019b0] */
    eax = MEM32(ebp + 0x8); /* 0x1216610A: mov eax, dword ptr [ebp + 8] */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0x14)) = _v; } /* 0x1216610D: fst dword ptr [ebp - 0x14] */
    PUSH32(esp, ebx); /* 0x12166110: push ebx */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x10)) = _v; } /* 0x12166111: fstp dword ptr [ebp - 0x10] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12166114: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    fp_push(0.0); /* 0x12166116: fldz  */
    PUSH32(esp, esi); /* 0x12166118: push esi */
    { float _v = (float)_st[0]; *(float*)ADDR(ebp + (-0xC)) = _v; } /* 0x12166119: fst dword ptr [ebp - 0xc] */
    esi = ecx; /* 0x1216611C: mov esi, ecx */
    ecx = MEM32(eax + 0x10); /* 0x1216611E: mov ecx, dword ptr [eax + 0x10] */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x8)) = _v; } /* 0x12166121: fstp dword ptr [ebp - 8] */
    MEM32(ebp + (-0x18)) = eax; /* 0x12166124: mov dword ptr [ebp - 0x18], eax */
    MEM32(ebp + (-0x28)) = edx; /* 0x12166127: mov dword ptr [ebp - 0x28], edx */
    MEM32(ebp + (-0x24)) = edx; /* 0x1216612A: mov dword ptr [ebp - 0x24], edx */
    MEM32(ebp + (-0x20)) = edx; /* 0x1216612D: mov dword ptr [ebp - 0x20], edx */
    MEM32(ebp + (-0x1C)) = edx; /* 0x12166130: mov dword ptr [ebp - 0x1c], edx */
    eax = MEM32(ecx + 0xC); /* 0x12166133: mov eax, dword ptr [ecx + 0xc] */
    MEM32(ebp + (-0x28)) = eax; /* 0x12166136: mov dword ptr [ebp - 0x28], eax */
    eax = MEM32(edi + 0x10); /* 0x12166139: mov eax, dword ptr [edi + 0x10] */
    eax = MEM32(eax + 0xC); /* 0x1216613C: mov eax, dword ptr [eax + 0xc] */
    PUSH32(esp, edx); /* 0x1216613F: push edx */
    PUSH32(esp, ecx); /* 0x12166140: push ecx */
    ecx = ebp + (-0x14); /* 0x12166141: lea ecx, [ebp - 0x14] */
    ebx = ebp + (-0x28); /* 0x12166144: lea ebx, [ebp - 0x28] */
    MEM32(ebp + (-0x24)) = eax; /* 0x12166147: mov dword ptr [ebp - 0x24], eax */
    RECOMP_CALL(sub_1216606D); /* 0x1216614A: call 0x1216606d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x1216614F: push edi */
    PUSH32(esp, MEM32(ebp + (-0x18))); /* 0x12166150: push dword ptr [ebp - 0x18] */
    RECOMP_CALL(sub_12164D63); /* 0x12166153: call 0x12164d63 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x12166158: mov ecx, dword ptr [ebp - 4] */
    esi = POP32_VAL(esp); /* 0x1216615B: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x1216615C: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x1216615E: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x1216615F: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12166164: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12166165: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1216616D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1216616Du);

L_1216616D:
    edi = edi; /* 0x1216616D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1216616F: push ebp */
    ebp = esp; /* 0x12166170: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12166172: push ecx */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x12166173: fld qword ptr [ecx + 0x28] */
    PUSH32(esp, esi); /* 0x12166176: push esi */
    _st[0] -= *(double*)ADDR(edx + 0x28); /* 0x12166177: fsub qword ptr [edx + 0x28] */
    fp_push(0.0); /* 0x1216617A: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1216617C: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1216617E: fnstsw ax */
    fp_xch(1); /* 0x12166180: fxch st(1) */
    /* test HI8(eax), 0x41u */ /* 0x12166182: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12166189; /* 0x12166185: jne 0x12166189 */
L_12166187:
    _st[0] = -_st[0]; /* 0x12166187: fchs  */
L_12166189:
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x12166189: fld qword ptr [ecx + 0x30] */
    PUSH32(esp, edi); /* 0x1216618C: push edi */
    _st[0] -= *(double*)ADDR(edx + 0x30); /* 0x1216618D: fsub qword ptr [edx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x12166190: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12166192: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x12166194: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1216619B; /* 0x12166197: jp 0x1216619b */
L_12166199:
    _st[0] = -_st[0]; /* 0x12166199: fchs  */
L_1216619B:
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1216619B: faddp st(1) */
    fp_push(*(double*)ADDR(ebx + 0x28)); /* 0x1216619D: fld qword ptr [ebx + 0x28] */
    _st[0] -= *(double*)ADDR(edx + 0x28); /* 0x121661A0: fsub qword ptr [edx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x121661A3: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121661A5: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x121661A7: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_121661AE; /* 0x121661AA: jp 0x121661ae */
L_121661AC:
    _st[0] = -_st[0]; /* 0x121661AC: fchs  */
L_121661AE:
    fp_push(*(double*)ADDR(ebx + 0x30)); /* 0x121661AE: fld qword ptr [ebx + 0x30] */
    edi = POP32_VAL(esp); /* 0x121661B1: pop edi */
    _st[0] -= *(double*)ADDR(edx + 0x30); /* 0x121661B2: fsub qword ptr [edx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], _st[3]); /* 0x121661B5: fcom st(3) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121661B7: fnstsw ax */
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x121661B9: fstp st(3) */
    fp_xch(2); /* 0x121661BB: fxch st(2) */
    /* test HI8(eax), 5 */ /* 0x121661BD: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_121661C4; /* 0x121661C0: jp 0x121661c4 */
L_121661C2:
    _st[0] = -_st[0]; /* 0x121661C2: fchs  */
L_121661C4:
    { double _v = fp_pop(); _st[1] += _v; } /* 0x121661C4: faddp st(2) */
    esi = MEM32(ebp + 0x8); /* 0x121661C6: mov esi, dword ptr [ebp + 8] */
    fp_push(_st[1]); /* 0x121661C9: fld st(1) */
    _st[0] += _st[1]; /* 0x121661CB: fadd st(1) */
    fp_push(*(double*)ADDR(0x120014C0)); /* 0x121661CD: fld qword ptr [0x120014c0] */
    _st[3] *= _st[0]; /* 0x121661D3: fmul st(3), st(0) */
    fp_xch(3); /* 0x121661D5: fxch st(3) */
    _st[0] /= _st[1]; /* 0x121661D7: fdiv st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + (-0x4)) = _v; } /* 0x121661D9: fstp dword ptr [ebp - 4] */
    fp_push(*(float*)&MEM32(ebp + (-0x4))); /* 0x121661DC: fld dword ptr [ebp - 4] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi) = _v; } /* 0x121661DF: fst dword ptr [esi] */
    fp_xch(2); /* 0x121661E1: fxch st(2) */
    { double _v = fp_pop(); _st[2] *= _v; } /* 0x121661E3: fmulp st(3) */
    { double _v = fp_pop(); _st[1] = _v == 0.0 ? _st[1] : _st[1] / _v; } /* 0x121661E5: fdivp st(2) */
    fp_xch(1); /* 0x121661E7: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebp + 0x8) = _v; } /* 0x121661E9: fstp dword ptr [ebp + 8] */
    fp_push(*(float*)&MEM32(ebp + 0x8)); /* 0x121661EC: fld dword ptr [ebp + 8] */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x4) = _v; } /* 0x121661EF: fst dword ptr [esi + 4] */
    _st[0] *= *(double*)ADDR(ebx + 0x10); /* 0x121661F2: fmul qword ptr [ebx + 0x10] */
    fp_push(*(double*)ADDR(ecx + 0x10)); /* 0x121661F5: fld qword ptr [ecx + 0x10] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x121661F8: fmulp st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x121661FA: faddp st(1) */
    _st[0] += *(double*)ADDR(edx + 0x10); /* 0x121661FC: fadd qword ptr [edx + 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(edx + 0x10) = _v; } /* 0x121661FF: fstp qword ptr [edx + 0x10] */
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x12166202: fld dword ptr [esi + 4] */
    _st[0] *= *(double*)ADDR(ebx + 0x18); /* 0x12166205: fmul qword ptr [ebx + 0x18] */
    fp_push(*(float*)&MEM32(esi)); /* 0x12166208: fld dword ptr [esi] */
    _st[0] *= *(double*)ADDR(ecx + 0x18); /* 0x1216620A: fmul qword ptr [ecx + 0x18] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1216620D: faddp st(1) */
    _st[0] += *(double*)ADDR(edx + 0x18); /* 0x1216620F: fadd qword ptr [edx + 0x18] */
    { double _v = fp_pop(); *(double*)ADDR(edx + 0x18) = _v; } /* 0x12166212: fstp qword ptr [edx + 0x18] */
    fp_push(*(float*)&MEM32(esi + 0x4)); /* 0x12166215: fld dword ptr [esi + 4] */
    _st[0] *= *(double*)ADDR(ebx + 0x20); /* 0x12166218: fmul qword ptr [ebx + 0x20] */
    fp_push(*(float*)&MEM32(esi)); /* 0x1216621B: fld dword ptr [esi] */
    esi = POP32_VAL(esp); /* 0x1216621D: pop esi */
    _st[0] *= *(double*)ADDR(ecx + 0x20); /* 0x1216621E: fmul qword ptr [ecx + 0x20] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12166221: faddp st(1) */
    _st[0] += *(double*)ADDR(edx + 0x20); /* 0x12166223: fadd qword ptr [edx + 0x20] */
    { double _v = fp_pop(); *(double*)ADDR(edx + 0x20) = _v; } /* 0x12166226: fstp qword ptr [edx + 0x20] */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12166229: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1216622A: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12166232(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12166232u);

L_12166232:
    edi = edi; /* 0x12166232: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12166234: push ebp */
    ebp = esp; /* 0x12166235: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12166237: push ecx */
    PUSH32(esp, ebx); /* 0x12166238: push ebx */
    ebx = eax; /* 0x12166239: mov ebx, eax */
    eax = MEM32(ebx + 0x4); /* 0x1216623B: mov eax, dword ptr [ebx + 4] */
    eax = MEM32(eax + 0x8); /* 0x1216623E: mov eax, dword ptr [eax + 8] */
    eax = MEM32(eax); /* 0x12166241: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12166243: push esi */
    esi = MEM32(eax); /* 0x12166244: mov esi, dword ptr [eax] */
    edx = MEM32(esi + 0x10); /* 0x12166246: mov edx, dword ptr [esi + 0x10] */
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x12166249: fld qword ptr [edx + 0x28] */
    PUSH32(esp, edi); /* 0x1216624C: push edi */
    edi = MEM32(ebx); /* 0x1216624D: mov edi, dword ptr [ebx] */
    ecx = MEM32(edi + 0x10); /* 0x1216624F: mov ecx, dword ptr [edi + 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0x28)); /* 0x12166252: fcomp qword ptr [ecx + 0x28] */
    fp_pop();
    MEM32(ebp + (-0x4)) = eax; /* 0x12166255: mov dword ptr [ebp - 4], eax */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12166258: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1216625A: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_121662BE; /* 0x1216625D: je 0x121662be */
L_1216625F:
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x1216625F: fld qword ptr [ecx + 0x28] */
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x12166262: fld qword ptr [edx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12166265: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12166267: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x12166269: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1216627B; /* 0x1216626C: jp 0x1216627b */
L_1216626E:
    fp_push(*(double*)ADDR(edx + 0x30)); /* 0x1216626E: fld qword ptr [edx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0x30)); /* 0x12166271: fcomp qword ptr [ecx + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12166274: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x12166276: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_121662BE; /* 0x12166279: je 0x121662be */
L_1216627B:
    eax = MEM32(edi + 0x4); /* 0x1216627B: mov eax, dword ptr [edi + 4] */
    PUSH32(esp, ecx); /* 0x1216627E: push ecx */
    PUSH32(esp, edx); /* 0x1216627F: push edx */
    PUSH32(esp, MEM32(eax + 0x10)); /* 0x12166280: push dword ptr [eax + 0x10] */
    RECOMP_CALL(sub_12167776); /* 0x12166283: call 0x12167776 */
    RECOMP_FLAGS_IN();
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x12001A48)); /* 0x12166288: fcomp qword ptr [0x12001a48] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1216628E: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x12166290: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_121662D8; /* 0x12166293: jnp 0x121662d8 */
L_12166295:
    eax = MEM32(ebx + 0x4); /* 0x12166295: mov eax, dword ptr [ebx + 4] */
    MEM8(ebx + 0xE) = (uint8_t)(1); /* 0x12166298: mov byte ptr [ebx + 0xe], 1 */
    eax = MEM32(eax + 0x4); /* 0x1216629C: mov eax, dword ptr [eax + 4] */
    eax = MEM32(eax); /* 0x1216629F: mov eax, dword ptr [eax] */
    MEM8(eax + 0xE) = (uint8_t)(1); /* 0x121662A1: mov byte ptr [eax + 0xe], 1 */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x121662A5: push dword ptr [edi + 4] */
    RECOMP_CALL(sub_12164EFE); /* 0x121662A8: call 0x12164efe */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x4); /* 0x121662AD: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, edi); /* 0x121662B0: push edi */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x121662B1: push dword ptr [eax + 0xc] */
    RECOMP_CALL(sub_12164D63); /* 0x121662B4: call 0x12164d63 */
    RECOMP_FLAGS_IN();
    goto L_12166340; /* 0x121662B9: jmp 0x12166340 */
L_121662BE:
    eax = MEM32(esi + 0x4); /* 0x121662BE: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, edx); /* 0x121662C1: push edx */
    PUSH32(esp, ecx); /* 0x121662C2: push ecx */
    PUSH32(esp, MEM32(eax + 0x10)); /* 0x121662C3: push dword ptr [eax + 0x10] */
    RECOMP_CALL(sub_12167776); /* 0x121662C6: call 0x12167776 */
    RECOMP_FLAGS_IN();
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x12001A48)); /* 0x121662CB: fcomp qword ptr [0x12001a48] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121662D1: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x121662D3: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121662DC; /* 0x121662D6: jne 0x121662dc */
L_121662D8:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121662D8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_12166343; /* 0x121662DA: jmp 0x12166343 */
L_121662DC:
    edx = MEM32(edi + 0x10); /* 0x121662DC: mov edx, dword ptr [edi + 0x10] */
    ecx = MEM32(esi + 0x10); /* 0x121662DF: mov ecx, dword ptr [esi + 0x10] */
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x121662E2: fld qword ptr [edx + 0x28] */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x121662E5: fld qword ptr [ecx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x121662E8: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121662EA: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x121662EC: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12166321; /* 0x121662EF: jp 0x12166321 */
L_121662F1:
    fp_push(*(double*)ADDR(edx + 0x30)); /* 0x121662F1: fld qword ptr [edx + 0x30] */
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x121662F4: fld qword ptr [ecx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x121662F7: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121662F9: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x121662FB: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12166321; /* 0x121662FE: jp 0x12166321 */
L_12166300:
    /* cmp edx, ecx */ /* 0x12166300: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12166340; /* 0x12166302: je 0x12166340 */
L_12166304:
    PUSH32(esp, MEM32(edx + 0x38)); /* 0x12166304: push dword ptr [edx + 0x38] */
    ebx = MEM32(ebp + 0x8); /* 0x12166307: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(ebx + 0x6C)); /* 0x1216630A: push dword ptr [ebx + 0x6c] */
    RECOMP_CALL(sub_121686B1); /* 0x1216630D: call 0x121686b1 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x4); /* 0x12166312: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x12166315: push dword ptr [eax + 0xc] */
    ecx = ebx; /* 0x12166318: mov ecx, ebx */
    RECOMP_CALL(sub_121660F2); /* 0x1216631A: call 0x121660f2 */
    RECOMP_FLAGS_IN();
    goto L_12166340; /* 0x1216631F: jmp 0x12166340 */
L_12166321:
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x12166321: push dword ptr [esi + 4] */
    RECOMP_CALL(sub_12164EFE); /* 0x12166324: call 0x12164efe */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x4); /* 0x12166329: mov ecx, dword ptr [esi + 4] */
    PUSH32(esp, MEM32(ecx + 0xC)); /* 0x1216632C: push dword ptr [ecx + 0xc] */
    PUSH32(esp, edi); /* 0x1216632F: push edi */
    RECOMP_CALL(sub_12164D63); /* 0x12166330: call 0x12164d63 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x12166335: mov ecx, dword ptr [ebp - 4] */
    MEM8(ecx + 0xE) = (uint8_t)(1); /* 0x12166338: mov byte ptr [ecx + 0xe], 1 */
    MEM8(ebx + 0xE) = (uint8_t)(1); /* 0x1216633C: mov byte ptr [ebx + 0xe], 1 */
L_12166340:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12166340: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x12166342: inc eax */
    _flag_k = FK_INC;
L_12166343:
    edi = POP32_VAL(esp); /* 0x12166343: pop edi */
    esi = POP32_VAL(esp); /* 0x12166344: pop esi */
    ebx = POP32_VAL(esp); /* 0x12166345: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12166346: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12166347: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1216634F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1216634Fu);

L_1216634F:
    edi = edi; /* 0x1216634F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12166351: push ebp */
    ebp = esp; /* 0x12166352: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12166354: push ecx */
    PUSH32(esp, ecx); /* 0x12166355: push ecx */
    eax = MEM32(edi + 0x4); /* 0x12166356: mov eax, dword ptr [edi + 4] */
    eax = MEM32(eax + 0x8); /* 0x12166359: mov eax, dword ptr [eax + 8] */
    eax = MEM32(eax); /* 0x1216635C: mov eax, dword ptr [eax] */
    PUSH32(esp, ebx); /* 0x1216635E: push ebx */
    ebx = MEM32(eax); /* 0x1216635F: mov ebx, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12166361: push esi */
    esi = MEM32(edi); /* 0x12166362: mov esi, dword ptr [edi] */
    MEM32(ebp + (-0x4)) = eax; /* 0x12166364: mov dword ptr [ebp - 4], eax */
    eax = MEM32(esi + 0x4); /* 0x12166367: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(eax + 0x10); /* 0x1216636A: mov ecx, dword ptr [eax + 0x10] */
    eax = MEM32(ebx + 0x4); /* 0x1216636D: mov eax, dword ptr [ebx + 4] */
    edx = MEM32(eax + 0x10); /* 0x12166370: mov edx, dword ptr [eax + 0x10] */
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x12166373: fld qword ptr [edx + 0x28] */
    MEM32(ebp + (-0x8)) = esi; /* 0x12166376: mov dword ptr [ebp - 8], esi */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0x28)); /* 0x12166379: fcomp qword ptr [ecx + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1216637C: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1216637E: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_121663E5; /* 0x12166381: je 0x121663e5 */
L_12166383:
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x12166383: fld qword ptr [ecx + 0x28] */
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x12166386: fld qword ptr [edx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12166389: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1216638B: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1216638D: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1216639F; /* 0x12166390: jp 0x1216639f */
L_12166392:
    fp_push(*(double*)ADDR(edx + 0x30)); /* 0x12166392: fld qword ptr [edx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0x30)); /* 0x12166395: fcomp qword ptr [ecx + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12166398: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x1216639A: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_121663E5; /* 0x1216639D: je 0x121663e5 */
L_1216639F:
    PUSH32(esp, MEM32(ebx + 0x10)); /* 0x1216639F: push dword ptr [ebx + 0x10] */
    PUSH32(esp, ecx); /* 0x121663A2: push ecx */
    PUSH32(esp, edx); /* 0x121663A3: push edx */
    RECOMP_CALL(sub_12167776); /* 0x121663A4: call 0x12167776 */
    RECOMP_FLAGS_IN();
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x12001A48)); /* 0x121663A9: fcomp qword ptr [0x12001a48] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121663AF: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x121663B1: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_121663FC; /* 0x121663B4: je 0x121663fc */
L_121663B6:
    eax = MEM32(ebp + (-0x4)); /* 0x121663B6: mov eax, dword ptr [ebp - 4] */
    MEM8(eax + 0xE) = (uint8_t)(1); /* 0x121663B9: mov byte ptr [eax + 0xe], 1 */
    PUSH32(esp, ebx); /* 0x121663BD: push ebx */
    MEM8(edi + 0xE) = (uint8_t)(1); /* 0x121663BE: mov byte ptr [edi + 0xe], 1 */
    RECOMP_CALL(sub_12164EFE); /* 0x121663C2: call 0x12164efe */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebx + 0x4)); /* 0x121663C7: push dword ptr [ebx + 4] */
    esi = eax; /* 0x121663CA: mov esi, eax */
    eax = MEM32(ebp + (-0x8)); /* 0x121663CC: mov eax, dword ptr [ebp - 8] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x121663CF: push dword ptr [eax + 0xc] */
    RECOMP_CALL(sub_12164D63); /* 0x121663D2: call 0x12164d63 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x4); /* 0x121663D7: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(eax + 0x14); /* 0x121663DA: mov ecx, dword ptr [eax + 0x14] */
    SET_LO8(eax, MEM8(edi + 0xC)); /* 0x121663DD: mov al, byte ptr [edi + 0xc] */
    MEM8(ecx + 0x15) = (uint8_t)(LO8(eax)); /* 0x121663E0: mov byte ptr [ecx + 0x15], al */
    goto L_1216642A; /* 0x121663E3: jmp 0x1216642a */
L_121663E5:
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x121663E5: push dword ptr [esi + 0x10] */
    PUSH32(esp, edx); /* 0x121663E8: push edx */
    PUSH32(esp, ecx); /* 0x121663E9: push ecx */
    RECOMP_CALL(sub_12167776); /* 0x121663EA: call 0x12167776 */
    RECOMP_FLAGS_IN();
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(0x12001A48)); /* 0x121663EF: fcomp qword ptr [0x12001a48] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121663F5: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x121663F7: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12166400; /* 0x121663FA: jp 0x12166400 */
L_121663FC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121663FC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1216642D; /* 0x121663FE: jmp 0x1216642d */
L_12166400:
    eax = MEM32(edi + 0x4); /* 0x12166400: mov eax, dword ptr [edi + 4] */
    MEM8(edi + 0xE) = (uint8_t)(1); /* 0x12166403: mov byte ptr [edi + 0xe], 1 */
    eax = MEM32(eax + 0x4); /* 0x12166407: mov eax, dword ptr [eax + 4] */
    eax = MEM32(eax); /* 0x1216640A: mov eax, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x1216640C: push esi */
    MEM8(eax + 0xE) = (uint8_t)(1); /* 0x1216640D: mov byte ptr [eax + 0xe], 1 */
    RECOMP_CALL(sub_12164EFE); /* 0x12166411: call 0x12164efe */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12166416: mov esi, eax */
    PUSH32(esp, esi); /* 0x12166418: push esi */
    PUSH32(esp, MEM32(ebx + 0x4)); /* 0x12166419: push dword ptr [ebx + 4] */
    RECOMP_CALL(sub_12164D63); /* 0x1216641C: call 0x12164d63 */
    RECOMP_FLAGS_IN();
    edx = MEM32(esi + 0x14); /* 0x12166421: mov edx, dword ptr [esi + 0x14] */
    SET_LO8(ecx, MEM8(edi + 0xC)); /* 0x12166424: mov cl, byte ptr [edi + 0xc] */
    MEM8(edx + 0x15) = (uint8_t)(LO8(ecx)); /* 0x12166427: mov byte ptr [edx + 0x15], cl */
L_1216642A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1216642A: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x1216642C: inc eax */
    _flag_k = FK_INC;
L_1216642D:
    esi = POP32_VAL(esp); /* 0x1216642D: pop esi */
    ebx = POP32_VAL(esp); /* 0x1216642E: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1216642F: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12166430: ret  */
    RECOMP_REGS_OUT();
}

void sub_12166436(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12166436u);

L_12166436:
    edi = edi; /* 0x12166436: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12166438: push ebp */
    ebp = esp; /* 0x12166439: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x80u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x80u; /* 0x1216643B: sub esp, 0x80 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x12166441: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x12166446: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x12166448: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ecx + 0x4); /* 0x1216644B: mov eax, dword ptr [ecx + 4] */
    eax = MEM32(eax + 0x8); /* 0x1216644E: mov eax, dword ptr [eax + 8] */
    PUSH32(esp, ebx); /* 0x12166451: push ebx */
    ebx = edx; /* 0x12166452: mov ebx, edx */
    edx = MEM32(eax); /* 0x12166454: mov edx, dword ptr [eax] */
    eax = MEM32(ecx); /* 0x12166456: mov eax, dword ptr [ecx] */
    PUSH32(esp, esi); /* 0x12166458: push esi */
    esi = MEM32(eax + 0x10); /* 0x12166459: mov esi, dword ptr [eax + 0x10] */
    MEM32(ebp + (-0x58)) = eax; /* 0x1216645C: mov dword ptr [ebp - 0x58], eax */
    eax = MEM32(eax + 0x4); /* 0x1216645F: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + (-0x60)) = ecx; /* 0x12166462: mov dword ptr [ebp - 0x60], ecx */
    ecx = MEM32(edx); /* 0x12166465: mov ecx, dword ptr [edx] */
    MEM32(ebp + (-0x6C)) = edx; /* 0x12166467: mov dword ptr [ebp - 0x6c], edx */
    edx = MEM32(eax + 0x10); /* 0x1216646A: mov edx, dword ptr [eax + 0x10] */
    eax = MEM32(ecx + 0x4); /* 0x1216646D: mov eax, dword ptr [ecx + 4] */
    PUSH32(esp, edi); /* 0x12166470: push edi */
    edi = MEM32(ecx + 0x10); /* 0x12166471: mov edi, dword ptr [ecx + 0x10] */
    MEM32(ebp + (-0x64)) = ecx; /* 0x12166474: mov dword ptr [ebp - 0x64], ecx */
    ecx = MEM32(eax + 0x10); /* 0x12166477: mov ecx, dword ptr [eax + 0x10] */
    MEM32(ebp + (-0x70)) = ebx; /* 0x1216647A: mov dword ptr [ebp - 0x70], ebx */
    MEM32(ebp + (-0x68)) = edx; /* 0x1216647D: mov dword ptr [ebp - 0x68], edx */
    MEM32(ebp + (-0x5C)) = ecx; /* 0x12166480: mov dword ptr [ebp - 0x5c], ecx */
    /* cmp esi, edi */ /* 0x12166483: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121668C9; /* 0x12166485: je 0x121668c9 */
L_1216648B:
    fp_push(*(double*)ADDR(edx + 0x30)); /* 0x1216648B: fld qword ptr [edx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi + 0x30)); /* 0x1216648E: fcomp qword ptr [esi + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12166491: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x12166493: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1216649D; /* 0x12166496: jne 0x1216649d */
L_12166498:
    fp_push(*(double*)ADDR(esi + 0x30)); /* 0x12166498: fld qword ptr [esi + 0x30] */
    goto L_121664A0; /* 0x1216649B: jmp 0x121664a0 */
L_1216649D:
    fp_push(*(double*)ADDR(edx + 0x30)); /* 0x1216649D: fld qword ptr [edx + 0x30] */
L_121664A0:
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x121664A0: fld qword ptr [ecx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edi + 0x30)); /* 0x121664A3: fcomp qword ptr [edi + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121664A6: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x121664A8: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_121664B2; /* 0x121664AB: jp 0x121664b2 */
L_121664AD:
    fp_push(*(double*)ADDR(edi + 0x30)); /* 0x121664AD: fld qword ptr [edi + 0x30] */
    goto L_121664B5; /* 0x121664B0: jmp 0x121664b5 */
L_121664B2:
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x121664B2: fld qword ptr [ecx + 0x30] */
L_121664B5:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x121664B5: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121664B7: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x121664B9: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_121668C9; /* 0x121664BC: jnp 0x121668c9 */
L_121664C2:
    fp_push(*(double*)ADDR(edi + 0x28)); /* 0x121664C2: fld qword ptr [edi + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi + 0x28)); /* 0x121664C5: fcomp qword ptr [esi + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121664C8: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x121664CA: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12166503; /* 0x121664CD: je 0x12166503 */
L_121664CF:
    fp_push(*(double*)ADDR(esi + 0x28)); /* 0x121664CF: fld qword ptr [esi + 0x28] */
    fp_push(*(double*)ADDR(edi + 0x28)); /* 0x121664D2: fld qword ptr [edi + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x121664D5: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121664D7: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x121664D9: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_121664EB; /* 0x121664DC: jp 0x121664eb */
L_121664DE:
    fp_push(*(double*)ADDR(edi + 0x30)); /* 0x121664DE: fld qword ptr [edi + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi + 0x30)); /* 0x121664E1: fcomp qword ptr [esi + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121664E4: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x121664E6: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12166503; /* 0x121664E9: je 0x12166503 */
L_121664EB:
    PUSH32(esp, esi); /* 0x121664EB: push esi */
    PUSH32(esp, edi); /* 0x121664EC: push edi */
    PUSH32(esp, edx); /* 0x121664ED: push edx */
    RECOMP_CALL(sub_12167776); /* 0x121664EE: call 0x12167776 */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x121664F3: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x121664F5: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121664F7: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x121664F9: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1216651A; /* 0x121664FC: jne 0x1216651a */
L_121664FE:
    goto L_121668C9; /* 0x121664FE: jmp 0x121668c9 */
L_12166503:
    PUSH32(esp, edi); /* 0x12166503: push edi */
    PUSH32(esp, esi); /* 0x12166504: push esi */
    PUSH32(esp, ecx); /* 0x12166505: push ecx */
    RECOMP_CALL(sub_12167776); /* 0x12166506: call 0x12167776 */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x1216650B: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1216650D: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1216650F: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x12166511: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_121668C9; /* 0x12166514: jnp 0x121668c9 */
L_1216651A:
    ecx = MEM32(ebp + (-0x68)); /* 0x1216651A: mov ecx, dword ptr [ebp - 0x68] */
    eax = ebp + (-0x54); /* 0x1216651D: lea eax, [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x12166520: push eax */
    eax = MEM32(ebp + (-0x5C)); /* 0x12166521: mov eax, dword ptr [ebp - 0x5c] */
    PUSH32(esp, edi); /* 0x12166524: push edi */
    PUSH32(esp, eax); /* 0x12166525: push eax */
    PUSH32(esp, esi); /* 0x12166526: push esi */
    PUSH32(esp, ecx); /* 0x12166527: push ecx */
    RECOMP_CALL(sub_1216788B); /* 0x12166528: call 0x1216788b */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebx + 0x70); /* 0x1216652D: mov edx, dword ptr [ebx + 0x70] */
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x12166530: fld qword ptr [edx + 0x28] */
    fp_push(*(double*)ADDR(ebp + (-0x2C))); /* 0x12166533: fld qword ptr [ebp - 0x2c] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12166536: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12166538: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1216653A: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x1216653C: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_12166560; /* 0x1216653F: jnp 0x12166560 */
L_12166541:
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x12166541: fld qword ptr [edx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12166544: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12166546: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x12166548: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1216659D; /* 0x1216654B: jp 0x1216659d */
L_1216654D:
    fp_push(*(double*)ADDR(edx + 0x30)); /* 0x1216654D: fld qword ptr [edx + 0x30] */
    fp_push(*(double*)ADDR(ebp + (-0x24))); /* 0x12166550: fld qword ptr [ebp - 0x24] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12166553: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12166555: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x12166557: fstp st(1) */
    /* test HI8(eax), 0x41u */ /* 0x12166559: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12166570; /* 0x1216655C: jp 0x12166570 */
L_1216655E:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1216655E: fstp st(1) */
L_12166560:
    eax = edx; /* 0x12166560: mov eax, edx */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12166562: fstp st(0) */
    fp_push(*(double*)ADDR(eax + 0x28)); /* 0x12166564: fld qword ptr [eax + 0x28] */
    *(double*)ADDR(ebp + (-0x2C)) = _st[0]; /* 0x12166567: fst qword ptr [ebp - 0x2c] */
    fp_push(*(double*)ADDR(eax + 0x30)); /* 0x1216656A: fld qword ptr [eax + 0x30] */
    *(double*)ADDR(ebp + (-0x24)) = _st[0]; /* 0x1216656D: fst qword ptr [ebp - 0x24] */
L_12166570:
    fp_push(*(double*)ADDR(edi + 0x28)); /* 0x12166570: fld qword ptr [edi + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi + 0x28)); /* 0x12166573: fcomp qword ptr [esi + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12166576: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x12166578: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_121665A2; /* 0x1216657B: je 0x121665a2 */
L_1216657D:
    fp_push(*(double*)ADDR(esi + 0x28)); /* 0x1216657D: fld qword ptr [esi + 0x28] */
    fp_push(*(double*)ADDR(edi + 0x28)); /* 0x12166580: fld qword ptr [edi + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12166583: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12166585: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x12166587: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12166599; /* 0x1216658A: jp 0x12166599 */
L_1216658C:
    fp_push(*(double*)ADDR(edi + 0x30)); /* 0x1216658C: fld qword ptr [edi + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi + 0x30)); /* 0x1216658F: fcomp qword ptr [esi + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12166592: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x12166594: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_121665A2; /* 0x12166597: je 0x121665a2 */
L_12166599:
    ecx = edi; /* 0x12166599: mov ecx, edi */
    goto L_121665A4; /* 0x1216659B: jmp 0x121665a4 */
L_1216659D:
    fp_push(*(double*)ADDR(ebp + (-0x24))); /* 0x1216659D: fld qword ptr [ebp - 0x24] */
    RECOMP_BACKEDGE();
    goto L_12166570; /* 0x121665A0: jmp 0x12166570 */
L_121665A2:
    ecx = esi; /* 0x121665A2: mov ecx, esi */
L_121665A4:
    fp_xch(1); /* 0x121665A4: fxch st(1) */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0x28)); /* 0x121665A6: fcom qword ptr [ecx + 0x28] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121665A9: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x121665AB: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1216660C; /* 0x121665AE: je 0x1216660c */
L_121665B0:
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x121665B0: fld qword ptr [ecx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x121665B3: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121665B5: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x121665B7: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_121665DA; /* 0x121665BA: jp 0x121665da */
L_121665BC:
    fp_xch(1); /* 0x121665BC: fxch st(1) */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0x30)); /* 0x121665BE: fcom qword ptr [ecx + 0x30] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121665C1: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x121665C3: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121665D8; /* 0x121665C6: jne 0x121665d8 */
L_121665C8:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x121665C8: fstp st(1) */
L_121665CA:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x121665CA: fstp st(0) */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x121665CC: fld qword ptr [ecx + 0x28] */
    *(double*)ADDR(ebp + (-0x2C)) = _st[0]; /* 0x121665CF: fst qword ptr [ebp - 0x2c] */
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x121665D2: fld qword ptr [ecx + 0x30] */
    *(double*)ADDR(ebp + (-0x24)) = _st[0]; /* 0x121665D5: fst qword ptr [ebp - 0x24] */
L_121665D8:
    fp_xch(1); /* 0x121665D8: fxch st(1) */
L_121665DA:
    fp_push(*(double*)ADDR(esi + 0x28)); /* 0x121665DA: fld qword ptr [esi + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x121665DD: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121665DF: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x121665E1: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_121665F2; /* 0x121665E4: jp 0x121665f2 */
L_121665E6:
    fp_push(*(double*)ADDR(esi + 0x30)); /* 0x121665E6: fld qword ptr [esi + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x121665E9: fucomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121665EB: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x121665ED: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_12166610; /* 0x121665F0: jnp 0x12166610 */
L_121665F2:
    fp_push(*(double*)ADDR(edi + 0x28)); /* 0x121665F2: fld qword ptr [edi + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x121665F5: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121665F7: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x121665F9: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12166622; /* 0x121665FC: jp 0x12166622 */
L_121665FE:
    fp_push(*(double*)ADDR(edi + 0x30)); /* 0x121665FE: fld qword ptr [edi + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12166601: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12166603: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x12166605: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12166624; /* 0x12166608: jp 0x12166624 */
L_1216660A:
    goto L_12166614; /* 0x1216660A: jmp 0x12166614 */
L_1216660C:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1216660C: fstp st(0) */
    RECOMP_BACKEDGE();
    goto L_121665CA; /* 0x1216660E: jmp 0x121665ca */
L_12166610:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12166610: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12166612: fstp st(0) */
L_12166614:
    eax = MEM32(ebp + (-0x60)); /* 0x12166614: mov eax, dword ptr [ebp - 0x60] */
    PUSH32(esp, ebx); /* 0x12166617: push ebx */
    RECOMP_CALL(sub_12166232); /* 0x12166618: call 0x12166232 */
    RECOMP_FLAGS_IN();
    goto L_121668C9; /* 0x1216661D: jmp 0x121668c9 */
L_12166622:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12166622: fstp st(0) */
L_12166624:
    ecx = MEM32(ebp + (-0x68)); /* 0x12166624: mov ecx, dword ptr [ebp - 0x68] */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x12166627: fld qword ptr [ecx + 0x28] */
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x1216662A: fld qword ptr [edx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1216662D: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1216662F: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x12166631: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12166645; /* 0x12166634: jp 0x12166645 */
L_12166636:
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x12166636: fld qword ptr [ecx + 0x30] */
    fp_push(*(double*)ADDR(edx + 0x30)); /* 0x12166639: fld qword ptr [edx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1216663C: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1216663E: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x12166640: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1216665F; /* 0x12166643: jnp 0x1216665f */
L_12166645:
    eax = ebp + (-0x54); /* 0x12166645: lea eax, [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x12166648: push eax */
    PUSH32(esp, edx); /* 0x12166649: push edx */
    PUSH32(esp, ecx); /* 0x1216664A: push ecx */
    RECOMP_CALL(sub_12167776); /* 0x1216664B: call 0x12167776 */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x12166650: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12166652: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12166654: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x12166656: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_12166764; /* 0x12166659: jnp 0x12166764 */
L_1216665F:
    ecx = MEM32(ebp + (-0x5C)); /* 0x1216665F: mov ecx, dword ptr [ebp - 0x5c] */
    edx = MEM32(ebx + 0x70); /* 0x12166662: mov edx, dword ptr [ebx + 0x70] */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x12166665: fld qword ptr [ecx + 0x28] */
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x12166668: fld qword ptr [edx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1216666B: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1216666D: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1216666F: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12166683; /* 0x12166672: jp 0x12166683 */
L_12166674:
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x12166674: fld qword ptr [ecx + 0x30] */
    fp_push(*(double*)ADDR(edx + 0x30)); /* 0x12166677: fld qword ptr [edx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1216667A: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1216667C: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1216667E: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1216669D; /* 0x12166681: jnp 0x1216669d */
L_12166683:
    eax = ebp + (-0x54); /* 0x12166683: lea eax, [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x12166686: push eax */
    PUSH32(esp, edx); /* 0x12166687: push edx */
    PUSH32(esp, ecx); /* 0x12166688: push ecx */
    RECOMP_CALL(sub_12167776); /* 0x12166689: call 0x12167776 */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x1216668E: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12166690: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12166692: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x12166694: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12166764; /* 0x12166697: je 0x12166764 */
L_1216669D:
    ecx = MEM32(ebp + (-0x58)); /* 0x1216669D: mov ecx, dword ptr [ebp - 0x58] */
    PUSH32(esp, MEM32(ecx + 0x4)); /* 0x121666A0: push dword ptr [ecx + 4] */
    RECOMP_CALL(sub_12164EFE); /* 0x121666A3: call 0x12164efe */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x64)); /* 0x121666A8: mov eax, dword ptr [ebp - 0x64] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x121666AB: push dword ptr [eax + 4] */
    RECOMP_CALL(sub_12164EFE); /* 0x121666AE: call 0x12164efe */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x58))); /* 0x121666B3: push dword ptr [ebp - 0x58] */
    eax = MEM32(ebp + (-0x64)); /* 0x121666B6: mov eax, dword ptr [ebp - 0x64] */
    eax = MEM32(eax + 0x4); /* 0x121666B9: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x121666BC: push dword ptr [eax + 0xc] */
    RECOMP_CALL(sub_12164D63); /* 0x121666BF: call 0x12164d63 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + (-0x2C))); /* 0x121666C4: fld qword ptr [ebp - 0x2c] */
    ecx = MEM32(ebp + (-0x58)); /* 0x121666C7: mov ecx, dword ptr [ebp - 0x58] */
    eax = MEM32(ecx + 0x10); /* 0x121666CA: mov eax, dword ptr [ecx + 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(eax + 0x28) = _v; } /* 0x121666CD: fstp qword ptr [eax + 0x28] */
    eax = MEM32(ecx + 0x10); /* 0x121666D0: mov eax, dword ptr [ecx + 0x10] */
    fp_push(*(double*)ADDR(ebp + (-0x24))); /* 0x121666D3: fld qword ptr [ebp - 0x24] */
    { double _v = fp_pop(); *(double*)ADDR(eax + 0x30) = _v; } /* 0x121666D6: fstp qword ptr [eax + 0x30] */
    PUSH32(esp, MEM32(ecx + 0x10)); /* 0x121666D9: push dword ptr [ecx + 0x10] */
    PUSH32(esp, MEM32(ebx + 0x6C)); /* 0x121666DC: push dword ptr [ebx + 0x6c] */
    RECOMP_CALL(sub_12168558); /* 0x121666DF: call 0x12168558 */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x121666E4: fldz  */
    edx = MEM32(ebp + (-0x58)); /* 0x121666E6: mov edx, dword ptr [ebp - 0x58] */
    ecx = MEM32(edx + 0x10); /* 0x121666E9: mov ecx, dword ptr [edx + 0x10] */
    MEM32(ecx + 0x38) = eax; /* 0x121666EC: mov dword ptr [ecx + 0x38], eax */
    eax = MEM32(esi + 0xC); /* 0x121666EF: mov eax, dword ptr [esi + 0xc] */
    ecx = MEM32(ebp + (-0x68)); /* 0x121666F2: mov ecx, dword ptr [ebp - 0x68] */
    edx = MEM32(edx + 0x10); /* 0x121666F5: mov edx, dword ptr [edx + 0x10] */
    MEM32(ebp + (-0x80)) = eax; /* 0x121666F8: mov dword ptr [ebp - 0x80], eax */
    eax = MEM32(ecx + 0xC); /* 0x121666FB: mov eax, dword ptr [ecx + 0xc] */
    MEM32(ebp + (-0x7C)) = eax; /* 0x121666FE: mov dword ptr [ebp - 0x7c], eax */
    eax = MEM32(edi + 0xC); /* 0x12166701: mov eax, dword ptr [edi + 0xc] */
    MEM32(ebp + (-0x78)) = eax; /* 0x12166704: mov dword ptr [ebp - 0x78], eax */
    eax = MEM32(ebp + (-0x5C)); /* 0x12166707: mov eax, dword ptr [ebp - 0x5c] */
    eax = MEM32(eax + 0xC); /* 0x1216670A: mov eax, dword ptr [eax + 0xc] */
    *(double*)ADDR(edx + 0x20) = _st[0]; /* 0x1216670D: fst qword ptr [edx + 0x20] */
    MEM32(ebp + (-0x74)) = eax; /* 0x12166710: mov dword ptr [ebp - 0x74], eax */
    *(double*)ADDR(edx + 0x18) = _st[0]; /* 0x12166713: fst qword ptr [edx + 0x18] */
    eax = ebp + (-0x14); /* 0x12166716: lea eax, [ebp - 0x14] */
    { double _v = fp_pop(); *(double*)ADDR(edx + 0x10) = _v; } /* 0x12166719: fstp qword ptr [edx + 0x10] */
    ebx = ecx; /* 0x1216671C: mov ebx, ecx */
    PUSH32(esp, eax); /* 0x1216671E: push eax */
    ecx = esi; /* 0x1216671F: mov ecx, esi */
    RECOMP_CALL(sub_1216616D); /* 0x12166721: call 0x1216616d */
    RECOMP_FLAGS_IN();
    ebx = MEM32(ebp + (-0x5C)); /* 0x12166726: mov ebx, dword ptr [ebp - 0x5c] */
    eax = ebp + (-0xC); /* 0x12166729: lea eax, [ebp - 0xc] */
    PUSH32(esp, eax); /* 0x1216672C: push eax */
    ecx = edi; /* 0x1216672D: mov ecx, edi */
    RECOMP_CALL(sub_1216616D); /* 0x1216672F: call 0x1216616d */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + (-0x70)); /* 0x12166734: mov esi, dword ptr [ebp - 0x70] */
    PUSH32(esp, 1); /* 0x12166737: push 1 */
    PUSH32(esp, edx); /* 0x12166739: push edx */
    ecx = ebp + (-0x14); /* 0x1216673A: lea ecx, [ebp - 0x14] */
    ebx = ebp + (-0x80); /* 0x1216673D: lea ebx, [ebp - 0x80] */
    RECOMP_CALL(sub_1216606D); /* 0x12166740: call 0x1216606d */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x6C)); /* 0x12166745: mov ecx, dword ptr [ebp - 0x6c] */
    esi = MEM32(ebp + (-0x60)); /* 0x12166748: mov esi, dword ptr [ebp - 0x60] */
    MEM8(ecx + 0xE) = (uint8_t)(1); /* 0x1216674B: mov byte ptr [ecx + 0xe], 1 */
    eax = MEM32(esi + 0x4); /* 0x1216674F: mov eax, dword ptr [esi + 4] */
    MEM8(esi + 0xE) = (uint8_t)(1); /* 0x12166752: mov byte ptr [esi + 0xe], 1 */
    eax = MEM32(eax + 0x4); /* 0x12166756: mov eax, dword ptr [eax + 4] */
    eax = MEM32(eax); /* 0x12166759: mov eax, dword ptr [eax] */
    MEM8(eax + 0xE) = (uint8_t)(1); /* 0x1216675B: mov byte ptr [eax + 0xe], 1 */
    goto L_121668C9; /* 0x1216675F: jmp 0x121668c9 */
L_12166764:
    eax = MEM32(ebx + 0x70); /* 0x12166764: mov eax, dword ptr [ebx + 0x70] */
    /* cmp MEM32(ebp + (-0x5C)), eax */ /* 0x12166767: cmp dword ptr [ebp - 0x5c], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x5C))); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121667BA; /* 0x1216676A: jne 0x121667ba */
L_1216676C:
    esi = MEM32(ebp + (-0x58)); /* 0x1216676C: mov esi, dword ptr [ebp - 0x58] */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x1216676F: push dword ptr [esi + 4] */
    RECOMP_CALL(sub_12164EFE); /* 0x12166772: call 0x12164efe */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x64)); /* 0x12166777: mov eax, dword ptr [ebp - 0x64] */
    PUSH32(esp, esi); /* 0x1216677A: push esi */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x1216677B: push dword ptr [eax + 4] */
    RECOMP_CALL(sub_12164D63); /* 0x1216677E: call 0x12164d63 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x60)); /* 0x12166783: mov eax, dword ptr [ebp - 0x60] */
    RECOMP_CALL(sub_12165ED1); /* 0x12166786: call 0x12165ed1 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1216678B: mov edi, eax */
    ecx = MEM32(edi + 0x4); /* 0x1216678D: mov ecx, dword ptr [edi + 4] */
    ecx = MEM32(ecx + 0x8); /* 0x12166790: mov ecx, dword ptr [ecx + 8] */
    eax = MEM32(ecx); /* 0x12166793: mov eax, dword ptr [ecx] */
    ecx = MEM32(ebp + (-0x6C)); /* 0x12166795: mov ecx, dword ptr [ebp - 0x6c] */
    esi = MEM32(eax); /* 0x12166798: mov esi, dword ptr [eax] */
    PUSH32(esp, ecx); /* 0x1216679A: push ecx */
    PUSH32(esp, ebx); /* 0x1216679B: push ebx */
    RECOMP_CALL(sub_12165FAA); /* 0x1216679C: call 0x12165faa */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x4); /* 0x121667A1: mov ecx, dword ptr [esi + 4] */
    PUSH32(esp, 1); /* 0x121667A4: push 1 */
    PUSH32(esp, esi); /* 0x121667A6: push esi */
    PUSH32(esp, esi); /* 0x121667A7: push esi */
    PUSH32(esp, MEM32(ecx + 0xC)); /* 0x121667A8: push dword ptr [ecx + 0xc] */
L_121667AB:
    PUSH32(esp, edi); /* 0x121667AB: push edi */
    PUSH32(esp, ebx); /* 0x121667AC: push ebx */
    RECOMP_CALL(sub_12166B75); /* 0x121667AD: call 0x12166b75 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121667B2: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x121667B4: inc eax */
    _flag_k = FK_INC;
    goto L_121668CB; /* 0x121667B5: jmp 0x121668cb */
L_121667BA:
    ecx = MEM32(ebp + (-0x68)); /* 0x121667BA: mov ecx, dword ptr [ebp - 0x68] */
    /* cmp ecx, eax */ /* 0x121667BD: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12166835; /* 0x121667BF: jne 0x12166835 */
L_121667C1:
    esi = MEM32(ebp + (-0x64)); /* 0x121667C1: mov esi, dword ptr [ebp - 0x64] */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x121667C4: push dword ptr [esi + 4] */
    RECOMP_CALL(sub_12164EFE); /* 0x121667C7: call 0x12164efe */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x4); /* 0x121667CC: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x121667CF: push dword ptr [eax + 0xc] */
    eax = MEM32(ebp + (-0x58)); /* 0x121667D2: mov eax, dword ptr [ebp - 0x58] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x121667D5: push dword ptr [eax + 0xc] */
    RECOMP_CALL(sub_12164D63); /* 0x121667D8: call 0x12164d63 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x60)); /* 0x121667DD: mov ecx, dword ptr [ebp - 0x60] */
    eax = MEM32(ecx); /* 0x121667E0: mov eax, dword ptr [ecx] */
    eax = MEM32(eax + 0x4); /* 0x121667E2: mov eax, dword ptr [eax + 4] */
    edx = MEM32(eax + 0x10); /* 0x121667E5: mov edx, dword ptr [eax + 0x10] */
    edi = ecx; /* 0x121667E8: mov edi, ecx */
L_121667EA:
    eax = MEM32(edi + 0x4); /* 0x121667EA: mov eax, dword ptr [edi + 4] */
    eax = MEM32(eax + 0x4); /* 0x121667ED: mov eax, dword ptr [eax + 4] */
    edi = MEM32(eax); /* 0x121667F0: mov edi, dword ptr [eax] */
    eax = MEM32(edi); /* 0x121667F2: mov eax, dword ptr [edi] */
    eax = MEM32(eax + 0x4); /* 0x121667F4: mov eax, dword ptr [eax + 4] */
    /* cmp MEM32(eax + 0x10), edx */ /* 0x121667F7: cmp dword ptr [eax + 0x10], edx */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121667EA; /* 0x121667FA: je 0x121667ea */
L_121667FC:
    eax = MEM32(edi + 0x4); /* 0x121667FC: mov eax, dword ptr [edi + 4] */
    eax = MEM32(eax + 0x8); /* 0x121667FF: mov eax, dword ptr [eax + 8] */
    eax = MEM32(eax); /* 0x12166802: mov eax, dword ptr [eax] */
    eax = MEM32(eax); /* 0x12166804: mov eax, dword ptr [eax] */
    eax = MEM32(eax + 0x4); /* 0x12166806: mov eax, dword ptr [eax + 4] */
    esi = MEM32(eax + 0x8); /* 0x12166809: mov esi, dword ptr [eax + 8] */
    eax = MEM32(ebp + (-0x64)); /* 0x1216680C: mov eax, dword ptr [ebp - 0x64] */
    eax = MEM32(eax + 0x4); /* 0x1216680F: mov eax, dword ptr [eax + 4] */
    eax = MEM32(eax + 0xC); /* 0x12166812: mov eax, dword ptr [eax + 0xc] */
    PUSH32(esp, 0); /* 0x12166815: push 0 */
    MEM32(ecx) = eax; /* 0x12166817: mov dword ptr [ecx], eax */
    PUSH32(esp, ebx); /* 0x12166819: push ebx */
    eax = ecx; /* 0x1216681A: mov eax, ecx */
    RECOMP_CALL(sub_12165FAA); /* 0x1216681C: call 0x12165faa */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x58)); /* 0x12166821: mov ecx, dword ptr [ebp - 0x58] */
    ecx = MEM32(ecx + 0x4); /* 0x12166824: mov ecx, dword ptr [ecx + 4] */
    PUSH32(esp, 1); /* 0x12166827: push 1 */
    PUSH32(esp, esi); /* 0x12166829: push esi */
    PUSH32(esp, MEM32(ecx + 0x8)); /* 0x1216682A: push dword ptr [ecx + 8] */
    PUSH32(esp, MEM32(eax + 0x8)); /* 0x1216682D: push dword ptr [eax + 8] */
    RECOMP_BACKEDGE();
    goto L_121667AB; /* 0x12166830: jmp 0x121667ab */
L_12166835:
    edx = ebp + (-0x54); /* 0x12166835: lea edx, [ebp - 0x54] */
    PUSH32(esp, edx); /* 0x12166838: push edx */
    PUSH32(esp, eax); /* 0x12166839: push eax */
    PUSH32(esp, ecx); /* 0x1216683A: push ecx */
    RECOMP_CALL(sub_12167776); /* 0x1216683B: call 0x12167776 */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x12166840: fldz  */
    esi = MEM32(ebp + (-0x60)); /* 0x12166842: mov esi, dword ptr [ebp - 0x60] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12166845: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12166847: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x12166849: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12166881; /* 0x1216684C: jp 0x12166881 */
L_1216684E:
    eax = MEM32(esi + 0x4); /* 0x1216684E: mov eax, dword ptr [esi + 4] */
    edi = MEM32(ebp + (-0x58)); /* 0x12166851: mov edi, dword ptr [ebp - 0x58] */
    MEM8(esi + 0xE) = (uint8_t)(1); /* 0x12166854: mov byte ptr [esi + 0xe], 1 */
    eax = MEM32(eax + 0x4); /* 0x12166858: mov eax, dword ptr [eax + 4] */
    eax = MEM32(eax); /* 0x1216685B: mov eax, dword ptr [eax] */
    MEM8(eax + 0xE) = (uint8_t)(1); /* 0x1216685D: mov byte ptr [eax + 0xe], 1 */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x12166861: push dword ptr [edi + 4] */
    RECOMP_CALL(sub_12164EFE); /* 0x12166864: call 0x12164efe */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x70); /* 0x12166869: mov eax, dword ptr [ebx + 0x70] */
    ecx = MEM32(edi + 0x10); /* 0x1216686C: mov ecx, dword ptr [edi + 0x10] */
    fp_push(*(double*)ADDR(eax + 0x28)); /* 0x1216686F: fld qword ptr [eax + 0x28] */
    { double _v = fp_pop(); *(double*)ADDR(ecx + 0x28) = _v; } /* 0x12166872: fstp qword ptr [ecx + 0x28] */
    eax = MEM32(ebx + 0x70); /* 0x12166875: mov eax, dword ptr [ebx + 0x70] */
    ecx = MEM32(edi + 0x10); /* 0x12166878: mov ecx, dword ptr [edi + 0x10] */
    fp_push(*(double*)ADDR(eax + 0x30)); /* 0x1216687B: fld qword ptr [eax + 0x30] */
    { double _v = fp_pop(); *(double*)ADDR(ecx + 0x30) = _v; } /* 0x1216687E: fstp qword ptr [ecx + 0x30] */
L_12166881:
    eax = ebp + (-0x54); /* 0x12166881: lea eax, [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x12166884: push eax */
    PUSH32(esp, MEM32(ebx + 0x70)); /* 0x12166885: push dword ptr [ebx + 0x70] */
    PUSH32(esp, MEM32(ebp + (-0x5C))); /* 0x12166888: push dword ptr [ebp - 0x5c] */
    RECOMP_CALL(sub_12167776); /* 0x1216688B: call 0x12167776 */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x12166890: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12166892: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12166894: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x12166896: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121668C9; /* 0x12166899: jne 0x121668c9 */
L_1216689B:
    ecx = MEM32(ebp + (-0x6C)); /* 0x1216689B: mov ecx, dword ptr [ebp - 0x6c] */
    MEM8(ecx + 0xE) = (uint8_t)(1); /* 0x1216689E: mov byte ptr [ecx + 0xe], 1 */
    MEM8(esi + 0xE) = (uint8_t)(1); /* 0x121668A2: mov byte ptr [esi + 0xe], 1 */
    esi = MEM32(ebp + (-0x64)); /* 0x121668A6: mov esi, dword ptr [ebp - 0x64] */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x121668A9: push dword ptr [esi + 4] */
    RECOMP_CALL(sub_12164EFE); /* 0x121668AC: call 0x12164efe */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x70); /* 0x121668B1: mov eax, dword ptr [ebx + 0x70] */
    ecx = MEM32(esi + 0x10); /* 0x121668B4: mov ecx, dword ptr [esi + 0x10] */
    fp_push(*(double*)ADDR(eax + 0x28)); /* 0x121668B7: fld qword ptr [eax + 0x28] */
    { double _v = fp_pop(); *(double*)ADDR(ecx + 0x28) = _v; } /* 0x121668BA: fstp qword ptr [ecx + 0x28] */
    eax = MEM32(ebx + 0x70); /* 0x121668BD: mov eax, dword ptr [ebx + 0x70] */
    ecx = MEM32(esi + 0x10); /* 0x121668C0: mov ecx, dword ptr [esi + 0x10] */
    fp_push(*(double*)ADDR(eax + 0x30)); /* 0x121668C3: fld qword ptr [eax + 0x30] */
    { double _v = fp_pop(); *(double*)ADDR(ecx + 0x30) = _v; } /* 0x121668C6: fstp qword ptr [ecx + 0x30] */
L_121668C9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121668C9: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_121668CB:
    ecx = MEM32(ebp + (-0x4)); /* 0x121668CB: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x121668CE: pop edi */
    esi = POP32_VAL(esp); /* 0x121668CF: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x121668D0: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x121668D2: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x121668D3: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121668D8: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121668D9: ret  */
    RECOMP_REGS_OUT();
}

void sub_121668DF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121668DFu);

L_121668DF:
    edi = edi; /* 0x121668DF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121668E1: push ebp */
    ebp = esp; /* 0x121668E2: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x121668E4: push ecx */
    PUSH32(esp, ecx); /* 0x121668E5: push ecx */
    PUSH32(esp, ebx); /* 0x121668E6: push ebx */
    PUSH32(esp, esi); /* 0x121668E7: push esi */
    PUSH32(esp, edi); /* 0x121668E8: push edi */
    edi = eax; /* 0x121668E9: mov edi, eax */
    eax = MEM32(edi + 0x4); /* 0x121668EB: mov eax, dword ptr [edi + 4] */
    goto L_121668F5; /* 0x121668EE: jmp 0x121668f5 */
L_121668F0:
    eax = MEM32(ebx + 0x4); /* 0x121668F0: mov eax, dword ptr [ebx + 4] */
    edi = ebx; /* 0x121668F3: mov edi, ebx */
L_121668F5:
    eax = MEM32(eax + 0x8); /* 0x121668F5: mov eax, dword ptr [eax + 8] */
    ebx = MEM32(eax); /* 0x121668F8: mov ebx, dword ptr [eax] */
L_121668FA:
    /* cmp MEM8(ebx + 0xE), 0 */ /* 0x121668FA: cmp byte ptr [ebx + 0xe], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0xE)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_121668F0; /* 0x121668FE: jne 0x121668f0 */
L_12166900:
    /* cmp MEM8(edi + 0xE), 0 */ /* 0x12166900: cmp byte ptr [edi + 0xe], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xE)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12166922; /* 0x12166904: jne 0x12166922 */
L_12166906:
    eax = MEM32(edi + 0x4); /* 0x12166906: mov eax, dword ptr [edi + 4] */
    eax = MEM32(eax + 0x4); /* 0x12166909: mov eax, dword ptr [eax + 4] */
    ebx = edi; /* 0x1216690C: mov ebx, edi */
    edi = MEM32(eax); /* 0x1216690E: mov edi, dword ptr [eax] */
    /* test edi, edi */ /* 0x12166910: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121669D7; /* 0x12166912: je 0x121669d7 */
L_12166918:
    /* cmp MEM8(edi + 0xE), 0 */ /* 0x12166918: cmp byte ptr [edi + 0xe], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xE)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121669D7; /* 0x1216691C: je 0x121669d7 */
L_12166922:
    esi = MEM32(edi); /* 0x12166922: mov esi, dword ptr [edi] */
    MEM8(edi + 0xE) = (uint8_t)(0); /* 0x12166924: mov byte ptr [edi + 0xe], 0 */
    eax = MEM32(ebx); /* 0x12166928: mov eax, dword ptr [ebx] */
    ecx = MEM32(eax + 0x4); /* 0x1216692A: mov ecx, dword ptr [eax + 4] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1216692D: mov dword ptr [ebp - 4], eax */
    eax = MEM32(esi + 0x4); /* 0x12166930: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x10); /* 0x12166933: mov eax, dword ptr [eax + 0x10] */
    MEM32(ebp + (-0x8)) = esi; /* 0x12166936: mov dword ptr [ebp - 8], esi */
    /* cmp eax, MEM32(ecx + 0x10) */ /* 0x12166939: cmp eax, dword ptr [ecx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12166996; /* 0x1216693C: je 0x12166996 */
L_1216693E:
    RECOMP_CALL(sub_1216634F); /* 0x1216693E: call 0x1216634f */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12166943: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12166996; /* 0x12166945: je 0x12166996 */
L_12166947:
    /* cmp MEM8(ebx + 0xF), 0 */ /* 0x12166947: cmp byte ptr [ebx + 0xf], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0xF)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12166971; /* 0x1216694B: je 0x12166971 */
L_1216694D:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1216694D: push dword ptr [ebp + 8] */
    esi = ebx; /* 0x12166950: mov esi, ebx */
    RECOMP_CALL(sub_12165EA8); /* 0x12166952: call 0x12165ea8 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x4))); /* 0x12166957: push dword ptr [ebp - 4] */
    RECOMP_CALL(sub_12164DE9); /* 0x1216695A: call 0x12164de9 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x4); /* 0x1216695F: mov eax, dword ptr [edi + 4] */
    eax = MEM32(eax + 0x8); /* 0x12166962: mov eax, dword ptr [eax + 8] */
    ebx = MEM32(eax); /* 0x12166965: mov ebx, dword ptr [eax] */
    eax = MEM32(ebx); /* 0x12166967: mov eax, dword ptr [ebx] */
    esi = MEM32(ebp + (-0x8)); /* 0x12166969: mov esi, dword ptr [ebp - 8] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1216696C: mov dword ptr [ebp - 4], eax */
    goto L_12166996; /* 0x1216696F: jmp 0x12166996 */
L_12166971:
    /* cmp MEM8(edi + 0xF), 0 */ /* 0x12166971: cmp byte ptr [edi + 0xf], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xF)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12166996; /* 0x12166975: je 0x12166996 */
L_12166977:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12166977: push dword ptr [ebp + 8] */
    esi = edi; /* 0x1216697A: mov esi, edi */
    RECOMP_CALL(sub_12165EA8); /* 0x1216697C: call 0x12165ea8 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x12166981: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_12164DE9); /* 0x12166984: call 0x12164de9 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x4); /* 0x12166989: mov eax, dword ptr [ebx + 4] */
    eax = MEM32(eax + 0x4); /* 0x1216698C: mov eax, dword ptr [eax + 4] */
    edi = MEM32(eax); /* 0x1216698F: mov edi, dword ptr [eax] */
    esi = MEM32(edi); /* 0x12166991: mov esi, dword ptr [edi] */
    MEM32(ebp + (-0x8)) = esi; /* 0x12166993: mov dword ptr [ebp - 8], esi */
L_12166996:
    eax = MEM32(esi + 0x10); /* 0x12166996: mov eax, dword ptr [esi + 0x10] */
    ecx = MEM32(ebp + (-0x4)); /* 0x12166999: mov ecx, dword ptr [ebp - 4] */
    /* cmp eax, MEM32(ecx + 0x10) */ /* 0x1216699C: cmp eax, dword ptr [ecx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121669E9; /* 0x1216699F: je 0x121669e9 */
L_121669A1:
    eax = MEM32(esi + 0x4); /* 0x121669A1: mov eax, dword ptr [esi + 4] */
    edx = MEM32(eax + 0x10); /* 0x121669A4: mov edx, dword ptr [eax + 0x10] */
    eax = MEM32(ecx + 0x4); /* 0x121669A7: mov eax, dword ptr [ecx + 4] */
    ecx = MEM32(eax + 0x10); /* 0x121669AA: mov ecx, dword ptr [eax + 0x10] */
    eax = MEM32(ebp + 0x8); /* 0x121669AD: mov eax, dword ptr [ebp + 8] */
    /* cmp edx, ecx */ /* 0x121669B0: cmp edx, ecx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121669DE; /* 0x121669B2: je 0x121669de */
L_121669B4:
    /* cmp MEM8(edi + 0xF), 0 */ /* 0x121669B4: cmp byte ptr [edi + 0xf], 0 */
    _flag_a = (uint32_t)(MEM8(edi + 0xF)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_121669DE; /* 0x121669B8: jne 0x121669de */
L_121669BA:
    /* cmp MEM8(ebx + 0xF), 0 */ /* 0x121669BA: cmp byte ptr [ebx + 0xf], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0xF)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_121669DE; /* 0x121669BE: jne 0x121669de */
L_121669C0:
    /* cmp edx, MEM32(eax + 0x70) */ /* 0x121669C0: cmp edx, dword ptr [eax + 0x70] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(eax + 0x70));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121669CA; /* 0x121669C3: je 0x121669ca */
L_121669C5:
    /* cmp ecx, MEM32(eax + 0x70) */ /* 0x121669C5: cmp ecx, dword ptr [eax + 0x70] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(eax + 0x70));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121669DE; /* 0x121669C8: jne 0x121669de */
L_121669CA:
    ecx = edi; /* 0x121669CA: mov ecx, edi */
    edx = eax; /* 0x121669CC: mov edx, eax */
    RECOMP_CALL(sub_12166436); /* 0x121669CE: call 0x12166436 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x121669D3: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121669E6; /* 0x121669D5: je 0x121669e6 */
L_121669D7:
    edi = POP32_VAL(esp); /* 0x121669D7: pop edi */
    esi = POP32_VAL(esp); /* 0x121669D8: pop esi */
    ebx = POP32_VAL(esp); /* 0x121669D9: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121669DA: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121669DB: ret 4 */
L_121669DE:
    PUSH32(esp, eax); /* 0x121669DE: push eax */
    eax = edi; /* 0x121669DF: mov eax, edi */
    RECOMP_CALL(sub_12166232); /* 0x121669E1: call 0x12166232 */
    RECOMP_FLAGS_IN();
L_121669E6:
    ecx = MEM32(ebp + (-0x4)); /* 0x121669E6: mov ecx, dword ptr [ebp - 4] */
L_121669E9:
    eax = MEM32(esi + 0x10); /* 0x121669E9: mov eax, dword ptr [esi + 0x10] */
    /* cmp eax, MEM32(ecx + 0x10) */ /* 0x121669EC: cmp eax, dword ptr [ecx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_121668FA; /* 0x121669EF: jne 0x121668fa */
L_121669F5:
    eax = MEM32(esi + 0x4); /* 0x121669F5: mov eax, dword ptr [esi + 4] */
    edx = MEM32(ecx + 0x4); /* 0x121669F8: mov edx, dword ptr [ecx + 4] */
    eax = MEM32(eax + 0x10); /* 0x121669FB: mov eax, dword ptr [eax + 0x10] */
    /* cmp eax, MEM32(edx + 0x10) */ /* 0x121669FE: cmp eax, dword ptr [edx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_121668FA; /* 0x12166A01: jne 0x121668fa */
L_12166A07:
    eax = MEM32(esi + 0x1C); /* 0x12166A07: mov eax, dword ptr [esi + 0x1c] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x1C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x1C) = MEM32(ecx + 0x1C) + eax; /* 0x12166A0A: add dword ptr [ecx + 0x1c], eax */
    _flag_k = FK_ADD;
    eax = MEM32(esi + 0x4); /* 0x12166A0D: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x1C); /* 0x12166A10: mov eax, dword ptr [eax + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12166A13: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(edx + 0x1C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(edx + 0x1C) = MEM32(edx + 0x1C) + eax; /* 0x12166A16: add dword ptr [edx + 0x1c], eax */
    _flag_k = FK_ADD;
    esi = edi; /* 0x12166A19: mov esi, edi */
    RECOMP_CALL(sub_12165EA8); /* 0x12166A1B: call 0x12165ea8 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x12166A20: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_12164DE9); /* 0x12166A23: call 0x12164de9 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x4); /* 0x12166A28: mov eax, dword ptr [ebx + 4] */
    eax = MEM32(eax + 0x4); /* 0x12166A2B: mov eax, dword ptr [eax + 4] */
    edi = MEM32(eax); /* 0x12166A2E: mov edi, dword ptr [eax] */
    RECOMP_BACKEDGE();
    goto L_121668FA; /* 0x12166A30: jmp 0x121668fa */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_12166A3A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12166A3Au);

L_12166A3A:
    edi = edi; /* 0x12166A3A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12166A3C: push ebp */
    ebp = esp; /* 0x12166A3D: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12166A3F: push esi */
    PUSH32(esp, 0x10u); /* 0x12166A40: push 0x10 */
    RECOMP_CALL(sub_121BF524); /* 0x12166A42: call 0x121bf524 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12166A47: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x12166A49: pop ecx */
    /* test esi, esi */ /* 0x12166A4A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12166AB7; /* 0x12166A4C: je 0x12166ab7 */
L_12166A4E:
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x12166A4E: push dword ptr [edi + 8] */
    RECOMP_CALL(sub_12164D27); /* 0x12166A51: call 0x12164d27 */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x12166A56: mov ecx, eax */
    PUSH32(esp, esi); /* 0x12166A58: push esi */
    /* test ecx, ecx */ /* 0x12166A59: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12166A65; /* 0x12166A5B: jne 0x12166a65 */
L_12166A5D:
    RECOMP_CALL(sub_121BF586); /* 0x12166A5D: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12166A62: pop ecx */
    goto L_12166AB7; /* 0x12166A63: jmp 0x12166ab7 */
L_12166A65:
    eax = MEM32(ecx + 0x10); /* 0x12166A65: mov eax, dword ptr [ecx + 0x10] */
    fp_push(*(double*)ADDR(0x120134C0)); /* 0x12166A68: fld qword ptr [0x120134c0] */
    { double _v = fp_pop(); *(double*)ADDR(eax + 0x28) = _v; } /* 0x12166A6E: fstp qword ptr [eax + 0x28] */
    eax = MEM32(ecx + 0x10); /* 0x12166A71: mov eax, dword ptr [ecx + 0x10] */
    fp_push(*(double*)ADDR(ebp + 0x8)); /* 0x12166A74: fld qword ptr [ebp + 8] */
    *(double*)ADDR(eax + 0x30) = _st[0]; /* 0x12166A77: fst qword ptr [eax + 0x30] */
    eax = MEM32(ecx + 0x4); /* 0x12166A7A: mov eax, dword ptr [ecx + 4] */
    eax = MEM32(eax + 0x10); /* 0x12166A7D: mov eax, dword ptr [eax + 0x10] */
    fp_push(*(double*)ADDR(0x120134B8)); /* 0x12166A80: fld qword ptr [0x120134b8] */
    { double _v = fp_pop(); *(double*)ADDR(eax + 0x28) = _v; } /* 0x12166A86: fstp qword ptr [eax + 0x28] */
    eax = MEM32(ecx + 0x4); /* 0x12166A89: mov eax, dword ptr [ecx + 4] */
    eax = MEM32(eax + 0x10); /* 0x12166A8C: mov eax, dword ptr [eax + 0x10] */
    { double _v = fp_pop(); *(double*)ADDR(eax + 0x30) = _v; } /* 0x12166A8F: fstp qword ptr [eax + 0x30] */
    eax = MEM32(ecx + 0x4); /* 0x12166A92: mov eax, dword ptr [ecx + 4] */
    eax = MEM32(eax + 0x10); /* 0x12166A95: mov eax, dword ptr [eax + 0x10] */
    MEM32(edi + 0x70) = eax; /* 0x12166A98: mov dword ptr [edi + 0x70], eax */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12166A9B: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi) = ecx; /* 0x12166A9D: mov dword ptr [esi], ecx */
    MEM32(esi + 0x8) = eax; /* 0x12166A9F: mov dword ptr [esi + 8], eax */
    MEM32(esi + 0xC) = 0x100u; /* 0x12166AA2: mov dword ptr [esi + 0xc], 0x100 */
    PUSH32(esp, MEM32(edi + 0x68)); /* 0x12166AA9: push dword ptr [edi + 0x68] */
    PUSH32(esp, MEM32(edi + 0x68)); /* 0x12166AAC: push dword ptr [edi + 0x68] */
    RECOMP_CALL(sub_12167DAA); /* 0x12166AAF: call 0x12167daa */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x4) = eax; /* 0x12166AB4: mov dword ptr [esi + 4], eax */
L_12166AB7:
    esi = POP32_VAL(esp); /* 0x12166AB7: pop esi */
    ebp = POP32_VAL(esp); /* 0x12166AB8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12166AB9: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12166AC1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12166AC1u);

L_12166AC1:
    edi = edi; /* 0x12166AC1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12166AC3: push ebp */
    ebp = esp; /* 0x12166AC4: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12166AC6: push ecx */
    PUSH32(esp, ecx); /* 0x12166AC7: push ecx */
    ecx = MEM32(ebp + 0x8); /* 0x12166AC8: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ecx + 0x8); /* 0x12166ACB: mov eax, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x58u; /* 0x12166ACE: add eax, 0x58 */
    _flag_k = FK_ADD;
    PUSH32(esp, edi); /* 0x12166AD1: push edi */
    edi = MEM32(eax); /* 0x12166AD2: mov edi, dword ptr [eax] */
    MEM32(ebp + (-0x8)) = eax; /* 0x12166AD4: mov dword ptr [ebp - 8], eax */
    /* cmp edi, eax */ /* 0x12166AD7: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12166B6B; /* 0x12166AD9: je 0x12166b6b */
L_12166ADF:
    PUSH32(esp, ebx); /* 0x12166ADF: push ebx */
    PUSH32(esp, esi); /* 0x12166AE0: push esi */
L_12166AE1:
    eax = MEM32(edi + 0x4); /* 0x12166AE1: mov eax, dword ptr [edi + 4] */
    eax = MEM32(eax + 0x10); /* 0x12166AE4: mov eax, dword ptr [eax + 0x10] */
    edx = MEM32(edi + 0x10); /* 0x12166AE7: mov edx, dword ptr [edi + 0x10] */
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x12166AEA: fld qword ptr [edx + 0x28] */
    esi = MEM32(edi); /* 0x12166AED: mov esi, dword ptr [edi] */
    fp_push(*(double*)ADDR(eax + 0x28)); /* 0x12166AEF: fld qword ptr [eax + 0x28] */
    ebx = MEM32(edi + 0xC); /* 0x12166AF2: mov ebx, dword ptr [edi + 0xc] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12166AF5: fucompp  */
    fp_pop(); fp_pop();
    MEM32(ebp + (-0x4)) = eax; /* 0x12166AF7: mov dword ptr [ebp - 4], eax */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12166AFA: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x12166AFC: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12166B30; /* 0x12166AFF: jp 0x12166b30 */
L_12166B01:
    eax = MEM32(ebp + (-0x4)); /* 0x12166B01: mov eax, dword ptr [ebp - 4] */
    fp_push(*(double*)ADDR(edx + 0x30)); /* 0x12166B04: fld qword ptr [edx + 0x30] */
    fp_push(*(double*)ADDR(eax + 0x30)); /* 0x12166B07: fld qword ptr [eax + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12166B0A: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12166B0C: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x12166B0E: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12166B30; /* 0x12166B11: jp 0x12166b30 */
L_12166B13:
    eax = ebx + 0xC; /* 0x12166B13: lea eax, [ebx + 0xc] */
    MEM32(ebp + (-0x4)) = eax; /* 0x12166B16: mov dword ptr [ebp - 4], eax */
    /* cmp MEM32(eax), edi */ /* 0x12166B19: cmp dword ptr [eax], edi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12166B30; /* 0x12166B1B: je 0x12166b30 */
L_12166B1D:
    PUSH32(esp, ebx); /* 0x12166B1D: push ebx */
    RECOMP_CALL(sub_121660F2); /* 0x12166B1E: call 0x121660f2 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x12166B23: push edi */
    RECOMP_CALL(sub_12164DE9); /* 0x12166B24: call 0x12164de9 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x4)); /* 0x12166B29: mov eax, dword ptr [ebp - 4] */
    edi = ebx; /* 0x12166B2C: mov edi, ebx */
    ebx = MEM32(eax); /* 0x12166B2E: mov ebx, dword ptr [eax] */
L_12166B30:
    /* cmp MEM32(ebx + 0xC), edi */ /* 0x12166B30: cmp dword ptr [ebx + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebx + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12166B5B; /* 0x12166B33: jne 0x12166b5b */
L_12166B35:
    /* cmp ebx, edi */ /* 0x12166B35: cmp ebx, edi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12166B4A; /* 0x12166B37: je 0x12166b4a */
L_12166B39:
    /* cmp ebx, esi */ /* 0x12166B39: cmp ebx, esi */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12166B42; /* 0x12166B3B: je 0x12166b42 */
L_12166B3D:
    /* cmp ebx, MEM32(esi + 0x4) */ /* 0x12166B3D: cmp ebx, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12166B44; /* 0x12166B40: jne 0x12166b44 */
L_12166B42:
    esi = MEM32(esi); /* 0x12166B42: mov esi, dword ptr [esi] */
L_12166B44:
    PUSH32(esp, ebx); /* 0x12166B44: push ebx */
    RECOMP_CALL(sub_12164DE9); /* 0x12166B45: call 0x12164de9 */
    RECOMP_FLAGS_IN();
L_12166B4A:
    /* cmp edi, esi */ /* 0x12166B4A: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12166B53; /* 0x12166B4C: je 0x12166b53 */
L_12166B4E:
    /* cmp edi, MEM32(esi + 0x4) */ /* 0x12166B4E: cmp edi, dword ptr [esi + 4] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(esi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12166B55; /* 0x12166B51: jne 0x12166b55 */
L_12166B53:
    esi = MEM32(esi); /* 0x12166B53: mov esi, dword ptr [esi] */
L_12166B55:
    PUSH32(esp, edi); /* 0x12166B55: push edi */
    RECOMP_CALL(sub_12164DE9); /* 0x12166B56: call 0x12164de9 */
    RECOMP_FLAGS_IN();
L_12166B5B:
    ecx = MEM32(ebp + 0x8); /* 0x12166B5B: mov ecx, dword ptr [ebp + 8] */
    edi = esi; /* 0x12166B5E: mov edi, esi */
    /* cmp esi, MEM32(ebp + (-0x8)) */ /* 0x12166B60: cmp esi, dword ptr [ebp - 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + (-0x8)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_12166AE1; /* 0x12166B63: jne 0x12166ae1 */
L_12166B69:
    esi = POP32_VAL(esp); /* 0x12166B69: pop esi */
    ebx = POP32_VAL(esp); /* 0x12166B6A: pop ebx */
L_12166B6B:
    edi = POP32_VAL(esp); /* 0x12166B6B: pop edi */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12166B6C: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12166B6D: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12166B75(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12166B75u);

L_12166B75:
    edi = edi; /* 0x12166B75: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12166B77: push ebp */
    ebp = esp; /* 0x12166B78: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12166B7A: push ecx */
    PUSH32(esp, ebx); /* 0x12166B7B: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x12166B7C: mov ebx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x12166B7F: push esi */
    esi = MEM32(ebp + 0x10); /* 0x12166B80: mov esi, dword ptr [ebp + 0x10] */
    MEM32(ebp + (-0x4)) = 1; /* 0x12166B83: mov dword ptr [ebp - 4], 1 */
    PUSH32(esp, edi); /* 0x12166B8A: push edi */
L_12166B8B:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12166B8B: push dword ptr [ebp + 8] */
    edi = MEM32(esi + 0x4); /* 0x12166B8E: mov edi, dword ptr [esi + 4] */
    RECOMP_CALL(sub_12165F2A); /* 0x12166B91: call 0x12165f2a */
    RECOMP_FLAGS_IN();
    esi = MEM32(esi + 0x8); /* 0x12166B96: mov esi, dword ptr [esi + 8] */
    /* cmp esi, MEM32(ebp + 0x14) */ /* 0x12166B99: cmp esi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(MEM32(ebp + 0x14));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_12166B8B; /* 0x12166B9C: jne 0x12166b8b */
L_12166B9E:
    edi = MEM32(ebp + 0x18); /* 0x12166B9E: mov edi, dword ptr [ebp + 0x18] */
    /* test edi, edi */ /* 0x12166BA1: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12166BB5; /* 0x12166BA3: jne 0x12166bb5 */
L_12166BA5:
    eax = MEM32(ebx + 0x4); /* 0x12166BA5: mov eax, dword ptr [ebx + 4] */
    eax = MEM32(eax + 0x8); /* 0x12166BA8: mov eax, dword ptr [eax + 8] */
    eax = MEM32(eax); /* 0x12166BAB: mov eax, dword ptr [eax] */
    eax = MEM32(eax); /* 0x12166BAD: mov eax, dword ptr [eax] */
    eax = MEM32(eax + 0x4); /* 0x12166BAF: mov eax, dword ptr [eax + 4] */
    edi = MEM32(eax + 0x8); /* 0x12166BB2: mov edi, dword ptr [eax + 8] */
L_12166BB5:
    eax = MEM32(ebx + 0x4); /* 0x12166BB5: mov eax, dword ptr [ebx + 4] */
    goto L_12166C39; /* 0x12166BB8: jmp 0x12166c39 */
L_12166BBA:
    /* cmp MEM32(esi + 0x8), edi */ /* 0x12166BBA: cmp dword ptr [esi + 8], edi */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12166BDA; /* 0x12166BBD: je 0x12166bda */
L_12166BBF:
    eax = MEM32(esi + 0x4); /* 0x12166BBF: mov eax, dword ptr [esi + 4] */
    PUSH32(esp, esi); /* 0x12166BC2: push esi */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x12166BC3: push dword ptr [eax + 0xc] */
    RECOMP_CALL(sub_12164D63); /* 0x12166BC6: call 0x12164d63 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x4); /* 0x12166BCB: mov eax, dword ptr [edi + 4] */
    PUSH32(esp, esi); /* 0x12166BCE: push esi */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x12166BCF: push dword ptr [eax + 0xc] */
    RECOMP_CALL(sub_12164D63); /* 0x12166BD2: call 0x12164d63 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + 0x10); /* 0x12166BD7: mov edx, dword ptr [ebp + 0x10] */
L_12166BDA:
    ecx = MEM32(ebx + 0x8); /* 0x12166BDA: mov ecx, dword ptr [ebx + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0x1C));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - MEM32(esi + 0x1C); /* 0x12166BDD: sub ecx, dword ptr [esi + 0x1c] */
    _flag_k = FK_CMP;
    eax = MEM32(ebp + 0x8); /* 0x12166BE0: mov eax, dword ptr [ebp + 8] */
    MEM32(edx + 0x8) = ecx; /* 0x12166BE3: mov dword ptr [edx + 8], ecx */
    RECOMP_CALL(sub_12165F6A); /* 0x12166BE6: call 0x12165f6a */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(ebp + (-0x4)), 0 */ /* 0x12166BEB: cmp dword ptr [ebp - 4], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM8(edx + 0xC) = (uint8_t)(LO8(eax)); /* 0x12166BEF: mov byte ptr [edx + 0xc], al */
    MEM8(ebx + 0xE) = (uint8_t)(1); /* 0x12166BF2: mov byte ptr [ebx + 0xe], 1 */
    if (CMP_NE(_flag_a, _flag_b)) goto L_12166C2E; /* 0x12166BF6: jne 0x12166c2e */
L_12166BF8:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12166BF8: push dword ptr [ebp + 8] */
    eax = ebx; /* 0x12166BFB: mov eax, ebx */
    RECOMP_CALL(sub_12166232); /* 0x12166BFD: call 0x12166232 */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12166C02: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12166C2B; /* 0x12166C04: je 0x12166c2b */
L_12166C06:
    eax = MEM32(edi + 0x1C); /* 0x12166C06: mov eax, dword ptr [edi + 0x1c] */
    _flag_a = (uint32_t)(MEM32(esi + 0x1C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) + eax; /* 0x12166C09: add dword ptr [esi + 0x1c], eax */
    _flag_k = FK_ADD;
    eax = MEM32(edi + 0x4); /* 0x12166C0C: mov eax, dword ptr [edi + 4] */
    ecx = MEM32(esi + 0x4); /* 0x12166C0F: mov ecx, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x1C); /* 0x12166C12: mov eax, dword ptr [eax + 0x1c] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12166C15: push dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x1C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x1C) = MEM32(ecx + 0x1C) + eax; /* 0x12166C18: add dword ptr [ecx + 0x1c], eax */
    _flag_k = FK_ADD;
    esi = ebx; /* 0x12166C1B: mov esi, ebx */
    RECOMP_CALL(sub_12165EA8); /* 0x12166C1D: call 0x12165ea8 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x12166C22: push edi */
    RECOMP_CALL(sub_12164DE9); /* 0x12166C23: call 0x12164de9 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0xC); /* 0x12166C28: mov esi, dword ptr [ebp + 0xc] */
L_12166C2B:
    edx = MEM32(ebp + 0x10); /* 0x12166C2B: mov edx, dword ptr [ebp + 0x10] */
L_12166C2E:
    _flag_a = (uint32_t)(MEM32(ebp + (-0x4))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x4)) = MEM32(ebp + (-0x4)) & 0; /* 0x12166C2E: and dword ptr [ebp - 4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edx + 0x4); /* 0x12166C32: mov eax, dword ptr [edx + 4] */
    ebx = edx; /* 0x12166C35: mov ebx, edx */
    edi = esi; /* 0x12166C37: mov edi, esi */
L_12166C39:
    eax = MEM32(eax + 0x8); /* 0x12166C39: mov eax, dword ptr [eax + 8] */
    edx = MEM32(eax); /* 0x12166C3C: mov edx, dword ptr [eax] */
    eax = MEM32(edx); /* 0x12166C3E: mov eax, dword ptr [edx] */
    esi = MEM32(eax + 0x4); /* 0x12166C40: mov esi, dword ptr [eax + 4] */
    eax = MEM32(esi + 0x10); /* 0x12166C43: mov eax, dword ptr [esi + 0x10] */
    MEM32(ebp + 0xC) = esi; /* 0x12166C46: mov dword ptr [ebp + 0xc], esi */
    MEM32(ebp + 0x10) = edx; /* 0x12166C49: mov dword ptr [ebp + 0x10], edx */
    /* cmp eax, MEM32(edi + 0x10) */ /* 0x12166C4C: cmp eax, dword ptr [edi + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(edi + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12166BBA; /* 0x12166C4F: je 0x12166bba */
L_12166C55:
    /* cmp MEM8(ebp + 0x1C), 0 */ /* 0x12166C55: cmp byte ptr [ebp + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM8(ebp + 0x1C)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM8(ebx + 0xE) = (uint8_t)(1); /* 0x12166C59: mov byte ptr [ebx + 0xe], 1 */
    edi = POP32_VAL(esp); /* 0x12166C5D: pop edi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12166C6A; /* 0x12166C5E: je 0x12166c6a */
L_12166C60:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12166C60: push dword ptr [ebp + 8] */
    eax = ebx; /* 0x12166C63: mov eax, ebx */
    RECOMP_CALL(sub_121668DF); /* 0x12166C65: call 0x121668df */
    RECOMP_FLAGS_IN();
L_12166C6A:
    esi = POP32_VAL(esp); /* 0x12166C6A: pop esi */
    ebx = POP32_VAL(esp); /* 0x12166C6B: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12166C6C: leave  */
    RECOMP_FLAGS_OUT(); esp += 28; { RECOMP_REGS_OUT(); return; } /* 0x12166C6D: ret 0x18 */
    RECOMP_REGS_OUT();
}

void sub_12166C75(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12166C75u);

L_12166C75:
    edi = edi; /* 0x12166C75: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12166C77: push ebp */
    ebp = esp; /* 0x12166C78: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x12166C7A: sub esp, 0x10 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(MEM32(ebp + (-0xC))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0xC)) = MEM32(ebp + (-0xC)) & 0; /* 0x12166C7D: and dword ptr [ebp - 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x12166C81: push ebx */
    ebx = eax; /* 0x12166C82: mov ebx, eax */
    eax = MEM32(ebp + 0x8); /* 0x12166C84: mov eax, dword ptr [ebp + 8] */
    edx = MEM32(eax + 0x8); /* 0x12166C87: mov edx, dword ptr [eax + 8] */
    eax = MEM32(ebx + 0x4); /* 0x12166C8A: mov eax, dword ptr [ebx + 4] */
    eax = MEM32(eax + 0x8); /* 0x12166C8D: mov eax, dword ptr [eax + 8] */
    eax = MEM32(eax); /* 0x12166C90: mov eax, dword ptr [eax] */
    ecx = MEM32(eax); /* 0x12166C92: mov ecx, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12166C94: push esi */
    esi = MEM32(ebx); /* 0x12166C95: mov esi, dword ptr [ebx] */
    MEM32(ebp + (-0x10)) = eax; /* 0x12166C97: mov dword ptr [ebp - 0x10], eax */
    eax = MEM32(esi + 0x4); /* 0x12166C9A: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x10); /* 0x12166C9D: mov eax, dword ptr [eax + 0x10] */
    MEM32(ebp + (-0x4)) = ecx; /* 0x12166CA0: mov dword ptr [ebp - 4], ecx */
    ecx = MEM32(ecx + 0x4); /* 0x12166CA3: mov ecx, dword ptr [ecx + 4] */
    MEM32(ebp + (-0x8)) = edx; /* 0x12166CA6: mov dword ptr [ebp - 8], edx */
    /* cmp eax, MEM32(ecx + 0x10) */ /* 0x12166CA9: cmp eax, dword ptr [ecx + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12166CBA; /* 0x12166CAC: je 0x12166cba */
L_12166CAE:
    ecx = ebx; /* 0x12166CAE: mov ecx, ebx */
    edx = edi; /* 0x12166CB0: mov edx, edi */
    RECOMP_CALL(sub_12166436); /* 0x12166CB2: call 0x12166436 */
    RECOMP_FLAGS_IN();
    edx = MEM32(ebp + (-0x8)); /* 0x12166CB7: mov edx, dword ptr [ebp - 8] */
L_12166CBA:
    ecx = MEM32(esi + 0x10); /* 0x12166CBA: mov ecx, dword ptr [esi + 0x10] */
    eax = MEM32(edi + 0x70); /* 0x12166CBD: mov eax, dword ptr [edi + 0x70] */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x12166CC0: fld qword ptr [ecx + 0x28] */
    fp_push(*(double*)ADDR(eax + 0x28)); /* 0x12166CC3: fld qword ptr [eax + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12166CC6: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12166CC8: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x12166CCA: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12166D11; /* 0x12166CCD: jp 0x12166d11 */
L_12166CCF:
    eax = MEM32(edi + 0x70); /* 0x12166CCF: mov eax, dword ptr [edi + 0x70] */
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x12166CD2: fld qword ptr [ecx + 0x30] */
    fp_push(*(double*)ADDR(eax + 0x30)); /* 0x12166CD5: fld qword ptr [eax + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12166CD8: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12166CDA: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x12166CDC: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12166D11; /* 0x12166CDF: jp 0x12166d11 */
L_12166CE1:
    eax = MEM32(edx + 0x4); /* 0x12166CE1: mov eax, dword ptr [edx + 4] */
    PUSH32(esp, esi); /* 0x12166CE4: push esi */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x12166CE5: push dword ptr [eax + 0xc] */
    RECOMP_CALL(sub_12164D63); /* 0x12166CE8: call 0x12164d63 */
    RECOMP_FLAGS_IN();
    eax = ebx; /* 0x12166CED: mov eax, ebx */
    RECOMP_CALL(sub_12165ED1); /* 0x12166CEF: call 0x12165ed1 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x10))); /* 0x12166CF4: push dword ptr [ebp - 0x10] */
    ebx = eax; /* 0x12166CF7: mov ebx, eax */
    eax = MEM32(ebx + 0x4); /* 0x12166CF9: mov eax, dword ptr [ebx + 4] */
    eax = MEM32(eax + 0x8); /* 0x12166CFC: mov eax, dword ptr [eax + 8] */
    eax = MEM32(eax); /* 0x12166CFF: mov eax, dword ptr [eax] */
    ecx = MEM32(eax); /* 0x12166D01: mov ecx, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x12166D03: push edi */
    MEM32(ebp + (-0x8)) = ecx; /* 0x12166D04: mov dword ptr [ebp - 8], ecx */
    RECOMP_CALL(sub_12165FAA); /* 0x12166D07: call 0x12165faa */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12166D0C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x12166D0E: inc edx */
    _flag_k = FK_INC;
    goto L_12166D14; /* 0x12166D0F: jmp 0x12166d14 */
L_12166D11:
    edx = MEM32(ebp + (-0xC)); /* 0x12166D11: mov edx, dword ptr [ebp - 0xc] */
L_12166D14:
    ecx = MEM32(ebp + (-0x4)); /* 0x12166D14: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ecx + 0x10); /* 0x12166D17: mov eax, dword ptr [ecx + 0x10] */
    fp_push(*(double*)ADDR(eax + 0x28)); /* 0x12166D1A: fld qword ptr [eax + 0x28] */
    eax = MEM32(edi + 0x70); /* 0x12166D1D: mov eax, dword ptr [edi + 0x70] */
    fp_push(*(double*)ADDR(eax + 0x28)); /* 0x12166D20: fld qword ptr [eax + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12166D23: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12166D25: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x12166D27: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12166D65; /* 0x12166D2A: jp 0x12166d65 */
L_12166D2C:
    eax = MEM32(ecx + 0x10); /* 0x12166D2C: mov eax, dword ptr [ecx + 0x10] */
    fp_push(*(double*)ADDR(eax + 0x30)); /* 0x12166D2F: fld qword ptr [eax + 0x30] */
    eax = MEM32(edi + 0x70); /* 0x12166D32: mov eax, dword ptr [edi + 0x70] */
    fp_push(*(double*)ADDR(eax + 0x30)); /* 0x12166D35: fld qword ptr [eax + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12166D38: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12166D3A: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x12166D3C: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12166D65; /* 0x12166D3F: jp 0x12166d65 */
L_12166D41:
    eax = MEM32(ecx + 0x4); /* 0x12166D41: mov eax, dword ptr [ecx + 4] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x12166D44: push dword ptr [eax + 0xc] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12166D47: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_12164D63); /* 0x12166D4A: call 0x12164d63 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x10)); /* 0x12166D4F: mov eax, dword ptr [ebp - 0x10] */
    PUSH32(esp, 0); /* 0x12166D52: push 0 */
    PUSH32(esp, edi); /* 0x12166D54: push edi */
    RECOMP_CALL(sub_12165FAA); /* 0x12166D55: call 0x12165faa */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x12166D5A: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12166D5D: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = eax; /* 0x12166D5F: mov dword ptr [ebp + 8], eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x12166D62: inc edx */
    _flag_k = FK_INC;
    goto L_12166D68; /* 0x12166D63: jmp 0x12166d68 */
L_12166D65:
    eax = MEM32(ebp + 0x8); /* 0x12166D65: mov eax, dword ptr [ebp + 8] */
L_12166D68:
    /* test edx, edx */ /* 0x12166D68: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12166D7F; /* 0x12166D6A: je 0x12166d7f */
L_12166D6C:
    ecx = MEM32(ebp + (-0x8)); /* 0x12166D6C: mov ecx, dword ptr [ebp - 8] */
    PUSH32(esp, 1); /* 0x12166D6F: push 1 */
    PUSH32(esp, ecx); /* 0x12166D71: push ecx */
    PUSH32(esp, ecx); /* 0x12166D72: push ecx */
    PUSH32(esp, MEM32(eax + 0x8)); /* 0x12166D73: push dword ptr [eax + 8] */
    PUSH32(esp, ebx); /* 0x12166D76: push ebx */
    PUSH32(esp, edi); /* 0x12166D77: push edi */
    RECOMP_CALL(sub_12166B75); /* 0x12166D78: call 0x12166b75 */
    RECOMP_FLAGS_IN();
    goto L_12166DEA; /* 0x12166D7D: jmp 0x12166dea */
L_12166D7F:
    edx = MEM32(esi + 0x10); /* 0x12166D7F: mov edx, dword ptr [esi + 0x10] */
    ecx = MEM32(ecx + 0x10); /* 0x12166D82: mov ecx, dword ptr [ecx + 0x10] */
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x12166D85: fld qword ptr [edx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0x28)); /* 0x12166D88: fcomp qword ptr [ecx + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12166D8B: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x12166D8D: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12166DAE; /* 0x12166D90: je 0x12166dae */
L_12166D92:
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x12166D92: fld qword ptr [ecx + 0x28] */
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x12166D95: fld qword ptr [edx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12166D98: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12166D9A: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x12166D9C: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12166DB7; /* 0x12166D9F: jp 0x12166db7 */
L_12166DA1:
    fp_push(*(double*)ADDR(edx + 0x30)); /* 0x12166DA1: fld qword ptr [edx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0x30)); /* 0x12166DA4: fcomp qword ptr [ecx + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12166DA7: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x12166DA9: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12166DB7; /* 0x12166DAC: jne 0x12166db7 */
L_12166DAE:
    ecx = MEM32(ebp + (-0x4)); /* 0x12166DAE: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ecx + 0x4); /* 0x12166DB1: mov eax, dword ptr [ecx + 4] */
    esi = MEM32(eax + 0xC); /* 0x12166DB4: mov esi, dword ptr [eax + 0xc] */
L_12166DB7:
    eax = MEM32(ebp + 0x8); /* 0x12166DB7: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x8); /* 0x12166DBA: mov eax, dword ptr [eax + 8] */
    PUSH32(esp, esi); /* 0x12166DBD: push esi */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x12166DBE: push dword ptr [eax + 4] */
    RECOMP_CALL(sub_12164F6C); /* 0x12166DC1: call 0x12164f6c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0); /* 0x12166DC6: push 0 */
    esi = eax; /* 0x12166DC8: mov esi, eax */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x12166DCA: push dword ptr [esi + 8] */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x12166DCD: push dword ptr [esi + 8] */
    PUSH32(esp, esi); /* 0x12166DD0: push esi */
    PUSH32(esp, ebx); /* 0x12166DD1: push ebx */
    PUSH32(esp, edi); /* 0x12166DD2: push edi */
    RECOMP_CALL(sub_12166B75); /* 0x12166DD3: call 0x12166b75 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x4); /* 0x12166DD8: mov eax, dword ptr [esi + 4] */
    eax = MEM32(eax + 0x18); /* 0x12166DDB: mov eax, dword ptr [eax + 0x18] */
    MEM8(eax + 0xF) = (uint8_t)(1); /* 0x12166DDE: mov byte ptr [eax + 0xf], 1 */
    PUSH32(esp, edi); /* 0x12166DE2: push edi */
    eax = ebx; /* 0x12166DE3: mov eax, ebx */
    RECOMP_CALL(sub_121668DF); /* 0x12166DE5: call 0x121668df */
    RECOMP_FLAGS_IN();
L_12166DEA:
    esi = POP32_VAL(esp); /* 0x12166DEA: pop esi */
    ebx = POP32_VAL(esp); /* 0x12166DEB: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12166DEC: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12166DED: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12166DF5(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12166DF5u);

L_12166DF5:
    edi = edi; /* 0x12166DF5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12166DF7: push ebp */
    ebp = esp; /* 0x12166DF8: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12166DFA: push ecx */
    PUSH32(esp, ecx); /* 0x12166DFB: push ecx */
    PUSH32(esp, ebx); /* 0x12166DFC: push ebx */
    ebx = ecx; /* 0x12166DFD: mov ebx, ecx */
    PUSH32(esp, esi); /* 0x12166DFF: push esi */
    esi = MEM32(ebx); /* 0x12166E00: mov esi, dword ptr [ebx] */
    ecx = MEM32(esi + 0x10); /* 0x12166E02: mov ecx, dword ptr [esi + 0x10] */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x12166E05: fld qword ptr [ecx + 0x28] */
    PUSH32(esp, edi); /* 0x12166E08: push edi */
    edi = eax; /* 0x12166E09: mov edi, eax */
    fp_push(*(double*)ADDR(edi + 0x28)); /* 0x12166E0B: fld qword ptr [edi + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12166E0E: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12166E10: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x12166E12: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12166E37; /* 0x12166E15: jp 0x12166e37 */
L_12166E17:
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x12166E17: fld qword ptr [ecx + 0x30] */
    fp_push(*(double*)ADDR(edi + 0x30)); /* 0x12166E1A: fld qword ptr [edi + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12166E1D: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12166E1F: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x12166E21: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12166E37; /* 0x12166E24: jp 0x12166e37 */
L_12166E26:
    edi = MEM32(edi + 0x8); /* 0x12166E26: mov edi, dword ptr [edi + 8] */
    ecx = MEM32(ebp + 0x8); /* 0x12166E29: mov ecx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x12166E2C: push esi */
    RECOMP_CALL(sub_121660F2); /* 0x12166E2D: call 0x121660f2 */
    RECOMP_FLAGS_IN();
    goto L_12166F2E; /* 0x12166E32: jmp 0x12166f2e */
L_12166E37:
    ecx = MEM32(esi + 0x4); /* 0x12166E37: mov ecx, dword ptr [esi + 4] */
    edx = MEM32(ecx + 0x10); /* 0x12166E3A: mov edx, dword ptr [ecx + 0x10] */
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x12166E3D: fld qword ptr [edx + 0x28] */
    fp_push(*(double*)ADDR(edi + 0x28)); /* 0x12166E40: fld qword ptr [edi + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12166E43: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12166E45: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x12166E47: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12166F04; /* 0x12166E4A: jp 0x12166f04 */
L_12166E50:
    fp_push(*(double*)ADDR(edx + 0x30)); /* 0x12166E50: fld qword ptr [edx + 0x30] */
    fp_push(*(double*)ADDR(edi + 0x30)); /* 0x12166E53: fld qword ptr [edi + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12166E56: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12166E58: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x12166E5A: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12166F04; /* 0x12166E5D: jp 0x12166f04 */
L_12166E63:
    ecx = edx; /* 0x12166E63: mov ecx, edx */
L_12166E65:
    eax = MEM32(ebx + 0x4); /* 0x12166E65: mov eax, dword ptr [ebx + 4] */
    eax = MEM32(eax + 0x4); /* 0x12166E68: mov eax, dword ptr [eax + 4] */
    ebx = MEM32(eax); /* 0x12166E6B: mov ebx, dword ptr [eax] */
    eax = MEM32(ebx); /* 0x12166E6D: mov eax, dword ptr [ebx] */
    eax = MEM32(eax + 0x4); /* 0x12166E6F: mov eax, dword ptr [eax + 4] */
    /* cmp MEM32(eax + 0x10), ecx */ /* 0x12166E72: cmp dword ptr [eax + 0x10], ecx */
    _flag_a = (uint32_t)(MEM32(eax + 0x10)); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12166E65; /* 0x12166E75: je 0x12166e65 */
L_12166E77:
    eax = MEM32(ebx + 0x4); /* 0x12166E77: mov eax, dword ptr [ebx + 4] */
    eax = MEM32(eax + 0x8); /* 0x12166E7A: mov eax, dword ptr [eax + 8] */
    ecx = MEM32(eax); /* 0x12166E7D: mov ecx, dword ptr [eax] */
    /* cmp MEM8(ecx + 0xF), 0 */ /* 0x12166E7F: cmp byte ptr [ecx + 0xf], 0 */
    _flag_a = (uint32_t)(MEM8(ecx + 0xF)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = MEM32(ecx); /* 0x12166E83: mov eax, dword ptr [ecx] */
    esi = MEM32(eax + 0x4); /* 0x12166E85: mov esi, dword ptr [eax + 4] */
    eax = MEM32(esi + 0x8); /* 0x12166E88: mov eax, dword ptr [esi + 8] */
    MEM32(ebp + (-0x8)) = esi; /* 0x12166E8B: mov dword ptr [ebp - 8], esi */
    MEM32(ebp + (-0x4)) = eax; /* 0x12166E8E: mov dword ptr [ebp - 4], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12166EAE; /* 0x12166E91: je 0x12166eae */
L_12166E93:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12166E93: push dword ptr [ebp + 8] */
    esi = ecx; /* 0x12166E96: mov esi, ecx */
    RECOMP_CALL(sub_12165EA8); /* 0x12166E98: call 0x12165ea8 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebp + (-0x8))); /* 0x12166E9D: push dword ptr [ebp - 8] */
    RECOMP_CALL(sub_12164DE9); /* 0x12166EA0: call 0x12164de9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x12166EA5: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ecx + 0x4); /* 0x12166EA8: mov eax, dword ptr [ecx + 4] */
    esi = MEM32(eax + 0xC); /* 0x12166EAB: mov esi, dword ptr [eax + 0xc] */
L_12166EAE:
    PUSH32(esp, esi); /* 0x12166EAE: push esi */
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x12166EAF: push dword ptr [edi + 8] */
    RECOMP_CALL(sub_12164D63); /* 0x12166EB2: call 0x12164d63 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x12166EB7: mov ecx, dword ptr [ebp - 4] */
    eax = MEM32(ecx + 0x4); /* 0x12166EBA: mov eax, dword ptr [ecx + 4] */
    edi = MEM32(ecx + 0x10); /* 0x12166EBD: mov edi, dword ptr [ecx + 0x10] */
    edx = MEM32(eax + 0x10); /* 0x12166EC0: mov edx, dword ptr [eax + 0x10] */
    fp_push(*(double*)ADDR(edi + 0x28)); /* 0x12166EC3: fld qword ptr [edi + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edx + 0x28)); /* 0x12166EC6: fcomp qword ptr [edx + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12166EC9: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x12166ECB: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12166EF0; /* 0x12166ECE: je 0x12166ef0 */
L_12166ED0:
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x12166ED0: fld qword ptr [edx + 0x28] */
    fp_push(*(double*)ADDR(edi + 0x28)); /* 0x12166ED3: fld qword ptr [edi + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12166ED6: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12166ED8: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x12166EDA: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12166EEC; /* 0x12166EDD: jp 0x12166eec */
L_12166EDF:
    fp_push(*(double*)ADDR(edi + 0x30)); /* 0x12166EDF: fld qword ptr [edi + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edx + 0x30)); /* 0x12166EE2: fcomp qword ptr [edx + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12166EE5: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x12166EE7: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12166EF0; /* 0x12166EEA: je 0x12166ef0 */
L_12166EEC:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12166EEC: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_12166EF2; /* 0x12166EEE: jmp 0x12166ef2 */
L_12166EF0:
    eax = ecx; /* 0x12166EF0: mov eax, ecx */
L_12166EF2:
    PUSH32(esp, 1); /* 0x12166EF2: push 1 */
    PUSH32(esp, eax); /* 0x12166EF4: push eax */
    PUSH32(esp, ecx); /* 0x12166EF5: push ecx */
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x12166EF6: push dword ptr [esi + 8] */
    PUSH32(esp, ebx); /* 0x12166EF9: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12166EFA: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_12166B75); /* 0x12166EFD: call 0x12166b75 */
    RECOMP_FLAGS_IN();
    goto L_12166F2E; /* 0x12166F02: jmp 0x12166f2e */
L_12166F04:
    PUSH32(esp, ecx); /* 0x12166F04: push ecx */
    RECOMP_CALL(sub_12164EFE); /* 0x12166F05: call 0x12164efe */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(ebx + 0xF), 0 */ /* 0x12166F0A: cmp byte ptr [ebx + 0xf], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0xF)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12166F1C; /* 0x12166F0E: je 0x12166f1c */
L_12166F10:
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x12166F10: push dword ptr [esi + 8] */
    RECOMP_CALL(sub_12164DE9); /* 0x12166F13: call 0x12164de9 */
    RECOMP_FLAGS_IN();
    MEM8(ebx + 0xF) = (uint8_t)(0); /* 0x12166F18: mov byte ptr [ebx + 0xf], 0 */
L_12166F1C:
    PUSH32(esp, esi); /* 0x12166F1C: push esi */
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x12166F1D: push dword ptr [edi + 8] */
    RECOMP_CALL(sub_12164D63); /* 0x12166F20: call 0x12164d63 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x12166F25: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12166F26: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_12167098); /* 0x12166F29: call 0x12167098 */
    RECOMP_FLAGS_IN();
L_12166F2E:
    edi = POP32_VAL(esp); /* 0x12166F2E: pop edi */
    esi = POP32_VAL(esp); /* 0x12166F2F: pop esi */
    ebx = POP32_VAL(esp); /* 0x12166F30: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12166F31: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12166F32: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12166F3A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12166F3Au);

L_12166F3A:
    edi = edi; /* 0x12166F3A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12166F3C: push ebp */
    ebp = esp; /* 0x12166F3D: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x18u; /* 0x12166F3F: sub esp, 0x18 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x12166F42: push ebx */
    PUSH32(esp, edi); /* 0x12166F43: push edi */
    edi = MEM32(ebp + 0xC); /* 0x12166F44: mov edi, dword ptr [ebp + 0xc] */
    eax = MEM32(edi + 0x8); /* 0x12166F47: mov eax, dword ptr [edi + 8] */
    eax = MEM32(eax + 0x4); /* 0x12166F4A: mov eax, dword ptr [eax + 4] */
    MEM32(ebp + (-0x18)) = eax; /* 0x12166F4D: mov dword ptr [ebp - 0x18], eax */
    eax = ebp + (-0x18); /* 0x12166F50: lea eax, [ebp - 0x18] */
    PUSH32(esp, eax); /* 0x12166F53: push eax */
    eax = MEM32(ebp + 0x8); /* 0x12166F54: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(eax + 0x68)); /* 0x12166F57: push dword ptr [eax + 0x68] */
    RECOMP_CALL(sub_12167E2A); /* 0x12166F5A: call 0x12167e2a */
    RECOMP_FLAGS_IN();
    ebx = MEM32(eax); /* 0x12166F5F: mov ebx, dword ptr [eax] */
    /* test ebx, ebx */ /* 0x12166F61: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1216708D; /* 0x12166F63: je 0x1216708d */
L_12166F69:
    eax = MEM32(ebx + 0x4); /* 0x12166F69: mov eax, dword ptr [ebx + 4] */
    eax = MEM32(eax + 0x8); /* 0x12166F6C: mov eax, dword ptr [eax + 8] */
    PUSH32(esp, esi); /* 0x12166F6F: push esi */
    esi = MEM32(eax); /* 0x12166F70: mov esi, dword ptr [eax] */
    eax = MEM32(ebx); /* 0x12166F72: mov eax, dword ptr [ebx] */
    PUSH32(esp, MEM32(eax + 0x10)); /* 0x12166F74: push dword ptr [eax + 0x10] */
    ecx = MEM32(esi); /* 0x12166F77: mov ecx, dword ptr [esi] */
    MEM32(ebp + (-0x4)) = eax; /* 0x12166F79: mov dword ptr [ebp - 4], eax */
    eax = MEM32(eax + 0x4); /* 0x12166F7C: mov eax, dword ptr [eax + 4] */
    PUSH32(esp, edi); /* 0x12166F7F: push edi */
    PUSH32(esp, MEM32(eax + 0x10)); /* 0x12166F80: push dword ptr [eax + 0x10] */
    MEM32(ebp + (-0x8)) = ecx; /* 0x12166F83: mov dword ptr [ebp - 8], ecx */
    RECOMP_CALL(sub_12167776); /* 0x12166F86: call 0x12167776 */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x12166F8B: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12166F8D: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12166F8F: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x12166F91: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12166FA7; /* 0x12166F94: jp 0x12166fa7 */
L_12166F96:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12166F96: push dword ptr [ebp + 8] */
    eax = edi; /* 0x12166F99: mov eax, edi */
    ecx = ebx; /* 0x12166F9B: mov ecx, ebx */
    RECOMP_CALL(sub_12166DF5); /* 0x12166F9D: call 0x12166df5 */
    RECOMP_FLAGS_IN();
    goto L_1216708C; /* 0x12166FA2: jmp 0x1216708c */
L_12166FA7:
    eax = MEM32(ebp + (-0x8)); /* 0x12166FA7: mov eax, dword ptr [ebp - 8] */
    eax = MEM32(eax + 0x4); /* 0x12166FAA: mov eax, dword ptr [eax + 4] */
    ecx = MEM32(eax + 0x10); /* 0x12166FAD: mov ecx, dword ptr [eax + 0x10] */
    eax = MEM32(ebp + (-0x4)); /* 0x12166FB0: mov eax, dword ptr [ebp - 4] */
    eax = MEM32(eax + 0x4); /* 0x12166FB3: mov eax, dword ptr [eax + 4] */
    edx = MEM32(eax + 0x10); /* 0x12166FB6: mov edx, dword ptr [eax + 0x10] */
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x12166FB9: fld qword ptr [edx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0x28)); /* 0x12166FBC: fcomp qword ptr [ecx + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12166FBF: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x12166FC1: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12166FE2; /* 0x12166FC4: je 0x12166fe2 */
L_12166FC6:
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x12166FC6: fld qword ptr [ecx + 0x28] */
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x12166FC9: fld qword ptr [edx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12166FCC: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12166FCE: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x12166FD0: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12166FE4; /* 0x12166FD3: jp 0x12166fe4 */
L_12166FD5:
    fp_push(*(double*)ADDR(edx + 0x30)); /* 0x12166FD5: fld qword ptr [edx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0x30)); /* 0x12166FD8: fcomp qword ptr [ecx + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12166FDB: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x12166FDD: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12166FE4; /* 0x12166FE0: jne 0x12166fe4 */
L_12166FE2:
    esi = ebx; /* 0x12166FE2: mov esi, ebx */
L_12166FE4:
    /* cmp MEM8(ebx + 0xC), 0 */ /* 0x12166FE4: cmp byte ptr [ebx + 0xc], 0 */
    _flag_a = (uint32_t)(MEM8(ebx + 0xC)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12167008; /* 0x12166FE8: jne 0x12167008 */
L_12166FEA:
    /* cmp MEM8(esi + 0xF), 0 */ /* 0x12166FEA: cmp byte ptr [esi + 0xf], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xF)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12167008; /* 0x12166FEE: jne 0x12167008 */
L_12166FF0:
    PUSH32(esp, 1); /* 0x12166FF0: push 1 */
    PUSH32(esp, 0); /* 0x12166FF2: push 0 */
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x12166FF4: push dword ptr [edi + 8] */
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x12166FF7: push dword ptr [edi + 8] */
    PUSH32(esp, ebx); /* 0x12166FFA: push ebx */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12166FFB: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_12166B75); /* 0x12166FFE: call 0x12166b75 */
    RECOMP_FLAGS_IN();
    goto L_1216708C; /* 0x12167003: jmp 0x1216708c */
L_12167008:
    /* cmp esi, ebx */ /* 0x12167008: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1216701F; /* 0x1216700A: jne 0x1216701f */
L_1216700C:
    eax = MEM32(ebp + (-0x4)); /* 0x1216700C: mov eax, dword ptr [ebp - 4] */
    PUSH32(esp, MEM32(eax + 0xC)); /* 0x1216700F: push dword ptr [eax + 0xc] */
    eax = MEM32(edi + 0x8); /* 0x12167012: mov eax, dword ptr [edi + 8] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x12167015: push dword ptr [eax + 4] */
    RECOMP_CALL(sub_12164F6C); /* 0x12167018: call 0x12164f6c */
    RECOMP_FLAGS_IN();
    goto L_12167036; /* 0x1216701D: jmp 0x12167036 */
L_1216701F:
    ecx = MEM32(ebp + (-0x8)); /* 0x1216701F: mov ecx, dword ptr [ebp - 8] */
    eax = MEM32(ecx + 0x4); /* 0x12167022: mov eax, dword ptr [ecx + 4] */
    PUSH32(esp, MEM32(edi + 0x8)); /* 0x12167025: push dword ptr [edi + 8] */
    eax = MEM32(eax + 0x8); /* 0x12167028: mov eax, dword ptr [eax + 8] */
    PUSH32(esp, MEM32(eax + 0x4)); /* 0x1216702B: push dword ptr [eax + 4] */
    RECOMP_CALL(sub_12164F6C); /* 0x1216702E: call 0x12164f6c */
    RECOMP_FLAGS_IN();
    eax = MEM32(eax + 0x4); /* 0x12167033: mov eax, dword ptr [eax + 4] */
L_12167036:
    /* cmp MEM8(esi + 0xF), 0 */ /* 0x12167036: cmp byte ptr [esi + 0xf], 0 */
    _flag_a = (uint32_t)(MEM8(esi + 0xF)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(ebp + (-0x8)) = eax; /* 0x1216703A: mov dword ptr [ebp - 8], eax */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12167054; /* 0x1216703D: je 0x12167054 */
L_1216703F:
    PUSH32(esp, MEM32(esi)); /* 0x1216703F: push dword ptr [esi] */
    RECOMP_CALL(sub_12164DE9); /* 0x12167041: call 0x12164de9 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + (-0x8)); /* 0x12167046: mov eax, dword ptr [ebp - 8] */
    MEM8(esi + 0xF) = (uint8_t)(0); /* 0x12167049: mov byte ptr [esi + 0xf], 0 */
    MEM32(esi) = eax; /* 0x1216704D: mov dword ptr [esi], eax */
    MEM32(eax + 0x18) = esi; /* 0x1216704F: mov dword ptr [eax + 0x18], esi */
    goto L_12167083; /* 0x12167052: jmp 0x12167083 */
L_12167054:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12167054: push dword ptr [ebp + 8] */
    edi = eax; /* 0x12167057: mov edi, eax */
    RECOMP_CALL(sub_12165F2A); /* 0x12167059: call 0x12165f2a */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1216705E: mov edi, eax */
    ecx = MEM32(edi + 0x4); /* 0x12167060: mov ecx, dword ptr [edi + 4] */
    ecx = MEM32(ecx + 0x4); /* 0x12167063: mov ecx, dword ptr [ecx + 4] */
    ecx = MEM32(ecx); /* 0x12167066: mov ecx, dword ptr [ecx] */
    esi = MEM32(ecx + 0x8); /* 0x12167068: mov esi, dword ptr [ecx + 8] */
    edx = MEM32(edi); /* 0x1216706B: mov edx, dword ptr [edi] */
    ecx = MEM32(edx + 0x1C); /* 0x1216706D: mov ecx, dword ptr [edx + 0x1c] */
    eax = MEM32(ebp + 0x8); /* 0x12167070: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + esi; /* 0x12167073: add ecx, esi */
    _flag_k = FK_ADD;
    MEM32(edi + 0x8) = ecx; /* 0x12167075: mov dword ptr [edi + 8], ecx */
    RECOMP_CALL(sub_12165F6A); /* 0x12167078: call 0x12165f6a */
    RECOMP_FLAGS_IN();
    MEM8(edi + 0xC) = (uint8_t)(LO8(eax)); /* 0x1216707D: mov byte ptr [edi + 0xc], al */
    edi = MEM32(ebp + 0xC); /* 0x12167080: mov edi, dword ptr [ebp + 0xc] */
L_12167083:
    PUSH32(esp, edi); /* 0x12167083: push edi */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12167084: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_12167098); /* 0x12167087: call 0x12167098 */
    RECOMP_FLAGS_IN();
L_1216708C:
    esi = POP32_VAL(esp); /* 0x1216708C: pop esi */
L_1216708D:
    edi = POP32_VAL(esp); /* 0x1216708D: pop edi */
    ebx = POP32_VAL(esp); /* 0x1216708E: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1216708F: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12167090: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12167098(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12167098u);

L_12167098:
    edi = edi; /* 0x12167098: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1216709A: push ebp */
    ebp = esp; /* 0x1216709B: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x1216709D: mov ecx, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x121670A0: push edi */
    edi = MEM32(ebp + 0x8); /* 0x121670A1: mov edi, dword ptr [ebp + 8] */
    MEM32(edi + 0x70) = ecx; /* 0x121670A4: mov dword ptr [edi + 0x70], ecx */
    eax = MEM32(ecx + 0x8); /* 0x121670A7: mov eax, dword ptr [ecx + 8] */
    goto L_121670B4; /* 0x121670AA: jmp 0x121670b4 */
L_121670AC:
    eax = MEM32(eax + 0x8); /* 0x121670AC: mov eax, dword ptr [eax + 8] */
    /* cmp eax, MEM32(ecx + 0x8) */ /* 0x121670AF: cmp eax, dword ptr [ecx + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121670E7; /* 0x121670B2: je 0x121670e7 */
L_121670B4:
    /* cmp MEM32(eax + 0x18), 0 */ /* 0x121670B4: cmp dword ptr [eax + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121670AC; /* 0x121670B8: je 0x121670ac */
L_121670BA:
    eax = MEM32(eax + 0x18); /* 0x121670BA: mov eax, dword ptr [eax + 0x18] */
    PUSH32(esp, ebx); /* 0x121670BD: push ebx */
    PUSH32(esp, esi); /* 0x121670BE: push esi */
    RECOMP_CALL(sub_12165ED1); /* 0x121670BF: call 0x12165ed1 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x121670C4: mov ebx, eax */
    ecx = MEM32(ebx + 0x4); /* 0x121670C6: mov ecx, dword ptr [ebx + 4] */
    ecx = MEM32(ecx + 0x8); /* 0x121670C9: mov ecx, dword ptr [ecx + 8] */
    eax = MEM32(ecx); /* 0x121670CC: mov eax, dword ptr [ecx] */
    esi = MEM32(eax); /* 0x121670CE: mov esi, dword ptr [eax] */
    PUSH32(esp, 0); /* 0x121670D0: push 0 */
    PUSH32(esp, edi); /* 0x121670D2: push edi */
    RECOMP_CALL(sub_12165FAA); /* 0x121670D3: call 0x12165faa */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(eax + 0x8), esi */ /* 0x121670D8: cmp dword ptr [eax + 8], esi */
    _flag_a = (uint32_t)(MEM32(eax + 0x8)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121670F0; /* 0x121670DB: jne 0x121670f0 */
L_121670DD:
    PUSH32(esp, eax); /* 0x121670DD: push eax */
    eax = ebx; /* 0x121670DE: mov eax, ebx */
    RECOMP_CALL(sub_12166C75); /* 0x121670E0: call 0x12166c75 */
    RECOMP_FLAGS_IN();
    goto L_121670FE; /* 0x121670E5: jmp 0x121670fe */
L_121670E7:
    PUSH32(esp, ecx); /* 0x121670E7: push ecx */
    PUSH32(esp, edi); /* 0x121670E8: push edi */
    RECOMP_CALL(sub_12166F3A); /* 0x121670E9: call 0x12166f3a */
    RECOMP_FLAGS_IN();
    goto L_12167100; /* 0x121670EE: jmp 0x12167100 */
L_121670F0:
    PUSH32(esp, 1); /* 0x121670F0: push 1 */
    PUSH32(esp, esi); /* 0x121670F2: push esi */
    PUSH32(esp, esi); /* 0x121670F3: push esi */
    PUSH32(esp, MEM32(eax + 0x8)); /* 0x121670F4: push dword ptr [eax + 8] */
    PUSH32(esp, ebx); /* 0x121670F7: push ebx */
    PUSH32(esp, edi); /* 0x121670F8: push edi */
    RECOMP_CALL(sub_12166B75); /* 0x121670F9: call 0x12166b75 */
    RECOMP_FLAGS_IN();
L_121670FE:
    esi = POP32_VAL(esp); /* 0x121670FE: pop esi */
    ebx = POP32_VAL(esp); /* 0x121670FF: pop ebx */
L_12167100:
    edi = POP32_VAL(esp); /* 0x12167100: pop edi */
    ebp = POP32_VAL(esp); /* 0x12167101: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12167102: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1216710A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1216710Au);

L_1216710A:
    edi = edi; /* 0x1216710A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1216710C: push ebp */
    ebp = esp; /* 0x1216710D: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x1216710F: push ecx */
    PUSH32(esp, ebx); /* 0x12167110: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x12167111: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x12167114: push esi */
    PUSH32(esp, edi); /* 0x12167115: push edi */
    PUSH32(esp, ebx); /* 0x12167116: push ebx */
    MEM8(ebx + 0x64) = (uint8_t)(0); /* 0x12167117: mov byte ptr [ebx + 0x64], 0 */
    RECOMP_CALL(sub_12166AC1); /* 0x1216711B: call 0x12166ac1 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x121676BDu); /* 0x12167120: push 0x121676bd */
    RECOMP_CALL(sub_12168256); /* 0x12167125: call 0x12168256 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1216712A: mov edi, eax */
    MEM32(ebx + 0x6C) = edi; /* 0x1216712C: mov dword ptr [ebx + 0x6c], edi */
    /* test edi, edi */ /* 0x1216712F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12167157; /* 0x12167131: je 0x12167157 */
L_12167133:
    eax = MEM32(ebx + 0x8); /* 0x12167133: mov eax, dword ptr [ebx + 8] */
    esi = MEM32(eax); /* 0x12167136: mov esi, dword ptr [eax] */
    /* cmp esi, eax */ /* 0x12167138: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12167151; /* 0x1216713A: je 0x12167151 */
L_1216713C:
    ebx = eax; /* 0x1216713C: mov ebx, eax */
L_1216713E:
    PUSH32(esp, esi); /* 0x1216713E: push esi */
    PUSH32(esp, edi); /* 0x1216713F: push edi */
    RECOMP_CALL(sub_12168558); /* 0x12167140: call 0x12168558 */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x38) = eax; /* 0x12167145: mov dword ptr [esi + 0x38], eax */
    esi = MEM32(esi); /* 0x12167148: mov esi, dword ptr [esi] */
    /* cmp esi, ebx */ /* 0x1216714A: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1216713E; /* 0x1216714C: jne 0x1216713e */
L_1216714E:
    ebx = MEM32(ebp + 0x8); /* 0x1216714E: mov ebx, dword ptr [ebp + 8] */
L_12167151:
    PUSH32(esp, edi); /* 0x12167151: push edi */
    RECOMP_CALL(sub_121682D6); /* 0x12167152: call 0x121682d6 */
    RECOMP_FLAGS_IN();
L_12167157:
    PUSH32(esp, 0x12165DDDu); /* 0x12167157: push 0x12165ddd */
    PUSH32(esp, ebx); /* 0x1216715C: push ebx */
    RECOMP_CALL(sub_12167D48); /* 0x1216715D: call 0x12167d48 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x120134B8)); /* 0x12167162: fld qword ptr [0x120134b8] */
    PUSH32(esp, ecx); /* 0x12167168: push ecx */
    PUSH32(esp, ecx); /* 0x12167169: push ecx */
    edi = ebx; /* 0x1216716A: mov edi, ebx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1216716C: fstp qword ptr [esp] */
    MEM32(ebx + 0x68) = eax; /* 0x1216716F: mov dword ptr [ebx + 0x68], eax */
    RECOMP_CALL(sub_12166A3A); /* 0x12167172: call 0x12166a3a */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x120134C0)); /* 0x12167177: fld qword ptr [0x120134c0] */
    PUSH32(esp, ecx); /* 0x1216717D: push ecx */
    PUSH32(esp, ecx); /* 0x1216717E: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x1216717F: fstp qword ptr [esp] */
    RECOMP_CALL(sub_12166A3A); /* 0x12167182: call 0x12166a3a */
    RECOMP_FLAGS_IN();
    goto L_121671D1; /* 0x12167187: jmp 0x121671d1 */
L_12167189:
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x12167189: fld qword ptr [ecx + 0x28] */
    fp_push(*(double*)ADDR(esi + 0x28)); /* 0x1216718C: fld qword ptr [esi + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1216718F: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167191: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x12167193: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_121671CA; /* 0x12167196: jp 0x121671ca */
L_12167198:
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x12167198: fld qword ptr [ecx + 0x30] */
    fp_push(*(double*)ADDR(esi + 0x30)); /* 0x1216719B: fld qword ptr [esi + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1216719E: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121671A0: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x121671A2: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_121671CA; /* 0x121671A5: jp 0x121671ca */
L_121671A7:
    PUSH32(esp, MEM32(ebx + 0x6C)); /* 0x121671A7: push dword ptr [ebx + 0x6c] */
    RECOMP_CALL(sub_121685B4); /* 0x121671AA: call 0x121685b4 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x121671AF: push dword ptr [esi + 8] */
    edi = MEM32(eax + 0x8); /* 0x121671B2: mov edi, dword ptr [eax + 8] */
    ecx = ebx; /* 0x121671B5: mov ecx, ebx */
    RECOMP_CALL(sub_121660F2); /* 0x121671B7: call 0x121660f2 */
    RECOMP_FLAGS_IN();
L_121671BC:
    PUSH32(esp, MEM32(ebx + 0x6C)); /* 0x121671BC: push dword ptr [ebx + 0x6c] */
    RECOMP_CALL(sub_1216863D); /* 0x121671BF: call 0x1216863d */
    RECOMP_FLAGS_IN();
    ecx = eax; /* 0x121671C4: mov ecx, eax */
    /* test ecx, ecx */ /* 0x121671C6: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12167189; /* 0x121671C8: jne 0x12167189 */
L_121671CA:
    PUSH32(esp, esi); /* 0x121671CA: push esi */
    PUSH32(esp, ebx); /* 0x121671CB: push ebx */
    RECOMP_CALL(sub_12167098); /* 0x121671CC: call 0x12167098 */
    RECOMP_FLAGS_IN();
L_121671D1:
    PUSH32(esp, MEM32(ebx + 0x6C)); /* 0x121671D1: push dword ptr [ebx + 0x6c] */
    RECOMP_CALL(sub_121685B4); /* 0x121671D4: call 0x121685b4 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x121671D9: mov esi, eax */
    /* test esi, esi */ /* 0x121671DB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121671BC; /* 0x121671DD: jne 0x121671bc */
L_121671DF:
    ecx = MEM32(ebx + 0x68); /* 0x121671DF: mov ecx, dword ptr [ebx + 0x68] */
    eax = MEM32(ecx + 0x4); /* 0x121671E2: mov eax, dword ptr [ecx + 4] */
    eax = MEM32(eax); /* 0x121671E5: mov eax, dword ptr [eax] */
    eax = MEM32(eax); /* 0x121671E7: mov eax, dword ptr [eax] */
    eax = MEM32(eax + 0x10); /* 0x121671E9: mov eax, dword ptr [eax + 0x10] */
    MEM32(ebx + 0x70) = eax; /* 0x121671EC: mov dword ptr [ebx + 0x70], eax */
    eax = MEM32(ecx + 0x4); /* 0x121671EF: mov eax, dword ptr [ecx + 4] */
    goto L_12167200; /* 0x121671F2: jmp 0x12167200 */
L_121671F4:
    PUSH32(esp, ebx); /* 0x121671F4: push ebx */
    RECOMP_CALL(sub_12165EA8); /* 0x121671F5: call 0x12165ea8 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebx + 0x68); /* 0x121671FA: mov eax, dword ptr [ebx + 0x68] */
    eax = MEM32(eax + 0x4); /* 0x121671FD: mov eax, dword ptr [eax + 4] */
L_12167200:
    esi = MEM32(eax); /* 0x12167200: mov esi, dword ptr [eax] */
    /* test esi, esi */ /* 0x12167202: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121671F4; /* 0x12167204: jne 0x121671f4 */
L_12167206:
    PUSH32(esp, MEM32(ebx + 0x68)); /* 0x12167206: push dword ptr [ebx + 0x68] */
    RECOMP_CALL(sub_12167D7B); /* 0x12167209: call 0x12167d7b */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebx + 0x6C)); /* 0x1216720E: push dword ptr [ebx + 0x6c] */
    RECOMP_CALL(sub_121682A3); /* 0x12167211: call 0x121682a3 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebx + 0x8); /* 0x12167216: mov esi, dword ptr [ebx + 8] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 0x40u; /* 0x12167219: add esi, 0x40 */
    _flag_k = FK_ADD;
    eax = MEM32(esi); /* 0x1216721C: mov eax, dword ptr [esi] */
    /* cmp eax, esi */ /* 0x1216721E: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12167253; /* 0x12167220: je 0x12167253 */
L_12167222:
    edx = MEM32(eax + 0x8); /* 0x12167222: mov edx, dword ptr [eax + 8] */
    edi = MEM32(eax); /* 0x12167225: mov edi, dword ptr [eax] */
    eax = MEM32(edx + 0xC); /* 0x12167227: mov eax, dword ptr [edx + 0xc] */
    /* cmp MEM32(eax + 0xC), edx */ /* 0x1216722A: cmp dword ptr [eax + 0xc], edx */
    _flag_a = (uint32_t)(MEM32(eax + 0xC)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1216724D; /* 0x1216722D: jne 0x1216724d */
L_1216722F:
    ecx = MEM32(edx + 0x8); /* 0x1216722F: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(edx + 0x1C); /* 0x12167232: mov eax, dword ptr [edx + 0x1c] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x1C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x1C) = MEM32(ecx + 0x1C) + eax; /* 0x12167235: add dword ptr [ecx + 0x1c], eax */
    _flag_k = FK_ADD;
    eax = MEM32(edx + 0x8); /* 0x12167238: mov eax, dword ptr [edx + 8] */
    ecx = MEM32(eax + 0x4); /* 0x1216723B: mov ecx, dword ptr [eax + 4] */
    eax = MEM32(edx + 0x4); /* 0x1216723E: mov eax, dword ptr [edx + 4] */
    eax = MEM32(eax + 0x1C); /* 0x12167241: mov eax, dword ptr [eax + 0x1c] */
    _flag_a = (uint32_t)(MEM32(ecx + 0x1C)); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    MEM32(ecx + 0x1C) = MEM32(ecx + 0x1C) + eax; /* 0x12167244: add dword ptr [ecx + 0x1c], eax */
    _flag_k = FK_ADD;
    PUSH32(esp, edx); /* 0x12167247: push edx */
    RECOMP_CALL(sub_12164DE9); /* 0x12167248: call 0x12164de9 */
    RECOMP_FLAGS_IN();
L_1216724D:
    eax = edi; /* 0x1216724D: mov eax, edi */
    /* cmp edi, esi */ /* 0x1216724F: cmp edi, esi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_12167222; /* 0x12167251: jne 0x12167222 */
L_12167253:
    edi = POP32_VAL(esp); /* 0x12167253: pop edi */
    esi = POP32_VAL(esp); /* 0x12167254: pop esi */
    ebx = POP32_VAL(esp); /* 0x12167255: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12167256: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12167257: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1216725F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1216725Fu);

L_1216725F:
    fp_push(0.0); /* 0x1216725F: fldz  */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12167261: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0x8)); /* 0x12167263: fcom qword ptr [ecx + 8] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167266: fnstsw ax */
    fp_push(*(double*)ADDR(ecx + 0x8)); /* 0x12167268: fld qword ptr [ecx + 8] */
    /* test HI8(eax), 0x41u */ /* 0x1216726B: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12167272; /* 0x1216726E: jne 0x12167272 */
L_12167270:
    _st[0] = -_st[0]; /* 0x12167270: fchs  */
L_12167272:
    fp_xch(1); /* 0x12167272: fxch st(1) */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx)); /* 0x12167274: fcom qword ptr [ecx] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167276: fnstsw ax */
    fp_push(*(double*)ADDR(ecx)); /* 0x12167278: fld qword ptr [ecx] */
    /* test HI8(eax), 0x41u */ /* 0x1216727A: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12167281; /* 0x1216727D: jne 0x12167281 */
L_1216727F:
    _st[0] = -_st[0]; /* 0x1216727F: fchs  */
L_12167281:
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x12167281: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167283: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x12167285: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x12167287: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1216728F; /* 0x1216728A: jp 0x1216728f */
L_1216728C:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1216728C: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1216728E: inc edx */
    _flag_k = FK_INC;
L_1216728F:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0x10)); /* 0x1216728F: fcom qword ptr [ecx + 0x10] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167292: fnstsw ax */
    fp_push(*(double*)ADDR(ecx + 0x10)); /* 0x12167294: fld qword ptr [ecx + 0x10] */
    /* test HI8(eax), 0x41u */ /* 0x12167297: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1216729E; /* 0x1216729A: jne 0x1216729e */
L_1216729C:
    _st[0] = -_st[0]; /* 0x1216729C: fchs  */
L_1216729E:
    fp_xch(1); /* 0x1216729E: fxch st(1) */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + edx * 8)); /* 0x121672A0: fcomp qword ptr [ecx + edx*8] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121672A3: fnstsw ax */
    fp_push(*(double*)ADDR(ecx + edx * 8)); /* 0x121672A5: fld qword ptr [ecx + edx*8] */
    /* test HI8(eax), 0x41u */ /* 0x121672A8: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121672AF; /* 0x121672AB: jne 0x121672af */
L_121672AD:
    _st[0] = -_st[0]; /* 0x121672AD: fchs  */
L_121672AF:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x121672AF: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121672B1: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x121672B3: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_121672BB; /* 0x121672B6: jp 0x121672bb */
L_121672B8:
    PUSH32(esp, 2); /* 0x121672B8: push 2 */
    edx = POP32_VAL(esp); /* 0x121672BA: pop edx */
L_121672BB:
    eax = edx; /* 0x121672BB: mov eax, edx */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x121672BD: ret  */
    RECOMP_REGS_OUT();
}

void sub_121672C3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121672C3u);

L_121672C3:
    edi = edi; /* 0x121672C3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121672C5: push ebp */
    ebp = esp; /* 0x121672C6: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x60u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x60u; /* 0x121672C8: sub esp, 0x60 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x121672CB: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x121672D0: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x121672D2: mov dword ptr [ebp - 4], eax */
    fp_push(*(double*)ADDR(0x120134D0)); /* 0x121672D5: fld qword ptr [0x120134d0] */
    eax = MEM32(ebp + 0x8); /* 0x121672DB: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x8); /* 0x121672DE: mov eax, dword ptr [eax + 8] */
    *(double*)ADDR(ebp + (-0x24)) = _st[0]; /* 0x121672E1: fst qword ptr [ebp - 0x24] */
    fp_push(_st[0]); /* 0x121672E4: fld st(0) */
    PUSH32(esp, ebx); /* 0x121672E6: push ebx */
    ebx = MEM32(eax); /* 0x121672E7: mov ebx, dword ptr [eax] */
    *(double*)ADDR(ebp + (-0x2C)) = _st[0]; /* 0x121672E9: fst qword ptr [ebp - 0x2c] */
    fp_push(_st[1]); /* 0x121672EC: fld st(1) */
    PUSH32(esp, esi); /* 0x121672EE: push esi */
    *(double*)ADDR(ebp + (-0x34)) = _st[0]; /* 0x121672EF: fst qword ptr [ebp - 0x34] */
    PUSH32(esp, edi); /* 0x121672F2: push edi */
    fp_push(*(double*)ADDR(0x120134C8)); /* 0x121672F3: fld qword ptr [0x120134c8] */
    edi = ebx; /* 0x121672F9: mov edi, ebx */
    *(double*)ADDR(ebp + (-0xC)) = _st[0]; /* 0x121672FB: fst qword ptr [ebp - 0xc] */
    esi = ecx; /* 0x121672FE: mov esi, ecx */
    fp_push(_st[0]); /* 0x12167300: fld st(0) */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12167302: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    *(double*)ADDR(ebp + (-0x14)) = _st[0]; /* 0x12167304: fst qword ptr [ebp - 0x14] */
    MEM32(ebp + (-0x44)) = esi; /* 0x12167307: mov dword ptr [ebp - 0x44], esi */
    fp_push(_st[1]); /* 0x1216730A: fld st(1) */
    MEM32(ebp + (-0x3C)) = eax; /* 0x1216730C: mov dword ptr [ebp - 0x3c], eax */
    *(double*)ADDR(ebp + (-0x1C)) = _st[0]; /* 0x1216730F: fst qword ptr [ebp - 0x1c] */
    MEM32(ebp + (-0x38)) = ebx; /* 0x12167312: mov dword ptr [ebp - 0x38], ebx */
    /* cmp edi, eax */ /* 0x12167315: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12167385; /* 0x12167317: je 0x12167385 */
L_12167319:
    { _st[4] = _st[0]; g_st_i64[4] = g_st_i64[0]; fp_pop(); } /* 0x12167319: fstp st(4) */
    { _st[4] = _st[0]; g_st_i64[4] = g_st_i64[0]; fp_pop(); } /* 0x1216731B: fstp st(4) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1216731D: fstp st(1) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1216731F: fstp st(0) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x12167321: fstp st(1) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12167323: fstp st(0) */
L_12167325:
    esi = edi + 0x10; /* 0x12167325: lea esi, [edi + 0x10] */
    ecx = edx; /* 0x12167328: mov ecx, edx */
    ebx = edx; /* 0x1216732A: mov ebx, edx */
L_1216732C:
    fp_push(*(double*)ADDR(esi)); /* 0x1216732C: fld qword ptr [esi] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + ecx + (-0x1C))); /* 0x1216732E: fcom qword ptr [ebp + ecx - 0x1c] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167332: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x12167334: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12167341; /* 0x12167337: jp 0x12167341 */
L_12167339:
    *(double*)ADDR(ebp + ecx + (-0x1C)) = _st[0]; /* 0x12167339: fst qword ptr [ebp + ecx - 0x1c] */
    MEM32(ebp + ebx + (-0x54)) = edi; /* 0x1216733D: mov dword ptr [ebp + ebx - 0x54], edi */
L_12167341:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + ecx + (-0x34))); /* 0x12167341: fcom qword ptr [ebp + ecx - 0x34] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167345: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x12167347: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12167356; /* 0x1216734A: jne 0x12167356 */
L_1216734C:
    { double _v = fp_pop(); *(double*)ADDR(ebp + ecx + (-0x34)) = _v; } /* 0x1216734C: fstp qword ptr [ebp + ecx - 0x34] */
    MEM32(ebp + ebx + (-0x60)) = edi; /* 0x12167350: mov dword ptr [ebp + ebx - 0x60], edi */
    goto L_12167358; /* 0x12167354: jmp 0x12167358 */
L_12167356:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12167356: fstp st(0) */
L_12167358:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 8; /* 0x12167358: add ecx, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x1216735B: add esi, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x1216735E: add ebx, 4 */
    _flag_k = FK_ADD;
    /* cmp ecx, 0x18u */ /* 0x12167361: cmp ecx, 0x18 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1216732C; /* 0x12167364: jl 0x1216732c */
L_12167366:
    edi = MEM32(edi); /* 0x12167366: mov edi, dword ptr [edi] */
    /* cmp edi, MEM32(ebp + (-0x3C)) */ /* 0x12167368: cmp edi, dword ptr [ebp - 0x3c] */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(MEM32(ebp + (-0x3C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_12167325; /* 0x1216736B: jne 0x12167325 */
L_1216736D:
    fp_push(*(double*)ADDR(ebp + (-0x24))); /* 0x1216736D: fld qword ptr [ebp - 0x24] */
    esi = MEM32(ebp + (-0x44)); /* 0x12167370: mov esi, dword ptr [ebp - 0x44] */
    fp_push(*(double*)ADDR(ebp + (-0x2C))); /* 0x12167373: fld qword ptr [ebp - 0x2c] */
    ebx = MEM32(ebp + (-0x38)); /* 0x12167376: mov ebx, dword ptr [ebp - 0x38] */
    fp_push(*(double*)ADDR(ebp + (-0x34))); /* 0x12167379: fld qword ptr [ebp - 0x34] */
    fp_push(*(double*)ADDR(ebp + (-0xC))); /* 0x1216737C: fld qword ptr [ebp - 0xc] */
    fp_push(*(double*)ADDR(ebp + (-0x14))); /* 0x1216737F: fld qword ptr [ebp - 0x14] */
    fp_push(*(double*)ADDR(ebp + (-0x1C))); /* 0x12167382: fld qword ptr [ebp - 0x1c] */
L_12167385:
    fp_xch(4); /* 0x12167385: fxch st(4) */
    { double _v = fp_pop(); _st[0] = _v - _st[0]; } /* 0x12167387: fsubrp st(1) */
    fp_xch(2); /* 0x12167389: fxch st(2) */
    { double _v = fp_pop(); _st[2] = _v - _st[2]; } /* 0x1216738B: fsubrp st(3) */
    fp_xch(1); /* 0x1216738D: fxch st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x1216738F: fcomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167391: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x12167393: fstp st(1) */
    /* test HI8(eax), 0x41u */ /* 0x12167395: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1216739D; /* 0x12167398: jne 0x1216739d */
L_1216739A:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x1216739A: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x1216739C: inc edx */
    _flag_k = FK_INC;
L_1216739D:
    eax = edx; /* 0x1216739D: mov eax, edx */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1216739F: fsubp st(1) */
    fp_push(*(double*)ADDR(ebp + eax * 8 + (-0x34))); /* 0x121673A1: fld qword ptr [ebp + eax*8 - 0x34] */
    _st[0] -= *(double*)ADDR(ebp + eax * 8 + (-0x1C)); /* 0x121673A5: fsub qword ptr [ebp + eax*8 - 0x1c] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x121673A9: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121673AB: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x121673AD: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_121673B5; /* 0x121673B0: jp 0x121673b5 */
L_121673B2:
    PUSH32(esp, 2); /* 0x121673B2: push 2 */
    edx = POP32_VAL(esp); /* 0x121673B4: pop edx */
L_121673B5:
    fp_push(*(double*)ADDR(ebp + edx * 8 + (-0x34))); /* 0x121673B5: fld qword ptr [ebp + edx*8 - 0x34] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + edx * 8 + (-0x1C))); /* 0x121673B9: fcomp qword ptr [ebp + edx*8 - 0x1c] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121673BD: fnstsw ax */
    fp_push(0.0); /* 0x121673BF: fldz  */
    /* test HI8(eax), 0x41u */ /* 0x121673C1: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_121673D5; /* 0x121673C4: jp 0x121673d5 */
L_121673C6:
    *(double*)ADDR(esi) = _st[0]; /* 0x121673C6: fst qword ptr [esi] */
    { double _v = fp_pop(); *(double*)ADDR(esi + 0x8) = _v; } /* 0x121673C8: fstp qword ptr [esi + 8] */
    fp_push(1.0); /* 0x121673CB: fld1  */
    { double _v = fp_pop(); *(double*)ADDR(esi + 0x10) = _v; } /* 0x121673CD: fstp qword ptr [esi + 0x10] */
    goto L_121674A9; /* 0x121673D0: jmp 0x121674a9 */
L_121673D5:
    ecx = MEM32(ebp + edx * 4 + (-0x54)); /* 0x121673D5: mov ecx, dword ptr [ebp + edx*4 - 0x54] */
    *(double*)ADDR(ebp + (-0x48)) = _st[0]; /* 0x121673D9: fst qword ptr [ebp - 0x48] */
    eax = MEM32(ebp + edx * 4 + (-0x60)); /* 0x121673DC: mov eax, dword ptr [ebp + edx*4 - 0x60] */
    fp_push(*(double*)ADDR(ecx + 0x10)); /* 0x121673E0: fld qword ptr [ecx + 0x10] */
    edx = eax + 0x10; /* 0x121673E3: lea edx, [eax + 0x10] */
    _st[0] -= *(double*)ADDR(edx); /* 0x121673E6: fsub qword ptr [edx] */
    edi = eax + 0x18; /* 0x121673E8: lea edi, [eax + 0x18] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x20u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 0x20u; /* 0x121673EB: add eax, 0x20 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x38)) = eax; /* 0x121673EE: mov dword ptr [ebp - 0x38], eax */
    *(double*)ADDR(ebp + (-0x1C)) = _st[0]; /* 0x121673F1: fst qword ptr [ebp - 0x1c] */
    fp_push(*(double*)ADDR(ecx + 0x18)); /* 0x121673F4: fld qword ptr [ecx + 0x18] */
    _st[0] -= *(double*)ADDR(edi); /* 0x121673F7: fsub qword ptr [edi] */
    *(double*)ADDR(ebp + (-0x14)) = _st[0]; /* 0x121673F9: fst qword ptr [ebp - 0x14] */
    fp_push(*(double*)ADDR(ecx + 0x20)); /* 0x121673FC: fld qword ptr [ecx + 0x20] */
    ecx = MEM32(ebp + (-0x3C)); /* 0x121673FF: mov ecx, dword ptr [ebp - 0x3c] */
    _st[0] -= *(double*)ADDR(eax); /* 0x12167402: fsub qword ptr [eax] */
    *(double*)ADDR(ebp + (-0x50)) = _st[0]; /* 0x12167404: fst qword ptr [ebp - 0x50] */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0xC)) = _v; } /* 0x12167407: fstp qword ptr [ebp - 0xc] */
    /* cmp ebx, ecx */ /* 0x1216740A: cmp ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121674BA; /* 0x1216740C: je 0x121674ba */
L_12167412:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x12167412: fstp st(2) */
    fp_push(*(double*)ADDR(ebp + (-0x50))); /* 0x12167414: fld qword ptr [ebp - 0x50] */
    goto L_1216741B; /* 0x12167417: jmp 0x1216741b */
L_12167419:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12167419: fstp st(0) */
L_1216741B:
    fp_push(*(double*)ADDR(ebx + 0x10)); /* 0x1216741B: fld qword ptr [ebx + 0x10] */
    _st[0] -= *(double*)ADDR(edx); /* 0x1216741E: fsub qword ptr [edx] */
    fp_push(*(double*)ADDR(ebx + 0x18)); /* 0x12167420: fld qword ptr [ebx + 0x18] */
    _st[0] -= *(double*)ADDR(edi); /* 0x12167423: fsub qword ptr [edi] */
    fp_push(*(double*)ADDR(ebx + 0x20)); /* 0x12167425: fld qword ptr [ebx + 0x20] */
    _st[0] -= *(double*)ADDR(eax); /* 0x12167428: fsub qword ptr [eax] */
    fp_push(_st[0]); /* 0x1216742A: fld st(0) */
    _st[0] *= _st[6]; /* 0x1216742C: fmul st(6) */
    fp_push(_st[2]); /* 0x1216742E: fld st(2) */
    _st[0] *= _st[5]; /* 0x12167430: fmul st(5) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x12167432: fsubp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x50)) = _v; } /* 0x12167434: fstp qword ptr [ebp - 0x50] */
    fp_push(_st[2]); /* 0x12167437: fld st(2) */
    _st[0] *= _st[4]; /* 0x12167439: fmul st(4) */
    fp_xch(1); /* 0x1216743B: fxch st(1) */
    _st[0] *= _st[5]; /* 0x1216743D: fmul st(5) */
    { double _v = fp_pop(); _st[0] -= _v; } /* 0x1216743F: fsubp st(1) */
    *(double*)ADDR(ebp + (-0x40)) = _st[0]; /* 0x12167441: fst qword ptr [ebp - 0x40] */
    fp_xch(1); /* 0x12167444: fxch st(1) */
    _st[0] *= _st[4]; /* 0x12167446: fmul st(4) */
    fp_xch(2); /* 0x12167448: fxch st(2) */
    _st[0] *= _st[5]; /* 0x1216744A: fmul st(5) */
    { double _v = fp_pop(); _st[1] -= _v; } /* 0x1216744C: fsubp st(2) */
    fp_push(_st[0]); /* 0x1216744E: fld st(0) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12167450: fmulp st(1) */
    fp_push(*(double*)ADDR(ebp + (-0x50))); /* 0x12167452: fld qword ptr [ebp - 0x50] */
    fp_push(_st[0]); /* 0x12167455: fld st(0) */
    _st[0] *= _st[1]; /* 0x12167457: fmul st(1) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12167459: faddp st(2) */
    fp_push(_st[2]); /* 0x1216745B: fld st(2) */
    _st[0] *= _st[3]; /* 0x1216745D: fmul st(3) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x1216745F: faddp st(2) */
    fp_push(*(double*)ADDR(ebp + (-0x48))); /* 0x12167461: fld qword ptr [ebp - 0x48] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x12167464: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167466: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x12167468: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12167485; /* 0x1216746B: jp 0x12167485 */
L_1216746D:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1216746D: fstp st(0) */
    fp_xch(1); /* 0x1216746F: fxch st(1) */
    *(double*)ADDR(ebp + (-0x48)) = _st[0]; /* 0x12167471: fst qword ptr [ebp - 0x48] */
    fp_xch(1); /* 0x12167474: fxch st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esi) = _v; } /* 0x12167476: fstp qword ptr [esi] */
    fp_push(*(double*)ADDR(ebp + (-0x40))); /* 0x12167478: fld qword ptr [ebp - 0x40] */
    { double _v = fp_pop(); *(double*)ADDR(esi + 0x8) = _v; } /* 0x1216747B: fstp qword ptr [esi + 8] */
    fp_xch(1); /* 0x1216747E: fxch st(1) */
    { double _v = fp_pop(); *(double*)ADDR(esi + 0x10) = _v; } /* 0x12167480: fstp qword ptr [esi + 0x10] */
    goto L_1216748B; /* 0x12167483: jmp 0x1216748b */
L_12167485:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x12167485: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12167487: fstp st(0) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x12167489: fstp st(1) */
L_1216748B:
    ebx = MEM32(ebx); /* 0x1216748B: mov ebx, dword ptr [ebx] */
    eax = MEM32(ebp + (-0x38)); /* 0x1216748D: mov eax, dword ptr [ebp - 0x38] */
    /* cmp ebx, ecx */ /* 0x12167490: cmp ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_12167419; /* 0x12167492: jne 0x12167419 */
L_12167494:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x12167494: fstp st(1) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x12167496: fstp st(1) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x12167498: fstp st(1) */
    fp_push(0.0); /* 0x1216749A: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1216749C: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1216749E: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x121674A0: fstp st(1) */
    /* test HI8(eax), 1 */ /* 0x121674A2: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_121674BE; /* 0x121674A5: je 0x121674be */
L_121674A7:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x121674A7: fstp st(0) */
L_121674A9:
    ecx = MEM32(ebp + (-0x4)); /* 0x121674A9: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x121674AC: pop edi */
    esi = POP32_VAL(esp); /* 0x121674AD: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x121674AE: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x121674B0: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x121674B1: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121674B6: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121674B7: ret 4 */
L_121674BA:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x121674BA: fstp st(1) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x121674BC: fstp st(0) */
L_121674BE:
    *(double*)ADDR(esi + 0x10) = _st[0]; /* 0x121674BE: fst qword ptr [esi + 0x10] */
    ecx = ebp + (-0x1C); /* 0x121674C1: lea ecx, [ebp - 0x1c] */
    *(double*)ADDR(esi + 0x8) = _st[0]; /* 0x121674C4: fst qword ptr [esi + 8] */
    { double _v = fp_pop(); *(double*)ADDR(esi) = _v; } /* 0x121674C7: fstp qword ptr [esi] */
    RECOMP_CALL(sub_1216725F); /* 0x121674C9: call 0x1216725f */
    RECOMP_FLAGS_IN();
    fp_push(1.0); /* 0x121674CE: fld1  */
    { double _v = fp_pop(); *(double*)ADDR(esi + eax * 8) = _v; } /* 0x121674D0: fstp qword ptr [esi + eax*8] */
    RECOMP_BACKEDGE();
    goto L_121674A9; /* 0x121674D3: jmp 0x121674a9 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_121674DA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121674DAu);

L_121674DA:
    edi = edi; /* 0x121674DA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121674DC: push ebp */
    ebp = esp; /* 0x121674DD: mov ebp, esp */
    edx = MEM32(ebp + 0x8); /* 0x121674DF: mov edx, dword ptr [ebp + 8] */
    fp_push(0.0); /* 0x121674E2: fldz  */
    PUSH32(esp, ebx); /* 0x121674E4: push ebx */
    fp_push(_st[0]); /* 0x121674E5: fld st(0) */
    PUSH32(esp, esi); /* 0x121674E7: push esi */
    PUSH32(esp, edi); /* 0x121674E8: push edi */
    edi = MEM32(edx + 0x8); /* 0x121674E9: mov edi, dword ptr [edx + 8] */
    ebx = edi + 0x40; /* 0x121674EC: lea ebx, [edi + 0x40] */
    esi = MEM32(ebx); /* 0x121674EF: mov esi, dword ptr [ebx] */
    /* cmp esi, ebx */ /* 0x121674F1: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1216755D; /* 0x121674F3: je 0x1216755d */
L_121674F5:
    edx = MEM32(esi + 0x8); /* 0x121674F5: mov edx, dword ptr [esi + 8] */
    /* cmp MEM32(edx + 0x1C), 0 */ /* 0x121674F8: cmp dword ptr [edx + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1216751F; /* 0x121674FC: jle 0x1216751f */
L_121674FE:
    ecx = MEM32(edx + 0x10); /* 0x121674FE: mov ecx, dword ptr [edx + 0x10] */
    eax = MEM32(edx + 0x4); /* 0x12167501: mov eax, dword ptr [edx + 4] */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x12167504: fld qword ptr [ecx + 0x28] */
    eax = MEM32(eax + 0x10); /* 0x12167507: mov eax, dword ptr [eax + 0x10] */
    _st[0] -= *(double*)ADDR(eax + 0x28); /* 0x1216750A: fsub qword ptr [eax + 0x28] */
    edx = MEM32(edx + 0xC); /* 0x1216750D: mov edx, dword ptr [edx + 0xc] */
    fp_push(*(double*)ADDR(eax + 0x30)); /* 0x12167510: fld qword ptr [eax + 0x30] */
    _st[0] += *(double*)ADDR(ecx + 0x30); /* 0x12167513: fadd qword ptr [ecx + 0x30] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12167516: fmulp st(1) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12167518: faddp st(1) */
    /* cmp edx, MEM32(esi + 0x8) */ /* 0x1216751A: cmp edx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_121674FE; /* 0x1216751D: jne 0x121674fe */
L_1216751F:
    esi = MEM32(esi); /* 0x1216751F: mov esi, dword ptr [esi] */
    /* cmp esi, ebx */ /* 0x12167521: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_121674F5; /* 0x12167523: jne 0x121674f5 */
L_12167525:
    edx = MEM32(ebp + 0x8); /* 0x12167525: mov edx, dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12167528: fcompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1216752A: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1216752C: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12167561; /* 0x1216752F: jp 0x12167561 */
L_12167531:
    eax = MEM32(edi); /* 0x12167531: mov eax, dword ptr [edi] */
    goto L_1216753F; /* 0x12167533: jmp 0x1216753f */
L_12167535:
    fp_push(*(double*)ADDR(eax + 0x30)); /* 0x12167535: fld qword ptr [eax + 0x30] */
    _st[0] = -_st[0]; /* 0x12167538: fchs  */
    { double _v = fp_pop(); *(double*)ADDR(eax + 0x30) = _v; } /* 0x1216753A: fstp qword ptr [eax + 0x30] */
    eax = MEM32(eax); /* 0x1216753D: mov eax, dword ptr [eax] */
L_1216753F:
    /* cmp eax, edi */ /* 0x1216753F: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_12167535; /* 0x12167541: jne 0x12167535 */
L_12167543:
    fp_push(*(double*)ADDR(edx + 0x40)); /* 0x12167543: fld qword ptr [edx + 0x40] */
    _st[0] = -_st[0]; /* 0x12167546: fchs  */
    { double _v = fp_pop(); *(double*)ADDR(edx + 0x40) = _v; } /* 0x12167548: fstp qword ptr [edx + 0x40] */
    fp_push(*(double*)ADDR(edx + 0x48)); /* 0x1216754B: fld qword ptr [edx + 0x48] */
    _st[0] = -_st[0]; /* 0x1216754E: fchs  */
    { double _v = fp_pop(); *(double*)ADDR(edx + 0x48) = _v; } /* 0x12167550: fstp qword ptr [edx + 0x48] */
    fp_push(*(double*)ADDR(edx + 0x50)); /* 0x12167553: fld qword ptr [edx + 0x50] */
    _st[0] = -_st[0]; /* 0x12167556: fchs  */
    { double _v = fp_pop(); *(double*)ADDR(edx + 0x50) = _v; } /* 0x12167558: fstp qword ptr [edx + 0x50] */
    goto L_12167561; /* 0x1216755B: jmp 0x12167561 */
L_1216755D:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1216755D: fstp st(1) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1216755F: fstp st(0) */
L_12167561:
    edi = POP32_VAL(esp); /* 0x12167561: pop edi */
    esi = POP32_VAL(esp); /* 0x12167562: pop esi */
    ebx = POP32_VAL(esp); /* 0x12167563: pop ebx */
    ebp = POP32_VAL(esp); /* 0x12167564: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12167565: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1216756D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1216756Du);

L_1216756D:
    edi = edi; /* 0x1216756D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1216756F: push ebp */
    ebp = esp; /* 0x12167570: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x34u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x34u; /* 0x12167572: sub esp, 0x34 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x12167575: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x1216757A: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x1216757C: mov dword ptr [ebp - 4], eax */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(0);
    MEM32(ebp + (-0x24)) = MEM32(ebp + (-0x24)) & 0; /* 0x1216757F: and dword ptr [ebp - 0x24], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x12167583: push ebx */
    PUSH32(esp, esi); /* 0x12167584: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12167585: mov esi, dword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(esi + 0x10)); /* 0x12167588: fld qword ptr [esi + 0x10] */
    ebx = MEM32(esi + 0x8); /* 0x1216758B: mov ebx, dword ptr [esi + 8] */
    *(double*)ADDR(ebp + (-0x1C)) = _st[0]; /* 0x1216758E: fst qword ptr [ebp - 0x1c] */
    PUSH32(esp, edi); /* 0x12167591: push edi */
    fp_push(*(double*)ADDR(esi + 0x18)); /* 0x12167592: fld qword ptr [esi + 0x18] */
    MEM32(ebp + (-0x30)) = esi; /* 0x12167595: mov dword ptr [ebp - 0x30], esi */
    *(double*)ADDR(ebp + (-0x14)) = _st[0]; /* 0x12167598: fst qword ptr [ebp - 0x14] */
    fp_push(*(double*)ADDR(esi + 0x20)); /* 0x1216759B: fld qword ptr [esi + 0x20] */
    *(double*)ADDR(ebp + (-0xC)) = _st[0]; /* 0x1216759E: fst qword ptr [ebp - 0xc] */
    fp_push(0.0); /* 0x121675A1: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[3]); /* 0x121675A3: fucom st(3) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121675A5: fnstsw ax */
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x121675A7: fstp st(3) */
    /* test HI8(eax), 0x44u */ /* 0x121675A9: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_121675D4; /* 0x121675AC: jp 0x121675d4 */
L_121675AE:
    fp_xch(1); /* 0x121675AE: fxch st(1) */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x121675B0: fucomp st(2) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121675B2: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x121675B4: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_121675DA; /* 0x121675B7: jp 0x121675da */
L_121675B9:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x121675B9: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121675BB: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x121675BD: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_121675DE; /* 0x121675C0: jp 0x121675de */
L_121675C2:
    PUSH32(esp, esi); /* 0x121675C2: push esi */
    ecx = ebp + (-0x1C); /* 0x121675C3: lea ecx, [ebp - 0x1c] */
    RECOMP_CALL(sub_121672C3); /* 0x121675C6: call 0x121672c3 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x24)) = 1; /* 0x121675CB: mov dword ptr [ebp - 0x24], 1 */
    goto L_121675DE; /* 0x121675D2: jmp 0x121675de */
L_121675D4:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x121675D4: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x121675D6: fstp st(0) */
    goto L_121675DC; /* 0x121675D8: jmp 0x121675dc */
L_121675DA:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x121675DA: fstp st(1) */
L_121675DC:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x121675DC: fstp st(0) */
L_121675DE:
    eax = esi + 0x28; /* 0x121675DE: lea eax, [esi + 0x28] */
    ecx = ebp + (-0x1C); /* 0x121675E1: lea ecx, [ebp - 0x1c] */
    MEM32(ebp + (-0x34)) = eax; /* 0x121675E4: mov dword ptr [ebp - 0x34], eax */
    edi = esi + 0x40; /* 0x121675E7: lea edi, [esi + 0x40] */
    RECOMP_CALL(sub_1216725F); /* 0x121675EA: call 0x1216725f */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x121675EF: fldz  */
    *(double*)ADDR(esi + eax * 8 + 0x28) = _st[0]; /* 0x121675F1: fst qword ptr [esi + eax*8 + 0x28] */
    MEM32(ebp + (-0x20)) = eax; /* 0x121675F5: mov dword ptr [ebp - 0x20], eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x121675F8: inc eax */
    _flag_k = FK_INC;
    fp_push(1.0); /* 0x121675F9: fld1  */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x121675FB: cdq  */
    MEM32(ebp + (-0x28)) = 3; /* 0x121675FC: mov dword ptr [ebp - 0x28], 3 */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ebp + (-0x28)); /* 0x12167603: idiv dword ptr [ebp - 0x28] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    ecx = MEM32(ebp + (-0x20)); /* 0x12167606: mov ecx, dword ptr [ebp - 0x20] */
    eax = edx; /* 0x12167609: mov eax, edx */
    if (3u) _cf = (((eax) >> 29) & 1u); /* 0x1216760B: shl eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax << 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 3u; /* 0x1216760B: shl eax, 3 */
    *(double*)ADDR(eax + esi + 0x28) = _st[0]; /* 0x1216760E: fst qword ptr [eax + esi + 0x28] */
    MEM32(ebp + (-0x2C)) = eax; /* 0x12167612: mov dword ptr [ebp - 0x2c], eax */
    eax = MEM32(ebp + (-0x20)); /* 0x12167615: mov eax, dword ptr [ebp - 0x20] */
    fp_xch(1); /* 0x12167618: fxch st(1) */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 2; /* 0x1216761A: add eax, 2 */
    _flag_k = FK_ADD;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFFu : 0; /* 0x1216761D: cdq  */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax; int32_t _dv = (int32_t)MEM32(ebp + (-0x28)); /* 0x1216761E: idiv dword ptr [ebp - 0x28] */
      if (_dv && !(_dv == -1 && _dividend == INT64_MIN)) { eax = (uint32_t)((int32_t)(_dividend / _dv)); edx = (uint32_t)((int32_t)(_dividend % _dv)); }
      else { eax = 0; edx = 0; } }
    *(double*)ADDR(esi + edx * 8 + 0x28) = _st[0]; /* 0x12167621: fst qword ptr [esi + edx*8 + 0x28] */
    *(double*)ADDR(edi + ecx * 8) = _st[0]; /* 0x12167625: fst qword ptr [edi + ecx*8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + ecx * 8 + (-0x1C))); /* 0x12167628: fcom qword ptr [ebp + ecx*8 - 0x1c] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1216762C: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x1216762E: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1216763B; /* 0x12167631: jp 0x1216763b */
L_12167633:
    fp_push(*(double*)ADDR(0x120134D8)); /* 0x12167633: fld qword ptr [0x120134d8] */
    goto L_1216763D; /* 0x12167639: jmp 0x1216763d */
L_1216763B:
    fp_push(_st[0]); /* 0x1216763B: fld st(0) */
L_1216763D:
    eax = MEM32(ebp + (-0x2C)); /* 0x1216763D: mov eax, dword ptr [ebp - 0x2c] */
    { double _v = fp_pop(); *(double*)ADDR(eax + edi) = _v; } /* 0x12167640: fstp qword ptr [eax + edi] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + ecx * 8 + (-0x1C))); /* 0x12167643: fcomp qword ptr [ebp + ecx*8 - 0x1c] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167647: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x12167649: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_12167656; /* 0x1216764C: jnp 0x12167656 */
L_1216764E:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1216764E: fstp st(0) */
    fp_push(*(double*)ADDR(0x120019C8)); /* 0x12167650: fld qword ptr [0x120019c8] */
L_12167656:
    { double _v = fp_pop(); *(double*)ADDR(edi + edx * 8) = _v; } /* 0x12167656: fstp qword ptr [edi + edx*8] */
    edx = MEM32(ebx); /* 0x12167659: mov edx, dword ptr [ebx] */
    /* cmp edx, ebx */ /* 0x1216765B: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1216769B; /* 0x1216765D: je 0x1216769b */
L_1216765F:
    esi = MEM32(ebp + (-0x34)); /* 0x1216765F: mov esi, dword ptr [ebp - 0x34] */
    fp_push(*(double*)ADDR(esi + 0x8)); /* 0x12167662: fld qword ptr [esi + 8] */
    _st[0] *= *(double*)ADDR(edx + 0x18); /* 0x12167665: fmul qword ptr [edx + 0x18] */
    fp_push(*(double*)ADDR(edx + 0x10)); /* 0x12167668: fld qword ptr [edx + 0x10] */
    _st[0] *= *(double*)ADDR(esi); /* 0x1216766B: fmul qword ptr [esi] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1216766D: faddp st(1) */
    fp_push(*(double*)ADDR(esi + 0x10)); /* 0x1216766F: fld qword ptr [esi + 0x10] */
    _st[0] *= *(double*)ADDR(edx + 0x20); /* 0x12167672: fmul qword ptr [edx + 0x20] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12167675: faddp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(edx + 0x28) = _v; } /* 0x12167677: fstp qword ptr [edx + 0x28] */
    fp_push(*(double*)ADDR(edi + 0x8)); /* 0x1216767A: fld qword ptr [edi + 8] */
    _st[0] *= *(double*)ADDR(edx + 0x18); /* 0x1216767D: fmul qword ptr [edx + 0x18] */
    fp_push(*(double*)ADDR(edx + 0x10)); /* 0x12167680: fld qword ptr [edx + 0x10] */
    _st[0] *= *(double*)ADDR(edi); /* 0x12167683: fmul qword ptr [edi] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12167685: faddp st(1) */
    fp_push(*(double*)ADDR(edx + 0x20)); /* 0x12167687: fld qword ptr [edx + 0x20] */
    _st[0] *= *(double*)ADDR(edi + 0x10); /* 0x1216768A: fmul qword ptr [edi + 0x10] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1216768D: faddp st(1) */
    { double _v = fp_pop(); *(double*)ADDR(edx + 0x30) = _v; } /* 0x1216768F: fstp qword ptr [edx + 0x30] */
    edx = MEM32(edx); /* 0x12167692: mov edx, dword ptr [edx] */
    /* cmp edx, ebx */ /* 0x12167694: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_1216765F; /* 0x12167696: jne 0x1216765f */
L_12167698:
    esi = MEM32(ebp + (-0x30)); /* 0x12167698: mov esi, dword ptr [ebp - 0x30] */
L_1216769B:
    /* cmp MEM32(ebp + (-0x24)), 0 */ /* 0x1216769B: cmp dword ptr [ebp - 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + (-0x24))); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121676A7; /* 0x1216769F: je 0x121676a7 */
L_121676A1:
    PUSH32(esp, esi); /* 0x121676A1: push esi */
    RECOMP_CALL(sub_121674DA); /* 0x121676A2: call 0x121674da */
    RECOMP_FLAGS_IN();
L_121676A7:
    ecx = MEM32(ebp + (-0x4)); /* 0x121676A7: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x121676AA: pop edi */
    esi = POP32_VAL(esp); /* 0x121676AB: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x121676AC: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x121676AE: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x121676AF: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121676B4: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121676B5: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_121676BD(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121676BDu);

L_121676BD:
    edi = edi; /* 0x121676BD: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121676BF: push ebp */
    ebp = esp; /* 0x121676C0: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x121676C2: mov edx, dword ptr [ebp + 0xc] */
    ecx = MEM32(ebp + 0x8); /* 0x121676C5: mov ecx, dword ptr [ebp + 8] */
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x121676C8: fld qword ptr [edx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0x28)); /* 0x121676CB: fcomp qword ptr [ecx + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121676CE: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x121676D0: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_121676F5; /* 0x121676D3: je 0x121676f5 */
L_121676D5:
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x121676D5: fld qword ptr [ecx + 0x28] */
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x121676D8: fld qword ptr [edx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x121676DB: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121676DD: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x121676DF: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_121676F1; /* 0x121676E2: jp 0x121676f1 */
L_121676E4:
    fp_push(*(double*)ADDR(edx + 0x30)); /* 0x121676E4: fld qword ptr [edx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0x30)); /* 0x121676E7: fcomp qword ptr [ecx + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121676EA: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x121676EC: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_121676F5; /* 0x121676EF: je 0x121676f5 */
L_121676F1:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121676F1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_121676F8; /* 0x121676F3: jmp 0x121676f8 */
L_121676F5:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121676F5: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x121676F7: inc eax */
    _flag_k = FK_INC;
L_121676F8:
    ebp = POP32_VAL(esp); /* 0x121676F8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121676F9: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12167701(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12167701u);

L_12167701:
    edi = edi; /* 0x12167701: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12167703: push ebp */
    ebp = esp; /* 0x12167704: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x12167706: mov ecx, dword ptr [ebp + 0xc] */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x12167709: fld qword ptr [ecx + 0x28] */
    edx = MEM32(ebp + 0x8); /* 0x1216770C: mov edx, dword ptr [ebp + 8] */
    _st[0] -= *(double*)ADDR(edx + 0x28); /* 0x1216770F: fsub qword ptr [edx + 0x28] */
    PUSH32(esp, esi); /* 0x12167712: push esi */
    esi = MEM32(ebp + 0x10); /* 0x12167713: mov esi, dword ptr [ebp + 0x10] */
    fp_push(*(double*)ADDR(esi + 0x28)); /* 0x12167716: fld qword ptr [esi + 0x28] */
    _st[0] -= *(double*)ADDR(ecx + 0x28); /* 0x12167719: fsub qword ptr [ecx + 0x28] */
    fp_push(_st[0]); /* 0x1216771C: fld st(0) */
    _st[0] += _st[2]; /* 0x1216771E: fadd st(2) */
    fp_push(0.0); /* 0x12167720: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12167722: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167724: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x12167726: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12167766; /* 0x12167729: jp 0x12167766 */
L_1216772B:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1216772B: fstp st(0) */
    fp_xch(2); /* 0x1216772D: fxch st(2) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1216772F: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167731: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x12167733: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12167750; /* 0x12167736: jp 0x12167750 */
L_12167738:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x12167738: fstp st(1) */
    fp_push(*(double*)ADDR(edx + 0x30)); /* 0x1216773A: fld qword ptr [edx + 0x30] */
    _st[0] -= *(double*)ADDR(esi + 0x30); /* 0x1216773D: fsub qword ptr [esi + 0x30] */
    fp_xch(1); /* 0x12167740: fxch st(1) */
    { double _v = fp_pop(); _st[1] = _st[1] == 0.0 ? _v : _v / _st[1]; } /* 0x12167742: fdivrp st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12167744: fmulp st(1) */
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x12167746: fld qword ptr [ecx + 0x30] */
    _st[0] -= *(double*)ADDR(edx + 0x30); /* 0x12167749: fsub qword ptr [edx + 0x30] */
L_1216774C:
    { double _v = fp_pop(); _st[0] += _v; } /* 0x1216774C: faddp st(1) */
    goto L_1216776C; /* 0x1216774E: jmp 0x1216776c */
L_12167750:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12167750: fstp st(0) */
    fp_push(*(double*)ADDR(esi + 0x30)); /* 0x12167752: fld qword ptr [esi + 0x30] */
    _st[0] -= *(double*)ADDR(edx + 0x30); /* 0x12167755: fsub qword ptr [edx + 0x30] */
    fp_xch(1); /* 0x12167758: fxch st(1) */
    { double _v = fp_pop(); _st[1] = _st[1] == 0.0 ? _v : _v / _st[1]; } /* 0x1216775A: fdivrp st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x1216775C: fmulp st(1) */
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x1216775E: fld qword ptr [ecx + 0x30] */
    _st[0] -= *(double*)ADDR(esi + 0x30); /* 0x12167761: fsub qword ptr [esi + 0x30] */
    RECOMP_BACKEDGE();
    goto L_1216774C; /* 0x12167764: jmp 0x1216774c */
L_12167766:
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x12167766: fstp st(3) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x12167768: fstp st(1) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1216776A: fstp st(0) */
L_1216776C:
    esi = POP32_VAL(esp); /* 0x1216776C: pop esi */
    ebp = POP32_VAL(esp); /* 0x1216776D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1216776E: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12167776(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12167776u);

L_12167776:
    edi = edi; /* 0x12167776: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12167778: push ebp */
    ebp = esp; /* 0x12167779: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x1216777B: mov ecx, dword ptr [ebp + 0xc] */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x1216777E: fld qword ptr [ecx + 0x28] */
    edx = MEM32(ebp + 0x8); /* 0x12167781: mov edx, dword ptr [ebp + 8] */
    _st[0] -= *(double*)ADDR(edx + 0x28); /* 0x12167784: fsub qword ptr [edx + 0x28] */
    PUSH32(esp, esi); /* 0x12167787: push esi */
    esi = MEM32(ebp + 0x10); /* 0x12167788: mov esi, dword ptr [ebp + 0x10] */
    fp_push(*(double*)ADDR(esi + 0x28)); /* 0x1216778B: fld qword ptr [esi + 0x28] */
    _st[0] -= *(double*)ADDR(ecx + 0x28); /* 0x1216778E: fsub qword ptr [ecx + 0x28] */
    fp_push(_st[0]); /* 0x12167791: fld st(0) */
    _st[0] += _st[2]; /* 0x12167793: fadd st(2) */
    fp_push(0.0); /* 0x12167795: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12167797: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167799: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1216779B: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x1216779D: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_121677B8; /* 0x121677A0: jp 0x121677b8 */
L_121677A2:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x121677A2: fstp st(0) */
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x121677A4: fld qword ptr [ecx + 0x30] */
    _st[0] -= *(double*)ADDR(edx + 0x30); /* 0x121677A7: fsub qword ptr [edx + 0x30] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x121677AA: fmulp st(1) */
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x121677AC: fld qword ptr [ecx + 0x30] */
    _st[0] -= *(double*)ADDR(esi + 0x30); /* 0x121677AF: fsub qword ptr [esi + 0x30] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x121677B2: fmulp st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x121677B4: faddp st(1) */
    goto L_121677BC; /* 0x121677B6: jmp 0x121677bc */
L_121677B8:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x121677B8: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x121677BA: fstp st(0) */
L_121677BC:
    esi = POP32_VAL(esp); /* 0x121677BC: pop esi */
    ebp = POP32_VAL(esp); /* 0x121677BD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121677BE: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121677C6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121677C6u);

L_121677C6:
    edi = edi; /* 0x121677C6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121677C8: push ebp */
    ebp = esp; /* 0x121677C9: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x121677CB: mov ecx, dword ptr [ebp + 0xc] */
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x121677CE: fld qword ptr [ecx + 0x30] */
    edx = MEM32(ebp + 0x8); /* 0x121677D1: mov edx, dword ptr [ebp + 8] */
    _st[0] -= *(double*)ADDR(edx + 0x30); /* 0x121677D4: fsub qword ptr [edx + 0x30] */
    PUSH32(esp, esi); /* 0x121677D7: push esi */
    esi = MEM32(ebp + 0x10); /* 0x121677D8: mov esi, dword ptr [ebp + 0x10] */
    fp_push(*(double*)ADDR(esi + 0x30)); /* 0x121677DB: fld qword ptr [esi + 0x30] */
    _st[0] -= *(double*)ADDR(ecx + 0x30); /* 0x121677DE: fsub qword ptr [ecx + 0x30] */
    fp_push(_st[0]); /* 0x121677E1: fld st(0) */
    _st[0] += _st[2]; /* 0x121677E3: fadd st(2) */
    fp_push(0.0); /* 0x121677E5: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x121677E7: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121677E9: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x121677EB: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1216782B; /* 0x121677EE: jp 0x1216782b */
L_121677F0:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x121677F0: fstp st(0) */
    fp_xch(2); /* 0x121677F2: fxch st(2) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x121677F4: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121677F6: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x121677F8: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12167815; /* 0x121677FB: jp 0x12167815 */
L_121677FD:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x121677FD: fstp st(1) */
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x121677FF: fld qword ptr [edx + 0x28] */
    _st[0] -= *(double*)ADDR(esi + 0x28); /* 0x12167802: fsub qword ptr [esi + 0x28] */
    fp_xch(1); /* 0x12167805: fxch st(1) */
    { double _v = fp_pop(); _st[1] = _st[1] == 0.0 ? _v : _v / _st[1]; } /* 0x12167807: fdivrp st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12167809: fmulp st(1) */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x1216780B: fld qword ptr [ecx + 0x28] */
    _st[0] -= *(double*)ADDR(edx + 0x28); /* 0x1216780E: fsub qword ptr [edx + 0x28] */
L_12167811:
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12167811: faddp st(1) */
    goto L_12167831; /* 0x12167813: jmp 0x12167831 */
L_12167815:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12167815: fstp st(0) */
    fp_push(*(double*)ADDR(esi + 0x28)); /* 0x12167817: fld qword ptr [esi + 0x28] */
    _st[0] -= *(double*)ADDR(edx + 0x28); /* 0x1216781A: fsub qword ptr [edx + 0x28] */
    fp_xch(1); /* 0x1216781D: fxch st(1) */
    { double _v = fp_pop(); _st[1] = _st[1] == 0.0 ? _v : _v / _st[1]; } /* 0x1216781F: fdivrp st(2) */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12167821: fmulp st(1) */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x12167823: fld qword ptr [ecx + 0x28] */
    _st[0] -= *(double*)ADDR(esi + 0x28); /* 0x12167826: fsub qword ptr [esi + 0x28] */
    RECOMP_BACKEDGE();
    goto L_12167811; /* 0x12167829: jmp 0x12167811 */
L_1216782B:
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x1216782B: fstp st(3) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1216782D: fstp st(1) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1216782F: fstp st(0) */
L_12167831:
    esi = POP32_VAL(esp); /* 0x12167831: pop esi */
    ebp = POP32_VAL(esp); /* 0x12167832: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12167833: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1216783B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1216783Bu);

L_1216783B:
    edi = edi; /* 0x1216783B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1216783D: push ebp */
    ebp = esp; /* 0x1216783E: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x12167840: mov ecx, dword ptr [ebp + 0xc] */
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x12167843: fld qword ptr [ecx + 0x30] */
    edx = MEM32(ebp + 0x8); /* 0x12167846: mov edx, dword ptr [ebp + 8] */
    _st[0] -= *(double*)ADDR(edx + 0x30); /* 0x12167849: fsub qword ptr [edx + 0x30] */
    PUSH32(esp, esi); /* 0x1216784C: push esi */
    esi = MEM32(ebp + 0x10); /* 0x1216784D: mov esi, dword ptr [ebp + 0x10] */
    fp_push(*(double*)ADDR(esi + 0x30)); /* 0x12167850: fld qword ptr [esi + 0x30] */
    _st[0] -= *(double*)ADDR(ecx + 0x30); /* 0x12167853: fsub qword ptr [ecx + 0x30] */
    fp_push(_st[0]); /* 0x12167856: fld st(0) */
    _st[0] += _st[2]; /* 0x12167858: fadd st(2) */
    fp_push(0.0); /* 0x1216785A: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1216785C: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1216785E: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x12167860: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x12167862: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1216787D; /* 0x12167865: jp 0x1216787d */
L_12167867:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12167867: fstp st(0) */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x12167869: fld qword ptr [ecx + 0x28] */
    _st[0] -= *(double*)ADDR(edx + 0x28); /* 0x1216786C: fsub qword ptr [edx + 0x28] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x1216786F: fmulp st(1) */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x12167871: fld qword ptr [ecx + 0x28] */
    _st[0] -= *(double*)ADDR(esi + 0x28); /* 0x12167874: fsub qword ptr [esi + 0x28] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12167877: fmulp st(2) */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12167879: faddp st(1) */
    goto L_12167881; /* 0x1216787B: jmp 0x12167881 */
L_1216787D:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x1216787D: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1216787F: fstp st(0) */
L_12167881:
    esi = POP32_VAL(esp); /* 0x12167881: pop esi */
    ebp = POP32_VAL(esp); /* 0x12167882: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12167883: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1216788B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1216788Bu);

L_1216788B:
    edi = edi; /* 0x1216788B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1216788D: push ebp */
    ebp = esp; /* 0x1216788E: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12167890: push ecx */
    PUSH32(esp, ecx); /* 0x12167891: push ecx */
    PUSH32(esp, ebx); /* 0x12167892: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x12167893: mov ebx, dword ptr [ebp + 0xc] */
    fp_push(*(double*)ADDR(ebx + 0x28)); /* 0x12167896: fld qword ptr [ebx + 0x28] */
    PUSH32(esp, esi); /* 0x12167899: push esi */
    PUSH32(esp, edi); /* 0x1216789A: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1216789B: mov edi, dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edi + 0x28)); /* 0x1216789E: fcomp qword ptr [edi + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121678A1: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x121678A3: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_121678CA; /* 0x121678A6: je 0x121678ca */
L_121678A8:
    fp_push(*(double*)ADDR(edi + 0x28)); /* 0x121678A8: fld qword ptr [edi + 0x28] */
    fp_push(*(double*)ADDR(ebx + 0x28)); /* 0x121678AB: fld qword ptr [ebx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x121678AE: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121678B0: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x121678B2: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_121678C4; /* 0x121678B5: jp 0x121678c4 */
L_121678B7:
    fp_push(*(double*)ADDR(ebx + 0x30)); /* 0x121678B7: fld qword ptr [ebx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edi + 0x30)); /* 0x121678BA: fcomp qword ptr [edi + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121678BD: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x121678BF: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_121678CA; /* 0x121678C2: je 0x121678ca */
L_121678C4:
    eax = edi; /* 0x121678C4: mov eax, edi */
    edi = ebx; /* 0x121678C6: mov edi, ebx */
    ebx = eax; /* 0x121678C8: mov ebx, eax */
L_121678CA:
    ecx = MEM32(ebp + 0x14); /* 0x121678CA: mov ecx, dword ptr [ebp + 0x14] */
    esi = MEM32(ebp + 0x10); /* 0x121678CD: mov esi, dword ptr [ebp + 0x10] */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x121678D0: fld qword ptr [ecx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi + 0x28)); /* 0x121678D3: fcomp qword ptr [esi + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121678D6: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x121678D8: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12167902; /* 0x121678DB: je 0x12167902 */
L_121678DD:
    fp_push(*(double*)ADDR(esi + 0x28)); /* 0x121678DD: fld qword ptr [esi + 0x28] */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x121678E0: fld qword ptr [ecx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x121678E3: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121678E5: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x121678E7: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_121678F9; /* 0x121678EA: jp 0x121678f9 */
L_121678EC:
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x121678EC: fld qword ptr [ecx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi + 0x30)); /* 0x121678EF: fcomp qword ptr [esi + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121678F2: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x121678F4: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12167902; /* 0x121678F7: je 0x12167902 */
L_121678F9:
    eax = esi; /* 0x121678F9: mov eax, esi */
    esi = ecx; /* 0x121678FB: mov esi, ecx */
    ecx = eax; /* 0x121678FD: mov ecx, eax */
    MEM32(ebp + 0x14) = ecx; /* 0x121678FF: mov dword ptr [ebp + 0x14], ecx */
L_12167902:
    fp_push(*(double*)ADDR(esi + 0x28)); /* 0x12167902: fld qword ptr [esi + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edi + 0x28)); /* 0x12167905: fcomp qword ptr [edi + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167908: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1216790A: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1216793A; /* 0x1216790D: je 0x1216793a */
L_1216790F:
    fp_push(*(double*)ADDR(edi + 0x28)); /* 0x1216790F: fld qword ptr [edi + 0x28] */
    fp_push(*(double*)ADDR(esi + 0x28)); /* 0x12167912: fld qword ptr [esi + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12167915: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167917: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x12167919: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1216792B; /* 0x1216791C: jp 0x1216792b */
L_1216791E:
    fp_push(*(double*)ADDR(esi + 0x30)); /* 0x1216791E: fld qword ptr [esi + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edi + 0x30)); /* 0x12167921: fcomp qword ptr [edi + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167924: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x12167926: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1216793A; /* 0x12167929: je 0x1216793a */
L_1216792B:
    eax = edi; /* 0x1216792B: mov eax, edi */
    edi = esi; /* 0x1216792D: mov edi, esi */
    esi = eax; /* 0x1216792F: mov esi, eax */
    eax = ebx; /* 0x12167931: mov eax, ebx */
    ebx = ecx; /* 0x12167933: mov ebx, ecx */
    ecx = eax; /* 0x12167935: mov ecx, eax */
    MEM32(ebp + 0x14) = ecx; /* 0x12167937: mov dword ptr [ebp + 0x14], ecx */
L_1216793A:
    edx = ebx + 0x28; /* 0x1216793A: lea edx, [ebx + 0x28] */
    fp_push(*(double*)ADDR(edx)); /* 0x1216793D: fld qword ptr [edx] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi + 0x28)); /* 0x1216793F: fcomp qword ptr [esi + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167942: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x12167944: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12167978; /* 0x12167947: je 0x12167978 */
L_12167949:
    fp_push(*(double*)ADDR(esi + 0x28)); /* 0x12167949: fld qword ptr [esi + 0x28] */
    fp_push(*(double*)ADDR(edx)); /* 0x1216794C: fld qword ptr [edx] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1216794E: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167950: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x12167952: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12167964; /* 0x12167955: jp 0x12167964 */
L_12167957:
    fp_push(*(double*)ADDR(ebx + 0x30)); /* 0x12167957: fld qword ptr [ebx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi + 0x30)); /* 0x1216795A: fcomp qword ptr [esi + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1216795D: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x1216795F: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12167978; /* 0x12167962: je 0x12167978 */
L_12167964:
    fp_push(*(double*)ADDR(esi + 0x28)); /* 0x12167964: fld qword ptr [esi + 0x28] */
    _st[0] += *(double*)ADDR(edx); /* 0x12167967: fadd qword ptr [edx] */
    fp_push(*(double*)ADDR(0x120014C0)); /* 0x12167969: fld qword ptr [0x120014c0] */
    _st[1] *= _st[0]; /* 0x1216796F: fmul st(1), st(0) */
    fp_xch(1); /* 0x12167971: fxch st(1) */
    goto L_12167AF1; /* 0x12167973: jmp 0x12167af1 */
L_12167978:
    eax = ecx + 0x28; /* 0x12167978: lea eax, [ecx + 0x28] */
    fp_push(*(double*)ADDR(eax)); /* 0x1216797B: fld qword ptr [eax] */
    MEM32(ebp + 0x8) = eax; /* 0x1216797D: mov dword ptr [ebp + 8], eax */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edx)); /* 0x12167980: fcomp qword ptr [edx] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167982: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x12167984: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12167A55; /* 0x12167987: je 0x12167a55 */
L_1216798D:
    fp_push(*(double*)ADDR(edx)); /* 0x1216798D: fld qword ptr [edx] */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x1216798F: fld qword ptr [ecx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12167992: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167994: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x12167996: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_121679AC; /* 0x12167999: jp 0x121679ac */
L_1216799B:
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x1216799B: fld qword ptr [ecx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebx + 0x30)); /* 0x1216799E: fcomp qword ptr [ebx + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121679A1: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x121679A3: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12167A55; /* 0x121679A6: je 0x12167a55 */
L_121679AC:
    PUSH32(esp, ebx); /* 0x121679AC: push ebx */
    PUSH32(esp, esi); /* 0x121679AD: push esi */
    PUSH32(esp, edi); /* 0x121679AE: push edi */
    RECOMP_CALL(sub_12167776); /* 0x121679AF: call 0x12167776 */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x121679B4: fstp qword ptr [ebp - 8] */
    PUSH32(esp, ebx); /* 0x121679B7: push ebx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x121679B8: push dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x121679BB: push edi */
    RECOMP_CALL(sub_12167776); /* 0x121679BC: call 0x12167776 */
    RECOMP_FLAGS_IN();
    _st[0] = -_st[0]; /* 0x121679C1: fchs  */
    fp_push(_st[0]); /* 0x121679C3: fld st(0) */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x121679C5: fld qword ptr [ebp - 8] */
    _st[1] += _st[0]; /* 0x121679C8: fadd st(1), st(0) */
    fp_push(0.0); /* 0x121679CA: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x121679CC: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121679CE: fnstsw ax */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x121679D0: fstp st(2) */
    /* test HI8(eax), 0x41u */ /* 0x121679D2: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121679DF; /* 0x121679D5: jne 0x121679df */
L_121679D7:
    _st[0] = -_st[0]; /* 0x121679D7: fchs  */
    fp_xch(2); /* 0x121679D9: fxch st(2) */
    _st[0] = -_st[0]; /* 0x121679DB: fchs  */
    fp_xch(2); /* 0x121679DD: fxch st(2) */
L_121679DF:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x121679DF: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121679E1: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x121679E3: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_121679EC; /* 0x121679E6: jp 0x121679ec */
L_121679E8:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x121679E8: fstp st(0) */
    fp_push(_st[0]); /* 0x121679EA: fld st(0) */
L_121679EC:
    fp_xch(2); /* 0x121679EC: fxch st(2) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x121679EE: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121679F0: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x121679F2: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_121679FB; /* 0x121679F5: jp 0x121679fb */
L_121679F7:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x121679F7: fstp st(0) */
    fp_push(_st[0]); /* 0x121679F9: fld st(0) */
L_121679FB:
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x121679FB: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121679FD: fnstsw ax */
    fp_push(*(double*)ADDR(0x120014C0)); /* 0x121679FF: fld qword ptr [0x120014c0] */
    /* test HI8(eax), 1 */ /* 0x12167A05: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12167A37; /* 0x12167A08: jne 0x12167a37 */
L_12167A0A:
    fp_xch(2); /* 0x12167A0A: fxch st(2) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12167A0C: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167A0E: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x12167A10: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(ebp + 0x8); /* 0x12167A13: mov eax, dword ptr [ebp + 8] */
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12167A25; /* 0x12167A16: jp 0x12167a25 */
L_12167A18:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12167A18: fstp st(0) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x12167A1A: fstp st(1) */
    fp_push(*(double*)ADDR(esi + 0x28)); /* 0x12167A1C: fld qword ptr [esi + 0x28] */
    _st[0] += *(double*)ADDR(eax); /* 0x12167A1F: fadd qword ptr [eax] */
    _st[0] *= _st[1]; /* 0x12167A21: fmul st(1) */
    goto L_12167A4D; /* 0x12167A23: jmp 0x12167a4d */
L_12167A25:
    _st[0] += _st[2]; /* 0x12167A25: fadd st(2) */
    { double _v = fp_pop(); _st[1] = _v == 0.0 ? _st[1] : _st[1] / _v; } /* 0x12167A27: fdivp st(2) */
    fp_push(*(double*)ADDR(eax)); /* 0x12167A29: fld qword ptr [eax] */
    _st[0] -= *(double*)ADDR(esi + 0x28); /* 0x12167A2B: fsub qword ptr [esi + 0x28] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12167A2E: fmulp st(2) */
    fp_xch(1); /* 0x12167A30: fxch st(1) */
    _st[0] += *(double*)ADDR(esi + 0x28); /* 0x12167A32: fadd qword ptr [esi + 0x28] */
    goto L_12167A4D; /* 0x12167A35: jmp 0x12167a4d */
L_12167A37:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x12167A37: fstp st(2) */
    eax = MEM32(ebp + 0x8); /* 0x12167A39: mov eax, dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x12167A3C: fld st(0) */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x12167A3E: faddp st(3) */
    { double _v = fp_pop(); _st[1] = _st[1] == 0.0 ? _v : _v / _st[1]; } /* 0x12167A40: fdivrp st(2) */
    fp_push(*(double*)ADDR(esi + 0x28)); /* 0x12167A42: fld qword ptr [esi + 0x28] */
    _st[0] -= *(double*)ADDR(eax); /* 0x12167A45: fsub qword ptr [eax] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12167A47: fmulp st(2) */
    fp_xch(1); /* 0x12167A49: fxch st(1) */
    _st[0] += *(double*)ADDR(eax); /* 0x12167A4B: fadd qword ptr [eax] */
L_12167A4D:
    edx = ebx + 0x28; /* 0x12167A4D: lea edx, [ebx + 0x28] */
    goto L_12167AF1; /* 0x12167A50: jmp 0x12167af1 */
L_12167A55:
    PUSH32(esp, ebx); /* 0x12167A55: push ebx */
    PUSH32(esp, esi); /* 0x12167A56: push esi */
    PUSH32(esp, edi); /* 0x12167A57: push edi */
    RECOMP_CALL(sub_12167701); /* 0x12167A58: call 0x12167701 */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x12167A5D: fstp qword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x12167A60: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x12167A63: push ebx */
    PUSH32(esp, esi); /* 0x12167A64: push esi */
    RECOMP_CALL(sub_12167701); /* 0x12167A65: call 0x12167701 */
    RECOMP_FLAGS_IN();
    fp_push(_st[0]); /* 0x12167A6A: fld st(0) */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x12167A6C: fld qword ptr [ebp - 8] */
    _st[1] += _st[0]; /* 0x12167A6F: fadd st(1), st(0) */
    fp_push(0.0); /* 0x12167A71: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x12167A73: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167A75: fnstsw ax */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x12167A77: fstp st(2) */
    /* test HI8(eax), 0x41u */ /* 0x12167A79: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12167A86; /* 0x12167A7C: jne 0x12167a86 */
L_12167A7E:
    _st[0] = -_st[0]; /* 0x12167A7E: fchs  */
    fp_xch(2); /* 0x12167A80: fxch st(2) */
    _st[0] = -_st[0]; /* 0x12167A82: fchs  */
    fp_xch(2); /* 0x12167A84: fxch st(2) */
L_12167A86:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12167A86: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167A88: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x12167A8A: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12167A93; /* 0x12167A8D: jp 0x12167a93 */
L_12167A8F:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12167A8F: fstp st(0) */
    fp_push(_st[0]); /* 0x12167A91: fld st(0) */
L_12167A93:
    fp_xch(2); /* 0x12167A93: fxch st(2) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12167A95: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167A97: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x12167A99: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12167AA2; /* 0x12167A9C: jp 0x12167aa2 */
L_12167A9E:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12167A9E: fstp st(0) */
    fp_push(_st[0]); /* 0x12167AA0: fld st(0) */
L_12167AA2:
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x12167AA2: fcom st(2) */
    edx = ebx + 0x28; /* 0x12167AA4: lea edx, [ebx + 0x28] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167AA7: fnstsw ax */
    fp_push(*(double*)ADDR(0x120014C0)); /* 0x12167AA9: fld qword ptr [0x120014c0] */
    /* test HI8(eax), 1 */ /* 0x12167AAF: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12167ADE; /* 0x12167AB2: jne 0x12167ade */
L_12167AB4:
    fp_xch(2); /* 0x12167AB4: fxch st(2) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12167AB6: fucomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167AB8: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x12167ABA: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12167ACC; /* 0x12167ABD: jp 0x12167acc */
L_12167ABF:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12167ABF: fstp st(0) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x12167AC1: fstp st(1) */
    fp_push(*(double*)ADDR(esi + 0x28)); /* 0x12167AC3: fld qword ptr [esi + 0x28] */
    _st[0] += *(double*)ADDR(edx); /* 0x12167AC6: fadd qword ptr [edx] */
    _st[0] *= _st[1]; /* 0x12167AC8: fmul st(1) */
    goto L_12167AF1; /* 0x12167ACA: jmp 0x12167af1 */
L_12167ACC:
    _st[0] += _st[2]; /* 0x12167ACC: fadd st(2) */
    { double _v = fp_pop(); _st[1] = _v == 0.0 ? _st[1] : _st[1] / _v; } /* 0x12167ACE: fdivp st(2) */
    fp_push(*(double*)ADDR(edx)); /* 0x12167AD0: fld qword ptr [edx] */
    _st[0] -= *(double*)ADDR(esi + 0x28); /* 0x12167AD2: fsub qword ptr [esi + 0x28] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12167AD5: fmulp st(2) */
    fp_xch(1); /* 0x12167AD7: fxch st(1) */
    _st[0] += *(double*)ADDR(esi + 0x28); /* 0x12167AD9: fadd qword ptr [esi + 0x28] */
    goto L_12167AF1; /* 0x12167ADC: jmp 0x12167af1 */
L_12167ADE:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x12167ADE: fstp st(2) */
    fp_push(_st[0]); /* 0x12167AE0: fld st(0) */
    { double _v = fp_pop(); _st[2] += _v; } /* 0x12167AE2: faddp st(3) */
    { double _v = fp_pop(); _st[1] = _st[1] == 0.0 ? _v : _v / _st[1]; } /* 0x12167AE4: fdivrp st(2) */
    fp_push(*(double*)ADDR(esi + 0x28)); /* 0x12167AE6: fld qword ptr [esi + 0x28] */
    _st[0] -= *(double*)ADDR(edx); /* 0x12167AE9: fsub qword ptr [edx] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12167AEB: fmulp st(2) */
    fp_xch(1); /* 0x12167AED: fxch st(1) */
    _st[0] += *(double*)ADDR(edx); /* 0x12167AEF: fadd qword ptr [edx] */
L_12167AF1:
    eax = MEM32(ebp + 0x18); /* 0x12167AF1: mov eax, dword ptr [ebp + 0x18] */
    { double _v = fp_pop(); *(double*)ADDR(eax + 0x28) = _v; } /* 0x12167AF4: fstp qword ptr [eax + 0x28] */
    fp_push(*(double*)ADDR(ebx + 0x30)); /* 0x12167AF7: fld qword ptr [ebx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edi + 0x30)); /* 0x12167AFA: fcomp qword ptr [edi + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167AFD: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x12167AFF: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12167B25; /* 0x12167B02: je 0x12167b25 */
L_12167B04:
    fp_push(*(double*)ADDR(edi + 0x30)); /* 0x12167B04: fld qword ptr [edi + 0x30] */
    fp_push(*(double*)ADDR(ebx + 0x30)); /* 0x12167B07: fld qword ptr [ebx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12167B0A: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167B0C: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x12167B0E: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12167B1F; /* 0x12167B11: jp 0x12167b1f */
L_12167B13:
    fp_push(*(double*)ADDR(edx)); /* 0x12167B13: fld qword ptr [edx] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edi + 0x28)); /* 0x12167B15: fcomp qword ptr [edi + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167B18: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x12167B1A: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12167B25; /* 0x12167B1D: je 0x12167b25 */
L_12167B1F:
    eax = edi; /* 0x12167B1F: mov eax, edi */
    edi = ebx; /* 0x12167B21: mov edi, ebx */
    ebx = eax; /* 0x12167B23: mov ebx, eax */
L_12167B25:
    ecx = MEM32(ebp + 0x14); /* 0x12167B25: mov ecx, dword ptr [ebp + 0x14] */
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x12167B28: fld qword ptr [ecx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi + 0x30)); /* 0x12167B2B: fcomp qword ptr [esi + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167B2E: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x12167B30: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12167B5A; /* 0x12167B33: je 0x12167b5a */
L_12167B35:
    fp_push(*(double*)ADDR(esi + 0x30)); /* 0x12167B35: fld qword ptr [esi + 0x30] */
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x12167B38: fld qword ptr [ecx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12167B3B: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167B3D: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x12167B3F: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12167B51; /* 0x12167B42: jp 0x12167b51 */
L_12167B44:
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x12167B44: fld qword ptr [ecx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi + 0x28)); /* 0x12167B47: fcomp qword ptr [esi + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167B4A: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x12167B4C: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12167B5A; /* 0x12167B4F: je 0x12167b5a */
L_12167B51:
    eax = esi; /* 0x12167B51: mov eax, esi */
    esi = ecx; /* 0x12167B53: mov esi, ecx */
    ecx = eax; /* 0x12167B55: mov ecx, eax */
    MEM32(ebp + 0x14) = ecx; /* 0x12167B57: mov dword ptr [ebp + 0x14], ecx */
L_12167B5A:
    fp_push(*(double*)ADDR(esi + 0x30)); /* 0x12167B5A: fld qword ptr [esi + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edi + 0x30)); /* 0x12167B5D: fcomp qword ptr [edi + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167B60: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x12167B62: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12167B92; /* 0x12167B65: je 0x12167b92 */
L_12167B67:
    fp_push(*(double*)ADDR(edi + 0x30)); /* 0x12167B67: fld qword ptr [edi + 0x30] */
    fp_push(*(double*)ADDR(esi + 0x30)); /* 0x12167B6A: fld qword ptr [esi + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12167B6D: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167B6F: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x12167B71: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12167B83; /* 0x12167B74: jp 0x12167b83 */
L_12167B76:
    fp_push(*(double*)ADDR(esi + 0x28)); /* 0x12167B76: fld qword ptr [esi + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edi + 0x28)); /* 0x12167B79: fcomp qword ptr [edi + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167B7C: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x12167B7E: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12167B92; /* 0x12167B81: je 0x12167b92 */
L_12167B83:
    eax = edi; /* 0x12167B83: mov eax, edi */
    edi = esi; /* 0x12167B85: mov edi, esi */
    esi = eax; /* 0x12167B87: mov esi, eax */
    eax = ebx; /* 0x12167B89: mov eax, ebx */
    ebx = ecx; /* 0x12167B8B: mov ebx, ecx */
    ecx = eax; /* 0x12167B8D: mov ecx, eax */
    MEM32(ebp + 0x14) = ecx; /* 0x12167B8F: mov dword ptr [ebp + 0x14], ecx */
L_12167B92:
    eax = ebx + 0x30; /* 0x12167B92: lea eax, [ebx + 0x30] */
    fp_push(*(double*)ADDR(eax)); /* 0x12167B95: fld qword ptr [eax] */
    MEM32(ebp + 0x8) = eax; /* 0x12167B97: mov dword ptr [ebp + 8], eax */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi + 0x30)); /* 0x12167B9A: fcomp qword ptr [esi + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167B9D: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x12167B9F: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12167BCF; /* 0x12167BA2: je 0x12167bcf */
L_12167BA4:
    fp_push(*(double*)ADDR(esi + 0x30)); /* 0x12167BA4: fld qword ptr [esi + 0x30] */
    fp_push(*(double*)ADDR(ebx + 0x30)); /* 0x12167BA7: fld qword ptr [ebx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12167BAA: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167BAC: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x12167BAE: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12167BC0; /* 0x12167BB1: jp 0x12167bc0 */
L_12167BB3:
    fp_push(*(double*)ADDR(ebx + 0x28)); /* 0x12167BB3: fld qword ptr [ebx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(esi + 0x28)); /* 0x12167BB6: fcomp qword ptr [esi + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167BB9: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x12167BBB: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12167BCF; /* 0x12167BBE: je 0x12167bcf */
L_12167BC0:
    fp_push(*(double*)ADDR(esi + 0x30)); /* 0x12167BC0: fld qword ptr [esi + 0x30] */
    eax = MEM32(ebp + 0x8); /* 0x12167BC3: mov eax, dword ptr [ebp + 8] */
    _st[0] += *(double*)ADDR(eax); /* 0x12167BC6: fadd qword ptr [eax] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12167BC8: fmulp st(1) */
    goto L_12167D36; /* 0x12167BCA: jmp 0x12167d36 */
L_12167BCF:
    eax = ecx + 0x30; /* 0x12167BCF: lea eax, [ecx + 0x30] */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12167BD2: fstp st(0) */
    fp_push(*(double*)ADDR(eax)); /* 0x12167BD4: fld qword ptr [eax] */
    MEM32(ebp + 0x8) = eax; /* 0x12167BD6: mov dword ptr [ebp + 8], eax */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebx + 0x30)); /* 0x12167BD9: fcomp qword ptr [ebx + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167BDC: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x12167BDE: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12167C9F; /* 0x12167BE1: je 0x12167c9f */
L_12167BE7:
    fp_push(*(double*)ADDR(ebx + 0x30)); /* 0x12167BE7: fld qword ptr [ebx + 0x30] */
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x12167BEA: fld qword ptr [ecx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12167BED: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167BEF: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x12167BF1: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12167C07; /* 0x12167BF4: jp 0x12167c07 */
L_12167BF6:
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x12167BF6: fld qword ptr [ecx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebx + 0x28)); /* 0x12167BF9: fcomp qword ptr [ebx + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167BFC: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x12167BFE: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12167C9F; /* 0x12167C01: je 0x12167c9f */
L_12167C07:
    PUSH32(esp, ebx); /* 0x12167C07: push ebx */
    PUSH32(esp, esi); /* 0x12167C08: push esi */
    PUSH32(esp, edi); /* 0x12167C09: push edi */
    RECOMP_CALL(sub_1216783B); /* 0x12167C0A: call 0x1216783b */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x12167C0F: fstp qword ptr [ebp - 8] */
    PUSH32(esp, ebx); /* 0x12167C12: push ebx */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x12167C13: push dword ptr [ebp + 0x14] */
    PUSH32(esp, edi); /* 0x12167C16: push edi */
    RECOMP_CALL(sub_1216783B); /* 0x12167C17: call 0x1216783b */
    RECOMP_FLAGS_IN();
    _st[0] = -_st[0]; /* 0x12167C1C: fchs  */
    fp_push(_st[0]); /* 0x12167C1E: fld st(0) */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x12167C20: fld qword ptr [ebp - 8] */
    _st[1] += _st[0]; /* 0x12167C23: fadd st(1), st(0) */
    fp_push(0.0); /* 0x12167C25: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x12167C27: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167C29: fnstsw ax */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x12167C2B: fstp st(2) */
    /* test HI8(eax), 0x41u */ /* 0x12167C2D: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12167C3A; /* 0x12167C30: jne 0x12167c3a */
L_12167C32:
    _st[0] = -_st[0]; /* 0x12167C32: fchs  */
    fp_xch(2); /* 0x12167C34: fxch st(2) */
    _st[0] = -_st[0]; /* 0x12167C36: fchs  */
    fp_xch(2); /* 0x12167C38: fxch st(2) */
L_12167C3A:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12167C3A: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167C3C: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x12167C3E: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12167C47; /* 0x12167C41: jp 0x12167c47 */
L_12167C43:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12167C43: fstp st(0) */
    fp_push(_st[0]); /* 0x12167C45: fld st(0) */
L_12167C47:
    fp_xch(2); /* 0x12167C47: fxch st(2) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12167C49: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167C4B: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x12167C4D: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12167C56; /* 0x12167C50: jp 0x12167c56 */
L_12167C52:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12167C52: fstp st(0) */
    fp_push(_st[0]); /* 0x12167C54: fld st(0) */
L_12167C56:
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x12167C56: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167C58: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x12167C5A: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12167C86; /* 0x12167C5D: jne 0x12167c86 */
L_12167C5F:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12167C5F: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167C61: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x12167C63: fstp st(1) */
    /* test HI8(eax), 0x44u */ /* 0x12167C65: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    eax = MEM32(ebp + 0x8); /* 0x12167C68: mov eax, dword ptr [ebp + 8] */
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12167C7B; /* 0x12167C6B: jp 0x12167c7b */
L_12167C6D:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12167C6D: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12167C6F: fstp st(0) */
    fp_push(*(double*)ADDR(esi + 0x30)); /* 0x12167C71: fld qword ptr [esi + 0x30] */
    _st[0] += *(double*)ADDR(eax); /* 0x12167C74: fadd qword ptr [eax] */
    goto L_12167D0A; /* 0x12167C76: jmp 0x12167d0a */
L_12167C7B:
    _st[0] += _st[1]; /* 0x12167C7B: fadd st(1) */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x12167C7D: fdivp st(1) */
    fp_push(*(double*)ADDR(eax)); /* 0x12167C7F: fld qword ptr [eax] */
    goto L_12167D19; /* 0x12167C81: jmp 0x12167d19 */
L_12167C86:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x12167C86: fstp st(1) */
    eax = MEM32(ebp + 0x8); /* 0x12167C88: mov eax, dword ptr [ebp + 8] */
    fp_push(_st[0]); /* 0x12167C8B: fld st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12167C8D: faddp st(2) */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x12167C8F: fdivrp st(1) */
    fp_push(*(double*)ADDR(esi + 0x30)); /* 0x12167C91: fld qword ptr [esi + 0x30] */
    _st[0] -= *(double*)ADDR(eax); /* 0x12167C94: fsub qword ptr [eax] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12167C96: fmulp st(1) */
    _st[0] += *(double*)ADDR(eax); /* 0x12167C98: fadd qword ptr [eax] */
    goto L_12167D36; /* 0x12167C9A: jmp 0x12167d36 */
L_12167C9F:
    PUSH32(esp, ebx); /* 0x12167C9F: push ebx */
    PUSH32(esp, esi); /* 0x12167CA0: push esi */
    PUSH32(esp, edi); /* 0x12167CA1: push edi */
    RECOMP_CALL(sub_121677C6); /* 0x12167CA2: call 0x121677c6 */
    RECOMP_FLAGS_IN();
    { double _v = fp_pop(); *(double*)ADDR(ebp + (-0x8)) = _v; } /* 0x12167CA7: fstp qword ptr [ebp - 8] */
    PUSH32(esp, MEM32(ebp + 0x14)); /* 0x12167CAA: push dword ptr [ebp + 0x14] */
    PUSH32(esp, ebx); /* 0x12167CAD: push ebx */
    PUSH32(esp, esi); /* 0x12167CAE: push esi */
    RECOMP_CALL(sub_121677C6); /* 0x12167CAF: call 0x121677c6 */
    RECOMP_FLAGS_IN();
    fp_push(_st[0]); /* 0x12167CB4: fld st(0) */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x12167CB6: fld qword ptr [ebp - 8] */
    _st[1] += _st[0]; /* 0x12167CB9: fadd st(1), st(0) */
    fp_push(0.0); /* 0x12167CBB: fldz  */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x12167CBD: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167CBF: fnstsw ax */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x12167CC1: fstp st(2) */
    /* test HI8(eax), 0x41u */ /* 0x12167CC3: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12167CD0; /* 0x12167CC6: jne 0x12167cd0 */
L_12167CC8:
    _st[0] = -_st[0]; /* 0x12167CC8: fchs  */
    fp_xch(2); /* 0x12167CCA: fxch st(2) */
    _st[0] = -_st[0]; /* 0x12167CCC: fchs  */
    fp_xch(2); /* 0x12167CCE: fxch st(2) */
L_12167CD0:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12167CD0: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167CD2: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x12167CD4: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12167CDD; /* 0x12167CD7: jp 0x12167cdd */
L_12167CD9:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12167CD9: fstp st(0) */
    fp_push(_st[0]); /* 0x12167CDB: fld st(0) */
L_12167CDD:
    fp_xch(2); /* 0x12167CDD: fxch st(2) */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12167CDF: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167CE1: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x12167CE3: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12167CEC; /* 0x12167CE6: jp 0x12167cec */
L_12167CE8:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12167CE8: fstp st(0) */
    fp_push(_st[0]); /* 0x12167CEA: fld st(0) */
L_12167CEC:
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x12167CEC: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167CEE: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x12167CF0: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12167D23; /* 0x12167CF3: jne 0x12167d23 */
L_12167CF5:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12167CF5: fucom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167CF7: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x12167CF9: fstp st(1) */
    /* test HI8(eax), 0x44u */ /* 0x12167CFB: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12167D12; /* 0x12167CFE: jp 0x12167d12 */
L_12167D00:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12167D00: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12167D02: fstp st(0) */
    fp_push(*(double*)ADDR(esi + 0x30)); /* 0x12167D04: fld qword ptr [esi + 0x30] */
    _st[0] += *(double*)ADDR(ebx + 0x30); /* 0x12167D07: fadd qword ptr [ebx + 0x30] */
L_12167D0A:
    _st[0] *= *(double*)ADDR(0x120014C0); /* 0x12167D0A: fmul qword ptr [0x120014c0] */
    goto L_12167D36; /* 0x12167D10: jmp 0x12167d36 */
L_12167D12:
    _st[0] += _st[1]; /* 0x12167D12: fadd st(1) */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x12167D14: fdivp st(1) */
    fp_push(*(double*)ADDR(ebx + 0x30)); /* 0x12167D16: fld qword ptr [ebx + 0x30] */
L_12167D19:
    _st[0] -= *(double*)ADDR(esi + 0x30); /* 0x12167D19: fsub qword ptr [esi + 0x30] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12167D1C: fmulp st(1) */
    _st[0] += *(double*)ADDR(esi + 0x30); /* 0x12167D1E: fadd qword ptr [esi + 0x30] */
    goto L_12167D36; /* 0x12167D21: jmp 0x12167d36 */
L_12167D23:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x12167D23: fstp st(1) */
    fp_push(_st[0]); /* 0x12167D25: fld st(0) */
    { double _v = fp_pop(); _st[1] += _v; } /* 0x12167D27: faddp st(2) */
    { double _v = fp_pop(); _st[0] = _st[0] == 0.0 ? _v : _v / _st[0]; } /* 0x12167D29: fdivrp st(1) */
    fp_push(*(double*)ADDR(esi + 0x30)); /* 0x12167D2B: fld qword ptr [esi + 0x30] */
    _st[0] -= *(double*)ADDR(ebx + 0x30); /* 0x12167D2E: fsub qword ptr [ebx + 0x30] */
    { double _v = fp_pop(); _st[0] *= _v; } /* 0x12167D31: fmulp st(1) */
    _st[0] += *(double*)ADDR(ebx + 0x30); /* 0x12167D33: fadd qword ptr [ebx + 0x30] */
L_12167D36:
    eax = MEM32(ebp + 0x18); /* 0x12167D36: mov eax, dword ptr [ebp + 0x18] */
    edi = POP32_VAL(esp); /* 0x12167D39: pop edi */
    { double _v = fp_pop(); *(double*)ADDR(eax + 0x30) = _v; } /* 0x12167D3A: fstp qword ptr [eax + 0x30] */
    esi = POP32_VAL(esp); /* 0x12167D3D: pop esi */
    ebx = POP32_VAL(esp); /* 0x12167D3E: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12167D3F: leave  */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x12167D40: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_12167D48(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12167D48u);

L_12167D48:
    edi = edi; /* 0x12167D48: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12167D4A: push ebp */
    ebp = esp; /* 0x12167D4B: mov ebp, esp */
    PUSH32(esp, 0x14u); /* 0x12167D4D: push 0x14 */
    RECOMP_CALL(sub_121BF524); /* 0x12167D4F: call 0x121bf524 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12167D54: pop ecx */
    ecx = eax; /* 0x12167D55: mov ecx, eax */
    /* test ecx, ecx */ /* 0x12167D57: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12167D72; /* 0x12167D59: je 0x12167d72 */
L_12167D5B:
    eax = MEM32(ebp + 0x8); /* 0x12167D5B: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    MEM32(ecx) = MEM32(ecx) & 0; /* 0x12167D5E: and dword ptr [ecx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0xC) = eax; /* 0x12167D61: mov dword ptr [ecx + 0xc], eax */
    eax = MEM32(ebp + 0xC); /* 0x12167D64: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ecx + 0x10) = eax; /* 0x12167D67: mov dword ptr [ecx + 0x10], eax */
    MEM32(ecx + 0x4) = ecx; /* 0x12167D6A: mov dword ptr [ecx + 4], ecx */
    MEM32(ecx + 0x8) = ecx; /* 0x12167D6D: mov dword ptr [ecx + 8], ecx */
    eax = ecx; /* 0x12167D70: mov eax, ecx */
L_12167D72:
    ebp = POP32_VAL(esp); /* 0x12167D72: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12167D73: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12167D7B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12167D7Bu);

L_12167D7B:
    edi = edi; /* 0x12167D7B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12167D7D: push ebp */
    ebp = esp; /* 0x12167D7E: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12167D80: push esi */
    PUSH32(esp, edi); /* 0x12167D81: push edi */
    edi = MEM32(ebp + 0x8); /* 0x12167D82: mov edi, dword ptr [ebp + 8] */
    esi = MEM32(edi + 0x4); /* 0x12167D85: mov esi, dword ptr [edi + 4] */
    goto L_12167D94; /* 0x12167D88: jmp 0x12167d94 */
L_12167D8A:
    PUSH32(esp, esi); /* 0x12167D8A: push esi */
    RECOMP_CALL(sub_121BF586); /* 0x12167D8B: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    esi = MEM32(esi + 0x4); /* 0x12167D90: mov esi, dword ptr [esi + 4] */
    ecx = POP32_VAL(esp); /* 0x12167D93: pop ecx */
L_12167D94:
    /* cmp esi, edi */ /* 0x12167D94: cmp esi, edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_NE(_flag_a, _flag_b)) goto L_12167D8A; /* 0x12167D96: jne 0x12167d8a */
L_12167D98:
    PUSH32(esp, edi); /* 0x12167D98: push edi */
    RECOMP_CALL(sub_121BF586); /* 0x12167D99: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12167D9E: pop ecx */
    edi = POP32_VAL(esp); /* 0x12167D9F: pop edi */
    esi = POP32_VAL(esp); /* 0x12167DA0: pop esi */
    ebp = POP32_VAL(esp); /* 0x12167DA1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12167DA2: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12167DAA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12167DAAu);

L_12167DAA:
    edi = edi; /* 0x12167DAA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12167DAC: push ebp */
    ebp = esp; /* 0x12167DAD: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x12167DAF: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x12167DB0: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x12167DB3: push esi */
    esi = MEM32(ebp + 0xC); /* 0x12167DB4: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x12167DB7: push edi */
    edi = MEM32(ebp + 0x8); /* 0x12167DB8: mov edi, dword ptr [ebp + 8] */
L_12167DBB:
    esi = MEM32(esi + 0x8); /* 0x12167DBB: mov esi, dword ptr [esi + 8] */
    /* cmp MEM32(esi), 0 */ /* 0x12167DBE: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12167DD0; /* 0x12167DC1: je 0x12167dd0 */
L_12167DC3:
    PUSH32(esp, ebx); /* 0x12167DC3: push ebx */
    PUSH32(esp, MEM32(esi)); /* 0x12167DC4: push dword ptr [esi] */
    PUSH32(esp, MEM32(edi + 0xC)); /* 0x12167DC6: push dword ptr [edi + 0xc] */
    RECOMP_ICALL(MEM32(edi + 0x10)); /* 0x12167DC9: call dword ptr [edi + 0x10] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12167DCC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_12167DBB; /* 0x12167DCE: je 0x12167dbb */
L_12167DD0:
    PUSH32(esp, 0xCu); /* 0x12167DD0: push 0xc */
    RECOMP_CALL(sub_121BF524); /* 0x12167DD2: call 0x121bf524 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12167DD7: pop ecx */
    ecx = eax; /* 0x12167DD8: mov ecx, eax */
    /* test ecx, ecx */ /* 0x12167DDA: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12167DF4; /* 0x12167DDC: je 0x12167df4 */
L_12167DDE:
    MEM32(ecx) = ebx; /* 0x12167DDE: mov dword ptr [ecx], ebx */
    eax = MEM32(esi + 0x4); /* 0x12167DE0: mov eax, dword ptr [esi + 4] */
    MEM32(ecx + 0x4) = eax; /* 0x12167DE3: mov dword ptr [ecx + 4], eax */
    eax = MEM32(esi + 0x4); /* 0x12167DE6: mov eax, dword ptr [esi + 4] */
    MEM32(eax + 0x8) = ecx; /* 0x12167DE9: mov dword ptr [eax + 8], ecx */
    MEM32(ecx + 0x8) = esi; /* 0x12167DEC: mov dword ptr [ecx + 8], esi */
    MEM32(esi + 0x4) = ecx; /* 0x12167DEF: mov dword ptr [esi + 4], ecx */
    eax = ecx; /* 0x12167DF2: mov eax, ecx */
L_12167DF4:
    edi = POP32_VAL(esp); /* 0x12167DF4: pop edi */
    esi = POP32_VAL(esp); /* 0x12167DF5: pop esi */
    ebx = POP32_VAL(esp); /* 0x12167DF6: pop ebx */
    ebp = POP32_VAL(esp); /* 0x12167DF7: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12167DF8: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12167E00(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12167E00u);

L_12167E00:
    edi = edi; /* 0x12167E00: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12167E02: push ebp */
    ebp = esp; /* 0x12167E03: mov ebp, esp */
    edx = MEM32(ebp + 0xC); /* 0x12167E05: mov edx, dword ptr [ebp + 0xc] */
    ecx = MEM32(edx + 0x4); /* 0x12167E08: mov ecx, dword ptr [edx + 4] */
    eax = MEM32(edx + 0x8); /* 0x12167E0B: mov eax, dword ptr [edx + 8] */
    MEM32(ecx + 0x8) = eax; /* 0x12167E0E: mov dword ptr [ecx + 8], eax */
    ecx = MEM32(edx + 0x8); /* 0x12167E11: mov ecx, dword ptr [edx + 8] */
    eax = MEM32(edx + 0x4); /* 0x12167E14: mov eax, dword ptr [edx + 4] */
    PUSH32(esp, edx); /* 0x12167E17: push edx */
    MEM32(ecx + 0x4) = eax; /* 0x12167E18: mov dword ptr [ecx + 4], eax */
    RECOMP_CALL(sub_121BF586); /* 0x12167E1B: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12167E20: pop ecx */
    ebp = POP32_VAL(esp); /* 0x12167E21: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12167E22: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12167E2A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12167E2Au);

L_12167E2A:
    edi = edi; /* 0x12167E2A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12167E2C: push ebp */
    ebp = esp; /* 0x12167E2D: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12167E2F: push esi */
    PUSH32(esp, edi); /* 0x12167E30: push edi */
    edi = MEM32(ebp + 0x8); /* 0x12167E31: mov edi, dword ptr [ebp + 8] */
    esi = edi; /* 0x12167E34: mov esi, edi */
L_12167E36:
    esi = MEM32(esi + 0x4); /* 0x12167E36: mov esi, dword ptr [esi + 4] */
    /* cmp MEM32(esi), 0 */ /* 0x12167E39: cmp dword ptr [esi], 0 */
    _flag_a = (uint32_t)(MEM32(esi)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12167E4D; /* 0x12167E3C: je 0x12167e4d */
L_12167E3E:
    PUSH32(esp, MEM32(esi)); /* 0x12167E3E: push dword ptr [esi] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12167E40: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(edi + 0xC)); /* 0x12167E43: push dword ptr [edi + 0xc] */
    RECOMP_ICALL(MEM32(edi + 0x10)); /* 0x12167E46: call dword ptr [edi + 0x10] */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12167E49: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    if (TEST_Z(_flag_a, _flag_b)) goto L_12167E36; /* 0x12167E4B: je 0x12167e36 */
L_12167E4D:
    edi = POP32_VAL(esp); /* 0x12167E4D: pop edi */
    eax = esi; /* 0x12167E4E: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x12167E50: pop esi */
    ebp = POP32_VAL(esp); /* 0x12167E51: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12167E52: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12167E5A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12167E5Au);

L_12167E5A:
    edi = edi; /* 0x12167E5A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12167E5C: push ebp */
    ebp = esp; /* 0x12167E5D: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12167E5F: push esi */
    PUSH32(esp, 0x1Cu); /* 0x12167E60: push 0x1c */
    RECOMP_CALL(sub_121BF524); /* 0x12167E62: call 0x121bf524 */
    RECOMP_FLAGS_IN();
    esi = eax; /* 0x12167E67: mov esi, eax */
    ecx = POP32_VAL(esp); /* 0x12167E69: pop ecx */
    /* test esi, esi */ /* 0x12167E6A: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12167ED8; /* 0x12167E6C: je 0x12167ed8 */
L_12167E6E:
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) & 0; /* 0x12167E6E: and dword ptr [esi + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x12167E72: push ebx */
    PUSH32(esp, edi); /* 0x12167E73: push edi */
    PUSH32(esp, 0x84u); /* 0x12167E74: push 0x84 */
    MEM32(esi + 0xC) = 0x20u; /* 0x12167E79: mov dword ptr [esi + 0xc], 0x20 */
    RECOMP_CALL(sub_121BF524); /* 0x12167E80: call 0x121bf524 */
    RECOMP_FLAGS_IN();
    ebx = eax; /* 0x12167E85: mov ebx, eax */
    MEM32(esi) = ebx; /* 0x12167E87: mov dword ptr [esi], ebx */
    MEM32(esp) = 0x108u; /* 0x12167E89: mov dword ptr [esp], 0x108 */
    RECOMP_CALL(sub_121BF524); /* 0x12167E90: call 0x121bf524 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x12167E95: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x12167E97: pop ecx */
    MEM32(esi + 0x4) = edi; /* 0x12167E98: mov dword ptr [esi + 4], edi */
    /* test ebx, ebx */ /* 0x12167E9B: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12167EBF; /* 0x12167E9D: je 0x12167ebf */
L_12167E9F:
    /* test edi, edi */ /* 0x12167E9F: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12167EBF; /* 0x12167EA1: je 0x12167ebf */
L_12167EA3:
    eax = MEM32(ebp + 0x8); /* 0x12167EA3: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x12167EA6: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x18) = eax; /* 0x12167EA8: mov dword ptr [esi + 0x18], eax */
    MEM32(ebx + 0x4) = 1; /* 0x12167EAB: mov dword ptr [ebx + 4], 1 */
    MEM32(esi + 0x14) = ecx; /* 0x12167EB2: mov dword ptr [esi + 0x14], ecx */
    MEM32(esi + 0x10) = ecx; /* 0x12167EB5: mov dword ptr [esi + 0x10], ecx */
    MEM32(edi + 0x8) = ecx; /* 0x12167EB8: mov dword ptr [edi + 8], ecx */
    eax = esi; /* 0x12167EBB: mov eax, esi */
    goto L_12167ED6; /* 0x12167EBD: jmp 0x12167ed6 */
L_12167EBF:
    PUSH32(esp, ebx); /* 0x12167EBF: push ebx */
    RECOMP_CALL(sub_121BF586); /* 0x12167EC0: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, edi); /* 0x12167EC5: push edi */
    RECOMP_CALL(sub_121BF586); /* 0x12167EC6: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x12167ECB: push esi */
    RECOMP_CALL(sub_121BF586); /* 0x12167ECC: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12167ED1: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12167ED4: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_12167ED6:
    edi = POP32_VAL(esp); /* 0x12167ED6: pop edi */
    ebx = POP32_VAL(esp); /* 0x12167ED7: pop ebx */
L_12167ED8:
    esi = POP32_VAL(esp); /* 0x12167ED8: pop esi */
    ebp = POP32_VAL(esp); /* 0x12167ED9: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12167EDA: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12167EE2(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12167EE2u);

L_12167EE2:
    edi = edi; /* 0x12167EE2: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12167EE4: push ebp */
    ebp = esp; /* 0x12167EE5: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12167EE7: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12167EE8: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x12167EEB: push dword ptr [esi + 4] */
    RECOMP_CALL(sub_121BF586); /* 0x12167EEE: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi)); /* 0x12167EF3: push dword ptr [esi] */
    RECOMP_CALL(sub_121BF586); /* 0x12167EF5: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x12167EFA: push esi */
    RECOMP_CALL(sub_121BF586); /* 0x12167EFB: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12167F00: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x12167F03: pop esi */
    ebp = POP32_VAL(esp); /* 0x12167F04: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12167F05: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12167F0D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12167F0Du);

L_12167F0D:
    edi = edi; /* 0x12167F0D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12167F0F: push ebp */
    ebp = esp; /* 0x12167F10: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x14u; /* 0x12167F12: sub esp, 0x14 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x12167F15: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x12167F16: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x12167F19: push esi */
    esi = MEM32(ebx); /* 0x12167F1A: mov esi, dword ptr [ebx] */
    eax = MEM32(esi + ecx * 4); /* 0x12167F1C: mov eax, dword ptr [esi + ecx*4] */
    PUSH32(esp, edi); /* 0x12167F1F: push edi */
    edi = MEM32(ebx + 0x4); /* 0x12167F20: mov edi, dword ptr [ebx + 4] */
    MEM32(ebp + (-0x4)) = eax; /* 0x12167F23: mov dword ptr [ebp - 4], eax */
L_12167F26:
    eax = MEM32(ebx + 0x8); /* 0x12167F26: mov eax, dword ptr [ebx + 8] */
    edx = ecx + ecx; /* 0x12167F29: lea edx, [ecx + ecx] */
    MEM32(ebp + (-0x14)) = eax; /* 0x12167F2C: mov dword ptr [ebp - 0x14], eax */
    /* cmp edx, eax */ /* 0x12167F2F: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    eax = MEM32(ebp + (-0x4)); /* 0x12167F31: mov eax, dword ptr [ebp - 4] */
    if (CMP_GE(_flag_a, _flag_b)) goto L_12167F85; /* 0x12167F34: jge 0x12167f85 */
L_12167F36:
    eax = MEM32(esi + edx * 4 + 0x4); /* 0x12167F36: mov eax, dword ptr [esi + edx*4 + 4] */
    eax = MEM32(edi + eax * 8); /* 0x12167F3A: mov eax, dword ptr [edi + eax*8] */
    MEM32(ebp + (-0x8)) = eax; /* 0x12167F3D: mov dword ptr [ebp - 8], eax */
    eax = MEM32(esi + edx * 4); /* 0x12167F40: mov eax, dword ptr [esi + edx*4] */
    eax = MEM32(edi + eax * 8); /* 0x12167F43: mov eax, dword ptr [edi + eax*8] */
    fp_push(*(double*)ADDR(eax + 0x28)); /* 0x12167F46: fld qword ptr [eax + 0x28] */
    MEM32(ebp + (-0xC)) = eax; /* 0x12167F49: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ebp + (-0x8)); /* 0x12167F4C: mov eax, dword ptr [ebp - 8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(eax + 0x28)); /* 0x12167F4F: fcomp qword ptr [eax + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167F52: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x12167F54: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12167F81; /* 0x12167F57: je 0x12167f81 */
L_12167F59:
    eax = MEM32(ebp + (-0x8)); /* 0x12167F59: mov eax, dword ptr [ebp - 8] */
    fp_push(*(double*)ADDR(eax + 0x28)); /* 0x12167F5C: fld qword ptr [eax + 0x28] */
    eax = MEM32(ebp + (-0xC)); /* 0x12167F5F: mov eax, dword ptr [ebp - 0xc] */
    fp_push(*(double*)ADDR(eax + 0x28)); /* 0x12167F62: fld qword ptr [eax + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12167F65: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167F67: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x12167F69: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12167F82; /* 0x12167F6C: jp 0x12167f82 */
L_12167F6E:
    eax = MEM32(ebp + (-0xC)); /* 0x12167F6E: mov eax, dword ptr [ebp - 0xc] */
    fp_push(*(double*)ADDR(eax + 0x30)); /* 0x12167F71: fld qword ptr [eax + 0x30] */
    eax = MEM32(ebp + (-0x8)); /* 0x12167F74: mov eax, dword ptr [ebp - 8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(eax + 0x30)); /* 0x12167F77: fcomp qword ptr [eax + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167F7A: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x12167F7C: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12167F82; /* 0x12167F7F: jne 0x12167f82 */
L_12167F81:
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x12167F81: inc edx */
    _flag_k = FK_INC;
L_12167F82:
    eax = MEM32(ebp + (-0x4)); /* 0x12167F82: mov eax, dword ptr [ebp - 4] */
L_12167F85:
    ebx = MEM32(esi + edx * 4); /* 0x12167F85: mov ebx, dword ptr [esi + edx*4] */
    MEM32(ebp + (-0x10)) = ebx; /* 0x12167F88: mov dword ptr [ebp - 0x10], ebx */
    ebx = MEM32(ebp + 0x8); /* 0x12167F8B: mov ebx, dword ptr [ebp + 8] */
    /* cmp edx, MEM32(ebp + (-0x14)) */ /* 0x12167F8E: cmp edx, dword ptr [ebp - 0x14] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(ebp + (-0x14)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_12167FEB; /* 0x12167F91: jg 0x12167feb */
L_12167F93:
    eax = MEM32(edi + eax * 8); /* 0x12167F93: mov eax, dword ptr [edi + eax*8] */
    MEM32(ebp + (-0x8)) = eax; /* 0x12167F96: mov dword ptr [ebp - 8], eax */
    eax = MEM32(ebp + (-0x10)); /* 0x12167F99: mov eax, dword ptr [ebp - 0x10] */
    eax = MEM32(edi + eax * 8); /* 0x12167F9C: mov eax, dword ptr [edi + eax*8] */
    fp_push(*(double*)ADDR(eax + 0x28)); /* 0x12167F9F: fld qword ptr [eax + 0x28] */
    MEM32(ebp + (-0xC)) = eax; /* 0x12167FA2: mov dword ptr [ebp - 0xc], eax */
    eax = MEM32(ebp + (-0x8)); /* 0x12167FA5: mov eax, dword ptr [ebp - 8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(eax + 0x28)); /* 0x12167FA8: fcomp qword ptr [eax + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167FAB: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x12167FAD: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12167FEB; /* 0x12167FB0: je 0x12167feb */
L_12167FB2:
    eax = MEM32(ebp + (-0x8)); /* 0x12167FB2: mov eax, dword ptr [ebp - 8] */
    fp_push(*(double*)ADDR(eax + 0x28)); /* 0x12167FB5: fld qword ptr [eax + 0x28] */
    eax = MEM32(ebp + (-0xC)); /* 0x12167FB8: mov eax, dword ptr [ebp - 0xc] */
    fp_push(*(double*)ADDR(eax + 0x28)); /* 0x12167FBB: fld qword ptr [eax + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12167FBE: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167FC0: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x12167FC2: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12167FDA; /* 0x12167FC5: jp 0x12167fda */
L_12167FC7:
    eax = MEM32(ebp + (-0xC)); /* 0x12167FC7: mov eax, dword ptr [ebp - 0xc] */
    fp_push(*(double*)ADDR(eax + 0x30)); /* 0x12167FCA: fld qword ptr [eax + 0x30] */
    eax = MEM32(ebp + (-0x8)); /* 0x12167FCD: mov eax, dword ptr [ebp - 8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(eax + 0x30)); /* 0x12167FD0: fcomp qword ptr [eax + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12167FD3: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x12167FD5: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12167FEB; /* 0x12167FD8: je 0x12167feb */
L_12167FDA:
    eax = MEM32(ebp + (-0x10)); /* 0x12167FDA: mov eax, dword ptr [ebp - 0x10] */
    MEM32(esi + ecx * 4) = eax; /* 0x12167FDD: mov dword ptr [esi + ecx*4], eax */
    MEM32(edi + eax * 8 + 0x4) = ecx; /* 0x12167FE0: mov dword ptr [edi + eax*8 + 4], ecx */
    ecx = edx; /* 0x12167FE4: mov ecx, edx */
    RECOMP_BACKEDGE();
    goto L_12167F26; /* 0x12167FE6: jmp 0x12167f26 */
L_12167FEB:
    eax = MEM32(ebp + (-0x4)); /* 0x12167FEB: mov eax, dword ptr [ebp - 4] */
    MEM32(esi + ecx * 4) = eax; /* 0x12167FEE: mov dword ptr [esi + ecx*4], eax */
    MEM32(edi + eax * 8 + 0x4) = ecx; /* 0x12167FF1: mov dword ptr [edi + eax*8 + 4], ecx */
    edi = POP32_VAL(esp); /* 0x12167FF5: pop edi */
    esi = POP32_VAL(esp); /* 0x12167FF6: pop esi */
    ebx = POP32_VAL(esp); /* 0x12167FF7: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12167FF8: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12167FF9: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12168001(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12168001u);

L_12168001:
    edi = edi; /* 0x12168001: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12168003: push ebp */
    ebp = esp; /* 0x12168004: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12168006: push ecx */
    PUSH32(esp, ecx); /* 0x12168007: push ecx */
    PUSH32(esp, ebx); /* 0x12168008: push ebx */
    ebx = MEM32(eax + 0x4); /* 0x12168009: mov ebx, dword ptr [eax + 4] */
    PUSH32(esp, esi); /* 0x1216800C: push esi */
    esi = MEM32(eax); /* 0x1216800D: mov esi, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x1216800F: push edi */
    edi = MEM32(esi + ecx * 4); /* 0x12168010: mov edi, dword ptr [esi + ecx*4] */
    edx = ecx; /* 0x12168013: mov edx, ecx */
    goto L_12168064; /* 0x12168015: jmp 0x12168064 */
L_12168017:
    eax = MEM32(ebx + eax * 8); /* 0x12168017: mov eax, dword ptr [ebx + eax*8] */
    MEM32(ebp + (-0x4)) = eax; /* 0x1216801A: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebx + edi * 8); /* 0x1216801D: mov eax, dword ptr [ebx + edi*8] */
    fp_push(*(double*)ADDR(eax + 0x28)); /* 0x12168020: fld qword ptr [eax + 0x28] */
    eax = MEM32(ebp + (-0x4)); /* 0x12168023: mov eax, dword ptr [ebp - 4] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(eax + 0x28)); /* 0x12168026: fcomp qword ptr [eax + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12168029: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1216802B: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1216806E; /* 0x1216802E: je 0x1216806e */
L_12168030:
    eax = MEM32(ebp + (-0x4)); /* 0x12168030: mov eax, dword ptr [ebp - 4] */
    fp_push(*(double*)ADDR(eax + 0x28)); /* 0x12168033: fld qword ptr [eax + 0x28] */
    eax = MEM32(ebx + edi * 8); /* 0x12168036: mov eax, dword ptr [ebx + edi*8] */
    fp_push(*(double*)ADDR(eax + 0x28)); /* 0x12168039: fld qword ptr [eax + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1216803C: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1216803E: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x12168040: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12168058; /* 0x12168043: jp 0x12168058 */
L_12168045:
    eax = MEM32(ebx + edi * 8); /* 0x12168045: mov eax, dword ptr [ebx + edi*8] */
    fp_push(*(double*)ADDR(eax + 0x30)); /* 0x12168048: fld qword ptr [eax + 0x30] */
    eax = MEM32(ebp + (-0x4)); /* 0x1216804B: mov eax, dword ptr [ebp - 4] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(eax + 0x30)); /* 0x1216804E: fcomp qword ptr [eax + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12168051: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x12168053: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1216806E; /* 0x12168056: je 0x1216806e */
L_12168058:
    eax = MEM32(ebp + (-0x8)); /* 0x12168058: mov eax, dword ptr [ebp - 8] */
    MEM32(esi + ecx * 4) = eax; /* 0x1216805B: mov dword ptr [esi + ecx*4], eax */
    MEM32(ebx + eax * 8 + 0x4) = ecx; /* 0x1216805E: mov dword ptr [ebx + eax*8 + 4], ecx */
    ecx = edx; /* 0x12168062: mov ecx, edx */
L_12168064:
    if (1u) _cf = (((edx) >> 0) & 1u); /* 0x12168064: sar edx, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)edx >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    edx = (uint32_t)((int32_t)edx >> 1u);
    eax = MEM32(esi + edx * 4); /* 0x12168066: mov eax, dword ptr [esi + edx*4] */
    MEM32(ebp + (-0x8)) = eax; /* 0x12168069: mov dword ptr [ebp - 8], eax */
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_12168017; /* 0x1216806C: jne 0x12168017 */
L_1216806E:
    MEM32(esi + ecx * 4) = edi; /* 0x1216806E: mov dword ptr [esi + ecx*4], edi */
    MEM32(ebx + edi * 8 + 0x4) = ecx; /* 0x12168071: mov dword ptr [ebx + edi*8 + 4], ecx */
    edi = POP32_VAL(esp); /* 0x12168075: pop edi */
    esi = POP32_VAL(esp); /* 0x12168076: pop esi */
    ebx = POP32_VAL(esp); /* 0x12168077: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12168078: leave  */
    RECOMP_FLAGS_OUT(); esp += 4; { RECOMP_REGS_OUT(); return; } /* 0x12168079: ret  */
    RECOMP_REGS_OUT();
}

void sub_1216807F(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1216807Fu);

L_1216807F:
    edi = edi; /* 0x1216807F: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12168081: push ebp */
    ebp = esp; /* 0x12168082: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x12168084: push ebx */
    PUSH32(esp, esi); /* 0x12168085: push esi */
    PUSH32(esp, edi); /* 0x12168086: push edi */
    edi = MEM32(ebp + 0x8); /* 0x12168087: mov edi, dword ptr [ebp + 8] */
    esi = MEM32(edi + 0x8); /* 0x1216808A: mov esi, dword ptr [edi + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1216808D: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1216808F: inc ebx */
    _flag_k = FK_INC;
    goto L_1216809B; /* 0x12168090: jmp 0x1216809b */
L_12168092:
    PUSH32(esp, edi); /* 0x12168092: push edi */
    ecx = esi; /* 0x12168093: mov ecx, esi */
    RECOMP_CALL(sub_12167F0D); /* 0x12168095: call 0x12167f0d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x1216809A: dec esi */
    _flag_k = FK_DEC;
L_1216809B:
    /* cmp esi, ebx */ /* 0x1216809B: cmp esi, ebx */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_GE(_flag_a, _flag_b)) goto L_12168092; /* 0x1216809D: jge 0x12168092 */
L_1216809F:
    MEM32(edi + 0x14) = ebx; /* 0x1216809F: mov dword ptr [edi + 0x14], ebx */
    edi = POP32_VAL(esp); /* 0x121680A2: pop edi */
    esi = POP32_VAL(esp); /* 0x121680A3: pop esi */
    ebx = POP32_VAL(esp); /* 0x121680A4: pop ebx */
    ebp = POP32_VAL(esp); /* 0x121680A5: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121680A6: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_121680AE(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121680AEu);

L_121680AE:
    edi = edi; /* 0x121680AE: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121680B0: push ebp */
    ebp = esp; /* 0x121680B1: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x121680B3: push ebx */
    PUSH32(esp, edi); /* 0x121680B4: push edi */
    edi = MEM32(ebp + 0x8); /* 0x121680B5: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(edi + 0x8) = MEM32(edi + 0x8) + 1; /* 0x121680B8: inc dword ptr [edi + 8] */
    _flag_k = FK_INC;
    ecx = MEM32(edi + 0x8); /* 0x121680BB: mov ecx, dword ptr [edi + 8] */
    eax = MEM32(edi + 0xC); /* 0x121680BE: mov eax, dword ptr [edi + 0xc] */
    MEM32(ebp + 0x8) = ecx; /* 0x121680C1: mov dword ptr [ebp + 8], ecx */
    /* cmp ecx, eax */ /* 0x121680C4: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_121680FA; /* 0x121680C6: jle 0x121680fa */
L_121680C8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + eax; /* 0x121680C8: add eax, eax */
    _flag_k = FK_ADD;
    MEM32(edi + 0xC) = eax; /* 0x121680CA: mov dword ptr [edi + 0xc], eax */
    eax = eax * 4 + 0x4; /* 0x121680CD: lea eax, [eax*4 + 4] */
    PUSH32(esp, eax); /* 0x121680D4: push eax */
    PUSH32(esp, MEM32(edi)); /* 0x121680D5: push dword ptr [edi] */
    RECOMP_CALL(sub_121BF5B6); /* 0x121680D7: call 0x121bf5b6 */
    RECOMP_FLAGS_IN();
    MEM32(edi) = eax; /* 0x121680DC: mov dword ptr [edi], eax */
    eax = MEM32(edi + 0xC); /* 0x121680DE: mov eax, dword ptr [edi + 0xc] */
    eax = eax * 8 + 0x8; /* 0x121680E1: lea eax, [eax*8 + 8] */
    PUSH32(esp, eax); /* 0x121680E8: push eax */
    PUSH32(esp, MEM32(edi + 0x4)); /* 0x121680E9: push dword ptr [edi + 4] */
    RECOMP_CALL(sub_121BF5B6); /* 0x121680EC: call 0x121bf5b6 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x121680F1: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x121680F4: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM32(edi + 0x4) = eax; /* 0x121680F7: mov dword ptr [edi + 4], eax */
L_121680FA:
    ebx = MEM32(edi + 0x10); /* 0x121680FA: mov ebx, dword ptr [edi + 0x10] */
    /* test ebx, ebx */ /* 0x121680FD: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12168105; /* 0x121680FF: jne 0x12168105 */
L_12168101:
    ebx = ecx; /* 0x12168101: mov ebx, ecx */
    goto L_1216810F; /* 0x12168103: jmp 0x1216810f */
L_12168105:
    eax = MEM32(edi + 0x4); /* 0x12168105: mov eax, dword ptr [edi + 4] */
    eax = MEM32(eax + ebx * 8 + 0x4); /* 0x12168108: mov eax, dword ptr [eax + ebx*8 + 4] */
    MEM32(edi + 0x10) = eax; /* 0x1216810C: mov dword ptr [edi + 0x10], eax */
L_1216810F:
    eax = MEM32(edi); /* 0x1216810F: mov eax, dword ptr [edi] */
    MEM32(eax + ecx * 4) = ebx; /* 0x12168111: mov dword ptr [eax + ecx*4], ebx */
    edx = MEM32(edi + 0x4); /* 0x12168114: mov edx, dword ptr [edi + 4] */
    MEM32(edx + ebx * 8 + 0x4) = ecx; /* 0x12168117: mov dword ptr [edx + ebx*8 + 4], ecx */
    edx = MEM32(ebp + 0xC); /* 0x1216811B: mov edx, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x1216811E: push esi */
    esi = MEM32(edi + 0x4); /* 0x1216811F: mov esi, dword ptr [edi + 4] */
    MEM32(esi + ebx * 8) = edx; /* 0x12168122: mov dword ptr [esi + ebx*8], edx */
    /* cmp MEM32(edi + 0x14), 0 */ /* 0x12168125: cmp dword ptr [edi + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    esi = POP32_VAL(esp); /* 0x12168129: pop esi */
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12168133; /* 0x1216812A: je 0x12168133 */
L_1216812C:
    eax = edi; /* 0x1216812C: mov eax, edi */
    RECOMP_CALL(sub_12168001); /* 0x1216812E: call 0x12168001 */
    RECOMP_FLAGS_IN();
L_12168133:
    edi = POP32_VAL(esp); /* 0x12168133: pop edi */
    eax = ebx; /* 0x12168134: mov eax, ebx */
    ebx = POP32_VAL(esp); /* 0x12168136: pop ebx */
    ebp = POP32_VAL(esp); /* 0x12168137: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12168138: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12168140(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12168140u);

L_12168140:
    edi = edi; /* 0x12168140: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12168142: push ebp */
    ebp = esp; /* 0x12168143: mov ebp, esp */
    PUSH32(esp, ecx); /* 0x12168145: push ecx */
    PUSH32(esp, ecx); /* 0x12168146: push ecx */
    edx = MEM32(ebp + 0x8); /* 0x12168147: mov edx, dword ptr [ebp + 8] */
    eax = MEM32(edx); /* 0x1216814A: mov eax, dword ptr [edx] */
    ecx = MEM32(eax + 0x4); /* 0x1216814C: mov ecx, dword ptr [eax + 4] */
    PUSH32(esp, ebx); /* 0x1216814F: push ebx */
    PUSH32(esp, esi); /* 0x12168150: push esi */
    PUSH32(esp, edi); /* 0x12168151: push edi */
    edi = MEM32(edx + 0x4); /* 0x12168152: mov edi, dword ptr [edx + 4] */
    esi = MEM32(edi + ecx * 8); /* 0x12168155: mov esi, dword ptr [edi + ecx*8] */
    ebx = edx + 0x8; /* 0x12168158: lea ebx, [edx + 8] */
    /* cmp MEM32(ebx), 0 */ /* 0x1216815B: cmp dword ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(ebp + (-0x8)) = eax; /* 0x1216815E: mov dword ptr [ebp - 8], eax */
    if (CMP_LE(_flag_a, _flag_b)) goto L_12168196; /* 0x12168161: jle 0x12168196 */
L_12168163:
    ebx = MEM32(ebx); /* 0x12168163: mov ebx, dword ptr [ebx] */
    eax = MEM32(eax + ebx * 4); /* 0x12168165: mov eax, dword ptr [eax + ebx*4] */
    ebx = MEM32(ebp + (-0x8)); /* 0x12168168: mov ebx, dword ptr [ebp - 8] */
    MEM32(ebx + 0x4) = eax; /* 0x1216816B: mov dword ptr [ebx + 4], eax */
    MEM32(edi + eax * 8 + 0x4) = 1; /* 0x1216816E: mov dword ptr [edi + eax*8 + 4], 1 */
    _flag_a = (uint32_t)(MEM32(edi + ecx * 8)); _flag_b = (uint32_t)(0);
    MEM32(edi + ecx * 8) = MEM32(edi + ecx * 8) & 0; /* 0x12168176: and dword ptr [edi + ecx*8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(edx + 0x10); /* 0x1216817A: mov eax, dword ptr [edx + 0x10] */
    MEM32(edi + ecx * 8 + 0x4) = eax; /* 0x1216817D: mov dword ptr [edi + ecx*8 + 4], eax */
    _flag_a = (uint32_t)(MEM32(edx + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(edx + 0x8) = MEM32(edx + 0x8) - 1; /* 0x12168181: dec dword ptr [edx + 8] */
    _flag_k = FK_DEC;
    /* cmp MEM32(edx + 0x8), 0 */ /* 0x12168184: cmp dword ptr [edx + 8], 0 */
    _flag_a = (uint32_t)(MEM32(edx + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    MEM32(edx + 0x10) = ecx; /* 0x12168188: mov dword ptr [edx + 0x10], ecx */
    if (CMP_LE(_flag_a, _flag_b)) goto L_12168196; /* 0x1216818B: jle 0x12168196 */
L_1216818D:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1216818D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edx); /* 0x1216818F: push edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x12168190: inc ecx */
    _flag_k = FK_INC;
    RECOMP_CALL(sub_12167F0D); /* 0x12168191: call 0x12167f0d */
    RECOMP_FLAGS_IN();
L_12168196:
    edi = POP32_VAL(esp); /* 0x12168196: pop edi */
    eax = esi; /* 0x12168197: mov eax, esi */
    esi = POP32_VAL(esp); /* 0x12168199: pop esi */
    ebx = POP32_VAL(esp); /* 0x1216819A: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1216819B: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1216819C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_121681A4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121681A4u);

L_121681A4:
    edi = edi; /* 0x121681A4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121681A6: push ebp */
    ebp = esp; /* 0x121681A7: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x121681A9: push ebx */
    PUSH32(esp, esi); /* 0x121681AA: push esi */
    esi = MEM32(ebp + 0x8); /* 0x121681AB: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi); /* 0x121681AE: mov eax, dword ptr [esi] */
    ebx = MEM32(esi + 0x4); /* 0x121681B0: mov ebx, dword ptr [esi + 4] */
    PUSH32(esp, edi); /* 0x121681B3: push edi */
    edi = MEM32(ebp + 0xC); /* 0x121681B4: mov edi, dword ptr [ebp + 0xc] */
    edx = MEM32(ebx + edi * 8 + 0x4); /* 0x121681B7: mov edx, dword ptr [ebx + edi*8 + 4] */
    MEM32(ebp + 0x8) = eax; /* 0x121681BB: mov dword ptr [ebp + 8], eax */
    eax = MEM32(esi + 0x8); /* 0x121681BE: mov eax, dword ptr [esi + 8] */
    edi = MEM32(ebp + 0x8); /* 0x121681C1: mov edi, dword ptr [ebp + 8] */
    eax = MEM32(edi + eax * 4); /* 0x121681C4: mov eax, dword ptr [edi + eax*4] */
    MEM32(edi + edx * 4) = eax; /* 0x121681C7: mov dword ptr [edi + edx*4], eax */
    edi = MEM32(ebp + 0xC); /* 0x121681CA: mov edi, dword ptr [ebp + 0xc] */
    MEM32(ebx + eax * 8 + 0x4) = edx; /* 0x121681CD: mov dword ptr [ebx + eax*8 + 4], edx */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(1);
    MEM32(esi + 0x8) = MEM32(esi + 0x8) - 1; /* 0x121681D1: dec dword ptr [esi + 8] */
    _flag_k = FK_DEC;
    /* cmp edx, MEM32(esi + 0x8) */ /* 0x121681D4: cmp edx, dword ptr [esi + 8] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(MEM32(esi + 0x8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1216823C; /* 0x121681D7: jg 0x1216823c */
L_121681D9:
    /* cmp edx, 1 */ /* 0x121681D9: cmp edx, 1 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_12168234; /* 0x121681DC: jle 0x12168234 */
L_121681DE:
    ecx = MEM32(ebp + 0x8); /* 0x121681DE: mov ecx, dword ptr [ebp + 8] */
    eax = edx; /* 0x121681E1: mov eax, edx */
    if (1u) _cf = (((eax) >> 0) & 1u); /* 0x121681E3: sar eax, 1 */
    if (1u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 1u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 1u);
    eax = MEM32(ecx + eax * 4); /* 0x121681E5: mov eax, dword ptr [ecx + eax*4] */
    eax = MEM32(ebx + eax * 8); /* 0x121681E8: mov eax, dword ptr [ebx + eax*8] */
    MEM32(ebp + 0x8) = eax; /* 0x121681EB: mov dword ptr [ebp + 8], eax */
    eax = MEM32(ecx + edx * 4); /* 0x121681EE: mov eax, dword ptr [ecx + edx*4] */
    eax = MEM32(ebx + eax * 8); /* 0x121681F1: mov eax, dword ptr [ebx + eax*8] */
    fp_push(*(double*)ADDR(eax + 0x28)); /* 0x121681F4: fld qword ptr [eax + 0x28] */
    ecx = MEM32(ebp + 0x8); /* 0x121681F7: mov ecx, dword ptr [ebp + 8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0x28)); /* 0x121681FA: fcomp qword ptr [ecx + 0x28] */
    fp_pop();
    MEM32(ebp + 0xC) = eax; /* 0x121681FD: mov dword ptr [ebp + 0xc], eax */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12168200: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x12168202: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12168234; /* 0x12168205: je 0x12168234 */
L_12168207:
    eax = MEM32(ebp + 0xC); /* 0x12168207: mov eax, dword ptr [ebp + 0xc] */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x1216820A: fld qword ptr [ecx + 0x28] */
    fp_push(*(double*)ADDR(eax + 0x28)); /* 0x1216820D: fld qword ptr [eax + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12168210: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12168212: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x12168214: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12168229; /* 0x12168217: jp 0x12168229 */
L_12168219:
    eax = MEM32(ebp + 0xC); /* 0x12168219: mov eax, dword ptr [ebp + 0xc] */
    fp_push(*(double*)ADDR(eax + 0x30)); /* 0x1216821C: fld qword ptr [eax + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0x30)); /* 0x1216821F: fcomp qword ptr [ecx + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12168222: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x12168224: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12168234; /* 0x12168227: je 0x12168234 */
L_12168229:
    ecx = edx; /* 0x12168229: mov ecx, edx */
    eax = esi; /* 0x1216822B: mov eax, esi */
    RECOMP_CALL(sub_12168001); /* 0x1216822D: call 0x12168001 */
    RECOMP_FLAGS_IN();
    goto L_1216823C; /* 0x12168232: jmp 0x1216823c */
L_12168234:
    PUSH32(esp, esi); /* 0x12168234: push esi */
    ecx = edx; /* 0x12168235: mov ecx, edx */
    RECOMP_CALL(sub_12167F0D); /* 0x12168237: call 0x12167f0d */
    RECOMP_FLAGS_IN();
L_1216823C:
    _flag_a = (uint32_t)(MEM32(ebx + edi * 8)); _flag_b = (uint32_t)(0);
    MEM32(ebx + edi * 8) = MEM32(ebx + edi * 8) & 0; /* 0x1216823C: and dword ptr [ebx + edi*8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = MEM32(esi + 0x10); /* 0x12168240: mov eax, dword ptr [esi + 0x10] */
    MEM32(ebx + edi * 8 + 0x4) = eax; /* 0x12168243: mov dword ptr [ebx + edi*8 + 4], eax */
    MEM32(esi + 0x10) = edi; /* 0x12168247: mov dword ptr [esi + 0x10], edi */
    edi = POP32_VAL(esp); /* 0x1216824A: pop edi */
    esi = POP32_VAL(esp); /* 0x1216824B: pop esi */
    ebx = POP32_VAL(esp); /* 0x1216824C: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1216824D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1216824E: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12168256(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12168256u);

L_12168256:
    edi = edi; /* 0x12168256: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12168258: push ebp */
    ebp = esp; /* 0x12168259: mov ebp, esp */
    PUSH32(esp, edi); /* 0x1216825B: push edi */
    PUSH32(esp, 0x1Cu); /* 0x1216825C: push 0x1c */
    RECOMP_CALL(sub_121BF524); /* 0x1216825E: call 0x121bf524 */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x12168263: mov edi, eax */
    ecx = POP32_VAL(esp); /* 0x12168265: pop ecx */
    /* test edi, edi */ /* 0x12168266: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12168299; /* 0x12168268: je 0x12168299 */
L_1216826A:
    PUSH32(esp, esi); /* 0x1216826A: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1216826B: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1216826E: push esi */
    RECOMP_CALL(sub_12167E5A); /* 0x1216826F: call 0x12167e5a */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x80u); /* 0x12168274: push 0x80 */
    MEM32(edi) = eax; /* 0x12168279: mov dword ptr [edi], eax */
    RECOMP_CALL(sub_121BF524); /* 0x1216827B: call 0x121bf524 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0xC) = MEM32(edi + 0xC) & 0; /* 0x12168280: and dword ptr [edi + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(edi + 0x14)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0x14) = MEM32(edi + 0x14) & 0; /* 0x12168284: and dword ptr [edi + 0x14], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    ecx = POP32_VAL(esp); /* 0x12168288: pop ecx */
    MEM32(edi + 0x4) = eax; /* 0x12168289: mov dword ptr [edi + 4], eax */
    MEM32(edi + 0x18) = esi; /* 0x1216828C: mov dword ptr [edi + 0x18], esi */
    MEM32(edi + 0x10) = 0x20u; /* 0x1216828F: mov dword ptr [edi + 0x10], 0x20 */
    eax = edi; /* 0x12168296: mov eax, edi */
    esi = POP32_VAL(esp); /* 0x12168298: pop esi */
L_12168299:
    edi = POP32_VAL(esp); /* 0x12168299: pop edi */
    ebp = POP32_VAL(esp); /* 0x1216829A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x1216829B: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_121682A3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121682A3u);

L_121682A3:
    edi = edi; /* 0x121682A3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121682A5: push ebp */
    ebp = esp; /* 0x121682A6: mov ebp, esp */
    PUSH32(esp, esi); /* 0x121682A8: push esi */
    esi = MEM32(ebp + 0x8); /* 0x121682A9: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(esi)); /* 0x121682AC: push dword ptr [esi] */
    RECOMP_CALL(sub_12167EE2); /* 0x121682AE: call 0x12167ee2 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x8)); /* 0x121682B3: push dword ptr [esi + 8] */
    RECOMP_CALL(sub_121BF586); /* 0x121682B6: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x121682BB: push dword ptr [esi + 4] */
    RECOMP_CALL(sub_121BF586); /* 0x121682BE: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x121682C3: push esi */
    RECOMP_CALL(sub_121BF586); /* 0x121682C4: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x121682C9: add esp, 0xc */
    _flag_k = FK_ADD;
    esi = POP32_VAL(esp); /* 0x121682CC: pop esi */
    ebp = POP32_VAL(esp); /* 0x121682CD: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121682CE: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_121682D6(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121682D6u);

L_121682D6:
    edi = edi; /* 0x121682D6: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121682D8: push ebp */
    ebp = esp; /* 0x121682D9: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x1B0u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x1B0u; /* 0x121682DB: sub esp, 0x1b0 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x121682E1: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x121682E6: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x121682E8: mov dword ptr [ebp - 4], eax */
    PUSH32(esp, ebx); /* 0x121682EB: push ebx */
    PUSH32(esp, esi); /* 0x121682EC: push esi */
    PUSH32(esp, edi); /* 0x121682ED: push edi */
    edi = MEM32(ebp + 0x8); /* 0x121682EE: mov edi, dword ptr [ebp + 8] */
    ebx = MEM32(edi + 0xC); /* 0x121682F1: mov ebx, dword ptr [edi + 0xc] */
    if (2u) _cf = (((ebx) >> 30) & 1u); /* 0x121682F4: shl ebx, 2 */
    if (2u) { _flag_a = recomp_flags_pack((ebx << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ebx = ebx << 2u; /* 0x121682F4: shl ebx, 2 */
    PUSH32(esp, ebx); /* 0x121682F7: push ebx */
    MEM32(ebp + (-0x1AC)) = edi; /* 0x121682F8: mov dword ptr [ebp - 0x1ac], edi */
    esi = ebp + (-0x194); /* 0x121682FE: lea esi, [ebp - 0x194] */
    MEM32(ebp + (-0x1A4)) = 0x7830F0C3u; /* 0x12168304: mov dword ptr [ebp - 0x1a4], 0x7830f0c3 */
    RECOMP_CALL(sub_121BF524); /* 0x1216830E: call 0x121bf524 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12168313: pop ecx */
    MEM32(edi + 0x8) = eax; /* 0x12168314: mov dword ptr [edi + 8], eax */
    /* test eax, eax */ /* 0x12168317: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12168542; /* 0x12168319: je 0x12168542 */
L_1216831F:
    edx = MEM32(edi + 0x4); /* 0x1216831F: mov edx, dword ptr [edi + 4] */
    ebx = ebx + eax + (-0x4); /* 0x12168322: lea ebx, [ebx + eax - 4] */
    ecx = eax; /* 0x12168326: mov ecx, eax */
    /* cmp eax, ebx */ /* 0x12168328: cmp eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_12168338; /* 0x1216832A: ja 0x12168338 */
L_1216832C:
    MEM32(ecx) = edx; /* 0x1216832C: mov dword ptr [ecx], edx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1216832E: add ecx, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x12168331: add edx, 4 */
    _flag_k = FK_ADD;
    /* cmp ecx, ebx */ /* 0x12168334: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_1216832C; /* 0x12168336: jbe 0x1216832c */
L_12168338:
    MEM32(ebp + (-0x194)) = eax; /* 0x12168338: mov dword ptr [ebp - 0x194], eax */
    MEM32(ebp + (-0x190)) = ebx; /* 0x1216833E: mov dword ptr [ebp - 0x190], ebx */
L_12168344:
    edi = MEM32(esi + 0x4); /* 0x12168344: mov edi, dword ptr [esi + 4] */
    ebx = MEM32(esi); /* 0x12168347: mov ebx, dword ptr [esi] */
    MEM32(ebp + (-0x1A0)) = edi; /* 0x12168349: mov dword ptr [ebp - 0x1a0], edi */
    goto L_12168474; /* 0x1216834F: jmp 0x12168474 */
L_12168354:
    eax = MEM32(ebp + (-0x1A4)); /* 0x12168354: mov eax, dword ptr [ebp - 0x1a4] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x5BC19F0Du); /* 0x1216835A: imul eax, eax, 0x5bc19f0d */
    ecx = edi; /* 0x12168360: mov ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x12168362: sub ecx, ebx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x12168364: inc eax */
    _flag_k = FK_INC;
    if (2u) _cf = (((ecx) >> 1) & 1u); /* 0x12168365: sar ecx, 2 */
    if (2u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)ecx >> 2u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    ecx = (uint32_t)((int32_t)ecx >> 2u);
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12168368: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1216836A: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + (-0x1A4)) = eax; /* 0x1216836B: mov dword ptr [ebp - 0x1a4], eax */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)ecx; /* 0x12168371: div ecx */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    eax = MEM32(ebx); /* 0x12168373: mov eax, dword ptr [ebx] */
    ecx = ebx + edx * 4; /* 0x12168375: lea ecx, [ebx + edx*4] */
    edx = MEM32(ecx); /* 0x12168378: mov edx, dword ptr [ecx] */
    MEM32(ebp + (-0x198)) = edx; /* 0x1216837A: mov dword ptr [ebp - 0x198], edx */
    MEM32(ecx) = eax; /* 0x12168380: mov dword ptr [ecx], eax */
    MEM32(ebx) = edx; /* 0x12168382: mov dword ptr [ebx], edx */
    edx = ebx + (-0x4); /* 0x12168384: lea edx, [ebx - 4] */
    ebx = edi + 0x4; /* 0x12168387: lea ebx, [edi + 4] */
    edi = MEM32(ebp + (-0x198)); /* 0x1216838A: mov edi, dword ptr [ebp - 0x198] */
L_12168390:
    ecx = MEM32(edi); /* 0x12168390: mov ecx, dword ptr [edi] */
L_12168392:
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x12168392: fld qword ptr [ecx + 0x28] */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edx = edx + 4; /* 0x12168395: add edx, 4 */
    _flag_k = FK_ADD;
    eax = MEM32(edx); /* 0x12168398: mov eax, dword ptr [edx] */
    eax = MEM32(eax); /* 0x1216839A: mov eax, dword ptr [eax] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(eax + 0x28)); /* 0x1216839C: fcomp qword ptr [eax + 0x28] */
    fp_pop();
    MEM32(ebp + (-0x198)) = eax; /* 0x1216839F: mov dword ptr [ebp - 0x198], eax */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121683A5: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x121683A7: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_121683D2; /* 0x121683AA: je 0x121683d2 */
L_121683AC:
    eax = MEM32(ebp + (-0x198)); /* 0x121683AC: mov eax, dword ptr [ebp - 0x198] */
    fp_push(*(double*)ADDR(eax + 0x28)); /* 0x121683B2: fld qword ptr [eax + 0x28] */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x121683B5: fld qword ptr [ecx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x121683B8: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121683BA: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x121683BC: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_12168392; /* 0x121683BF: jp 0x12168392 */
L_121683C1:
    eax = MEM32(edx); /* 0x121683C1: mov eax, dword ptr [edx] */
    fp_push(*(double*)ADDR(ecx + 0x30)); /* 0x121683C3: fld qword ptr [ecx + 0x30] */
    eax = MEM32(eax); /* 0x121683C6: mov eax, dword ptr [eax] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(eax + 0x30)); /* 0x121683C8: fcomp qword ptr [eax + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121683CB: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x121683CD: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12168390; /* 0x121683D0: jne 0x12168390 */
L_121683D2:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ebx = ebx - 4; /* 0x121683D2: sub ebx, 4 */
    _flag_k = FK_CMP;
    eax = MEM32(ebx); /* 0x121683D5: mov eax, dword ptr [ebx] */
    eax = MEM32(eax); /* 0x121683D7: mov eax, dword ptr [eax] */
    fp_push(*(double*)ADDR(eax + 0x28)); /* 0x121683D9: fld qword ptr [eax + 0x28] */
    MEM32(ebp + (-0x198)) = eax; /* 0x121683DC: mov dword ptr [ebp - 0x198], eax */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0x28)); /* 0x121683E2: fcomp qword ptr [ecx + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121683E5: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x121683E7: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12168412; /* 0x121683EA: je 0x12168412 */
L_121683EC:
    eax = MEM32(ebp + (-0x198)); /* 0x121683EC: mov eax, dword ptr [ebp - 0x198] */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x121683F2: fld qword ptr [ecx + 0x28] */
    fp_push(*(double*)ADDR(eax + 0x28)); /* 0x121683F5: fld qword ptr [eax + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x121683F8: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121683FA: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x121683FC: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_121683D2; /* 0x121683FF: jp 0x121683d2 */
L_12168401:
    eax = MEM32(ebx); /* 0x12168401: mov eax, dword ptr [ebx] */
    eax = MEM32(eax); /* 0x12168403: mov eax, dword ptr [eax] */
    fp_push(*(double*)ADDR(eax + 0x30)); /* 0x12168405: fld qword ptr [eax + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0x30)); /* 0x12168408: fcomp qword ptr [ecx + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1216840B: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x1216840D: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121683D2; /* 0x12168410: jne 0x121683d2 */
L_12168412:
    eax = MEM32(ebx); /* 0x12168412: mov eax, dword ptr [ebx] */
    ecx = MEM32(edx); /* 0x12168414: mov ecx, dword ptr [edx] */
    MEM32(edx) = eax; /* 0x12168416: mov dword ptr [edx], eax */
    MEM32(ebx) = ecx; /* 0x12168418: mov dword ptr [ebx], ecx */
    /* cmp edx, ebx */ /* 0x1216841A: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12168390; /* 0x1216841C: jb 0x12168390 */
L_12168422:
    eax = MEM32(edx); /* 0x12168422: mov eax, dword ptr [edx] */
    edi = MEM32(ebp + (-0x1A0)); /* 0x12168424: mov edi, dword ptr [ebp - 0x1a0] */
    MEM32(edx) = ecx; /* 0x1216842A: mov dword ptr [edx], ecx */
    MEM32(ebx) = eax; /* 0x1216842C: mov dword ptr [ebx], eax */
    eax = edx; /* 0x1216842E: mov eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + (-0x19C)));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - MEM32(ebp + (-0x19C)); /* 0x12168430: sub eax, dword ptr [ebp - 0x19c] */
    _flag_k = FK_CMP;
    ecx = edi; /* 0x12168436: mov ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - ebx; /* 0x12168438: sub ecx, ebx */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xFFFFFFFCu);
    ecx = ecx & 0xFFFFFFFCu; /* 0x1216843A: and ecx, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFCu);
    eax = eax & 0xFFFFFFFCu; /* 0x1216843D: and eax, 0xfffffffc */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x12168440: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_12168460; /* 0x12168442: jge 0x12168460 */
L_12168444:
    eax = ebx + 0x4; /* 0x12168444: lea eax, [ebx + 4] */
    ebx = MEM32(ebp + (-0x19C)); /* 0x12168447: mov ebx, dword ptr [ebp - 0x19c] */
    MEM32(esi + 0x4) = edi; /* 0x1216844D: mov dword ptr [esi + 4], edi */
    edi = edx + (-0x4); /* 0x12168450: lea edi, [edx - 4] */
    MEM32(esi) = eax; /* 0x12168453: mov dword ptr [esi], eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x12168455: add esi, 8 */
    _flag_k = FK_ADD;
    MEM32(ebp + (-0x1A0)) = edi; /* 0x12168458: mov dword ptr [ebp - 0x1a0], edi */
    goto L_1216847A; /* 0x1216845E: jmp 0x1216847a */
L_12168460:
    eax = MEM32(ebp + (-0x19C)); /* 0x12168460: mov eax, dword ptr [ebp - 0x19c] */
    MEM32(esi) = eax; /* 0x12168466: mov dword ptr [esi], eax */
    eax = edx + (-0x4); /* 0x12168468: lea eax, [edx - 4] */
    MEM32(esi + 0x4) = eax; /* 0x1216846B: mov dword ptr [esi + 4], eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 8; /* 0x1216846E: add esi, 8 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 4; /* 0x12168471: add ebx, 4 */
    _flag_k = FK_ADD;
L_12168474:
    MEM32(ebp + (-0x19C)) = ebx; /* 0x12168474: mov dword ptr [ebp - 0x19c], ebx */
L_1216847A:
    eax = ebx + 0x28; /* 0x1216847A: lea eax, [ebx + 0x28] */
    /* cmp edi, eax */ /* 0x1216847D: cmp edi, eax */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_12168354; /* 0x1216847F: ja 0x12168354 */
L_12168485:
    ecx = ebx + 0x4; /* 0x12168485: lea ecx, [ebx + 4] */
    goto L_12168509; /* 0x12168488: jmp 0x12168509 */
L_1216848A:
    eax = MEM32(ecx); /* 0x1216848A: mov eax, dword ptr [ecx] */
    MEM32(ebp + (-0x19C)) = eax; /* 0x1216848C: mov dword ptr [ebp - 0x19c], eax */
    edx = ecx; /* 0x12168492: mov edx, ecx */
    /* cmp ecx, ebx */ /* 0x12168494: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12168504; /* 0x12168496: jbe 0x12168504 */
L_12168498:
    edi = eax; /* 0x12168498: mov edi, eax */
L_1216849A:
    eax = MEM32(edi); /* 0x1216849A: mov eax, dword ptr [edi] */
    ecx = edx + (-0x4); /* 0x1216849C: lea ecx, [edx - 4] */
    MEM32(ebp + (-0x1B0)) = ecx; /* 0x1216849F: mov dword ptr [ebp - 0x1b0], ecx */
    ecx = MEM32(ecx); /* 0x121684A5: mov ecx, dword ptr [ecx] */
    MEM32(ebp + (-0x1A8)) = ecx; /* 0x121684A7: mov dword ptr [ebp - 0x1a8], ecx */
    ecx = MEM32(ecx); /* 0x121684AD: mov ecx, dword ptr [ecx] */
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x121684AF: fld qword ptr [ecx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(eax + 0x28)); /* 0x121684B2: fcomp qword ptr [eax + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121684B5: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x121684B7: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_121684F2; /* 0x121684BA: je 0x121684f2 */
L_121684BC:
    eax = MEM32(edi); /* 0x121684BC: mov eax, dword ptr [edi] */
    fp_push(*(double*)ADDR(eax + 0x28)); /* 0x121684BE: fld qword ptr [eax + 0x28] */
    ecx = MEM32(ebp + (-0x1A8)); /* 0x121684C1: mov ecx, dword ptr [ebp - 0x1a8] */
    eax = MEM32(ecx); /* 0x121684C7: mov eax, dword ptr [ecx] */
    fp_push(*(double*)ADDR(eax + 0x28)); /* 0x121684C9: fld qword ptr [eax + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x121684CC: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121684CE: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x121684D0: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_121684E6; /* 0x121684D3: jp 0x121684e6 */
L_121684D5:
    eax = MEM32(ecx); /* 0x121684D5: mov eax, dword ptr [ecx] */
    fp_push(*(double*)ADDR(eax + 0x30)); /* 0x121684D7: fld qword ptr [eax + 0x30] */
    eax = MEM32(edi); /* 0x121684DA: mov eax, dword ptr [edi] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(eax + 0x30)); /* 0x121684DC: fcomp qword ptr [eax + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121684DF: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x121684E1: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_121684F2; /* 0x121684E4: je 0x121684f2 */
L_121684E6:
    MEM32(edx) = ecx; /* 0x121684E6: mov dword ptr [edx], ecx */
    edx = MEM32(ebp + (-0x1B0)); /* 0x121684E8: mov edx, dword ptr [ebp - 0x1b0] */
    /* cmp edx, ebx */ /* 0x121684EE: cmp edx, ebx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_A(_flag_a, _flag_b)) goto L_1216849A; /* 0x121684F0: ja 0x1216849a */
L_121684F2:
    ecx = MEM32(ebp + (-0x198)); /* 0x121684F2: mov ecx, dword ptr [ebp - 0x198] */
    edi = MEM32(ebp + (-0x1A0)); /* 0x121684F8: mov edi, dword ptr [ebp - 0x1a0] */
    eax = MEM32(ebp + (-0x19C)); /* 0x121684FE: mov eax, dword ptr [ebp - 0x19c] */
L_12168504:
    MEM32(edx) = eax; /* 0x12168504: mov dword ptr [edx], eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x12168506: add ecx, 4 */
    _flag_k = FK_ADD;
L_12168509:
    MEM32(ebp + (-0x198)) = ecx; /* 0x12168509: mov dword ptr [ebp - 0x198], ecx */
    /* cmp ecx, edi */ /* 0x1216850F: cmp ecx, edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_BE(_flag_a, _flag_b)) goto L_1216848A; /* 0x12168511: jbe 0x1216848a */
L_12168517:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esi = esi - 8; /* 0x12168517: sub esi, 8 */
    _flag_k = FK_CMP;
    eax = ebp + (-0x194); /* 0x1216851A: lea eax, [ebp - 0x194] */
    /* cmp esi, eax */ /* 0x12168520: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_12168344; /* 0x12168522: jae 0x12168344 */
L_12168528:
    edi = MEM32(ebp + (-0x1AC)); /* 0x12168528: mov edi, dword ptr [ebp - 0x1ac] */
    eax = MEM32(edi + 0xC); /* 0x1216852E: mov eax, dword ptr [edi + 0xc] */
    PUSH32(esp, MEM32(edi)); /* 0x12168531: push dword ptr [edi] */
    MEM32(edi + 0x10) = eax; /* 0x12168533: mov dword ptr [edi + 0x10], eax */
    MEM32(edi + 0x14) = 1; /* 0x12168536: mov dword ptr [edi + 0x14], 1 */
    RECOMP_CALL(sub_1216807F); /* 0x1216853D: call 0x1216807f */
    RECOMP_FLAGS_IN();
L_12168542:
    ecx = MEM32(ebp + (-0x4)); /* 0x12168542: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x12168545: pop edi */
    esi = POP32_VAL(esp); /* 0x12168546: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x12168547: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x12168549: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x1216854A: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1216854F: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12168550: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12168558(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12168558u);

L_12168558:
    edi = edi; /* 0x12168558: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1216855A: push ebp */
    ebp = esp; /* 0x1216855B: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1216855D: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1216855E: mov esi, dword ptr [ebp + 8] */
    /* cmp MEM32(esi + 0x14), 0 */ /* 0x12168561: cmp dword ptr [esi + 0x14], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x14)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12168573; /* 0x12168565: je 0x12168573 */
L_12168567:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12168567: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(esi)); /* 0x1216856A: push dword ptr [esi] */
    RECOMP_CALL(sub_121680AE); /* 0x1216856C: call 0x121680ae */
    RECOMP_FLAGS_IN();
    goto L_121685AA; /* 0x12168571: jmp 0x121685aa */
L_12168573:
    ecx = MEM32(esi + 0x10); /* 0x12168573: mov ecx, dword ptr [esi + 0x10] */
    PUSH32(esp, edi); /* 0x12168576: push edi */
    edi = MEM32(esi + 0xC); /* 0x12168577: mov edi, dword ptr [esi + 0xc] */
    eax = edi + 0x1; /* 0x1216857A: lea eax, [edi + 1] */
    MEM32(esi + 0xC) = eax; /* 0x1216857D: mov dword ptr [esi + 0xc], eax */
    /* cmp eax, ecx */ /* 0x12168580: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1216859B; /* 0x12168582: jl 0x1216859b */
L_12168584:
    eax = ecx + ecx; /* 0x12168584: lea eax, [ecx + ecx] */
    MEM32(esi + 0x10) = eax; /* 0x12168587: mov dword ptr [esi + 0x10], eax */
    if (2u) _cf = (((eax) >> 30) & 1u); /* 0x1216858A: shl eax, 2 */
    if (2u) { _flag_a = recomp_flags_pack((eax << 2u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 2u; /* 0x1216858A: shl eax, 2 */
    PUSH32(esp, eax); /* 0x1216858D: push eax */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x1216858E: push dword ptr [esi + 4] */
    RECOMP_CALL(sub_121BF5B6); /* 0x12168591: call 0x121bf5b6 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12168596: pop ecx */
    ecx = POP32_VAL(esp); /* 0x12168597: pop ecx */
    MEM32(esi + 0x4) = eax; /* 0x12168598: mov dword ptr [esi + 4], eax */
L_1216859B:
    eax = MEM32(ebp + 0xC); /* 0x1216859B: mov eax, dword ptr [ebp + 0xc] */
    ecx = MEM32(esi + 0x4); /* 0x1216859E: mov ecx, dword ptr [esi + 4] */
    MEM32(ecx + edi * 4) = eax; /* 0x121685A1: mov dword ptr [ecx + edi*4], eax */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x121685A4: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - edi; /* 0x121685A7: sub eax, edi */
    _flag_k = FK_CMP;
    edi = POP32_VAL(esp); /* 0x121685A9: pop edi */
L_121685AA:
    esi = POP32_VAL(esp); /* 0x121685AA: pop esi */
    ebp = POP32_VAL(esp); /* 0x121685AB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121685AC: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_121685B4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121685B4u);

L_121685B4:
    edi = edi; /* 0x121685B4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121685B6: push ebp */
    ebp = esp; /* 0x121685B7: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x121685B9: mov ecx, dword ptr [ebp + 8] */
    edx = ecx + 0xC; /* 0x121685BC: lea edx, [ecx + 0xc] */
    eax = MEM32(edx); /* 0x121685BF: mov eax, dword ptr [edx] */
    /* test eax, eax */ /* 0x121685C1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121685CE; /* 0x121685C3: jne 0x121685ce */
L_121685C5:
    PUSH32(esp, MEM32(ecx)); /* 0x121685C5: push dword ptr [ecx] */
    RECOMP_CALL(sub_12168140); /* 0x121685C7: call 0x12168140 */
    RECOMP_FLAGS_IN();
    goto L_12168634; /* 0x121685CC: jmp 0x12168634 */
L_121685CE:
    PUSH32(esp, ebx); /* 0x121685CE: push ebx */
    ebx = MEM32(ecx + 0x8); /* 0x121685CF: mov ebx, dword ptr [ecx + 8] */
    eax = MEM32(ebx + eax * 4 + (-0x4)); /* 0x121685D2: mov eax, dword ptr [ebx + eax*4 - 4] */
    PUSH32(esp, esi); /* 0x121685D6: push esi */
    esi = MEM32(eax); /* 0x121685D7: mov esi, dword ptr [eax] */
    PUSH32(esp, edi); /* 0x121685D9: push edi */
    edi = MEM32(ecx); /* 0x121685DA: mov edi, dword ptr [ecx] */
    /* cmp MEM32(edi + 0x8), 0 */ /* 0x121685DC: cmp dword ptr [edi + 8], 0 */
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1216861E; /* 0x121685E0: je 0x1216861e */
L_121685E2:
    eax = MEM32(edi); /* 0x121685E2: mov eax, dword ptr [edi] */
    fp_push(*(double*)ADDR(esi + 0x28)); /* 0x121685E4: fld qword ptr [esi + 0x28] */
    ecx = MEM32(eax + 0x4); /* 0x121685E7: mov ecx, dword ptr [eax + 4] */
    eax = MEM32(edi + 0x4); /* 0x121685EA: mov eax, dword ptr [edi + 4] */
    ecx = MEM32(eax + ecx * 8); /* 0x121685ED: mov ecx, dword ptr [eax + ecx*8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0x28)); /* 0x121685F0: fcomp qword ptr [ecx + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121685F3: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x121685F5: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12168616; /* 0x121685F8: je 0x12168616 */
L_121685FA:
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x121685FA: fld qword ptr [ecx + 0x28] */
    fp_push(*(double*)ADDR(esi + 0x28)); /* 0x121685FD: fld qword ptr [esi + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12168600: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12168602: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x12168604: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1216861E; /* 0x12168607: jp 0x1216861e */
L_12168609:
    fp_push(*(double*)ADDR(esi + 0x30)); /* 0x12168609: fld qword ptr [esi + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0x30)); /* 0x1216860C: fcomp qword ptr [ecx + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1216860F: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x12168611: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1216861E; /* 0x12168614: jne 0x1216861e */
L_12168616:
    PUSH32(esp, edi); /* 0x12168616: push edi */
    RECOMP_CALL(sub_12168140); /* 0x12168617: call 0x12168140 */
    RECOMP_FLAGS_IN();
    goto L_12168631; /* 0x1216861C: jmp 0x12168631 */
L_1216861E:
    _flag_a = (uint32_t)(MEM32(edx)); _flag_b = (uint32_t)(1);
    MEM32(edx) = MEM32(edx) - 1; /* 0x1216861E: dec dword ptr [edx] */
    _flag_k = FK_DEC;
    ecx = MEM32(edx); /* 0x12168620: mov ecx, dword ptr [edx] */
    /* test ecx, ecx */ /* 0x12168622: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1216862F; /* 0x12168624: jle 0x1216862f */
L_12168626:
    ecx = MEM32(ebx + ecx * 4 + (-0x4)); /* 0x12168626: mov ecx, dword ptr [ebx + ecx*4 - 4] */
    /* cmp MEM32(ecx), 0 */ /* 0x1216862A: cmp dword ptr [ecx], 0 */
    _flag_a = (uint32_t)(MEM32(ecx)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1216861E; /* 0x1216862D: je 0x1216861e */
L_1216862F:
    eax = esi; /* 0x1216862F: mov eax, esi */
L_12168631:
    edi = POP32_VAL(esp); /* 0x12168631: pop edi */
    esi = POP32_VAL(esp); /* 0x12168632: pop esi */
    ebx = POP32_VAL(esp); /* 0x12168633: pop ebx */
L_12168634:
    ebp = POP32_VAL(esp); /* 0x12168634: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12168635: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1216863D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1216863Du);

L_1216863D:
    edi = edi; /* 0x1216863D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1216863F: push ebp */
    ebp = esp; /* 0x12168640: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x12168642: mov ecx, dword ptr [ebp + 8] */
    edx = MEM32(ecx + 0xC); /* 0x12168645: mov edx, dword ptr [ecx + 0xc] */
    /* test edx, edx */ /* 0x12168648: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1216865B; /* 0x1216864A: jne 0x1216865b */
L_1216864C:
    edx = MEM32(ecx); /* 0x1216864C: mov edx, dword ptr [ecx] */
    eax = MEM32(edx); /* 0x1216864E: mov eax, dword ptr [edx] */
    ecx = MEM32(eax + 0x4); /* 0x12168650: mov ecx, dword ptr [eax + 4] */
    eax = MEM32(edx + 0x4); /* 0x12168653: mov eax, dword ptr [edx + 4] */
    eax = MEM32(eax + ecx * 8); /* 0x12168656: mov eax, dword ptr [eax + ecx*8] */
    goto L_121686A8; /* 0x12168659: jmp 0x121686a8 */
L_1216865B:
    eax = MEM32(ecx + 0x8); /* 0x1216865B: mov eax, dword ptr [ecx + 8] */
    eax = MEM32(eax + edx * 4 + (-0x4)); /* 0x1216865E: mov eax, dword ptr [eax + edx*4 - 4] */
    edx = MEM32(eax); /* 0x12168662: mov edx, dword ptr [eax] */
    PUSH32(esp, esi); /* 0x12168664: push esi */
    esi = MEM32(ecx); /* 0x12168665: mov esi, dword ptr [ecx] */
    /* cmp MEM32(esi + 0x8), 0 */ /* 0x12168667: cmp dword ptr [esi + 8], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121686A5; /* 0x1216866B: je 0x121686a5 */
L_1216866D:
    eax = MEM32(esi); /* 0x1216866D: mov eax, dword ptr [esi] */
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x1216866F: fld qword ptr [edx + 0x28] */
    ecx = MEM32(eax + 0x4); /* 0x12168672: mov ecx, dword ptr [eax + 4] */
    eax = MEM32(esi + 0x4); /* 0x12168675: mov eax, dword ptr [esi + 4] */
    ecx = MEM32(eax + ecx * 8); /* 0x12168678: mov ecx, dword ptr [eax + ecx*8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0x28)); /* 0x1216867B: fcomp qword ptr [ecx + 0x28] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1216867E: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x12168680: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_121686A1; /* 0x12168683: je 0x121686a1 */
L_12168685:
    fp_push(*(double*)ADDR(ecx + 0x28)); /* 0x12168685: fld qword ptr [ecx + 0x28] */
    fp_push(*(double*)ADDR(edx + 0x28)); /* 0x12168688: fld qword ptr [edx + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1216868B: fucompp  */
    fp_pop(); fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1216868D: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1216868F: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_121686A5; /* 0x12168692: jp 0x121686a5 */
L_12168694:
    fp_push(*(double*)ADDR(edx + 0x30)); /* 0x12168694: fld qword ptr [edx + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ecx + 0x30)); /* 0x12168697: fcomp qword ptr [ecx + 0x30] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1216869A: fnstsw ax */
    /* test HI8(eax), 1 */ /* 0x1216869C: test ah, 1 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121686A5; /* 0x1216869F: jne 0x121686a5 */
L_121686A1:
    eax = ecx; /* 0x121686A1: mov eax, ecx */
    goto L_121686A7; /* 0x121686A3: jmp 0x121686a7 */
L_121686A5:
    eax = edx; /* 0x121686A5: mov eax, edx */
L_121686A7:
    esi = POP32_VAL(esp); /* 0x121686A7: pop esi */
L_121686A8:
    ebp = POP32_VAL(esp); /* 0x121686A8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121686A9: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_121686B1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121686B1u);

L_121686B1:
    edi = edi; /* 0x121686B1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121686B3: push ebp */
    ebp = esp; /* 0x121686B4: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x121686B6: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x121686B9: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_121686CA; /* 0x121686BB: js 0x121686ca */
L_121686BD:
    PUSH32(esp, eax); /* 0x121686BD: push eax */
    eax = MEM32(ebp + 0x8); /* 0x121686BE: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(eax)); /* 0x121686C1: push dword ptr [eax] */
    RECOMP_CALL(sub_121681A4); /* 0x121686C3: call 0x121681a4 */
    RECOMP_FLAGS_IN();
    goto L_121686FE; /* 0x121686C8: jmp 0x121686fe */
L_121686CA:
    edx = MEM32(ebp + 0x8); /* 0x121686CA: mov edx, dword ptr [ebp + 8] */
    ecx = MEM32(edx + 0x4); /* 0x121686CD: mov ecx, dword ptr [edx + 4] */
    eax = eax * 4 + 0x4; /* 0x121686D0: lea eax, [eax*4 + 4] */
    PUSH32(esp, edi); /* 0x121686D7: push edi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - eax; /* 0x121686D8: sub ecx, eax */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edi = 0; /* 0x121686DA: xor edi, edi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx) = edi; /* 0x121686DC: mov dword ptr [ecx], edi */
    /* cmp MEM32(edx + 0xC), edi */ /* 0x121686DE: cmp dword ptr [edx + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(edx + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_121686FD; /* 0x121686E1: jle 0x121686fd */
L_121686E3:
    PUSH32(esp, esi); /* 0x121686E3: push esi */
    esi = MEM32(edx + 0x8); /* 0x121686E4: mov esi, dword ptr [edx + 8] */
L_121686E7:
    ecx = MEM32(edx + 0xC); /* 0x121686E7: mov ecx, dword ptr [edx + 0xc] */
    eax = MEM32(esi + ecx * 4 + (-0x4)); /* 0x121686EA: mov eax, dword ptr [esi + ecx*4 - 4] */
    /* cmp MEM32(eax), edi */ /* 0x121686EE: cmp dword ptr [eax], edi */
    _flag_a = (uint32_t)(MEM32(eax)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121686FC; /* 0x121686F0: jne 0x121686fc */
L_121686F2:
    eax = ecx + (-0x1); /* 0x121686F2: lea eax, [ecx - 1] */
    MEM32(edx + 0xC) = eax; /* 0x121686F5: mov dword ptr [edx + 0xc], eax */
    /* cmp eax, edi */ /* 0x121686F8: cmp eax, edi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_G(_flag_a, _flag_b)) goto L_121686E7; /* 0x121686FA: jg 0x121686e7 */
L_121686FC:
    esi = POP32_VAL(esp); /* 0x121686FC: pop esi */
L_121686FD:
    edi = POP32_VAL(esp); /* 0x121686FD: pop edi */
L_121686FE:
    ebp = POP32_VAL(esp); /* 0x121686FE: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121686FF: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12168707(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12168707u);

L_12168707:
    edi = edi; /* 0x12168707: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12168709: push ebp */
    ebp = esp; /* 0x1216870A: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1216870C: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x1216870D: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1216870F: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x12168711: push ebx */
L_12168712:
    ebx = (uint32_t)MEM8(edi + esi + 0x11C); /* 0x12168712: movzx ebx, byte ptr [edi + esi + 0x11c] */
    eax = ebx + (-0x41); /* 0x1216871A: lea eax, [ebx - 0x41] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi + 1; /* 0x1216871D: inc esi */
    _flag_k = FK_INC;
    /* cmp eax, 0x39u */ /* 0x1216871E: cmp eax, 0x39 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x39u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_12168733; /* 0x12168721: ja 0x12168733 */
L_12168723:
    /* cmp ebx, 0x5Au */ /* 0x12168723: cmp ebx, 0x5a */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x5Au);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1216872D; /* 0x12168726: jle 0x1216872d */
L_12168728:
    /* cmp ebx, 0x61u */ /* 0x12168728: cmp ebx, 0x61 */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x61u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_12168733; /* 0x1216872B: jl 0x12168733 */
L_1216872D:
    MEM8(ecx + edx) = (uint8_t)(LO8(ebx)); /* 0x1216872D: mov byte ptr [ecx + edx], bl */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x12168730: inc ecx */
    _flag_k = FK_INC;
    goto L_1216875E; /* 0x12168731: jmp 0x1216875e */
L_12168733:
    eax = ebx; /* 0x12168733: mov eax, ebx */
    if (4u) _cf = (((eax) >> 3) & 1u); /* 0x12168735: sar eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack(((uint32_t)((int32_t)eax >> 4u)), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = (uint32_t)((int32_t)eax >> 4u);
    MEM8(ecx + edx) = (uint8_t)(0x5Bu); /* 0x12168738: mov byte ptr [ecx + edx], 0x5b */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    eax = eax & 0xFu; /* 0x1216873C: and eax, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, MEM8(eax + 0x120134E0)); /* 0x1216873F: mov al, byte ptr [eax + 0x120134e0] */
    MEM8(ecx + edx + 0x1) = (uint8_t)(LO8(eax)); /* 0x12168745: mov byte ptr [ecx + edx + 1], al */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFu);
    ebx = ebx & 0xFu; /* 0x12168749: and ebx, 0xf */
    _cf = 0;
    _flag_k = FK_TEST;
    SET_LO8(eax, MEM8(ebx + 0x120134E0)); /* 0x1216874C: mov al, byte ptr [ebx + 0x120134e0] */
    MEM8(ecx + edx + 0x2) = (uint8_t)(LO8(eax)); /* 0x12168752: mov byte ptr [ecx + edx + 2], al */
    MEM8(ecx + edx + 0x3) = (uint8_t)(0x5Du); /* 0x12168756: mov byte ptr [ecx + edx + 3], 0x5d */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 4; /* 0x1216875B: add ecx, 4 */
    _flag_k = FK_ADD;
L_1216875E:
    /* cmp esi, 4 */ /* 0x1216875E: cmp esi, 4 */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_12168712; /* 0x12168761: jl 0x12168712 */
L_12168763:
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x12168763: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    ebx = POP32_VAL(esp); /* 0x12168767: pop ebx */
    if (CMP_NE(_flag_a, _flag_b)) goto L_12168770; /* 0x12168768: jne 0x12168770 */
L_1216876A:
    MEM8(ecx + edx) = (uint8_t)(0); /* 0x1216876A: mov byte ptr [ecx + edx], 0 */
    goto L_12168794; /* 0x1216876E: jmp 0x12168794 */
L_12168770:
    PUSH32(esp, 0x3Fu); /* 0x12168770: push 0x3f */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12168772: push dword ptr [ebp + 8] */
    MEM16(ecx + edx) = (uint16_t)(0x203Au); /* 0x12168775: mov word ptr [ecx + edx], 0x203a */
    PUSH32(esp, 0x52u); /* 0x1216877B: push 0x52 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1216877D: add ecx, 2 */
    _flag_k = FK_ADD;
    eax = POP32_VAL(esp); /* 0x12168780: pop eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x12168781: sub eax, ecx */
    _flag_k = FK_CMP;
    esi = ecx + edx; /* 0x12168783: lea esi, [ecx + edx] */
    PUSH32(esp, eax); /* 0x12168786: push eax */
    PUSH32(esp, esi); /* 0x12168787: push esi */
    RECOMP_CALL(sub_121BEF00); /* 0x12168788: call 0x121bef00 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x1216878D: add esp, 0x10 */
    _flag_k = FK_ADD;
    MEM8(esi + 0x3F) = (uint8_t)(0); /* 0x12168790: mov byte ptr [esi + 0x3f], 0 */
L_12168794:
    esi = POP32_VAL(esp); /* 0x12168794: pop esi */
    ebp = POP32_VAL(esp); /* 0x12168795: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12168796: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_1216879E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1216879Eu);

L_1216879E:
    edi = edi; /* 0x1216879E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121687A0: push ebp */
    ebp = esp; /* 0x121687A1: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x121687A3: mov ecx, dword ptr [ebp + 8] */
    eax = MEM32(ebp + 0xC); /* 0x121687A6: mov eax, dword ptr [ebp + 0xc] */
    MEM32(ecx + 0x48) = eax; /* 0x121687A9: mov dword ptr [ecx + 0x48], eax */
    eax = MEM32(ebp + 0x10); /* 0x121687AC: mov eax, dword ptr [ebp + 0x10] */
    MEM32(ecx + 0x40) = eax; /* 0x121687AF: mov dword ptr [ecx + 0x40], eax */
    eax = MEM32(ebp + 0x14); /* 0x121687B2: mov eax, dword ptr [ebp + 0x14] */
    MEM32(ecx + 0x44) = eax; /* 0x121687B5: mov dword ptr [ecx + 0x44], eax */
    ebp = POP32_VAL(esp); /* 0x121687B8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x121687B9: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_121687C1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121687C1u);

L_121687C1:
    edi = edi; /* 0x121687C1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121687C3: push ebp */
    ebp = esp; /* 0x121687C4: mov ebp, esp */
    PUSH32(esp, esi); /* 0x121687C6: push esi */
    esi = MEM32(ebp + 0x8); /* 0x121687C7: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x121687CA: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121687DB; /* 0x121687CC: je 0x121687db */
L_121687CE:
    eax = MEM32(esi + 0x40); /* 0x121687CE: mov eax, dword ptr [esi + 0x40] */
    /* test eax, eax */ /* 0x121687D1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121687DB; /* 0x121687D3: je 0x121687db */
L_121687D5:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x121687D5: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x121687D8: push esi */
    RECOMP_ICALL(eax); /* 0x121687D9: call eax */
    RECOMP_FLAGS_IN();
L_121687DB:
    PUSH32(esp, 1); /* 0x121687DB: push 1 */
    PUSH32(esp, esi); /* 0x121687DD: push esi */
    RECOMP_CALL(sub_121BF60C); /* 0x121687DE: call 0x121bf60c */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x121687E3u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_121687E9(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121687E9u);

L_121687E9:
    edi = edi; /* 0x121687E9: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121687EB: push ebp */
    ebp = esp; /* 0x121687EC: mov ebp, esp */
    ecx = MEM32(ebp + 0xC); /* 0x121687EE: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121687F1: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM8(ecx), 0x23u */ /* 0x121687F3: cmp byte ptr [ecx], 0x23 */
    _flag_a = (uint32_t)(MEM8(ecx)) << 24; _flag_b = (uint32_t)(0x23u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12168805; /* 0x121687F6: jne 0x12168805 */
L_121687F8:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x121687F8: inc eax */
    _flag_k = FK_INC;
L_121687F9:
    /* cmp MEM8(eax + ecx), 0x20u */ /* 0x121687F9: cmp byte ptr [eax + ecx], 0x20 */
    _flag_a = (uint32_t)(MEM8(eax + ecx)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12168805; /* 0x121687FD: je 0x12168805 */
L_121687FF:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x121687FF: inc eax */
    _flag_k = FK_INC;
    /* cmp eax, 0xFu */ /* 0x12168800: cmp eax, 0xf */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_121687F9; /* 0x12168803: jl 0x121687f9 */
L_12168805:
    edx = MEM32(ebp + 0x8); /* 0x12168805: mov edx, dword ptr [ebp + 8] */
    /* test edx, edx */ /* 0x12168808: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1216881B; /* 0x1216880A: je 0x1216881b */
L_1216880C:
    PUSH32(esp, esi); /* 0x1216880C: push esi */
    esi = MEM32(edx + 0x44); /* 0x1216880D: mov esi, dword ptr [edx + 0x44] */
    /* test esi, esi */ /* 0x12168810: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1216881A; /* 0x12168812: je 0x1216881a */
L_12168814:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x12168814: add eax, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x12168816: push eax */
    PUSH32(esp, edx); /* 0x12168817: push edx */
    RECOMP_ICALL(esi); /* 0x12168818: call esi */
    RECOMP_FLAGS_IN();
L_1216881A:
    esi = POP32_VAL(esp); /* 0x1216881A: pop esi */
L_1216881B:
    ebp = POP32_VAL(esp); /* 0x1216881B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1216881C: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12168824(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12168824u);

L_12168824:
    edi = edi; /* 0x12168824: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12168826: push ebp */
    ebp = esp; /* 0x12168827: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x58u; /* 0x12168829: sub esp, 0x58 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x1216882C: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x12168831: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x12168833: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x12168836: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x12168839: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1216883A: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x1216883D: push eax */
    edx = ebp + (-0x58); /* 0x1216883E: lea edx, [ebp - 0x58] */
    RECOMP_CALL(sub_12168707); /* 0x12168841: call 0x12168707 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x58); /* 0x12168846: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x12168849: push eax */
    PUSH32(esp, edi); /* 0x1216884A: push edi */
    RECOMP_CALL(sub_121687C1); /* 0x1216884B: call 0x121687c1 */
    RECOMP_FLAGS_IN();
    void_lift_trap(0x12168850u, "int3 ");
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_12168856(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12168856u);

L_12168856:
    edi = edi; /* 0x12168856: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12168858: push ebp */
    ebp = esp; /* 0x12168859: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x58u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x58u; /* 0x1216885B: sub esp, 0x58 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x1216885E: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x12168863: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x12168865: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0xC); /* 0x12168868: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x1216886B: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1216886C: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, eax); /* 0x1216886F: push eax */
    edx = ebp + (-0x58); /* 0x12168870: lea edx, [ebp - 0x58] */
    RECOMP_CALL(sub_12168707); /* 0x12168873: call 0x12168707 */
    RECOMP_FLAGS_IN();
    eax = ebp + (-0x58); /* 0x12168878: lea eax, [ebp - 0x58] */
    PUSH32(esp, eax); /* 0x1216887B: push eax */
    PUSH32(esp, edi); /* 0x1216887C: push edi */
    RECOMP_CALL(sub_121687E9); /* 0x1216887D: call 0x121687e9 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + (-0x4)); /* 0x12168882: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x12168885: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x12168887: pop edi */
    RECOMP_CALL(sub_121BECF5); /* 0x12168888: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1216888D: leave  */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x1216888E: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12168896(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12168896u);

L_12168896:
    edi = edi; /* 0x12168896: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12168898: push ebp */
    ebp = esp; /* 0x12168899: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0xCu; /* 0x1216889B: sub esp, 0xc */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x1216889E: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x121688A3: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x121688A5: mov dword ptr [ebp - 4], eax */
    ecx = MEM32(ebp + 0x10); /* 0x121688A8: mov ecx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x121688AB: push esi */
    PUSH32(esp, 8); /* 0x121688AC: push 8 */
    esi = POP32_VAL(esp); /* 0x121688AE: pop esi */
    MEM32(ebp + (-0xC)) = 0x474E5089u; /* 0x121688AF: mov dword ptr [ebp - 0xc], 0x474e5089 */
    MEM32(ebp + (-0x8)) = 0x0A1A0A0Du; /* 0x121688B6: mov dword ptr [ebp - 8], 0xa1a0a0d */
    /* cmp ecx, esi */ /* 0x121688BD: cmp ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_121688FB; /* 0x121688BF: jbe 0x121688fb */
L_121688C1:
    ecx = esi; /* 0x121688C1: mov ecx, esi */
L_121688C3:
    edx = MEM32(ebp + 0xC); /* 0x121688C3: mov edx, dword ptr [ebp + 0xc] */
    /* cmp edx, 7 */ /* 0x121688C6: cmp edx, 7 */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_12168900; /* 0x121688C9: ja 0x12168900 */
L_121688CB:
    eax = edx + ecx; /* 0x121688CB: lea eax, [edx + ecx] */
    /* cmp eax, esi */ /* 0x121688CE: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_121688D6; /* 0x121688D0: jbe 0x121688d6 */
L_121688D2:
    ecx = esi; /* 0x121688D2: mov ecx, esi */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x121688D4: sub ecx, edx */
    _flag_k = FK_CMP;
L_121688D6:
    esi = MEM32(ebp + 0x8); /* 0x121688D6: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, edi); /* 0x121688D9: push edi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + edx; /* 0x121688DA: add esi, edx */
    _flag_k = FK_ADD;
    edi = ebp + edx + (-0xC); /* 0x121688DC: lea edi, [ebp + edx - 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121688E0: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    if (ecx) { uint32_t _a = 0, _b = 0; while (ecx) { _a = MEM8(esi); _b = MEM8(edi); esi += _df; edi += _df; ecx--; if (_a != _b) break; } _flag_a = _a; _flag_b = _b; _cf = (uint32_t)CMP_B(_a, _b); _flag_k = FK_CMP; } /* 0x121688E2: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
    edi = POP32_VAL(esp); /* 0x121688E4: pop edi */
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_121688EC; /* 0x121688E5: je 0x121688ec */
L_121688E7:
    { uint32_t _sa = eax, _sb = eax, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x121688E7: sbb eax, eax */
      eax = _sc ? 0xFFFFFFFFu : 0;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
    { uint32_t _sa = eax, _sb = 0xFFFFFFFFu, _sc = recomp_carry(_flag_k, _flag_a, _flag_b, _cf); /* 0x121688E9: sbb eax, -1 */
      eax = _sa - _sb - _sc;
      _flag_a = recomp_flags_sbb(_sa, _sb, _sc); _flag_b = 0;
      _flag_k = FK_EFLAGS; _cf = _flag_a & 1u; }
L_121688EC:
    ecx = MEM32(ebp + (-0x4)); /* 0x121688EC: mov ecx, dword ptr [ebp - 4] */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x121688EF: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x121688F1: pop esi */
    RECOMP_CALL(sub_121BECF5); /* 0x121688F2: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121688F7: leave  */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x121688F8: ret 0xc */
L_121688FB:
    /* cmp ecx, 1 */ /* 0x121688FB: cmp ecx, 1 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_AE(_flag_a, _flag_b)) goto L_121688C3; /* 0x121688FE: jae 0x121688c3 */
L_12168900:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12168900: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    RECOMP_BACKEDGE();
    goto L_121688EC; /* 0x12168902: jmp 0x121688ec */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_12168909(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12168909u);

L_12168909:
    edi = edi; /* 0x12168909: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1216890B: push ebp */
    ebp = esp; /* 0x1216890C: mov ebp, esp */
    _flag_a = (uint32_t)((eax | 0xFFFFFFFFu)); _flag_b = (uint32_t)((eax | 0xFFFFFFFFu));
    eax = eax | 0xFFFFFFFFu; /* 0x1216890E: or eax, 0xffffffff */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12168911: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax; uint32_t _dv = (uint32_t)MEM32(ebp + 0x10); /* 0x12168913: div dword ptr [ebp + 0x10] */
      if (_dv) { eax = (uint32_t)(_dividend / _dv); edx = (uint32_t)(_dividend % _dv); }
      else { eax = 0; edx = 0; } }
    PUSH32(esp, ebx); /* 0x12168916: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x12168917: mov ebx, dword ptr [ebp + 8] */
    ecx = MEM32(ebx + 0x6C); /* 0x1216891A: mov ecx, dword ptr [ebx + 0x6c] */
    PUSH32(esp, esi); /* 0x1216891D: push esi */
    esi = MEM32(ebp + 0xC); /* 0x1216891E: mov esi, dword ptr [ebp + 0xc] */
    MEM32(ebp + 0x8) = ecx; /* 0x12168921: mov dword ptr [ebp + 8], ecx */
    /* cmp esi, eax */ /* 0x12168924: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12168937; /* 0x12168926: jbe 0x12168937 */
L_12168928:
    PUSH32(esp, 0x120134F0u); /* 0x12168928: push 0x120134f0 */
    PUSH32(esp, ebx); /* 0x1216892D: push ebx */
    RECOMP_CALL(sub_121687E9); /* 0x1216892E: call 0x121687e9 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12168933: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_12168998; /* 0x12168935: jmp 0x12168998 */
L_12168937:
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ebp + 0x10)); /* 0x12168937: imul esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x1216893B: push edi */
    eax = ecx; /* 0x1216893C: mov eax, ecx */
    PUSH32(esp, esi); /* 0x1216893E: push esi */
    _flag_a = (uint32_t)((eax | 0x00100000u)); _flag_b = (uint32_t)((eax | 0x00100000u));
    eax = eax | 0x00100000u; /* 0x1216893F: or eax, 0x100000 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, ebx); /* 0x12168944: push ebx */
    MEM32(ebx + 0x6C) = eax; /* 0x12168945: mov dword ptr [ebx + 0x6c], eax */
    RECOMP_CALL(sub_1217015D); /* 0x12168948: call 0x1217015d */
    RECOMP_FLAGS_IN();
    edi = eax; /* 0x1216894D: mov edi, eax */
    eax = MEM32(ebp + 0x8); /* 0x1216894F: mov eax, dword ptr [ebp + 8] */
    MEM32(ebx + 0x6C) = eax; /* 0x12168952: mov dword ptr [ebx + 0x6c], eax */
    /* test edi, edi */ /* 0x12168955: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1216895D; /* 0x12168957: jne 0x1216895d */
L_12168959:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12168959: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_12168997; /* 0x1216895B: jmp 0x12168997 */
L_1216895D:
    eax = 0x8000u; /* 0x1216895D: mov eax, 0x8000 */
    /* cmp esi, eax */ /* 0x12168962: cmp esi, eax */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_12168989; /* 0x12168964: jbe 0x12168989 */
L_12168966:
    PUSH32(esp, eax); /* 0x12168966: push eax */
    PUSH32(esp, 0); /* 0x12168967: push 0 */
    PUSH32(esp, edi); /* 0x12168969: push edi */
    RECOMP_CALL(sub_121BF434); /* 0x1216896A: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    eax = esi + (-0x8000); /* 0x1216896F: lea eax, [esi - 0x8000] */
    PUSH32(esp, eax); /* 0x12168975: push eax */
    eax = edi + 0x8000; /* 0x12168976: lea eax, [edi + 0x8000] */
    PUSH32(esp, 0); /* 0x1216897C: push 0 */
    PUSH32(esp, eax); /* 0x1216897E: push eax */
    RECOMP_CALL(sub_121BF434); /* 0x1216897F: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x12168984: add esp, 0x18 */
    _flag_k = FK_ADD;
    goto L_12168995; /* 0x12168987: jmp 0x12168995 */
L_12168989:
    PUSH32(esp, esi); /* 0x12168989: push esi */
    PUSH32(esp, 0); /* 0x1216898A: push 0 */
    PUSH32(esp, edi); /* 0x1216898C: push edi */
    RECOMP_CALL(sub_121BF434); /* 0x1216898D: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12168992: add esp, 0xc */
    _flag_k = FK_ADD;
L_12168995:
    eax = edi; /* 0x12168995: mov eax, edi */
L_12168997:
    edi = POP32_VAL(esp); /* 0x12168997: pop edi */
L_12168998:
    esi = POP32_VAL(esp); /* 0x12168998: pop esi */
    ebx = POP32_VAL(esp); /* 0x12168999: pop ebx */
    ebp = POP32_VAL(esp); /* 0x1216899A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1216899B: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_121689A3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121689A3u);

L_121689A3:
    edi = edi; /* 0x121689A3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121689A5: push ebp */
    ebp = esp; /* 0x121689A6: mov ebp, esp */
    ebp = POP32_VAL(esp); /* 0x121689A8: pop ebp */
    goto L_121701A5; /* 0x121689A9: jmp 0x121701a5 */
L_121701A5:
    edi = edi; /* 0x121701A5: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121701A7: push ebp */
    ebp = esp; /* 0x121701A8: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x121701AA: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121701BF; /* 0x121701AE: je 0x121701bf */
L_121701B0:
    /* cmp MEM32(ebp + 0xC), 0 */ /* 0x121701B0: cmp dword ptr [ebp + 0xc], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121701BF; /* 0x121701B4: je 0x121701bf */
L_121701B6:
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x121701B6: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_121BF586); /* 0x121701B9: call 0x121bf586 */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x121701BE: pop ecx */
L_121701BF:
    ebp = POP32_VAL(esp); /* 0x121701BF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121701C0: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_121689B3(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121689B3u);

L_121689B3:
    edi = edi; /* 0x121689B3: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121689B5: push ebp */
    ebp = esp; /* 0x121689B6: mov ebp, esp */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121689B8: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, eax); /* 0x121689BA: push eax */
    PUSH32(esp, eax); /* 0x121689BB: push eax */
    PUSH32(esp, eax); /* 0x121689BC: push eax */
    RECOMP_CALL(sub_121AC30B); /* 0x121689BD: call 0x121ac30b */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0x8); /* 0x121689C2: mov ecx, dword ptr [ebp + 8] */
    MEM32(ecx + 0x110) = eax; /* 0x121689C5: mov dword ptr [ecx + 0x110], eax */
    ebp = POP32_VAL(esp); /* 0x121689CB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121689CC: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_121689D4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121689D4u);

L_121689D4:
    edi = edi; /* 0x121689D4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121689D6: push ebp */
    ebp = esp; /* 0x121689D7: mov ebp, esp */
    PUSH32(esp, esi); /* 0x121689D9: push esi */
    esi = MEM32(ebp + 0x8); /* 0x121689DA: mov esi, dword ptr [ebp + 8] */
    /* test MEM8(esi + 0x11C), 0x20u */ /* 0x121689DD: test byte ptr [esi + 0x11c], 0x20 */
    _flag_a = (uint32_t)(MEM8(esi + 0x11C)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_121689F6; /* 0x121689E4: je 0x121689f6 */
L_121689E6:
    eax = MEM32(esi + 0x6C); /* 0x121689E6: mov eax, dword ptr [esi + 0x6c] */
    ecx = 0x300u; /* 0x121689E9: mov ecx, 0x300 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    eax = eax & ecx; /* 0x121689EE: and eax, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp eax, ecx */ /* 0x121689F0: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121689FF; /* 0x121689F2: jne 0x121689ff */
L_121689F4:
    goto L_12168A16; /* 0x121689F4: jmp 0x12168a16 */
L_121689F6:
    /* test MEM32(esi + 0x6C), 0x800u */ /* 0x121689F6: test dword ptr [esi + 0x6c], 0x800 */
    _flag_a = (uint32_t)(MEM32(esi + 0x6C)); _flag_b = (uint32_t)(0x800u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12168A16; /* 0x121689FD: jne 0x12168a16 */
L_121689FF:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x121689FF: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12168A02: push dword ptr [ebp + 0xc] */
    PUSH32(esp, MEM32(esi + 0x110)); /* 0x12168A05: push dword ptr [esi + 0x110] */
    RECOMP_CALL(sub_121AC30B); /* 0x12168A0B: call 0x121ac30b */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x110) = eax; /* 0x12168A10: mov dword ptr [esi + 0x110], eax */
L_12168A16:
    esi = POP32_VAL(esp); /* 0x12168A16: pop esi */
    ebp = POP32_VAL(esp); /* 0x12168A17: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12168A18: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12168A20(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12168A20u);

L_12168A20:
    edi = edi; /* 0x12168A20: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12168A22: push ebp */
    ebp = esp; /* 0x12168A23: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12168A25: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12168A26: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi); /* 0x12168A29: mov eax, dword ptr [esi] */
    PUSH32(esp, edi); /* 0x12168A2B: push edi */
    edi = 0x120u; /* 0x12168A2C: mov edi, 0x120 */
    /* cmp MEM32(ebp + 0xC), edi */ /* 0x12168A31: cmp dword ptr [ebp + 0xc], edi */
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(edi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_12168A45; /* 0x12168A34: jae 0x12168a45 */
L_12168A36:
    PUSH32(esp, eax); /* 0x12168A36: push eax */
    RECOMP_CALL(sub_12170140); /* 0x12168A37: call 0x12170140 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 2); /* 0x12168A3C: push 2 */
    RECOMP_CALL(sub_121700F7); /* 0x12168A3E: call 0x121700f7 */
    RECOMP_FLAGS_IN();
    MEM32(esi) = eax; /* 0x12168A43: mov dword ptr [esi], eax */
L_12168A45:
    PUSH32(esp, edi); /* 0x12168A45: push edi */
    PUSH32(esp, 0); /* 0x12168A46: push 0 */
    PUSH32(esp, eax); /* 0x12168A48: push eax */
    RECOMP_CALL(sub_121BF434); /* 0x12168A49: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x12168A4E: add esp, 0xc */
    _flag_k = FK_ADD;
    edi = POP32_VAL(esp); /* 0x12168A51: pop edi */
    esi = POP32_VAL(esp); /* 0x12168A52: pop esi */
    ebp = POP32_VAL(esp); /* 0x12168A53: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12168A54: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12168A5C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12168A5Cu);

L_12168A5C:
    edi = edi; /* 0x12168A5C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12168A5E: push ebp */
    ebp = esp; /* 0x12168A5F: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12168A61: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12168A62: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x12168A65: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12168DC5; /* 0x12168A67: je 0x12168dc5 */
L_12168A6D:
    PUSH32(esp, edi); /* 0x12168A6D: push edi */
    edi = MEM32(ebp + 0xC); /* 0x12168A6E: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x12168A71: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12168DC4; /* 0x12168A73: je 0x12168dc4 */
L_12168A79:
    eax = MEM32(edi + 0xB8); /* 0x12168A79: mov eax, dword ptr [edi + 0xb8] */
    PUSH32(esp, ebx); /* 0x12168A7F: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x12168A80: mov ebx, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    eax = eax & ebx; /* 0x12168A83: and eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12168A85: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, 0x4000u */ /* 0x12168A87: test eax, 0x4000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x4000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12168AEF; /* 0x12168A8C: je 0x12168aef */
L_12168A8E:
    /* cmp MEM32(ebp + 0x14), 0xFFFFFFFFu */ /* 0x12168A8E: cmp dword ptr [ebp + 0x14], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12168AC1; /* 0x12168A92: je 0x12168ac1 */
L_12168A94:
    ecx = MEM32(edi + 0x38); /* 0x12168A94: mov ecx, dword ptr [edi + 0x38] */
    /* test ecx, ecx */ /* 0x12168A97: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12168AEF; /* 0x12168A99: je 0x12168aef */
L_12168A9B:
    eax = MEM32(ebp + 0x14); /* 0x12168A9B: mov eax, dword ptr [ebp + 0x14] */
    if (4u) _cf = (((eax) >> 28) & 1u); /* 0x12168A9E: shl eax, 4 */
    if (4u) { _flag_a = recomp_flags_pack((eax << 4u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax << 4u; /* 0x12168A9E: shl eax, 4 */
    MEM32(ebp + 0xC) = eax; /* 0x12168AA1: mov dword ptr [ebp + 0xc], eax */
    eax = MEM32(eax + ecx + 0x4); /* 0x12168AA4: mov eax, dword ptr [eax + ecx + 4] */
    /* test eax, eax */ /* 0x12168AA8: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12168AEF; /* 0x12168AAA: je 0x12168aef */
L_12168AAC:
    PUSH32(esp, eax); /* 0x12168AAC: push eax */
    PUSH32(esp, esi); /* 0x12168AAD: push esi */
    RECOMP_CALL(sub_121701A5); /* 0x12168AAE: call 0x121701a5 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x38); /* 0x12168AB3: mov eax, dword ptr [edi + 0x38] */
    ecx = MEM32(ebp + 0xC); /* 0x12168AB6: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12168AB9: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + eax + 0x4) = edx; /* 0x12168ABB: mov dword ptr [ecx + eax + 4], edx */
    goto L_12168AEF; /* 0x12168ABF: jmp 0x12168aef */
L_12168AC1:
    /* cmp MEM32(edi + 0x30), edx */ /* 0x12168AC1: cmp dword ptr [edi + 0x30], edx */
    _flag_a = (uint32_t)(MEM32(edi + 0x30)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_12168ADE; /* 0x12168AC4: jle 0x12168ade */
L_12168AC6:
    ebx = edx; /* 0x12168AC6: mov ebx, edx */
L_12168AC8:
    PUSH32(esp, ebx); /* 0x12168AC8: push ebx */
    PUSH32(esp, 0x4000u); /* 0x12168AC9: push 0x4000 */
    PUSH32(esp, edi); /* 0x12168ACE: push edi */
    PUSH32(esp, esi); /* 0x12168ACF: push esi */
    RECOMP_CALL(sub_12168A5C); /* 0x12168AD0: call 0x12168a5c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x12168AD5: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(edi + 0x30) */ /* 0x12168AD6: cmp ebx, dword ptr [edi + 0x30] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi + 0x30));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_12168AC8; /* 0x12168AD9: jl 0x12168ac8 */
L_12168ADB:
    ebx = MEM32(ebp + 0x10); /* 0x12168ADB: mov ebx, dword ptr [ebp + 0x10] */
L_12168ADE:
    PUSH32(esp, MEM32(edi + 0x38)); /* 0x12168ADE: push dword ptr [edi + 0x38] */
    PUSH32(esp, esi); /* 0x12168AE1: push esi */
    RECOMP_CALL(sub_121701A5); /* 0x12168AE2: call 0x121701a5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12168AE7: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x38) = edx; /* 0x12168AE9: mov dword ptr [edi + 0x38], edx */
    MEM32(edi + 0x30) = edx; /* 0x12168AEC: mov dword ptr [edi + 0x30], edx */
L_12168AEF:
    eax = MEM32(edi + 0xB8); /* 0x12168AEF: mov eax, dword ptr [edi + 0xb8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    eax = eax & ebx; /* 0x12168AF5: and eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, 0x2000u */ /* 0x12168AF7: test eax, 0x2000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x2000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12168B10; /* 0x12168AFC: je 0x12168b10 */
L_12168AFE:
    PUSH32(esp, MEM32(edi + 0x4C)); /* 0x12168AFE: push dword ptr [edi + 0x4c] */
    PUSH32(esp, esi); /* 0x12168B01: push esi */
    RECOMP_CALL(sub_121701A5); /* 0x12168B02: call 0x121701a5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(0xFFFFFFEFu);
    MEM32(edi + 0x8) = MEM32(edi + 0x8) & 0xFFFFFFEFu; /* 0x12168B07: and dword ptr [edi + 8], 0xffffffef */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12168B0B: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x4C) = edx; /* 0x12168B0D: mov dword ptr [edi + 0x4c], edx */
L_12168B10:
    ecx = MEM32(edi + 0xB8); /* 0x12168B10: mov ecx, dword ptr [edi + 0xb8] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    ecx = ecx & ebx; /* 0x12168B16: and ecx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test ecx, 0x100u */ /* 0x12168B18: test ecx, 0x100 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x100u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12168B27; /* 0x12168B1E: je 0x12168b27 */
L_12168B20:
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(0xFFFFBFFFu);
    MEM32(edi + 0x8) = MEM32(edi + 0x8) & 0xFFFFBFFFu; /* 0x12168B20: and dword ptr [edi + 8], 0xffffbfff */
    _cf = 0;
    _flag_k = FK_TEST;
L_12168B27:
    /* test LO8(ecx), LO8(ecx) */ /* 0x12168B27: test cl, cl */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(LO8(ecx)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_12168BA6; /* 0x12168B29: jns 0x12168ba6 */
L_12168B2B:
    PUSH32(esp, MEM32(edi + 0xA0)); /* 0x12168B2B: push dword ptr [edi + 0xa0] */
    PUSH32(esp, esi); /* 0x12168B31: push esi */
    RECOMP_CALL(sub_121701A5); /* 0x12168B32: call 0x121701a5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0xAC)); /* 0x12168B37: push dword ptr [edi + 0xac] */
    PUSH32(esp, esi); /* 0x12168B3D: push esi */
    RECOMP_CALL(sub_121701A5); /* 0x12168B3E: call 0x121701a5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12168B43: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0xA0) = edx; /* 0x12168B45: mov dword ptr [edi + 0xa0], edx */
    MEM32(edi + 0xAC) = edx; /* 0x12168B4B: mov dword ptr [edi + 0xac], edx */
    /* cmp MEM32(edi + 0xB0), edx */ /* 0x12168B51: cmp dword ptr [edi + 0xb0], edx */
    _flag_a = (uint32_t)(MEM32(edi + 0xB0)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12168B9F; /* 0x12168B57: je 0x12168b9f */
L_12168B59:
    /* cmp MEM8(edi + 0xB5), LO8(edx) */ /* 0x12168B59: cmp byte ptr [edi + 0xb5], dl */
    _flag_a = (uint32_t)(MEM8(edi + 0xB5)) << 24; _flag_b = (uint32_t)(LO8(edx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_BE(_flag_a, _flag_b)) goto L_12168B8B; /* 0x12168B5F: jbe 0x12168b8b */
L_12168B61:
    ebx = edx; /* 0x12168B61: mov ebx, edx */
L_12168B63:
    eax = MEM32(edi + 0xB0); /* 0x12168B63: mov eax, dword ptr [edi + 0xb0] */
    PUSH32(esp, MEM32(eax + ebx * 4)); /* 0x12168B69: push dword ptr [eax + ebx*4] */
    PUSH32(esp, esi); /* 0x12168B6C: push esi */
    RECOMP_CALL(sub_121701A5); /* 0x12168B6D: call 0x121701a5 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0xB0); /* 0x12168B72: mov eax, dword ptr [edi + 0xb0] */
    _flag_a = (uint32_t)(MEM32(eax + ebx * 4)); _flag_b = (uint32_t)(0);
    MEM32(eax + ebx * 4) = MEM32(eax + ebx * 4) & 0; /* 0x12168B78: and dword ptr [eax + ebx*4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    eax = (uint32_t)MEM8(edi + 0xB5); /* 0x12168B7C: movzx eax, byte ptr [edi + 0xb5] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x12168B83: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, eax */ /* 0x12168B84: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_12168B63; /* 0x12168B86: jl 0x12168b63 */
L_12168B88:
    ebx = MEM32(ebp + 0x10); /* 0x12168B88: mov ebx, dword ptr [ebp + 0x10] */
L_12168B8B:
    PUSH32(esp, MEM32(edi + 0xB0)); /* 0x12168B8B: push dword ptr [edi + 0xb0] */
    PUSH32(esp, esi); /* 0x12168B91: push esi */
    RECOMP_CALL(sub_121701A5); /* 0x12168B92: call 0x121701a5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12168B97: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0xB0) = edx; /* 0x12168B99: mov dword ptr [edi + 0xb0], edx */
L_12168B9F:
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(0xFFFFFBFFu);
    MEM32(edi + 0x8) = MEM32(edi + 0x8) & 0xFFFFFBFFu; /* 0x12168B9F: and dword ptr [edi + 8], 0xfffffbff */
    _cf = 0;
    _flag_k = FK_TEST;
L_12168BA6:
    eax = MEM32(edi + 0xB8); /* 0x12168BA6: mov eax, dword ptr [edi + 0xb8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    eax = eax & ebx; /* 0x12168BAC: and eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(eax), 0x10u */ /* 0x12168BAE: test al, 0x10 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12168BDF; /* 0x12168BB0: je 0x12168bdf */
L_12168BB2:
    PUSH32(esp, MEM32(edi + 0xC4)); /* 0x12168BB2: push dword ptr [edi + 0xc4] */
    PUSH32(esp, esi); /* 0x12168BB8: push esi */
    RECOMP_CALL(sub_121701A5); /* 0x12168BB9: call 0x121701a5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(edi + 0xC8)); /* 0x12168BBE: push dword ptr [edi + 0xc8] */
    PUSH32(esp, esi); /* 0x12168BC4: push esi */
    RECOMP_CALL(sub_121701A5); /* 0x12168BC5: call 0x121701a5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12168BCA: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(0xFFFFEFFFu);
    MEM32(edi + 0x8) = MEM32(edi + 0x8) & 0xFFFFEFFFu; /* 0x12168BCC: and dword ptr [edi + 8], 0xffffefff */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0xC4) = edx; /* 0x12168BD3: mov dword ptr [edi + 0xc4], edx */
    MEM32(edi + 0xC8) = edx; /* 0x12168BD9: mov dword ptr [edi + 0xc8], edx */
L_12168BDF:
    eax = MEM32(edi + 0xB8); /* 0x12168BDF: mov eax, dword ptr [edi + 0xb8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    eax = eax & ebx; /* 0x12168BE5: and eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(eax), 0x20u */ /* 0x12168BE7: test al, 0x20 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12168C87; /* 0x12168BE9: je 0x12168c87 */
L_12168BEF:
    /* cmp MEM32(ebp + 0x14), 0xFFFFFFFFu */ /* 0x12168BEF: cmp dword ptr [ebp + 0x14], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12168C3F; /* 0x12168BF3: je 0x12168c3f */
L_12168BF5:
    eax = MEM32(edi + 0xD4); /* 0x12168BF5: mov eax, dword ptr [edi + 0xd4] */
    /* test eax, eax */ /* 0x12168BFB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12168C87; /* 0x12168BFD: je 0x12168c87 */
L_12168C03:
    esi = MEM32(ebp + 0x14); /* 0x12168C03: mov esi, dword ptr [ebp + 0x14] */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + esi; /* 0x12168C06: add esi, esi */
    _flag_k = FK_ADD;
    PUSH32(esp, MEM32(eax + esi * 8)); /* 0x12168C08: push dword ptr [eax + esi*8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12168C0B: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_121701A5); /* 0x12168C0E: call 0x121701a5 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0xD4); /* 0x12168C13: mov eax, dword ptr [edi + 0xd4] */
    PUSH32(esp, MEM32(eax + esi * 8 + 0x8)); /* 0x12168C19: push dword ptr [eax + esi*8 + 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12168C1D: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_121701A5); /* 0x12168C20: call 0x121701a5 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0xD4); /* 0x12168C25: mov eax, dword ptr [edi + 0xd4] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12168C2B: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + esi * 8) = edx; /* 0x12168C2D: mov dword ptr [eax + esi*8], edx */
    eax = MEM32(edi + 0xD4); /* 0x12168C30: mov eax, dword ptr [edi + 0xd4] */
    MEM32(eax + esi * 8 + 0x8) = edx; /* 0x12168C36: mov dword ptr [eax + esi*8 + 8], edx */
    esi = MEM32(ebp + 0x8); /* 0x12168C3A: mov esi, dword ptr [ebp + 8] */
    goto L_12168C87; /* 0x12168C3D: jmp 0x12168c87 */
L_12168C3F:
    eax = MEM32(edi + 0xD8); /* 0x12168C3F: mov eax, dword ptr [edi + 0xd8] */
    /* test eax, eax */ /* 0x12168C45: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12168C80; /* 0x12168C47: je 0x12168c80 */
L_12168C49:
    MEM32(ebp + 0xC) = edx; /* 0x12168C49: mov dword ptr [ebp + 0xc], edx */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12168C66; /* 0x12168C4C: jle 0x12168c66 */
L_12168C4E:
    ebx = edx; /* 0x12168C4E: mov ebx, edx */
L_12168C50:
    PUSH32(esp, ebx); /* 0x12168C50: push ebx */
    PUSH32(esp, 0x20u); /* 0x12168C51: push 0x20 */
    PUSH32(esp, edi); /* 0x12168C53: push edi */
    PUSH32(esp, esi); /* 0x12168C54: push esi */
    RECOMP_CALL(sub_12168A5C); /* 0x12168C55: call 0x12168a5c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x12168C5A: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(edi + 0xD8) */ /* 0x12168C5B: cmp ebx, dword ptr [edi + 0xd8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi + 0xD8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_12168C50; /* 0x12168C61: jl 0x12168c50 */
L_12168C63:
    ebx = MEM32(ebp + 0x10); /* 0x12168C63: mov ebx, dword ptr [ebp + 0x10] */
L_12168C66:
    PUSH32(esp, MEM32(edi + 0xD4)); /* 0x12168C66: push dword ptr [edi + 0xd4] */
    PUSH32(esp, esi); /* 0x12168C6C: push esi */
    RECOMP_CALL(sub_121701A5); /* 0x12168C6D: call 0x121701a5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12168C72: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0xD4) = edx; /* 0x12168C74: mov dword ptr [edi + 0xd4], edx */
    MEM32(edi + 0xD8) = edx; /* 0x12168C7A: mov dword ptr [edi + 0xd8], edx */
L_12168C80:
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(0xFFFFDFFFu);
    MEM32(edi + 0x8) = MEM32(edi + 0x8) & 0xFFFFDFFFu; /* 0x12168C80: and dword ptr [edi + 8], 0xffffdfff */
    _cf = 0;
    _flag_k = FK_TEST;
L_12168C87:
    eax = MEM32(edi + 0xB8); /* 0x12168C87: mov eax, dword ptr [edi + 0xb8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    eax = eax & ebx; /* 0x12168C8D: and eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, 0x200u */ /* 0x12168C8F: test eax, 0x200 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x200u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12168D0A; /* 0x12168C94: je 0x12168d0a */
L_12168C96:
    /* cmp MEM32(ebp + 0x14), 0xFFFFFFFFu */ /* 0x12168C96: cmp dword ptr [ebp + 0x14], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12168CC6; /* 0x12168C9A: je 0x12168cc6 */
L_12168C9C:
    eax = MEM32(edi + 0xBC); /* 0x12168C9C: mov eax, dword ptr [edi + 0xbc] */
    /* test eax, eax */ /* 0x12168CA2: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12168D0A; /* 0x12168CA4: je 0x12168d0a */
L_12168CA6:
    esi = MEM32(ebp + 0x14); /* 0x12168CA6: mov esi, dword ptr [ebp + 0x14] */
    esi = (uint32_t)((int32_t)esi * (int32_t)0x14u); /* 0x12168CA9: imul esi, esi, 0x14 */
    PUSH32(esp, MEM32(esi + eax + 0x8)); /* 0x12168CAC: push dword ptr [esi + eax + 8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12168CB0: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_121701A5); /* 0x12168CB3: call 0x121701a5 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0xBC); /* 0x12168CB8: mov eax, dword ptr [edi + 0xbc] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12168CBE: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(eax + esi + 0x8) = edx; /* 0x12168CC0: mov dword ptr [eax + esi + 8], edx */
    goto L_12168D0A; /* 0x12168CC4: jmp 0x12168d0a */
L_12168CC6:
    eax = MEM32(edi + 0xC0); /* 0x12168CC6: mov eax, dword ptr [edi + 0xc0] */
    /* test eax, eax */ /* 0x12168CCC: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12168D0A; /* 0x12168CCE: je 0x12168d0a */
L_12168CD0:
    MEM32(ebp + 0xC) = edx; /* 0x12168CD0: mov dword ptr [ebp + 0xc], edx */
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12168CF0; /* 0x12168CD3: jle 0x12168cf0 */
L_12168CD5:
    ebx = edx; /* 0x12168CD5: mov ebx, edx */
L_12168CD7:
    PUSH32(esp, ebx); /* 0x12168CD7: push ebx */
    PUSH32(esp, 0x200u); /* 0x12168CD8: push 0x200 */
    PUSH32(esp, edi); /* 0x12168CDD: push edi */
    PUSH32(esp, esi); /* 0x12168CDE: push esi */
    RECOMP_CALL(sub_12168A5C); /* 0x12168CDF: call 0x12168a5c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x12168CE4: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(edi + 0xC0) */ /* 0x12168CE5: cmp ebx, dword ptr [edi + 0xc0] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi + 0xC0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_12168CD7; /* 0x12168CEB: jl 0x12168cd7 */
L_12168CED:
    ebx = MEM32(ebp + 0x10); /* 0x12168CED: mov ebx, dword ptr [ebp + 0x10] */
L_12168CF0:
    PUSH32(esp, MEM32(edi + 0xBC)); /* 0x12168CF0: push dword ptr [edi + 0xbc] */
    PUSH32(esp, esi); /* 0x12168CF6: push esi */
    RECOMP_CALL(sub_121701A5); /* 0x12168CF7: call 0x121701a5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12168CFC: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0xBC) = edx; /* 0x12168CFE: mov dword ptr [edi + 0xbc], edx */
    MEM32(edi + 0xC0) = edx; /* 0x12168D04: mov dword ptr [edi + 0xc0], edx */
L_12168D0A:
    eax = MEM32(edi + 0xB8); /* 0x12168D0A: mov eax, dword ptr [edi + 0xb8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    eax = eax & ebx; /* 0x12168D10: and eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(eax), 8 */ /* 0x12168D12: test al, 8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12168D2A; /* 0x12168D14: je 0x12168d2a */
L_12168D16:
    PUSH32(esp, MEM32(edi + 0x7C)); /* 0x12168D16: push dword ptr [edi + 0x7c] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12168D19: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_121701A5); /* 0x12168D1C: call 0x121701a5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12168D21: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(0xFFFFFFBFu);
    MEM32(edi + 0x8) = MEM32(edi + 0x8) & 0xFFFFFFBFu; /* 0x12168D23: and dword ptr [edi + 8], 0xffffffbf */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x7C) = edx; /* 0x12168D27: mov dword ptr [edi + 0x7c], edx */
L_12168D2A:
    eax = MEM32(edi + 0xB8); /* 0x12168D2A: mov eax, dword ptr [edi + 0xb8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    eax = eax & ebx; /* 0x12168D30: and eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test eax, 0x1000u */ /* 0x12168D32: test eax, 0x1000 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x1000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12168D51; /* 0x12168D37: je 0x12168d51 */
L_12168D39:
    PUSH32(esp, MEM32(edi + 0x10)); /* 0x12168D39: push dword ptr [edi + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12168D3C: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_121701A5); /* 0x12168D3F: call 0x121701a5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(0xFFFFFFF7u);
    MEM32(edi + 0x8) = MEM32(edi + 0x8) & 0xFFFFFFF7u; /* 0x12168D44: and dword ptr [edi + 8], 0xfffffff7 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x12168D48: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM16(edi + 0x14)) << 16; _flag_b = (uint32_t)(LO16(edx)) << 16;
    MEM16(edi + 0x14) = (uint16_t)(MEM16(edi + 0x14) & LO16(edx)); /* 0x12168D4A: and word ptr [edi + 0x14], dx */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 16);
    MEM32(edi + 0x10) = edx; /* 0x12168D4E: mov dword ptr [edi + 0x10], edx */
L_12168D51:
    eax = MEM32(edi + 0xB8); /* 0x12168D51: mov eax, dword ptr [edi + 0xb8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    eax = eax & ebx; /* 0x12168D57: and eax, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test LO8(eax), 0x40u */ /* 0x12168D59: test al, 0x40 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12168DAF; /* 0x12168D5B: je 0x12168daf */
L_12168D5D:
    /* cmp MEM32(edi + 0xF8), edx */ /* 0x12168D5D: cmp dword ptr [edi + 0xf8], edx */
    _flag_a = (uint32_t)(MEM32(edi + 0xF8)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12168DA8; /* 0x12168D63: je 0x12168da8 */
L_12168D65:
    MEM32(ebp + 0xC) = edx; /* 0x12168D65: mov dword ptr [ebp + 0xc], edx */
    /* cmp MEM32(edi + 0x4), edx */ /* 0x12168D68: cmp dword ptr [edi + 4], edx */
    _flag_a = (uint32_t)(MEM32(edi + 0x4)); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_12168D93; /* 0x12168D6B: jle 0x12168d93 */
L_12168D6D:
    ebx = edx; /* 0x12168D6D: mov ebx, edx */
L_12168D6F:
    eax = MEM32(edi + 0xF8); /* 0x12168D6F: mov eax, dword ptr [edi + 0xf8] */
    PUSH32(esp, MEM32(eax + ebx * 4)); /* 0x12168D75: push dword ptr [eax + ebx*4] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12168D78: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_121701A5); /* 0x12168D7B: call 0x121701a5 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0xF8); /* 0x12168D80: mov eax, dword ptr [edi + 0xf8] */
    _flag_a = (uint32_t)(MEM32(eax + ebx * 4)); _flag_b = (uint32_t)(0);
    MEM32(eax + ebx * 4) = MEM32(eax + ebx * 4) & 0; /* 0x12168D86: and dword ptr [eax + ebx*4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x12168D8A: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(edi + 0x4) */ /* 0x12168D8B: cmp ebx, dword ptr [edi + 4] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(edi + 0x4));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_12168D6F; /* 0x12168D8E: jl 0x12168d6f */
L_12168D90:
    ebx = MEM32(ebp + 0x10); /* 0x12168D90: mov ebx, dword ptr [ebp + 0x10] */
L_12168D93:
    PUSH32(esp, MEM32(edi + 0xF8)); /* 0x12168D93: push dword ptr [edi + 0xf8] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12168D99: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_121701A5); /* 0x12168D9C: call 0x121701a5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(edi + 0xF8)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0xF8) = MEM32(edi + 0xF8) & 0; /* 0x12168DA1: and dword ptr [edi + 0xf8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_12168DA8:
    _flag_a = (uint32_t)(MEM32(edi + 0x8)); _flag_b = (uint32_t)(0xFFFF7FFFu);
    MEM32(edi + 0x8) = MEM32(edi + 0x8) & 0xFFFF7FFFu; /* 0x12168DA8: and dword ptr [edi + 8], 0xffff7fff */
    _cf = 0;
    _flag_k = FK_TEST;
L_12168DAF:
    /* cmp MEM32(ebp + 0x14), 0xFFFFFFFFu */ /* 0x12168DAF: cmp dword ptr [ebp + 0x14], -1 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12168DBB; /* 0x12168DB3: je 0x12168dbb */
L_12168DB5:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0xFFFFBDDFu);
    ebx = ebx & 0xFFFFBDDFu; /* 0x12168DB5: and ebx, 0xffffbddf */
    _cf = 0;
    _flag_k = FK_TEST;
L_12168DBB:
    ebx = ~ebx; /* 0x12168DBB: not ebx */
    _flag_a = (uint32_t)(MEM32(edi + 0xB8)); _flag_b = (uint32_t)(ebx);
    MEM32(edi + 0xB8) = MEM32(edi + 0xB8) & ebx; /* 0x12168DBD: and dword ptr [edi + 0xb8], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x12168DC3: pop ebx */
L_12168DC4:
    edi = POP32_VAL(esp); /* 0x12168DC4: pop edi */
L_12168DC5:
    esi = POP32_VAL(esp); /* 0x12168DC5: pop esi */
    ebp = POP32_VAL(esp); /* 0x12168DC6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x12168DC7: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_12168DCF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12168DCFu);

L_12168DCF:
    edi = edi; /* 0x12168DCF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12168DD1: push ebp */
    ebp = esp; /* 0x12168DD2: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12168DD4: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12168DD5: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, 0xFFFFFFFFu); /* 0x12168DD8: push -1 */
    PUSH32(esp, 0x7FFFu); /* 0x12168DDA: push 0x7fff */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12168DDF: push dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x12168DE2: push esi */
    RECOMP_CALL(sub_12168A5C); /* 0x12168DE3: call 0x12168a5c */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x220), 0 */ /* 0x12168DE8: cmp dword ptr [esi + 0x220], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x220)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12168E0B; /* 0x12168DEF: je 0x12168e0b */
L_12168DF1:
    PUSH32(esp, MEM32(esi + 0x224)); /* 0x12168DF1: push dword ptr [esi + 0x224] */
    PUSH32(esp, esi); /* 0x12168DF7: push esi */
    RECOMP_CALL(sub_121701A5); /* 0x12168DF8: call 0x121701a5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x224)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x224) = MEM32(esi + 0x224) & 0; /* 0x12168DFD: and dword ptr [esi + 0x224], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi + 0x220)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x220) = MEM32(esi + 0x220) & 0; /* 0x12168E04: and dword ptr [esi + 0x220], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_12168E0B:
    PUSH32(esp, 0x120u); /* 0x12168E0B: push 0x120 */
    eax = ebp + 0xC; /* 0x12168E10: lea eax, [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x12168E13: push eax */
    RECOMP_CALL(sub_12168A20); /* 0x12168E14: call 0x12168a20 */
    RECOMP_FLAGS_IN();
    esi = POP32_VAL(esp); /* 0x12168E19: pop esi */
    ebp = POP32_VAL(esp); /* 0x12168E1A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12168E1B: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12168E23(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12168E23u);

L_12168E23:
    edi = edi; /* 0x12168E23: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12168E25: push ebp */
    ebp = esp; /* 0x12168E26: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x12168E28: mov eax, dword ptr [ebp + 8] */
    eax = MEM32(eax + 0x54); /* 0x12168E2B: mov eax, dword ptr [eax + 0x54] */
    ebp = POP32_VAL(esp); /* 0x12168E2E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12168E2F: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12168E37(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12168E37u);

L_12168E37:
    eax = 0x12008024u; /* 0x12168E37: mov eax, 0x12008024 */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12168E3C: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12168E44(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12168E44u);

L_12168E44:
    edi = edi; /* 0x12168E44: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12168E46: push ebp */
    ebp = esp; /* 0x12168E47: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x12168E49: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x12168E4C: push esi */
    esi = MEM32(ebp + 0xC); /* 0x12168E4D: mov esi, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x12168E50: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12168E58; /* 0x12168E52: jne 0x12168e58 */
L_12168E54:
    /* test esi, esi */ /* 0x12168E54: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12168E86; /* 0x12168E56: je 0x12168e86 */
L_12168E58:
    /* cmp MEM32(eax + 0x220), 0 */ /* 0x12168E58: cmp dword ptr [eax + 0x220], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x220)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_12168E86; /* 0x12168E5F: jle 0x12168e86 */
L_12168E61:
    edx = MEM32(eax + 0x220); /* 0x12168E61: mov edx, dword ptr [eax + 0x220] */
    eax = MEM32(eax + 0x224); /* 0x12168E67: mov eax, dword ptr [eax + 0x224] */
    ecx = edx; /* 0x12168E6D: mov ecx, edx */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)5); /* 0x12168E6F: imul ecx, ecx, 5 */
    ecx = ecx + eax + (-0x5); /* 0x12168E72: lea ecx, [ecx + eax - 5] */
    /* test edx, edx */ /* 0x12168E76: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12168E86; /* 0x12168E78: je 0x12168e86 */
L_12168E7A:
    eax = MEM32(esi); /* 0x12168E7A: mov eax, dword ptr [esi] */
    /* cmp eax, MEM32(ecx) */ /* 0x12168E7C: cmp eax, dword ptr [ecx] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ecx));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12168E8D; /* 0x12168E7E: je 0x12168e8d */
L_12168E80:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - 5; /* 0x12168E80: sub ecx, 5 */
    _flag_k = FK_CMP;
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx - 1; /* 0x12168E83: dec edx */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12168E7A; /* 0x12168E84: jne 0x12168e7a */
L_12168E86:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12168E86: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
L_12168E88:
    esi = POP32_VAL(esp); /* 0x12168E88: pop esi */
    ebp = POP32_VAL(esp); /* 0x12168E89: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12168E8A: ret 8 */
L_12168E8D:
    eax = (uint32_t)MEM8(ecx + 0x4); /* 0x12168E8D: movzx eax, byte ptr [ecx + 4] */
    RECOMP_BACKEDGE();
    goto L_12168E88; /* 0x12168E91: jmp 0x12168e88 */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_12168E98(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12168E98u);

L_12168E98:
    edi = edi; /* 0x12168E98: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12168E9A: push ebp */
    ebp = esp; /* 0x12168E9B: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x12168E9D: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12168EA7; /* 0x12168EA1: jne 0x12168ea7 */
L_12168EA3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12168EA3: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_12168EC6; /* 0x12168EA5: jmp 0x12168ec6 */
L_12168EA7:
    PUSH32(esp, 2); /* 0x12168EA7: push 2 */
    RECOMP_CALL(sub_121700F7); /* 0x12168EA9: call 0x121700f7 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + 0x8) = eax; /* 0x12168EAE: mov dword ptr [ebp + 8], eax */
    /* test eax, eax */ /* 0x12168EB1: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12168EC6; /* 0x12168EB3: je 0x12168ec6 */
L_12168EB5:
    PUSH32(esp, 0x120u); /* 0x12168EB5: push 0x120 */
    eax = ebp + 0x8; /* 0x12168EBA: lea eax, [ebp + 8] */
    PUSH32(esp, eax); /* 0x12168EBD: push eax */
    RECOMP_CALL(sub_12168A20); /* 0x12168EBE: call 0x12168a20 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x12168EC3: mov eax, dword ptr [ebp + 8] */
L_12168EC6:
    ebp = POP32_VAL(esp); /* 0x12168EC6: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12168EC7: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12168ECF(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12168ECFu);

L_12168ECF:
    edi = edi; /* 0x12168ECF: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12168ED1: push ebp */
    ebp = esp; /* 0x12168ED2: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x12168ED4: push ebx */
    PUSH32(esp, edi); /* 0x12168ED5: push edi */
    edi = MEM32(ebp + 0x8); /* 0x12168ED6: mov edi, dword ptr [ebp + 8] */
    ebx = edi + 0x68; /* 0x12168ED9: lea ebx, [edi + 0x68] */
    /* test MEM32(ebx), 0x400u */ /* 0x12168EDC: test dword ptr [ebx], 0x400 */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0x400u);
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0x8) = ebx; /* 0x12168EE2: mov dword ptr [ebp + 8], ebx */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12169053; /* 0x12168EE5: jne 0x12169053 */
L_12168EEB:
    PUSH32(esp, esi); /* 0x12168EEB: push esi */
    PUSH32(esp, edi); /* 0x12168EEC: push edi */
    RECOMP_CALL(sub_12170308); /* 0x12168EED: call 0x12170308 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0xC); /* 0x12168EF2: mov esi, dword ptr [ebp + 0xc] */
    eax = (uint32_t)MEM8(esi + 0x1C); /* 0x12168EF5: movzx eax, byte ptr [esi + 0x1c] */
    PUSH32(esp, eax); /* 0x12168EF9: push eax */
    eax = (uint32_t)MEM8(esi + 0x1B); /* 0x12168EFA: movzx eax, byte ptr [esi + 0x1b] */
    PUSH32(esp, eax); /* 0x12168EFE: push eax */
    eax = (uint32_t)MEM8(esi + 0x1A); /* 0x12168EFF: movzx eax, byte ptr [esi + 0x1a] */
    PUSH32(esp, eax); /* 0x12168F03: push eax */
    eax = (uint32_t)MEM8(esi + 0x19); /* 0x12168F04: movzx eax, byte ptr [esi + 0x19] */
    PUSH32(esp, eax); /* 0x12168F08: push eax */
    eax = (uint32_t)MEM8(esi + 0x18); /* 0x12168F09: movzx eax, byte ptr [esi + 0x18] */
    PUSH32(esp, eax); /* 0x12168F0D: push eax */
    PUSH32(esp, MEM32(esi + 0x4)); /* 0x12168F0E: push dword ptr [esi + 4] */
    PUSH32(esp, MEM32(esi)); /* 0x12168F11: push dword ptr [esi] */
    PUSH32(esp, edi); /* 0x12168F13: push edi */
    RECOMP_CALL(sub_12171145); /* 0x12168F14: call 0x12171145 */
    RECOMP_FLAGS_IN();
    /* test MEM8(esi + 0x8), 1 */ /* 0x12168F19: test byte ptr [esi + 8], 1 */
    _flag_a = (uint32_t)(MEM8(esi + 0x8)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12168F2D; /* 0x12168F1D: je 0x12168f2d */
L_12168F1F:
    fp_push(*(float*)&MEM32(esi + 0x28)); /* 0x12168F1F: fld dword ptr [esi + 0x28] */
    PUSH32(esp, ecx); /* 0x12168F22: push ecx */
    PUSH32(esp, ecx); /* 0x12168F23: push ecx */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x12168F24: fstp qword ptr [esp] */
    PUSH32(esp, edi); /* 0x12168F27: push edi */
    RECOMP_CALL(sub_12171599); /* 0x12168F28: call 0x12171599 */
    RECOMP_FLAGS_IN();
L_12168F2D:
    /* test MEM32(esi + 0x8), 0x800u */ /* 0x12168F2D: test dword ptr [esi + 8], 0x800 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0x800u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12168F41; /* 0x12168F34: je 0x12168f41 */
L_12168F36:
    eax = (uint32_t)MEM8(esi + 0x2C); /* 0x12168F36: movzx eax, byte ptr [esi + 0x2c] */
    PUSH32(esp, eax); /* 0x12168F3A: push eax */
    PUSH32(esp, edi); /* 0x12168F3B: push edi */
    RECOMP_CALL(sub_121715FC); /* 0x12168F3C: call 0x121715fc */
    RECOMP_FLAGS_IN();
L_12168F41:
    /* test MEM32(esi + 0x8), 0x1000u */ /* 0x12168F41: test dword ptr [esi + 8], 0x1000 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0x1000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12168F64; /* 0x12168F48: je 0x12168f64 */
L_12168F4A:
    PUSH32(esp, MEM32(esi + 0xCC)); /* 0x12168F4A: push dword ptr [esi + 0xcc] */
    PUSH32(esp, MEM32(esi + 0xC8)); /* 0x12168F50: push dword ptr [esi + 0xc8] */
    PUSH32(esp, 0); /* 0x12168F56: push 0 */
    PUSH32(esp, MEM32(esi + 0xC4)); /* 0x12168F58: push dword ptr [esi + 0xc4] */
    PUSH32(esp, edi); /* 0x12168F5E: push edi */
    RECOMP_CALL(sub_12171659); /* 0x12168F5F: call 0x12171659 */
    RECOMP_FLAGS_IN();
L_12168F64:
    /* test MEM8(esi + 0x8), 2 */ /* 0x12168F64: test byte ptr [esi + 8], 2 */
    _flag_a = (uint32_t)(MEM8(esi + 0x8)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12168F79; /* 0x12168F68: je 0x12168f79 */
L_12168F6A:
    eax = (uint32_t)MEM8(esi + 0x19); /* 0x12168F6A: movzx eax, byte ptr [esi + 0x19] */
    PUSH32(esp, eax); /* 0x12168F6E: push eax */
    eax = esi + 0x44; /* 0x12168F6F: lea eax, [esi + 0x44] */
    PUSH32(esp, eax); /* 0x12168F72: push eax */
    PUSH32(esp, edi); /* 0x12168F73: push edi */
    RECOMP_CALL(sub_121718B2); /* 0x12168F74: call 0x121718b2 */
    RECOMP_FLAGS_IN();
L_12168F79:
    /* test MEM8(esi + 0x8), 4 */ /* 0x12168F79: test byte ptr [esi + 8], 4 */
    _flag_a = (uint32_t)(MEM8(esi + 0x8)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12168FD7; /* 0x12168F7D: je 0x12168fd7 */
L_12168F7F:
    fp_push(*(float*)&MEM32(esi + 0x9C)); /* 0x12168F7F: fld dword ptr [esi + 0x9c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40u; /* 0x12168F85: sub esp, 0x40 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x38) = _v; } /* 0x12168F88: fstp qword ptr [esp + 0x38] */
    fp_push(*(float*)&MEM32(esi + 0x98)); /* 0x12168F8C: fld dword ptr [esi + 0x98] */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x30) = _v; } /* 0x12168F92: fstp qword ptr [esp + 0x30] */
    fp_push(*(float*)&MEM32(esi + 0x94)); /* 0x12168F96: fld dword ptr [esi + 0x94] */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x28) = _v; } /* 0x12168F9C: fstp qword ptr [esp + 0x28] */
    fp_push(*(float*)&MEM32(esi + 0x90)); /* 0x12168FA0: fld dword ptr [esi + 0x90] */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x20) = _v; } /* 0x12168FA6: fstp qword ptr [esp + 0x20] */
    fp_push(*(float*)&MEM32(esi + 0x8C)); /* 0x12168FAA: fld dword ptr [esi + 0x8c] */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x18) = _v; } /* 0x12168FB0: fstp qword ptr [esp + 0x18] */
    fp_push(*(float*)&MEM32(esi + 0x88)); /* 0x12168FB4: fld dword ptr [esi + 0x88] */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x10) = _v; } /* 0x12168FBA: fstp qword ptr [esp + 0x10] */
    fp_push(*(float*)&MEM32(esi + 0x84)); /* 0x12168FBE: fld dword ptr [esi + 0x84] */
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x12168FC4: fstp qword ptr [esp + 8] */
    fp_push(*(float*)&MEM32(esi + 0x80)); /* 0x12168FC8: fld dword ptr [esi + 0x80] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x12168FCE: fstp qword ptr [esp] */
    PUSH32(esp, edi); /* 0x12168FD1: push edi */
    RECOMP_CALL(sub_1217197C); /* 0x12168FD2: call 0x1217197c */
    RECOMP_FLAGS_IN();
L_12168FD7:
    eax = MEM32(esi + 0xC0); /* 0x12168FD7: mov eax, dword ptr [esi + 0xc0] */
    /* test eax, eax */ /* 0x12168FDD: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1216904C; /* 0x12168FDF: je 0x1216904c */
L_12168FE1:
    ecx = MEM32(esi + 0xBC); /* 0x12168FE1: mov ecx, dword ptr [esi + 0xbc] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x14u); /* 0x12168FE7: imul eax, eax, 0x14 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x12168FEA: add eax, ecx */
    _flag_k = FK_ADD;
    /* cmp ecx, eax */ /* 0x12168FEC: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_1216904C; /* 0x12168FEE: jae 0x1216904c */
L_12168FF0:
    ebx = ecx + 0x10; /* 0x12168FF0: lea ebx, [ecx + 0x10] */
L_12168FF3:
    eax = ebx + (-0x10); /* 0x12168FF3: lea eax, [ebx - 0x10] */
    PUSH32(esp, eax); /* 0x12168FF6: push eax */
    PUSH32(esp, edi); /* 0x12168FF7: push edi */
    RECOMP_CALL(sub_12168E44); /* 0x12168FF8: call 0x12168e44 */
    RECOMP_FLAGS_IN();
    /* cmp eax, 1 */ /* 0x12168FFD: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12169030; /* 0x12169000: je 0x12169030 */
L_12169002:
    /* cmp MEM8(ebx), 0 */ /* 0x12169002: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12169030; /* 0x12169005: je 0x12169030 */
L_12169007:
    /* test MEM8(ebx), 6 */ /* 0x12169007: test byte ptr [ebx], 6 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(6) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12169030; /* 0x1216900A: jne 0x12169030 */
L_1216900C:
    /* test MEM8(ebx + (-0xD)), 0x20u */ /* 0x1216900C: test byte ptr [ebx - 0xd], 0x20 */
    _flag_a = (uint32_t)(MEM8(ebx + (-0xD))) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12169020; /* 0x12169010: jne 0x12169020 */
L_12169012:
    /* cmp eax, 3 */ /* 0x12169012: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12169020; /* 0x12169015: je 0x12169020 */
L_12169017:
    /* test MEM32(edi + 0x6C), 0x00010000u */ /* 0x12169017: test dword ptr [edi + 0x6c], 0x10000 */
    _flag_a = (uint32_t)(MEM32(edi + 0x6C)); _flag_b = (uint32_t)(0x00010000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12169030; /* 0x1216901E: je 0x12169030 */
L_12169020:
    PUSH32(esp, MEM32(ebx + (-0x4))); /* 0x12169020: push dword ptr [ebx - 4] */
    eax = ebx + (-0x10); /* 0x12169023: lea eax, [ebx - 0x10] */
    PUSH32(esp, MEM32(ebx + (-0x8))); /* 0x12169026: push dword ptr [ebx - 8] */
    PUSH32(esp, eax); /* 0x12169029: push eax */
    PUSH32(esp, edi); /* 0x1216902A: push edi */
    RECOMP_CALL(sub_12171113); /* 0x1216902B: call 0x12171113 */
    RECOMP_FLAGS_IN();
L_12169030:
    ecx = MEM32(esi + 0xC0); /* 0x12169030: mov ecx, dword ptr [esi + 0xc0] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x14u); /* 0x12169036: imul ecx, ecx, 0x14 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0xBC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esi + 0xBC); /* 0x12169039: add ecx, dword ptr [esi + 0xbc] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x14u; /* 0x1216903F: add ebx, 0x14 */
    _flag_k = FK_ADD;
    eax = ebx + (-0x10); /* 0x12169042: lea eax, [ebx - 0x10] */
    /* cmp eax, ecx */ /* 0x12169045: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_12168FF3; /* 0x12169047: jb 0x12168ff3 */
L_12169049:
    ebx = MEM32(ebp + 0x8); /* 0x12169049: mov ebx, dword ptr [ebp + 8] */
L_1216904C:
    _flag_a = (uint32_t)((MEM32(ebx) | 0x400u)); _flag_b = (uint32_t)((MEM32(ebx) | 0x400u));
    MEM32(ebx) = MEM32(ebx) | 0x400u; /* 0x1216904C: or dword ptr [ebx], 0x400 */
    _cf = 0;
    _flag_k = FK_TEST;
    esi = POP32_VAL(esp); /* 0x12169052: pop esi */
L_12169053:
    edi = POP32_VAL(esp); /* 0x12169053: pop edi */
    ebx = POP32_VAL(esp); /* 0x12169054: pop ebx */
    ebp = POP32_VAL(esp); /* 0x12169055: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12169056: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1216905E(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1216905Eu);

L_1216905E:
    edi = edi; /* 0x1216905E: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12169060: push ebp */
    ebp = esp; /* 0x12169061: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x12169063: push ebx */
    PUSH32(esp, esi); /* 0x12169064: push esi */
    esi = MEM32(ebp + 0xC); /* 0x12169065: mov esi, dword ptr [ebp + 0xc] */
    PUSH32(esp, edi); /* 0x12169068: push edi */
    edi = MEM32(ebp + 0x8); /* 0x12169069: mov edi, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x1216906C: push esi */
    PUSH32(esp, edi); /* 0x1216906D: push edi */
    RECOMP_CALL(sub_12168ECF); /* 0x1216906E: call 0x12168ecf */
    RECOMP_FLAGS_IN();
    /* test MEM8(esi + 0x8), 8 */ /* 0x12169073: test byte ptr [esi + 8], 8 */
    _flag_a = (uint32_t)(MEM8(esi + 0x8)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12169089; /* 0x12169077: je 0x12169089 */
L_12169079:
    eax = (uint32_t)MEM16(esi + 0x14); /* 0x12169079: movzx eax, word ptr [esi + 0x14] */
    PUSH32(esp, eax); /* 0x1216907D: push eax */
    PUSH32(esp, MEM32(esi + 0x10)); /* 0x1216907E: push dword ptr [esi + 0x10] */
    PUSH32(esp, edi); /* 0x12169081: push edi */
    RECOMP_CALL(sub_12170659); /* 0x12169082: call 0x12170659 */
    RECOMP_FLAGS_IN();
    goto L_1216909A; /* 0x12169087: jmp 0x1216909a */
L_12169089:
    /* cmp MEM8(esi + 0x19), 3 */ /* 0x12169089: cmp byte ptr [esi + 0x19], 3 */
    _flag_a = (uint32_t)(MEM8(esi + 0x19)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1216909A; /* 0x1216908D: jne 0x1216909a */
L_1216908F:
    PUSH32(esp, 0x12013538u); /* 0x1216908F: push 0x12013538 */
    PUSH32(esp, edi); /* 0x12169094: push edi */
    RECOMP_CALL(sub_121687C1); /* 0x12169095: call 0x121687c1 */
    RECOMP_FLAGS_IN();
L_1216909A:
    /* test MEM8(esi + 0x8), 0x10u */ /* 0x1216909A: test byte ptr [esi + 8], 0x10 */
    _flag_a = (uint32_t)(MEM8(esi + 0x8)) << 24; _flag_b = (uint32_t)(0x10u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_121690E5; /* 0x1216909E: je 0x121690e5 */
L_121690A0:
    /* test MEM32(edi + 0x70), 0x00080000u */ /* 0x121690A0: test dword ptr [edi + 0x70], 0x80000 */
    _flag_a = (uint32_t)(MEM32(edi + 0x70)); _flag_b = (uint32_t)(0x00080000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121690CE; /* 0x121690A7: je 0x121690ce */
L_121690A9:
    /* cmp MEM8(esi + 0x19), 3 */ /* 0x121690A9: cmp byte ptr [esi + 0x19], 3 */
    _flag_a = (uint32_t)(MEM8(esi + 0x19)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_121690CE; /* 0x121690AD: jne 0x121690ce */
L_121690AF:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x121690AF: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    edx = 0; /* 0x121690B1: xor edx, edx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(eax), MEM16(esi + 0x16) */ /* 0x121690B3: cmp ax, word ptr [esi + 0x16] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(esi + 0x16)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_121690CE; /* 0x121690B7: jae 0x121690ce */
L_121690B9:
    eax = MEM32(esi + 0x4C); /* 0x121690B9: mov eax, dword ptr [esi + 0x4c] */
    ecx = edx + eax; /* 0x121690BC: lea ecx, [edx + eax] */
    _flag_a = (uint32_t)((LO8(eax) | 0xFFu)) << 24; _flag_b = (uint32_t)((LO8(eax) | 0xFFu)) << 24;
    SET_LO8(eax, LO8(eax) | 0xFFu); /* 0x121690BF: or al, 0xff */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(MEM8(ecx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    SET_LO8(eax, LO8(eax) - MEM8(ecx)); /* 0x121690C1: sub al, byte ptr [ecx] */
    _flag_k = FK_NARROW(FK_CMP, 24);
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(1);
    edx = edx + 1; /* 0x121690C3: inc edx */
    _flag_k = FK_INC;
    MEM8(ecx) = (uint8_t)(LO8(eax)); /* 0x121690C4: mov byte ptr [ecx], al */
    eax = (uint32_t)MEM16(esi + 0x16); /* 0x121690C6: movzx eax, word ptr [esi + 0x16] */
    /* cmp edx, eax */ /* 0x121690CA: cmp edx, eax */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_121690B9; /* 0x121690CC: jl 0x121690b9 */
L_121690CE:
    eax = (uint32_t)MEM8(esi + 0x19); /* 0x121690CE: movzx eax, byte ptr [esi + 0x19] */
    PUSH32(esp, eax); /* 0x121690D2: push eax */
    eax = (uint32_t)MEM16(esi + 0x16); /* 0x121690D3: movzx eax, word ptr [esi + 0x16] */
    PUSH32(esp, eax); /* 0x121690D7: push eax */
    eax = esi + 0x50; /* 0x121690D8: lea eax, [esi + 0x50] */
    PUSH32(esp, eax); /* 0x121690DB: push eax */
    PUSH32(esp, MEM32(esi + 0x4C)); /* 0x121690DC: push dword ptr [esi + 0x4c] */
    PUSH32(esp, edi); /* 0x121690DF: push edi */
    RECOMP_CALL(sub_12171C0B); /* 0x121690E0: call 0x12171c0b */
    RECOMP_FLAGS_IN();
L_121690E5:
    /* test MEM8(esi + 0x8), 0x20u */ /* 0x121690E5: test byte ptr [esi + 8], 0x20 */
    _flag_a = (uint32_t)(MEM8(esi + 0x8)) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_121690FA; /* 0x121690E9: je 0x121690fa */
L_121690EB:
    eax = (uint32_t)MEM8(esi + 0x19); /* 0x121690EB: movzx eax, byte ptr [esi + 0x19] */
    PUSH32(esp, eax); /* 0x121690EF: push eax */
    eax = esi + 0x5A; /* 0x121690F0: lea eax, [esi + 0x5a] */
    PUSH32(esp, eax); /* 0x121690F3: push eax */
    PUSH32(esp, edi); /* 0x121690F4: push edi */
    RECOMP_CALL(sub_12171D1D); /* 0x121690F5: call 0x12171d1d */
    RECOMP_FLAGS_IN();
L_121690FA:
    /* test MEM8(esi + 0x8), 0x40u */ /* 0x121690FA: test byte ptr [esi + 8], 0x40 */
    _flag_a = (uint32_t)(MEM8(esi + 0x8)) << 24; _flag_b = (uint32_t)(0x40u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1216910E; /* 0x121690FE: je 0x1216910e */
L_12169100:
    eax = (uint32_t)MEM16(esi + 0x14); /* 0x12169100: movzx eax, word ptr [esi + 0x14] */
    PUSH32(esp, eax); /* 0x12169104: push eax */
    PUSH32(esp, MEM32(esi + 0x7C)); /* 0x12169105: push dword ptr [esi + 0x7c] */
    PUSH32(esp, edi); /* 0x12169108: push edi */
    RECOMP_CALL(sub_12170719); /* 0x12169109: call 0x12170719 */
    RECOMP_FLAGS_IN();
L_1216910E:
    /* test MEM32(esi + 0x8), 0x100u */ /* 0x1216910E: test dword ptr [esi + 8], 0x100 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0x100u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12169128; /* 0x12169115: je 0x12169128 */
L_12169117:
    eax = (uint32_t)MEM8(esi + 0x6C); /* 0x12169117: movzx eax, byte ptr [esi + 0x6c] */
    PUSH32(esp, eax); /* 0x1216911B: push eax */
    PUSH32(esp, MEM32(esi + 0x68)); /* 0x1216911C: push dword ptr [esi + 0x68] */
    PUSH32(esp, MEM32(esi + 0x64)); /* 0x1216911F: push dword ptr [esi + 0x64] */
    PUSH32(esp, edi); /* 0x12169122: push edi */
    RECOMP_CALL(sub_12171E23); /* 0x12169123: call 0x12171e23 */
    RECOMP_FLAGS_IN();
L_12169128:
    /* test MEM32(esi + 0x8), 0x400u */ /* 0x12169128: test dword ptr [esi + 8], 0x400 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0x400u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12169165; /* 0x1216912F: je 0x12169165 */
L_12169131:
    PUSH32(esp, MEM32(esi + 0xB0)); /* 0x12169131: push dword ptr [esi + 0xb0] */
    eax = (uint32_t)MEM8(esi + 0xB5); /* 0x12169137: movzx eax, byte ptr [esi + 0xb5] */
    PUSH32(esp, MEM32(esi + 0xAC)); /* 0x1216913E: push dword ptr [esi + 0xac] */
    PUSH32(esp, eax); /* 0x12169144: push eax */
    eax = (uint32_t)MEM8(esi + 0xB4); /* 0x12169145: movzx eax, byte ptr [esi + 0xb4] */
    PUSH32(esp, eax); /* 0x1216914C: push eax */
    PUSH32(esp, MEM32(esi + 0xA8)); /* 0x1216914D: push dword ptr [esi + 0xa8] */
    PUSH32(esp, MEM32(esi + 0xA4)); /* 0x12169153: push dword ptr [esi + 0xa4] */
    PUSH32(esp, MEM32(esi + 0xA0)); /* 0x12169159: push dword ptr [esi + 0xa0] */
    PUSH32(esp, edi); /* 0x1216915F: push edi */
    RECOMP_CALL(sub_12170AE7); /* 0x12169160: call 0x12170ae7 */
    RECOMP_FLAGS_IN();
L_12169165:
    /* test MEM32(esi + 0x8), 0x4000u */ /* 0x12169165: test dword ptr [esi + 8], 0x4000 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0x4000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12169192; /* 0x1216916C: je 0x12169192 */
L_1216916E:
    fp_push(*(double*)ADDR(esi + 0xE8)); /* 0x1216916E: fld qword ptr [esi + 0xe8] */
    eax = (uint32_t)MEM8(esi + 0xDC); /* 0x12169174: movzx eax, byte ptr [esi + 0xdc] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x1216917B: sub esp, 0x10 */
    _flag_k = FK_CMP;
    { double _v = fp_pop(); *(double*)ADDR(esp + 0x8) = _v; } /* 0x1216917E: fstp qword ptr [esp + 8] */
    fp_push(*(double*)ADDR(esi + 0xE0)); /* 0x12169182: fld qword ptr [esi + 0xe0] */
    { double _v = fp_pop(); *(double*)ADDR(esp) = _v; } /* 0x12169188: fstp qword ptr [esp] */
    PUSH32(esp, eax); /* 0x1216918B: push eax */
    PUSH32(esp, edi); /* 0x1216918C: push edi */
    RECOMP_CALL(sub_12170C6D); /* 0x1216918D: call 0x12170c6d */
    RECOMP_FLAGS_IN();
L_12169192:
    /* test MEM8(esi + 0x8), 0x80u */ /* 0x12169192: test byte ptr [esi + 8], 0x80 */
    _flag_a = (uint32_t)(MEM8(esi + 0x8)) << 24; _flag_b = (uint32_t)(0x80u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_121691A9; /* 0x12169196: je 0x121691a9 */
L_12169198:
    eax = (uint32_t)MEM8(esi + 0x78); /* 0x12169198: movzx eax, byte ptr [esi + 0x78] */
    PUSH32(esp, eax); /* 0x1216919C: push eax */
    PUSH32(esp, MEM32(esi + 0x74)); /* 0x1216919D: push dword ptr [esi + 0x74] */
    PUSH32(esp, MEM32(esi + 0x70)); /* 0x121691A0: push dword ptr [esi + 0x70] */
    PUSH32(esp, edi); /* 0x121691A3: push edi */
    RECOMP_CALL(sub_12171E98); /* 0x121691A4: call 0x12171e98 */
    RECOMP_FLAGS_IN();
L_121691A9:
    ebx = 0x200u; /* 0x121691A9: mov ebx, 0x200 */
    /* test MEM32(esi + 0x8), ebx */ /* 0x121691AE: test dword ptr [esi + 8], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121691C0; /* 0x121691B1: je 0x121691c0 */
L_121691B3:
    eax = esi + 0x3C; /* 0x121691B3: lea eax, [esi + 0x3c] */
    PUSH32(esp, eax); /* 0x121691B6: push eax */
    PUSH32(esp, edi); /* 0x121691B7: push edi */
    RECOMP_CALL(sub_12171F0D); /* 0x121691B8: call 0x12171f0d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(edi + 0x68) | ebx)); _flag_b = (uint32_t)((MEM32(edi + 0x68) | ebx));
    MEM32(edi + 0x68) = MEM32(edi + 0x68) | ebx; /* 0x121691BD: or dword ptr [edi + 0x68], ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_121691C0:
    /* test MEM32(esi + 0x8), 0x2000u */ /* 0x121691C0: test dword ptr [esi + 8], 0x2000 */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(0x2000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121691F9; /* 0x121691C7: je 0x121691f9 */
L_121691C9:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x121691C9: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0xD8), ebx */ /* 0x121691CB: cmp dword ptr [esi + 0xd8], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0xD8)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_121691F9; /* 0x121691D1: jle 0x121691f9 */
L_121691D3:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ecx = 0; /* 0x121691D3: xor ecx, ecx */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + 0xC) = ecx; /* 0x121691D5: mov dword ptr [ebp + 0xc], ecx */
L_121691D8:
    eax = MEM32(esi + 0xD4); /* 0x121691D8: mov eax, dword ptr [esi + 0xd4] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x121691DE: add eax, ecx */
    _flag_k = FK_ADD;
    PUSH32(esp, eax); /* 0x121691E0: push eax */
    PUSH32(esp, edi); /* 0x121691E1: push edi */
    RECOMP_CALL(sub_12171731); /* 0x121691E2: call 0x12171731 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(ebp + 0xC); /* 0x121691E7: mov ecx, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x121691EA: inc ebx */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 0x10u; /* 0x121691EB: add ecx, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = ecx; /* 0x121691EE: mov dword ptr [ebp + 0xc], ecx */
    /* cmp ebx, MEM32(esi + 0xD8) */ /* 0x121691F1: cmp ebx, dword ptr [esi + 0xd8] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(esi + 0xD8));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_121691D8; /* 0x121691F7: jl 0x121691d8 */
L_121691F9:
    _flag_a = (uint32_t)(MEM32(ebp + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0; /* 0x121691F9: and dword ptr [ebp + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x30), 0 */ /* 0x121691FD: cmp dword ptr [esi + 0x30], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x30)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_12169271; /* 0x12169201: jle 0x12169271 */
L_12169203:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x12169203: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_12169205:
    eax = MEM32(esi + 0x38); /* 0x12169205: mov eax, dword ptr [esi + 0x38] */
    eax = MEM32(ebx + eax); /* 0x12169208: mov eax, dword ptr [ebx + eax] */
    /* test eax, eax */ /* 0x1216920B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1216921C; /* 0x1216920D: jle 0x1216921c */
L_1216920F:
    PUSH32(esp, 0x12013514u); /* 0x1216920F: push 0x12013514 */
    PUSH32(esp, edi); /* 0x12169214: push edi */
    RECOMP_CALL(sub_121687E9); /* 0x12169215: call 0x121687e9 */
    RECOMP_FLAGS_IN();
    goto L_12169258; /* 0x1216921A: jmp 0x12169258 */
L_1216921C:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_NE, _cf)) goto L_12169240; /* 0x1216921C: jne 0x12169240 */
L_1216921E:
    eax = MEM32(esi + 0x38); /* 0x1216921E: mov eax, dword ptr [esi + 0x38] */
    PUSH32(esp, MEM32(ebx + eax)); /* 0x12169221: push dword ptr [ebx + eax] */
    PUSH32(esp, 0); /* 0x12169224: push 0 */
    PUSH32(esp, MEM32(ebx + eax + 0x8)); /* 0x12169226: push dword ptr [ebx + eax + 8] */
    PUSH32(esp, MEM32(ebx + eax + 0x4)); /* 0x1216922A: push dword ptr [ebx + eax + 4] */
    PUSH32(esp, edi); /* 0x1216922E: push edi */
    RECOMP_CALL(sub_121709F0); /* 0x1216922F: call 0x121709f0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x38); /* 0x12169234: mov eax, dword ptr [esi + 0x38] */
    MEM32(ebx + eax) = 0xFFFFFFFEu; /* 0x12169237: mov dword ptr [ebx + eax], 0xfffffffe */
    goto L_12169262; /* 0x1216923E: jmp 0x12169262 */
L_12169240:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x12169240: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12169262; /* 0x12169243: jne 0x12169262 */
L_12169245:
    eax = MEM32(esi + 0x38); /* 0x12169245: mov eax, dword ptr [esi + 0x38] */
    PUSH32(esp, 0); /* 0x12169248: push 0 */
    PUSH32(esp, MEM32(ebx + eax + 0x8)); /* 0x1216924A: push dword ptr [ebx + eax + 8] */
    PUSH32(esp, MEM32(ebx + eax + 0x4)); /* 0x1216924E: push dword ptr [ebx + eax + 4] */
    PUSH32(esp, edi); /* 0x12169252: push edi */
    RECOMP_CALL(sub_1217093D); /* 0x12169253: call 0x1217093d */
    RECOMP_FLAGS_IN();
L_12169258:
    eax = MEM32(esi + 0x38); /* 0x12169258: mov eax, dword ptr [esi + 0x38] */
    MEM32(ebx + eax) = 0xFFFFFFFDu; /* 0x1216925B: mov dword ptr [ebx + eax], 0xfffffffd */
L_12169262:
    eax = MEM32(ebp + 0xC); /* 0x12169262: mov eax, dword ptr [ebp + 0xc] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x12169265: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x10u; /* 0x12169266: add ebx, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0xC) = eax; /* 0x12169269: mov dword ptr [ebp + 0xc], eax */
    /* cmp eax, MEM32(esi + 0x30) */ /* 0x1216926C: cmp eax, dword ptr [esi + 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x30));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_12169205; /* 0x1216926F: jl 0x12169205 */
L_12169271:
    eax = MEM32(esi + 0xC0); /* 0x12169271: mov eax, dword ptr [esi + 0xc0] */
    /* test eax, eax */ /* 0x12169277: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121692E8; /* 0x12169279: je 0x121692e8 */
L_1216927B:
    ebx = MEM32(esi + 0xBC); /* 0x1216927B: mov ebx, dword ptr [esi + 0xbc] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x14u); /* 0x12169281: imul eax, eax, 0x14 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ebx; /* 0x12169284: add eax, ebx */
    _flag_k = FK_ADD;
    /* cmp ebx, eax */ /* 0x12169286: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_121692E8; /* 0x12169288: jae 0x121692e8 */
L_1216928A:
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x10u; /* 0x1216928A: add ebx, 0x10 */
    _flag_k = FK_ADD;
L_1216928D:
    eax = ebx + (-0x10); /* 0x1216928D: lea eax, [ebx - 0x10] */
    PUSH32(esp, eax); /* 0x12169290: push eax */
    PUSH32(esp, edi); /* 0x12169291: push edi */
    RECOMP_CALL(sub_12168E44); /* 0x12169292: call 0x12168e44 */
    RECOMP_FLAGS_IN();
    /* cmp eax, 1 */ /* 0x12169297: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121692CF; /* 0x1216929A: je 0x121692cf */
L_1216929C:
    /* cmp MEM8(ebx), 0 */ /* 0x1216929C: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121692CF; /* 0x1216929F: je 0x121692cf */
L_121692A1:
    /* test MEM8(ebx), 2 */ /* 0x121692A1: test byte ptr [ebx], 2 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_121692CF; /* 0x121692A4: je 0x121692cf */
L_121692A6:
    /* test MEM8(ebx), 4 */ /* 0x121692A6: test byte ptr [ebx], 4 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121692CF; /* 0x121692A9: jne 0x121692cf */
L_121692AB:
    /* test MEM8(ebx + (-0xD)), 0x20u */ /* 0x121692AB: test byte ptr [ebx - 0xd], 0x20 */
    _flag_a = (uint32_t)(MEM8(ebx + (-0xD))) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121692BF; /* 0x121692AF: jne 0x121692bf */
L_121692B1:
    /* cmp eax, 3 */ /* 0x121692B1: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121692BF; /* 0x121692B4: je 0x121692bf */
L_121692B6:
    /* test MEM32(edi + 0x6C), 0x00010000u */ /* 0x121692B6: test dword ptr [edi + 0x6c], 0x10000 */
    _flag_a = (uint32_t)(MEM32(edi + 0x6C)); _flag_b = (uint32_t)(0x00010000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121692CF; /* 0x121692BD: je 0x121692cf */
L_121692BF:
    PUSH32(esp, MEM32(ebx + (-0x4))); /* 0x121692BF: push dword ptr [ebx - 4] */
    eax = ebx + (-0x10); /* 0x121692C2: lea eax, [ebx - 0x10] */
    PUSH32(esp, MEM32(ebx + (-0x8))); /* 0x121692C5: push dword ptr [ebx - 8] */
    PUSH32(esp, eax); /* 0x121692C8: push eax */
    PUSH32(esp, edi); /* 0x121692C9: push edi */
    RECOMP_CALL(sub_12171113); /* 0x121692CA: call 0x12171113 */
    RECOMP_FLAGS_IN();
L_121692CF:
    ecx = MEM32(esi + 0xC0); /* 0x121692CF: mov ecx, dword ptr [esi + 0xc0] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x14u); /* 0x121692D5: imul ecx, ecx, 0x14 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0xBC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esi + 0xBC); /* 0x121692D8: add ecx, dword ptr [esi + 0xbc] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x14u; /* 0x121692DE: add ebx, 0x14 */
    _flag_k = FK_ADD;
    eax = ebx + (-0x10); /* 0x121692E1: lea eax, [ebx - 0x10] */
    /* cmp eax, ecx */ /* 0x121692E4: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_1216928D; /* 0x121692E6: jb 0x1216928d */
L_121692E8:
    edi = POP32_VAL(esp); /* 0x121692E8: pop edi */
    esi = POP32_VAL(esp); /* 0x121692E9: pop esi */
    ebx = POP32_VAL(esp); /* 0x121692EA: pop ebx */
    ebp = POP32_VAL(esp); /* 0x121692EB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121692EC: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_121692F4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121692F4u);

L_121692F4:
    edi = edi; /* 0x121692F4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121692F6: push ebp */
    ebp = esp; /* 0x121692F7: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x121692F9: push ebx */
    PUSH32(esp, esi); /* 0x121692FA: push esi */
    PUSH32(esp, edi); /* 0x121692FB: push edi */
    edi = MEM32(ebp + 0x8); /* 0x121692FC: mov edi, dword ptr [ebp + 8] */
    ebx = edi + 0x68; /* 0x121692FF: lea ebx, [edi + 0x68] */
    /* test MEM8(ebx), 4 */ /* 0x12169302: test byte ptr [ebx], 4 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12169312; /* 0x12169305: jne 0x12169312 */
L_12169307:
    PUSH32(esp, 0x12013564u); /* 0x12169307: push 0x12013564 */
    PUSH32(esp, edi); /* 0x1216930C: push edi */
    RECOMP_CALL(sub_121687C1); /* 0x1216930D: call 0x121687c1 */
    RECOMP_FLAGS_IN();
L_12169312:
    esi = MEM32(ebp + 0xC); /* 0x12169312: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x12169315: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12169425; /* 0x12169317: je 0x12169425 */
L_1216931D:
    eax = 0x200u; /* 0x1216931D: mov eax, 0x200 */
    /* test MEM32(esi + 0x8), eax */ /* 0x12169322: test dword ptr [esi + 8], eax */
    _flag_a = (uint32_t)(MEM32(esi + 0x8)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12169335; /* 0x12169325: je 0x12169335 */
L_12169327:
    /* test MEM32(ebx), eax */ /* 0x12169327: test dword ptr [ebx], eax */
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12169335; /* 0x12169329: jne 0x12169335 */
L_1216932B:
    eax = esi + 0x3C; /* 0x1216932B: lea eax, [esi + 0x3c] */
    PUSH32(esp, eax); /* 0x1216932E: push eax */
    PUSH32(esp, edi); /* 0x1216932F: push edi */
    RECOMP_CALL(sub_12171F0D); /* 0x12169330: call 0x12171f0d */
    RECOMP_FLAGS_IN();
L_12169335:
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    MEM32(ebp + 0x8) = MEM32(ebp + 0x8) & 0; /* 0x12169335: and dword ptr [ebp + 8], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0x30), 0 */ /* 0x12169339: cmp dword ptr [esi + 0x30], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x30)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_121693B0; /* 0x1216933D: jle 0x121693b0 */
L_1216933F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1216933F: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_12169341:
    eax = MEM32(esi + 0x38); /* 0x12169341: mov eax, dword ptr [esi + 0x38] */
    eax = MEM32(ebx + eax); /* 0x12169344: mov eax, dword ptr [ebx + eax] */
    /* test eax, eax */ /* 0x12169347: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12169358; /* 0x12169349: jle 0x12169358 */
L_1216934B:
    PUSH32(esp, 0x12013514u); /* 0x1216934B: push 0x12013514 */
    PUSH32(esp, edi); /* 0x12169350: push edi */
    RECOMP_CALL(sub_121687E9); /* 0x12169351: call 0x121687e9 */
    RECOMP_FLAGS_IN();
    goto L_12169394; /* 0x12169356: jmp 0x12169394 */
L_12169358:
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_S, _cf)) goto L_1216937C; /* 0x12169358: js 0x1216937c */
L_1216935A:
    eax = MEM32(esi + 0x38); /* 0x1216935A: mov eax, dword ptr [esi + 0x38] */
    PUSH32(esp, MEM32(eax + ebx)); /* 0x1216935D: push dword ptr [eax + ebx] */
    PUSH32(esp, 0); /* 0x12169360: push 0 */
    PUSH32(esp, MEM32(eax + ebx + 0x8)); /* 0x12169362: push dword ptr [eax + ebx + 8] */
    PUSH32(esp, MEM32(eax + ebx + 0x4)); /* 0x12169366: push dword ptr [eax + ebx + 4] */
    PUSH32(esp, edi); /* 0x1216936A: push edi */
    RECOMP_CALL(sub_121709F0); /* 0x1216936B: call 0x121709f0 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0x38); /* 0x12169370: mov eax, dword ptr [esi + 0x38] */
    MEM32(ebx + eax) = 0xFFFFFFFEu; /* 0x12169373: mov dword ptr [ebx + eax], 0xfffffffe */
    goto L_1216939E; /* 0x1216937A: jmp 0x1216939e */
L_1216937C:
    /* cmp eax, 0xFFFFFFFFu */ /* 0x1216937C: cmp eax, -1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0xFFFFFFFFu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1216939E; /* 0x1216937F: jne 0x1216939e */
L_12169381:
    eax = MEM32(esi + 0x38); /* 0x12169381: mov eax, dword ptr [esi + 0x38] */
    PUSH32(esp, 0); /* 0x12169384: push 0 */
    PUSH32(esp, MEM32(eax + ebx + 0x8)); /* 0x12169386: push dword ptr [eax + ebx + 8] */
    PUSH32(esp, MEM32(eax + ebx + 0x4)); /* 0x1216938A: push dword ptr [eax + ebx + 4] */
    PUSH32(esp, edi); /* 0x1216938E: push edi */
    RECOMP_CALL(sub_1217093D); /* 0x1216938F: call 0x1217093d */
    RECOMP_FLAGS_IN();
L_12169394:
    eax = MEM32(esi + 0x38); /* 0x12169394: mov eax, dword ptr [esi + 0x38] */
    MEM32(ebx + eax) = 0xFFFFFFFDu; /* 0x12169397: mov dword ptr [ebx + eax], 0xfffffffd */
L_1216939E:
    eax = MEM32(ebp + 0x8); /* 0x1216939E: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x121693A1: inc eax */
    _flag_k = FK_INC;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x10u; /* 0x121693A2: add ebx, 0x10 */
    _flag_k = FK_ADD;
    MEM32(ebp + 0x8) = eax; /* 0x121693A5: mov dword ptr [ebp + 8], eax */
    /* cmp eax, MEM32(esi + 0x30) */ /* 0x121693A8: cmp eax, dword ptr [esi + 0x30] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0x30));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_12169341; /* 0x121693AB: jl 0x12169341 */
L_121693AD:
    ebx = edi + 0x68; /* 0x121693AD: lea ebx, [edi + 0x68] */
L_121693B0:
    eax = MEM32(esi + 0xC0); /* 0x121693B0: mov eax, dword ptr [esi + 0xc0] */
    /* test eax, eax */ /* 0x121693B6: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12169425; /* 0x121693B8: je 0x12169425 */
L_121693BA:
    ecx = MEM32(esi + 0xBC); /* 0x121693BA: mov ecx, dword ptr [esi + 0xbc] */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x14u); /* 0x121693C0: imul eax, eax, 0x14 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + ecx; /* 0x121693C3: add eax, ecx */
    _flag_k = FK_ADD;
    /* cmp ecx, eax */ /* 0x121693C5: cmp ecx, eax */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_12169425; /* 0x121693C7: jae 0x12169425 */
L_121693C9:
    ebx = ecx + 0x10; /* 0x121693C9: lea ebx, [ecx + 0x10] */
L_121693CC:
    eax = ebx + (-0x10); /* 0x121693CC: lea eax, [ebx - 0x10] */
    PUSH32(esp, eax); /* 0x121693CF: push eax */
    PUSH32(esp, edi); /* 0x121693D0: push edi */
    RECOMP_CALL(sub_12168E44); /* 0x121693D1: call 0x12168e44 */
    RECOMP_FLAGS_IN();
    /* cmp eax, 1 */ /* 0x121693D6: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12169409; /* 0x121693D9: je 0x12169409 */
L_121693DB:
    /* cmp MEM8(ebx), 0 */ /* 0x121693DB: cmp byte ptr [ebx], 0 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(0) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12169409; /* 0x121693DE: je 0x12169409 */
L_121693E0:
    /* test MEM8(ebx), 8 */ /* 0x121693E0: test byte ptr [ebx], 8 */
    _flag_a = (uint32_t)(MEM8(ebx)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_12169409; /* 0x121693E3: je 0x12169409 */
L_121693E5:
    /* test MEM8(ebx + (-0xD)), 0x20u */ /* 0x121693E5: test byte ptr [ebx - 0xd], 0x20 */
    _flag_a = (uint32_t)(MEM8(ebx + (-0xD))) << 24; _flag_b = (uint32_t)(0x20u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121693F9; /* 0x121693E9: jne 0x121693f9 */
L_121693EB:
    /* cmp eax, 3 */ /* 0x121693EB: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121693F9; /* 0x121693EE: je 0x121693f9 */
L_121693F0:
    /* test MEM32(edi + 0x6C), 0x00010000u */ /* 0x121693F0: test dword ptr [edi + 0x6c], 0x10000 */
    _flag_a = (uint32_t)(MEM32(edi + 0x6C)); _flag_b = (uint32_t)(0x00010000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12169409; /* 0x121693F7: je 0x12169409 */
L_121693F9:
    PUSH32(esp, MEM32(ebx + (-0x4))); /* 0x121693F9: push dword ptr [ebx - 4] */
    eax = ebx + (-0x10); /* 0x121693FC: lea eax, [ebx - 0x10] */
    PUSH32(esp, MEM32(ebx + (-0x8))); /* 0x121693FF: push dword ptr [ebx - 8] */
    PUSH32(esp, eax); /* 0x12169402: push eax */
    PUSH32(esp, edi); /* 0x12169403: push edi */
    RECOMP_CALL(sub_12171113); /* 0x12169404: call 0x12171113 */
    RECOMP_FLAGS_IN();
L_12169409:
    ecx = MEM32(esi + 0xC0); /* 0x12169409: mov ecx, dword ptr [esi + 0xc0] */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x14u); /* 0x1216940F: imul ecx, ecx, 0x14 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(MEM32(esi + 0xBC));
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + MEM32(esi + 0xBC); /* 0x12169412: add ecx, dword ptr [esi + 0xbc] */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x14u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 0x14u; /* 0x12169418: add ebx, 0x14 */
    _flag_k = FK_ADD;
    eax = ebx + (-0x10); /* 0x1216941B: lea eax, [ebx - 0x10] */
    /* cmp eax, ecx */ /* 0x1216941E: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_B(_flag_a, _flag_b)) goto L_121693CC; /* 0x12169420: jb 0x121693cc */
L_12169422:
    ebx = edi + 0x68; /* 0x12169422: lea ebx, [edi + 0x68] */
L_12169425:
    _flag_a = (uint32_t)((MEM32(ebx) | 8)); _flag_b = (uint32_t)((MEM32(ebx) | 8));
    MEM32(ebx) = MEM32(ebx) | 8; /* 0x12169425: or dword ptr [ebx], 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x12169428: push edi */
    RECOMP_CALL(sub_12171553); /* 0x12169429: call 0x12171553 */
    RECOMP_FLAGS_IN();
    edi = POP32_VAL(esp); /* 0x1216942E: pop edi */
    esi = POP32_VAL(esp); /* 0x1216942F: pop esi */
    ebx = POP32_VAL(esp); /* 0x12169430: pop ebx */
    ebp = POP32_VAL(esp); /* 0x12169431: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12169432: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_1216943A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1216943Au);

L_1216943A:
    edi = edi; /* 0x1216943A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1216943C: push ebp */
    ebp = esp; /* 0x1216943D: mov ebp, esp */
    PUSH32(esp, ebx); /* 0x1216943F: push ebx */
    PUSH32(esp, esi); /* 0x12169440: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12169441: mov esi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x12169444: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(esi + 0xE4), ebx */ /* 0x12169446: cmp dword ptr [esi + 0xe4], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0xE4)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12169470; /* 0x1216944C: jne 0x12169470 */
L_1216944E:
    /* cmp MEM8(esi + 0x124), LO8(ebx) */ /* 0x1216944E: cmp byte ptr [esi + 0x124], bl */
    _flag_a = (uint32_t)(MEM8(esi + 0x124)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12169470; /* 0x12169454: jne 0x12169470 */
L_12169456:
    /* test MEM32(esi + 0x68), 0x400u */ /* 0x12169456: test dword ptr [esi + 0x68], 0x400 */
    _flag_a = (uint32_t)(MEM32(esi + 0x68)); _flag_b = (uint32_t)(0x400u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1216946A; /* 0x1216945D: jne 0x1216946a */
L_1216945F:
    PUSH32(esp, 0x12013580u); /* 0x1216945F: push 0x12013580 */
    PUSH32(esp, esi); /* 0x12169464: push esi */
    RECOMP_CALL(sub_121687C1); /* 0x12169465: call 0x121687c1 */
    RECOMP_FLAGS_IN();
L_1216946A:
    PUSH32(esp, esi); /* 0x1216946A: push esi */
    RECOMP_CALL(sub_12170D51); /* 0x1216946B: call 0x12170d51 */
    RECOMP_FLAGS_IN();
L_12169470:
    /* cmp MEM8(esi + 0x123), LO8(ebx) */ /* 0x12169470: cmp byte ptr [esi + 0x123], bl */
    _flag_a = (uint32_t)(MEM8(esi + 0x123)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121694B4; /* 0x12169476: je 0x121694b4 */
L_12169478:
    /* test MEM8(esi + 0x70), 2 */ /* 0x12169478: test byte ptr [esi + 0x70], 2 */
    _flag_a = (uint32_t)(MEM8(esi + 0x70)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_121694B4; /* 0x1216947C: je 0x121694b4 */
L_1216947E:
    eax = (uint32_t)MEM8(esi + 0x124); /* 0x1216947E: movzx eax, byte ptr [esi + 0x124] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ebx; /* 0x12169485: sub eax, ebx */
    _flag_k = FK_CMP;
    if (/* sub result */ CMP_EQ(_flag_a, _flag_b)) goto L_12169552; /* 0x12169487: je 0x12169552 */
L_1216948D:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1216948D: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1216953A; /* 0x1216948E: je 0x1216953a */
L_12169494:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x12169494: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1216952E; /* 0x12169495: je 0x1216952e */
L_1216949B:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1216949B: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_1216951C; /* 0x1216949C: je 0x1216951c */
L_1216949E:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x1216949E: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_12169510; /* 0x1216949F: je 0x12169510 */
L_121694A1:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x121694A1: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_EQ(_flag_a, _flag_b)) goto L_121694FE; /* 0x121694A2: je 0x121694fe */
L_121694A4:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax - 1; /* 0x121694A4: dec eax */
    _flag_k = FK_DEC;
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_121694B4; /* 0x121694A5: jne 0x121694b4 */
L_121694A7:
    /* test MEM8(esi + 0xE4), 1 */ /* 0x121694A7: test byte ptr [esi + 0xe4], 1 */
    _flag_a = (uint32_t)(MEM8(esi + 0xE4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1216955F; /* 0x121694AE: je 0x1216955f */
L_121694B4:
    SET_LO8(eax, MEM8(esi + 0x126)); /* 0x121694B4: mov al, byte ptr [esi + 0x126] */
    SET_LO8(ecx, MEM8(esi + 0x12B)); /* 0x121694BA: mov cl, byte ptr [esi + 0x12b] */
    edx = MEM32(esi + 0xD4); /* 0x121694C0: mov edx, dword ptr [esi + 0xd4] */
    MEM8(esi + 0x108) = (uint8_t)(LO8(eax)); /* 0x121694C6: mov byte ptr [esi + 0x108], al */
    SET_LO8(eax, MEM8(esi + 0x128)); /* 0x121694CC: mov al, byte ptr [esi + 0x128] */
    MEM8(esi + 0x109) = (uint8_t)(LO8(eax)); /* 0x121694D2: mov byte ptr [esi + 0x109], al */
    { int32_t _r = (int32_t)(int8_t)LO8(eax) * (int8_t)(LO8(ecx)); /* 0x121694D8: imul cl */
      SET_LO16(eax, (uint16_t)_r); uint32_t _ov = _r != (int8_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    PUSH32(esp, edi); /* 0x121694DA: push edi */
    edi = esi + 0x100; /* 0x121694DB: lea edi, [esi + 0x100] */
    MEM8(esi + 0x10B) = (uint8_t)(LO8(eax)); /* 0x121694E1: mov byte ptr [esi + 0x10b], al */
    /* cmp LO8(eax), 8 */ /* 0x121694E7: cmp al, 8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    MEM32(edi) = edx; /* 0x121694E9: mov dword ptr [edi], edx */
    MEM8(esi + 0x10A) = (uint8_t)(LO8(ecx)); /* 0x121694EB: mov byte ptr [esi + 0x10a], cl */
    eax = (uint32_t)LO8(eax); /* 0x121694F1: movzx eax, al */
    if (CMP_B(_flag_a, _flag_b)) goto L_1216956A; /* 0x121694F4: jb 0x1216956a */
L_121694F6:
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x121694F6: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x121694F6: shr eax, 3 */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx); /* 0x121694F9: imul eax, edx */
    goto L_12169573; /* 0x121694FC: jmp 0x12169573 */
L_121694FE:
    /* test MEM8(esi + 0xE4), 1 */ /* 0x121694FE: test byte ptr [esi + 0xe4], 1 */
    _flag_a = (uint32_t)(MEM8(esi + 0xE4)) << 24; _flag_b = (uint32_t)(1) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1216955F; /* 0x12169505: jne 0x1216955f */
L_12169507:
    /* cmp MEM32(esi + 0xC8), 2 */ /* 0x12169507: cmp dword ptr [esi + 0xc8], 2 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC8)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_1216954A; /* 0x1216950E: jmp 0x1216954a */
L_12169510:
    eax = MEM32(esi + 0xE4); /* 0x12169510: mov eax, dword ptr [esi + 0xe4] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(3) << 24;
    SET_LO8(eax, LO8(eax) & 3); /* 0x12169516: and al, 3 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* cmp LO8(eax), 2 */ /* 0x12169518: cmp al, 2 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    goto L_12169559; /* 0x1216951A: jmp 0x12169559 */
L_1216951C:
    /* test MEM8(esi + 0xE4), 3 */ /* 0x1216951C: test byte ptr [esi + 0xe4], 3 */
    _flag_a = (uint32_t)(MEM8(esi + 0xE4)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1216955F; /* 0x12169523: jne 0x1216955f */
L_12169525:
    /* cmp MEM32(esi + 0xC8), 3 */ /* 0x12169525: cmp dword ptr [esi + 0xc8], 3 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC8)); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    goto L_1216954A; /* 0x1216952C: jmp 0x1216954a */
L_1216952E:
    eax = MEM32(esi + 0xE4); /* 0x1216952E: mov eax, dword ptr [esi + 0xe4] */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(7) << 24;
    SET_LO8(eax, LO8(eax) & 7); /* 0x12169534: and al, 7 */
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    /* cmp LO8(eax), 4 */ /* 0x12169536: cmp al, 4 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    goto L_12169559; /* 0x12169538: jmp 0x12169559 */
L_1216953A:
    /* test MEM8(esi + 0xE4), 7 */ /* 0x1216953A: test byte ptr [esi + 0xe4], 7 */
    _flag_a = (uint32_t)(MEM8(esi + 0xE4)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1216955F; /* 0x12169541: jne 0x1216955f */
L_12169543:
    /* cmp MEM32(esi + 0xC8), 5 */ /* 0x12169543: cmp dword ptr [esi + 0xc8], 5 */
    _flag_a = (uint32_t)(MEM32(esi + 0xC8)); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
L_1216954A:
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_AE, _cf)) goto L_121694B4; /* 0x1216954A: jae 0x121694b4 */
L_12169550:
    goto L_1216955F; /* 0x12169550: jmp 0x1216955f */
L_12169552:
    /* test MEM8(esi + 0xE4), 7 */ /* 0x12169552: test byte ptr [esi + 0xe4], 7 */
    _flag_a = (uint32_t)(MEM8(esi + 0xE4)) << 24; _flag_b = (uint32_t)(7) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
L_12169559:
    RECOMP_BACKEDGE();
    if (recomp_cond_cf(_flag_k, _flag_a, _flag_b, CC_E, _cf)) goto L_121694B4; /* 0x12169559: je 0x121694b4 */
L_1216955F:
    PUSH32(esp, esi); /* 0x1216955F: push esi */
    RECOMP_CALL(sub_12171FB0); /* 0x12169560: call 0x12171fb0 */
    RECOMP_FLAGS_IN();
    goto L_121695EF; /* 0x12169565: jmp 0x121695ef */
L_1216956A:
    eax = (uint32_t)((int32_t)eax * (int32_t)edx); /* 0x1216956A: imul eax, edx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x1216956D: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x12169570: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x12169570: shr eax, 3 */
L_12169573:
    PUSH32(esp, eax); /* 0x12169573: push eax */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12169574: push dword ptr [ebp + 0xc] */
    MEM32(esi + 0x104) = eax; /* 0x12169577: mov dword ptr [esi + 0x104], eax */
    eax = MEM32(esi + 0xEC); /* 0x1216957D: mov eax, dword ptr [esi + 0xec] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x12169583: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x12169584: push eax */
    PUSH32(esp, esi); /* 0x12169585: push esi */
    RECOMP_CALL(sub_121701C8); /* 0x12169586: call 0x121701c8 */
    RECOMP_FLAGS_IN();
    /* cmp MEM8(esi + 0x123), LO8(ebx) */ /* 0x1216958B: cmp byte ptr [esi + 0x123], bl */
    _flag_a = (uint32_t)(MEM8(esi + 0x123)) << 24; _flag_b = (uint32_t)(LO8(ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121695C1; /* 0x12169591: je 0x121695c1 */
L_12169593:
    SET_LO8(eax, MEM8(esi + 0x124)); /* 0x12169593: mov al, byte ptr [esi + 0x124] */
    /* cmp LO8(eax), 6 */ /* 0x12169599: cmp al, 6 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(6) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_AE(_flag_a, _flag_b)) goto L_121695C1; /* 0x1216959B: jae 0x121695c1 */
L_1216959D:
    /* test MEM8(esi + 0x70), 2 */ /* 0x1216959D: test byte ptr [esi + 0x70], 2 */
    _flag_a = (uint32_t)(MEM8(esi + 0x70)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_121695C1; /* 0x121695A1: je 0x121695c1 */
L_121695A3:
    eax = (uint32_t)LO8(eax); /* 0x121695A3: movzx eax, al */
    PUSH32(esp, eax); /* 0x121695A6: push eax */
    eax = MEM32(esi + 0xEC); /* 0x121695A7: mov eax, dword ptr [esi + 0xec] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x121695AD: inc eax */
    _flag_k = FK_INC;
    PUSH32(esp, eax); /* 0x121695AE: push eax */
    PUSH32(esp, edi); /* 0x121695AF: push edi */
    RECOMP_CALL(sub_12170E9B); /* 0x121695B0: call 0x12170e9b */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(edi), ebx */ /* 0x121695B5: cmp dword ptr [edi], ebx */
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121695C1; /* 0x121695B7: jne 0x121695c1 */
L_121695B9:
    PUSH32(esp, esi); /* 0x121695B9: push esi */
    RECOMP_CALL(sub_12171FB0); /* 0x121695BA: call 0x12171fb0 */
    RECOMP_FLAGS_IN();
    goto L_121695EE; /* 0x121695BF: jmp 0x121695ee */
L_121695C1:
    /* cmp MEM32(esi + 0x70), ebx */ /* 0x121695C1: cmp dword ptr [esi + 0x70], ebx */
    _flag_a = (uint32_t)(MEM32(esi + 0x70)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121695CC; /* 0x121695C4: je 0x121695cc */
L_121695C6:
    PUSH32(esp, esi); /* 0x121695C6: push esi */
    RECOMP_CALL(sub_12173438); /* 0x121695C7: call 0x12173438 */
    RECOMP_FLAGS_IN();
L_121695CC:
    PUSH32(esp, edi); /* 0x121695CC: push edi */
    PUSH32(esp, esi); /* 0x121695CD: push esi */
    RECOMP_CALL(sub_121722AC); /* 0x121695CE: call 0x121722ac */
    RECOMP_FLAGS_IN();
    ecx = MEM32(esi + 0x19C); /* 0x121695D3: mov ecx, dword ptr [esi + 0x19c] */
    /* test ecx, ecx */ /* 0x121695D9: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_121695EE; /* 0x121695DB: je 0x121695ee */
L_121695DD:
    eax = (uint32_t)MEM8(esi + 0x124); /* 0x121695DD: movzx eax, byte ptr [esi + 0x124] */
    PUSH32(esp, eax); /* 0x121695E4: push eax */
    PUSH32(esp, MEM32(esi + 0xE4)); /* 0x121695E5: push dword ptr [esi + 0xe4] */
    PUSH32(esp, esi); /* 0x121695EB: push esi */
    RECOMP_ICALL(ecx); /* 0x121695EC: call ecx */
    RECOMP_FLAGS_IN();
L_121695EE:
    edi = POP32_VAL(esp); /* 0x121695EE: pop edi */
L_121695EF:
    esi = POP32_VAL(esp); /* 0x121695EF: pop esi */
    ebx = POP32_VAL(esp); /* 0x121695F0: pop ebx */
    ebp = POP32_VAL(esp); /* 0x121695F1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x121695F2: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_121695FA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121695FAu);

L_121695FA:
    edi = edi; /* 0x121695FA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121695FC: push ebp */
    ebp = esp; /* 0x121695FD: mov ebp, esp */
    PUSH32(esp, esi); /* 0x121695FF: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12169600: mov esi, dword ptr [ebp + 8] */
    eax = MEM32(esi + 0xE4); /* 0x12169603: mov eax, dword ptr [esi + 0xe4] */
    /* cmp eax, MEM32(esi + 0xD0) */ /* 0x12169609: cmp eax, dword ptr [esi + 0xd0] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(esi + 0xD0));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_AE(_flag_a, _flag_b)) goto L_121696B7; /* 0x1216960F: jae 0x121696b7 */
L_12169615:
    PUSH32(esp, edi); /* 0x12169615: push edi */
    edi = esi + 0x74; /* 0x12169616: lea edi, [esi + 0x74] */
L_12169619:
    PUSH32(esp, 2); /* 0x12169619: push 2 */
    PUSH32(esp, edi); /* 0x1216961B: push edi */
    RECOMP_CALL(sub_121AC94F); /* 0x1216961C: call 0x121ac94f */
    RECOMP_FLAGS_IN();
    /* test eax, eax */ /* 0x12169621: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1216963D; /* 0x12169623: je 0x1216963d */
L_12169625:
    eax = MEM32(esi + 0x8C); /* 0x12169625: mov eax, dword ptr [esi + 0x8c] */
    /* test eax, eax */ /* 0x1216962B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12169632; /* 0x1216962D: je 0x12169632 */
L_1216962F:
    PUSH32(esp, eax); /* 0x1216962F: push eax */
    goto L_12169637; /* 0x12169630: jmp 0x12169637 */
L_12169632:
    PUSH32(esp, 0x120135B8u); /* 0x12169632: push 0x120135b8 */
L_12169637:
    PUSH32(esp, esi); /* 0x12169637: push esi */
    RECOMP_CALL(sub_121687C1); /* 0x12169638: call 0x121687c1 */
    RECOMP_FLAGS_IN();
L_1216963D:
    /* cmp MEM32(esi + 0x84), 0 */ /* 0x1216963D: cmp dword ptr [esi + 0x84], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x84)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12169672; /* 0x12169644: jne 0x12169672 */
L_12169646:
    PUSH32(esp, MEM32(esi + 0xB0)); /* 0x12169646: push dword ptr [esi + 0xb0] */
    PUSH32(esp, MEM32(esi + 0xAC)); /* 0x1216964C: push dword ptr [esi + 0xac] */
    PUSH32(esp, esi); /* 0x12169652: push esi */
    RECOMP_CALL(sub_12171425); /* 0x12169653: call 0x12171425 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xAC); /* 0x12169658: mov eax, dword ptr [esi + 0xac] */
    MEM32(esi + 0x80) = eax; /* 0x1216965E: mov dword ptr [esi + 0x80], eax */
    eax = MEM32(esi + 0xB0); /* 0x12169664: mov eax, dword ptr [esi + 0xb0] */
    MEM32(esi + 0x84) = eax; /* 0x1216966A: mov dword ptr [esi + 0x84], eax */
    RECOMP_BACKEDGE();
    goto L_12169619; /* 0x12169670: jmp 0x12169619 */
L_12169672:
    eax = MEM32(esi + 0xB0); /* 0x12169672: mov eax, dword ptr [esi + 0xb0] */
    ecx = MEM32(esi + 0x84); /* 0x12169678: mov ecx, dword ptr [esi + 0x84] */
    edi = POP32_VAL(esp); /* 0x1216967E: pop edi */
    /* cmp eax, ecx */ /* 0x1216967F: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121696AA; /* 0x12169681: je 0x121696aa */
L_12169683:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    eax = eax - ecx; /* 0x12169683: sub eax, ecx */
    _flag_k = FK_CMP;
    PUSH32(esp, eax); /* 0x12169685: push eax */
    PUSH32(esp, MEM32(esi + 0xAC)); /* 0x12169686: push dword ptr [esi + 0xac] */
    PUSH32(esp, esi); /* 0x1216968C: push esi */
    RECOMP_CALL(sub_12171425); /* 0x1216968D: call 0x12171425 */
    RECOMP_FLAGS_IN();
    eax = MEM32(esi + 0xAC); /* 0x12169692: mov eax, dword ptr [esi + 0xac] */
    MEM32(esi + 0x80) = eax; /* 0x12169698: mov dword ptr [esi + 0x80], eax */
    eax = MEM32(esi + 0xB0); /* 0x1216969E: mov eax, dword ptr [esi + 0xb0] */
    MEM32(esi + 0x84) = eax; /* 0x121696A4: mov dword ptr [esi + 0x84], eax */
L_121696AA:
    _flag_a = (uint32_t)(MEM32(esi + 0x154)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x154) = MEM32(esi + 0x154) & 0; /* 0x121696AA: and dword ptr [esi + 0x154], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x121696B1: push esi */
    RECOMP_CALL(sub_12169C8A); /* 0x121696B2: call 0x12169c8a */
    RECOMP_FLAGS_IN();
L_121696B7:
    esi = POP32_VAL(esp); /* 0x121696B7: pop esi */
    ebp = POP32_VAL(esp); /* 0x121696B8: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121696B9: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_121696C1(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121696C1u);

L_121696C1:
    edi = edi; /* 0x121696C1: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121696C3: push ebp */
    ebp = esp; /* 0x121696C4: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x40u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x40u; /* 0x121696C6: sub esp, 0x40 */
    _flag_k = FK_CMP;
    PUSH32(esp, ebx); /* 0x121696C9: push ebx */
    ebx = MEM32(ebp + 0x8); /* 0x121696CA: mov ebx, dword ptr [ebp + 8] */
    PUSH32(esp, esi); /* 0x121696CD: push esi */
    PUSH32(esp, edi); /* 0x121696CE: push edi */
    eax = ebx + 0x74; /* 0x121696CF: lea eax, [ebx + 0x74] */
    PUSH32(esp, eax); /* 0x121696D2: push eax */
    RECOMP_CALL(sub_121ACC02); /* 0x121696D3: call 0x121acc02 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebx + 0xAC)); /* 0x121696D8: push dword ptr [ebx + 0xac] */
    PUSH32(esp, ebx); /* 0x121696DE: push ebx */
    RECOMP_CALL(sub_121701A5); /* 0x121696DF: call 0x121701a5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebx + 0xEC)); /* 0x121696E4: push dword ptr [ebx + 0xec] */
    PUSH32(esp, ebx); /* 0x121696EA: push ebx */
    RECOMP_CALL(sub_121701A5); /* 0x121696EB: call 0x121701a5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebx + 0xE8)); /* 0x121696F0: push dword ptr [ebx + 0xe8] */
    PUSH32(esp, ebx); /* 0x121696F6: push ebx */
    RECOMP_CALL(sub_121701A5); /* 0x121696F7: call 0x121701a5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebx + 0xF0)); /* 0x121696FC: push dword ptr [ebx + 0xf0] */
    PUSH32(esp, ebx); /* 0x12169702: push ebx */
    RECOMP_CALL(sub_121701A5); /* 0x12169703: call 0x121701a5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebx + 0xF4)); /* 0x12169708: push dword ptr [ebx + 0xf4] */
    PUSH32(esp, ebx); /* 0x1216970E: push ebx */
    RECOMP_CALL(sub_121701A5); /* 0x1216970F: call 0x121701a5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebx + 0xF8)); /* 0x12169714: push dword ptr [ebx + 0xf8] */
    PUSH32(esp, ebx); /* 0x1216971A: push ebx */
    RECOMP_CALL(sub_121701A5); /* 0x1216971B: call 0x121701a5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebx + 0xFC)); /* 0x12169720: push dword ptr [ebx + 0xfc] */
    PUSH32(esp, ebx); /* 0x12169726: push ebx */
    RECOMP_CALL(sub_121701A5); /* 0x12169727: call 0x121701a5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebx + 0x210)); /* 0x1216972C: push dword ptr [ebx + 0x210] */
    PUSH32(esp, ebx); /* 0x12169732: push ebx */
    RECOMP_CALL(sub_121701A5); /* 0x12169733: call 0x121701a5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebx + 0x1FC)); /* 0x12169738: push dword ptr [ebx + 0x1fc] */
    PUSH32(esp, ebx); /* 0x1216973E: push ebx */
    RECOMP_CALL(sub_121701A5); /* 0x1216973F: call 0x121701a5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebx + 0x200)); /* 0x12169744: push dword ptr [ebx + 0x200] */
    PUSH32(esp, ebx); /* 0x1216974A: push ebx */
    RECOMP_CALL(sub_121701A5); /* 0x1216974B: call 0x121701a5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebx + 0x204)); /* 0x12169750: push dword ptr [ebx + 0x204] */
    PUSH32(esp, ebx); /* 0x12169756: push ebx */
    RECOMP_CALL(sub_121701A5); /* 0x12169757: call 0x121701a5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebx + 0x208)); /* 0x1216975C: push dword ptr [ebx + 0x208] */
    PUSH32(esp, ebx); /* 0x12169762: push ebx */
    RECOMP_CALL(sub_121701A5); /* 0x12169763: call 0x121701a5 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, MEM32(ebx + 0x20C)); /* 0x12169768: push dword ptr [ebx + 0x20c] */
    PUSH32(esp, ebx); /* 0x1216976E: push ebx */
    RECOMP_CALL(sub_121701A5); /* 0x1216976F: call 0x121701a5 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x12169774: mov eax, dword ptr [ebp + 8] */
    PUSH32(esp, 0x10u); /* 0x12169777: push 0x10 */
    ecx = POP32_VAL(esp); /* 0x12169779: pop ecx */
    PUSH32(esp, 0x250u); /* 0x1216977A: push 0x250 */
    esi = ebx; /* 0x1216977F: mov esi, ebx */
    edi = ebp + (-0x40); /* 0x12169781: lea edi, [ebp - 0x40] */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x12169784: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = MEM32(ebx + 0x40); /* 0x12169786: mov edi, dword ptr [ebx + 0x40] */
    ebx = MEM32(ebx + 0x44); /* 0x12169789: mov ebx, dword ptr [ebx + 0x44] */
    esi = MEM32(eax + 0x48); /* 0x1216978C: mov esi, dword ptr [eax + 0x48] */
    PUSH32(esp, 0); /* 0x1216978F: push 0 */
    PUSH32(esp, eax); /* 0x12169791: push eax */
    RECOMP_CALL(sub_121BF434); /* 0x12169792: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x8); /* 0x12169797: mov eax, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1216979A: add esp, 0xc */
    _flag_k = FK_ADD;
    PUSH32(esp, 0x10u); /* 0x1216979D: push 0x10 */
    MEM32(eax + 0x40) = edi; /* 0x1216979F: mov dword ptr [eax + 0x40], edi */
    MEM32(eax + 0x48) = esi; /* 0x121697A2: mov dword ptr [eax + 0x48], esi */
    ecx = POP32_VAL(esp); /* 0x121697A5: pop ecx */
    esi = ebp + (-0x40); /* 0x121697A6: lea esi, [ebp - 0x40] */
    edi = eax; /* 0x121697A9: mov edi, eax */
    while (ecx) { MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; --ecx; } /* 0x121697AB: rep movsd dword ptr es:[edi], dword ptr [esi] */
    edi = POP32_VAL(esp); /* 0x121697AD: pop edi */
    esi = POP32_VAL(esp); /* 0x121697AE: pop esi */
    MEM32(eax + 0x44) = ebx; /* 0x121697AF: mov dword ptr [eax + 0x44], ebx */
    ebx = POP32_VAL(esp); /* 0x121697B2: pop ebx */
    esp = ebp; ebp = POP32_VAL(esp); /* 0x121697B3: leave  */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x121697B4: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_121697BC(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x121697BCu);

L_121697BC:
    edi = edi; /* 0x121697BC: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121697BE: push ebp */
    ebp = esp; /* 0x121697BF: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x121697C1: mov eax, dword ptr [ebp + 0xc] */
    /* cmp eax, 3 */ /* 0x121697C4: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_121697DB; /* 0x121697C7: jl 0x121697db */
L_121697C9:
    PUSH32(esp, 0x120135C4u); /* 0x121697C9: push 0x120135c4 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x121697CE: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_121687E9); /* 0x121697D1: call 0x121687e9 */
    RECOMP_FLAGS_IN();
    goto L_121699EB; /* 0x121697D6: jmp 0x121699eb */
L_121697DB:
    /* test eax, eax */ /* 0x121697DB: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121697E0; /* 0x121697DD: jne 0x121697e0 */
L_121697DF:
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    eax = eax + 1; /* 0x121697DF: inc eax */
    _flag_k = FK_INC;
L_121697E0:
    PUSH32(esp, ebx); /* 0x121697E0: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x121697E1: mov ebx, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x121697E4: push esi */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x121697E5: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, edi); /* 0x121697E7: push edi */
    /* test ebx, ebx */ /* 0x121697E8: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_121697F6; /* 0x121697EA: js 0x121697f6 */
L_121697EC:
    /* cmp MEM32(ebp + 0x14), esi */ /* 0x121697EC: cmp dword ptr [ebp + 0x14], esi */
    _flag_a = (uint32_t)(MEM32(ebp + 0x14)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121697F6; /* 0x121697EF: je 0x121697f6 */
L_121697F1:
    /* cmp eax, 1 */ /* 0x121697F1: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_121697F8; /* 0x121697F4: jne 0x121697f8 */
L_121697F6:
    ebx = esi; /* 0x121697F6: mov ebx, esi */
L_121697F8:
    edi = MEM32(ebp + 0x8); /* 0x121697F8: mov edi, dword ptr [ebp + 8] */
    MEM8(edi + 0x1F9) = (uint8_t)(LO8(ebx)); /* 0x121697FB: mov byte ptr [edi + 0x1f9], bl */
    MEM8(edi + 0x1F8) = (uint8_t)(LO8(eax)); /* 0x12169801: mov byte ptr [edi + 0x1f8], al */
    /* test ebx, ebx */ /* 0x12169807: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12169910; /* 0x12169809: jle 0x12169910 */
L_1216980F:
    /* cmp MEM32(edi + 0x1FC), esi */ /* 0x1216980F: cmp dword ptr [edi + 0x1fc], esi */
    _flag_a = (uint32_t)(MEM32(edi + 0x1FC)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12169839; /* 0x12169815: jne 0x12169839 */
L_12169817:
    PUSH32(esp, ebx); /* 0x12169817: push ebx */
    PUSH32(esp, edi); /* 0x12169818: push edi */
    RECOMP_CALL(sub_1217015D); /* 0x12169819: call 0x1217015d */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x1FC) = eax; /* 0x1216981E: mov dword ptr [edi + 0x1fc], eax */
    ecx = esi; /* 0x12169824: mov ecx, esi */
    /* test ebx, ebx */ /* 0x12169826: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12169839; /* 0x12169828: jle 0x12169839 */
L_1216982A:
    eax = MEM32(edi + 0x1FC); /* 0x1216982A: mov eax, dword ptr [edi + 0x1fc] */
    MEM8(ecx + eax) = (uint8_t)(0xFFu); /* 0x12169830: mov byte ptr [ecx + eax], 0xff */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x12169834: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, ebx */ /* 0x12169835: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1216982A; /* 0x12169837: jl 0x1216982a */
L_12169839:
    /* cmp MEM32(edi + 0x200), esi */ /* 0x12169839: cmp dword ptr [edi + 0x200], esi */
    _flag_a = (uint32_t)(MEM32(edi + 0x200)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12169883; /* 0x1216983F: jne 0x12169883 */
L_12169841:
    esi = ebx + ebx; /* 0x12169841: lea esi, [ebx + ebx] */
    PUSH32(esp, esi); /* 0x12169844: push esi */
    PUSH32(esp, edi); /* 0x12169845: push edi */
    RECOMP_CALL(sub_1217015D); /* 0x12169846: call 0x1217015d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1216984B: push esi */
    PUSH32(esp, edi); /* 0x1216984C: push edi */
    MEM32(edi + 0x200) = eax; /* 0x1216984D: mov dword ptr [edi + 0x200], eax */
    RECOMP_CALL(sub_1217015D); /* 0x12169853: call 0x1217015d */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12169858: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x204) = eax; /* 0x1216985A: mov dword ptr [edi + 0x204], eax */
    ecx = esi; /* 0x12169860: mov ecx, esi */
    /* test ebx, ebx */ /* 0x12169862: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12169883; /* 0x12169864: jle 0x12169883 */
L_12169866:
    eax = MEM32(edi + 0x200); /* 0x12169866: mov eax, dword ptr [edi + 0x200] */
    MEM16(eax + ecx * 2) = (uint16_t)(0x100u); /* 0x1216986C: mov word ptr [eax + ecx*2], 0x100 */
    eax = MEM32(edi + 0x204); /* 0x12169872: mov eax, dword ptr [edi + 0x204] */
    MEM16(eax + ecx * 2) = (uint16_t)(0x100u); /* 0x12169878: mov word ptr [eax + ecx*2], 0x100 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1216987E: inc ecx */
    _flag_k = FK_INC;
    /* cmp ecx, ebx */ /* 0x1216987F: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_12169866; /* 0x12169881: jl 0x12169866 */
L_12169883:
    ecx = esi; /* 0x12169883: mov ecx, esi */
    MEM32(ebp + 0x8) = ecx; /* 0x12169885: mov dword ptr [ebp + 8], ecx */
    /* test ebx, ebx */ /* 0x12169888: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if ((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) == 0u || (((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_12169910; /* 0x1216988A: jle 0x12169910 */
L_12169890:
    fp_push(*(double*)ADDR(0x12008068)); /* 0x12169890: fld qword ptr [0x12008068] */
    esi = MEM32(ebp + 0x14); /* 0x12169896: mov esi, dword ptr [ebp + 0x14] */
    fp_push(0.0); /* 0x12169899: fldz  */
L_1216989B:
    edx = esi + ecx * 8; /* 0x1216989B: lea edx, [esi + ecx*8] */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(edx)); /* 0x1216989E: fcom qword ptr [edx] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x121698A0: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x121698A2: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_121698C1; /* 0x121698A5: jne 0x121698c1 */
L_121698A7:
    eax = MEM32(edi + 0x200); /* 0x121698A7: mov eax, dword ptr [edi + 0x200] */
    MEM16(eax + ecx * 2) = (uint16_t)(0x100u); /* 0x121698AD: mov word ptr [eax + ecx*2], 0x100 */
    eax = MEM32(edi + 0x204); /* 0x121698B3: mov eax, dword ptr [edi + 0x204] */
    MEM16(eax + ecx * 2) = (uint16_t)(0x100u); /* 0x121698B9: mov word ptr [eax + ecx*2], 0x100 */
    goto L_12169902; /* 0x121698BF: jmp 0x12169902 */
L_121698C1:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x121698C1: fstp st(0) */
    fp_push(*(double*)ADDR(edx)); /* 0x121698C3: fld qword ptr [edx] */
    _st[0] *= _st[1]; /* 0x121698C5: fmul st(1) */
    fp_push(*(double*)ADDR(0x120014C0)); /* 0x121698C7: fld qword ptr [0x120014c0] */
    _st[1] += _st[0]; /* 0x121698CD: fadd st(1), st(0) */
    fp_xch(1); /* 0x121698CF: fxch st(1) */
    RECOMP_CALL(sub_121BF2F7); /* 0x121698D1: call 0x121bf2f7 */
    RECOMP_FLAGS_IN();
    fp_push(_st[1]); /* 0x121698D6: fld st(1) */
    edx = MEM32(ebp + 0x8); /* 0x121698D8: mov edx, dword ptr [ebp + 8] */
    ecx = MEM32(edi + 0x204); /* 0x121698DB: mov ecx, dword ptr [edi + 0x204] */
    MEM16(ecx + edx * 2) = (uint16_t)(LO16(eax)); /* 0x121698E1: mov word ptr [ecx + edx*2], ax */
    eax = esi + edx * 8; /* 0x121698E5: lea eax, [esi + edx*8] */
    _st[0] /= *(double*)ADDR(eax); /* 0x121698E8: fdiv qword ptr [eax] */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x121698EA: faddp st(1) */
    RECOMP_CALL(sub_121BF2F7); /* 0x121698EC: call 0x121bf2f7 */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x121698F1: fldz  */
    ecx = MEM32(edi + 0x200); /* 0x121698F3: mov ecx, dword ptr [edi + 0x200] */
    edx = MEM32(ebp + 0x8); /* 0x121698F9: mov edx, dword ptr [ebp + 8] */
    MEM16(ecx + edx * 2) = (uint16_t)(LO16(eax)); /* 0x121698FC: mov word ptr [ecx + edx*2], ax */
    ecx = edx; /* 0x12169900: mov ecx, edx */
L_12169902:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x12169902: inc ecx */
    _flag_k = FK_INC;
    MEM32(ebp + 0x8) = ecx; /* 0x12169903: mov dword ptr [ebp + 8], ecx */
    /* cmp ecx, ebx */ /* 0x12169906: cmp ecx, ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1216989B; /* 0x12169908: jl 0x1216989b */
L_1216990A:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1216990A: fstp st(0) */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1216990C: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1216990E: fstp st(0) */
L_12169910:
    /* cmp MEM32(edi + 0x208), esi */ /* 0x12169910: cmp dword ptr [edi + 0x208], esi */
    _flag_a = (uint32_t)(MEM32(edi + 0x208)); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_12169956; /* 0x12169916: jne 0x12169956 */
L_12169918:
    PUSH32(esp, 0xAu); /* 0x12169918: push 0xa */
    PUSH32(esp, edi); /* 0x1216991A: push edi */
    RECOMP_CALL(sub_1217015D); /* 0x1216991B: call 0x1217015d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0xAu); /* 0x12169920: push 0xa */
    PUSH32(esp, edi); /* 0x12169922: push edi */
    MEM32(edi + 0x208) = eax; /* 0x12169923: mov dword ptr [edi + 0x208], eax */
    RECOMP_CALL(sub_1217015D); /* 0x12169929: call 0x1217015d */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0x20C) = eax; /* 0x1216992E: mov dword ptr [edi + 0x20c], eax */
    ecx = esi; /* 0x12169934: mov ecx, esi */
L_12169936:
    eax = MEM32(edi + 0x208); /* 0x12169936: mov eax, dword ptr [edi + 0x208] */
    MEM16(ecx + eax) = (uint16_t)(8); /* 0x1216993C: mov word ptr [ecx + eax], 8 */
    eax = MEM32(edi + 0x20C); /* 0x12169942: mov eax, dword ptr [edi + 0x20c] */
    MEM16(ecx + eax) = (uint16_t)(8); /* 0x12169948: mov word ptr [ecx + eax], 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ecx = ecx + 2; /* 0x1216994E: add ecx, 2 */
    _flag_k = FK_ADD;
    /* cmp ecx, 0xAu */ /* 0x12169951: cmp ecx, 0xa */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_12169936; /* 0x12169954: jl 0x12169936 */
L_12169956:
    fp_push(1.0); /* 0x12169956: fld1  */
    ebx = MEM32(ebp + 0x18); /* 0x12169958: mov ebx, dword ptr [ebp + 0x18] */
    fp_push(*(double*)ADDR(0x12005C50)); /* 0x1216995B: fld qword ptr [0x12005c50] */
    fp_push(0.0); /* 0x12169961: fldz  */
    fp_push(*(double*)ADDR(0x120014C0)); /* 0x12169963: fld qword ptr [0x120014c0] */
    goto L_1216996F; /* 0x12169969: jmp 0x1216996f */
L_1216996B:
    fp_xch(3); /* 0x1216996B: fxch st(3) */
    fp_xch(1); /* 0x1216996D: fxch st(1) */
L_1216996F:
    /* cmp MEM32(ebp + 0x18), 0 */ /* 0x1216996F: cmp dword ptr [ebp + 0x18], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x18)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_121699B9; /* 0x12169973: je 0x121699b9 */
L_12169975:
    fp_xch(1); /* 0x12169975: fxch st(1) */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebx)); /* 0x12169977: fcom qword ptr [ebx] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12169979: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1216997B: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_121699B7; /* 0x1216997E: je 0x121699b7 */
L_12169980:
    fp_xch(3); /* 0x12169980: fxch st(3) */
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebx)); /* 0x12169982: fcom qword ptr [ebx] */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12169984: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x12169986: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_121699D5; /* 0x12169989: jp 0x121699d5 */
L_1216998B:
    fp_push(_st[2]); /* 0x1216998B: fld st(2) */
    _st[0] /= *(double*)ADDR(ebx); /* 0x1216998D: fdiv qword ptr [ebx] */
    _st[0] += _st[2]; /* 0x1216998F: fadd st(2) */
    RECOMP_CALL(sub_121BF2F7); /* 0x12169991: call 0x121bf2f7 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x20C); /* 0x12169996: mov ecx, dword ptr [edi + 0x20c] */
    MEM16(esi + ecx) = (uint16_t)(LO16(eax)); /* 0x1216999C: mov word ptr [esi + ecx], ax */
    fp_push(*(double*)ADDR(ebx)); /* 0x121699A0: fld qword ptr [ebx] */
    _st[0] *= _st[3]; /* 0x121699A2: fmul st(3) */
    _st[0] += _st[2]; /* 0x121699A4: fadd st(2) */
    RECOMP_CALL(sub_121BF2F7); /* 0x121699A6: call 0x121bf2f7 */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0x208); /* 0x121699AB: mov ecx, dword ptr [edi + 0x208] */
    MEM16(esi + ecx) = (uint16_t)(LO16(eax)); /* 0x121699B1: mov word ptr [esi + ecx], ax */
    goto L_121699D5; /* 0x121699B5: jmp 0x121699d5 */
L_121699B7:
    fp_xch(1); /* 0x121699B7: fxch st(1) */
L_121699B9:
    eax = MEM32(edi + 0x208); /* 0x121699B9: mov eax, dword ptr [edi + 0x208] */
    fp_xch(1); /* 0x121699BF: fxch st(1) */
    MEM16(esi + eax) = (uint16_t)(8); /* 0x121699C1: mov word ptr [esi + eax], 8 */
    fp_xch(3); /* 0x121699C7: fxch st(3) */
    eax = MEM32(edi + 0x20C); /* 0x121699C9: mov eax, dword ptr [edi + 0x20c] */
    MEM16(esi + eax) = (uint16_t)(8); /* 0x121699CF: mov word ptr [esi + eax], 8 */
L_121699D5:
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esi = esi + 2; /* 0x121699D5: add esi, 2 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    ebx = ebx + 8; /* 0x121699D8: add ebx, 8 */
    _flag_k = FK_ADD;
    /* cmp esi, 0xAu */ /* 0x121699DB: cmp esi, 0xa */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(0xAu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1216996B; /* 0x121699DE: jl 0x1216996b */
L_121699E0:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x121699E0: fstp st(0) */
    edi = POP32_VAL(esp); /* 0x121699E2: pop edi */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x121699E3: fstp st(1) */
    esi = POP32_VAL(esp); /* 0x121699E5: pop esi */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x121699E6: fstp st(1) */
    ebx = POP32_VAL(esp); /* 0x121699E8: pop ebx */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x121699E9: fstp st(0) */
L_121699EB:
    ebp = POP32_VAL(esp); /* 0x121699EB: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x121699EC: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_121699F4(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    if (g_setjmp_resume == 0x12169B58u) { g_setjmp_resume = 0; g_cur_func = 0x121699F4u; goto L_12169B58; }
    if (g_setjmp_resume == 0x12169A3Eu) { g_setjmp_resume = 0; g_cur_func = 0x121699F4u; goto L_12169A3E; }
    RECOMP_ENTER(0x121699F4u);

L_121699F4:
    edi = edi; /* 0x121699F4: mov edi, edi */
    PUSH32(esp, ebp); /* 0x121699F6: push ebp */
    ebp = esp; /* 0x121699F7: mov ebp, esp */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x68u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x68u; /* 0x121699F9: sub esp, 0x68 */
    _flag_k = FK_CMP;
    eax = MEM32(0x121D9590); /* 0x121699FC: mov eax, dword ptr [0x121d9590] */
    _flag_a = (uint32_t)((eax ^ ebp)); _flag_b = (uint32_t)((eax ^ ebp));
    eax = eax ^ ebp; /* 0x12169A01: xor eax, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebp + (-0x4)) = eax; /* 0x12169A03: mov dword ptr [ebp - 4], eax */
    eax = MEM32(ebp + 0x8); /* 0x12169A06: mov eax, dword ptr [ebp + 8] */
    MEM32(ebp + (-0x60)) = eax; /* 0x12169A09: mov dword ptr [ebp - 0x60], eax */
    eax = MEM32(ebp + 0xC); /* 0x12169A0C: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, ebx); /* 0x12169A0F: push ebx */
    MEM32(ebp + (-0x64)) = eax; /* 0x12169A10: mov dword ptr [ebp - 0x64], eax */
    eax = MEM32(ebp + 0x10); /* 0x12169A13: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x12169A16: push esi */
    PUSH32(esp, edi); /* 0x12169A17: push edi */
    MEM32(ebp + (-0x5C)) = eax; /* 0x12169A18: mov dword ptr [ebp - 0x5c], eax */
    eax = MEM32(ebp + 0x14); /* 0x12169A1B: mov eax, dword ptr [ebp + 0x14] */
    PUSH32(esp, 1); /* 0x12169A1E: push 1 */
    MEM32(ebp + (-0x68)) = eax; /* 0x12169A20: mov dword ptr [ebp - 0x68], eax */
    RECOMP_CALL(sub_121700F7); /* 0x12169A23: call 0x121700f7 */
    RECOMP_FLAGS_IN();
    MEM32(ebp + (-0x58)) = eax; /* 0x12169A28: mov dword ptr [ebp - 0x58], eax */
    /* test eax, eax */ /* 0x12169A2B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12169A36; /* 0x12169A2D: jne 0x12169a36 */
L_12169A2F:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x12169A2F: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_12169B66; /* 0x12169A31: jmp 0x12169b66 */
L_12169A36:
    PUSH32(esp, 0); /* 0x12169A36: push 0 */
    PUSH32(esp, eax); /* 0x12169A38: push eax */
    RECOMP_SETJMP_CALL(sub_121BF618, 0x12169A3Eu); /* 0x12169A39: call 0x121bf618 */
    RECOMP_FLAGS_IN();
L_12169A3E:
    esi = MEM32(ebp + (-0x58)); /* 0x12169A3E: mov esi, dword ptr [ebp - 0x58] */
    ecx = POP32_VAL(esp); /* 0x12169A41: pop ecx */
    ecx = POP32_VAL(esp); /* 0x12169A42: pop ecx */
    /* test eax, eax */ /* 0x12169A43: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12169A62; /* 0x12169A45: je 0x12169a62 */
L_12169A47:
    PUSH32(esp, MEM32(esi + 0xAC)); /* 0x12169A47: push dword ptr [esi + 0xac] */
    PUSH32(esp, esi); /* 0x12169A4D: push esi */
    RECOMP_CALL(sub_121701A5); /* 0x12169A4E: call 0x121701a5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0xAC)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0xAC) = MEM32(esi + 0xAC) & 0; /* 0x12169A53: and dword ptr [esi + 0xac], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, esi); /* 0x12169A5A: push esi */
    RECOMP_CALL(sub_12170140); /* 0x12169A5B: call 0x12170140 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_12169A2F; /* 0x12169A60: jmp 0x12169a2f */
L_12169A62:
    PUSH32(esp, MEM32(ebp + (-0x68))); /* 0x12169A62: push dword ptr [ebp - 0x68] */
    PUSH32(esp, MEM32(ebp + (-0x5C))); /* 0x12169A65: push dword ptr [ebp - 0x5c] */
    PUSH32(esp, MEM32(ebp + (-0x64))); /* 0x12169A68: push dword ptr [ebp - 0x64] */
    PUSH32(esp, esi); /* 0x12169A6B: push esi */
    RECOMP_CALL(sub_1216879E); /* 0x12169A6C: call 0x1216879e */
    RECOMP_FLAGS_IN();
    edi = MEM32(ebp + (-0x60)); /* 0x12169A71: mov edi, dword ptr [ebp - 0x60] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x12169A74: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
L_12169A76:
    PUSH32(esp, 0); /* 0x12169A76: push 0 */
    RECOMP_CALL(sub_12168E37); /* 0x12169A78: call 0x12168e37 */
    RECOMP_FLAGS_IN();
    SET_LO8(ecx, MEM8(edi + ebx)); /* 0x12169A7D: mov cl, byte ptr [edi + ebx] */
    /* cmp LO8(ecx), MEM8(eax + ebx) */ /* 0x12169A80: cmp cl, byte ptr [eax + ebx] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax + ebx)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12169A8C; /* 0x12169A83: je 0x12169a8c */
L_12169A85:
    _flag_a = (uint32_t)((MEM32(esi + 0x6C) | 0x00020000u)); _flag_b = (uint32_t)((MEM32(esi + 0x6C) | 0x00020000u));
    MEM32(esi + 0x6C) = MEM32(esi + 0x6C) | 0x00020000u; /* 0x12169A85: or dword ptr [esi + 0x6c], 0x20000 */
    _cf = 0;
    _flag_k = FK_TEST;
L_12169A8C:
    PUSH32(esp, 0); /* 0x12169A8C: push 0 */
    RECOMP_CALL(sub_12168E37); /* 0x12169A8E: call 0x12168e37 */
    RECOMP_FLAGS_IN();
    SET_LO8(eax, MEM8(eax + ebx)); /* 0x12169A93: mov al, byte ptr [eax + ebx] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x12169A96: inc ebx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x12169A97: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_12169A76; /* 0x12169A99: jne 0x12169a76 */
L_12169A9B:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x12169A9B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test MEM32(esi + 0x6C), 0x00020000u */ /* 0x12169A9D: test dword ptr [esi + 0x6c], 0x20000 */
    _flag_a = (uint32_t)(MEM32(esi + 0x6C)); _flag_b = (uint32_t)(0x00020000u);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12169B25; /* 0x12169AA4: je 0x12169b25 */
L_12169AA6:
    /* test edi, edi */ /* 0x12169AA6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12169AF6; /* 0x12169AA8: je 0x12169af6 */
L_12169AAA:
    PUSH32(esp, ebx); /* 0x12169AAA: push ebx */
    RECOMP_CALL(sub_12168E37); /* 0x12169AAB: call 0x12168e37 */
    RECOMP_FLAGS_IN();
    SET_LO8(ecx, MEM8(edi)); /* 0x12169AB0: mov cl, byte ptr [edi] */
    /* cmp LO8(ecx), MEM8(eax) */ /* 0x12169AB2: cmp cl, byte ptr [eax] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12169AD4; /* 0x12169AB4: jne 0x12169ad4 */
L_12169AB6:
    /* cmp LO8(ecx), 0x31u */ /* 0x12169AB6: cmp cl, 0x31 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(0x31u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12169AC9; /* 0x12169AB9: jne 0x12169ac9 */
L_12169ABB:
    PUSH32(esp, ebx); /* 0x12169ABB: push ebx */
    RECOMP_CALL(sub_12168E37); /* 0x12169ABC: call 0x12168e37 */
    RECOMP_FLAGS_IN();
    SET_LO8(ecx, MEM8(edi + 0x2)); /* 0x12169AC1: mov cl, byte ptr [edi + 2] */
    /* cmp LO8(ecx), MEM8(eax + 0x2) */ /* 0x12169AC4: cmp cl, byte ptr [eax + 2] */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(MEM8(eax + 0x2)) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12169AD4; /* 0x12169AC7: jne 0x12169ad4 */
L_12169AC9:
    /* cmp MEM8(edi), 0x30u */ /* 0x12169AC9: cmp byte ptr [edi], 0x30 */
    _flag_a = (uint32_t)(MEM8(edi)) << 24; _flag_b = (uint32_t)(0x30u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_NE(_flag_a, _flag_b)) goto L_12169B25; /* 0x12169ACC: jne 0x12169b25 */
L_12169ACE:
    /* cmp MEM8(edi + 0x2), 0x39u */ /* 0x12169ACE: cmp byte ptr [edi + 2], 0x39 */
    _flag_a = (uint32_t)(MEM8(edi + 0x2)) << 24; _flag_b = (uint32_t)(0x39u) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_GE(_flag_a, _flag_b)) goto L_12169B25; /* 0x12169AD2: jge 0x12169b25 */
L_12169AD4:
    /* test edi, edi */ /* 0x12169AD4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12169AF6; /* 0x12169AD6: je 0x12169af6 */
L_12169AD8:
    PUSH32(esp, edi); /* 0x12169AD8: push edi */
    PUSH32(esp, 0x12013654u); /* 0x12169AD9: push 0x12013654 */
    eax = ebp + (-0x54); /* 0x12169ADE: lea eax, [ebp - 0x54] */
    PUSH32(esp, 0x50u); /* 0x12169AE1: push 0x50 */
    PUSH32(esp, eax); /* 0x12169AE3: push eax */
    RECOMP_CALL(sub_121BEE6C); /* 0x12169AE4: call 0x121bee6c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x12169AE9: add esp, 0x10 */
    _flag_k = FK_ADD;
    eax = ebp + (-0x54); /* 0x12169AEC: lea eax, [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x12169AEF: push eax */
    PUSH32(esp, esi); /* 0x12169AF0: push esi */
    RECOMP_CALL(sub_121687E9); /* 0x12169AF1: call 0x121687e9 */
    RECOMP_FLAGS_IN();
L_12169AF6:
    PUSH32(esp, ebx); /* 0x12169AF6: push ebx */
    RECOMP_CALL(sub_12168E37); /* 0x12169AF7: call 0x12168e37 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, eax); /* 0x12169AFC: push eax */
    PUSH32(esp, 0x1201361Cu); /* 0x12169AFD: push 0x1201361c */
    eax = ebp + (-0x54); /* 0x12169B02: lea eax, [ebp - 0x54] */
    PUSH32(esp, 0x50u); /* 0x12169B05: push 0x50 */
    PUSH32(esp, eax); /* 0x12169B07: push eax */
    RECOMP_CALL(sub_121BEE6C); /* 0x12169B08: call 0x121bee6c */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x12169B0D: add esp, 0x10 */
    _flag_k = FK_ADD;
    eax = ebp + (-0x54); /* 0x12169B10: lea eax, [ebp - 0x54] */
    PUSH32(esp, eax); /* 0x12169B13: push eax */
    PUSH32(esp, esi); /* 0x12169B14: push esi */
    RECOMP_CALL(sub_121687E9); /* 0x12169B15: call 0x121687e9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x120135E4u); /* 0x12169B1A: push 0x120135e4 */
    PUSH32(esp, esi); /* 0x12169B1F: push esi */
    RECOMP_CALL(sub_121687C1); /* 0x12169B20: call 0x121687c1 */
    RECOMP_FLAGS_IN();
L_12169B25:
    eax = 0x2000u; /* 0x12169B25: mov eax, 0x2000 */
    PUSH32(esp, eax); /* 0x12169B2A: push eax */
    PUSH32(esp, esi); /* 0x12169B2B: push esi */
    MEM32(esi + 0xB0) = eax; /* 0x12169B2C: mov dword ptr [esi + 0xb0], eax */
    RECOMP_CALL(sub_1217015D); /* 0x12169B32: call 0x1217015d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x12169B37: push ebx */
    PUSH32(esp, ebx); /* 0x12169B38: push ebx */
    PUSH32(esp, ebx); /* 0x12169B39: push ebx */
    PUSH32(esp, esi); /* 0x12169B3A: push esi */
    MEM32(esi + 0xAC) = eax; /* 0x12169B3B: mov dword ptr [esi + 0xac], eax */
    RECOMP_CALL(sub_12169CC8); /* 0x12169B41: call 0x12169cc8 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x12169B46: push ebx */
    PUSH32(esp, ebx); /* 0x12169B47: push ebx */
    PUSH32(esp, 1); /* 0x12169B48: push 1 */
    PUSH32(esp, ebx); /* 0x12169B4A: push ebx */
    PUSH32(esp, esi); /* 0x12169B4B: push esi */
    RECOMP_CALL(sub_121697BC); /* 0x12169B4C: call 0x121697bc */
    RECOMP_FLAGS_IN();
    PUSH32(esp, ebx); /* 0x12169B51: push ebx */
    PUSH32(esp, esi); /* 0x12169B52: push esi */
    RECOMP_SETJMP_CALL(sub_121BF618, 0x12169B58u); /* 0x12169B53: call 0x121bf618 */
    RECOMP_FLAGS_IN();
L_12169B58:
    ecx = POP32_VAL(esp); /* 0x12169B58: pop ecx */
    ecx = POP32_VAL(esp); /* 0x12169B59: pop ecx */
    /* test eax, eax */ /* 0x12169B5A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12169B63; /* 0x12169B5C: je 0x12169b63 */
L_12169B5E:
    RECOMP_CALL(sub_121BF9E2); /* 0x12169B5E: call 0x121bf9e2 */
    RECOMP_FLAGS_IN();
L_12169B63:
    eax = MEM32(ebp + (-0x58)); /* 0x12169B63: mov eax, dword ptr [ebp - 0x58] */
L_12169B66:
    ecx = MEM32(ebp + (-0x4)); /* 0x12169B66: mov ecx, dword ptr [ebp - 4] */
    edi = POP32_VAL(esp); /* 0x12169B69: pop edi */
    esi = POP32_VAL(esp); /* 0x12169B6A: pop esi */
    _flag_a = (uint32_t)((ecx ^ ebp)); _flag_b = (uint32_t)((ecx ^ ebp));
    ecx = ecx ^ ebp; /* 0x12169B6B: xor ecx, ebp */
    _cf = 0;
    _flag_k = FK_TEST;
    ebx = POP32_VAL(esp); /* 0x12169B6D: pop ebx */
    RECOMP_CALL(sub_121BECF5); /* 0x12169B6E: call 0x121becf5 */
    RECOMP_FLAGS_IN();
    esp = ebp; ebp = POP32_VAL(esp); /* 0x12169B73: leave  */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x12169B74: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_12169B7C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12169B7Cu);

L_12169B7C:
    edi = edi; /* 0x12169B7C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12169B7E: push ebp */
    ebp = esp; /* 0x12169B7F: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12169B81: push esi */
    esi = MEM32(ebp + 0x10); /* 0x12169B82: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x12169B85: push edi */
    edi = MEM32(ebp + 0xC); /* 0x12169B86: mov edi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x12169B89: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12169B9D; /* 0x12169B8B: je 0x12169b9d */
L_12169B8D:
    PUSH32(esp, MEM32(edi)); /* 0x12169B8D: push dword ptr [edi] */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12169B8F: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_1216943A); /* 0x12169B92: call 0x1216943a */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    edi = edi + 4; /* 0x12169B97: add edi, 4 */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(1);
    esi = esi - 1; /* 0x12169B9A: dec esi */
    _flag_k = FK_DEC;
    RECOMP_BACKEDGE();
    if (/* dec result */ CMP_NE(_flag_a, _flag_b)) goto L_12169B8D; /* 0x12169B9B: jne 0x12169b8d */
L_12169B9D:
    edi = POP32_VAL(esp); /* 0x12169B9D: pop edi */
    esi = POP32_VAL(esp); /* 0x12169B9E: pop esi */
    ebp = POP32_VAL(esp); /* 0x12169B9F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12169BA0: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12169BA8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12169BA8u);

L_12169BA8:
    edi = edi; /* 0x12169BA8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12169BAA: push ebp */
    ebp = esp; /* 0x12169BAB: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12169BAD: push esi */
    PUSH32(esp, edi); /* 0x12169BAE: push edi */
    edi = MEM32(ebp + 0x8); /* 0x12169BAF: mov edi, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x12169BB2: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
    /* test edi, edi */ /* 0x12169BB4: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12169BBA; /* 0x12169BB6: je 0x12169bba */
L_12169BB8:
    esi = MEM32(edi); /* 0x12169BB8: mov esi, dword ptr [edi] */
L_12169BBA:
    PUSH32(esp, ebx); /* 0x12169BBA: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x12169BBB: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x12169BBE: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12169C07; /* 0x12169BC0: je 0x12169c07 */
L_12169BC2:
    eax = MEM32(ebx); /* 0x12169BC2: mov eax, dword ptr [ebx] */
    MEM32(ebp + 0x8) = eax; /* 0x12169BC4: mov dword ptr [ebp + 8], eax */
    /* test eax, eax */ /* 0x12169BC7: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12169C07; /* 0x12169BC9: je 0x12169c07 */
L_12169BCB:
    PUSH32(esp, 0xFFFFFFFFu); /* 0x12169BCB: push -1 */
    PUSH32(esp, 0x7FFFu); /* 0x12169BCD: push 0x7fff */
    PUSH32(esp, eax); /* 0x12169BD2: push eax */
    PUSH32(esp, esi); /* 0x12169BD3: push esi */
    RECOMP_CALL(sub_12168A5C); /* 0x12169BD4: call 0x12168a5c */
    RECOMP_FLAGS_IN();
    /* cmp MEM32(esi + 0x220), 0 */ /* 0x12169BD9: cmp dword ptr [esi + 0x220], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x220)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12169BFC; /* 0x12169BE0: je 0x12169bfc */
L_12169BE2:
    PUSH32(esp, MEM32(esi + 0x224)); /* 0x12169BE2: push dword ptr [esi + 0x224] */
    PUSH32(esp, esi); /* 0x12169BE8: push esi */
    RECOMP_CALL(sub_121701A5); /* 0x12169BE9: call 0x121701a5 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(esi + 0x224)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x224) = MEM32(esi + 0x224) & 0; /* 0x12169BEE: and dword ptr [esi + 0x224], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(MEM32(esi + 0x220)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x220) = MEM32(esi + 0x220) & 0; /* 0x12169BF5: and dword ptr [esi + 0x220], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_12169BFC:
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x12169BFC: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_12170140); /* 0x12169BFF: call 0x12170140 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(ebx)); _flag_b = (uint32_t)(0);
    MEM32(ebx) = MEM32(ebx) & 0; /* 0x12169C04: and dword ptr [ebx], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_12169C07:
    ebx = POP32_VAL(esp); /* 0x12169C07: pop ebx */
    /* test esi, esi */ /* 0x12169C08: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12169C1B; /* 0x12169C0A: je 0x12169c1b */
L_12169C0C:
    PUSH32(esp, esi); /* 0x12169C0C: push esi */
    RECOMP_CALL(sub_121696C1); /* 0x12169C0D: call 0x121696c1 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x12169C12: push esi */
    RECOMP_CALL(sub_12170140); /* 0x12169C13: call 0x12170140 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(MEM32(edi)); _flag_b = (uint32_t)(0);
    MEM32(edi) = MEM32(edi) & 0; /* 0x12169C18: and dword ptr [edi], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
L_12169C1B:
    edi = POP32_VAL(esp); /* 0x12169C1B: pop edi */
    esi = POP32_VAL(esp); /* 0x12169C1C: pop esi */
    ebp = POP32_VAL(esp); /* 0x12169C1D: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 12; { RECOMP_REGS_OUT(); return; } /* 0x12169C1E: ret 8 */
    RECOMP_REGS_OUT();
}

void sub_12169C26(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12169C26u);

L_12169C26:
    edi = edi; /* 0x12169C26: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12169C28: push ebp */
    ebp = esp; /* 0x12169C29: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x12169C2B: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x4C); /* 0x12169C2E: mov ecx, dword ptr [eax + 0x4c] */
    /* test ecx, ecx */ /* 0x12169C31: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12169C40; /* 0x12169C33: je 0x12169c40 */
L_12169C35:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x12169C35: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12169C38: push dword ptr [ebp + 0xc] */
    PUSH32(esp, eax); /* 0x12169C3B: push eax */
    RECOMP_ICALL(ecx); /* 0x12169C3C: call ecx */
    RECOMP_FLAGS_IN();
    goto L_12169C4B; /* 0x12169C3E: jmp 0x12169c4b */
L_12169C40:
    PUSH32(esp, 0x1201368Cu); /* 0x12169C40: push 0x1201368c */
    PUSH32(esp, eax); /* 0x12169C45: push eax */
    RECOMP_CALL(sub_121687C1); /* 0x12169C46: call 0x121687c1 */
    RECOMP_FLAGS_IN();
L_12169C4B:
    ebp = POP32_VAL(esp); /* 0x12169C4B: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12169C4C: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12169C54(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12169C54u);

L_12169C54:
    edi = edi; /* 0x12169C54: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12169C56: push ebp */
    ebp = esp; /* 0x12169C57: mov ebp, esp */
    PUSH32(esp, esi); /* 0x12169C59: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12169C5A: mov esi, dword ptr [ebp + 8] */
    PUSH32(esp, MEM32(esi + 0x54)); /* 0x12169C5D: push dword ptr [esi + 0x54] */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x12169C60: push dword ptr [ebp + 0x10] */
    PUSH32(esp, 1); /* 0x12169C63: push 1 */
    PUSH32(esp, MEM32(ebp + 0xC)); /* 0x12169C65: push dword ptr [ebp + 0xc] */
    RECOMP_CALL(sub_121BF9EE); /* 0x12169C68: call 0x121bf9ee */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x10u; /* 0x12169C6D: add esp, 0x10 */
    _flag_k = FK_ADD;
    /* cmp eax, MEM32(ebp + 0x10) */ /* 0x12169C70: cmp eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(MEM32(ebp + 0x10));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12169C80; /* 0x12169C73: je 0x12169c80 */
L_12169C75:
    PUSH32(esp, 0x120136A8u); /* 0x12169C75: push 0x120136a8 */
    PUSH32(esp, esi); /* 0x12169C7A: push esi */
    RECOMP_CALL(sub_121687C1); /* 0x12169C7B: call 0x121687c1 */
    RECOMP_FLAGS_IN();
L_12169C80:
    esi = POP32_VAL(esp); /* 0x12169C80: pop esi */
    ebp = POP32_VAL(esp); /* 0x12169C81: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12169C82: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12169C8A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12169C8Au);

L_12169C8A:
    edi = edi; /* 0x12169C8A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12169C8C: push ebp */
    ebp = esp; /* 0x12169C8D: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x12169C8F: mov eax, dword ptr [ebp + 8] */
    ecx = MEM32(eax + 0x14C); /* 0x12169C92: mov ecx, dword ptr [eax + 0x14c] */
    /* test ecx, ecx */ /* 0x12169C98: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12169C9F; /* 0x12169C9A: je 0x12169c9f */
L_12169C9C:
    PUSH32(esp, eax); /* 0x12169C9C: push eax */
    RECOMP_ICALL(ecx); /* 0x12169C9D: call ecx */
    RECOMP_FLAGS_IN();
L_12169C9F:
    ebp = POP32_VAL(esp); /* 0x12169C9F: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12169CA0: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12169CA8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12169CA8u);

L_12169CA8:
    edi = edi; /* 0x12169CA8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12169CAA: push ebp */
    ebp = esp; /* 0x12169CAB: mov ebp, esp */
    eax = MEM32(ebp + 0x8); /* 0x12169CAD: mov eax, dword ptr [ebp + 8] */
    /* cmp MEM32(eax + 0x54), 0 */ /* 0x12169CB0: cmp dword ptr [eax + 0x54], 0 */
    _flag_a = (uint32_t)(MEM32(eax + 0x54)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12169CBF; /* 0x12169CB4: je 0x12169cbf */
L_12169CB6:
    PUSH32(esp, MEM32(eax + 0x54)); /* 0x12169CB6: push dword ptr [eax + 0x54] */
    RECOMP_CALL(sub_121BF9FA); /* 0x12169CB9: call 0x121bf9fa */
    RECOMP_FLAGS_IN();
    ecx = POP32_VAL(esp); /* 0x12169CBE: pop ecx */
L_12169CBF:
    ebp = POP32_VAL(esp); /* 0x12169CBF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 8; { RECOMP_REGS_OUT(); return; } /* 0x12169CC0: ret 4 */
    RECOMP_REGS_OUT();
}

void sub_12169CC8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12169CC8u);

L_12169CC8:
    edi = edi; /* 0x12169CC8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12169CCA: push ebp */
    ebp = esp; /* 0x12169CCB: mov ebp, esp */
    eax = MEM32(ebp + 0xC); /* 0x12169CCD: mov eax, dword ptr [ebp + 0xc] */
    PUSH32(esp, esi); /* 0x12169CD0: push esi */
    esi = MEM32(ebp + 0x8); /* 0x12169CD1: mov esi, dword ptr [ebp + 8] */
    MEM32(esi + 0x54) = eax; /* 0x12169CD4: mov dword ptr [esi + 0x54], eax */
    eax = MEM32(ebp + 0x10); /* 0x12169CD7: mov eax, dword ptr [ebp + 0x10] */
    /* test eax, eax */ /* 0x12169CDA: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12169CE3; /* 0x12169CDC: je 0x12169ce3 */
L_12169CDE:
    MEM32(esi + 0x4C) = eax; /* 0x12169CDE: mov dword ptr [esi + 0x4c], eax */
    goto L_12169CEA; /* 0x12169CE1: jmp 0x12169cea */
L_12169CE3:
    MEM32(esi + 0x4C) = 0x12169C54u; /* 0x12169CE3: mov dword ptr [esi + 0x4c], 0x12169c54 */
L_12169CEA:
    eax = MEM32(ebp + 0x14); /* 0x12169CEA: mov eax, dword ptr [ebp + 0x14] */
    /* test eax, eax */ /* 0x12169CED: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12169CF9; /* 0x12169CEF: je 0x12169cf9 */
L_12169CF1:
    MEM32(esi + 0x14C) = eax; /* 0x12169CF1: mov dword ptr [esi + 0x14c], eax */
    goto L_12169D03; /* 0x12169CF7: jmp 0x12169d03 */
L_12169CF9:
    MEM32(esi + 0x14C) = 0x12169CA8u; /* 0x12169CF9: mov dword ptr [esi + 0x14c], 0x12169ca8 */
L_12169D03:
    /* cmp MEM32(esi + 0x50), 0 */ /* 0x12169D03: cmp dword ptr [esi + 0x50], 0 */
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12169D23; /* 0x12169D07: je 0x12169d23 */
L_12169D09:
    _flag_a = (uint32_t)(MEM32(esi + 0x50)); _flag_b = (uint32_t)(0);
    MEM32(esi + 0x50) = MEM32(esi + 0x50) & 0; /* 0x12169D09: and dword ptr [esi + 0x50], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    PUSH32(esp, 0x120136ECu); /* 0x12169D0D: push 0x120136ec */
    PUSH32(esp, esi); /* 0x12169D12: push esi */
    RECOMP_CALL(sub_121687E9); /* 0x12169D13: call 0x121687e9 */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x120136B4u); /* 0x12169D18: push 0x120136b4 */
    PUSH32(esp, esi); /* 0x12169D1D: push esi */
    RECOMP_CALL(sub_121687E9); /* 0x12169D1E: call 0x121687e9 */
    RECOMP_FLAGS_IN();
L_12169D23:
    esi = POP32_VAL(esp); /* 0x12169D23: pop esi */
    ebp = POP32_VAL(esp); /* 0x12169D24: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x12169D25: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_12169D2D(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12169D2Du);

L_12169D2D:
    edi = edi; /* 0x12169D2D: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12169D2F: push ebp */
    ebp = esp; /* 0x12169D30: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x12169D32: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_12169D51; /* 0x12169D36: je 0x12169d51 */
L_12169D38:
    eax = MEM32(ebp + 0xC); /* 0x12169D38: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x12169D3B: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12169D51; /* 0x12169D3D: je 0x12169d51 */
L_12169D3F:
    PUSH32(esp, esi); /* 0x12169D3F: push esi */
    esi = MEM32(ebp + 0x10); /* 0x12169D40: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x12169D43: push edi */
    edi = eax + 0x5A; /* 0x12169D44: lea edi, [eax + 0x5a] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12169D47: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x12169D48: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM16(edi) = MEM16(esi); esi += _df * 2; edi += _df * 2; /* 0x12169D49: movsw word ptr es:[edi], word ptr [esi] */
    _flag_a = (uint32_t)((MEM32(eax + 0x8) | 0x20u)); _flag_b = (uint32_t)((MEM32(eax + 0x8) | 0x20u));
    MEM32(eax + 0x8) = MEM32(eax + 0x8) | 0x20u; /* 0x12169D4B: or dword ptr [eax + 8], 0x20 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x12169D4F: pop edi */
    esi = POP32_VAL(esp); /* 0x12169D50: pop esi */
L_12169D51:
    ebp = POP32_VAL(esp); /* 0x12169D51: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x12169D52: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_12169D5A(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12169D5Au);

L_12169D5A:
    edi = edi; /* 0x12169D5A: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12169D5C: push ebp */
    ebp = esp; /* 0x12169D5D: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x12169D5F: mov ecx, dword ptr [ebp + 8] */
    /* test ecx, ecx */ /* 0x12169D62: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12169F8E; /* 0x12169D64: je 0x12169f8e */
L_12169D6A:
    PUSH32(esp, esi); /* 0x12169D6A: push esi */
    esi = MEM32(ebp + 0xC); /* 0x12169D6B: mov esi, dword ptr [ebp + 0xc] */
    /* test esi, esi */ /* 0x12169D6E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_12169F8D; /* 0x12169D70: je 0x12169f8d */
L_12169D76:
    fp_push(0.0); /* 0x12169D76: fldz  */
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x12169D78: fld qword ptr [ebp + 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12169D7B: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12169D7D: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x12169D7F: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_12169F80; /* 0x12169D82: jnp 0x12169f80 */
L_12169D88:
    fp_push(*(double*)ADDR(ebp + 0x18)); /* 0x12169D88: fld qword ptr [ebp + 0x18] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12169D8B: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12169D8D: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x12169D8F: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_12169F5E; /* 0x12169D92: jnp 0x12169f5e */
L_12169D98:
    fp_push(*(double*)ADDR(ebp + 0x20)); /* 0x12169D98: fld qword ptr [ebp + 0x20] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x12169D9B: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12169D9D: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x12169D9F: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_12169F62; /* 0x12169DA2: jnp 0x12169f62 */
L_12169DA8:
    fp_push(*(double*)ADDR(ebp + 0x28)); /* 0x12169DA8: fld qword ptr [ebp + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[3]); /* 0x12169DAB: fcom st(3) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12169DAD: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x12169DAF: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_12169F66; /* 0x12169DB2: jnp 0x12169f66 */
L_12169DB8:
    fp_push(*(double*)ADDR(ebp + 0x30)); /* 0x12169DB8: fld qword ptr [ebp + 0x30] */
    _fpu_cmp = FPU_CMP(_st[0], _st[4]); /* 0x12169DBB: fcom st(4) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12169DBD: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x12169DBF: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_12169F78; /* 0x12169DC2: jnp 0x12169f78 */
L_12169DC8:
    fp_push(*(double*)ADDR(ebp + 0x38)); /* 0x12169DC8: fld qword ptr [ebp + 0x38] */
    _fpu_cmp = FPU_CMP(_st[0], _st[5]); /* 0x12169DCB: fcom st(5) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12169DCD: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x12169DCF: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_12169F6C; /* 0x12169DD2: jnp 0x12169f6c */
L_12169DD8:
    fp_push(*(double*)ADDR(ebp + 0x40)); /* 0x12169DD8: fld qword ptr [ebp + 0x40] */
    _fpu_cmp = FPU_CMP(_st[0], _st[6]); /* 0x12169DDB: fcom st(6) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12169DDD: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x12169DDF: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_12169F70; /* 0x12169DE2: jnp 0x12169f70 */
L_12169DE8:
    fp_push(*(double*)ADDR(ebp + 0x48)); /* 0x12169DE8: fld qword ptr [ebp + 0x48] */
    _fpu_cmp = FPU_CMP(_st[0], _st[7]); /* 0x12169DEB: fcomp st(7) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12169DED: fnstsw ax */
    { _st[6] = _st[0]; g_st_i64[6] = g_st_i64[0]; fp_pop(); } /* 0x12169DEF: fstp st(6) */
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x12169DF1: fld qword ptr [ebp + 0x10] */
    /* test HI8(eax), 5 */ /* 0x12169DF4: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_12169F74; /* 0x12169DF7: jnp 0x12169f74 */
L_12169DFD:
    fp_push(*(double*)ADDR(0x120137A0)); /* 0x12169DFD: fld qword ptr [0x120137a0] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12169E03: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12169E05: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x12169E07: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x12169E09: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_12169F4B; /* 0x12169E0C: jnp 0x12169f4b */
L_12169E12:
    _fpu_cmp = FPU_CMP(_st[0], _st[5]); /* 0x12169E12: fcom st(5) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12169E14: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x12169E16: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_12169F4B; /* 0x12169E19: jnp 0x12169f4b */
L_12169E1F:
    _fpu_cmp = FPU_CMP(_st[0], _st[4]); /* 0x12169E1F: fcom st(4) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12169E21: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x12169E23: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_12169F4B; /* 0x12169E26: jnp 0x12169f4b */
L_12169E2C:
    _fpu_cmp = FPU_CMP(_st[0], _st[3]); /* 0x12169E2C: fcom st(3) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12169E2E: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x12169E30: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_12169F4B; /* 0x12169E33: jnp 0x12169f4b */
L_12169E39:
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x12169E39: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12169E3B: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x12169E3D: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_12169F4B; /* 0x12169E40: jnp 0x12169f4b */
L_12169E46:
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x12169E46: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12169E48: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x12169E4A: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_12169F4B; /* 0x12169E4D: jnp 0x12169f4b */
L_12169E53:
    _fpu_cmp = FPU_CMP(_st[0], _st[6]); /* 0x12169E53: fcom st(6) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12169E55: fnstsw ax */
    /* test HI8(eax), 5 */ /* 0x12169E57: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_12169F4B; /* 0x12169E5A: jnp 0x12169f4b */
L_12169E60:
    _fpu_cmp = FPU_CMP(_st[0], *(double*)ADDR(ebp + 0x48)); /* 0x12169E60: fcomp qword ptr [ebp + 0x48] */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x12169E63: fnstsw ax */
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x12169E65: fld qword ptr [ebp + 0x10] */
    /* test HI8(eax), 5 */ /* 0x12169E68: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_12169F4B; /* 0x12169E6B: jnp 0x12169f4b */
L_12169E71:
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x80) = _v; } /* 0x12169E71: fst dword ptr [esi + 0x80] */
    fp_xch(5); /* 0x12169E77: fxch st(5) */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x84) = _v; } /* 0x12169E79: fst dword ptr [esi + 0x84] */
    fp_xch(4); /* 0x12169E7F: fxch st(4) */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x88) = _v; } /* 0x12169E81: fst dword ptr [esi + 0x88] */
    fp_xch(3); /* 0x12169E87: fxch st(3) */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x8C) = _v; } /* 0x12169E89: fst dword ptr [esi + 0x8c] */
    fp_xch(2); /* 0x12169E8F: fxch st(2) */
    { float _v = (float)_st[0]; *(float*)ADDR(esi + 0x90) = _v; } /* 0x12169E91: fst dword ptr [esi + 0x90] */
    fp_xch(1); /* 0x12169E97: fxch st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x94) = _v; } /* 0x12169E99: fstp dword ptr [esi + 0x94] */
    fp_xch(5); /* 0x12169E9F: fxch st(5) */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x98) = _v; } /* 0x12169EA1: fstp dword ptr [esi + 0x98] */
    fp_push(*(double*)ADDR(ebp + 0x48)); /* 0x12169EA7: fld qword ptr [ebp + 0x48] */
    { float _v = (float)fp_pop(); *(float*)ADDR(esi + 0x9C) = _v; } /* 0x12169EAA: fstp dword ptr [esi + 0x9c] */
    fp_push(*(double*)ADDR(0x12013798)); /* 0x12169EB0: fld qword ptr [0x12013798] */
    _st[4] *= _st[0]; /* 0x12169EB6: fmul st(4), st(0) */
    fp_push(*(double*)ADDR(0x120014C0)); /* 0x12169EB8: fld qword ptr [0x120014c0] */
    _st[5] += _st[0]; /* 0x12169EBE: fadd st(5), st(0) */
    fp_xch(5); /* 0x12169EC0: fxch st(5) */
    RECOMP_CALL(sub_121BF371); /* 0x12169EC2: call 0x121bf371 */
    RECOMP_FLAGS_IN();
    _st[3] *= _st[0]; /* 0x12169EC7: fmul st(3), st(0) */
    fp_xch(3); /* 0x12169EC9: fxch st(3) */
    MEM32(esi + 0x100) = eax; /* 0x12169ECB: mov dword ptr [esi + 0x100], eax */
    _st[0] += _st[4]; /* 0x12169ED1: fadd st(4) */
    RECOMP_CALL(sub_121BF371); /* 0x12169ED3: call 0x121bf371 */
    RECOMP_FLAGS_IN();
    fp_xch(1); /* 0x12169ED8: fxch st(1) */
    _st[0] *= _st[2]; /* 0x12169EDA: fmul st(2) */
    MEM32(esi + 0x104) = eax; /* 0x12169EDC: mov dword ptr [esi + 0x104], eax */
    _st[0] += _st[3]; /* 0x12169EE2: fadd st(3) */
    RECOMP_CALL(sub_121BF371); /* 0x12169EE4: call 0x121bf371 */
    RECOMP_FLAGS_IN();
    _st[0] *= _st[1]; /* 0x12169EE9: fmul st(1) */
    MEM32(esi + 0x108) = eax; /* 0x12169EEB: mov dword ptr [esi + 0x108], eax */
    _st[0] += _st[2]; /* 0x12169EF1: fadd st(2) */
    RECOMP_CALL(sub_121BF371); /* 0x12169EF3: call 0x121bf371 */
    RECOMP_FLAGS_IN();
    _st[2] *= _st[0]; /* 0x12169EF8: fmul st(2), st(0) */
    fp_xch(2); /* 0x12169EFA: fxch st(2) */
    MEM32(esi + 0x10C) = eax; /* 0x12169EFC: mov dword ptr [esi + 0x10c], eax */
    _st[0] += _st[1]; /* 0x12169F02: fadd st(1) */
    RECOMP_CALL(sub_121BF371); /* 0x12169F04: call 0x121bf371 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + 0x38)); /* 0x12169F09: fld qword ptr [ebp + 0x38] */
    _st[0] *= _st[2]; /* 0x12169F0C: fmul st(2) */
    MEM32(esi + 0x110) = eax; /* 0x12169F0E: mov dword ptr [esi + 0x110], eax */
    _st[0] += _st[1]; /* 0x12169F14: fadd st(1) */
    RECOMP_CALL(sub_121BF371); /* 0x12169F16: call 0x121bf371 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + 0x40)); /* 0x12169F1B: fld qword ptr [ebp + 0x40] */
    _st[0] *= _st[2]; /* 0x12169F1E: fmul st(2) */
    MEM32(esi + 0x114) = eax; /* 0x12169F20: mov dword ptr [esi + 0x114], eax */
    _st[0] += _st[1]; /* 0x12169F26: fadd st(1) */
    RECOMP_CALL(sub_121BF371); /* 0x12169F28: call 0x121bf371 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(ebp + 0x48)); /* 0x12169F2D: fld qword ptr [ebp + 0x48] */
    { double _v = fp_pop(); _st[1] *= _v; } /* 0x12169F30: fmulp st(2) */
    MEM32(esi + 0x118) = eax; /* 0x12169F32: mov dword ptr [esi + 0x118], eax */
    { double _v = fp_pop(); _st[0] += _v; } /* 0x12169F38: faddp st(1) */
    RECOMP_CALL(sub_121BF371); /* 0x12169F3A: call 0x121bf371 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)((MEM32(esi + 0x8) | 4)); _flag_b = (uint32_t)((MEM32(esi + 0x8) | 4));
    MEM32(esi + 0x8) = MEM32(esi + 0x8) | 4; /* 0x12169F3F: or dword ptr [esi + 8], 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(esi + 0x11C) = eax; /* 0x12169F43: mov dword ptr [esi + 0x11c], eax */
    goto L_12169F8D; /* 0x12169F49: jmp 0x12169f8d */
L_12169F4B:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12169F4B: fstp st(0) */
    PUSH32(esp, 0x12013758u); /* 0x12169F4D: push 0x12013758 */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12169F52: fstp st(0) */
    { _st[4] = _st[0]; g_st_i64[4] = g_st_i64[0]; fp_pop(); } /* 0x12169F54: fstp st(4) */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x12169F56: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12169F58: fstp st(0) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12169F5A: fstp st(0) */
    goto L_12169F85; /* 0x12169F5C: jmp 0x12169f85 */
L_12169F5E:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x12169F5E: fstp st(1) */
    goto L_12169F80; /* 0x12169F60: jmp 0x12169f80 */
L_12169F62:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x12169F62: fstp st(2) */
    goto L_12169F7E; /* 0x12169F64: jmp 0x12169f7e */
L_12169F66:
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x12169F66: fstp st(3) */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x12169F68: fstp st(1) */
    goto L_12169F7E; /* 0x12169F6A: jmp 0x12169f7e */
L_12169F6C:
    { _st[5] = _st[0]; g_st_i64[5] = g_st_i64[0]; fp_pop(); } /* 0x12169F6C: fstp st(5) */
    goto L_12169F78; /* 0x12169F6E: jmp 0x12169f78 */
L_12169F70:
    { _st[6] = _st[0]; g_st_i64[6] = g_st_i64[0]; fp_pop(); } /* 0x12169F70: fstp st(6) */
    goto L_12169F76; /* 0x12169F72: jmp 0x12169f76 */
L_12169F74:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12169F74: fstp st(0) */
L_12169F76:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12169F76: fstp st(0) */
L_12169F78:
    { _st[4] = _st[0]; g_st_i64[4] = g_st_i64[0]; fp_pop(); } /* 0x12169F78: fstp st(4) */
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x12169F7A: fstp st(2) */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12169F7C: fstp st(0) */
L_12169F7E:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12169F7E: fstp st(0) */
L_12169F80:
    PUSH32(esp, 0x12013724u); /* 0x12169F80: push 0x12013724 */
L_12169F85:
    PUSH32(esp, ecx); /* 0x12169F85: push ecx */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x12169F86: fstp st(0) */
    RECOMP_CALL(sub_121687E9); /* 0x12169F88: call 0x121687e9 */
    RECOMP_FLAGS_IN();
L_12169F8D:
    esi = POP32_VAL(esp); /* 0x12169F8D: pop esi */
L_12169F8E:
    ebp = POP32_VAL(esp); /* 0x12169F8E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 76; { RECOMP_REGS_OUT(); return; } /* 0x12169F8F: ret 0x48 */
    RECOMP_REGS_OUT();
}

void sub_12169F97(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x12169F97u);

L_12169F97:
    edi = edi; /* 0x12169F97: mov edi, edi */
    PUSH32(esp, ebp); /* 0x12169F99: push ebp */
    ebp = esp; /* 0x12169F9A: mov ebp, esp */
    ecx = MEM32(ebp + 0x8); /* 0x12169F9C: mov ecx, dword ptr [ebp + 8] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    esp = esp - 0x10u; /* 0x12169F9F: sub esp, 0x10 */
    _flag_k = FK_CMP;
    /* test ecx, ecx */ /* 0x12169FA2: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1216A153; /* 0x12169FA4: je 0x1216a153 */
L_12169FAA:
    edx = MEM32(ebp + 0xC); /* 0x12169FAA: mov edx, dword ptr [ebp + 0xc] */
    /* test edx, edx */ /* 0x12169FAD: test edx, edx */
    _flag_a = (uint32_t)(edx); _flag_b = (uint32_t)(edx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1216A153; /* 0x12169FAF: je 0x1216a153 */
L_12169FB5:
    PUSH32(esp, ebx); /* 0x12169FB5: push ebx */
    PUSH32(esp, esi); /* 0x12169FB6: push esi */
    esi = MEM32(ebp + 0x10); /* 0x12169FB7: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x12169FBA: push edi */
    /* test esi, esi */ /* 0x12169FBB: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1216A145; /* 0x12169FBD: js 0x1216a145 */
L_12169FC3:
    edi = MEM32(ebp + 0x14); /* 0x12169FC3: mov edi, dword ptr [ebp + 0x14] */
    /* test edi, edi */ /* 0x12169FC6: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1216A145; /* 0x12169FC8: js 0x1216a145 */
L_12169FCE:
    ebx = MEM32(ebp + 0x18); /* 0x12169FCE: mov ebx, dword ptr [ebp + 0x18] */
    /* test ebx, ebx */ /* 0x12169FD1: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1216A145; /* 0x12169FD3: js 0x1216a145 */
L_12169FD9:
    /* cmp MEM32(ebp + 0x1C), 0 */ /* 0x12169FD9: cmp dword ptr [ebp + 0x1c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x1C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1216A145; /* 0x12169FDD: jl 0x1216a145 */
L_12169FE3:
    /* cmp MEM32(ebp + 0x20), 0 */ /* 0x12169FE3: cmp dword ptr [ebp + 0x20], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1216A145; /* 0x12169FE7: jl 0x1216a145 */
L_12169FED:
    /* cmp MEM32(ebp + 0x24), 0 */ /* 0x12169FED: cmp dword ptr [ebp + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1216A145; /* 0x12169FF1: jl 0x1216a145 */
L_12169FF7:
    /* cmp MEM32(ebp + 0x28), 0 */ /* 0x12169FF7: cmp dword ptr [ebp + 0x28], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x28)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1216A145; /* 0x12169FFB: jl 0x1216a145 */
L_1216A001:
    /* cmp MEM32(ebp + 0x2C), 0 */ /* 0x1216A001: cmp dword ptr [ebp + 0x2c], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x2C)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1216A145; /* 0x1216A005: jl 0x1216a145 */
L_1216A00B:
    fp_push((double)(int32_t)MEM32(ebp + 0x10)); /* 0x1216A00B: fild dword ptr [ebp + 0x10] */
    *(double*)ADDR(ebp + (-0x8)) = _st[0]; /* 0x1216A00E: fst qword ptr [ebp - 8] */
    fp_push(*(double*)ADDR(0x120137A8)); /* 0x1216A011: fld qword ptr [0x120137a8] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1216A017: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1216A019: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1216A01B: fstp st(1) */
    /* test HI8(eax), 5 */ /* 0x1216A01D: test ah, 5 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(5) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if ((!RECOMP_PF((_flag_a & _flag_b), 24))) goto L_1216A13C; /* 0x1216A020: jnp 0x1216a13c */
L_1216A026:
    fp_push((double)(int32_t)MEM32(ebp + 0x14)); /* 0x1216A026: fild dword ptr [ebp + 0x14] */
    *(double*)ADDR(ebp + (-0x10)) = _st[0]; /* 0x1216A029: fst qword ptr [ebp - 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1216A02C: fcomp st(1) */
    fp_pop();
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1216A02E: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1216A030: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1216A13C; /* 0x1216A033: je 0x1216a13c */
L_1216A039:
    fp_push((double)(int32_t)MEM32(ebp + 0x18)); /* 0x1216A039: fild dword ptr [ebp + 0x18] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1216A03C: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1216A03E: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1216A040: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1216A13A; /* 0x1216A043: je 0x1216a13a */
L_1216A049:
    fp_push((double)(int32_t)MEM32(ebp + 0x1C)); /* 0x1216A049: fild dword ptr [ebp + 0x1c] */
    _fpu_cmp = FPU_CMP(_st[0], _st[2]); /* 0x1216A04C: fcom st(2) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1216A04E: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1216A050: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1216A138; /* 0x1216A053: je 0x1216a138 */
L_1216A059:
    fp_push((double)(int32_t)MEM32(ebp + 0x20)); /* 0x1216A059: fild dword ptr [ebp + 0x20] */
    _fpu_cmp = FPU_CMP(_st[0], _st[3]); /* 0x1216A05C: fcom st(3) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1216A05E: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1216A060: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1216A136; /* 0x1216A063: je 0x1216a136 */
L_1216A069:
    fp_push((double)(int32_t)MEM32(ebp + 0x24)); /* 0x1216A069: fild dword ptr [ebp + 0x24] */
    _fpu_cmp = FPU_CMP(_st[0], _st[4]); /* 0x1216A06C: fcom st(4) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1216A06E: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1216A070: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1216A134; /* 0x1216A073: je 0x1216a134 */
L_1216A079:
    fp_push((double)(int32_t)MEM32(ebp + 0x28)); /* 0x1216A079: fild dword ptr [ebp + 0x28] */
    _fpu_cmp = FPU_CMP(_st[0], _st[5]); /* 0x1216A07C: fcom st(5) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1216A07E: fnstsw ax */
    /* test HI8(eax), 0x41u */ /* 0x1216A080: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1216A132; /* 0x1216A083: je 0x1216a132 */
L_1216A089:
    fp_push((double)(int32_t)MEM32(ebp + 0x2C)); /* 0x1216A089: fild dword ptr [ebp + 0x2c] */
    _fpu_cmp = FPU_CMP(_st[0], _st[6]); /* 0x1216A08C: fcom st(6) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1216A08E: fnstsw ax */
    { _st[6] = _st[0]; g_st_i64[6] = g_st_i64[0]; fp_pop(); } /* 0x1216A090: fstp st(6) */
    /* test HI8(eax), 0x41u */ /* 0x1216A092: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1216A132; /* 0x1216A095: je 0x1216a132 */
L_1216A09B:
    fp_push(*(double*)ADDR(0x12013798)); /* 0x1216A09B: fld qword ptr [0x12013798] */
    eax = MEM32(ebp + 0x1C); /* 0x1216A0A1: mov eax, dword ptr [ebp + 0x1c] */
    fp_push(*(double*)ADDR(ebp + (-0x8))); /* 0x1216A0A4: fld qword ptr [ebp - 8] */
    _flag_a = (uint32_t)((MEM32(edx + 0x8) | 4)); _flag_b = (uint32_t)((MEM32(edx + 0x8) | 4));
    MEM32(edx + 0x8) = MEM32(edx + 0x8) | 4; /* 0x1216A0A7: or dword ptr [edx + 8], 4 */
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] /= _st[1]; /* 0x1216A0AB: fdiv st(1) */
    MEM32(edx + 0x10C) = eax; /* 0x1216A0AD: mov dword ptr [edx + 0x10c], eax */
    eax = MEM32(ebp + 0x20); /* 0x1216A0B3: mov eax, dword ptr [ebp + 0x20] */
    MEM32(edx + 0x110) = eax; /* 0x1216A0B6: mov dword ptr [edx + 0x110], eax */
    eax = MEM32(ebp + 0x24); /* 0x1216A0BC: mov eax, dword ptr [ebp + 0x24] */
    MEM32(edx + 0x114) = eax; /* 0x1216A0BF: mov dword ptr [edx + 0x114], eax */
    eax = MEM32(ebp + 0x28); /* 0x1216A0C5: mov eax, dword ptr [ebp + 0x28] */
    MEM32(edx + 0x118) = eax; /* 0x1216A0C8: mov dword ptr [edx + 0x118], eax */
    eax = MEM32(ebp + 0x2C); /* 0x1216A0CE: mov eax, dword ptr [ebp + 0x2c] */
    MEM32(edx + 0x100) = esi; /* 0x1216A0D1: mov dword ptr [edx + 0x100], esi */
    MEM32(edx + 0x104) = edi; /* 0x1216A0D7: mov dword ptr [edx + 0x104], edi */
    MEM32(edx + 0x108) = ebx; /* 0x1216A0DD: mov dword ptr [edx + 0x108], ebx */
    MEM32(edx + 0x11C) = eax; /* 0x1216A0E3: mov dword ptr [edx + 0x11c], eax */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + 0x80) = _v; } /* 0x1216A0E9: fstp dword ptr [edx + 0x80] */
    fp_push(*(double*)ADDR(ebp + (-0x10))); /* 0x1216A0EF: fld qword ptr [ebp - 0x10] */
    _st[0] /= _st[1]; /* 0x1216A0F2: fdiv st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + 0x84) = _v; } /* 0x1216A0F4: fstp dword ptr [edx + 0x84] */
    _st[5] /= _st[0]; /* 0x1216A0FA: fdiv st(5), st(0) */
    fp_xch(5); /* 0x1216A0FC: fxch st(5) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + 0x88) = _v; } /* 0x1216A0FE: fstp dword ptr [edx + 0x88] */
    fp_xch(3); /* 0x1216A104: fxch st(3) */
    _st[0] /= _st[4]; /* 0x1216A106: fdiv st(4) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + 0x8C) = _v; } /* 0x1216A108: fstp dword ptr [edx + 0x8c] */
    fp_xch(1); /* 0x1216A10E: fxch st(1) */
    _st[0] /= _st[3]; /* 0x1216A110: fdiv st(3) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + 0x90) = _v; } /* 0x1216A112: fstp dword ptr [edx + 0x90] */
    _st[0] /= _st[2]; /* 0x1216A118: fdiv st(2) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + 0x94) = _v; } /* 0x1216A11A: fstp dword ptr [edx + 0x94] */
    _st[0] /= _st[1]; /* 0x1216A120: fdiv st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + 0x98) = _v; } /* 0x1216A122: fstp dword ptr [edx + 0x98] */
    { double _v = fp_pop(); _st[0] = _v == 0.0 ? _st[0] : _st[0] / _v; } /* 0x1216A128: fdivp st(1) */
    { float _v = (float)fp_pop(); *(float*)ADDR(edx + 0x9C) = _v; } /* 0x1216A12A: fstp dword ptr [edx + 0x9c] */
    goto L_1216A150; /* 0x1216A130: jmp 0x1216a150 */
L_1216A132:
    { _st[5] = _st[0]; g_st_i64[5] = g_st_i64[0]; fp_pop(); } /* 0x1216A132: fstp st(5) */
L_1216A134:
    { _st[4] = _st[0]; g_st_i64[4] = g_st_i64[0]; fp_pop(); } /* 0x1216A134: fstp st(4) */
L_1216A136:
    { _st[3] = _st[0]; g_st_i64[3] = g_st_i64[0]; fp_pop(); } /* 0x1216A136: fstp st(3) */
L_1216A138:
    { _st[2] = _st[0]; g_st_i64[2] = g_st_i64[0]; fp_pop(); } /* 0x1216A138: fstp st(2) */
L_1216A13A:
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1216A13A: fstp st(1) */
L_1216A13C:
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1216A13C: fstp st(0) */
    PUSH32(esp, 0x12013758u); /* 0x1216A13E: push 0x12013758 */
    goto L_1216A14A; /* 0x1216A143: jmp 0x1216a14a */
L_1216A145:
    PUSH32(esp, 0x12013724u); /* 0x1216A145: push 0x12013724 */
L_1216A14A:
    PUSH32(esp, ecx); /* 0x1216A14A: push ecx */
    RECOMP_CALL(sub_121687E9); /* 0x1216A14B: call 0x121687e9 */
    RECOMP_FLAGS_IN();
L_1216A150:
    edi = POP32_VAL(esp); /* 0x1216A150: pop edi */
    esi = POP32_VAL(esp); /* 0x1216A151: pop esi */
    ebx = POP32_VAL(esp); /* 0x1216A152: pop ebx */
L_1216A153:
    esp = ebp; ebp = POP32_VAL(esp); /* 0x1216A153: leave  */
    RECOMP_FLAGS_OUT(); esp += 44; { RECOMP_REGS_OUT(); return; } /* 0x1216A154: ret 0x28 */
    RECOMP_REGS_OUT();
}

void sub_1216A15C(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1216A15Cu);

L_1216A15C:
    edi = edi; /* 0x1216A15C: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1216A15E: push ebp */
    ebp = esp; /* 0x1216A15F: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1216A161: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1216A1D1; /* 0x1216A165: je 0x1216a1d1 */
L_1216A167:
    PUSH32(esp, edi); /* 0x1216A167: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1216A168: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x1216A16B: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1216A1D0; /* 0x1216A16D: je 0x1216a1d0 */
L_1216A16F:
    fp_push(*(double*)ADDR(0x120137A0)); /* 0x1216A16F: fld qword ptr [0x120137a0] */
    fp_push(*(double*)ADDR(ebp + 0x10)); /* 0x1216A175: fld qword ptr [ebp + 0x10] */
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1216A178: fcom st(1) */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1216A17A: fnstsw ax */
    { _st[1] = _st[0]; g_st_i64[1] = g_st_i64[0]; fp_pop(); } /* 0x1216A17C: fstp st(1) */
    /* test HI8(eax), 0x41u */ /* 0x1216A17E: test ah, 0x41 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x41u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1216A198; /* 0x1216A181: jne 0x1216a198 */
L_1216A183:
    PUSH32(esp, 0x120137C0u); /* 0x1216A183: push 0x120137c0 */
    { _st[0] = _st[0]; g_st_i64[0] = g_st_i64[0]; fp_pop(); } /* 0x1216A188: fstp st(0) */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1216A18A: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_121687E9); /* 0x1216A18D: call 0x121687e9 */
    RECOMP_FLAGS_IN();
    fp_push(*(double*)ADDR(0x120137A0)); /* 0x1216A192: fld qword ptr [0x120137a0] */
L_1216A198:
    { float _v = (float)_st[0]; *(float*)ADDR(edi + 0x28) = _v; } /* 0x1216A198: fst dword ptr [edi + 0x28] */
    fp_push(*(double*)ADDR(0x12013798)); /* 0x1216A19B: fld qword ptr [0x12013798] */
    _st[0] *= _st[1]; /* 0x1216A1A1: fmul st(1) */
    _st[0] += *(double*)ADDR(0x120014C0); /* 0x1216A1A3: fadd qword ptr [0x120014c0] */
    RECOMP_CALL(sub_121BF371); /* 0x1216A1A9: call 0x121bf371 */
    RECOMP_FLAGS_IN();
    fp_push(0.0); /* 0x1216A1AE: fldz  */
    _flag_a = (uint32_t)((MEM32(edi + 0x8) | 1)); _flag_b = (uint32_t)((MEM32(edi + 0x8) | 1));
    MEM32(edi + 0x8) = MEM32(edi + 0x8) | 1; /* 0x1216A1B0: or dword ptr [edi + 8], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    _fpu_cmp = FPU_CMP(_st[0], _st[1]); /* 0x1216A1B4: fucompp  */
    fp_pop(); fp_pop();
    MEM32(edi + 0xFC) = eax; /* 0x1216A1B6: mov dword ptr [edi + 0xfc], eax */
    eax = (eax & 0xFFFF0000u) | ((_fpu_cmp >= 0x10000) ? (uint32_t)(_fpu_cmp & 0x4700) : _fpu_cmp == 2 ? 0x4500u : _fpu_cmp < 0 ? 0x0100u : _fpu_cmp == 0 ? 0x4000u : 0x0000u); /* 0x1216A1BC: fnstsw ax */
    /* test HI8(eax), 0x44u */ /* 0x1216A1BE: test ah, 0x44 */
    _flag_a = (uint32_t)(HI8(eax)) << 24; _flag_b = (uint32_t)(0x44u) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (RECOMP_PF((_flag_a & _flag_b), 24)) goto L_1216A1D0; /* 0x1216A1C1: jp 0x1216a1d0 */
L_1216A1C3:
    PUSH32(esp, 0x120137B0u); /* 0x1216A1C3: push 0x120137b0 */
    PUSH32(esp, MEM32(ebp + 0x8)); /* 0x1216A1C8: push dword ptr [ebp + 8] */
    RECOMP_CALL(sub_121687E9); /* 0x1216A1CB: call 0x121687e9 */
    RECOMP_FLAGS_IN();
L_1216A1D0:
    edi = POP32_VAL(esp); /* 0x1216A1D0: pop edi */
L_1216A1D1:
    ebp = POP32_VAL(esp); /* 0x1216A1D1: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1216A1D2: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1216A1DA(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1216A1DAu);

L_1216A1DA:
    edi = edi; /* 0x1216A1DA: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1216A1DC: push ebp */
    ebp = esp; /* 0x1216A1DD: mov ebp, esp */
    PUSH32(esp, edi); /* 0x1216A1DF: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1216A1E0: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1216A1E3: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1216A24B; /* 0x1216A1E5: je 0x1216a24b */
L_1216A1E7:
    PUSH32(esp, ebx); /* 0x1216A1E7: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1216A1E8: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x1216A1EB: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1216A24A; /* 0x1216A1ED: je 0x1216a24a */
L_1216A1EF:
    eax = MEM32(ebp + 0x10); /* 0x1216A1EF: mov eax, dword ptr [ebp + 0x10] */
    PUSH32(esp, esi); /* 0x1216A1F2: push esi */
    esi = 0x7FFFFFFFu; /* 0x1216A1F3: mov esi, 0x7fffffff */
    /* cmp eax, esi */ /* 0x1216A1F8: cmp eax, esi */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(esi);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1216A209; /* 0x1216A1FA: jle 0x1216a209 */
L_1216A1FC:
    PUSH32(esp, 0x120137C0u); /* 0x1216A1FC: push 0x120137c0 */
    PUSH32(esp, edi); /* 0x1216A201: push edi */
    RECOMP_CALL(sub_121687E9); /* 0x1216A202: call 0x121687e9 */
    RECOMP_FLAGS_IN();
    goto L_1216A21A; /* 0x1216A207: jmp 0x1216a21a */
L_1216A209:
    /* test eax, eax */ /* 0x1216A209: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) == 0u)) goto L_1216A21F; /* 0x1216A20B: jns 0x1216a21f */
L_1216A20D:
    PUSH32(esp, 0x120137DCu); /* 0x1216A20D: push 0x120137dc */
    PUSH32(esp, edi); /* 0x1216A212: push edi */
    RECOMP_CALL(sub_121687E9); /* 0x1216A213: call 0x121687e9 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    esi = 0; /* 0x1216A218: xor esi, esi */
    _cf = 0;
    _flag_k = FK_TEST;
L_1216A21A:
    MEM32(ebp + 0x8) = esi; /* 0x1216A21A: mov dword ptr [ebp + 8], esi */
    goto L_1216A224; /* 0x1216A21D: jmp 0x1216a224 */
L_1216A21F:
    esi = eax; /* 0x1216A21F: mov esi, eax */
    MEM32(ebp + 0x8) = eax; /* 0x1216A221: mov dword ptr [ebp + 8], eax */
L_1216A224:
    fp_push((double)(int32_t)MEM32(ebp + 0x8)); /* 0x1216A224: fild dword ptr [ebp + 8] */
    _flag_a = (uint32_t)((MEM32(ebx + 0x8) | 1)); _flag_b = (uint32_t)((MEM32(ebx + 0x8) | 1));
    MEM32(ebx + 0x8) = MEM32(ebx + 0x8) | 1; /* 0x1216A227: or dword ptr [ebx + 8], 1 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ebx + 0xFC) = esi; /* 0x1216A22B: mov dword ptr [ebx + 0xfc], esi */
    /* test esi, esi */ /* 0x1216A231: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    _st[0] /= *(double*)ADDR(0x12013798); /* 0x1216A233: fdiv qword ptr [0x12013798] */
    esi = POP32_VAL(esp); /* 0x1216A239: pop esi */
    { float _v = (float)fp_pop(); *(float*)ADDR(ebx + 0x28) = _v; } /* 0x1216A23A: fstp dword ptr [ebx + 0x28] */
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1216A24A; /* 0x1216A23D: jne 0x1216a24a */
L_1216A23F:
    PUSH32(esp, 0x120137B0u); /* 0x1216A23F: push 0x120137b0 */
    PUSH32(esp, edi); /* 0x1216A244: push edi */
    RECOMP_CALL(sub_121687E9); /* 0x1216A245: call 0x121687e9 */
    RECOMP_FLAGS_IN();
L_1216A24A:
    ebx = POP32_VAL(esp); /* 0x1216A24A: pop ebx */
L_1216A24B:
    edi = POP32_VAL(esp); /* 0x1216A24B: pop edi */
    ebp = POP32_VAL(esp); /* 0x1216A24C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1216A24D: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1216A255(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1216A255u);

L_1216A255:
    edi = edi; /* 0x1216A255: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1216A257: push ebp */
    ebp = esp; /* 0x1216A258: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1216A25A: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1216A25B: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1216A25E: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1216A2DE; /* 0x1216A260: je 0x1216a2de */
L_1216A262:
    PUSH32(esp, edi); /* 0x1216A262: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1216A263: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x1216A266: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1216A2DD; /* 0x1216A268: je 0x1216a2dd */
L_1216A26A:
    PUSH32(esp, ebx); /* 0x1216A26A: push ebx */
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1216A26B: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM16(edi + 0x14), LO16(ebx) */ /* 0x1216A26D: cmp word ptr [edi + 0x14], bx */
    _flag_a = (uint32_t)(MEM16(edi + 0x14)) << 16; _flag_b = (uint32_t)(LO16(ebx)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_NE(_flag_a, _flag_b)) goto L_1216A27A; /* 0x1216A271: jne 0x1216a27a */
L_1216A273:
    PUSH32(esp, 0x12013828u); /* 0x1216A273: push 0x12013828 */
    goto L_1216A29E; /* 0x1216A278: jmp 0x1216a29e */
L_1216A27A:
    PUSH32(esp, ebx); /* 0x1216A27A: push ebx */
    PUSH32(esp, 8); /* 0x1216A27B: push 8 */
    PUSH32(esp, edi); /* 0x1216A27D: push edi */
    PUSH32(esp, esi); /* 0x1216A27E: push esi */
    RECOMP_CALL(sub_12168A5C); /* 0x1216A27F: call 0x12168a5c */
    RECOMP_FLAGS_IN();
    PUSH32(esp, 0x200u); /* 0x1216A284: push 0x200 */
    PUSH32(esp, esi); /* 0x1216A289: push esi */
    RECOMP_CALL(sub_1217015D); /* 0x1216A28A: call 0x1217015d */
    RECOMP_FLAGS_IN();
    MEM32(esi + 0x1F4) = eax; /* 0x1216A28F: mov dword ptr [esi + 0x1f4], eax */
    /* test eax, eax */ /* 0x1216A295: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1216A2A6; /* 0x1216A297: jne 0x1216a2a6 */
L_1216A299:
    PUSH32(esp, 0x120137FCu); /* 0x1216A299: push 0x120137fc */
L_1216A29E:
    PUSH32(esp, esi); /* 0x1216A29E: push esi */
    RECOMP_CALL(sub_121687E9); /* 0x1216A29F: call 0x121687e9 */
    RECOMP_FLAGS_IN();
    goto L_1216A2DC; /* 0x1216A2A4: jmp 0x1216a2dc */
L_1216A2A6:
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    eax = 0; /* 0x1216A2A6: xor eax, eax */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp LO16(eax), MEM16(edi + 0x14) */ /* 0x1216A2A8: cmp ax, word ptr [edi + 0x14] */
    _flag_a = (uint32_t)(LO16(eax)) << 16; _flag_b = (uint32_t)(MEM16(edi + 0x14)) << 16;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 16);
    if (CMP_AE(_flag_a, _flag_b)) goto L_1216A2C8; /* 0x1216A2AC: jae 0x1216a2c8 */
L_1216A2AE:
    edx = MEM32(ebp + 0x10); /* 0x1216A2AE: mov edx, dword ptr [ebp + 0x10] */
L_1216A2B1:
    SET_LO16(eax, MEM16(edx + ebx * 2)); /* 0x1216A2B1: mov ax, word ptr [edx + ebx*2] */
    ecx = MEM32(esi + 0x1F4); /* 0x1216A2B5: mov ecx, dword ptr [esi + 0x1f4] */
    MEM16(ecx + ebx * 2) = (uint16_t)(LO16(eax)); /* 0x1216A2BB: mov word ptr [ecx + ebx*2], ax */
    eax = (uint32_t)MEM16(edi + 0x14); /* 0x1216A2BF: movzx eax, word ptr [edi + 0x14] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1216A2C3: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, eax */ /* 0x1216A2C4: cmp ebx, eax */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(eax);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1216A2B1; /* 0x1216A2C6: jl 0x1216a2b1 */
L_1216A2C8:
    eax = MEM32(esi + 0x1F4); /* 0x1216A2C8: mov eax, dword ptr [esi + 0x1f4] */
    _flag_a = (uint32_t)((MEM32(edi + 0x8) | 0x40u)); _flag_b = (uint32_t)((MEM32(edi + 0x8) | 0x40u));
    MEM32(edi + 0x8) = MEM32(edi + 0x8) | 0x40u; /* 0x1216A2CE: or dword ptr [edi + 8], 0x40 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(edi + 0xB8) | 8)); _flag_b = (uint32_t)((MEM32(edi + 0xB8) | 8));
    MEM32(edi + 0xB8) = MEM32(edi + 0xB8) | 8; /* 0x1216A2D2: or dword ptr [edi + 0xb8], 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(edi + 0x7C) = eax; /* 0x1216A2D9: mov dword ptr [edi + 0x7c], eax */
L_1216A2DC:
    ebx = POP32_VAL(esp); /* 0x1216A2DC: pop ebx */
L_1216A2DD:
    edi = POP32_VAL(esp); /* 0x1216A2DD: pop edi */
L_1216A2DE:
    esi = POP32_VAL(esp); /* 0x1216A2DE: pop esi */
    ebp = POP32_VAL(esp); /* 0x1216A2DF: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1216A2E0: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1216A2E8(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1216A2E8u);

L_1216A2E8:
    edi = edi; /* 0x1216A2E8: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1216A2EA: push ebp */
    ebp = esp; /* 0x1216A2EB: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1216A2ED: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1216A2EE: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1216A2F1: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1216A48D; /* 0x1216A2F3: je 0x1216a48d */
L_1216A2F9:
    PUSH32(esp, edi); /* 0x1216A2F9: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1216A2FA: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x1216A2FD: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1216A48C; /* 0x1216A2FF: je 0x1216a48c */
L_1216A305:
    PUSH32(esp, ebx); /* 0x1216A305: push ebx */
    ebx = MEM32(ebp + 0x10); /* 0x1216A306: mov ebx, dword ptr [ebp + 0x10] */
    /* test ebx, ebx */ /* 0x1216A309: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1216A314; /* 0x1216A30B: je 0x1216a314 */
L_1216A30D:
    eax = MEM32(ebp + 0x14); /* 0x1216A30D: mov eax, dword ptr [ebp + 0x14] */
    /* test eax, eax */ /* 0x1216A310: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1216A322; /* 0x1216A312: jne 0x1216a322 */
L_1216A314:
    PUSH32(esp, 0x1201399Cu); /* 0x1216A314: push 0x1201399c */
    PUSH32(esp, esi); /* 0x1216A319: push esi */
    RECOMP_CALL(sub_121687C1); /* 0x1216A31A: call 0x121687c1 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x14); /* 0x1216A31F: mov eax, dword ptr [ebp + 0x14] */
L_1216A322:
    ecx = 0x000F4240u; /* 0x1216A322: mov ecx, 0xf4240 */
    /* cmp ebx, ecx */ /* 0x1216A327: cmp ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1216A32F; /* 0x1216A329: ja 0x1216a32f */
L_1216A32B:
    /* cmp eax, ecx */ /* 0x1216A32B: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1216A33D; /* 0x1216A32D: jbe 0x1216a33d */
L_1216A32F:
    PUSH32(esp, 0x12013974u); /* 0x1216A32F: push 0x12013974 */
    PUSH32(esp, esi); /* 0x1216A334: push esi */
    RECOMP_CALL(sub_121687C1); /* 0x1216A335: call 0x121687c1 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x14); /* 0x1216A33A: mov eax, dword ptr [ebp + 0x14] */
L_1216A33D:
    ecx = 0x7FFFFFFFu; /* 0x1216A33D: mov ecx, 0x7fffffff */
    /* cmp ebx, ecx */ /* 0x1216A342: cmp ebx, ecx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_A(_flag_a, _flag_b)) goto L_1216A34A; /* 0x1216A344: ja 0x1216a34a */
L_1216A346:
    /* cmp eax, ecx */ /* 0x1216A346: cmp eax, ecx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(ecx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1216A355; /* 0x1216A348: jbe 0x1216a355 */
L_1216A34A:
    PUSH32(esp, 0x12013958u); /* 0x1216A34A: push 0x12013958 */
    PUSH32(esp, esi); /* 0x1216A34F: push esi */
    RECOMP_CALL(sub_121687C1); /* 0x1216A350: call 0x121687c1 */
    RECOMP_FLAGS_IN();
L_1216A355:
    /* cmp ebx, 0x1FFFFF7Eu */ /* 0x1216A355: cmp ebx, 0x1fffff7e */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x1FFFFF7Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1216A368; /* 0x1216A35B: jbe 0x1216a368 */
L_1216A35D:
    PUSH32(esp, 0x12013928u); /* 0x1216A35D: push 0x12013928 */
    PUSH32(esp, esi); /* 0x1216A362: push esi */
    RECOMP_CALL(sub_121687E9); /* 0x1216A363: call 0x121687e9 */
    RECOMP_FLAGS_IN();
L_1216A368:
    eax = MEM32(ebp + 0x18); /* 0x1216A368: mov eax, dword ptr [ebp + 0x18] */
    /* cmp eax, 1 */ /* 0x1216A36B: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1216A38F; /* 0x1216A36E: je 0x1216a38f */
L_1216A370:
    /* cmp eax, 2 */ /* 0x1216A370: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1216A38F; /* 0x1216A373: je 0x1216a38f */
L_1216A375:
    /* cmp eax, 4 */ /* 0x1216A375: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1216A38F; /* 0x1216A378: je 0x1216a38f */
L_1216A37A:
    /* cmp eax, 8 */ /* 0x1216A37A: cmp eax, 8 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1216A38F; /* 0x1216A37D: je 0x1216a38f */
L_1216A37F:
    /* cmp eax, 0x10u */ /* 0x1216A37F: cmp eax, 0x10 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(0x10u);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1216A38F; /* 0x1216A382: je 0x1216a38f */
L_1216A384:
    PUSH32(esp, 0x1201390Cu); /* 0x1216A384: push 0x1201390c */
    PUSH32(esp, esi); /* 0x1216A389: push esi */
    RECOMP_CALL(sub_121687C1); /* 0x1216A38A: call 0x121687c1 */
    RECOMP_FLAGS_IN();
L_1216A38F:
    eax = MEM32(ebp + 0x1C); /* 0x1216A38F: mov eax, dword ptr [ebp + 0x1c] */
    /* test eax, eax */ /* 0x1216A392: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (((((uint32_t)(_flag_a) & (uint32_t)(_flag_b)) & 0x80000000u) != 0u)) goto L_1216A3A5; /* 0x1216A394: js 0x1216a3a5 */
L_1216A396:
    /* cmp eax, 1 */ /* 0x1216A396: cmp eax, 1 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(1);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1216A3A5; /* 0x1216A399: je 0x1216a3a5 */
L_1216A39B:
    /* cmp eax, 5 */ /* 0x1216A39B: cmp eax, 5 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(5);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1216A3A5; /* 0x1216A39E: je 0x1216a3a5 */
L_1216A3A0:
    /* cmp eax, 6 */ /* 0x1216A3A0: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1216A3B3; /* 0x1216A3A3: jle 0x1216a3b3 */
L_1216A3A5:
    PUSH32(esp, 0x120138F0u); /* 0x1216A3A5: push 0x120138f0 */
    PUSH32(esp, esi); /* 0x1216A3AA: push esi */
    RECOMP_CALL(sub_121687C1); /* 0x1216A3AB: call 0x121687c1 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x1C); /* 0x1216A3B0: mov eax, dword ptr [ebp + 0x1c] */
L_1216A3B3:
    ecx = MEM32(ebp + 0x18); /* 0x1216A3B3: mov ecx, dword ptr [ebp + 0x18] */
    /* cmp eax, 3 */ /* 0x1216A3B6: cmp eax, 3 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(3);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1216A3C0; /* 0x1216A3B9: jne 0x1216a3c0 */
L_1216A3BB:
    /* cmp ecx, 8 */ /* 0x1216A3BB: cmp ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_G(_flag_a, _flag_b)) goto L_1216A3D4; /* 0x1216A3BE: jg 0x1216a3d4 */
L_1216A3C0:
    /* cmp eax, 2 */ /* 0x1216A3C0: cmp eax, 2 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1216A3CF; /* 0x1216A3C3: je 0x1216a3cf */
L_1216A3C5:
    /* cmp eax, 4 */ /* 0x1216A3C5: cmp eax, 4 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(4);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1216A3CF; /* 0x1216A3C8: je 0x1216a3cf */
L_1216A3CA:
    /* cmp eax, 6 */ /* 0x1216A3CA: cmp eax, 6 */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(6);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_NE(_flag_a, _flag_b)) goto L_1216A3DF; /* 0x1216A3CD: jne 0x1216a3df */
L_1216A3CF:
    /* cmp ecx, 8 */ /* 0x1216A3CF: cmp ecx, 8 */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(8);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_GE(_flag_a, _flag_b)) goto L_1216A3DF; /* 0x1216A3D2: jge 0x1216a3df */
L_1216A3D4:
    PUSH32(esp, 0x120138BCu); /* 0x1216A3D4: push 0x120138bc */
    PUSH32(esp, esi); /* 0x1216A3D9: push esi */
    RECOMP_CALL(sub_121687C1); /* 0x1216A3DA: call 0x121687c1 */
    RECOMP_FLAGS_IN();
L_1216A3DF:
    /* cmp MEM32(ebp + 0x20), 2 */ /* 0x1216A3DF: cmp dword ptr [ebp + 0x20], 2 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(2);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_L(_flag_a, _flag_b)) goto L_1216A3F0; /* 0x1216A3E3: jl 0x1216a3f0 */
L_1216A3E5:
    PUSH32(esp, 0x12013898u); /* 0x1216A3E5: push 0x12013898 */
    PUSH32(esp, esi); /* 0x1216A3EA: push esi */
    RECOMP_CALL(sub_121687C1); /* 0x1216A3EB: call 0x121687c1 */
    RECOMP_FLAGS_IN();
L_1216A3F0:
    /* cmp MEM32(ebp + 0x24), 0 */ /* 0x1216A3F0: cmp dword ptr [ebp + 0x24], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x24)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1216A401; /* 0x1216A3F4: je 0x1216a401 */
L_1216A3F6:
    PUSH32(esp, 0x12013874u); /* 0x1216A3F6: push 0x12013874 */
    PUSH32(esp, esi); /* 0x1216A3FB: push esi */
    RECOMP_CALL(sub_121687C1); /* 0x1216A3FC: call 0x121687c1 */
    RECOMP_FLAGS_IN();
L_1216A401:
    eax = MEM32(ebp + 0x28); /* 0x1216A401: mov eax, dword ptr [ebp + 0x28] */
    /* test eax, eax */ /* 0x1216A404: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1216A416; /* 0x1216A406: je 0x1216a416 */
L_1216A408:
    PUSH32(esp, 0x12013854u); /* 0x1216A408: push 0x12013854 */
    PUSH32(esp, esi); /* 0x1216A40D: push esi */
    RECOMP_CALL(sub_121687C1); /* 0x1216A40E: call 0x121687c1 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x28); /* 0x1216A413: mov eax, dword ptr [ebp + 0x28] */
L_1216A416:
    ecx = MEM32(ebp + 0x14); /* 0x1216A416: mov ecx, dword ptr [ebp + 0x14] */
    edx = MEM32(ebp + 0x18); /* 0x1216A419: mov edx, dword ptr [ebp + 0x18] */
    MEM32(edi + 0x4) = ecx; /* 0x1216A41C: mov dword ptr [edi + 4], ecx */
    ecx = MEM32(ebp + 0x1C); /* 0x1216A41F: mov ecx, dword ptr [ebp + 0x1c] */
    MEM32(edi) = ebx; /* 0x1216A422: mov dword ptr [edi], ebx */
    ebx = MEM32(ebp + 0x24); /* 0x1216A424: mov ebx, dword ptr [ebp + 0x24] */
    MEM8(edi + 0x1B) = (uint8_t)(LO8(eax)); /* 0x1216A427: mov byte ptr [edi + 0x1b], al */
    eax = MEM32(ebp + 0x20); /* 0x1216A42A: mov eax, dword ptr [ebp + 0x20] */
    MEM8(edi + 0x18) = (uint8_t)(LO8(edx)); /* 0x1216A42D: mov byte ptr [edi + 0x18], dl */
    MEM8(edi + 0x19) = (uint8_t)(LO8(ecx)); /* 0x1216A430: mov byte ptr [edi + 0x19], cl */
    MEM8(edi + 0x1A) = (uint8_t)(LO8(ebx)); /* 0x1216A433: mov byte ptr [edi + 0x1a], bl */
    MEM8(edi + 0x1C) = (uint8_t)(LO8(eax)); /* 0x1216A436: mov byte ptr [edi + 0x1c], al */
    /* cmp LO8(ecx), 3 */ /* 0x1216A439: cmp cl, 3 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(3) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1216A44B; /* 0x1216A43C: je 0x1216a44b */
L_1216A43E:
    /* test LO8(ecx), 2 */ /* 0x1216A43E: test cl, 2 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(2) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1216A44B; /* 0x1216A441: je 0x1216a44b */
L_1216A443:
    eax = edi + 0x1D; /* 0x1216A443: lea eax, [edi + 0x1d] */
    MEM8(eax) = (uint8_t)(3); /* 0x1216A446: mov byte ptr [eax], 3 */
    goto L_1216A451; /* 0x1216A449: jmp 0x1216a451 */
L_1216A44B:
    eax = edi + 0x1D; /* 0x1216A44B: lea eax, [edi + 0x1d] */
    MEM8(eax) = (uint8_t)(1); /* 0x1216A44E: mov byte ptr [eax], 1 */
L_1216A451:
    ebx = MEM32(ebp + 0x10); /* 0x1216A451: mov ebx, dword ptr [ebp + 0x10] */
    /* test LO8(ecx), 4 */ /* 0x1216A454: test cl, 4 */
    _flag_a = (uint32_t)(LO8(ecx)) << 24; _flag_b = (uint32_t)(4) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    if (TEST_Z(_flag_a, _flag_b)) goto L_1216A45B; /* 0x1216A457: je 0x1216a45b */
L_1216A459:
    _flag_a = (uint32_t)(MEM8(eax)) << 24; _flag_b = (uint32_t)(1) << 24;
    MEM8(eax) = (uint8_t)(MEM8(eax) + 1); /* 0x1216A459: inc byte ptr [eax] */
    _flag_k = FK_NARROW(FK_INC, 24);
L_1216A45B:
    SET_LO8(eax, MEM8(eax)); /* 0x1216A45B: mov al, byte ptr [eax] */
    { int32_t _r = (int32_t)(int8_t)LO8(eax) * (int8_t)(LO8(edx)); /* 0x1216A45D: imul dl */
      SET_LO16(eax, (uint16_t)_r); uint32_t _ov = _r != (int8_t)_r;
      _flag_k = FK_EFLAGS; _flag_a = _ov ? 0x801u : 0u; _flag_b = 0; _cf = _ov; }
    MEM8(edi + 0x1E) = (uint8_t)(LO8(eax)); /* 0x1216A45F: mov byte ptr [edi + 0x1e], al */
    /* cmp ebx, 0x1FFFFF7Eu */ /* 0x1216A462: cmp ebx, 0x1fffff7e */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(0x1FFFFF7Eu);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_BE(_flag_a, _flag_b)) goto L_1216A470; /* 0x1216A468: jbe 0x1216a470 */
L_1216A46A:
    _flag_a = (uint32_t)(MEM32(edi + 0xC)); _flag_b = (uint32_t)(0);
    MEM32(edi + 0xC) = MEM32(edi + 0xC) & 0; /* 0x1216A46A: and dword ptr [edi + 0xc], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    goto L_1216A48B; /* 0x1216A46E: jmp 0x1216a48b */
L_1216A470:
    /* cmp LO8(eax), 8 */ /* 0x1216A470: cmp al, 8 */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(8) << 24;
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_NARROW(FK_CMP, 24);
    eax = (uint32_t)LO8(eax); /* 0x1216A472: movzx eax, al */
    if (CMP_B(_flag_a, _flag_b)) goto L_1216A47F; /* 0x1216A475: jb 0x1216a47f */
L_1216A477:
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x1216A477: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x1216A477: shr eax, 3 */
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx); /* 0x1216A47A: imul eax, ebx */
    goto L_1216A488; /* 0x1216A47D: jmp 0x1216a488 */
L_1216A47F:
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx); /* 0x1216A47F: imul eax, ebx */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(7);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    eax = eax + 7; /* 0x1216A482: add eax, 7 */
    _flag_k = FK_ADD;
    if (3u) _cf = (((eax) >> 2) & 1u); /* 0x1216A485: shr eax, 3 */
    if (3u) { _flag_a = recomp_flags_pack((eax >> 3u), _cf, 0, 0); _flag_b = 0; _flag_k = FK_EFLAGS; }
    eax = eax >> 3u; /* 0x1216A485: shr eax, 3 */
L_1216A488:
    MEM32(edi + 0xC) = eax; /* 0x1216A488: mov dword ptr [edi + 0xc], eax */
L_1216A48B:
    ebx = POP32_VAL(esp); /* 0x1216A48B: pop ebx */
L_1216A48C:
    edi = POP32_VAL(esp); /* 0x1216A48C: pop edi */
L_1216A48D:
    esi = POP32_VAL(esp); /* 0x1216A48D: pop esi */
    ebp = POP32_VAL(esp); /* 0x1216A48E: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x1216A48F: ret 0x24 */
    RECOMP_REGS_OUT();
}

void sub_1216A497(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1216A497u);

L_1216A497:
    edi = edi; /* 0x1216A497: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1216A499: push ebp */
    ebp = esp; /* 0x1216A49A: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1216A49C: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1216A4C2; /* 0x1216A4A0: je 0x1216a4c2 */
L_1216A4A2:
    ecx = MEM32(ebp + 0xC); /* 0x1216A4A2: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x1216A4A5: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1216A4C2; /* 0x1216A4A7: je 0x1216a4c2 */
L_1216A4A9:
    eax = MEM32(ebp + 0x10); /* 0x1216A4A9: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)((MEM32(ecx + 0x8) | 0x100u)); _flag_b = (uint32_t)((MEM32(ecx + 0x8) | 0x100u));
    MEM32(ecx + 0x8) = MEM32(ecx + 0x8) | 0x100u; /* 0x1216A4AC: or dword ptr [ecx + 8], 0x100 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x64) = eax; /* 0x1216A4B3: mov dword ptr [ecx + 0x64], eax */
    eax = MEM32(ebp + 0x14); /* 0x1216A4B6: mov eax, dword ptr [ebp + 0x14] */
    MEM32(ecx + 0x68) = eax; /* 0x1216A4B9: mov dword ptr [ecx + 0x68], eax */
    SET_LO8(eax, MEM8(ebp + 0x18)); /* 0x1216A4BC: mov al, byte ptr [ebp + 0x18] */
    MEM8(ecx + 0x6C) = (uint8_t)(LO8(eax)); /* 0x1216A4BF: mov byte ptr [ecx + 0x6c], al */
L_1216A4C2:
    ebp = POP32_VAL(esp); /* 0x1216A4C2: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1216A4C3: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_1216A4CB(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1216A4CBu);

L_1216A4CB:
    edi = edi; /* 0x1216A4CB: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1216A4CD: push ebp */
    ebp = esp; /* 0x1216A4CE: mov ebp, esp */
    PUSH32(esp, esi); /* 0x1216A4D0: push esi */
    esi = MEM32(ebp + 0x8); /* 0x1216A4D1: mov esi, dword ptr [ebp + 8] */
    /* test esi, esi */ /* 0x1216A4D4: test esi, esi */
    _flag_a = (uint32_t)(esi); _flag_b = (uint32_t)(esi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1216A611; /* 0x1216A4D6: je 0x1216a611 */
L_1216A4DC:
    PUSH32(esp, edi); /* 0x1216A4DC: push edi */
    edi = MEM32(ebp + 0xC); /* 0x1216A4DD: mov edi, dword ptr [ebp + 0xc] */
    /* test edi, edi */ /* 0x1216A4E0: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1216A610; /* 0x1216A4E2: je 0x1216a610 */
L_1216A4E8:
    ecx = MEM32(ebp + 0x10); /* 0x1216A4E8: mov ecx, dword ptr [ebp + 0x10] */
    edx = ecx + 0x1; /* 0x1216A4EB: lea edx, [ecx + 1] */
L_1216A4EE:
    SET_LO8(eax, MEM8(ecx)); /* 0x1216A4EE: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1216A4F0: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1216A4F1: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1216A4EE; /* 0x1216A4F3: jne 0x1216a4ee */
L_1216A4F5:
    PUSH32(esp, ebx); /* 0x1216A4F5: push ebx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1216A4F6: sub ecx, edx */
    _flag_k = FK_CMP;
    ebx = ecx + 0x1; /* 0x1216A4F8: lea ebx, [ecx + 1] */
    PUSH32(esp, ebx); /* 0x1216A4FB: push ebx */
    PUSH32(esp, esi); /* 0x1216A4FC: push esi */
    RECOMP_CALL(sub_1217015D); /* 0x1216A4FD: call 0x1217015d */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0xA0) = eax; /* 0x1216A502: mov dword ptr [edi + 0xa0], eax */
    /* test eax, eax */ /* 0x1216A508: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1216A516; /* 0x1216A50A: jne 0x1216a516 */
L_1216A50C:
    PUSH32(esp, 0x12013A38u); /* 0x1216A50C: push 0x12013a38 */
    goto L_1216A61B; /* 0x1216A511: jmp 0x1216a61b */
L_1216A516:
    PUSH32(esp, ebx); /* 0x1216A516: push ebx */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1216A517: push dword ptr [ebp + 0x10] */
    PUSH32(esp, eax); /* 0x1216A51A: push eax */
    RECOMP_CALL(sub_121BF440); /* 0x1216A51B: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    eax = MEM32(ebp + 0x14); /* 0x1216A520: mov eax, dword ptr [ebp + 0x14] */
    ebx = MEM32(ebp + 0x20); /* 0x1216A523: mov ebx, dword ptr [ebp + 0x20] */
    ecx = MEM32(ebp + 0x24); /* 0x1216A526: mov ecx, dword ptr [ebp + 0x24] */
    MEM32(edi + 0xA4) = eax; /* 0x1216A529: mov dword ptr [edi + 0xa4], eax */
    eax = MEM32(ebp + 0x18); /* 0x1216A52F: mov eax, dword ptr [ebp + 0x18] */
    MEM32(edi + 0xA8) = eax; /* 0x1216A532: mov dword ptr [edi + 0xa8], eax */
    SET_LO8(eax, MEM8(ebp + 0x1C)); /* 0x1216A538: mov al, byte ptr [ebp + 0x1c] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1216A53B: add esp, 0xc */
    _flag_k = FK_ADD;
    MEM8(edi + 0xB4) = (uint8_t)(LO8(eax)); /* 0x1216A53E: mov byte ptr [edi + 0xb4], al */
    MEM8(edi + 0xB5) = (uint8_t)(LO8(ebx)); /* 0x1216A544: mov byte ptr [edi + 0xb5], bl */
    edx = ecx + 0x1; /* 0x1216A54A: lea edx, [ecx + 1] */
L_1216A54D:
    SET_LO8(eax, MEM8(ecx)); /* 0x1216A54D: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1216A54F: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1216A550: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1216A54D; /* 0x1216A552: jne 0x1216a54d */
L_1216A554:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1216A554: sub ecx, edx */
    _flag_k = FK_CMP;
    eax = ecx + 0x1; /* 0x1216A556: lea eax, [ecx + 1] */
    PUSH32(esp, eax); /* 0x1216A559: push eax */
    PUSH32(esp, esi); /* 0x1216A55A: push esi */
    MEM32(ebp + 0x10) = eax; /* 0x1216A55B: mov dword ptr [ebp + 0x10], eax */
    RECOMP_CALL(sub_1217015D); /* 0x1216A55E: call 0x1217015d */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0xAC) = eax; /* 0x1216A563: mov dword ptr [edi + 0xac], eax */
    /* test eax, eax */ /* 0x1216A569: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1216A577; /* 0x1216A56B: jne 0x1216a577 */
L_1216A56D:
    PUSH32(esp, 0x12013A14u); /* 0x1216A56D: push 0x12013a14 */
    goto L_1216A61B; /* 0x1216A572: jmp 0x1216a61b */
L_1216A577:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1216A577: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(ebp + 0x24)); /* 0x1216A57A: push dword ptr [ebp + 0x24] */
    PUSH32(esp, eax); /* 0x1216A57D: push eax */
    RECOMP_CALL(sub_121BF440); /* 0x1216A57E: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1216A583: add esp, 0xc */
    _flag_k = FK_ADD;
    eax = ebx * 4 + 0x4; /* 0x1216A586: lea eax, [ebx*4 + 4] */
    PUSH32(esp, eax); /* 0x1216A58D: push eax */
    PUSH32(esp, esi); /* 0x1216A58E: push esi */
    RECOMP_CALL(sub_1217015D); /* 0x1216A58F: call 0x1217015d */
    RECOMP_FLAGS_IN();
    MEM32(edi + 0xB0) = eax; /* 0x1216A594: mov dword ptr [edi + 0xb0], eax */
    /* test eax, eax */ /* 0x1216A59A: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1216A5A5; /* 0x1216A59C: jne 0x1216a5a5 */
L_1216A59E:
    PUSH32(esp, 0x120139ECu); /* 0x1216A59E: push 0x120139ec */
    goto L_1216A61B; /* 0x1216A5A3: jmp 0x1216a61b */
L_1216A5A5:
    _flag_a = (uint32_t)(MEM32(eax + ebx * 4)); _flag_b = (uint32_t)(0);
    MEM32(eax + ebx * 4) = MEM32(eax + ebx * 4) & 0; /* 0x1216A5A5: and dword ptr [eax + ebx*4], 0 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)(0); _flag_b = (uint32_t)(0);
    ebx = 0; /* 0x1216A5A9: xor ebx, ebx */
    _cf = 0;
    _flag_k = FK_TEST;
    /* cmp MEM32(ebp + 0x20), ebx */ /* 0x1216A5AB: cmp dword ptr [ebp + 0x20], ebx */
    _flag_a = (uint32_t)(MEM32(ebp + 0x20)); _flag_b = (uint32_t)(ebx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_LE(_flag_a, _flag_b)) goto L_1216A5FE; /* 0x1216A5AE: jle 0x1216a5fe */
L_1216A5B0:
    ecx = MEM32(ebp + 0x28); /* 0x1216A5B0: mov ecx, dword ptr [ebp + 0x28] */
    ecx = MEM32(ecx + ebx * 4); /* 0x1216A5B3: mov ecx, dword ptr [ecx + ebx*4] */
    edx = ecx + 0x1; /* 0x1216A5B6: lea edx, [ecx + 1] */
L_1216A5B9:
    SET_LO8(eax, MEM8(ecx)); /* 0x1216A5B9: mov al, byte ptr [ecx] */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(1);
    ecx = ecx + 1; /* 0x1216A5BB: inc ecx */
    _flag_k = FK_INC;
    /* test LO8(eax), LO8(eax) */ /* 0x1216A5BC: test al, al */
    _flag_a = (uint32_t)(LO8(eax)) << 24; _flag_b = (uint32_t)(LO8(eax)) << 24;
    _cf = 0;
    _flag_k = FK_NARROW(FK_TEST, 24);
    RECOMP_BACKEDGE();
    if (TEST_NZ(_flag_a, _flag_b)) goto L_1216A5B9; /* 0x1216A5BE: jne 0x1216a5b9 */
L_1216A5C0:
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(edx);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    ecx = ecx - edx; /* 0x1216A5C0: sub ecx, edx */
    _flag_k = FK_CMP;
    eax = ecx + 0x1; /* 0x1216A5C2: lea eax, [ecx + 1] */
    PUSH32(esp, eax); /* 0x1216A5C5: push eax */
    PUSH32(esp, esi); /* 0x1216A5C6: push esi */
    MEM32(ebp + 0x10) = eax; /* 0x1216A5C7: mov dword ptr [ebp + 0x10], eax */
    RECOMP_CALL(sub_1217015D); /* 0x1216A5CA: call 0x1217015d */
    RECOMP_FLAGS_IN();
    ecx = MEM32(edi + 0xB0); /* 0x1216A5CF: mov ecx, dword ptr [edi + 0xb0] */
    MEM32(ecx + ebx * 4) = eax; /* 0x1216A5D5: mov dword ptr [ecx + ebx*4], eax */
    ecx = MEM32(edi + 0xB0); /* 0x1216A5D8: mov ecx, dword ptr [edi + 0xb0] */
    /* cmp MEM32(ecx + ebx * 4), 0 */ /* 0x1216A5DE: cmp dword ptr [ecx + ebx*4], 0 */
    _flag_a = (uint32_t)(MEM32(ecx + ebx * 4)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1216A616; /* 0x1216A5E2: je 0x1216a616 */
L_1216A5E4:
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1216A5E4: push dword ptr [ebp + 0x10] */
    eax = MEM32(ebp + 0x28); /* 0x1216A5E7: mov eax, dword ptr [ebp + 0x28] */
    PUSH32(esp, MEM32(eax + ebx * 4)); /* 0x1216A5EA: push dword ptr [eax + ebx*4] */
    PUSH32(esp, MEM32(ecx + ebx * 4)); /* 0x1216A5ED: push dword ptr [ecx + ebx*4] */
    RECOMP_CALL(sub_121BF440); /* 0x1216A5F0: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0xCu);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0xCu; /* 0x1216A5F5: add esp, 0xc */
    _flag_k = FK_ADD;
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(1);
    ebx = ebx + 1; /* 0x1216A5F8: inc ebx */
    _flag_k = FK_INC;
    /* cmp ebx, MEM32(ebp + 0x20) */ /* 0x1216A5F9: cmp ebx, dword ptr [ebp + 0x20] */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(MEM32(ebp + 0x20));
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    RECOMP_BACKEDGE();
    if (CMP_L(_flag_a, _flag_b)) goto L_1216A5B0; /* 0x1216A5FC: jl 0x1216a5b0 */
L_1216A5FE:
    _flag_a = (uint32_t)((MEM32(edi + 0x8) | 0x400u)); _flag_b = (uint32_t)((MEM32(edi + 0x8) | 0x400u));
    MEM32(edi + 0x8) = MEM32(edi + 0x8) | 0x400u; /* 0x1216A5FE: or dword ptr [edi + 8], 0x400 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(edi + 0xB8) | 0x80u)); _flag_b = (uint32_t)((MEM32(edi + 0xB8) | 0x80u));
    MEM32(edi + 0xB8) = MEM32(edi + 0xB8) | 0x80u; /* 0x1216A605: or dword ptr [edi + 0xb8], 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
L_1216A60F:
    ebx = POP32_VAL(esp); /* 0x1216A60F: pop ebx */
L_1216A610:
    edi = POP32_VAL(esp); /* 0x1216A610: pop edi */
L_1216A611:
    esi = POP32_VAL(esp); /* 0x1216A611: pop esi */
    ebp = POP32_VAL(esp); /* 0x1216A612: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 40; { RECOMP_REGS_OUT(); return; } /* 0x1216A613: ret 0x24 */
L_1216A616:
    PUSH32(esp, 0x120139C4u); /* 0x1216A616: push 0x120139c4 */
L_1216A61B:
    PUSH32(esp, esi); /* 0x1216A61B: push esi */
    RECOMP_CALL(sub_121687E9); /* 0x1216A61C: call 0x121687e9 */
    RECOMP_FLAGS_IN();
    RECOMP_BACKEDGE();
    goto L_1216A60F; /* 0x1216A621: jmp 0x1216a60f */
    { RECOMP_REGS_OUT(); return; } /* end of function */
    RECOMP_REGS_OUT();
}

void sub_1216A628(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1216A628u);

L_1216A628:
    edi = edi; /* 0x1216A628: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1216A62A: push ebp */
    ebp = esp; /* 0x1216A62B: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1216A62D: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1216A65C; /* 0x1216A631: je 0x1216a65c */
L_1216A633:
    ecx = MEM32(ebp + 0xC); /* 0x1216A633: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x1216A636: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1216A65C; /* 0x1216A638: je 0x1216a65c */
L_1216A63A:
    fp_push(*(double*)ADDR(ebp + 0x14)); /* 0x1216A63A: fld qword ptr [ebp + 0x14] */
    SET_LO8(eax, MEM8(ebp + 0x10)); /* 0x1216A63D: mov al, byte ptr [ebp + 0x10] */
    _flag_a = (uint32_t)((MEM32(ecx + 0x8) | 0x4000u)); _flag_b = (uint32_t)((MEM32(ecx + 0x8) | 0x4000u));
    MEM32(ecx + 0x8) = MEM32(ecx + 0x8) | 0x4000u; /* 0x1216A640: or dword ptr [ecx + 8], 0x4000 */
    _cf = 0;
    _flag_k = FK_TEST;
    { double _v = fp_pop(); *(double*)ADDR(ecx + 0xE0) = _v; } /* 0x1216A647: fstp qword ptr [ecx + 0xe0] */
    fp_push(*(double*)ADDR(ebp + 0x1C)); /* 0x1216A64D: fld qword ptr [ebp + 0x1c] */
    MEM8(ecx + 0xDC) = (uint8_t)(LO8(eax)); /* 0x1216A650: mov byte ptr [ecx + 0xdc], al */
    { double _v = fp_pop(); *(double*)ADDR(ecx + 0xE8) = _v; } /* 0x1216A656: fstp qword ptr [ecx + 0xe8] */
L_1216A65C:
    ebp = POP32_VAL(esp); /* 0x1216A65C: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 32; { RECOMP_REGS_OUT(); return; } /* 0x1216A65D: ret 0x1c */
    RECOMP_REGS_OUT();
}

void sub_1216A665(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1216A665u);

L_1216A665:
    edi = edi; /* 0x1216A665: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1216A667: push ebp */
    ebp = esp; /* 0x1216A668: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1216A66A: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1216A690; /* 0x1216A66E: je 0x1216a690 */
L_1216A670:
    ecx = MEM32(ebp + 0xC); /* 0x1216A670: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x1216A673: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1216A690; /* 0x1216A675: je 0x1216a690 */
L_1216A677:
    eax = MEM32(ebp + 0x10); /* 0x1216A677: mov eax, dword ptr [ebp + 0x10] */
    _flag_a = (uint32_t)((MEM32(ecx + 0x8) | 0x80u)); _flag_b = (uint32_t)((MEM32(ecx + 0x8) | 0x80u));
    MEM32(ecx + 0x8) = MEM32(ecx + 0x8) | 0x80u; /* 0x1216A67A: or dword ptr [ecx + 8], 0x80 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM32(ecx + 0x70) = eax; /* 0x1216A681: mov dword ptr [ecx + 0x70], eax */
    eax = MEM32(ebp + 0x14); /* 0x1216A684: mov eax, dword ptr [ebp + 0x14] */
    MEM32(ecx + 0x74) = eax; /* 0x1216A687: mov dword ptr [ecx + 0x74], eax */
    SET_LO8(eax, MEM8(ebp + 0x18)); /* 0x1216A68A: mov al, byte ptr [ebp + 0x18] */
    MEM8(ecx + 0x78) = (uint8_t)(LO8(eax)); /* 0x1216A68D: mov byte ptr [ecx + 0x78], al */
L_1216A690:
    ebp = POP32_VAL(esp); /* 0x1216A690: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 24; { RECOMP_REGS_OUT(); return; } /* 0x1216A691: ret 0x14 */
    RECOMP_REGS_OUT();
}

void sub_1216A699(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1216A699u);

L_1216A699:
    edi = edi; /* 0x1216A699: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1216A69B: push ebp */
    ebp = esp; /* 0x1216A69C: mov ebp, esp */
    PUSH32(esp, edi); /* 0x1216A69E: push edi */
    edi = MEM32(ebp + 0x8); /* 0x1216A69F: mov edi, dword ptr [ebp + 8] */
    /* test edi, edi */ /* 0x1216A6A2: test edi, edi */
    _flag_a = (uint32_t)(edi); _flag_b = (uint32_t)(edi);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1216A716; /* 0x1216A6A4: je 0x1216a716 */
L_1216A6A6:
    PUSH32(esp, ebx); /* 0x1216A6A6: push ebx */
    ebx = MEM32(ebp + 0xC); /* 0x1216A6A7: mov ebx, dword ptr [ebp + 0xc] */
    /* test ebx, ebx */ /* 0x1216A6AA: test ebx, ebx */
    _flag_a = (uint32_t)(ebx); _flag_b = (uint32_t)(ebx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1216A715; /* 0x1216A6AC: je 0x1216a715 */
L_1216A6AE:
    PUSH32(esp, esi); /* 0x1216A6AE: push esi */
    PUSH32(esp, 0); /* 0x1216A6AF: push 0 */
    PUSH32(esp, 0x1000u); /* 0x1216A6B1: push 0x1000 */
    PUSH32(esp, ebx); /* 0x1216A6B6: push ebx */
    PUSH32(esp, edi); /* 0x1216A6B7: push edi */
    RECOMP_CALL(sub_12168A5C); /* 0x1216A6B8: call 0x12168a5c */
    RECOMP_FLAGS_IN();
    esi = 0x300u; /* 0x1216A6BD: mov esi, 0x300 */
    PUSH32(esp, esi); /* 0x1216A6C2: push esi */
    PUSH32(esp, edi); /* 0x1216A6C3: push edi */
    RECOMP_CALL(sub_1217015D); /* 0x1216A6C4: call 0x1217015d */
    RECOMP_FLAGS_IN();
    PUSH32(esp, esi); /* 0x1216A6C9: push esi */
    PUSH32(esp, 0); /* 0x1216A6CA: push 0 */
    PUSH32(esp, eax); /* 0x1216A6CC: push eax */
    MEM32(edi + 0x114) = eax; /* 0x1216A6CD: mov dword ptr [edi + 0x114], eax */
    RECOMP_CALL(sub_121BF434); /* 0x1216A6D3: call 0x121bf434 */
    RECOMP_FLAGS_IN();
    esi = MEM32(ebp + 0x14); /* 0x1216A6D8: mov esi, dword ptr [ebp + 0x14] */
    eax = esi; /* 0x1216A6DB: mov eax, esi */
    eax = (uint32_t)((int32_t)eax * (int32_t)3); /* 0x1216A6DD: imul eax, eax, 3 */
    PUSH32(esp, eax); /* 0x1216A6E0: push eax */
    PUSH32(esp, MEM32(ebp + 0x10)); /* 0x1216A6E1: push dword ptr [ebp + 0x10] */
    PUSH32(esp, MEM32(edi + 0x114)); /* 0x1216A6E4: push dword ptr [edi + 0x114] */
    RECOMP_CALL(sub_121BF440); /* 0x1216A6EA: call 0x121bf440 */
    RECOMP_FLAGS_IN();
    eax = MEM32(edi + 0x114); /* 0x1216A6EF: mov eax, dword ptr [edi + 0x114] */
    _flag_a = (uint32_t)(esp); _flag_b = (uint32_t)(0x18u);
    _cf = (uint32_t)((uint32_t)(_flag_a + _flag_b) < (uint32_t)_flag_a);
    esp = esp + 0x18u; /* 0x1216A6F5: add esp, 0x18 */
    _flag_k = FK_ADD;
    MEM32(ebx + 0x10) = eax; /* 0x1216A6F8: mov dword ptr [ebx + 0x10], eax */
    MEM16(edi + 0x118) = (uint16_t)(LO16(esi)); /* 0x1216A6FB: mov word ptr [edi + 0x118], si */
    _flag_a = (uint32_t)((MEM32(ebx + 0xB8) | 0x1000u)); _flag_b = (uint32_t)((MEM32(ebx + 0xB8) | 0x1000u));
    MEM32(ebx + 0xB8) = MEM32(ebx + 0xB8) | 0x1000u; /* 0x1216A702: or dword ptr [ebx + 0xb8], 0x1000 */
    _cf = 0;
    _flag_k = FK_TEST;
    _flag_a = (uint32_t)((MEM32(ebx + 0x8) | 8)); _flag_b = (uint32_t)((MEM32(ebx + 0x8) | 8));
    MEM32(ebx + 0x8) = MEM32(ebx + 0x8) | 8; /* 0x1216A70C: or dword ptr [ebx + 8], 8 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM16(ebx + 0x14) = (uint16_t)(LO16(esi)); /* 0x1216A710: mov word ptr [ebx + 0x14], si */
    esi = POP32_VAL(esp); /* 0x1216A714: pop esi */
L_1216A715:
    ebx = POP32_VAL(esp); /* 0x1216A715: pop ebx */
L_1216A716:
    edi = POP32_VAL(esp); /* 0x1216A716: pop edi */
    ebp = POP32_VAL(esp); /* 0x1216A717: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 20; { RECOMP_REGS_OUT(); return; } /* 0x1216A718: ret 0x10 */
    RECOMP_REGS_OUT();
}

void sub_1216A720(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1216A720u);

L_1216A720:
    edi = edi; /* 0x1216A720: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1216A722: push ebp */
    ebp = esp; /* 0x1216A723: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1216A725: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1216A742; /* 0x1216A729: je 0x1216a742 */
L_1216A72B:
    eax = MEM32(ebp + 0xC); /* 0x1216A72B: mov eax, dword ptr [ebp + 0xc] */
    /* test eax, eax */ /* 0x1216A72E: test eax, eax */
    _flag_a = (uint32_t)(eax); _flag_b = (uint32_t)(eax);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1216A742; /* 0x1216A730: je 0x1216a742 */
L_1216A732:
    PUSH32(esp, esi); /* 0x1216A732: push esi */
    esi = MEM32(ebp + 0x10); /* 0x1216A733: mov esi, dword ptr [ebp + 0x10] */
    PUSH32(esp, edi); /* 0x1216A736: push edi */
    edi = eax + 0x44; /* 0x1216A737: lea edi, [eax + 0x44] */
    MEM32(edi) = MEM32(esi); esi += _df * 4; edi += _df * 4; /* 0x1216A73A: movsd dword ptr es:[edi], dword ptr [esi] */
    MEM8(edi) = MEM8(esi); esi += _df; edi += _df; /* 0x1216A73B: movsb byte ptr es:[edi], byte ptr [esi] */
    _flag_a = (uint32_t)((MEM32(eax + 0x8) | 2)); _flag_b = (uint32_t)((MEM32(eax + 0x8) | 2));
    MEM32(eax + 0x8) = MEM32(eax + 0x8) | 2; /* 0x1216A73C: or dword ptr [eax + 8], 2 */
    _cf = 0;
    _flag_k = FK_TEST;
    edi = POP32_VAL(esp); /* 0x1216A740: pop edi */
    esi = POP32_VAL(esp); /* 0x1216A741: pop esi */
L_1216A742:
    ebp = POP32_VAL(esp); /* 0x1216A742: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1216A743: ret 0xc */
    RECOMP_REGS_OUT();
}

void sub_1216A74B(void) {
    uint32_t _cf = 0;
    int _df = 1;
    uint32_t _flag_k = FK_NONE;
    uint32_t _flag_a = 0, _flag_b = 0;
    uint32_t _itail_tgt = 0;
    RECOMP_REGS_LOCALS
    RECOMP_ENTER(0x1216A74Bu);

L_1216A74B:
    edi = edi; /* 0x1216A74B: mov edi, edi */
    PUSH32(esp, ebp); /* 0x1216A74D: push ebp */
    ebp = esp; /* 0x1216A74E: mov ebp, esp */
    /* cmp MEM32(ebp + 0x8), 0 */ /* 0x1216A750: cmp dword ptr [ebp + 8], 0 */
    _flag_a = (uint32_t)(MEM32(ebp + 0x8)); _flag_b = (uint32_t)(0);
    _cf = (uint32_t)CMP_B(_flag_a, _flag_b);
    _flag_k = FK_CMP;
    if (CMP_EQ(_flag_a, _flag_b)) goto L_1216A76A; /* 0x1216A754: je 0x1216a76a */
L_1216A756:
    ecx = MEM32(ebp + 0xC); /* 0x1216A756: mov ecx, dword ptr [ebp + 0xc] */
    /* test ecx, ecx */ /* 0x1216A759: test ecx, ecx */
    _flag_a = (uint32_t)(ecx); _flag_b = (uint32_t)(ecx);
    _cf = 0;
    _flag_k = FK_TEST;
    if (TEST_Z(_flag_a, _flag_b)) goto L_1216A76A; /* 0x1216A75B: je 0x1216a76a */
L_1216A75D:
    SET_LO8(eax, MEM8(ebp + 0x10)); /* 0x1216A75D: mov al, byte ptr [ebp + 0x10] */
    _flag_a = (uint32_t)((MEM32(ecx + 0x8) | 0x800u)); _flag_b = (uint32_t)((MEM32(ecx + 0x8) | 0x800u));
    MEM32(ecx + 0x8) = MEM32(ecx + 0x8) | 0x800u; /* 0x1216A760: or dword ptr [ecx + 8], 0x800 */
    _cf = 0;
    _flag_k = FK_TEST;
    MEM8(ecx + 0x2C) = (uint8_t)(LO8(eax)); /* 0x1216A767: mov byte ptr [ecx + 0x2c], al */
L_1216A76A:
    ebp = POP32_VAL(esp); /* 0x1216A76A: pop ebp */
    RECOMP_FLAGS_OUT(); esp += 16; { RECOMP_REGS_OUT(); return; } /* 0x1216A76B: ret 0xc */
    RECOMP_REGS_OUT();
}
